/* This file is part of the Cyclone Library.
   Copyright (C) 2004 Dan Grossman, AT&T

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
#ifndef RUNTIME_INTERNAL_H
#define RUNTIME_INTERNAL_H

/************* PLATFORM-SPECIFIC ELEMENTS *****************/

#include <limits.h>  // for magic numbers

// error printing functions
#define errprintf(arg...) fprintf(stderr, ##arg)
#define errquit(arg...)     \
  do {                      \
    fprintf(stderr, ##arg); \
    exit(1);                \
  } while (0)

#define MAX_ALLOC_SIZE INT_MAX

// only need things here that are not in cyc_include.h, which end up
// included because of the following:

// The C include file precore_c.h is produced (semi) automatically
// from the Cyclone include file core.h.  Note, it now includes
// the contents of cyc_include.h

/* RUNTIME_CYC defined to prevent including parts of precore_c.h that
   might cause problems, particularly relating to region profiling */
#define RUNTIME_CYC
#include "precore_c.h"

/************** INIT and FINI ROUTINES ************/

/* These should be called before executing any Cyclone code from C.
   Only call them once (see runtime_cyc.c). */

extern void _init_exceptions();  // defined in runtime_exception.c
extern void _init_regions();     // defined in runtime_memory.c
extern void _init_stack();       // defined in runtime_stack.c

/* This is called when the program is finished, to finalize
   any profiling or other bookkeeping. */
extern void _fini_regions();  // defined in runtime_memory.c

/*************** STACK ROUTINES *******************/

// stack tags
#define EXCEPTION_HANDLER 0
#define LIFO_REGION 1

// pushes a frame on the stack
void _push_frame(struct _RuntimeStack *frame);

// pop N+1 frames from the stack (error if stack_size < N+1)
void _npop_frame(unsigned int n);

// returns top frame on the stack (NULL if stack is empty)
struct _RuntimeStack *_top_frame();

// pops off frames until a frame with the given tag is reached.  This
// frame is returned, or else NULL if none found.
struct _RuntimeStack *_pop_frame_until(int tag);
struct _RuntimeStack *_frame_until(int tag, int do_pop);

/*************** EXCEPTION HANDLING *******************/

#define _CYC_MAX_STACKTRACE 100

typedef struct _Cyc_Stacktrace {
  char *frames[_CYC_MAX_STACKTRACE];
  int size;
} _Cyc_Stacktrace;

_Cyc_Stacktrace *_cyc_get_stacktrace(void);
void _cyc_free_stacktrace(_Cyc_Stacktrace *stacktrace);

#endif
