#define _GNU_SOURCE
#include <ctype.h>
#include <dlfcn.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "backtrace.h"

// Demangles Cyclone symbol names.
//
// Example:
//    Cyc_Core_print_stacktrace -> Core::print_stacktrace
//    Cyc_Tcexp_List_tcNew -> Tcexp::List::tcNew
//    main -> main
//    Cyc_main -> ::main
static void cyc_print_symbol(const char *name) {
  if (name == NULL) {
    fputs("<unknown>", stderr);
    return;
  }

  // If it doesn't start with Cyc_, then it's not a Cyclone symbol.
  if (strncmp(name, "Cyc_", 4) != 0) {
    fputs(name, stderr);
    return;
  }

  // Skip the "Cyc_" prefix.
  name += 4;

  if (islower(name[0])) {
    fprintf(stderr, "::%s", name);
    return;
  }

  while (*name) {
    if (*name == '_') {
      fputs("::", stderr);
      if (islower(name[1])) {
        ++name;
        break;
      }
    } else {
      fputc(*name, stderr);
    }
    ++name;
  }

  fputs(name, stderr);
}

static int cyc_backtrace_full_callback(void *data, uintptr_t pc, const char *filename, int lineno,
                                       const char *function) {
  Dl_info info;
  if (dladdr((void *)pc, &info) != 0) {
    pc -= (uintptr_t)info.dli_fbase;
  }

  const char proc_dir[] = "/proc/self/cwd/";
  if (filename != NULL && strncmp(filename, proc_dir, sizeof(proc_dir) - 1) == 0) {
    filename += sizeof(proc_dir) - 1;
  }

  fprintf(stderr, "    0x%lx: ", (unsigned long)pc);
  cyc_print_symbol(function);
  if (filename != NULL) {
    fprintf(stderr, " (%s:%d)", filename, lineno);
  }
  fputc('\n', stderr);

  return 0;
}

static void cyc_backtrace_error_callback(void *data, const char *msg, int errnum) {
  fprintf(stderr, "Error: %s (%d)\n", msg, errnum);
}

void Cyc_Execinfo_print_stacktrace(void) {
  struct backtrace_state *state = backtrace_create_state(NULL, 0, NULL, NULL);
  if (state == NULL) {
    fputs("Failed to create backtrace state\n", stderr);
    return;
  }

  backtrace_full(state, 1, cyc_backtrace_full_callback, cyc_backtrace_error_callback, NULL);
}
