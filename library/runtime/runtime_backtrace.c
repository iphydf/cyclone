/*
 * A hacky replacement for backtrace_symbols in glibc
 *
 * backtrace_symbols in glibc looks up symbols using dladdr which is limited in
 * the symbols that it sees. libbacktracesymbols opens the executable and shared
 * libraries using libbfd and will look up backtrace information using the symbol
 * table and the dwarf line information.
 *
 * It may make more sense for this program to use libelf instead of libbfd.
 * However, I have not investigated that yet.
 *
 * Derived from addr2line.c from GNU Binutils by Jeff Muizelaar
 *
 * Copyright 2007 Jeff Muizelaar
 */

/* addr2line.c -- convert addresses to line number and function name
 * Copyright 1997, 1998, 1999, 2000, 2001, 2002 Free Software Foundation, Inc.
 * Contributed by Ulrich Lauther <Ulrich.Lauther@mchp.siemens.de>
 *
 * This file was part of GNU Binutils.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, 51 Franklin Street, Suite 500, Boston, MA 02110-1335, USA.  */

#define fatal(a, b) exit(1)
#define bfd_fatal(a) exit(1)
#define bfd_nonfatal(a) exit(1)
#define list_matching_formats(a) exit(1)

/* 2 characters for each byte, plus 1 each for 0, x, and NULL */
#define PTRSTR_LEN (sizeof(void *) * 2 + 3)
#define true 1
#define false 0

#define _GNU_SOURCE
#include <bfd.h>
#include <dlfcn.h>
#include <execinfo.h>
#include <link.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "precore_c.h"

struct dbfd {
  void (*init)(void);
  bfd_vma (*scan_vma)(const char *string, const char **end, int base);
  bfd *(*openr)(const char *filename, const char *target);
  bfd_boolean (*check_format)(bfd *abfd, bfd_format format);
  bfd_boolean (*check_format_matches)(bfd *abfd, bfd_format format, char ***matching);
  bfd_boolean (*close)(bfd *abfd);
  bfd_boolean (*map_over_sections)(bfd *abfd, void (*func)(bfd *abfd, asection *sect, void *obj),
                                   void *obj);
} dbfd;

static void load_funcs(void) {
  void *handle = dlopen("libbfd.so", RTLD_NOW);
  if (!handle) return;

  dbfd.init = dlsym(handle, "bfd_init");
  dbfd.scan_vma = dlsym(handle, "bfd_scan_vma");
  dbfd.openr = dlsym(handle, "bfd_openr");
  dbfd.check_format = dlsym(handle, "bfd_check_format");
  dbfd.check_format_matches = dlsym(handle, "bfd_check_format_matches");
  dbfd.close = dlsym(handle, "bfd_close");
  dbfd.map_over_sections = dlsym(handle, "bfd_map_over_sections");
}

static void dbfd_init(void) {
  load_funcs();
  if (!dbfd.init) _throw_null();
  dbfd.init();
}

#define bfd_init dbfd_init
#define bfd_scan_vma dbfd.scan_vma
#define bfd_openr dbfd.openr
#define bfd_check_format dbfd.check_format
#define bfd_check_format_matches dbfd.check_format_matches
#define bfd_close dbfd.close
#define bfd_map_over_sections dbfd.map_over_sections

static void find_address_in_section(bfd *abfd, asection *section, void *data);

/* Read in the symbol table.  */
static asymbol **slurp_symtab(bfd *abfd) {
  asymbol **syms; /* Symbol table.  */

  long symcount;
  unsigned int size;

  if ((bfd_get_file_flags(abfd) & HAS_SYMS) == 0) return 0;

  symcount = bfd_read_minisymbols(abfd, false, (PTR)&syms, &size);
  if (symcount == 0) symcount = bfd_read_minisymbols(abfd, true /* dynamic */, (PTR)&syms, &size);

  if (symcount < 0) bfd_fatal(bfd_get_filename(abfd));

  return syms;
}

/* This struct is used to pass information between
 * translate_addresses and find_address_in_section.  */
struct env {
  bfd_vma pc;
  const char *filename;
  const char *functionname;
  unsigned int line;
  int found;
  asymbol **syms;
};

/* Look for an address in a section.  This is called via
 * bfd_map_over_sections.  */
static void find_address_in_section(bfd *abfd, asection *section, void *data) {
  struct env *env = data;
  bfd_vma vma;
  bfd_size_type size;

  if (env->found) return;

  if ((bfd_get_section_flags(abfd, section) & SEC_ALLOC) == 0) return;

  vma = bfd_get_section_vma(abfd, section);
  if (env->pc < vma) return;

  size = bfd_section_size(abfd, section);
  if (env->pc >= vma + size) return;

  env->found = bfd_find_nearest_line(abfd, section, env->syms, env->pc - vma, &env->filename,
                                     &env->functionname, &env->line);
}

static char **translate_addresses(bfd *abfd, bfd_vma *addr, int naddr, asymbol **syms) {
  int naddr_orig = naddr;
  char b;
  int total = 0;

  enum { Count, Print } state;

  char *buf = &b;
  int len = 0;
  char **ret_buf = NULL;

  /* iterate over the formating twice.
   * the first time we count how much space we need
   * the second time we do the actual printing */
  for (state = Count; state <= Print; state++) {
    if (state == Print) {
      ret_buf = malloc(total + sizeof(char *) * naddr);
      buf = (char *)(ret_buf + naddr);
      len = total;
    }
    while (naddr) {
      struct env env;
      env.syms = syms;

      if (state == Print) ret_buf[naddr - 1] = buf;
      env.pc = addr[naddr - 1];

      env.found = false;
      bfd_map_over_sections(abfd, find_address_in_section, (PTR)&env);

      if (!env.found)
        total += snprintf(buf, len, "[0x%lx] \?\?() \?\?:0", (unsigned long)addr[naddr - 1]) + 1;
      else {
        const char *name = env.functionname;
        if (name == NULL || *name == '\0') name = "??";
        if (env.filename != NULL) {
          const char *h;

          h = strrchr(env.filename, '/');
          if (h != NULL) env.filename = h + 1;
        }
        total +=
            snprintf(buf, len, "%s:%u\t%s()", env.filename ? env.filename : "??", env.line, name) +
            1;
      }
      if (state == Print) /* set buf just past the end of string */
        buf = buf + total + 1;
      naddr--;
    }
    naddr = naddr_orig;
  }
  return ret_buf;
}

/* Process a file.  */

static char **process_file(const char *file_name, bfd_vma *addr, int naddr) {
  bfd *abfd;
  char **matching;
  char **ret_buf;

  abfd = bfd_openr(file_name, NULL);

  if (abfd == NULL) bfd_fatal(file_name);

  if (bfd_check_format(abfd, bfd_archive))
    fatal("%s: can not get addresses from archive", file_name);

  if (!bfd_check_format_matches(abfd, bfd_object, &matching)) {
    bfd_nonfatal(bfd_get_filename(abfd));
    if (bfd_get_error() == bfd_error_file_ambiguously_recognized) {
      list_matching_formats(matching);
      free(matching);
    }
    exit(1);
  }

  asymbol **syms = slurp_symtab(abfd);

  ret_buf = translate_addresses(abfd, addr, naddr, syms);

  free(syms);
  syms = NULL;

  bfd_close(abfd);
  return ret_buf;
}

#define MAX_DEPTH 16

struct file_match {
  const char *file;
  void *address;
  void *base;
  void *hdr;
};

static int find_matching_file(struct dl_phdr_info *info, size_t size, void *data) {
  struct file_match *match = data;
  /* This code is modeled from Gfind_proc_info-lsb.c:callback() from libunwind */
  long n;

  const ElfW(Phdr) * phdr;
  ElfW(Addr) load_base = info->dlpi_addr;
  phdr = info->dlpi_phdr;
  for (n = info->dlpi_phnum; --n >= 0; phdr++)
    if (phdr->p_type == PT_LOAD) {
      ElfW(Addr) vaddr = phdr->p_vaddr + load_base;
      if ((ElfW(Addr))match->address >= vaddr &&
          (ElfW(Addr))match->address < vaddr + phdr->p_memsz) {
        /* we found a match */
        match->file = info->dlpi_name;
        match->base = (void *)info->dlpi_addr;
      }
    }
  return 0;
}

char **backtrace_symbols(void *const *buffer, int size) {
  int stack_depth = size - 1;
  int x, y;
  /* discard calling function */
  int total = 0;

  char ***locations;
  char ** final;
  char *f_strings;

  locations = malloc(sizeof(char **) * (stack_depth + 1));

  bfd_init();
  for (x = stack_depth, y = 0; x >= 0; x--, y++) {
    struct file_match match;
    char **ret_buf;
    bfd_vma addr;

    match.address = buffer[x];

    dl_iterate_phdr(find_matching_file, &match);
    addr = buffer[x] - match.base;

    if (match.file && strlen(match.file))
      ret_buf = process_file(match.file, &addr, 1);
    else
      ret_buf = process_file("/proc/self/exe", &addr, 1);

    locations[x] = ret_buf;
    total += strlen(ret_buf[0]) + 1;
  }

  /* allocate the array of char* we are going to return and extra space for
   * all of the strings */
  final = malloc(total + (stack_depth + 1) * sizeof(char *));
  /* get a pointer to the extra space */
  f_strings = (char *)(final + stack_depth + 1);

  /* fill in all of strings and pointers */
  for (x = stack_depth; x >= 0; x--) {
    strcpy(f_strings, locations[x][0]);
    free(locations[x]);
    final[x] = f_strings;
    f_strings += strlen(f_strings) + 1;
  }

  free(locations);

  return final;
}

void backtrace_symbols_fd(void *const *buffer, int size, int fd) {
  int j;
  char **strings;

  strings = backtrace_symbols(buffer, size);
  if (strings == NULL) {
    perror("backtrace_symbols");
    exit(EXIT_FAILURE);
  }

  for (j = 0; j < size; j++) printf("%s\n", strings[j]);

  free(strings);
}
