#include <cyc_include.h>
extern char Cyc_Core_Invalid_argument[17U];
 struct Cyc_Core_Invalid_argument_exn_struct {
  char * tag;
  struct _fat_ptr f1;
};
extern char Cyc_Core_Impossible[11U];
 struct Cyc_Core_Impossible_exn_struct {
  char * tag;
  struct _fat_ptr f1;
};
extern struct _RegionHandle * Cyc_Core_heap_region;
extern double modf(double,double *);
struct Cyc___cycFILE;
extern struct Cyc___cycFILE * Cyc_stdout;
 struct Cyc_String_pa_PrintArg_struct {
  int tag;
  struct _fat_ptr f1;
};
 struct Cyc_Int_pa_PrintArg_struct {
  int tag;
  unsigned long f1;
};
 struct Cyc_LongLong_pa_PrintArg_struct {
  int tag;
  unsigned long long f1;
};
 struct Cyc_Double_pa_PrintArg_struct {
  int tag;
  double f1;
};
 struct Cyc_LongDouble_pa_PrintArg_struct {
  int tag;
  long double f1;
};
 struct Cyc_ShortPtr_pa_PrintArg_struct {
  int tag;
  short * f1;
};
 struct Cyc_IntPtr_pa_PrintArg_struct {
  int tag;
  unsigned long * f1;
};
 struct Cyc_LongLongPtr_pa_PrintArg_struct {
  int tag;
  unsigned long long * f1;
};
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);
extern int Cyc_putc(int,struct Cyc___cycFILE *);
extern struct _fat_ptr Cyc_strdup(struct _fat_ptr);
static struct _fat_ptr Cyc_parg2string(void * x) {
  void * _T0;
  int * _T1;
  unsigned int _T2;
  struct _fat_ptr _T3;
  struct _fat_ptr _T4;
  struct _fat_ptr _T5;
  struct _fat_ptr _T6;
  struct _fat_ptr _T7;
  struct _fat_ptr _T8;
  struct _fat_ptr _T9;
  struct _fat_ptr _TA;
  _T0 = x;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  switch (_T2) {
  case 0: 
    _T3 = _tag_fat("string",sizeof(char),7U);
    return _T3;
  case 1: 
    _T4 = _tag_fat("int",sizeof(char),4U);
    return _T4;
  case 2: 
    _T5 = _tag_fat("long long",sizeof(char),10U);
    return _T5;
  case 3: 
    _T6 = _tag_fat("double",sizeof(char),7U);
    return _T6;
  case 4: 
    _T7 = _tag_fat("long double",sizeof(char),12U);
    return _T7;
  case 5: 
    _T8 = _tag_fat("short *",sizeof(char),8U);
    return _T8;
  case 6: 
    _T9 = _tag_fat("unsigned long *",sizeof(char),16U);
    return _T9;
  default: 
    _TA = _tag_fat("unsigned long long *",sizeof(char),21U);
    return _TA;
  }
  ;
}
static void * Cyc_badarg(struct _fat_ptr s) {
  struct Cyc_Core_Invalid_argument_exn_struct * _T0;
  void * _T1;
  void * _T2;
  void * _T3;
  { struct Cyc_Core_Invalid_argument_exn_struct * _T4 = _cycalloc(sizeof(struct Cyc_Core_Invalid_argument_exn_struct));
    _T4->tag = Cyc_Core_Invalid_argument;
    _T4->f1 = s;
    _T0 = (struct Cyc_Core_Invalid_argument_exn_struct *)_T4;
  }_T1 = (void *)_T0;
  _T2 = _throw(_T1);
  _T3 = (void *)_T2;
  return _T3;
}
static int Cyc_va_arg_int(struct _fat_ptr ap) {
  struct _fat_ptr _T0;
  unsigned char * _T1;
  void * * _T2;
  int * _T3;
  int _T4;
  unsigned long _T5;
  int _T6;
  int (* _T7)(struct _fat_ptr);
  struct _fat_ptr _T8;
  int _T9;
  _T0 = ap;
  _T1 = _check_fat_subscript(_T0,sizeof(void *),0U);
  _T2 = (void * *)_T1;
  { void * _TA = *_T2;
    unsigned long _TB;
    _T3 = (int *)_TA;
    _T4 = *_T3;
    if (_T4 != 1) { goto _TL1;
    }
    { struct Cyc_Int_pa_PrintArg_struct * _TC = (struct Cyc_Int_pa_PrintArg_struct *)_TA;
      _TB = _TC->f1;
    }{ unsigned long i = _TB;
      _T5 = i;
      _T6 = (int)_T5;
      return _T6;
    }_TL1: { int (* _TC)(struct _fat_ptr) = (int (*)(struct _fat_ptr))Cyc_badarg;
      _T7 = _TC;
    }_T8 = _tag_fat("printf expected int",sizeof(char),20U);
    _T9 = _T7(_T8);
    return _T9;
    ;
  }
}
static long Cyc_va_arg_long(struct _fat_ptr ap) {
  struct _fat_ptr _T0;
  unsigned char * _T1;
  void * * _T2;
  int * _T3;
  int _T4;
  unsigned long _T5;
  long _T6;
  long (* _T7)(struct _fat_ptr);
  struct _fat_ptr _T8;
  long _T9;
  _T0 = ap;
  _T1 = _check_fat_subscript(_T0,sizeof(void *),0U);
  _T2 = (void * *)_T1;
  { void * _TA = *_T2;
    unsigned long _TB;
    _T3 = (int *)_TA;
    _T4 = *_T3;
    if (_T4 != 1) { goto _TL3;
    }
    { struct Cyc_Int_pa_PrintArg_struct * _TC = (struct Cyc_Int_pa_PrintArg_struct *)_TA;
      _TB = _TC->f1;
    }{ unsigned long i = _TB;
      _T5 = i;
      _T6 = (long)_T5;
      return _T6;
    }_TL3: { long (* _TC)(struct _fat_ptr) = (long (*)(struct _fat_ptr))Cyc_badarg;
      _T7 = _TC;
    }_T8 = _tag_fat("printf expected int",sizeof(char),20U);
    _T9 = _T7(_T8);
    return _T9;
    ;
  }
}
static long long Cyc_va_arg_longlong(struct _fat_ptr ap) {
  struct _fat_ptr _T0;
  unsigned char * _T1;
  void * * _T2;
  int * _T3;
  int _T4;
  unsigned long long _T5;
  long long _T6;
  int (* _T7)(struct _fat_ptr);
  struct _fat_ptr _T8;
  _T0 = ap;
  _T1 = _check_fat_subscript(_T0,sizeof(void *),0U);
  _T2 = (void * *)_T1;
  { void * _T9 = *_T2;
    unsigned long long _TA;
    _T3 = (int *)_T9;
    _T4 = *_T3;
    if (_T4 != 2) { goto _TL5;
    }
    { struct Cyc_LongLong_pa_PrintArg_struct * _TB = (struct Cyc_LongLong_pa_PrintArg_struct *)_T9;
      _TA = _TB->f1;
    }{ unsigned long long i = _TA;
      _T5 = i;
      _T6 = (long long)_T5;
      return _T6;
    }_TL5: { int (* _TB)(struct _fat_ptr) = (int (*)(struct _fat_ptr))Cyc_badarg;
      _T7 = _TB;
    }_T8 = _tag_fat("printf expected int",sizeof(char),20U);
    _T7(_T8);
    return 0;
    ;
  }
}
static unsigned long Cyc_va_arg_uint(struct _fat_ptr ap) {
  struct _fat_ptr _T0;
  unsigned char * _T1;
  void * * _T2;
  int * _T3;
  int _T4;
  unsigned long _T5;
  unsigned long (* _T6)(struct _fat_ptr);
  struct _fat_ptr _T7;
  unsigned long _T8;
  _T0 = ap;
  _T1 = _check_fat_subscript(_T0,sizeof(void *),0U);
  _T2 = (void * *)_T1;
  { void * _T9 = *_T2;
    unsigned long _TA;
    _T3 = (int *)_T9;
    _T4 = *_T3;
    if (_T4 != 1) { goto _TL7;
    }
    { struct Cyc_Int_pa_PrintArg_struct * _TB = (struct Cyc_Int_pa_PrintArg_struct *)_T9;
      _TA = _TB->f1;
    }{ unsigned long i = _TA;
      _T5 = i;
      return _T5;
    }_TL7: { unsigned long (* _TB)(struct _fat_ptr) = (unsigned long (*)(struct _fat_ptr))Cyc_badarg;
      _T6 = _TB;
    }_T7 = _tag_fat("printf expected int",sizeof(char),20U);
    _T8 = _T6(_T7);
    return _T8;
    ;
  }
}
static unsigned long Cyc_va_arg_ulong(struct _fat_ptr ap) {
  struct _fat_ptr _T0;
  unsigned char * _T1;
  void * * _T2;
  int * _T3;
  int _T4;
  unsigned long _T5;
  unsigned long (* _T6)(struct _fat_ptr);
  struct _fat_ptr _T7;
  unsigned long _T8;
  _T0 = ap;
  _T1 = _check_fat_subscript(_T0,sizeof(void *),0U);
  _T2 = (void * *)_T1;
  { void * _T9 = *_T2;
    unsigned long _TA;
    _T3 = (int *)_T9;
    _T4 = *_T3;
    if (_T4 != 1) { goto _TL9;
    }
    { struct Cyc_Int_pa_PrintArg_struct * _TB = (struct Cyc_Int_pa_PrintArg_struct *)_T9;
      _TA = _TB->f1;
    }{ unsigned long i = _TA;
      _T5 = i;
      return _T5;
    }_TL9: { unsigned long (* _TB)(struct _fat_ptr) = (unsigned long (*)(struct _fat_ptr))Cyc_badarg;
      _T6 = _TB;
    }_T7 = _tag_fat("printf expected int",sizeof(char),20U);
    _T8 = _T6(_T7);
    return _T8;
    ;
  }
}
static unsigned long long Cyc_va_arg_ulonglong(struct _fat_ptr ap) {
  struct _fat_ptr _T0;
  unsigned char * _T1;
  void * * _T2;
  int * _T3;
  int _T4;
  unsigned long long _T5;
  int (* _T6)(struct _fat_ptr);
  struct _fat_ptr _T7;
  _T0 = ap;
  _T1 = _check_fat_subscript(_T0,sizeof(void *),0U);
  _T2 = (void * *)_T1;
  { void * _T8 = *_T2;
    unsigned long long _T9;
    _T3 = (int *)_T8;
    _T4 = *_T3;
    if (_T4 != 2) { goto _TLB;
    }
    { struct Cyc_LongLong_pa_PrintArg_struct * _TA = (struct Cyc_LongLong_pa_PrintArg_struct *)_T8;
      _T9 = _TA->f1;
    }{ unsigned long long i = _T9;
      _T5 = i;
      return _T5;
    }_TLB: { int (* _TA)(struct _fat_ptr) = (int (*)(struct _fat_ptr))Cyc_badarg;
      _T6 = _TA;
    }_T7 = _tag_fat("printf expected int",sizeof(char),20U);
    _T6(_T7);
    return 0U;
    ;
  }
}
static double Cyc_va_arg_double(struct _fat_ptr ap) {
  struct _fat_ptr _T0;
  unsigned char * _T1;
  void * * _T2;
  int * _T3;
  unsigned int _T4;
  double _T5;
  long double _T6;
  double _T7;
  struct _fat_ptr _T8;
  struct Cyc_String_pa_PrintArg_struct _T9;
  struct _fat_ptr _TA;
  unsigned char * _TB;
  void * * _TC;
  void * _TD;
  struct _fat_ptr _TE;
  struct _fat_ptr _TF;
  void * _T10;
  _T0 = ap;
  _T1 = _check_fat_subscript(_T0,sizeof(void *),0U);
  _T2 = (void * *)_T1;
  { void * _T11 = *_T2;
    long double _T12;
    double _T13;
    _T3 = (int *)_T11;
    _T4 = *_T3;
    switch (_T4) {
    case 3: 
      { struct Cyc_Double_pa_PrintArg_struct * _T14 = (struct Cyc_Double_pa_PrintArg_struct *)_T11;
	_T13 = _T14->f1;
      }{ double d = _T13;
	_T5 = d;
	return _T5;
      }
    case 4: 
      { struct Cyc_LongDouble_pa_PrintArg_struct * _T14 = (struct Cyc_LongDouble_pa_PrintArg_struct *)_T11;
	_T12 = _T14->f1;
      }{ long double ld = _T12;
	_T6 = ld;
	_T7 = (double)_T6;
	return _T7;
      }
    default: 
      { struct Cyc_String_pa_PrintArg_struct _T14;
	_T14.tag = 0;
	_TA = ap;
	_TB = _check_fat_subscript(_TA,sizeof(void *),0U);
	_TC = (void * *)_TB;
	_TD = *_TC;
	_T14.f1 = Cyc_parg2string(_TD);
	_T9 = _T14;
      }{ struct Cyc_String_pa_PrintArg_struct _T14 = _T9;
	void * _T15[1];
	_T15[0] = &_T14;
	_TE = _tag_fat("printf expected double but found %s",sizeof(char),
		       36U);
	_TF = _tag_fat(_T15,sizeof(void *),1);
	_T8 = Cyc_aprintf(_TE,_TF);
      }_T10 = Cyc_badarg(_T8);
      _throw(_T10);
    }
    ;
  }
}
static short * Cyc_va_arg_short_ptr(struct _fat_ptr ap) {
  struct _fat_ptr _T0;
  unsigned char * _T1;
  void * * _T2;
  int * _T3;
  int _T4;
  short * _T5;
  struct _fat_ptr _T6;
  void * _T7;
  _T0 = ap;
  _T1 = _check_fat_subscript(_T0,sizeof(void *),0U);
  _T2 = (void * *)_T1;
  { void * _T8 = *_T2;
    short * _T9;
    _T3 = (int *)_T8;
    _T4 = *_T3;
    if (_T4 != 5) { goto _TLE;
    }
    { struct Cyc_ShortPtr_pa_PrintArg_struct * _TA = (struct Cyc_ShortPtr_pa_PrintArg_struct *)_T8;
      _T9 = _TA->f1;
    }{ short * p = _T9;
      _T5 = p;
      return _T5;
    }_TLE: _T6 = _tag_fat("printf expected short pointer",sizeof(char),30U);
    _T7 = Cyc_badarg(_T6);
    _throw(_T7);
    ;
  }
}
static unsigned long * Cyc_va_arg_int_ptr(struct _fat_ptr ap) {
  struct _fat_ptr _T0;
  unsigned char * _T1;
  void * * _T2;
  int * _T3;
  int _T4;
  unsigned long * _T5;
  struct _fat_ptr _T6;
  void * _T7;
  _T0 = ap;
  _T1 = _check_fat_subscript(_T0,sizeof(void *),0U);
  _T2 = (void * *)_T1;
  { void * _T8 = *_T2;
    unsigned long * _T9;
    _T3 = (int *)_T8;
    _T4 = *_T3;
    if (_T4 != 6) { goto _TL10;
    }
    { struct Cyc_IntPtr_pa_PrintArg_struct * _TA = (struct Cyc_IntPtr_pa_PrintArg_struct *)_T8;
      _T9 = _TA->f1;
    }{ unsigned long * p = _T9;
      _T5 = p;
      return _T5;
    }_TL10: _T6 = _tag_fat("printf expected int pointer",sizeof(char),28U);
    _T7 = Cyc_badarg(_T6);
    _throw(_T7);
    ;
  }
}
static unsigned long long * Cyc_va_arg_longlong_ptr(struct _fat_ptr ap) {
  struct _fat_ptr _T0;
  unsigned char * _T1;
  void * * _T2;
  int * _T3;
  int _T4;
  unsigned long long * _T5;
  struct _fat_ptr _T6;
  void * _T7;
  _T0 = ap;
  _T1 = _check_fat_subscript(_T0,sizeof(void *),0U);
  _T2 = (void * *)_T1;
  { void * _T8 = *_T2;
    unsigned long long * _T9;
    _T3 = (int *)_T8;
    _T4 = *_T3;
    if (_T4 != 7) { goto _TL12;
    }
    { struct Cyc_LongLongPtr_pa_PrintArg_struct * _TA = (struct Cyc_LongLongPtr_pa_PrintArg_struct *)_T8;
      _T9 = _TA->f1;
    }{ unsigned long long * p = _T9;
      _T5 = p;
      return _T5;
    }_TL12: _T6 = _tag_fat("printf expected long long pointer",sizeof(char),
			   34U);
    _T7 = Cyc_badarg(_T6);
    _throw(_T7);
    ;
  }
}
static const struct _fat_ptr Cyc_va_arg_string(struct _fat_ptr ap) {
  struct _fat_ptr _T0;
  unsigned char * _T1;
  void * * _T2;
  int * _T3;
  int _T4;
  struct _fat_ptr _T5;
  struct _fat_ptr _T6;
  void * _T7;
  _T0 = ap;
  _T1 = _check_fat_subscript(_T0,sizeof(void *),0U);
  _T2 = (void * *)_T1;
  { void * _T8 = *_T2;
    struct _fat_ptr _T9;
    _T3 = (int *)_T8;
    _T4 = *_T3;
    if (_T4 != 0) { goto _TL14;
    }
    { struct Cyc_String_pa_PrintArg_struct * _TA = (struct Cyc_String_pa_PrintArg_struct *)_T8;
      _T9 = _TA->f1;
    }{ struct _fat_ptr s = _T9;
      _T5 = s;
      return _T5;
    }_TL14: _T6 = _tag_fat("printf expected string",sizeof(char),23U);
    _T7 = Cyc_badarg(_T6);
    _throw(_T7);
    ;
  }
}
int Cyc___cvt_double(double,int,int,int *,int,struct _fat_ptr,struct _fat_ptr);
enum Cyc_BASE {
  Cyc_OCT = 0U,
  Cyc_DEC = 1U,
  Cyc_HEX = 2U
};
inline static int Cyc__IO_sputn(int (* ioputc)(int,void *),void * ioputc_env,
				struct _fat_ptr s,int howmany) {
  struct _fat_ptr _T0;
  unsigned char * _T1;
  const char * _T2;
  char _T3;
  int _T4;
  void * _T5;
  int _T6;
  int _T7;
  int _T8;
  struct _fat_ptr * _T9;
  int _TA;
  int i = 0;
  _TL16: if (i < howmany) { goto _TL17;
  }else { goto _TL18;
  }
  _TL17: _T0 = s;
  _T1 = _check_fat_subscript(_T0,sizeof(char),0U);
  _T2 = (const char *)_T1;
  _T3 = *_T2;
  _T4 = (int)_T3;
  _T5 = ioputc_env;
  _T6 = ioputc(_T4,_T5);
  _T7 = - 1;
  if (_T6 != _T7) { goto _TL19;
  }
  _T8 = i;
  return _T8;
  _TL19: _T9 = &s;
  _fat_ptr_inplace_plus(_T9,sizeof(char),1);
  i = i + 1;
  goto _TL16;
  _TL18: _TA = i;
  return _TA;
}
static int Cyc__IO_nzsputn(int (* ioputc)(int,void *),void * ioputc_env,struct _fat_ptr s,
			   int howmany) {
  struct _fat_ptr _T0;
  unsigned char * _T1;
  const char * _T2;
  char _T3;
  int _T4;
  char _T5;
  int _T6;
  void * _T7;
  int _T8;
  int _T9;
  int _TA;
  struct _fat_ptr * _TB;
  int _TC;
  int i = 0;
  _TL1B: if (i < howmany) { goto _TL1C;
  }else { goto _TL1D;
  }
  _TL1C: { char c;
    _T0 = s;
    _T1 = _check_fat_subscript(_T0,sizeof(char),0U);
    _T2 = (const char *)_T1;
    c = *_T2;
    _T3 = c;
    _T4 = (int)_T3;
    if (_T4 == 0) { goto _TL20;
    }else { goto _TL21;
    }
    _TL21: _T5 = c;
    _T6 = (int)_T5;
    _T7 = ioputc_env;
    _T8 = ioputc(_T6,_T7);
    _T9 = - 1;
    if (_T8 == _T9) { goto _TL20;
    }else { goto _TL1E;
    }
    _TL20: _TA = i;
    return _TA;
    _TL1E: _TB = &s;
    _fat_ptr_inplace_plus(_TB,sizeof(char),1);
    i = i + 1;
  }goto _TL1B;
  _TL1D: _TC = i;
  return _TC;
}
static int Cyc__IO_padn(int (* ioputc)(int,void *),void * ioputc_env,char c,
			int howmany) {
  char _T0;
  int _T1;
  void * _T2;
  int _T3;
  int _T4;
  int _T5;
  int _T6;
  int i = 0;
  _TL22: if (i < howmany) { goto _TL23;
  }else { goto _TL24;
  }
  _TL23: _T0 = c;
  _T1 = (int)_T0;
  _T2 = ioputc_env;
  _T3 = ioputc(_T1,_T2);
  _T4 = - 1;
  if (_T3 != _T4) { goto _TL25;
  }
  _T5 = i;
  return _T5;
  _TL25: i = i + 1;
  goto _TL22;
  _TL24: _T6 = i;
  return _T6;
}
static struct _fat_ptr Cyc_my_memchr(struct _fat_ptr s,char c,int n) {
  struct _fat_ptr _T0;
  unsigned int _T1;
  int _T2;
  struct _fat_ptr _T3;
  unsigned char * _T4;
  const char * _T5;
  char _T6;
  int _T7;
  char _T8;
  int _T9;
  struct _fat_ptr _TA;
  struct _fat_ptr * _TB;
  struct _fat_ptr _TC;
  _T0 = s;
  _T1 = _get_fat_size(_T0,sizeof(char));
  { int sz = (int)_T1;
    if (n >= sz) { goto _TL27;
    }
    _T2 = n;
    goto _TL28;
    _TL27: _T2 = sz;
    _TL28: n = _T2;
    _TL2C: if (n != 0) { goto _TL2A;
    }else { goto _TL2B;
    }
    _TL2A: _T3 = s;
    _T4 = _check_fat_subscript(_T3,sizeof(char),0U);
    _T5 = (const char *)_T4;
    _T6 = *_T5;
    _T7 = (int)_T6;
    _T8 = c;
    _T9 = (int)_T8;
    if (_T7 != _T9) { goto _TL2D;
    }
    _TA = s;
    return _TA;
    _TL2D: n = n + -1;
    _TB = &s;
    _fat_ptr_inplace_plus_post(_TB,sizeof(char),1);
    goto _TL2C;
    _TL2B: _TC = _tag_fat(0,0,0);
    return _TC;
  }
}
static struct _fat_ptr Cyc_my_nzmemchr(struct _fat_ptr s,char c,int n) {
  struct _fat_ptr _T0;
  unsigned int _T1;
  int _T2;
  struct _fat_ptr _T3;
  unsigned char * _T4;
  const char * _T5;
  char _T6;
  int _T7;
  char _T8;
  int _T9;
  struct _fat_ptr _TA;
  struct _fat_ptr * _TB;
  struct _fat_ptr _TC;
  _T0 = s;
  _T1 = _get_fat_size(_T0,sizeof(char));
  { int sz = (int)_T1;
    if (n >= sz) { goto _TL2F;
    }
    _T2 = n;
    goto _TL30;
    _TL2F: _T2 = sz;
    _TL30: n = _T2;
    _TL34: if (n != 0) { goto _TL32;
    }else { goto _TL33;
    }
    _TL32: _T3 = s;
    _T4 = _check_fat_subscript(_T3,sizeof(char),0U);
    _T5 = (const char *)_T4;
    _T6 = *_T5;
    _T7 = (int)_T6;
    _T8 = c;
    _T9 = (int)_T8;
    if (_T7 != _T9) { goto _TL35;
    }
    _TA = s;
    return _TA;
    _TL35: n = n + -1;
    _TB = &s;
    _fat_ptr_inplace_plus_post(_TB,sizeof(char),1);
    goto _TL34;
    _TL33: _TC = _tag_fat(0,0,0);
    return _TC;
  }
}
inline static const unsigned long Cyc_my_strlen(struct _fat_ptr s) {
  struct _fat_ptr _T0;
  struct _fat_ptr _T1;
  unsigned char * _T2;
  const char * _T3;
  const char * _T4;
  unsigned int _T5;
  int _T6;
  char _T7;
  int _T8;
  unsigned int _T9;
  _T0 = s;
  { unsigned int sz = _get_fat_size(_T0,sizeof(char));
    unsigned int i = 0U;
    _TL37: if (i < sz) { goto _TL3A;
    }else { goto _TL39;
    }
    _TL3A: _T1 = s;
    _T2 = _T1.curr;
    _T3 = (const char *)_T2;
    _T4 = _check_null(_T3);
    _T5 = i;
    _T6 = (int)_T5;
    _T7 = _T4[_T6];
    _T8 = (int)_T7;
    if (_T8 != 0) { goto _TL38;
    }else { goto _TL39;
    }
    _TL38: i = i + 1;
    goto _TL37;
    _TL39: _T9 = i;
    return _T9;
  }
}
int Cyc__IO_vfprintf(int (* ioputc)(int,void *),void * ioputc_env,struct _fat_ptr fmt0,
		     struct _fat_ptr ap) {
  char * _T0;
  char * _T1;
  char * _T2;
  unsigned int _T3;
  char * _T4;
  char * _T5;
  char * _T6;
  struct _fat_ptr _T7;
  int _T8;
  unsigned int _T9;
  unsigned int _TA;
  struct _fat_ptr _TB;
  unsigned char * _TC;
  const char * _TD;
  int _TE;
  char _TF;
  int _T10;
  struct _fat_ptr _T11;
  int _T12;
  struct _fat_ptr _T13;
  unsigned char * _T14;
  struct _fat_ptr _T15;
  unsigned char * _T16;
  int _T17;
  int _T18;
  int (* _T19)(int,void *);
  void * _T1A;
  struct _fat_ptr _T1B;
  struct _fat_ptr _T1C;
  int _T1D;
  int _T1E;
  int _T1F;
  int _T20;
  struct _fat_ptr * _T21;
  struct _fat_ptr * _T22;
  struct _fat_ptr _T23;
  unsigned char * _T24;
  const char * _T25;
  char _T26;
  int _T27;
  int _T28;
  char _T29;
  int _T2A;
  struct _fat_ptr * _T2B;
  int _T2C;
  struct _fat_ptr * _T2D;
  struct _fat_ptr _T2E;
  unsigned char * _T2F;
  const char * _T30;
  char _T31;
  int _T32;
  struct _fat_ptr * _T33;
  int _T34;
  int _T35;
  unsigned int _T36;
  int _T37;
  int _T38;
  struct _fat_ptr * _T39;
  struct _fat_ptr _T3A;
  unsigned char * _T3B;
  const char * _T3C;
  char _T3D;
  int _T3E;
  int _T3F;
  int _T40;
  struct _fat_ptr * _T41;
  struct _fat_ptr _T42;
  unsigned char * _T43;
  const char * _T44;
  char _T45;
  int _T46;
  unsigned int _T47;
  int _T48;
  char * _T49;
  unsigned char * _T4A;
  char * _T4B;
  int _T4C;
  unsigned int _T4D;
  unsigned char * _T4E;
  char * _T4F;
  struct _fat_ptr * _T50;
  long long _T51;
  long _T52;
  long _T53;
  int _T54;
  short _T55;
  struct _fat_ptr * _T56;
  unsigned long long _T57;
  long long _T58;
  struct _fat_ptr * _T59;
  int _T5A;
  int _T5B;
  char * _T5C;
  unsigned char * _T5D;
  char * _T5E;
  unsigned int _T5F;
  unsigned char * _T60;
  char * _T61;
  double _T62;
  int _T63;
  int _T64;
  int * _T65;
  int _T66;
  struct _fat_ptr _T67;
  char * _T68;
  struct _fat_ptr _T69;
  unsigned int _T6A;
  unsigned int _T6B;
  int _T6C;
  struct _fat_ptr _T6D;
  int _T6E;
  struct _fat_ptr _T6F;
  unsigned char * _T70;
  char * _T71;
  char _T72;
  int _T73;
  struct _fat_ptr * _T74;
  unsigned long long * _T75;
  int _T76;
  unsigned long * _T77;
  int _T78;
  short * _T79;
  int _T7A;
  unsigned long * _T7B;
  int _T7C;
  struct _fat_ptr * _T7D;
  unsigned long long _T7E;
  unsigned long _T7F;
  unsigned long _T80;
  int _T81;
  unsigned short _T82;
  struct _fat_ptr * _T83;
  long _T84;
  struct _fat_ptr * _T85;
  struct _fat_ptr * _T86;
  struct _fat_ptr _T87;
  unsigned char * _T88;
  char * _T89;
  struct _fat_ptr _T8A;
  unsigned char * _T8B;
  struct _fat_ptr _T8C;
  unsigned char * _T8D;
  int _T8E;
  unsigned long _T8F;
  unsigned long long _T90;
  unsigned long _T91;
  unsigned long _T92;
  int _T93;
  unsigned short _T94;
  struct _fat_ptr * _T95;
  unsigned long long _T96;
  unsigned long _T97;
  unsigned long _T98;
  int _T99;
  unsigned short _T9A;
  struct _fat_ptr * _T9B;
  int _T9C;
  int _T9D;
  char * _T9E;
  struct _fat_ptr _T9F;
  int _TA0;
  int _TA1;
  enum Cyc_BASE _TA2;
  int _TA3;
  struct _fat_ptr * _TA4;
  unsigned char * _TA5;
  char * _TA6;
  unsigned long long _TA7;
  unsigned long long _TA8;
  unsigned int _TA9;
  unsigned char * _TAA;
  char * _TAB;
  unsigned long long _TAC;
  int _TAD;
  struct _fat_ptr _TAE;
  unsigned char * _TAF;
  char * _TB0;
  char _TB1;
  int _TB2;
  struct _fat_ptr * _TB3;
  unsigned char * _TB4;
  char * _TB5;
  unsigned int _TB6;
  unsigned char * _TB7;
  char * _TB8;
  struct _fat_ptr * _TB9;
  unsigned char * _TBA;
  char * _TBB;
  unsigned long long _TBC;
  unsigned long long _TBD;
  unsigned int _TBE;
  unsigned char * _TBF;
  char * _TC0;
  struct _fat_ptr * _TC1;
  unsigned char * _TC2;
  char * _TC3;
  unsigned long long _TC4;
  unsigned int _TC5;
  unsigned char * _TC6;
  char * _TC7;
  struct _fat_ptr * _TC8;
  unsigned char * _TC9;
  char * _TCA;
  struct _fat_ptr _TCB;
  unsigned long long _TCC;
  int _TCD;
  unsigned char * _TCE;
  const char * _TCF;
  unsigned int _TD0;
  unsigned char * _TD1;
  char * _TD2;
  unsigned long long _TD3;
  int _TD4;
  struct _fat_ptr _TD5;
  char * _TD6;
  struct _fat_ptr _TD7;
  int _TD8;
  int _TD9;
  struct _fat_ptr _TDA;
  unsigned char * _TDB;
  struct _fat_ptr _TDC;
  unsigned char * _TDD;
  int _TDE;
  char * _TDF;
  unsigned char * _TE0;
  char * _TE1;
  int _TE2;
  unsigned int _TE3;
  unsigned char * _TE4;
  char * _TE5;
  char _TE6;
  int _TE7;
  int _TE8;
  int _TE9;
  int _TEA;
  int _TEB;
  int (* _TEC)(int,void *);
  void * _TED;
  int _TEE;
  int _TEF;
  int _TF0;
  char _TF1;
  int _TF2;
  char * _TF3;
  struct _fat_ptr _TF4;
  unsigned char * _TF5;
  char * _TF6;
  unsigned int _TF7;
  unsigned char * _TF8;
  char * _TF9;
  int (* _TFA)(int,void *);
  void * _TFB;
  char * _TFC;
  struct _fat_ptr _TFD;
  struct _fat_ptr _TFE;
  int _TFF;
  char * _T100;
  char * _T101;
  int _T102;
  int (* _T103)(int,void *);
  void * _T104;
  char * _T105;
  struct _fat_ptr _T106;
  int _T107;
  int _T108;
  int _T109;
  int _T10A;
  int (* _T10B)(int,void *);
  void * _T10C;
  int _T10D;
  int _T10E;
  int _T10F;
  int (* _T110)(int,void *);
  void * _T111;
  int _T112;
  int _T113;
  int _T114;
  int (* _T115)(int,void *);
  void * _T116;
  struct _fat_ptr _T117;
  struct _fat_ptr _T118;
  int _T119;
  int _T11A;
  int _T11B;
  int (* _T11C)(int,void *);
  void * _T11D;
  struct _fat_ptr _T11E;
  struct _fat_ptr _T11F;
  int _T120;
  int _T121;
  int _T122;
  int (* _T123)(int,void *);
  void * _T124;
  struct _fat_ptr _T125;
  struct _fat_ptr _T126;
  int _T127;
  int _T128;
  int _T129;
  int (* _T12A)(int,void *);
  void * _T12B;
  int _T12C;
  int _T12D;
  int _T12E;
  int (* _T12F)(int,void *);
  void * _T130;
  int _T131;
  int _T132;
  int _T133;
  int _T134;
  int _T135;
  int _T136;
  struct _fat_ptr fmt;
  register int ch;
  register int n;
  struct _fat_ptr cp = _tag_fat(0,0,0);
  struct _fat_ptr cp2 = _tag_fat(0,0,0);
  struct _fat_ptr cp3 = _tag_fat(0,0,0);
  int which_cp;
  struct _fat_ptr fmark;
  register int flags;
  int ret;
  int width;
  int prec;
  char sign;
  char sign_string[2U];
  _T0 = sign_string;
  _T0[0] = '\000';
  _T1 = sign_string;
  _T1[1] = '\000';
  { int softsign = 0;
    double _double;
    int fpprec;
    unsigned long long _ulong;
    int dprec;
    int dpad;
    int fieldsz;
    int size = 0;
    char buf[349U];
    { unsigned int _T137 = 348U;
      unsigned int i;
      i = 0;
      _TL3E: if (i < _T137) { goto _TL3C;
      }else { goto _TL3D;
      }
      _TL3C: _T2 = buf;
      _T3 = i;
      _T2[_T3] = '\000';
      i = i + 1;
      goto _TL3E;
      _TL3D: _T4 = buf;
      _T4[_T137] = 0;
    }{ char ox[2U];
      _T5 = ox;
      _T5[0] = '\000';
      _T6 = ox;
      _T6[1] = '\000';
      { enum Cyc_BASE base;
	fmt = fmt0;
	ret = 0;
	_TL42: if (1) { goto _TL40;
	}else { goto _TL41;
	}
	_TL40: fmark = fmt;
	_T7 = fmt;
	{ unsigned int fmt_sz = _get_fat_size(_T7,sizeof(char));
	  n = 0;
	  _TL46: _T8 = n;
	  _T9 = (unsigned int)_T8;
	  _TA = fmt_sz;
	  if (_T9 < _TA) { goto _TL48;
	  }else { goto _TL45;
	  }
	  _TL48: _TB = fmt;
	  _TC = _TB.curr;
	  _TD = (const char *)_TC;
	  _TE = n;
	  _TF = _TD[_TE];
	  ch = (int)_TF;
	  _T10 = ch;
	  if (_T10 != 0) { goto _TL47;
	  }else { goto _TL45;
	  }
	  _TL47: if (ch != 37) { goto _TL44;
	  }else { goto _TL45;
	  }
	  _TL44: n = n + 1;
	  goto _TL46;
	  _TL45: _T11 = fmt;
	  _T12 = n;
	  fmt = _fat_ptr_plus(_T11,sizeof(char),_T12);
	  _T13 = fmt;
	  _T14 = _T13.curr;
	  _T15 = fmark;
	  _T16 = _T15.curr;
	  _T17 = _T14 - _T16;
	  n = _T17 / sizeof(char);
	  _T18 = n;
	  if (_T18 == 0) { goto _TL49;
	  }
	  _TL4B: _T19 = ioputc;
	  _T1A = ioputc_env;
	  _T1B = fmark;
	  _T1C = _T1B;
	  _T1D = n;
	  _T1E = Cyc__IO_sputn(_T19,_T1A,_T1C,_T1D);
	  _T1F = n;
	  if (_T1E == _T1F) { goto _TL4D;
	  }
	  goto error;
	  _TL4D: if (0) { goto _TL4B;
	  }else { goto _TL4C;
	  }
	  _TL4C: _T20 = n;
	  ret = ret + _T20;
	  goto _TL4A;
	  _TL49: _TL4A: if (ch != 0) { goto _TL4F;
	  }
	  goto done;
	  _TL4F: _T21 = &fmt;
	  _fat_ptr_inplace_plus(_T21,sizeof(char),1);
	  flags = 0;
	  dprec = 0;
	  fpprec = 0;
	  width = 0;
	  prec = - 1;
	  sign = '\000';
	  rflag: _T22 = &fmt;
	  _T23 = _fat_ptr_inplace_plus_post(_T22,sizeof(char),1);
	  _T24 = _check_fat_subscript(_T23,sizeof(char),0U);
	  _T25 = (const char *)_T24;
	  _T26 = *_T25;
	  ch = (int)_T26;
	  reswitch: which_cp = 0;
	  _T27 = ch;
	  _T28 = (int)_T27;
	  switch (_T28) {
	  case 32: 
	    _T29 = sign;
	    _T2A = (int)_T29;
	    if (_T2A) { goto _TL52;
	    }else { goto _TL54;
	    }
	    _TL54: sign = ' ';
	    goto _TL53;
	    _TL52: _TL53: goto rflag;
	  case 35: 
	    flags = flags | 8;
	    goto rflag;
	  case 42: 
	    width = Cyc_va_arg_int(ap);
	    _T2B = &ap;
	    _fat_ptr_inplace_plus(_T2B,sizeof(void *),1);
	    if (width < 0) { goto _TL55;
	    }
	    goto rflag;
	    _TL55: width = - width;
	    goto _LL8;
	  case 45: 
	    _LL8: flags = flags | 16;
	    _T2C = ~ 32;
	    flags = flags & _T2C;
	    goto rflag;
	  case 43: 
	    sign = '+';
	    goto rflag;
	  case 46: 
	    _T2D = &fmt;
	    _T2E = _fat_ptr_inplace_plus_post(_T2D,sizeof(char),1);
	    _T2F = _check_fat_subscript(_T2E,sizeof(char),0U);
	    _T30 = (const char *)_T2F;
	    _T31 = *_T30;
	    ch = (int)_T31;
	    _T32 = ch;
	    if (_T32 != 42) { goto _TL57;
	    }
	    n = Cyc_va_arg_int(ap);
	    _T33 = &ap;
	    _fat_ptr_inplace_plus(_T33,sizeof(void *),1);
	    if (n >= 0) { goto _TL59;
	    }
	    _T34 = - 1;
	    goto _TL5A;
	    _TL59: _T34 = n;
	    _TL5A: prec = _T34;
	    goto rflag;
	    _TL57: n = 0;
	    _TL5B: _T35 = ch - 48;
	    _T36 = (unsigned int)_T35;
	    if (_T36 <= 9U) { goto _TL5C;
	    }else { goto _TL5D;
	    }
	    _TL5C: _T37 = 10 * n;
	    _T38 = ch - 48;
	    n = _T37 + _T38;
	    _T39 = &fmt;
	    _T3A = _fat_ptr_inplace_plus_post(_T39,sizeof(char),1);
	    _T3B = _check_fat_subscript(_T3A,sizeof(char),0U);
	    _T3C = (const char *)_T3B;
	    _T3D = *_T3C;
	    ch = (int)_T3D;
	    goto _TL5B;
	    _TL5D: if (n >= 0) { goto _TL5E;
	    }
	    _T3E = - 1;
	    goto _TL5F;
	    _TL5E: _T3E = n;
	    _TL5F: prec = _T3E;
	    goto reswitch;
	  case 48: 
	    if (flags & 16) { goto _TL60;
	    }else { goto _TL62;
	    }
	    _TL62: flags = flags | 32;
	    goto _TL61;
	    _TL60: _TL61: goto rflag;
	  case 49: 
	    goto _LL12;
	  case 50: 
	    _LL12: goto _LL14;
	  case 51: 
	    _LL14: goto _LL16;
	  case 52: 
	    _LL16: goto _LL18;
	  case 53: 
	    _LL18: goto _LL1A;
	  case 54: 
	    _LL1A: goto _LL1C;
	  case 55: 
	    _LL1C: goto _LL1E;
	  case 56: 
	    _LL1E: goto _LL20;
	  case 57: 
	    _LL20: n = 0;
	    _TL63: _T3F = 10 * n;
	    _T40 = ch - 48;
	    n = _T3F + _T40;
	    _T41 = &fmt;
	    _T42 = _fat_ptr_inplace_plus_post(_T41,sizeof(char),1);
	    _T43 = _check_fat_subscript(_T42,sizeof(char),0U);
	    _T44 = (const char *)_T43;
	    _T45 = *_T44;
	    ch = (int)_T45;
	    _T46 = ch - 48;
	    _T47 = (unsigned int)_T46;
	    if (_T47 <= 9U) { goto _TL63;
	    }else { goto _TL64;
	    }
	    _TL64: width = n;
	    goto reswitch;
	  case 76: 
	    flags = flags | 2;
	    goto rflag;
	  case 104: 
	    flags = flags | 4;
	    goto rflag;
	  case 108: 
	    if (! (flags & 1)) { goto _TL65;
	    }
	    flags = flags | 128;
	    _T48 = ~ 1;
	    flags = flags & _T48;
	    goto _TL66;
	    _TL65: flags = flags | 1;
	    _TL66: goto rflag;
	  case 99: 
	    _T49 = buf;
	    cp = _tag_fat(_T49,sizeof(char),349U);
	    { struct _fat_ptr _T137 = cp;
	      _T4A = _T137.curr;
	      _T4B = (char *)_T4A;
	      { char _T138 = *_T4B;
		_T4C = Cyc_va_arg_int(ap);
		{ char _T139 = (char)_T4C;
		  _T4D = _get_fat_size(_T137,sizeof(char));
		  if (_T4D != 1U) { goto _TL67;
		  }
		  if (_T138 != 0) { goto _TL67;
		  }
		  if (_T139 == 0) { goto _TL67;
		  }
		  _throw_arraybounds();
		  goto _TL68;
		  _TL67: _TL68: _T4E = _T137.curr;
		  _T4F = (char *)_T4E;
		  *_T4F = _T139;
		}
	      }
	    }_T50 = &ap;
	    _fat_ptr_inplace_plus(_T50,sizeof(void *),1);
	    size = 1;
	    sign = '\000';
	    goto _LL0;
	  case 68: 
	    flags = flags | 1;
	    goto _LL2C;
	  case 100: 
	    _LL2C: goto _LL2E;
	  case 105: 
	    _LL2E: if (! (flags & 128)) { goto _TL69;
	    }
	    _T51 = Cyc_va_arg_longlong(ap);
	    goto _TL6A;
	    _TL69: if (! (flags & 1)) { goto _TL6B;
	    }
	    _T52 = Cyc_va_arg_long(ap);
	    goto _TL6C;
	    _TL6B: if (! (flags & 4)) { goto _TL6D;
	    }
	    _T54 = Cyc_va_arg_int(ap);
	    _T55 = (short)_T54;
	    _T53 = (long)_T55;
	    goto _TL6E;
	    _TL6D: _T53 = Cyc_va_arg_int(ap);
	    _TL6E: _T52 = _T53;
	    _TL6C: _T51 = (long long)_T52;
	    _TL6A: _ulong = (unsigned long long)_T51;
	    _T56 = &ap;
	    _fat_ptr_inplace_plus(_T56,sizeof(void *),1);
	    _T57 = _ulong;
	    _T58 = (long long)_T57;
	    if (_T58 >= 0) { goto _TL6F;
	    }
	    _ulong = - _ulong;
	    sign = '-';
	    goto _TL70;
	    _TL6F: _TL70: base = 1U;
	    goto number;
	  case 101: 
	    goto _LL32;
	  case 69: 
	    _LL32: goto _LL34;
	  case 102: 
	    _LL34: goto _LL36;
	  case 70: 
	    _LL36: goto _LL38;
	  case 103: 
	    _LL38: goto _LL3A;
	  case 71: 
	    _LL3A: _double = Cyc_va_arg_double(ap);
	    _T59 = &ap;
	    _fat_ptr_inplace_plus(_T59,sizeof(void *),1);
	    if (prec <= 39) { goto _TL71;
	    }
	    if (ch != 103) { goto _TL77;
	    }else { goto _TL76;
	    }
	    _TL77: if (ch != 71) { goto _TL75;
	    }else { goto _TL76;
	    }
	    _TL76: if (flags & 8) { goto _TL75;
	    }else { goto _TL73;
	    }
	    _TL75: fpprec = prec - 39;
	    goto _TL74;
	    _TL73: _TL74: prec = 39;
	    goto _TL72;
	    _TL71: _T5A = prec;
	    _T5B = - 1;
	    if (_T5A != _T5B) { goto _TL78;
	    }
	    prec = 6;
	    goto _TL79;
	    _TL78: _TL79: _TL72: _T5C = buf;
	    cp = _tag_fat(_T5C,sizeof(char),349U);
	    { struct _fat_ptr _T137 = cp;
	      _T5D = _T137.curr;
	      _T5E = (char *)_T5D;
	      { char _T138 = *_T5E;
		char _T139 = '\000';
		_T5F = _get_fat_size(_T137,sizeof(char));
		if (_T5F != 1U) { goto _TL7A;
		}
		if (_T138 != 0) { goto _TL7A;
		}
		if (_T139 == 0) { goto _TL7A;
		}
		_throw_arraybounds();
		goto _TL7B;
		_TL7A: _TL7B: _T60 = _T137.curr;
		_T61 = (char *)_T60;
		*_T61 = _T139;
	      }
	    }_T62 = _double;
	    _T63 = prec;
	    _T64 = flags;
	    _T65 = &softsign;
	    _T66 = ch;
	    _T67 = cp;
	    _T68 = buf;
	    _T69 = _tag_fat(_T68,sizeof(char),349U);
	    _T6A = sizeof(buf);
	    _T6B = _T6A - 1U;
	    _T6C = (int)_T6B;
	    _T6D = _fat_ptr_plus(_T69,sizeof(char),_T6C);
	    size = Cyc___cvt_double(_T62,_T63,_T64,_T65,_T66,_T67,_T6D);
	    _T6E = softsign;
	    if (! _T6E) { goto _TL7C;
	    }
	    sign = '-';
	    goto _TL7D;
	    _TL7C: _TL7D: _T6F = cp;
	    _T70 = _T6F.curr;
	    _T71 = (char *)_T70;
	    _T72 = *_T71;
	    _T73 = (int)_T72;
	    if (_T73 != 0) { goto _TL7E;
	    }
	    _T74 = &cp;
	    _fat_ptr_inplace_plus(_T74,sizeof(char),1);
	    goto _TL7F;
	    _TL7E: _TL7F: goto _LL0;
	  case 110: 
	    if (! (flags & 128)) { goto _TL80;
	    }
	    _T75 = Cyc_va_arg_longlong_ptr(ap);
	    _T76 = ret;
	    *_T75 = (unsigned long long)_T76;
	    goto _TL81;
	    _TL80: if (! (flags & 1)) { goto _TL82;
	    }
	    _T77 = Cyc_va_arg_int_ptr(ap);
	    _T78 = ret;
	    *_T77 = (unsigned long)_T78;
	    goto _TL83;
	    _TL82: if (! (flags & 4)) { goto _TL84;
	    }
	    _T79 = Cyc_va_arg_short_ptr(ap);
	    _T7A = ret;
	    *_T79 = (short)_T7A;
	    goto _TL85;
	    _TL84: _T7B = Cyc_va_arg_int_ptr(ap);
	    _T7C = ret;
	    *_T7B = (unsigned long)_T7C;
	    _TL85: _TL83: _TL81: _T7D = &ap;
	    _fat_ptr_inplace_plus(_T7D,sizeof(void *),1);
	    goto _TL3F;
	  case 79: 
	    flags = flags | 1;
	    goto _LL40;
	  case 111: 
	    _LL40: if (! (flags & 128)) { goto _TL86;
	    }
	    _T7E = Cyc_va_arg_ulonglong(ap);
	    goto _TL87;
	    _TL86: if (! (flags & 1)) { goto _TL88;
	    }
	    _T7F = Cyc_va_arg_ulong(ap);
	    goto _TL89;
	    _TL88: if (! (flags & 4)) { goto _TL8A;
	    }
	    _T81 = Cyc_va_arg_int(ap);
	    _T82 = (unsigned short)_T81;
	    _T80 = (unsigned long)_T82;
	    goto _TL8B;
	    _TL8A: _T80 = Cyc_va_arg_uint(ap);
	    _TL8B: _T7F = _T80;
	    _TL89: _T7E = (unsigned long long)_T7F;
	    _TL87: _ulong = _T7E;
	    _T83 = &ap;
	    _fat_ptr_inplace_plus(_T83,sizeof(void *),1);
	    base = 0U;
	    goto nosign;
	  case 112: 
	    _T84 = Cyc_va_arg_long(ap);
	    _ulong = (unsigned long long)_T84;
	    _T85 = &ap;
	    _fat_ptr_inplace_plus(_T85,sizeof(void *),1);
	    base = 2U;
	    flags = flags | 64;
	    ch = 120;
	    goto nosign;
	  case 115: 
	    { struct _fat_ptr b = Cyc_va_arg_string(ap);
	      _T86 = &ap;
	      _fat_ptr_inplace_plus(_T86,sizeof(void *),1);
	      which_cp = 3;
	      cp3 = b;
	      if (prec < 0) { goto _TL8C;
	      }
	      { struct _fat_ptr p = Cyc_my_nzmemchr(cp3,'\000',prec);
		_T87 = p;
		_T88 = _T87.curr;
		_T89 = (char *)_T88;
		if (_T89 == 0) { goto _TL8E;
		}
		_T8A = p;
		_T8B = _T8A.curr;
		_T8C = cp3;
		_T8D = _T8C.curr;
		_T8E = _T8B - _T8D;
		size = _T8E / sizeof(char);
		if (size <= prec) { goto _TL90;
		}
		size = prec;
		goto _TL91;
		_TL90: _TL91: goto _TL8F;
		_TL8E: size = prec;
		_TL8F: ;
	      }goto _TL8D;
	      _TL8C: _T8F = Cyc_my_strlen(cp3);
	      size = (int)_T8F;
	      _TL8D: sign = '\000';
	      goto _LL0;
	    }
	  case 85: 
	    flags = flags | 1;
	    goto _LL48;
	  case 117: 
	    _LL48: if (! (flags & 128)) { goto _TL92;
	    }
	    _T90 = Cyc_va_arg_ulonglong(ap);
	    goto _TL93;
	    _TL92: if (! (flags & 1)) { goto _TL94;
	    }
	    _T91 = Cyc_va_arg_ulong(ap);
	    goto _TL95;
	    _TL94: if (! (flags & 4)) { goto _TL96;
	    }
	    _T93 = Cyc_va_arg_int(ap);
	    _T94 = (unsigned short)_T93;
	    _T92 = (unsigned long)_T94;
	    goto _TL97;
	    _TL96: _T92 = Cyc_va_arg_uint(ap);
	    _TL97: _T91 = _T92;
	    _TL95: _T90 = (unsigned long long)_T91;
	    _TL93: _ulong = _T90;
	    _T95 = &ap;
	    _fat_ptr_inplace_plus(_T95,sizeof(void *),1);
	    base = 1U;
	    goto nosign;
	  case 88: 
	    goto _LL4C;
	  case 120: 
	    _LL4C: if (! (flags & 128)) { goto _TL98;
	    }
	    _T96 = Cyc_va_arg_ulonglong(ap);
	    goto _TL99;
	    _TL98: if (! (flags & 1)) { goto _TL9A;
	    }
	    _T97 = Cyc_va_arg_ulong(ap);
	    goto _TL9B;
	    _TL9A: if (! (flags & 4)) { goto _TL9C;
	    }
	    _T99 = Cyc_va_arg_int(ap);
	    _T9A = (unsigned short)_T99;
	    _T98 = (unsigned long)_T9A;
	    goto _TL9D;
	    _TL9C: _T98 = Cyc_va_arg_uint(ap);
	    _TL9D: _T97 = _T98;
	    _TL9B: _T96 = (unsigned long long)_T97;
	    _TL99: _ulong = _T96;
	    _T9B = &ap;
	    _fat_ptr_inplace_plus(_T9B,sizeof(void *),1);
	    base = 2U;
	    if (! (flags & 8)) { goto _TL9E;
	    }
	    if (_ulong == 0U) { goto _TL9E;
	    }
	    flags = flags | 64;
	    goto _TL9F;
	    _TL9E: _TL9F: nosign: sign = '\000';
	    number: dprec = prec;
	    _T9C = dprec;
	    if (_T9C < 0) { goto _TLA0;
	    }
	    _T9D = ~ 32;
	    flags = flags & _T9D;
	    goto _TLA1;
	    _TLA0: _TLA1: _T9E = buf;
	    _T9F = _tag_fat(_T9E,sizeof(char),349U);
	    _TA0 = 308 + 39;
	    _TA1 = _TA0 + 1;
	    cp = _fat_ptr_plus(_T9F,sizeof(char),_TA1);
	    if (_ulong != 0U) { goto _TLA4;
	    }else { goto _TLA5;
	    }
	    _TLA5: if (prec != 0) { goto _TLA4;
	    }else { goto _TLA2;
	    }
	    _TLA4: { struct _fat_ptr xdigs;
	      _TA2 = base;
	      _TA3 = (int)_TA2;
	      switch (_TA3) {
	      case Cyc_OCT: 
		_TLA7: _TA4 = &cp;
		{ struct _fat_ptr _T137 = _fat_ptr_inplace_plus(_TA4,sizeof(char),
								-1);
		  _TA5 = _check_fat_subscript(_T137,sizeof(char),0U);
		  _TA6 = (char *)_TA5;
		  { char _T138 = *_TA6;
		    _TA7 = _ulong & 7U;
		    _TA8 = _TA7 + 48U;
		    { char _T139 = (char)_TA8;
		      _TA9 = _get_fat_size(_T137,sizeof(char));
		      if (_TA9 != 1U) { goto _TLA9;
		      }
		      if (_T138 != 0) { goto _TLA9;
		      }
		      if (_T139 == 0) { goto _TLA9;
		      }
		      _throw_arraybounds();
		      goto _TLAA;
		      _TLA9: _TLAA: _TAA = _T137.curr;
		      _TAB = (char *)_TAA;
		      *_TAB = _T139;
		    }
		  }
		}_ulong = _ulong >> 3;
		_TAC = _ulong;
		_TAD = (int)_TAC;
		if (_TAD) { goto _TLA7;
		}else { goto _TLA8;
		}
		_TLA8: if (! (flags & 8)) { goto _TLAB;
		}
		_TAE = cp;
		_TAF = _check_fat_subscript(_TAE,sizeof(char),0U);
		_TB0 = (char *)_TAF;
		_TB1 = *_TB0;
		_TB2 = (int)_TB1;
		if (_TB2 == 48) { goto _TLAB;
		}
		_TB3 = &cp;
		{ struct _fat_ptr _T137 = _fat_ptr_inplace_plus(_TB3,sizeof(char),
								-1);
		  _TB4 = _check_fat_subscript(_T137,sizeof(char),0U);
		  _TB5 = (char *)_TB4;
		  { char _T138 = *_TB5;
		    char _T139 = '0';
		    _TB6 = _get_fat_size(_T137,sizeof(char));
		    if (_TB6 != 1U) { goto _TLAD;
		    }
		    if (_T138 != 0) { goto _TLAD;
		    }
		    if (_T139 == 0) { goto _TLAD;
		    }
		    _throw_arraybounds();
		    goto _TLAE;
		    _TLAD: _TLAE: _TB7 = _T137.curr;
		    _TB8 = (char *)_TB7;
		    *_TB8 = _T139;
		  }
		}goto _TLAC;
		_TLAB: _TLAC: goto _LL4F;
	      case Cyc_DEC: 
		_TLAF: if (_ulong >= 10U) { goto _TLB0;
		}else { goto _TLB1;
		}
		_TLB0: _TB9 = &cp;
		{ struct _fat_ptr _T137 = _fat_ptr_inplace_plus(_TB9,sizeof(char),
								-1);
		  _TBA = _check_fat_subscript(_T137,sizeof(char),0U);
		  _TBB = (char *)_TBA;
		  { char _T138 = *_TBB;
		    _TBC = _ulong % 10U;
		    _TBD = _TBC + 48U;
		    { char _T139 = (char)_TBD;
		      _TBE = _get_fat_size(_T137,sizeof(char));
		      if (_TBE != 1U) { goto _TLB2;
		      }
		      if (_T138 != 0) { goto _TLB2;
		      }
		      if (_T139 == 0) { goto _TLB2;
		      }
		      _throw_arraybounds();
		      goto _TLB3;
		      _TLB2: _TLB3: _TBF = _T137.curr;
		      _TC0 = (char *)_TBF;
		      *_TC0 = _T139;
		    }
		  }
		}_ulong = _ulong / 10U;
		goto _TLAF;
		_TLB1: _TC1 = &cp;
		{ struct _fat_ptr _T137 = _fat_ptr_inplace_plus(_TC1,sizeof(char),
								-1);
		  _TC2 = _check_fat_subscript(_T137,sizeof(char),0U);
		  _TC3 = (char *)_TC2;
		  { char _T138 = *_TC3;
		    _TC4 = _ulong + 48U;
		    { char _T139 = (char)_TC4;
		      _TC5 = _get_fat_size(_T137,sizeof(char));
		      if (_TC5 != 1U) { goto _TLB4;
		      }
		      if (_T138 != 0) { goto _TLB4;
		      }
		      if (_T139 == 0) { goto _TLB4;
		      }
		      _throw_arraybounds();
		      goto _TLB5;
		      _TLB4: _TLB5: _TC6 = _T137.curr;
		      _TC7 = (char *)_TC6;
		      *_TC7 = _T139;
		    }
		  }
		}goto _LL4F;
	      case Cyc_HEX: 
		if (ch != 88) { goto _TLB6;
		}
		xdigs = _tag_fat("0123456789ABCDEF",sizeof(char),17U);
		goto _TLB7;
		_TLB6: xdigs = _tag_fat("0123456789abcdef",sizeof(char),17U);
		_TLB7: _TLB8: _TC8 = &cp;
		{ struct _fat_ptr _T137 = _fat_ptr_inplace_plus(_TC8,sizeof(char),
								-1);
		  _TC9 = _check_fat_subscript(_T137,sizeof(char),0U);
		  _TCA = (char *)_TC9;
		  { char _T138 = *_TCA;
		    _TCB = xdigs;
		    _TCC = _ulong & 15U;
		    _TCD = (int)_TCC;
		    _TCE = _check_fat_subscript(_TCB,sizeof(char),_TCD);
		    _TCF = (const char *)_TCE;
		    { char _T139 = *_TCF;
		      _TD0 = _get_fat_size(_T137,sizeof(char));
		      if (_TD0 != 1U) { goto _TLBA;
		      }
		      if (_T138 != 0) { goto _TLBA;
		      }
		      if (_T139 == 0) { goto _TLBA;
		      }
		      _throw_arraybounds();
		      goto _TLBB;
		      _TLBA: _TLBB: _TD1 = _T137.curr;
		      _TD2 = (char *)_TD1;
		      *_TD2 = _T139;
		    }
		  }
		}_ulong = _ulong >> 4;
		_TD3 = _ulong;
		_TD4 = (int)_TD3;
		if (_TD4) { goto _TLB8;
		}else { goto _TLB9;
		}
		_TLB9: goto _LL4F;
	      default: 
		_TD5 = _tag_fat("bug in vform: bad base",sizeof(char),23U);
		cp = Cyc_strdup(_TD5);
		goto skipsize;
	      }
	      _LL4F: ;
	    }goto _TLA3;
	    _TLA2: _TLA3: _TD6 = buf;
	    _TD7 = _tag_fat(_TD6,sizeof(char),349U);
	    _TD8 = 308 + 39;
	    _TD9 = _TD8 + 1;
	    _TDA = _fat_ptr_plus(_TD7,sizeof(char),_TD9);
	    _TDB = _TDA.curr;
	    _TDC = cp;
	    _TDD = _TDC.curr;
	    _TDE = _TDB - _TDD;
	    size = _TDE / sizeof(char);
	    skipsize: goto _LL0;
	  default: 
	    if (ch != 0) { goto _TLBC;
	    }
	    goto done;
	    _TLBC: _TDF = buf;
	    cp = _tag_fat(_TDF,sizeof(char),349U);
	    { struct _fat_ptr _T137 = cp;
	      _TE0 = _T137.curr;
	      _TE1 = (char *)_TE0;
	      { char _T138 = *_TE1;
		_TE2 = ch;
		{ char _T139 = (char)_TE2;
		  _TE3 = _get_fat_size(_T137,sizeof(char));
		  if (_TE3 != 1U) { goto _TLBE;
		  }
		  if (_T138 != 0) { goto _TLBE;
		  }
		  if (_T139 == 0) { goto _TLBE;
		  }
		  _throw_arraybounds();
		  goto _TLBF;
		  _TLBE: _TLBF: _TE4 = _T137.curr;
		  _TE5 = (char *)_TE4;
		  *_TE5 = _T139;
		}
	      }
	    }size = 1;
	    sign = '\000';
	    goto _LL0;
	  }
	  _LL0: fieldsz = size + fpprec;
	  dpad = dprec - size;
	  if (dpad >= 0) { goto _TLC0;
	  }
	  dpad = 0;
	  goto _TLC1;
	  _TLC0: _TLC1: _TE6 = sign;
	  _TE7 = (int)_TE6;
	  if (! _TE7) { goto _TLC2;
	  }
	  fieldsz = fieldsz + 1;
	  goto _TLC3;
	  _TLC2: if (! (flags & 64)) { goto _TLC4;
	  }
	  fieldsz = fieldsz + 2;
	  goto _TLC5;
	  _TLC4: _TLC5: _TLC3: _TE8 = dpad;
	  fieldsz = fieldsz + _TE8;
	  _TE9 = flags;
	  _TEA = 16 | 32;
	  _TEB = _TE9 & _TEA;
	  if (_TEB != 0) { goto _TLC6;
	  }
	  _TEC = ioputc;
	  _TED = ioputc_env;
	  _TEE = width - fieldsz;
	  _TEF = Cyc__IO_padn(_TEC,_TED,' ',_TEE);
	  _TF0 = width - fieldsz;
	  if (_TEF >= _TF0) { goto _TLC8;
	  }
	  goto error;
	  _TLC8: goto _TLC7;
	  _TLC6: _TLC7: _TF1 = sign;
	  _TF2 = (int)_TF1;
	  if (! _TF2) { goto _TLCA;
	  }
	  _TF3 = sign_string;
	  _TF4 = _tag_fat(_TF3,sizeof(char),2U);
	  { struct _fat_ptr _T137 = _fat_ptr_plus(_TF4,sizeof(char),0);
	    _TF5 = _check_fat_subscript(_T137,sizeof(char),0U);
	    _TF6 = (char *)_TF5;
	    { char _T138 = *_TF6;
	      char _T139 = sign;
	      _TF7 = _get_fat_size(_T137,sizeof(char));
	      if (_TF7 != 1U) { goto _TLCC;
	      }
	      if (_T138 != 0) { goto _TLCC;
	      }
	      if (_T139 == 0) { goto _TLCC;
	      }
	      _throw_arraybounds();
	      goto _TLCD;
	      _TLCC: _TLCD: _TF8 = _T137.curr;
	      _TF9 = (char *)_TF8;
	      *_TF9 = _T139;
	    }
	  }_TLCE: _TFA = ioputc;
	  _TFB = ioputc_env;
	  _TFC = sign_string;
	  _TFD = _tag_fat(_TFC,sizeof(char),2U);
	  _TFE = _TFD;
	  _TFF = Cyc__IO_sputn(_TFA,_TFB,_TFE,1);
	  if (_TFF == 1) { goto _TLD0;
	  }
	  goto error;
	  _TLD0: if (0) { goto _TLCE;
	  }else { goto _TLCF;
	  }
	  _TLCF: goto _TLCB;
	  _TLCA: if (! (flags & 64)) { goto _TLD2;
	  }
	  _T100 = ox;
	  _T100[0] = '0';
	  _T101 = ox;
	  _T102 = ch;
	  _T101[1] = (char)_T102;
	  _TLD4: _T103 = ioputc;
	  _T104 = ioputc_env;
	  _T105 = ox;
	  _T106 = _tag_fat(_T105,sizeof(char),2U);
	  _T107 = Cyc__IO_nzsputn(_T103,_T104,_T106,2);
	  if (_T107 == 2) { goto _TLD6;
	  }
	  goto error;
	  _TLD6: if (0) { goto _TLD4;
	  }else { goto _TLD5;
	  }
	  _TLD5: goto _TLD3;
	  _TLD2: _TLD3: _TLCB: _T108 = flags;
	  _T109 = 16 | 32;
	  _T10A = _T108 & _T109;
	  if (_T10A != 32) { goto _TLD8;
	  }
	  _T10B = ioputc;
	  _T10C = ioputc_env;
	  _T10D = width - fieldsz;
	  _T10E = Cyc__IO_padn(_T10B,_T10C,'0',_T10D);
	  _T10F = width - fieldsz;
	  if (_T10E >= _T10F) { goto _TLDA;
	  }
	  goto error;
	  _TLDA: goto _TLD9;
	  _TLD8: _TLD9: _T110 = ioputc;
	  _T111 = ioputc_env;
	  _T112 = dpad;
	  _T113 = Cyc__IO_padn(_T110,_T111,'0',_T112);
	  _T114 = dpad;
	  if (_T113 >= _T114) { goto _TLDC;
	  }
	  goto error;
	  _TLDC: if (which_cp != 0) { goto _TLDE;
	  }
	  _TLE0: _T115 = ioputc;
	  _T116 = ioputc_env;
	  _T117 = cp;
	  _T118 = _T117;
	  _T119 = size;
	  _T11A = Cyc__IO_sputn(_T115,_T116,_T118,_T119);
	  _T11B = size;
	  if (_T11A == _T11B) { goto _TLE2;
	  }
	  goto error;
	  _TLE2: if (0) { goto _TLE0;
	  }else { goto _TLE1;
	  }
	  _TLE1: goto _TLDF;
	  _TLDE: if (which_cp != 2) { goto _TLE4;
	  }
	  _TLE6: _T11C = ioputc;
	  _T11D = ioputc_env;
	  _T11E = cp2;
	  _T11F = _T11E;
	  _T120 = size;
	  _T121 = Cyc__IO_sputn(_T11C,_T11D,_T11F,_T120);
	  _T122 = size;
	  if (_T121 == _T122) { goto _TLE8;
	  }
	  goto error;
	  _TLE8: if (0) { goto _TLE6;
	  }else { goto _TLE7;
	  }
	  _TLE7: goto _TLE5;
	  _TLE4: if (which_cp != 3) { goto _TLEA;
	  }
	  _TLEC: _T123 = ioputc;
	  _T124 = ioputc_env;
	  _T125 = cp3;
	  _T126 = _T125;
	  _T127 = size;
	  _T128 = Cyc__IO_nzsputn(_T123,_T124,_T126,_T127);
	  _T129 = size;
	  if (_T128 == _T129) { goto _TLEE;
	  }
	  goto error;
	  _TLEE: if (0) { goto _TLEC;
	  }else { goto _TLED;
	  }
	  _TLED: goto _TLEB;
	  _TLEA: _TLEB: _TLE5: _TLDF: _T12A = ioputc;
	  _T12B = ioputc_env;
	  _T12C = fpprec;
	  _T12D = Cyc__IO_padn(_T12A,_T12B,'0',_T12C);
	  _T12E = fpprec;
	  if (_T12D >= _T12E) { goto _TLF0;
	  }
	  goto error;
	  _TLF0: if (! (flags & 16)) { goto _TLF2;
	  }
	  _T12F = ioputc;
	  _T130 = ioputc_env;
	  _T131 = width - fieldsz;
	  _T132 = Cyc__IO_padn(_T12F,_T130,' ',_T131);
	  _T133 = width - fieldsz;
	  if (_T132 >= _T133) { goto _TLF4;
	  }
	  goto error;
	  _TLF4: goto _TLF3;
	  _TLF2: _TLF3: if (width <= fieldsz) { goto _TLF6;
	  }
	  _T134 = width;
	  goto _TLF7;
	  _TLF6: _T134 = fieldsz;
	  _TLF7: ret = ret + _T134;
	}_TL3F: goto _TL42;
	_TL41: done: _T135 = ret;
	return _T135;
	error: _T136 = - 1;
	return _T136;
      }
    }
  }
}
static struct _fat_ptr Cyc_exponent(struct _fat_ptr p,int exp,int fmtch) {
  char * _T0;
  unsigned int _T1;
  char * _T2;
  char * _T3;
  struct _fat_ptr * _T4;
  unsigned char * _T5;
  char * _T6;
  int _T7;
  unsigned int _T8;
  unsigned char * _T9;
  char * _TA;
  struct _fat_ptr * _TB;
  unsigned char * _TC;
  char * _TD;
  unsigned int _TE;
  unsigned char * _TF;
  char * _T10;
  struct _fat_ptr * _T11;
  unsigned char * _T12;
  char * _T13;
  unsigned int _T14;
  unsigned char * _T15;
  char * _T16;
  struct _fat_ptr _T17;
  struct _fat_ptr * _T18;
  unsigned char * _T19;
  char * _T1A;
  int _T1B;
  int _T1C;
  unsigned int _T1D;
  unsigned char * _T1E;
  char * _T1F;
  int _T20;
  struct _fat_ptr * _T21;
  unsigned char * _T22;
  char * _T23;
  int _T24;
  unsigned int _T25;
  unsigned char * _T26;
  char * _T27;
  struct _fat_ptr _T28;
  unsigned char * _T29;
  char * _T2A;
  struct _fat_ptr _T2B;
  struct _fat_ptr _T2C;
  unsigned char * _T2D;
  char * _T2E;
  struct _fat_ptr * _T2F;
  unsigned char * _T30;
  char * _T31;
  struct _fat_ptr * _T32;
  struct _fat_ptr _T33;
  unsigned char * _T34;
  char * _T35;
  unsigned int _T36;
  unsigned char * _T37;
  char * _T38;
  struct _fat_ptr * _T39;
  unsigned char * _T3A;
  char * _T3B;
  unsigned int _T3C;
  unsigned char * _T3D;
  char * _T3E;
  struct _fat_ptr * _T3F;
  unsigned char * _T40;
  char * _T41;
  int _T42;
  unsigned int _T43;
  unsigned char * _T44;
  char * _T45;
  struct _fat_ptr _T46;
  struct _fat_ptr t;
  char expbuffer[309U];
  { unsigned int _T47 = 308U;
    unsigned int i;
    i = 0;
    _TLFB: if (i < _T47) { goto _TLF9;
    }else { goto _TLFA;
    }
    _TLF9: _T0 = expbuffer;
    _T1 = i;
    _T0[_T1] = '0';
    i = i + 1;
    goto _TLFB;
    _TLFA: _T2 = expbuffer;
    _T2[_T47] = 0;
  }_T3 = expbuffer;
  { struct _fat_ptr expbuf = _tag_fat(_T3,sizeof(char),309U);
    _T4 = &p;
    { struct _fat_ptr _T47 = _fat_ptr_inplace_plus_post(_T4,sizeof(char),
							1);
      _T5 = _T47.curr;
      _T6 = (char *)_T5;
      { char _T48 = *_T6;
	_T7 = fmtch;
	{ char _T49 = (char)_T7;
	  _T8 = _get_fat_size(_T47,sizeof(char));
	  if (_T8 != 1U) { goto _TLFC;
	  }
	  if (_T48 != 0) { goto _TLFC;
	  }
	  if (_T49 == 0) { goto _TLFC;
	  }
	  _throw_arraybounds();
	  goto _TLFD;
	  _TLFC: _TLFD: _T9 = _T47.curr;
	  _TA = (char *)_T9;
	  *_TA = _T49;
	}
      }
    }if (exp >= 0) { goto _TLFE;
    }
    exp = - exp;
    _TB = &p;
    { struct _fat_ptr _T47 = _fat_ptr_inplace_plus_post(_TB,sizeof(char),
							1);
      _TC = _T47.curr;
      _TD = (char *)_TC;
      { char _T48 = *_TD;
	char _T49 = '-';
	_TE = _get_fat_size(_T47,sizeof(char));
	if (_TE != 1U) { goto _TL100;
	}
	if (_T48 != 0) { goto _TL100;
	}
	if (_T49 == 0) { goto _TL100;
	}
	_throw_arraybounds();
	goto _TL101;
	_TL100: _TL101: _TF = _T47.curr;
	_T10 = (char *)_TF;
	*_T10 = _T49;
      }
    }goto _TLFF;
    _TLFE: _T11 = &p;
    { struct _fat_ptr _T47 = _fat_ptr_inplace_plus_post(_T11,sizeof(char),
							1);
      _T12 = _T47.curr;
      _T13 = (char *)_T12;
      { char _T48 = *_T13;
	char _T49 = '+';
	_T14 = _get_fat_size(_T47,sizeof(char));
	if (_T14 != 1U) { goto _TL102;
	}
	if (_T48 != 0) { goto _TL102;
	}
	if (_T49 == 0) { goto _TL102;
	}
	_throw_arraybounds();
	goto _TL103;
	_TL102: _TL103: _T15 = _T47.curr;
	_T16 = (char *)_T15;
	*_T16 = _T49;
      }
    }_TLFF: _T17 = expbuf;
    t = _fat_ptr_plus(_T17,sizeof(char),308);
    if (exp <= 9) { goto _TL104;
    }
    _TL106: _T18 = &t;
    { struct _fat_ptr _T47 = _fat_ptr_inplace_plus(_T18,sizeof(char),-1);
      _T19 = _T47.curr;
      _T1A = (char *)_T19;
      { char _T48 = *_T1A;
	_T1B = exp % 10;
	_T1C = _T1B + 48;
	{ char _T49 = (char)_T1C;
	  _T1D = _get_fat_size(_T47,sizeof(char));
	  if (_T1D != 1U) { goto _TL108;
	  }
	  if (_T48 != 0) { goto _TL108;
	  }
	  if (_T49 == 0) { goto _TL108;
	  }
	  _throw_arraybounds();
	  goto _TL109;
	  _TL108: _TL109: _T1E = _T47.curr;
	  _T1F = (char *)_T1E;
	  *_T1F = _T49;
	}
      }
    }exp = exp / 10;
    _T20 = exp;
    if (_T20 > 9) { goto _TL106;
    }else { goto _TL107;
    }
    _TL107: _T21 = &t;
    { struct _fat_ptr _T47 = _fat_ptr_inplace_plus(_T21,sizeof(char),-1);
      _T22 = _T47.curr;
      _T23 = (char *)_T22;
      { char _T48 = *_T23;
	_T24 = exp + 48;
	{ char _T49 = (char)_T24;
	  _T25 = _get_fat_size(_T47,sizeof(char));
	  if (_T25 != 1U) { goto _TL10A;
	  }
	  if (_T48 != 0) { goto _TL10A;
	  }
	  if (_T49 == 0) { goto _TL10A;
	  }
	  _throw_arraybounds();
	  goto _TL10B;
	  _TL10A: _TL10B: _T26 = _T47.curr;
	  _T27 = (char *)_T26;
	  *_T27 = _T49;
	}
      }
    }_TL10F: _T28 = t;
    _T29 = _T28.curr;
    _T2A = (char *)_T29;
    _T2B = expbuf;
    _T2C = _fat_ptr_plus(_T2B,sizeof(char),308);
    _T2D = _T2C.curr;
    _T2E = (char *)_T2D;
    if (_T2A < _T2E) { goto _TL10D;
    }else { goto _TL10E;
    }
    _TL10D: _T2F = &p;
    { struct _fat_ptr _T47 = _fat_ptr_inplace_plus_post(_T2F,sizeof(char),
							1);
      _T30 = _T47.curr;
      _T31 = (char *)_T30;
      { char _T48 = *_T31;
	_T32 = &t;
	_T33 = _fat_ptr_inplace_plus_post(_T32,sizeof(char),1);
	_T34 = _T33.curr;
	_T35 = (char *)_T34;
	{ char _T49 = *_T35;
	  _T36 = _get_fat_size(_T47,sizeof(char));
	  if (_T36 != 1U) { goto _TL110;
	  }
	  if (_T48 != 0) { goto _TL110;
	  }
	  if (_T49 == 0) { goto _TL110;
	  }
	  _throw_arraybounds();
	  goto _TL111;
	  _TL110: _TL111: _T37 = _T47.curr;
	  _T38 = (char *)_T37;
	  *_T38 = _T49;
	}
      }
    }goto _TL10F;
    _TL10E: goto _TL105;
    _TL104: _T39 = &p;
    { struct _fat_ptr _T47 = _fat_ptr_inplace_plus_post(_T39,sizeof(char),
							1);
      _T3A = _T47.curr;
      _T3B = (char *)_T3A;
      { char _T48 = *_T3B;
	char _T49 = '0';
	_T3C = _get_fat_size(_T47,sizeof(char));
	if (_T3C != 1U) { goto _TL112;
	}
	if (_T48 != 0) { goto _TL112;
	}
	if (_T49 == 0) { goto _TL112;
	}
	_throw_arraybounds();
	goto _TL113;
	_TL112: _TL113: _T3D = _T47.curr;
	_T3E = (char *)_T3D;
	*_T3E = _T49;
      }
    }_T3F = &p;
    { struct _fat_ptr _T47 = _fat_ptr_inplace_plus_post(_T3F,sizeof(char),
							1);
      _T40 = _T47.curr;
      _T41 = (char *)_T40;
      { char _T48 = *_T41;
	_T42 = exp + 48;
	{ char _T49 = (char)_T42;
	  _T43 = _get_fat_size(_T47,sizeof(char));
	  if (_T43 != 1U) { goto _TL114;
	  }
	  if (_T48 != 0) { goto _TL114;
	  }
	  if (_T49 == 0) { goto _TL114;
	  }
	  _throw_arraybounds();
	  goto _TL115;
	  _TL114: _TL115: _T44 = _T47.curr;
	  _T45 = (char *)_T44;
	  *_T45 = _T49;
	}
      }
    }_TL105: _T46 = p;
    return _T46;
  }
}
static struct _fat_ptr Cyc_sround(double fract,int * exp,struct _fat_ptr start,
				  struct _fat_ptr end,char ch,int * signp) {
  double _T0;
  double _T1;
  double _T2;
  double * _T3;
  char _T4;
  int _T5;
  int _T6;
  double _T7;
  double _T8;
  struct _fat_ptr _T9;
  unsigned char * _TA;
  char * _TB;
  char _TC;
  int _TD;
  struct _fat_ptr * _TE;
  char _TF;
  unsigned char * _T10;
  char * _T11;
  unsigned int _T12;
  unsigned char * _T13;
  char * _T14;
  int _T15;
  unsigned char * _T16;
  char * _T17;
  unsigned int _T18;
  unsigned char * _T19;
  char * _T1A;
  struct _fat_ptr _T1B;
  unsigned char * _T1C;
  char * _T1D;
  struct _fat_ptr _T1E;
  unsigned char * _T1F;
  char * _T20;
  int * _T21;
  unsigned int _T22;
  unsigned char * _T23;
  char * _T24;
  unsigned int _T25;
  unsigned char * _T26;
  char * _T27;
  int * _T28;
  struct _fat_ptr * _T29;
  unsigned char * _T2A;
  char * _T2B;
  unsigned int _T2C;
  unsigned char * _T2D;
  char * _T2E;
  struct _fat_ptr * _T2F;
  struct _fat_ptr * _T30;
  int * _T31;
  int _T32;
  struct _fat_ptr _T33;
  unsigned char * _T34;
  char * _T35;
  char _T36;
  int _T37;
  struct _fat_ptr * _T38;
  struct _fat_ptr _T39;
  unsigned char * _T3A;
  char * _T3B;
  char _T3C;
  int _T3D;
  struct _fat_ptr _T3E;
  unsigned char * _T3F;
  char * _T40;
  struct _fat_ptr _T41;
  unsigned char * _T42;
  char * _T43;
  int * _T44;
  struct _fat_ptr * _T45;
  struct _fat_ptr _T46;
  double tmp = 0.0;
  if (fract == 0.0) { goto _TL116;
  }
  _T0 = fract;
  _T1 = (double)10;
  _T2 = _T0 * _T1;
  _T3 = &tmp;
  modf(_T2,_T3);
  goto _TL117;
  _TL116: _T4 = ch;
  _T5 = (int)_T4;
  _T6 = _T5 - 48;
  tmp = (double)_T6;
  _TL117: _T7 = tmp;
  _T8 = (double)4;
  if (_T7 <= _T8) { goto _TL118;
  }
  _TL11D: if (1) { goto _TL11B;
  }else { goto _TL11C;
  }
  _TL11B: _T9 = end;
  _TA = _check_fat_subscript(_T9,sizeof(char),0U);
  _TB = (char *)_TA;
  _TC = *_TB;
  _TD = (int)_TC;
  if (_TD != 46) { goto _TL11E;
  }
  _TE = &end;
  _fat_ptr_inplace_plus(_TE,sizeof(char),-1);
  goto _TL11F;
  _TL11E: _TL11F: { struct _fat_ptr _T47 = end;
    _T10 = _check_fat_subscript(_T47,sizeof(char),0U);
    _T11 = (char *)_T10;
    { char _T48 = *_T11;
      char _T49 = _T48 + 1;
      _T12 = _get_fat_size(_T47,sizeof(char));
      if (_T12 != 1U) { goto _TL122;
      }
      if (_T48 != 0) { goto _TL122;
      }
      if (_T49 == 0) { goto _TL122;
      }
      _throw_arraybounds();
      goto _TL123;
      _TL122: _TL123: _T13 = _T47.curr;
      _T14 = (char *)_T13;
      *_T14 = _T49;
      _TF = *_T14;
    }
  }_T15 = (int)_TF;
  if (_T15 > 57) { goto _TL120;
  }
  goto _TL11C;
  _TL120: { struct _fat_ptr _T47 = end;
    _T16 = _T47.curr;
    _T17 = (char *)_T16;
    { char _T48 = *_T17;
      char _T49 = '0';
      _T18 = _get_fat_size(_T47,sizeof(char));
      if (_T18 != 1U) { goto _TL124;
      }
      if (_T48 != 0) { goto _TL124;
      }
      if (_T49 == 0) { goto _TL124;
      }
      _throw_arraybounds();
      goto _TL125;
      _TL124: _TL125: _T19 = _T47.curr;
      _T1A = (char *)_T19;
      *_T1A = _T49;
    }
  }_T1B = end;
  _T1C = _T1B.curr;
  _T1D = (char *)_T1C;
  _T1E = start;
  _T1F = _T1E.curr;
  _T20 = (char *)_T1F;
  if (_T1D != _T20) { goto _TL126;
  }
  _T21 = exp;
  _T22 = (unsigned int)_T21;
  if (! _T22) { goto _TL128;
  }
  { struct _fat_ptr _T47 = end;
    _T23 = _T47.curr;
    _T24 = (char *)_T23;
    { char _T48 = *_T24;
      char _T49 = '1';
      _T25 = _get_fat_size(_T47,sizeof(char));
      if (_T25 != 1U) { goto _TL12A;
      }
      if (_T48 != 0) { goto _TL12A;
      }
      if (_T49 == 0) { goto _TL12A;
      }
      _throw_arraybounds();
      goto _TL12B;
      _TL12A: _TL12B: _T26 = _T47.curr;
      _T27 = (char *)_T26;
      *_T27 = _T49;
    }
  }_T28 = exp;
  *_T28 = *_T28 + 1;
  goto _TL129;
  _TL128: _T29 = &end;
  { struct _fat_ptr _T47 = _fat_ptr_inplace_plus(_T29,sizeof(char),-1);
    _T2A = _check_fat_subscript(_T47,sizeof(char),0U);
    _T2B = (char *)_T2A;
    { char _T48 = *_T2B;
      char _T49 = '1';
      _T2C = _get_fat_size(_T47,sizeof(char));
      if (_T2C != 1U) { goto _TL12C;
      }
      if (_T48 != 0) { goto _TL12C;
      }
      if (_T49 == 0) { goto _TL12C;
      }
      _throw_arraybounds();
      goto _TL12D;
      _TL12C: _TL12D: _T2D = _T47.curr;
      _T2E = (char *)_T2D;
      *_T2E = _T49;
    }
  }_T2F = &start;
  _fat_ptr_inplace_plus(_T2F,sizeof(char),-1);
  _TL129: goto _TL11C;
  _TL126: _T30 = &end;
  _fat_ptr_inplace_plus(_T30,sizeof(char),-1);
  goto _TL11D;
  _TL11C: goto _TL119;
  _TL118: _T31 = signp;
  _T32 = *_T31;
  if (_T32 != 45) { goto _TL12E;
  }
  _TL133: if (1) { goto _TL131;
  }else { goto _TL132;
  }
  _TL131: _T33 = end;
  _T34 = _check_fat_subscript(_T33,sizeof(char),0U);
  _T35 = (char *)_T34;
  _T36 = *_T35;
  _T37 = (int)_T36;
  if (_T37 != 46) { goto _TL134;
  }
  _T38 = &end;
  _fat_ptr_inplace_plus(_T38,sizeof(char),-1);
  goto _TL135;
  _TL134: _TL135: _T39 = end;
  _T3A = _check_fat_subscript(_T39,sizeof(char),0U);
  _T3B = (char *)_T3A;
  _T3C = *_T3B;
  _T3D = (int)_T3C;
  if (_T3D == 48) { goto _TL136;
  }
  goto _TL132;
  _TL136: _T3E = end;
  _T3F = _T3E.curr;
  _T40 = (char *)_T3F;
  _T41 = start;
  _T42 = _T41.curr;
  _T43 = (char *)_T42;
  if (_T40 != _T43) { goto _TL138;
  }
  _T44 = signp;
  *_T44 = 0;
  goto _TL139;
  _TL138: _TL139: _T45 = &end;
  _fat_ptr_inplace_plus(_T45,sizeof(char),-1);
  goto _TL133;
  _TL132: goto _TL12F;
  _TL12E: _TL12F: _TL119: _T46 = start;
  return _T46;
}
int Cyc___cvt_double(double number,int prec,int flags,int * signp,int fmtch,
		     struct _fat_ptr startp,struct _fat_ptr endp) {
  double _T0;
  double _T1;
  int * _T2;
  int * _T3;
  double _T4;
  double * _T5;
  struct _fat_ptr * _T6;
  struct _fat_ptr _T7;
  int _T8;
  struct _fat_ptr _T9;
  unsigned char * _TA;
  char * _TB;
  struct _fat_ptr _TC;
  unsigned char * _TD;
  char * _TE;
  double _TF;
  double _T10;
  double _T11;
  double * _T12;
  struct _fat_ptr * _T13;
  unsigned char * _T14;
  char * _T15;
  double _T16;
  double _T17;
  double _T18;
  int _T19;
  int _T1A;
  unsigned int _T1B;
  unsigned char * _T1C;
  char * _T1D;
  int _T1E;
  int _T1F;
  int _T20;
  struct _fat_ptr * _T21;
  struct _fat_ptr _T22;
  unsigned char * _T23;
  char * _T24;
  struct _fat_ptr _T25;
  unsigned char * _T26;
  char * _T27;
  struct _fat_ptr * _T28;
  unsigned char * _T29;
  char * _T2A;
  struct _fat_ptr _T2B;
  unsigned char * _T2C;
  char * _T2D;
  unsigned int _T2E;
  unsigned char * _T2F;
  char * _T30;
  struct _fat_ptr * _T31;
  unsigned char * _T32;
  char * _T33;
  unsigned int _T34;
  unsigned char * _T35;
  char * _T36;
  int _T37;
  struct _fat_ptr * _T38;
  unsigned char * _T39;
  char * _T3A;
  unsigned int _T3B;
  unsigned char * _T3C;
  char * _T3D;
  int _T3E;
  double _T3F;
  double _T40;
  double _T41;
  double * _T42;
  struct _fat_ptr * _T43;
  unsigned char * _T44;
  char * _T45;
  double _T46;
  int _T47;
  int _T48;
  unsigned int _T49;
  unsigned char * _T4A;
  char * _T4B;
  int _T4C;
  double _T4D;
  struct _fat_ptr _T4E;
  struct _fat_ptr _T4F;
  int _T50;
  struct _fat_ptr _T51;
  int * _T52;
  int _T53;
  int _T54;
  struct _fat_ptr * _T55;
  unsigned char * _T56;
  char * _T57;
  unsigned int _T58;
  unsigned char * _T59;
  char * _T5A;
  int _T5B;
  struct _fat_ptr * _T5C;
  unsigned char * _T5D;
  char * _T5E;
  struct _fat_ptr * _T5F;
  struct _fat_ptr _T60;
  unsigned char * _T61;
  char * _T62;
  unsigned int _T63;
  unsigned char * _T64;
  char * _T65;
  int _T66;
  struct _fat_ptr * _T67;
  unsigned char * _T68;
  char * _T69;
  unsigned int _T6A;
  unsigned char * _T6B;
  char * _T6C;
  int _T6D;
  struct _fat_ptr * _T6E;
  struct _fat_ptr _T6F;
  unsigned char * _T70;
  char * _T71;
  struct _fat_ptr _T72;
  unsigned char * _T73;
  char * _T74;
  struct _fat_ptr * _T75;
  unsigned char * _T76;
  char * _T77;
  struct _fat_ptr _T78;
  unsigned char * _T79;
  char * _T7A;
  unsigned int _T7B;
  unsigned char * _T7C;
  char * _T7D;
  int _T7E;
  struct _fat_ptr * _T7F;
  struct _fat_ptr _T80;
  unsigned char * _T81;
  char * _T82;
  struct _fat_ptr _T83;
  unsigned char * _T84;
  char * _T85;
  double _T86;
  int * _T87;
  struct _fat_ptr _T88;
  struct _fat_ptr _T89;
  int _T8A;
  struct _fat_ptr _T8B;
  struct _fat_ptr _T8C;
  unsigned char * _T8D;
  char * _T8E;
  char _T8F;
  int * _T90;
  double _T91;
  double _T92;
  double _T93;
  double * _T94;
  struct _fat_ptr * _T95;
  unsigned char * _T96;
  char * _T97;
  double _T98;
  int _T99;
  int _T9A;
  unsigned int _T9B;
  unsigned char * _T9C;
  char * _T9D;
  int _T9E;
  struct _fat_ptr * _T9F;
  unsigned char * _TA0;
  char * _TA1;
  unsigned int _TA2;
  unsigned char * _TA3;
  char * _TA4;
  struct _fat_ptr * _TA5;
  unsigned char * _TA6;
  char * _TA7;
  unsigned int _TA8;
  unsigned char * _TA9;
  char * _TAA;
  int _TAB;
  struct _fat_ptr * _TAC;
  unsigned char * _TAD;
  char * _TAE;
  unsigned int _TAF;
  unsigned char * _TB0;
  char * _TB1;
  int _TB2;
  double _TB3;
  double _TB4;
  double _TB5;
  double * _TB6;
  struct _fat_ptr * _TB7;
  unsigned char * _TB8;
  char * _TB9;
  double _TBA;
  int _TBB;
  int _TBC;
  unsigned int _TBD;
  unsigned char * _TBE;
  char * _TBF;
  int _TC0;
  double _TC1;
  int * _TC2;
  struct _fat_ptr _TC3;
  struct _fat_ptr _TC4;
  int _TC5;
  struct _fat_ptr _TC6;
  int * _TC7;
  int _TC8;
  int _TC9;
  struct _fat_ptr * _TCA;
  unsigned char * _TCB;
  char * _TCC;
  unsigned int _TCD;
  unsigned char * _TCE;
  char * _TCF;
  int _TD0;
  struct _fat_ptr _TD1;
  unsigned char * _TD2;
  char * _TD3;
  struct _fat_ptr _TD4;
  unsigned char * _TD5;
  char * _TD6;
  struct _fat_ptr * _TD7;
  struct _fat_ptr _TD8;
  unsigned char * _TD9;
  char * _TDA;
  char _TDB;
  int _TDC;
  struct _fat_ptr _TDD;
  unsigned char * _TDE;
  char * _TDF;
  char _TE0;
  int _TE1;
  struct _fat_ptr * _TE2;
  struct _fat_ptr * _TE3;
  int _TE4;
  int _TE5;
  int _TE6;
  struct _fat_ptr * _TE7;
  struct _fat_ptr _TE8;
  unsigned char * _TE9;
  char * _TEA;
  struct _fat_ptr _TEB;
  unsigned char * _TEC;
  char * _TED;
  struct _fat_ptr * _TEE;
  unsigned char * _TEF;
  char * _TF0;
  struct _fat_ptr _TF1;
  unsigned char * _TF2;
  char * _TF3;
  unsigned int _TF4;
  unsigned char * _TF5;
  char * _TF6;
  struct _fat_ptr * _TF7;
  unsigned char * _TF8;
  char * _TF9;
  unsigned int _TFA;
  unsigned char * _TFB;
  char * _TFC;
  int _TFD;
  struct _fat_ptr * _TFE;
  unsigned char * _TFF;
  char * _T100;
  unsigned int _T101;
  unsigned char * _T102;
  char * _T103;
  int _T104;
  double _T105;
  double _T106;
  double _T107;
  double * _T108;
  struct _fat_ptr * _T109;
  unsigned char * _T10A;
  char * _T10B;
  double _T10C;
  int _T10D;
  int _T10E;
  unsigned int _T10F;
  unsigned char * _T110;
  char * _T111;
  int _T112;
  int _T113;
  double _T114;
  double _T115;
  double _T116;
  double * _T117;
  struct _fat_ptr * _T118;
  unsigned char * _T119;
  char * _T11A;
  double _T11B;
  int _T11C;
  int _T11D;
  unsigned int _T11E;
  unsigned char * _T11F;
  char * _T120;
  double _T121;
  struct _fat_ptr _T122;
  struct _fat_ptr _T123;
  int _T124;
  struct _fat_ptr _T125;
  int * _T126;
  int _T127;
  int _T128;
  struct _fat_ptr * _T129;
  unsigned char * _T12A;
  char * _T12B;
  unsigned int _T12C;
  unsigned char * _T12D;
  char * _T12E;
  int _T12F;
  struct _fat_ptr _T130;
  unsigned char * _T131;
  char * _T132;
  struct _fat_ptr _T133;
  unsigned char * _T134;
  char * _T135;
  struct _fat_ptr * _T136;
  struct _fat_ptr _T137;
  unsigned char * _T138;
  char * _T139;
  char _T13A;
  int _T13B;
  struct _fat_ptr _T13C;
  unsigned char * _T13D;
  char * _T13E;
  char _T13F;
  int _T140;
  struct _fat_ptr * _T141;
  struct Cyc_Core_Impossible_exn_struct * _T142;
  void * _T143;
  struct _fat_ptr _T144;
  unsigned char * _T145;
  struct _fat_ptr _T146;
  unsigned char * _T147;
  int _T148;
  int _T149;
  struct _fat_ptr p;
  struct _fat_ptr t;
  register double fract;
  int dotrim = 0;
  int expcnt;
  int gformat = 0;
  double integer = 0.0;
  double tmp = 0.0;
  expcnt = 0;
  _T0 = number;
  _T1 = (double)0;
  if (_T0 >= _T1) { goto _TL13A;
  }
  number = - number;
  _T2 = signp;
  *_T2 = 45;
  goto _TL13B;
  _TL13A: _T3 = signp;
  *_T3 = 0;
  _TL13B: _T4 = number;
  _T5 = &integer;
  fract = modf(_T4,_T5);
  _T6 = &startp;
  t = _fat_ptr_inplace_plus(_T6,sizeof(char),1);
  _T7 = endp;
  _T8 = - 1;
  p = _fat_ptr_plus(_T7,sizeof(char),_T8);
  _TL13F: _T9 = p;
  _TA = _T9.curr;
  _TB = (char *)_TA;
  _TC = startp;
  _TD = _TC.curr;
  _TE = (char *)_TD;
  if (_TB >= _TE) { goto _TL140;
  }else { goto _TL13E;
  }
  _TL140: if (integer != 0.0) { goto _TL13D;
  }else { goto _TL13E;
  }
  _TL13D: _TF = integer;
  _T10 = (double)10;
  _T11 = _TF / _T10;
  _T12 = &integer;
  tmp = modf(_T11,_T12);
  _T13 = &p;
  { struct _fat_ptr _T14A = _fat_ptr_inplace_plus_post(_T13,sizeof(char),
						       -1);
    _T14 = _check_fat_subscript(_T14A,sizeof(char),0U);
    _T15 = (char *)_T14;
    { char _T14B = *_T15;
      _T16 = tmp + .01;
      _T17 = (double)10;
      _T18 = _T16 * _T17;
      _T19 = (int)_T18;
      _T1A = _T19 + 48;
      { char _T14C = (char)_T1A;
	_T1B = _get_fat_size(_T14A,sizeof(char));
	if (_T1B != 1U) { goto _TL141;
	}
	if (_T14B != 0) { goto _TL141;
	}
	if (_T14C == 0) { goto _TL141;
	}
	_throw_arraybounds();
	goto _TL142;
	_TL141: _TL142: _T1C = _T14A.curr;
	_T1D = (char *)_T1C;
	*_T1D = _T14C;
      }
    }
  }expcnt = expcnt + 1;
  goto _TL13F;
  _TL13E: _T1E = fmtch;
  _T1F = (int)_T1E;
  switch (_T1F) {
  case 102: 
    goto _LL4;
  case 70: 
    _LL4: _T20 = expcnt;
    if (! _T20) { goto _TL144;
    }
    _TL149: _T21 = &p;
    _T22 = _fat_ptr_inplace_plus(_T21,sizeof(char),1);
    _T23 = _T22.curr;
    _T24 = (char *)_T23;
    _T25 = endp;
    _T26 = _T25.curr;
    _T27 = (char *)_T26;
    if (_T24 < _T27) { goto _TL147;
    }else { goto _TL148;
    }
    _TL147: _T28 = &t;
    { struct _fat_ptr _T14A = _fat_ptr_inplace_plus_post(_T28,sizeof(char),
							 1);
      _T29 = _check_fat_subscript(_T14A,sizeof(char),0U);
      _T2A = (char *)_T29;
      { char _T14B = *_T2A;
	_T2B = p;
	_T2C = _check_fat_subscript(_T2B,sizeof(char),0U);
	_T2D = (char *)_T2C;
	{ char _T14C = *_T2D;
	  _T2E = _get_fat_size(_T14A,sizeof(char));
	  if (_T2E != 1U) { goto _TL14A;
	  }
	  if (_T14B != 0) { goto _TL14A;
	  }
	  if (_T14C == 0) { goto _TL14A;
	  }
	  _throw_arraybounds();
	  goto _TL14B;
	  _TL14A: _TL14B: _T2F = _T14A.curr;
	  _T30 = (char *)_T2F;
	  *_T30 = _T14C;
	}
      }
    }goto _TL149;
    _TL148: goto _TL145;
    _TL144: _T31 = &t;
    { struct _fat_ptr _T14A = _fat_ptr_inplace_plus_post(_T31,sizeof(char),
							 1);
      _T32 = _check_fat_subscript(_T14A,sizeof(char),0U);
      _T33 = (char *)_T32;
      { char _T14B = *_T33;
	char _T14C = '0';
	_T34 = _get_fat_size(_T14A,sizeof(char));
	if (_T34 != 1U) { goto _TL14C;
	}
	if (_T14B != 0) { goto _TL14C;
	}
	if (_T14C == 0) { goto _TL14C;
	}
	_throw_arraybounds();
	goto _TL14D;
	_TL14C: _TL14D: _T35 = _T14A.curr;
	_T36 = (char *)_T35;
	*_T36 = _T14C;
      }
    }_TL145: _T37 = prec;
    if (_T37) { goto _TL150;
    }else { goto _TL151;
    }
    _TL151: if (flags & 8) { goto _TL150;
    }else { goto _TL14E;
    }
    _TL150: _T38 = &t;
    { struct _fat_ptr _T14A = _fat_ptr_inplace_plus_post(_T38,sizeof(char),
							 1);
      _T39 = _check_fat_subscript(_T14A,sizeof(char),0U);
      _T3A = (char *)_T39;
      { char _T14B = *_T3A;
	char _T14C = '.';
	_T3B = _get_fat_size(_T14A,sizeof(char));
	if (_T3B != 1U) { goto _TL152;
	}
	if (_T14B != 0) { goto _TL152;
	}
	if (_T14C == 0) { goto _TL152;
	}
	_throw_arraybounds();
	goto _TL153;
	_TL152: _TL153: _T3C = _T14A.curr;
	_T3D = (char *)_T3C;
	*_T3D = _T14C;
      }
    }goto _TL14F;
    _TL14E: _TL14F: if (fract == 0.0) { goto _TL154;
    }
    _T3E = prec;
    if (! _T3E) { goto _TL156;
    }
    _TL158: _T3F = fract;
    _T40 = (double)10;
    _T41 = _T3F * _T40;
    _T42 = &tmp;
    fract = modf(_T41,_T42);
    _T43 = &t;
    { struct _fat_ptr _T14A = _fat_ptr_inplace_plus_post(_T43,sizeof(char),
							 1);
      _T44 = _check_fat_subscript(_T14A,sizeof(char),0U);
      _T45 = (char *)_T44;
      { char _T14B = *_T45;
	_T46 = tmp;
	_T47 = (int)_T46;
	_T48 = _T47 + 48;
	{ char _T14C = (char)_T48;
	  _T49 = _get_fat_size(_T14A,sizeof(char));
	  if (_T49 != 1U) { goto _TL15A;
	  }
	  if (_T14B != 0) { goto _TL15A;
	  }
	  if (_T14C == 0) { goto _TL15A;
	  }
	  _throw_arraybounds();
	  goto _TL15B;
	  _TL15A: _TL15B: _T4A = _T14A.curr;
	  _T4B = (char *)_T4A;
	  *_T4B = _T14C;
	}
      }
    }prec = prec + -1;
    _T4C = prec;
    if (_T4C) { goto _TL15C;
    }else { goto _TL159;
    }
    _TL15C: if (fract != 0.0) { goto _TL158;
    }else { goto _TL159;
    }
    _TL159: goto _TL157;
    _TL156: _TL157: if (fract == 0.0) { goto _TL15D;
    }
    _T4D = fract;
    _T4E = startp;
    _T4F = t;
    _T50 = - 1;
    _T51 = _fat_ptr_plus(_T4F,sizeof(char),_T50);
    _T52 = signp;
    startp = Cyc_sround(_T4D,0,_T4E,_T51,'\000',_T52);
    goto _TL15E;
    _TL15D: _TL15E: goto _TL155;
    _TL154: _TL155: _TL162: _T53 = prec;
    prec = _T53 + -1;
    _T54 = _T53;
    if (_T54) { goto _TL160;
    }else { goto _TL161;
    }
    _TL160: _T55 = &t;
    { struct _fat_ptr _T14A = _fat_ptr_inplace_plus_post(_T55,sizeof(char),
							 1);
      _T56 = _check_fat_subscript(_T14A,sizeof(char),0U);
      _T57 = (char *)_T56;
      { char _T14B = *_T57;
	char _T14C = '0';
	_T58 = _get_fat_size(_T14A,sizeof(char));
	if (_T58 != 1U) { goto _TL163;
	}
	if (_T14B != 0) { goto _TL163;
	}
	if (_T14C == 0) { goto _TL163;
	}
	_throw_arraybounds();
	goto _TL164;
	_TL163: _TL164: _T59 = _T14A.curr;
	_T5A = (char *)_T59;
	*_T5A = _T14C;
      }
    }goto _TL162;
    _TL161: goto _LL0;
  case 101: 
    goto _LL8;
  case 69: 
    _LL8: eformat: _T5B = expcnt;
    if (! _T5B) { goto _TL165;
    }
    _T5C = &t;
    { struct _fat_ptr _T14A = _fat_ptr_inplace_plus_post(_T5C,sizeof(char),
							 1);
      _T5D = _check_fat_subscript(_T14A,sizeof(char),0U);
      _T5E = (char *)_T5D;
      { char _T14B = *_T5E;
	_T5F = &p;
	_T60 = _fat_ptr_inplace_plus(_T5F,sizeof(char),1);
	_T61 = _check_fat_subscript(_T60,sizeof(char),0U);
	_T62 = (char *)_T61;
	{ char _T14C = *_T62;
	  _T63 = _get_fat_size(_T14A,sizeof(char));
	  if (_T63 != 1U) { goto _TL167;
	  }
	  if (_T14B != 0) { goto _TL167;
	  }
	  if (_T14C == 0) { goto _TL167;
	  }
	  _throw_arraybounds();
	  goto _TL168;
	  _TL167: _TL168: _T64 = _T14A.curr;
	  _T65 = (char *)_T64;
	  *_T65 = _T14C;
	}
      }
    }_T66 = prec;
    if (_T66) { goto _TL16B;
    }else { goto _TL16C;
    }
    _TL16C: if (flags & 8) { goto _TL16B;
    }else { goto _TL169;
    }
    _TL16B: _T67 = &t;
    { struct _fat_ptr _T14A = _fat_ptr_inplace_plus_post(_T67,sizeof(char),
							 1);
      _T68 = _check_fat_subscript(_T14A,sizeof(char),0U);
      _T69 = (char *)_T68;
      { char _T14B = *_T69;
	char _T14C = '.';
	_T6A = _get_fat_size(_T14A,sizeof(char));
	if (_T6A != 1U) { goto _TL16D;
	}
	if (_T14B != 0) { goto _TL16D;
	}
	if (_T14C == 0) { goto _TL16D;
	}
	_throw_arraybounds();
	goto _TL16E;
	_TL16D: _TL16E: _T6B = _T14A.curr;
	_T6C = (char *)_T6B;
	*_T6C = _T14C;
      }
    }goto _TL16A;
    _TL169: _TL16A: _TL172: _T6D = prec;
    if (_T6D) { goto _TL173;
    }else { goto _TL171;
    }
    _TL173: _T6E = &p;
    _T6F = _fat_ptr_inplace_plus(_T6E,sizeof(char),1);
    _T70 = _T6F.curr;
    _T71 = (char *)_T70;
    _T72 = endp;
    _T73 = _T72.curr;
    _T74 = (char *)_T73;
    if (_T71 < _T74) { goto _TL170;
    }else { goto _TL171;
    }
    _TL170: _T75 = &t;
    { struct _fat_ptr _T14A = _fat_ptr_inplace_plus_post(_T75,sizeof(char),
							 1);
      _T76 = _check_fat_subscript(_T14A,sizeof(char),0U);
      _T77 = (char *)_T76;
      { char _T14B = *_T77;
	_T78 = p;
	_T79 = _check_fat_subscript(_T78,sizeof(char),0U);
	_T7A = (char *)_T79;
	{ char _T14C = *_T7A;
	  _T7B = _get_fat_size(_T14A,sizeof(char));
	  if (_T7B != 1U) { goto _TL174;
	  }
	  if (_T14B != 0) { goto _TL174;
	  }
	  if (_T14C == 0) { goto _TL174;
	  }
	  _throw_arraybounds();
	  goto _TL175;
	  _TL174: _TL175: _T7C = _T14A.curr;
	  _T7D = (char *)_T7C;
	  *_T7D = _T14C;
	}
      }
    }prec = prec + -1;
    goto _TL172;
    _TL171: _T7E = prec;
    if (_T7E) { goto _TL176;
    }else { goto _TL178;
    }
    _TL178: _T7F = &p;
    _T80 = _fat_ptr_inplace_plus(_T7F,sizeof(char),1);
    _T81 = _T80.curr;
    _T82 = (char *)_T81;
    _T83 = endp;
    _T84 = _T83.curr;
    _T85 = (char *)_T84;
    if (_T82 >= _T85) { goto _TL176;
    }
    fract = (double)0;
    _T86 = (double)0;
    _T87 = &expcnt;
    _T88 = startp;
    _T89 = t;
    _T8A = - 1;
    _T8B = _fat_ptr_plus(_T89,sizeof(char),_T8A);
    _T8C = p;
    _T8D = _check_fat_subscript(_T8C,sizeof(char),0U);
    _T8E = (char *)_T8D;
    _T8F = *_T8E;
    _T90 = signp;
    startp = Cyc_sround(_T86,_T87,_T88,_T8B,_T8F,_T90);
    goto _TL177;
    _TL176: _TL177: expcnt = expcnt + -1;
    goto _TL166;
    _TL165: if (fract == 0.0) { goto _TL179;
    }
    expcnt = - 1;
    _TL17E: if (1) { goto _TL17C;
    }else { goto _TL17D;
    }
    _TL17C: _T91 = fract;
    _T92 = (double)10;
    _T93 = _T91 * _T92;
    _T94 = &tmp;
    fract = modf(_T93,_T94);
    if (tmp == 0.0) { goto _TL17F;
    }
    goto _TL17D;
    _TL17F: expcnt = expcnt + -1;
    goto _TL17E;
    _TL17D: _T95 = &t;
    { struct _fat_ptr _T14A = _fat_ptr_inplace_plus_post(_T95,sizeof(char),
							 1);
      _T96 = _check_fat_subscript(_T14A,sizeof(char),0U);
      _T97 = (char *)_T96;
      { char _T14B = *_T97;
	_T98 = tmp;
	_T99 = (int)_T98;
	_T9A = _T99 + 48;
	{ char _T14C = (char)_T9A;
	  _T9B = _get_fat_size(_T14A,sizeof(char));
	  if (_T9B != 1U) { goto _TL181;
	  }
	  if (_T14B != 0) { goto _TL181;
	  }
	  if (_T14C == 0) { goto _TL181;
	  }
	  _throw_arraybounds();
	  goto _TL182;
	  _TL181: _TL182: _T9C = _T14A.curr;
	  _T9D = (char *)_T9C;
	  *_T9D = _T14C;
	}
      }
    }_T9E = prec;
    if (_T9E) { goto _TL185;
    }else { goto _TL186;
    }
    _TL186: if (flags & 8) { goto _TL185;
    }else { goto _TL183;
    }
    _TL185: _T9F = &t;
    { struct _fat_ptr _T14A = _fat_ptr_inplace_plus_post(_T9F,sizeof(char),
							 1);
      _TA0 = _check_fat_subscript(_T14A,sizeof(char),0U);
      _TA1 = (char *)_TA0;
      { char _T14B = *_TA1;
	char _T14C = '.';
	_TA2 = _get_fat_size(_T14A,sizeof(char));
	if (_TA2 != 1U) { goto _TL187;
	}
	if (_T14B != 0) { goto _TL187;
	}
	if (_T14C == 0) { goto _TL187;
	}
	_throw_arraybounds();
	goto _TL188;
	_TL187: _TL188: _TA3 = _T14A.curr;
	_TA4 = (char *)_TA3;
	*_TA4 = _T14C;
      }
    }goto _TL184;
    _TL183: _TL184: goto _TL17A;
    _TL179: _TA5 = &t;
    { struct _fat_ptr _T14A = _fat_ptr_inplace_plus_post(_TA5,sizeof(char),
							 1);
      _TA6 = _check_fat_subscript(_T14A,sizeof(char),0U);
      _TA7 = (char *)_TA6;
      { char _T14B = *_TA7;
	char _T14C = '0';
	_TA8 = _get_fat_size(_T14A,sizeof(char));
	if (_TA8 != 1U) { goto _TL189;
	}
	if (_T14B != 0) { goto _TL189;
	}
	if (_T14C == 0) { goto _TL189;
	}
	_throw_arraybounds();
	goto _TL18A;
	_TL189: _TL18A: _TA9 = _T14A.curr;
	_TAA = (char *)_TA9;
	*_TAA = _T14C;
      }
    }_TAB = prec;
    if (_TAB) { goto _TL18D;
    }else { goto _TL18E;
    }
    _TL18E: if (flags & 8) { goto _TL18D;
    }else { goto _TL18B;
    }
    _TL18D: _TAC = &t;
    { struct _fat_ptr _T14A = _fat_ptr_inplace_plus_post(_TAC,sizeof(char),
							 1);
      _TAD = _check_fat_subscript(_T14A,sizeof(char),0U);
      _TAE = (char *)_TAD;
      { char _T14B = *_TAE;
	char _T14C = '.';
	_TAF = _get_fat_size(_T14A,sizeof(char));
	if (_TAF != 1U) { goto _TL18F;
	}
	if (_T14B != 0) { goto _TL18F;
	}
	if (_T14C == 0) { goto _TL18F;
	}
	_throw_arraybounds();
	goto _TL190;
	_TL18F: _TL190: _TB0 = _T14A.curr;
	_TB1 = (char *)_TB0;
	*_TB1 = _T14C;
      }
    }goto _TL18C;
    _TL18B: _TL18C: _TL17A: _TL166: if (fract == 0.0) { goto _TL191;
    }
    _TB2 = prec;
    if (! _TB2) { goto _TL193;
    }
    _TL195: _TB3 = fract;
    _TB4 = (double)10;
    _TB5 = _TB3 * _TB4;
    _TB6 = &tmp;
    fract = modf(_TB5,_TB6);
    _TB7 = &t;
    { struct _fat_ptr _T14A = _fat_ptr_inplace_plus_post(_TB7,sizeof(char),
							 1);
      _TB8 = _check_fat_subscript(_T14A,sizeof(char),0U);
      _TB9 = (char *)_TB8;
      { char _T14B = *_TB9;
	_TBA = tmp;
	_TBB = (int)_TBA;
	_TBC = _TBB + 48;
	{ char _T14C = (char)_TBC;
	  _TBD = _get_fat_size(_T14A,sizeof(char));
	  if (_TBD != 1U) { goto _TL197;
	  }
	  if (_T14B != 0) { goto _TL197;
	  }
	  if (_T14C == 0) { goto _TL197;
	  }
	  _throw_arraybounds();
	  goto _TL198;
	  _TL197: _TL198: _TBE = _T14A.curr;
	  _TBF = (char *)_TBE;
	  *_TBF = _T14C;
	}
      }
    }prec = prec + -1;
    _TC0 = prec;
    if (_TC0) { goto _TL199;
    }else { goto _TL196;
    }
    _TL199: if (fract != 0.0) { goto _TL195;
    }else { goto _TL196;
    }
    _TL196: goto _TL194;
    _TL193: _TL194: if (fract == 0.0) { goto _TL19A;
    }
    _TC1 = fract;
    _TC2 = &expcnt;
    _TC3 = startp;
    _TC4 = t;
    _TC5 = - 1;
    _TC6 = _fat_ptr_plus(_TC4,sizeof(char),_TC5);
    _TC7 = signp;
    startp = Cyc_sround(_TC1,_TC2,_TC3,_TC6,'\000',_TC7);
    goto _TL19B;
    _TL19A: _TL19B: goto _TL192;
    _TL191: _TL192: _TL19F: _TC8 = prec;
    prec = _TC8 + -1;
    _TC9 = _TC8;
    if (_TC9) { goto _TL19D;
    }else { goto _TL19E;
    }
    _TL19D: _TCA = &t;
    { struct _fat_ptr _T14A = _fat_ptr_inplace_plus_post(_TCA,sizeof(char),
							 1);
      _TCB = _check_fat_subscript(_T14A,sizeof(char),0U);
      _TCC = (char *)_TCB;
      { char _T14B = *_TCC;
	char _T14C = '0';
	_TCD = _get_fat_size(_T14A,sizeof(char));
	if (_TCD != 1U) { goto _TL1A0;
	}
	if (_T14B != 0) { goto _TL1A0;
	}
	if (_T14C == 0) { goto _TL1A0;
	}
	_throw_arraybounds();
	goto _TL1A1;
	_TL1A0: _TL1A1: _TCE = _T14A.curr;
	_TCF = (char *)_TCE;
	*_TCF = _T14C;
      }
    }goto _TL19F;
    _TL19E: _TD0 = gformat;
    if (! _TD0) { goto _TL1A2;
    }
    if (flags & 8) { goto _TL1A2;
    }else { goto _TL1A4;
    }
    _TL1A4: _TL1A5: _TD1 = t;
    _TD2 = _TD1.curr;
    _TD3 = (char *)_TD2;
    _TD4 = startp;
    _TD5 = _TD4.curr;
    _TD6 = (char *)_TD5;
    if (_TD3 > _TD6) { goto _TL1A8;
    }else { goto _TL1A7;
    }
    _TL1A8: _TD7 = &t;
    _TD8 = _fat_ptr_inplace_plus(_TD7,sizeof(char),-1);
    _TD9 = _check_fat_subscript(_TD8,sizeof(char),0U);
    _TDA = (char *)_TD9;
    _TDB = *_TDA;
    _TDC = (int)_TDB;
    if (_TDC == 48) { goto _TL1A6;
    }else { goto _TL1A7;
    }
    _TL1A6: goto _TL1A5;
    _TL1A7: _TDD = t;
    _TDE = _check_fat_subscript(_TDD,sizeof(char),0U);
    _TDF = (char *)_TDE;
    _TE0 = *_TDF;
    _TE1 = (int)_TE0;
    if (_TE1 != 46) { goto _TL1A9;
    }
    _TE2 = &t;
    _fat_ptr_inplace_plus(_TE2,sizeof(char),-1);
    goto _TL1AA;
    _TL1A9: _TL1AA: _TE3 = &t;
    _fat_ptr_inplace_plus(_TE3,sizeof(char),1);
    goto _TL1A3;
    _TL1A2: _TL1A3: t = Cyc_exponent(t,expcnt,fmtch);
    goto _LL0;
  case 103: 
    goto _LLC;
  case 71: 
    _LLC: _TE4 = prec;
    if (_TE4) { goto _TL1AB;
    }else { goto _TL1AD;
    }
    _TL1AD: prec = prec + 1;
    goto _TL1AC;
    _TL1AB: _TL1AC: if (expcnt > prec) { goto _TL1B0;
    }else { goto _TL1B1;
    }
    _TL1B1: _TE5 = expcnt;
    if (_TE5) { goto _TL1AE;
    }else { goto _TL1B3;
    }
    _TL1B3: if (fract != 0.0) { goto _TL1B2;
    }else { goto _TL1AE;
    }
    _TL1B2: if (fract < .0001) { goto _TL1B0;
    }else { goto _TL1AE;
    }
    _TL1B0: prec = prec + -1;
    fmtch = fmtch - 2;
    gformat = 1;
    goto eformat;
    _TL1AE: _TE6 = expcnt;
    if (! _TE6) { goto _TL1B4;
    }
    _TL1B9: _TE7 = &p;
    _TE8 = _fat_ptr_inplace_plus(_TE7,sizeof(char),1);
    _TE9 = _TE8.curr;
    _TEA = (char *)_TE9;
    _TEB = endp;
    _TEC = _TEB.curr;
    _TED = (char *)_TEC;
    if (_TEA < _TED) { goto _TL1B7;
    }else { goto _TL1B8;
    }
    _TL1B7: _TEE = &t;
    { struct _fat_ptr _T14A = _fat_ptr_inplace_plus_post(_TEE,sizeof(char),
							 1);
      _TEF = _check_fat_subscript(_T14A,sizeof(char),0U);
      _TF0 = (char *)_TEF;
      { char _T14B = *_TF0;
	_TF1 = p;
	_TF2 = _check_fat_subscript(_TF1,sizeof(char),0U);
	_TF3 = (char *)_TF2;
	{ char _T14C = *_TF3;
	  _TF4 = _get_fat_size(_T14A,sizeof(char));
	  if (_TF4 != 1U) { goto _TL1BA;
	  }
	  if (_T14B != 0) { goto _TL1BA;
	  }
	  if (_T14C == 0) { goto _TL1BA;
	  }
	  _throw_arraybounds();
	  goto _TL1BB;
	  _TL1BA: _TL1BB: _TF5 = _T14A.curr;
	  _TF6 = (char *)_TF5;
	  *_TF6 = _T14C;
	}
      }
    }prec = prec + -1;
    goto _TL1B9;
    _TL1B8: goto _TL1B5;
    _TL1B4: _TF7 = &t;
    { struct _fat_ptr _T14A = _fat_ptr_inplace_plus_post(_TF7,sizeof(char),
							 1);
      _TF8 = _T14A.curr;
      _TF9 = (char *)_TF8;
      { char _T14B = *_TF9;
	char _T14C = '0';
	_TFA = _get_fat_size(_T14A,sizeof(char));
	if (_TFA != 1U) { goto _TL1BC;
	}
	if (_T14B != 0) { goto _TL1BC;
	}
	if (_T14C == 0) { goto _TL1BC;
	}
	_throw_arraybounds();
	goto _TL1BD;
	_TL1BC: _TL1BD: _TFB = _T14A.curr;
	_TFC = (char *)_TFB;
	*_TFC = _T14C;
      }
    }_TL1B5: _TFD = prec;
    if (_TFD) { goto _TL1C0;
    }else { goto _TL1C1;
    }
    _TL1C1: if (flags & 8) { goto _TL1C0;
    }else { goto _TL1BE;
    }
    _TL1C0: dotrim = 1;
    _TFE = &t;
    { struct _fat_ptr _T14A = _fat_ptr_inplace_plus_post(_TFE,sizeof(char),
							 1);
      _TFF = _check_fat_subscript(_T14A,sizeof(char),0U);
      _T100 = (char *)_TFF;
      { char _T14B = *_T100;
	char _T14C = '.';
	_T101 = _get_fat_size(_T14A,sizeof(char));
	if (_T101 != 1U) { goto _TL1C2;
	}
	if (_T14B != 0) { goto _TL1C2;
	}
	if (_T14C == 0) { goto _TL1C2;
	}
	_throw_arraybounds();
	goto _TL1C3;
	_TL1C2: _TL1C3: _T102 = _T14A.curr;
	_T103 = (char *)_T102;
	*_T103 = _T14C;
      }
    }goto _TL1BF;
    _TL1BE: dotrim = 0;
    _TL1BF: if (fract == 0.0) { goto _TL1C4;
    }
    _T104 = prec;
    if (! _T104) { goto _TL1C6;
    }
    _TL1C8: _T105 = fract;
    _T106 = (double)10;
    _T107 = _T105 * _T106;
    _T108 = &tmp;
    fract = modf(_T107,_T108);
    _T109 = &t;
    { struct _fat_ptr _T14A = _fat_ptr_inplace_plus_post(_T109,sizeof(char),
							 1);
      _T10A = _check_fat_subscript(_T14A,sizeof(char),0U);
      _T10B = (char *)_T10A;
      { char _T14B = *_T10B;
	_T10C = tmp;
	_T10D = (int)_T10C;
	_T10E = _T10D + 48;
	{ char _T14C = (char)_T10E;
	  _T10F = _get_fat_size(_T14A,sizeof(char));
	  if (_T10F != 1U) { goto _TL1CA;
	  }
	  if (_T14B != 0) { goto _TL1CA;
	  }
	  if (_T14C == 0) { goto _TL1CA;
	  }
	  _throw_arraybounds();
	  goto _TL1CB;
	  _TL1CA: _TL1CB: _T110 = _T14A.curr;
	  _T111 = (char *)_T110;
	  *_T111 = _T14C;
	}
      }
    }if (tmp == 0.0) { goto _TL1CC;
    }else { goto _TL1C9;
    }
    _TL1CC: _T112 = expcnt;
    if (_T112) { goto _TL1C9;
    }else { goto _TL1C8;
    }
    _TL1C9: _TL1CD: prec = prec + -1;
    _T113 = prec;
    if (_T113) { goto _TL1D0;
    }else { goto _TL1CF;
    }
    _TL1D0: if (fract != 0.0) { goto _TL1CE;
    }else { goto _TL1CF;
    }
    _TL1CE: _T114 = fract;
    _T115 = (double)10;
    _T116 = _T114 * _T115;
    _T117 = &tmp;
    fract = modf(_T116,_T117);
    _T118 = &t;
    { struct _fat_ptr _T14A = _fat_ptr_inplace_plus_post(_T118,sizeof(char),
							 1);
      _T119 = _check_fat_subscript(_T14A,sizeof(char),0U);
      _T11A = (char *)_T119;
      { char _T14B = *_T11A;
	_T11B = tmp;
	_T11C = (int)_T11B;
	_T11D = _T11C + 48;
	{ char _T14C = (char)_T11D;
	  _T11E = _get_fat_size(_T14A,sizeof(char));
	  if (_T11E != 1U) { goto _TL1D1;
	  }
	  if (_T14B != 0) { goto _TL1D1;
	  }
	  if (_T14C == 0) { goto _TL1D1;
	  }
	  _throw_arraybounds();
	  goto _TL1D2;
	  _TL1D1: _TL1D2: _T11F = _T14A.curr;
	  _T120 = (char *)_T11F;
	  *_T120 = _T14C;
	}
      }
    }goto _TL1CD;
    _TL1CF: goto _TL1C7;
    _TL1C6: _TL1C7: if (fract == 0.0) { goto _TL1D3;
    }
    _T121 = fract;
    _T122 = startp;
    _T123 = t;
    _T124 = - 1;
    _T125 = _fat_ptr_plus(_T123,sizeof(char),_T124);
    _T126 = signp;
    startp = Cyc_sround(_T121,0,_T122,_T125,'\000',_T126);
    goto _TL1D4;
    _TL1D3: _TL1D4: goto _TL1C5;
    _TL1C4: _TL1C5: if (! (flags & 8)) { goto _TL1D5;
    }
    _TL1DA: _T127 = prec;
    prec = _T127 + -1;
    _T128 = _T127;
    if (_T128) { goto _TL1D8;
    }else { goto _TL1D9;
    }
    _TL1D8: _T129 = &t;
    { struct _fat_ptr _T14A = _fat_ptr_inplace_plus_post(_T129,sizeof(char),
							 1);
      _T12A = _check_fat_subscript(_T14A,sizeof(char),0U);
      _T12B = (char *)_T12A;
      { char _T14B = *_T12B;
	char _T14C = '0';
	_T12C = _get_fat_size(_T14A,sizeof(char));
	if (_T12C != 1U) { goto _TL1DB;
	}
	if (_T14B != 0) { goto _TL1DB;
	}
	if (_T14C == 0) { goto _TL1DB;
	}
	_throw_arraybounds();
	goto _TL1DC;
	_TL1DB: _TL1DC: _T12D = _T14A.curr;
	_T12E = (char *)_T12D;
	*_T12E = _T14C;
      }
    }goto _TL1DA;
    _TL1D9: goto _TL1D6;
    _TL1D5: _T12F = dotrim;
    if (! _T12F) { goto _TL1DD;
    }
    _TL1DF: _T130 = t;
    _T131 = _T130.curr;
    _T132 = (char *)_T131;
    _T133 = startp;
    _T134 = _T133.curr;
    _T135 = (char *)_T134;
    if (_T132 > _T135) { goto _TL1E2;
    }else { goto _TL1E1;
    }
    _TL1E2: _T136 = &t;
    _T137 = _fat_ptr_inplace_plus(_T136,sizeof(char),-1);
    _T138 = _check_fat_subscript(_T137,sizeof(char),0U);
    _T139 = (char *)_T138;
    _T13A = *_T139;
    _T13B = (int)_T13A;
    if (_T13B == 48) { goto _TL1E0;
    }else { goto _TL1E1;
    }
    _TL1E0: goto _TL1DF;
    _TL1E1: _T13C = t;
    _T13D = _check_fat_subscript(_T13C,sizeof(char),0U);
    _T13E = (char *)_T13D;
    _T13F = *_T13E;
    _T140 = (int)_T13F;
    if (_T140 == 46) { goto _TL1E3;
    }
    _T141 = &t;
    _fat_ptr_inplace_plus(_T141,sizeof(char),1);
    goto _TL1E4;
    _TL1E3: _TL1E4: goto _TL1DE;
    _TL1DD: _TL1DE: _TL1D6: goto _LL0;
  default: 
    { struct Cyc_Core_Impossible_exn_struct * _T14A = _cycalloc(sizeof(struct Cyc_Core_Impossible_exn_struct));
      _T14A->tag = Cyc_Core_Impossible;
      _T14A->f1 = _tag_fat("__cvt_double",sizeof(char),13U);
      _T142 = (struct Cyc_Core_Impossible_exn_struct *)_T14A;
    }_T143 = (void *)_T142;
    _throw(_T143);
  }
  _LL0: _T144 = t;
  _T145 = _T144.curr;
  _T146 = startp;
  _T147 = _T146.curr;
  _T148 = _T145 - _T147;
  _T149 = _T148 / sizeof(char);
  return _T149;
}
int Cyc_vfprintf(struct Cyc___cycFILE * f,struct _fat_ptr fmt,struct _fat_ptr ap) {
  int (* _T0)(int (*)(int,struct Cyc___cycFILE *),struct Cyc___cycFILE *,
	      struct _fat_ptr,struct _fat_ptr);
  int (* _T1)(int,struct Cyc___cycFILE *);
  struct Cyc___cycFILE * _T2;
  struct _fat_ptr _T3;
  struct _fat_ptr _T4;
  int _T5;
  int ans;
  { int (* _T6)(int (*)(int,struct Cyc___cycFILE *),struct Cyc___cycFILE *,
		struct _fat_ptr,struct _fat_ptr) = (int (*)(int (*)(int,struct Cyc___cycFILE *),
							    struct Cyc___cycFILE *,
							    struct _fat_ptr,
							    struct _fat_ptr))Cyc__IO_vfprintf;
    _T0 = _T6;
  }_T1 = Cyc_putc;
  _T2 = f;
  _T3 = fmt;
  _T4 = ap;
  ans = _T0(_T1,_T2,_T3,_T4);
  _T5 = ans;
  return _T5;
}
int Cyc_fprintf(struct Cyc___cycFILE * f,struct _fat_ptr fmt,struct _fat_ptr ap) {
  int _T0;
  _T0 = Cyc_vfprintf(f,fmt,ap);
  return _T0;
}
int Cyc_vprintf(struct _fat_ptr fmt,struct _fat_ptr ap) {
  int (* _T0)(int (*)(int,struct Cyc___cycFILE *),struct Cyc___cycFILE *,
	      struct _fat_ptr,struct _fat_ptr);
  int (* _T1)(int,struct Cyc___cycFILE *);
  struct Cyc___cycFILE * _T2;
  struct _fat_ptr _T3;
  struct _fat_ptr _T4;
  int _T5;
  int ans;
  { int (* _T6)(int (*)(int,struct Cyc___cycFILE *),struct Cyc___cycFILE *,
		struct _fat_ptr,struct _fat_ptr) = (int (*)(int (*)(int,struct Cyc___cycFILE *),
							    struct Cyc___cycFILE *,
							    struct _fat_ptr,
							    struct _fat_ptr))Cyc__IO_vfprintf;
    _T0 = _T6;
  }_T1 = Cyc_putc;
  _T2 = Cyc_stdout;
  _T3 = fmt;
  _T4 = ap;
  ans = _T0(_T1,_T2,_T3,_T4);
  _T5 = ans;
  return _T5;
}
int Cyc_printf(struct _fat_ptr fmt,struct _fat_ptr ap) {
  int _T0;
  int ans;
  ans = Cyc_vprintf(fmt,ap);
  _T0 = ans;
  return _T0;
}
 struct _tuple0 {
  struct _fat_ptr * f0;
  unsigned long * f1;
};
static int Cyc_putc_string(int c,struct _tuple0 * sptr_n) {
  struct _tuple0 * _T0;
  struct _fat_ptr * _T1;
  unsigned long * _T2;
  int _T3;
  struct _fat_ptr _T4;
  unsigned char * _T5;
  char * _T6;
  int _T7;
  struct _fat_ptr * _T8;
  unsigned long * _T9;
  unsigned long * _TA;
  struct _fat_ptr * _TB;
  _T0 = sptr_n;
  { struct _tuple0 _TC = *_T0;
    _TB = _TC.f0;
    _TA = _TC.f1;
  }{ struct _fat_ptr * sptr = _TB;
    unsigned long * nptr = _TA;
    _T1 = sptr;
    { struct _fat_ptr s = *_T1;
      _T2 = nptr;
      { unsigned long n = *_T2;
	if (n != 0U) { goto _TL1E5;
	}
	_T3 = - 1;
	return _T3;
	_TL1E5: _T4 = s;
	_T5 = _check_fat_subscript(_T4,sizeof(char),0U);
	_T6 = (char *)_T5;
	_T7 = c;
	*_T6 = (char)_T7;
	_T8 = sptr;
	_fat_ptr_inplace_plus(_T8,sizeof(char),1);
	_T9 = nptr;
	*_T9 = n - 1U;
	return 1;
      }
    }
  }
}
int Cyc_vsnprintf(struct _fat_ptr s,unsigned long n,struct _fat_ptr fmt,struct _fat_ptr ap) {
  struct _tuple0 _T0;
  struct _fat_ptr * _T1;
  int (* _T2)(int (*)(int,struct _tuple0 *),struct _tuple0 *,struct _fat_ptr,
	      struct _fat_ptr);
  struct _tuple0 * _T3;
  struct _fat_ptr _T4;
  struct _fat_ptr _T5;
  struct _fat_ptr _T6;
  int _T7;
  unsigned char * _T8;
  char * _T9;
  int _TA;
  int ans;
  struct _fat_ptr sptr = s;
  unsigned long nptr = n;
  { struct _tuple0 _TB;
    _T1 = &sptr;
    _TB.f0 = (struct _fat_ptr *)_T1;
    _TB.f1 = &nptr;
    _T0 = _TB;
  }{ struct _tuple0 sptr_n = _T0;
    { int (* _TB)(int (*)(int,struct _tuple0 *),struct _tuple0 *,struct _fat_ptr,
		  struct _fat_ptr) = (int (*)(int (*)(int,struct _tuple0 *),
					      struct _tuple0 *,struct _fat_ptr,
					      struct _fat_ptr))Cyc__IO_vfprintf;
      _T2 = _TB;
    }_T3 = &sptr_n;
    _T4 = fmt;
    _T5 = ap;
    ans = _T2(Cyc_putc_string,_T3,_T4,_T5);
    if (0 > ans) { goto _TL1E7;
    }
    _T6 = s;
    _T7 = ans;
    _T8 = _check_fat_subscript(_T6,sizeof(char),_T7);
    _T9 = (char *)_T8;
    *_T9 = '\000';
    goto _TL1E8;
    _TL1E7: _TL1E8: _TA = ans;
    return _TA;
  }
}
int Cyc_snprintf(struct _fat_ptr s,unsigned long n,struct _fat_ptr fmt,struct _fat_ptr ap) {
  int _T0;
  _T0 = Cyc_vsnprintf(s,n,fmt,ap);
  return _T0;
}
int Cyc_vsprintf(struct _fat_ptr s,struct _fat_ptr fmt,struct _fat_ptr ap) {
  struct _fat_ptr _T0;
  struct _fat_ptr _T1;
  unsigned int _T2;
  struct _fat_ptr _T3;
  struct _fat_ptr _T4;
  int _T5;
  _T0 = s;
  _T1 = s;
  _T2 = _get_fat_size(_T1,sizeof(char));
  _T3 = fmt;
  _T4 = ap;
  _T5 = Cyc_vsnprintf(_T0,_T2,_T3,_T4);
  return _T5;
}
int Cyc_sprintf(struct _fat_ptr s,struct _fat_ptr fmt,struct _fat_ptr ap) {
  struct _fat_ptr _T0;
  struct _fat_ptr _T1;
  unsigned int _T2;
  struct _fat_ptr _T3;
  struct _fat_ptr _T4;
  int _T5;
  _T0 = s;
  _T1 = s;
  _T2 = _get_fat_size(_T1,sizeof(char));
  _T3 = fmt;
  _T4 = ap;
  _T5 = Cyc_vsnprintf(_T0,_T2,_T3,_T4);
  return _T5;
}
static int Cyc_putc_void(int c,int dummy) {
  return 1;
}
struct _fat_ptr Cyc_vrprintf(struct _RegionHandle * r1,struct _fat_ptr fmt,
			     struct _fat_ptr ap) {
  int (* _T0)(int (*)(int,int),int,struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T1;
  struct _fat_ptr _T2;
  int _T3;
  struct _fat_ptr _T4;
  struct _RegionHandle * _T5;
  void * _T6;
  struct _fat_ptr _T7;
  struct _fat_ptr _T8;
  struct _fat_ptr _T9;
  struct _fat_ptr _TA;
  struct _fat_ptr _TB;
  { int (* _TC)(int (*)(int,int),int,struct _fat_ptr,struct _fat_ptr) = (int (*)(int (*)(int,
											 int),
										 int,
										 struct _fat_ptr,
										 struct _fat_ptr))Cyc__IO_vfprintf;
    _T0 = _TC;
  }_T1 = fmt;
  _T2 = ap;
  _T3 = _T0(Cyc_putc_void,0,_T1,_T2);
  { int size = _T3 + 1;
    { unsigned int _TC = size + 1;
      _T5 = r1;
      _T6 = _region_calloc(_T5,0U,sizeof(char),_TC);
      _T4 = _tag_fat(_T6,sizeof(char),_TC);
    }{ struct _fat_ptr s = _T4;
      _T7 = s;
      _T8 = _fat_ptr_decrease_size(_T7,sizeof(char),1U);
      _T9 = fmt;
      _TA = ap;
      Cyc_vsprintf(_T8,_T9,_TA);
      _TB = s;
      return _TB;
    }
  }
}
struct _fat_ptr Cyc_rprintf(struct _RegionHandle * r1,struct _fat_ptr fmt,
			    struct _fat_ptr ap) {
  struct _fat_ptr _T0;
  _T0 = Cyc_vrprintf(r1,fmt,ap);
  return _T0;
}
struct _fat_ptr Cyc_aprintf(struct _fat_ptr fmt,struct _fat_ptr ap) {
  struct _fat_ptr _T0;
  _T0 = Cyc_vrprintf(Cyc_Core_heap_region,fmt,ap);
  return _T0;
}
