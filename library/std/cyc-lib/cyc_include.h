/* This is a C header used by the output of the Cyclone to
   C translator.  Corresponding definitions are in file lib/runtime_*.c */
#ifndef _CYC_INCLUDE_H_
#define _CYC_INCLUDE_H_

#include <setjmp.h>
#include <stdbool.h>
#include <stddef.h>

/* Need one of these per thread (see runtime_stack.c). The runtime maintains
   a stack that contains either _handler_cons structs or _RegionHandle structs.
   The tag is 0 for a handler_cons and 1 for a region handle.  */
struct _RuntimeStack {
  int tag;
  struct _RuntimeStack *next;
  void (*cleanup)(struct _RuntimeStack *frame);
};

/* Fat pointers */
struct _fat_ptr {
  unsigned char *curr;
  unsigned char *base;
  unsigned char *last_plus_one;
};

/* Regions */
struct _RegionPage {
#ifdef CYC_REGION_PROFILE
  unsigned total_bytes;
  unsigned free_bytes;
#endif
  struct _RegionPage *next;
  __attribute__((aligned)) char data[1];
};

struct _pool;
struct bget_region_key;
struct _RegionAllocFunctions;

struct _RegionHandle {
  struct _RuntimeStack s;
  struct _RegionPage *curr;
  struct _RegionAllocFunctions *fcns;
  char *offset;
  char *last_plus_one;
  struct _pool *released_ptrs;
  struct bget_region_key *key;
  const char *name;
  unsigned used_bytes;
  unsigned wasted_bytes;
};

// A dynamic region is just a region handle.  The wrapper struct is for type
// abstraction.
struct Cyc_Core_DynamicRegion {
  struct _RegionHandle h;
};

/* Alias qualifier stuff */
typedef unsigned int _AliasQualHandle_t;  // must match aqualt_type() in toc.cyc

struct _RegionHandle _new_region(unsigned int disable_reaps, const char *);
void *_region_malloc(struct _RegionHandle *, _AliasQualHandle_t, size_t);
void *_region_calloc(struct _RegionHandle *, _AliasQualHandle_t, size_t t, size_t n);
void *_region_vmalloc(struct _RegionHandle *, size_t);
void *_aqual_malloc(_AliasQualHandle_t aq, size_t s);
void *_aqual_calloc(_AliasQualHandle_t aq, size_t n, size_t t);
void _free_region(struct _RegionHandle *);

/* Exceptions */
struct _handler_cons {
  struct _RuntimeStack s;
  jmp_buf handler;
};
void _push_handler(struct _handler_cons *);
void _push_region(struct _RegionHandle *);
void _npop_handler(int);
void _pop_handler();
void _pop_region();

#ifndef _throw
void *_throw_null_fn(const char *, unsigned);
void *_throw_arraybounds_fn(const char *, unsigned);
void *_throw_badalloc_fn(const char *, unsigned);
void *_throw_bad_reapalloc_fn(const char *, unsigned);
void *_throw_match_fn(const char *, unsigned);
void *_throw_assert_fn(const char *, unsigned);
void *_throw_fn(void *, const char *, unsigned);
void *_rethrow(void *);
#define _throw_null() (_throw_null_fn(__FILE__, __LINE__))
#define _throw_arraybounds() (_throw_arraybounds_fn(__FILE__, __LINE__))
#define _throw_badalloc() (_throw_badalloc_fn(__FILE__, __LINE__))
#define _throw_bad_reapalloc() (_throw_bad_reapalloc_fn(__FILE__, __LINE__))
#define _throw_match() (_throw_match_fn(__FILE__, __LINE__))
#define _throw_assert() (_throw_assert_fn(__FILE__, __LINE__))
#define _throw(e) (_throw_fn((e), __FILE__, __LINE__))
#endif

void *Cyc_Core_get_exn_thrown();
/* Built-in Exceptions */
struct Cyc_Null_Exception_exn_struct {
  char *tag;
};
struct Cyc_Array_bounds_exn_struct {
  char *tag;
};
struct Cyc_Match_Exception_exn_struct {
  char *tag;
};
struct Cyc_Bad_alloc_exn_struct {
  char *tag;
};
struct Cyc_Assert_exn_struct {
  char *tag;
};
extern char Cyc_Null_Exception[];
extern char Cyc_Array_bounds[];
extern char Cyc_Match_Exception[];
extern char Cyc_Bad_alloc[];
extern char Cyc_Assert[];

/* Built-in Run-time Checks and company */
#ifdef NO_CYC_NULL_CHECKS
#define _check_null(ptr) (ptr)
#else
#define _check_null(ptr)               \
  ({                                   \
    __typeof__(ptr) _cks_null = (ptr); \
    if (!_cks_null)                    \
      _throw_null();                   \
    _cks_null;                         \
  })
#endif

#ifdef NO_CYC_BOUNDS_CHECKS
#define _check_known_subscript_notnull(ptr, bound, elt_sz, index) \
  (((char *)ptr) + (elt_sz) * (index))
#ifdef NO_CYC_NULL_CHECKS
#define _check_known_subscript_null _check_known_subscript_notnull
#else
#define _check_known_subscript_null(ptr, bound, elt_sz, index) \
  ({                                                           \
    char *_cks_ptr = (char *)(ptr);                            \
    int _index = (index);                                      \
    if (!_cks_ptr)                                             \
      _throw_null();                                           \
    _cks_ptr + (elt_sz) * _index;                              \
  })
#endif
#define _zero_arr_plus_char_fn(orig_x, orig_sz, orig_i, f, l) ((orig_x) + (orig_i))
#define _zero_arr_plus_other_fn(t_sz, orig_x, orig_sz, orig_i, f, l) ((orig_x) + (orig_i))
#else
#define _check_known_subscript_null(ptr, bound, elt_sz, index) \
  ({                                                           \
    char *_cks_ptr = (char *)(ptr);                            \
    unsigned _cks_index = (index);                             \
    if (!_cks_ptr)                                             \
      _throw_null();                                           \
    if (_cks_index >= (bound))                                 \
      _throw_arraybounds();                                    \
    _cks_ptr + (elt_sz) * _cks_index;                          \
  })
#define _check_known_subscript_notnull(ptr, bound, elt_sz, index) \
  ({                                                              \
    char *_cks_ptr = (char *)(ptr);                               \
    unsigned _cks_index = (index);                                \
    if (_cks_index >= (bound))                                    \
      _throw_arraybounds();                                       \
    _cks_ptr + (elt_sz) * _cks_index;                             \
  })

/* _zero_arr_plus_*_fn(x,sz,i,filename,lineno) adds i to zero-terminated ptr
   x that has at least sz elements */
char *_zero_arr_plus_char_fn(char *, unsigned, int, const char *, unsigned);
void *_zero_arr_plus_other_fn(unsigned, void *, unsigned, int, const char *, unsigned);
#endif

/* _get_zero_arr_size_*(x,sz) returns the number of elements in a
   zero-terminated array that is NULL or has at least sz elements */
unsigned _get_zero_arr_size_char(const char *orig_x, unsigned orig_offset);
unsigned _get_zero_arr_size_other(unsigned t, const void *orig_x, unsigned orig_offset);

/* _zero_arr_inplace_plus_*_fn(x,i,filename,lineno) sets
   zero-terminated pointer *x to *x + i */
char *_zero_arr_inplace_plus_char_fn(char **, int, const char *file, unsigned line);
char *_zero_arr_inplace_plus_post_char_fn(char **, int, const char *file, unsigned line);
// note: must cast result in toc.cyc
void *_zero_arr_inplace_plus_other_fn(unsigned, void **, int, const char *file, unsigned line);
void *_zero_arr_inplace_plus_post_other_fn(unsigned, void **, int, const char *file, unsigned line);
#define _zero_arr_plus_char(x, s, i) (_zero_arr_plus_char_fn(x, s, i, __FILE__, __LINE__))
#define _zero_arr_inplace_plus_char(x, i) \
  _zero_arr_inplace_plus_char_fn((char **)(x), i, __FILE__, __LINE__)
#define _zero_arr_inplace_plus_post_char(x, i) \
  _zero_arr_inplace_plus_post_char_fn((char **)(x), (i), __FILE__, __LINE__)
#define _zero_arr_plus_other(t, x, s, i) (_zero_arr_plus_other_fn(t, x, s, i, __FILE__, __LINE__))
#define _zero_arr_inplace_plus_other(t, x, i) \
  _zero_arr_inplace_plus_other_fn(t, (void **)(x), i, __FILE__, __LINE__)
#define _zero_arr_inplace_plus_post_other(t, x, i) \
  _zero_arr_inplace_plus_post_other_fn(t, (void **)(x), (i), __FILE__, __LINE__)

#define _ptr_offset(elt_sz, index) ((ptrdiff_t)((elt_sz) * (index)))

#ifdef NO_CYC_BOUNDS_CHECKS
#define _check_fat_subscript(arr, elt_sz, index) ((arr).curr + _ptr_offset(elt_sz, index))
#define _untag_fat_ptr(arr, elt_sz, num_elts) ((arr).curr)
#define _untag_fat_ptr_check_bound(arr, elt_sz, num_elts) ((arr).curr)
#define _check_fat_at_base(arr) (arr)
#else
#define _check_fat_subscript(arr, elt_sz, index)                          \
  ({                                                                      \
    struct _fat_ptr _cus_arr = (arr);                                     \
    unsigned char *_cus_ans = _cus_arr.curr + _ptr_offset(elt_sz, index); \
    /* JGM: not needed! if (!_cus_arr.base) _throw_null();*/              \
    if (_cus_ans < _cus_arr.base || _cus_ans >= _cus_arr.last_plus_one)   \
      _throw_arraybounds();                                               \
    _cus_ans;                                                             \
  })
#define _untag_fat_ptr(arr, elt_sz, num_elts) ((arr).curr)
#define _untag_fat_ptr_check_bound(arr, elt_sz, num_elts)                                  \
  ({                                                                                       \
    struct _fat_ptr _arr = (arr);                                                          \
    unsigned char *_curr = _arr.curr;                                                      \
    if (_curr != (unsigned char *)0 &&                                                     \
        (_curr < _arr.base || _curr + _ptr_offset(elt_sz, num_elts) > _arr.last_plus_one)) \
      _throw_arraybounds();                                                                \
    _curr;                                                                                 \
  })
#define _check_fat_at_base(arr)   \
  ({                              \
    struct _fat_ptr _arr = (arr); \
    if (_arr.base != _arr.curr)   \
      _throw_arraybounds();       \
    _arr;                         \
  })
#endif

#define _tag_fat(tcurr, elt_sz, num_elts)                                              \
  ({                                                                                   \
    struct _fat_ptr _ans;                                                              \
    ptrdiff_t _num_elts = (num_elts);                                                  \
    _ans.base = _ans.curr = (void *)(tcurr);                                           \
    /* JGM: if we're tagging NULL, ignore num_elts */                                  \
    _ans.last_plus_one = _ans.base ? (_ans.base + _ptr_offset(elt_sz, _num_elts)) : 0; \
    _ans;                                                                              \
  })

#define _get_fat_size(arr, elt_sz)                                                                \
  ({                                                                                              \
    struct _fat_ptr _arr = (arr);                                                                 \
    unsigned char *_arr_curr = _arr.curr;                                                         \
    unsigned char *_arr_last = _arr.last_plus_one;                                                \
    (_arr_curr < _arr.base || _arr_curr >= _arr_last) ? 0 : ((_arr_last - _arr_curr) / (elt_sz)); \
  })

#define _fat_ptr_plus(arr, elt_sz, change)      \
  ({                                            \
    struct _fat_ptr _ans = (arr);               \
    ptrdiff_t _change = (change);               \
    if (_ans.curr) {                            \
      _ans.curr += _ptr_offset(elt_sz, change); \
    }                                           \
    _ans;                                       \
  })
#define _fat_ptr_inplace_plus(arr_ptr, elt_sz, change) \
  ({                                                   \
    struct _fat_ptr *_arr_ptr = (arr_ptr);             \
    _arr_ptr->curr += _ptr_offset(elt_sz, change);     \
    *_arr_ptr;                                         \
  })
#define _fat_ptr_inplace_plus_post(arr_ptr, elt_sz, change) \
  ({                                                        \
    struct _fat_ptr *_arr_ptr = (arr_ptr);                  \
    struct _fat_ptr _ans = *_arr_ptr;                       \
    _arr_ptr->curr += _ptr_offset(elt_sz, change);          \
    _ans;                                                   \
  })

// Not a macro since initialization order matters. Defined in runtime_zeroterm.c.
struct _fat_ptr _fat_ptr_decrease_size(struct _fat_ptr, size_t sz, size_t numelts);

#ifdef CYC_GC_PTHREAD_REDIRECTS
#define pthread_create GC_pthread_create
#define pthread_sigmask GC_pthread_sigmask
#define pthread_join GC_pthread_join
#define pthread_detach GC_pthread_detach
#define dlopen GC_dlopen
#endif
/* Allocation */
void *GC_malloc(size_t);
void *GC_malloc_atomic(size_t);
void *GC_calloc(size_t, size_t);
void *GC_calloc_atomic(size_t, size_t);

#if (defined(__linux__) && defined(__KERNEL__))
void *cyc_vmalloc(size_t);
void cyc_vfree(void *);
#endif
// bound the allocation size to be < MAX_ALLOC_SIZE. See macros below for usage.
#define MAX_MALLOC_SIZE (1u << 28)
void *_bounded_GC_malloc(size_t, const char *, int);
void *_bounded_GC_malloc_atomic(size_t, const char *, int);
void *_bounded_GC_calloc(size_t, size_t, const char *, int);
void *_bounded_GC_calloc_atomic(size_t, size_t, const char *, int);
/* these macros are overridden below ifdef CYC_REGION_PROFILE */
#ifndef CYC_REGION_PROFILE
#define _cycalloc(n) _bounded_GC_malloc(n, __FILE__, __LINE__)
#define _cycalloc_atomic(n) _bounded_GC_malloc_atomic(n, __FILE__, __LINE__)
#define _cyccalloc(n, s) _bounded_GC_calloc(n, s, __FILE__, __LINE__)
#define _cyccalloc_atomic(n, s) _bounded_GC_calloc_atomic(n, s, __FILE__, __LINE__)
#endif

static inline unsigned int _check_times(unsigned x, unsigned y) {
  unsigned long long whole_ans = ((unsigned long long)x) * ((unsigned long long)y);
  unsigned word_ans = (unsigned)whole_ans;
  if (word_ans < whole_ans || word_ans > MAX_MALLOC_SIZE)
    _throw_badalloc();
  return word_ans;
}

#define _CYC_MAX_REGION_CONST 0
#define _CYC_MIN_ALIGNMENT 16

_Static_assert(_CYC_MIN_ALIGNMENT >= sizeof(double), "maximum alignment can't fit double");

extern int rgn_total_bytes;

static inline void *_fast_region_malloc(struct _RegionHandle *r, _AliasQualHandle_t aq,
                                        unsigned orig_s) {
  if (r > (struct _RegionHandle *)_CYC_MAX_REGION_CONST && r->curr != 0) {
#ifdef CYC_NOALIGN
    unsigned s = orig_s;
#else
    unsigned s = (orig_s + _CYC_MIN_ALIGNMENT - 1) & (~(_CYC_MIN_ALIGNMENT - 1));
#endif
    char *result;
    result = r->offset;
    if (s <= (r->last_plus_one - result)) {
      r->offset = result + s;
#ifdef CYC_REGION_PROFILE
      r->curr->free_bytes = r->curr->free_bytes - s;
      rgn_total_bytes += s;
#endif
      return result;
    }
  }
  return _region_malloc(r, aq, orig_s);
}

// doesn't make sense to fast malloc with reaps
#ifndef DISABLE_REAPS
#define _fast_region_malloc _region_malloc
#endif

/* see macros below for usage. defined in runtime_memory.c */
void *_profile_GC_malloc(size_t, const char *, const char *, int);
void *_profile_GC_malloc_atomic(size_t, const char *, const char *, int);
void *_profile_GC_calloc(size_t, size_t, const char *, const char *, int);
void *_profile_GC_calloc_atomic(size_t, size_t, const char *, const char *, int);
void *_profile_region_malloc(struct _RegionHandle *, _AliasQualHandle_t, size_t, const char *,
                             const char *, int);
void *_profile_region_calloc(struct _RegionHandle *, _AliasQualHandle_t, size_t, size_t,
                             const char *, const char *, int);
void *_profile_aqual_malloc(_AliasQualHandle_t aq, size_t s, const char *file, const char *func,
                            int lineno);
void *_profile_aqual_calloc(_AliasQualHandle_t aq, size_t t1, size_t t2, const char *file,
                            const char *func, int lineno);
struct _RegionHandle _profile_new_region(unsigned int disable_reaps, const char *, const char *,
                                         const char *, int);
void _profile_free_region(struct _RegionHandle *, const char *, const char *, int);

#ifdef CYC_REGION_PROFILE
#ifndef RUNTIME_CYC
#define _new_region(i, n) _profile_new_region(i, n, __FILE__, __FUNCTION__, __LINE__)
#define _free_region(r) _profile_free_region(r, __FILE__, __FUNCTION__, __LINE__)
#define _region_malloc(rh, aq, n) \
  _profile_region_malloc(rh, aq, n, __FILE__, __FUNCTION__, __LINE__)
#define _region_calloc(rh, aq, n, t) \
  _profile_region_calloc(rh, aq, n, t, __FILE__, __FUNCTION__, __LINE__)
#define _aqual_malloc(aq, n) _profile_aqual_malloc(aq, n, __FILE__, __FUNCTION__, __LINE__)
#define _aqual_calloc(aq, n, t) _profile_aqual_calloc(aq, n, t, __FILE__, __FUNCTION__, __LINE__)
#endif
#define _cycalloc(n) _profile_GC_malloc(n, __FILE__, __FUNCTION__, __LINE__)
#define _cycalloc_atomic(n) _profile_GC_malloc_atomic(n, __FILE__, __FUNCTION__, __LINE__)
#define _cyccalloc(n, s) _profile_GC_calloc(n, s, __FILE__, __FUNCTION__, __LINE__)
#define _cyccalloc_atomic(n, s) _profile_GC_calloc_atomic(n, s, __FILE__, __FUNCTION__, __LINE__)
#endif  // CYC_REGION_PROFILE
#endif  //_CYC_INCLUDE_H
