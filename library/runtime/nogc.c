/* This file is part of the Cyclone Library.
   Copyright (C) 2001 AT&T

   This library is free software; you can redistribute it and/or it
   under the terms of the GNU Lesser General Public License as
   published by the Free Software Foundation; either version 2.1 of
   the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with this library; see the file COPYING.LIB.  If not,
   write to the Free Software Foundation, Inc., 59 Temple Place, Suite
   330, Boston, MA 02111-1307 USA. */

#include <stddef.h>  // for size_t

#ifdef CYC_REGION_PROFILE
#undef GC_malloc
#undef GC_malloc_atomic
#undef GC_free
#undef GC_size

#elif (defined(__linux__) && defined(__KERNEL__))

#include <asm/pgtable.h>
#include <linux/highmem.h> /* several arch define VMALLOC_END via PKMAP_BASE */
#include <linux/kernel.h>
#include <linux/mm.h>
#include <linux/string.h>

extern void *kmalloc(size_t, int);
extern void *__vmalloc(unsigned long size, int gfp_mask, pgprot_t prot);
extern void kfree(const void *);
extern void vfree(const void *);

#define calloc cyc_kcalloc
#define realloc cyc_krealloc
#define free kfree
// forward decls
static void *cyc_kcalloc(size_t s, int mult);
void *cyc_krealloc(void *ptr, size_t oldsize, size_t newsize);
#endif

void *cyc_vmalloc(size_t s);
void cyc_vfree(void *ptr);

/****************************************************************************/
/* Stuff that's shared amongst all the different ways to implement malloc() */
/****************************************************************************/

/* These type/macro defns are taken from gc/include/gc.h and must
   be kept in sync. */
typedef unsigned long GC_word;
typedef void (*GC_warn_proc)(char *msg, GC_word arg);
typedef void *GC_PTR;
typedef void (*GC_finalization_proc)(GC_PTR obj, GC_PTR client_data);

/* total number of bytes allocated */
static size_t total_bytes_allocd = 0;

GC_word GC_gc_no = 0;
int GC_dont_expand = 0;
int GC_use_entire_heap = 0;
static void *GC_spare_memory;

size_t GC_get_total_bytes() { return total_bytes_allocd; }

void GC_set_max_heap_size(GC_word sz) {}

void GC_default_warn_proc(char *msg, GC_word arg) {}

void GC_set_warn_proc(GC_warn_proc p) {}

void GC_register_finalizer_no_order(GC_PTR obj, GC_finalization_proc fn, GC_PTR cd,
                                    GC_finalization_proc *ofn, GC_PTR *ocd) {}

#if !defined(GEEKOS)

/* This is the platform default allocator (malloc) */

#include <stdlib.h>

#include "precore_c.h"

typedef struct GC_head {
  __attribute__((aligned)) size_t size;
} GC_head;

void GC_init(void) {
  /* 4MiB of spare memory in case of OOM. */
  GC_spare_memory = GC_malloc_atomic(4 * 1024 * 1024);
}

size_t GC_size(void const *x) {
  GC_head const *p = x;

  return p[-1].size;
}

size_t GC_get_heap_size(void) { return 0; }

size_t GC_get_free_bytes(void) { return 0; }

void GC_free(void *x) {
  GC_head *p = x;

  free(p - 1);
}

static void out_of_memory(void) {
  // Free some amount of reserved memory so that the exception
  // handler has some free space.
  GC_free(GC_spare_memory);
  GC_spare_memory = NULL;
  _throw_badalloc();
}

void *GC_malloc(size_t x) {
  // FIX:  I'm calling calloc to ensure the memory is zero'd.  This
  // is because I had to define GC_calloc in runtime_memory.c
  GC_head *p = calloc(1, sizeof *p + x + 1);

  if (!p)
    out_of_memory();

  p->size = x;
  ++p;
  total_bytes_allocd += GC_size(p);
  return p;
}

void *GC_malloc_atomic(size_t x) {
  // FIX:  I'm calling calloc to ensure the memory is zero'd.  This
  // is because I had to define GC_calloc in runtime_memory.c
  GC_head *p = calloc(1, sizeof *p + x + 1);

  if (!p)
    out_of_memory();

  p->size = x;
  ++p;
  total_bytes_allocd += GC_size(p);
  return p;
}

void *GC_realloc(void *x, size_t n) {
  size_t sz = GC_size(x);
  GC_head *p = x;

  p--;

#if (defined(__linux__) && defined(__KERNEL__))
  p = realloc(p, sz, n);
#else
  p = realloc(p, n);
#endif
  if (!p)
    out_of_memory();

  p->size = n;

  total_bytes_allocd += n - sz;

  return p + 1;
}

#if (defined(__linux__) && defined(__KERNEL__))
static void *cyc_kcalloc(size_t s, int mult) {
  int alloc_size = s * mult;
  void *res = kmalloc(alloc_size, GFP_KERNEL);  // look at multiple allocation modes

  memset(res, '\0', alloc_size);
  return res;
}

void *cyc_krealloc(void *ptr, size_t oldsize, size_t newsize) {
  if (!ptr)
    return kmalloc(newsize, GFP_KERNEL);
  if (!newsize) {
    kfree(ptr);
    return 0;  //?
  }
  void *res = kmalloc(newsize, GFP_KERNEL);
  memcpy(res, ptr, oldsize);
  kfree(ptr);
  total_bytes_allocd = total_bytes_allocd + newsize - oldsize;
  malloc_sizeb(p, newsize);
}

void *cyc_vmalloc(size_t s) {
  void *mem = __vmalloc(s, GFP_KERNEL | __GFP_HIGHMEM, PAGE_KERNEL);

  if (mem)
    memset(mem, 0, s); /* Clear the ram out, no junk to the user */
  return mem;
}

void cyc_vfree(void *mem) {
  if (mem)
    vfree(mem);
}

#else

void *cyc_vmalloc(size_t s) { return GC_malloc(s); }

void cyc_vfree(void *ptr) { GC_free(ptr); }

#endif

#else /* defined(GEEKOS) */

#include <geekos/bget.h>
#include <geekos/int.h>
#include <stddef.h>  // needed for size_t

#if defined(CYC_REGION_PROFILE)
#error "Region profiling not supported for GeekOS (no GC_size function)"
#endif

size_t GC_get_heap_size() {
  bool iflag;
  bufsize allocsize, freesize, ign2, ign3, ign4;

  iflag = Begin_Int_Atomic();
  bstats(&allocsize, &freesize, &ign2, &ign3, &ign4);
  End_Int_Atomic(iflag);

  return allocsize + freesize;
}

size_t GC_get_free_bytes() {
  bool iflag;
  bufsize freesize, ign1, ign2, ign3, ign4;

  iflag = Begin_Int_Atomic();
  bstats(&ign1, &freesize, &ign2, &ign3, &ign4);
  End_Int_Atomic(iflag);

  return freesize;
}

void *GC_malloc(int x) {
  bool iflag;
  void *result;

  KASSERT(x > 0);

  iflag = Begin_Int_Atomic();
  /* FIX: I'm calling bgetz to ensure the memory is zero'd.  This is
   * because I had to define GC_calloc in runtime_memory.c */
  result = bgetz(x);
  total_bytes_allocd += x; /* FIX: include overhead? */
  End_Int_Atomic(iflag);

  return result;
}

void *GC_malloc_atomic(int x) { return GC_malloc(x); }

void *GC_realloc(void *x, size_t n) {
  bool iflag;
  void *result;

  KASSERT(n > 0);

  iflag = Begin_Int_Atomic();
  /* FIX: I'm calling bgetz to ensure the memory is zero'd.  This is
   * because I had to define GC_calloc in runtime_memory.c */
  result = bgetr(x, n);
  total_bytes_allocd += n; /* FIX: subtract old size, add overhead */
  End_Int_Atomic(iflag);

  return result;
}

void GC_free(void *x) {
  bool iflag;

  iflag = Begin_Int_Atomic();
  brel(x);
  End_Int_Atomic(iflag);
}

#endif
