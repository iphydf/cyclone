#ifndef _RUNTIME_TLS_H_
#define _RUNTIME_TLS_H_

#ifndef _CYC_DRIVER_
#include "precore_c.h"
#endif

struct _tls_record {
  struct _RuntimeStack *current_frame;
  struct _xtunion_struct *exn_thrown;
  const char *exn_filename;
  int exn_lineno;
};

typedef struct _tls_record tls_record_t;

struct _tls_slot {
  unsigned int pid;
  unsigned int usage_count;
  tls_record_t *record;
};

typedef struct _tls_slot tls_slot_t;

extern tls_record_t* cyc_runtime_lookup_tls_record();

#endif
