#include <cyc_include.h>
 struct Cyc_Core_Opt {
  void * v;
};
 struct Cyc_List_List {
  void * hd;
  struct Cyc_List_List * tl;
};
extern struct Cyc_List_List * Cyc_List_imp_rev(struct Cyc_List_List *);
 struct Cyc_Absyn_Tqual {
  long print_const:1;
  long q_volatile:1;
  long q_restrict:1;
  long real_const:1;
  unsigned int loc;
};
struct Cyc_Absyn_Tqual Cyc_Absyn_const_tqual(unsigned int);
struct Cyc_Absyn_Tqual Cyc_Absyn_empty_tqual(unsigned int);
void * Cyc_Absyn_new_evar(struct Cyc_Core_Opt *,struct Cyc_Core_Opt *);
extern void * Cyc_Absyn_char_type;
extern void * Cyc_Absyn_uchar_type;
extern void * Cyc_Absyn_ushort_type;
extern void * Cyc_Absyn_uint_type;
extern void * Cyc_Absyn_ulong_type;
extern void * Cyc_Absyn_ulonglong_type;
extern void * Cyc_Absyn_schar_type;
extern void * Cyc_Absyn_sshort_type;
extern void * Cyc_Absyn_sint_type;
extern void * Cyc_Absyn_slong_type;
extern void * Cyc_Absyn_slonglong_type;
extern void * Cyc_Absyn_float_type;
extern void * Cyc_Absyn_double_type;
extern void * Cyc_Absyn_long_double_type;
extern void * Cyc_Absyn_al_qual_type;
extern void * Cyc_Absyn_true_type;
extern void * Cyc_Absyn_false_type;
void * Cyc_Absyn_at_type(void *,void *,void *,struct Cyc_Absyn_Tqual,void *,
			 void *);
void * Cyc_Absyn_fatptr_type(void *,void *,void *,struct Cyc_Absyn_Tqual,
			     void *,void *);
 struct Cyc_String_pa_PrintArg_struct {
  int tag;
  struct _fat_ptr f1;
};
 struct Cyc_Int_pa_PrintArg_struct {
  int tag;
  unsigned long f1;
};
extern int isdigit(int);
struct Cyc_Dict_T;
 struct Cyc_Dict_Dict {
  int (* rel)(void *,void *);
  struct _RegionHandle * r;
  const struct Cyc_Dict_T * t;
};
 struct Cyc_Tcenv_Genv {
  struct Cyc_Dict_Dict aggrdecls;
  struct Cyc_Dict_Dict datatypedecls;
  struct Cyc_Dict_Dict enumdecls;
  struct Cyc_Dict_Dict typedefs;
  struct Cyc_Dict_Dict ordinaries;
};
struct Cyc_Tcenv_Fenv;
 struct Cyc_Tcenv_Tenv {
  struct Cyc_List_List * ns;
  struct Cyc_Tcenv_Genv * ae;
  struct Cyc_Tcenv_Fenv * le;
  long allow_valueof:1;
  long in_extern_c_include:1;
  long in_tempest:1;
  long tempest_generalize:1;
  long in_extern_c_inc_repeat:1;
};
struct Cyc_List_List * Cyc_Tcenv_lookup_type_vars(struct Cyc_Tcenv_Tenv *);
extern struct Cyc_Core_Opt Cyc_Kinds_eko;
void * Cyc_Tcutil_any_bool(struct Cyc_List_List *);
void Cyc_Warn_verr(unsigned int,struct _fat_ptr,struct _fat_ptr);
extern unsigned long Cyc_strlen(struct _fat_ptr);
extern struct _fat_ptr Cyc_implode(struct Cyc_List_List *);
static void * Cyc_Formatstr_err_null(unsigned int loc,struct _fat_ptr fmt,
				     struct _fat_ptr ap) {
  Cyc_Warn_verr(loc,fmt,ap);
  return 0;
}
 struct Cyc_Formatstr_ConversionSpecification {
  struct Cyc_List_List * flags;
  struct Cyc_List_List * width;
  struct Cyc_List_List * precision;
  struct Cyc_List_List * lenmod;
  char c;
  int j;
};
static struct Cyc_Formatstr_ConversionSpecification * Cyc_Formatstr_parse_conversion_specification(struct _RegionHandle * r,
												   struct _fat_ptr s,
												   int i) {
  int _T0;
  unsigned long _T1;
  unsigned long _T2;
  int _T3;
  unsigned long _T4;
  unsigned long _T5;
  struct _fat_ptr _T6;
  unsigned char * _T7;
  const char * _T8;
  const char * _T9;
  int _TA;
  char _TB;
  int _TC;
  struct Cyc_List_List * _TD;
  struct _RegionHandle * _TE;
  char _TF;
  int _T10;
  unsigned long _T11;
  unsigned long _T12;
  struct _fat_ptr _T13;
  unsigned char * _T14;
  const char * _T15;
  int _T16;
  char _T17;
  int _T18;
  struct Cyc_List_List * _T19;
  struct _RegionHandle * _T1A;
  char _T1B;
  int _T1C;
  unsigned long _T1D;
  unsigned long _T1E;
  struct _fat_ptr _T1F;
  unsigned char * _T20;
  const char * _T21;
  int _T22;
  char _T23;
  int _T24;
  int _T25;
  struct Cyc_List_List * _T26;
  struct _RegionHandle * _T27;
  char _T28;
  int _T29;
  unsigned long _T2A;
  unsigned long _T2B;
  struct _fat_ptr _T2C;
  unsigned char * _T2D;
  const char * _T2E;
  int _T2F;
  char _T30;
  int _T31;
  struct Cyc_List_List * _T32;
  struct _RegionHandle * _T33;
  char _T34;
  int _T35;
  unsigned long _T36;
  unsigned long _T37;
  struct _fat_ptr _T38;
  unsigned char * _T39;
  const char * _T3A;
  int _T3B;
  char _T3C;
  int _T3D;
  struct Cyc_List_List * _T3E;
  struct _RegionHandle * _T3F;
  char _T40;
  int _T41;
  unsigned long _T42;
  unsigned long _T43;
  struct _fat_ptr _T44;
  unsigned char * _T45;
  const char * _T46;
  int _T47;
  char _T48;
  int _T49;
  int _T4A;
  struct Cyc_List_List * _T4B;
  struct _RegionHandle * _T4C;
  char _T4D;
  int _T4E;
  unsigned long _T4F;
  unsigned long _T50;
  struct _fat_ptr _T51;
  unsigned char * _T52;
  const char * _T53;
  int _T54;
  char _T55;
  int _T56;
  struct Cyc_List_List * _T57;
  struct _RegionHandle * _T58;
  char _T59;
  int _T5A;
  unsigned long _T5B;
  unsigned long _T5C;
  struct _fat_ptr _T5D;
  unsigned char * _T5E;
  const char * _T5F;
  int _T60;
  char _T61;
  int _T62;
  struct Cyc_List_List * _T63;
  struct _RegionHandle * _T64;
  char _T65;
  struct Cyc_List_List * _T66;
  struct _RegionHandle * _T67;
  char _T68;
  int _T69;
  unsigned long _T6A;
  unsigned long _T6B;
  struct _fat_ptr _T6C;
  unsigned char * _T6D;
  const char * _T6E;
  int _T6F;
  char _T70;
  int _T71;
  struct Cyc_List_List * _T72;
  struct _RegionHandle * _T73;
  char _T74;
  struct Cyc_List_List * _T75;
  struct _RegionHandle * _T76;
  char _T77;
  int _T78;
  unsigned long _T79;
  unsigned long _T7A;
  struct _fat_ptr _T7B;
  unsigned char * _T7C;
  const char * _T7D;
  int _T7E;
  char _T7F;
  int _T80;
  struct Cyc_Formatstr_ConversionSpecification * _T81;
  struct _RegionHandle * _T82;
  unsigned long len = Cyc_strlen(s);
  if (i < 0) { goto _TL2;
  }else { goto _TL3;
  }
  _TL3: _T0 = i;
  _T1 = (unsigned long)_T0;
  _T2 = len;
  if (_T1 >= _T2) { goto _TL2;
  }else { goto _TL0;
  }
  _TL2: return 0;
  _TL0: { struct Cyc_List_List * flags = 0;
    char c = ' ';
    _TL7: _T3 = i;
    _T4 = (unsigned long)_T3;
    _T5 = len;
    if (_T4 < _T5) { goto _TL5;
    }else { goto _TL6;
    }
    _TL5: _T6 = s;
    _T7 = _T6.curr;
    _T8 = (const char *)_T7;
    _T9 = _check_null(_T8);
    _TA = i;
    c = _T9[_TA];
    _TB = c;
    _TC = (int)_TB;
    switch (_TC) {
    case 43: 
      goto _LL4;
    case 45: 
      _LL4: goto _LL6;
    case 32: 
      _LL6: goto _LL8;
    case 35: 
      _LL8: goto _LLA;
    case 48: 
      _LLA: _TE = r;
      { struct Cyc_List_List * _T83 = _region_malloc(_TE,0U,sizeof(struct Cyc_List_List));
	_TF = c;
	_T83->hd = (void *)_TF;
	_T83->tl = flags;
	_TD = (struct Cyc_List_List *)_T83;
      }flags = _TD;
      goto _TL4;
    default: 
      goto _LL0;
    }
    _LL0: goto _TL6;
    _TL4: i = i + 1;
    goto _TL7;
    _TL6: _T10 = i;
    _T11 = (unsigned long)_T10;
    _T12 = len;
    if (_T11 < _T12) { goto _TL9;
    }
    return 0;
    _TL9: flags = Cyc_List_imp_rev(flags);
    { struct Cyc_List_List * width = 0;
      _T13 = s;
      _T14 = _T13.curr;
      _T15 = (const char *)_T14;
      _T16 = i;
      c = _T15[_T16];
      _T17 = c;
      _T18 = (int)_T17;
      if (_T18 != 42) { goto _TLB;
      }
      _T1A = r;
      { struct Cyc_List_List * _T83 = _region_malloc(_T1A,0U,sizeof(struct Cyc_List_List));
	_T1B = c;
	_T83->hd = (void *)_T1B;
	_T83->tl = width;
	_T19 = (struct Cyc_List_List *)_T83;
      }width = _T19;
      i = i + 1;
      goto _TLC;
      _TLB: _TL10: _T1C = i;
      _T1D = (unsigned long)_T1C;
      _T1E = len;
      if (_T1D < _T1E) { goto _TLE;
      }else { goto _TLF;
      }
      _TLE: _T1F = s;
      _T20 = _T1F.curr;
      _T21 = (const char *)_T20;
      _T22 = i;
      c = _T21[_T22];
      _T23 = c;
      _T24 = (int)_T23;
      _T25 = isdigit(_T24);
      if (! _T25) { goto _TL11;
      }
      _T27 = r;
      { struct Cyc_List_List * _T83 = _region_malloc(_T27,0U,sizeof(struct Cyc_List_List));
	_T28 = c;
	_T83->hd = (void *)_T28;
	_T83->tl = width;
	_T26 = (struct Cyc_List_List *)_T83;
      }width = _T26;
      goto _TL12;
      _TL11: goto _TLF;
      _TL12: i = i + 1;
      goto _TL10;
      _TLF: _TLC: _T29 = i;
      _T2A = (unsigned long)_T29;
      _T2B = len;
      if (_T2A < _T2B) { goto _TL13;
      }
      return 0;
      _TL13: width = Cyc_List_imp_rev(width);
      { struct Cyc_List_List * precision = 0;
	_T2C = s;
	_T2D = _T2C.curr;
	_T2E = (const char *)_T2D;
	_T2F = i;
	c = _T2E[_T2F];
	_T30 = c;
	_T31 = (int)_T30;
	if (_T31 != 46) { goto _TL15;
	}
	_T33 = r;
	{ struct Cyc_List_List * _T83 = _region_malloc(_T33,0U,sizeof(struct Cyc_List_List));
	  _T34 = c;
	  _T83->hd = (void *)_T34;
	  _T83->tl = precision;
	  _T32 = (struct Cyc_List_List *)_T83;
	}precision = _T32;
	i = i + 1;
	_T35 = i;
	_T36 = (unsigned long)_T35;
	_T37 = len;
	if (_T36 < _T37) { goto _TL17;
	}
	return 0;
	_TL17: _T38 = s;
	_T39 = _T38.curr;
	_T3A = (const char *)_T39;
	_T3B = i;
	c = _T3A[_T3B];
	_T3C = c;
	_T3D = (int)_T3C;
	if (_T3D != 42) { goto _TL19;
	}
	_T3F = r;
	{ struct Cyc_List_List * _T83 = _region_malloc(_T3F,0U,sizeof(struct Cyc_List_List));
	  _T40 = c;
	  _T83->hd = (void *)_T40;
	  _T83->tl = precision;
	  _T3E = (struct Cyc_List_List *)_T83;
	}precision = _T3E;
	i = i + 1;
	goto _TL1A;
	_TL19: _TL1E: _T41 = i;
	_T42 = (unsigned long)_T41;
	_T43 = len;
	if (_T42 < _T43) { goto _TL1C;
	}else { goto _TL1D;
	}
	_TL1C: _T44 = s;
	_T45 = _T44.curr;
	_T46 = (const char *)_T45;
	_T47 = i;
	c = _T46[_T47];
	_T48 = c;
	_T49 = (int)_T48;
	_T4A = isdigit(_T49);
	if (! _T4A) { goto _TL1F;
	}
	_T4C = r;
	{ struct Cyc_List_List * _T83 = _region_malloc(_T4C,0U,sizeof(struct Cyc_List_List));
	  _T4D = c;
	  _T83->hd = (void *)_T4D;
	  _T83->tl = precision;
	  _T4B = (struct Cyc_List_List *)_T83;
	}precision = _T4B;
	goto _TL20;
	_TL1F: goto _TL1D;
	_TL20: i = i + 1;
	goto _TL1E;
	_TL1D: _TL1A: goto _TL16;
	_TL15: _TL16: _T4E = i;
	_T4F = (unsigned long)_T4E;
	_T50 = len;
	if (_T4F < _T50) { goto _TL21;
	}
	return 0;
	_TL21: precision = Cyc_List_imp_rev(precision);
	{ struct Cyc_List_List * lenmod = 0;
	  _T51 = s;
	  _T52 = _T51.curr;
	  _T53 = (const char *)_T52;
	  _T54 = i;
	  c = _T53[_T54];
	  _T55 = c;
	  _T56 = (int)_T55;
	  switch (_T56) {
	  case 104: 
	    _T58 = r;
	    { struct Cyc_List_List * _T83 = _region_malloc(_T58,0U,sizeof(struct Cyc_List_List));
	      _T59 = c;
	      _T83->hd = (void *)_T59;
	      _T83->tl = lenmod;
	      _T57 = (struct Cyc_List_List *)_T83;
	    }lenmod = _T57;
	    i = i + 1;
	    _T5A = i;
	    _T5B = (unsigned long)_T5A;
	    _T5C = len;
	    if (_T5B < _T5C) { goto _TL24;
	    }
	    return 0;
	    _TL24: _T5D = s;
	    _T5E = _T5D.curr;
	    _T5F = (const char *)_T5E;
	    _T60 = i;
	    c = _T5F[_T60];
	    _T61 = c;
	    _T62 = (int)_T61;
	    if (_T62 != 104) { goto _TL26;
	    }
	    _T64 = r;
	    { struct Cyc_List_List * _T83 = _region_malloc(_T64,0U,sizeof(struct Cyc_List_List));
	      _T65 = c;
	      _T83->hd = (void *)_T65;
	      _T83->tl = lenmod;
	      _T63 = (struct Cyc_List_List *)_T83;
	    }lenmod = _T63;
	    i = i + 1;
	    goto _TL27;
	    _TL26: _TL27: goto _LLD;
	  case 108: 
	    _T67 = r;
	    { struct Cyc_List_List * _T83 = _region_malloc(_T67,0U,sizeof(struct Cyc_List_List));
	      _T68 = c;
	      _T83->hd = (void *)_T68;
	      _T83->tl = lenmod;
	      _T66 = (struct Cyc_List_List *)_T83;
	    }lenmod = _T66;
	    i = i + 1;
	    _T69 = i;
	    _T6A = (unsigned long)_T69;
	    _T6B = len;
	    if (_T6A < _T6B) { goto _TL28;
	    }
	    return 0;
	    _TL28: _T6C = s;
	    _T6D = _T6C.curr;
	    _T6E = (const char *)_T6D;
	    _T6F = i;
	    c = _T6E[_T6F];
	    _T70 = c;
	    _T71 = (int)_T70;
	    if (_T71 != 108) { goto _TL2A;
	    }
	    _T73 = r;
	    { struct Cyc_List_List * _T83 = _region_malloc(_T73,0U,sizeof(struct Cyc_List_List));
	      _T74 = c;
	      _T83->hd = (void *)_T74;
	      _T83->tl = lenmod;
	      _T72 = (struct Cyc_List_List *)_T83;
	    }lenmod = _T72;
	    i = i + 1;
	    goto _TL2B;
	    _TL2A: _TL2B: goto _LLD;
	  case 106: 
	    goto _LL15;
	  case 122: 
	    _LL15: goto _LL17;
	  case 116: 
	    _LL17: goto _LL19;
	  case 76: 
	    _LL19: _T76 = r;
	    { struct Cyc_List_List * _T83 = _region_malloc(_T76,0U,sizeof(struct Cyc_List_List));
	      _T77 = c;
	      _T83->hd = (void *)_T77;
	      _T83->tl = lenmod;
	      _T75 = (struct Cyc_List_List *)_T83;
	    }lenmod = _T75;
	    i = i + 1;
	    goto _LLD;
	  default: 
	    goto _LLD;
	  }
	  _LLD: _T78 = i;
	  _T79 = (unsigned long)_T78;
	  _T7A = len;
	  if (_T79 < _T7A) { goto _TL2C;
	  }
	  return 0;
	  _TL2C: lenmod = Cyc_List_imp_rev(lenmod);
	  _T7B = s;
	  _T7C = _T7B.curr;
	  _T7D = (const char *)_T7C;
	  _T7E = i;
	  c = _T7D[_T7E];
	  _T7F = c;
	  _T80 = (int)_T7F;
	  switch (_T80) {
	  case 100: 
	    goto _LL20;
	  case 105: 
	    _LL20: goto _LL22;
	  case 111: 
	    _LL22: goto _LL24;
	  case 117: 
	    _LL24: goto _LL26;
	  case 120: 
	    _LL26: goto _LL28;
	  case 88: 
	    _LL28: goto _LL2A;
	  case 102: 
	    _LL2A: goto _LL2C;
	  case 70: 
	    _LL2C: goto _LL2E;
	  case 101: 
	    _LL2E: goto _LL30;
	  case 69: 
	    _LL30: goto _LL32;
	  case 103: 
	    _LL32: goto _LL34;
	  case 71: 
	    _LL34: goto _LL36;
	  case 97: 
	    _LL36: goto _LL38;
	  case 65: 
	    _LL38: goto _LL3A;
	  case 99: 
	    _LL3A: goto _LL3C;
	  case 115: 
	    _LL3C: goto _LL3E;
	  case 112: 
	    _LL3E: goto _LL40;
	  case 110: 
	    _LL40: goto _LL42;
	  case 37: 
	    _LL42: goto _LL1C;
	  default: 
	    return 0;
	  }
	  _LL1C: _T82 = r;
	  { struct Cyc_Formatstr_ConversionSpecification * _T83 = _region_malloc(_T82,
										 0U,
										 sizeof(struct Cyc_Formatstr_ConversionSpecification));
	    _T83->flags = flags;
	    _T83->width = width;
	    _T83->precision = precision;
	    _T83->lenmod = lenmod;
	    _T83->c = c;
	    _T83->j = i + 1;
	    _T81 = (struct Cyc_Formatstr_ConversionSpecification *)_T83;
	  }return _T81;
	}
      }
    }
  }
}
struct Cyc_List_List * Cyc_Formatstr_get_format_types(struct Cyc_Tcenv_Tenv * te,
						      struct _fat_ptr s,long isCproto,
						      unsigned int loc) {
  int _T0;
  unsigned long _T1;
  unsigned long _T2;
  struct _fat_ptr _T3;
  unsigned char * _T4;
  const char * _T5;
  const char * _T6;
  int _T7;
  char _T8;
  int _T9;
  struct _RegionHandle * _TA;
  struct _fat_ptr _TB;
  int _TC;
  struct Cyc_List_List * (* _TD)(unsigned int,struct _fat_ptr,struct _fat_ptr ap);
  unsigned int _TE;
  struct _fat_ptr _TF;
  struct _fat_ptr _T10;
  struct Cyc_Formatstr_ConversionSpecification * _T11;
  struct Cyc_List_List * _T12;
  struct Cyc_List_List * _T13;
  struct Cyc_List_List * _T14;
  struct Cyc_List_List * _T15;
  void * _T16;
  int _T17;
  int _T18;
  int _T19;
  struct Cyc_List_List * _T1A;
  struct Cyc_Int_pa_PrintArg_struct _T1B;
  int _T1C;
  struct Cyc_List_List * (* _T1D)(unsigned int,struct _fat_ptr,struct _fat_ptr ap);
  unsigned int _T1E;
  struct _fat_ptr _T1F;
  struct _fat_ptr _T20;
  struct Cyc_List_List * _T21;
  struct Cyc_List_List * _T22;
  struct Cyc_List_List * _T23;
  struct Cyc_List_List * _T24;
  void * _T25;
  int _T26;
  struct Cyc_List_List * _T27;
  struct Cyc_List_List * _T28;
  struct Cyc_List_List * _T29;
  struct Cyc_List_List * _T2A;
  struct Cyc_List_List * _T2B;
  struct Cyc_List_List * _T2C;
  struct Cyc_List_List * _T2D;
  struct Cyc_List_List * _T2E;
  struct Cyc_List_List * _T2F;
  struct Cyc_List_List * _T30;
  void * _T31;
  struct Cyc_List_List * _T32;
  void * _T33;
  int _T34;
  int _T35;
  struct Cyc_List_List * _T36;
  char _T37;
  int _T38;
  struct Cyc_List_List * _T39;
  void * _T3A;
  int _T3B;
  struct Cyc_List_List * _T3C;
  struct Cyc_Int_pa_PrintArg_struct _T3D;
  char _T3E;
  int _T3F;
  struct Cyc_List_List * (* _T40)(unsigned int,struct _fat_ptr,struct _fat_ptr ap);
  unsigned int _T41;
  struct _fat_ptr _T42;
  struct _fat_ptr _T43;
  struct Cyc_List_List * _T44;
  struct Cyc_List_List * _T45;
  struct Cyc_List_List * _T46;
  struct Cyc_List_List * _T47;
  struct Cyc_List_List * _T48;
  void * _T49;
  int _T4A;
  struct Cyc_List_List * _T4B;
  void * _T4C;
  int _T4D;
  struct Cyc_List_List * _T4E;
  struct Cyc_List_List * _T4F;
  struct Cyc_List_List * _T50;
  struct Cyc_List_List * _T51;
  struct Cyc_List_List * _T52;
  struct Cyc_List_List * _T53;
  void * _T54;
  struct Cyc_List_List * _T55;
  void * _T56;
  int _T57;
  int _T58;
  struct Cyc_List_List * _T59;
  void * _T5A;
  struct Cyc_List_List * _T5B;
  void * _T5C;
  int _T5D;
  int _T5E;
  struct Cyc_List_List * _T5F;
  struct Cyc_String_pa_PrintArg_struct _T60;
  struct Cyc_Int_pa_PrintArg_struct _T61;
  char _T62;
  int _T63;
  struct Cyc_List_List * (* _T64)(unsigned int,struct _fat_ptr,struct _fat_ptr ap);
  unsigned int _T65;
  struct _fat_ptr _T66;
  struct _fat_ptr _T67;
  struct Cyc_List_List * _T68;
  struct Cyc_List_List * _T69;
  void * _T6A;
  int _T6B;
  struct Cyc_List_List * (* _T6C)(unsigned int,struct _fat_ptr,struct _fat_ptr ap);
  unsigned int _T6D;
  struct _fat_ptr _T6E;
  struct _fat_ptr _T6F;
  struct Cyc_List_List * _T70;
  struct Cyc_List_List * _T71;
  struct Cyc_List_List * _T72;
  struct Cyc_List_List * _T73;
  struct Cyc_List_List * _T74;
  void * _T75;
  int _T76;
  struct Cyc_List_List * _T77;
  void * _T78;
  int _T79;
  struct Cyc_List_List * _T7A;
  struct Cyc_List_List * _T7B;
  struct Cyc_List_List * _T7C;
  struct Cyc_List_List * _T7D;
  struct Cyc_List_List * _T7E;
  struct Cyc_List_List * _T7F;
  void * _T80;
  struct Cyc_List_List * _T81;
  void * _T82;
  int _T83;
  int _T84;
  struct Cyc_List_List * _T85;
  void * _T86;
  struct Cyc_List_List * _T87;
  void * _T88;
  int _T89;
  int _T8A;
  struct Cyc_List_List * _T8B;
  struct Cyc_String_pa_PrintArg_struct _T8C;
  struct Cyc_Int_pa_PrintArg_struct _T8D;
  char _T8E;
  int _T8F;
  struct Cyc_List_List * (* _T90)(unsigned int,struct _fat_ptr,struct _fat_ptr ap);
  unsigned int _T91;
  struct _fat_ptr _T92;
  struct _fat_ptr _T93;
  struct Cyc_List_List * _T94;
  struct Cyc_List_List * _T95;
  struct Cyc_List_List * _T96;
  struct Cyc_List_List * _T97;
  struct Cyc_List_List * _T98;
  struct Cyc_List_List * _T99;
  void * _T9A;
  int _T9B;
  struct Cyc_List_List * _T9C;
  struct Cyc_List_List * _T9D;
  struct Cyc_String_pa_PrintArg_struct _T9E;
  struct Cyc_Int_pa_PrintArg_struct _T9F;
  char _TA0;
  int _TA1;
  struct Cyc_List_List * (* _TA2)(unsigned int,struct _fat_ptr,struct _fat_ptr ap);
  unsigned int _TA3;
  struct _fat_ptr _TA4;
  struct _fat_ptr _TA5;
  struct Cyc_List_List * _TA6;
  void * _TA7;
  int _TA8;
  struct Cyc_List_List * _TA9;
  void * _TAA;
  int _TAB;
  struct Cyc_List_List * _TAC;
  struct Cyc_Int_pa_PrintArg_struct _TAD;
  struct Cyc_List_List * _TAE;
  void * _TAF;
  int _TB0;
  struct Cyc_List_List * (* _TB1)(unsigned int,struct _fat_ptr,struct _fat_ptr ap);
  unsigned int _TB2;
  struct _fat_ptr _TB3;
  struct _fat_ptr _TB4;
  struct Cyc_List_List * _TB5;
  struct Cyc_List_List * _TB6;
  struct Cyc_String_pa_PrintArg_struct _TB7;
  struct Cyc_List_List * (* _TB8)(unsigned int,struct _fat_ptr,struct _fat_ptr ap);
  unsigned int _TB9;
  struct _fat_ptr _TBA;
  struct _fat_ptr _TBB;
  struct Cyc_List_List * _TBC;
  struct Cyc_String_pa_PrintArg_struct _TBD;
  struct Cyc_List_List * (* _TBE)(unsigned int,struct _fat_ptr,struct _fat_ptr ap);
  unsigned int _TBF;
  struct _fat_ptr _TC0;
  struct _fat_ptr _TC1;
  struct Cyc_List_List * _TC2;
  struct Cyc_List_List * _TC3;
  void * _TC4;
  int _TC5;
  struct Cyc_List_List * (* _TC6)(unsigned int,struct _fat_ptr,struct _fat_ptr ap);
  unsigned int _TC7;
  struct _fat_ptr _TC8;
  struct _fat_ptr _TC9;
  struct Cyc_List_List * _TCA;
  struct Cyc_List_List * (* _TCB)(unsigned int,struct _fat_ptr,struct _fat_ptr ap);
  unsigned int _TCC;
  struct _fat_ptr _TCD;
  struct _fat_ptr _TCE;
  long _TCF;
  void * _TD0;
  struct Cyc_Core_Opt * _TD1;
  struct Cyc_Core_Opt * _TD2;
  struct Cyc_Core_Opt * _TD3;
  void * _TD4;
  void * _TD5;
  struct Cyc_Absyn_Tqual _TD6;
  void * _TD7;
  void * _TD8;
  void * _TD9;
  struct Cyc_Core_Opt * _TDA;
  struct Cyc_Core_Opt * _TDB;
  struct Cyc_Core_Opt * _TDC;
  void * _TDD;
  void * _TDE;
  struct Cyc_Absyn_Tqual _TDF;
  void * _TE0;
  void * _TE1;
  struct Cyc_List_List * _TE2;
  struct Cyc_List_List * _TE3;
  struct Cyc_List_List * _TE4;
  void * _TE5;
  int _TE6;
  struct Cyc_List_List * _TE7;
  void * _TE8;
  int _TE9;
  struct Cyc_List_List * _TEA;
  struct Cyc_Int_pa_PrintArg_struct _TEB;
  struct Cyc_List_List * _TEC;
  void * _TED;
  int _TEE;
  struct Cyc_List_List * (* _TEF)(unsigned int,struct _fat_ptr,struct _fat_ptr ap);
  unsigned int _TF0;
  struct _fat_ptr _TF1;
  struct _fat_ptr _TF2;
  struct Cyc_List_List * _TF3;
  struct Cyc_List_List * _TF4;
  struct Cyc_String_pa_PrintArg_struct _TF5;
  struct Cyc_List_List * (* _TF6)(unsigned int,struct _fat_ptr,struct _fat_ptr ap);
  unsigned int _TF7;
  struct _fat_ptr _TF8;
  struct _fat_ptr _TF9;
  struct Cyc_List_List * _TFA;
  struct Cyc_List_List * _TFB;
  struct Cyc_List_List * _TFC;
  struct Cyc_List_List * _TFD;
  void * _TFE;
  int _TFF;
  struct Cyc_List_List * _T100;
  void * _T101;
  int _T102;
  struct Cyc_List_List * _T103;
  struct Cyc_List_List * _T104;
  struct Cyc_List_List * _T105;
  struct Cyc_List_List * _T106;
  struct Cyc_List_List * _T107;
  struct Cyc_List_List * _T108;
  void * _T109;
  struct Cyc_List_List * _T10A;
  void * _T10B;
  int _T10C;
  int _T10D;
  struct Cyc_List_List * _T10E;
  struct Cyc_String_pa_PrintArg_struct _T10F;
  struct Cyc_Int_pa_PrintArg_struct _T110;
  char _T111;
  int _T112;
  struct Cyc_List_List * (* _T113)(unsigned int,struct _fat_ptr,struct _fat_ptr ap);
  unsigned int _T114;
  struct _fat_ptr _T115;
  struct _fat_ptr _T116;
  void * _T117;
  struct Cyc_Core_Opt * _T118;
  struct Cyc_Core_Opt * _T119;
  struct Cyc_Core_Opt * _T11A;
  void * _T11B;
  void * _T11C;
  struct Cyc_Absyn_Tqual _T11D;
  void * _T11E;
  void * _T11F;
  struct Cyc_List_List * _T120;
  struct Cyc_List_List * _T121;
  struct Cyc_String_pa_PrintArg_struct _T122;
  struct Cyc_List_List * (* _T123)(unsigned int,struct _fat_ptr,struct _fat_ptr ap);
  unsigned int _T124;
  struct _fat_ptr _T125;
  struct _fat_ptr _T126;
  struct Cyc_List_List * _T127;
  struct Cyc_String_pa_PrintArg_struct _T128;
  struct Cyc_List_List * (* _T129)(unsigned int,struct _fat_ptr,struct _fat_ptr ap);
  unsigned int _T12A;
  struct _fat_ptr _T12B;
  struct _fat_ptr _T12C;
  struct Cyc_List_List * _T12D;
  struct Cyc_String_pa_PrintArg_struct _T12E;
  struct Cyc_List_List * (* _T12F)(unsigned int,struct _fat_ptr,struct _fat_ptr ap);
  unsigned int _T130;
  struct _fat_ptr _T131;
  struct _fat_ptr _T132;
  struct Cyc_List_List * _T133;
  struct Cyc_String_pa_PrintArg_struct _T134;
  struct Cyc_List_List * (* _T135)(unsigned int,struct _fat_ptr,struct _fat_ptr ap);
  unsigned int _T136;
  struct _fat_ptr _T137;
  struct _fat_ptr _T138;
  unsigned long len = Cyc_strlen(s);
  struct Cyc_List_List * typs = 0;
  int i;
  struct _RegionHandle _T139 = _new_region(0U,"temp");
  struct _RegionHandle * temp = &_T139;
  _push_region(temp);
  i = 0;
  _TL32: _T0 = i;
  _T1 = (unsigned long)_T0;
  _T2 = len;
  if (_T1 < _T2) { goto _TL30;
  }else { goto _TL31;
  }
  _TL30: _T3 = s;
  _T4 = _T3.curr;
  _T5 = (const char *)_T4;
  _T6 = _check_null(_T5);
  _T7 = i;
  _T8 = _T6[_T7];
  _T9 = (int)_T8;
  if (_T9 == 37) { goto _TL33;
  }
  goto _TL2F;
  _TL33: _TA = temp;
  _TB = s;
  _TC = i + 1;
  { struct Cyc_Formatstr_ConversionSpecification * cs = Cyc_Formatstr_parse_conversion_specification(_TA,
												     _TB,
												     _TC);
    if (cs != 0) { goto _TL35;
    }
    { struct Cyc_List_List * (* _T13A)(unsigned int,struct _fat_ptr,struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
														      struct _fat_ptr,
														      struct _fat_ptr ap))Cyc_Formatstr_err_null;
      _TD = _T13A;
    }_TE = loc;
    _TF = _tag_fat("bad format string",sizeof(char),18U);
    _T10 = _tag_fat(0U,sizeof(void *),0);
    { struct Cyc_List_List * _T13A = _TD(_TE,_TF,_T10);
      _npop_handler(0);
      return _T13A;
    }_TL35: _T11 = cs;
    { struct Cyc_Formatstr_ConversionSpecification _T13A = *_T11;
      int _T13B;
      char _T13C;
      struct Cyc_List_List * _T13D;
      struct Cyc_List_List * _T13E;
      struct Cyc_List_List * _T13F;
      struct Cyc_List_List * _T140;
      _T140 = _T13A.flags;
      _T13F = _T13A.width;
      _T13E = _T13A.precision;
      _T13D = _T13A.lenmod;
      _T13C = _T13A.c;
      _T13B = _T13A.j;
      { struct Cyc_List_List * flags = _T140;
	struct Cyc_List_List * width = _T13F;
	struct Cyc_List_List * precision = _T13E;
	struct Cyc_List_List * lenmod = _T13D;
	char c = _T13C;
	int j = _T13B;
	i = j - 1;
	{ int _T141;
	  if (lenmod == 0) { goto _TL37;
	  }
	  _T12 = lenmod;
	  _T13 = (struct Cyc_List_List *)_T12;
	  _T14 = _T13->tl;
	  if (_T14 != 0) { goto _TL39;
	  }
	  _T15 = lenmod;
	  { struct Cyc_List_List _T142 = *_T15;
	    _T16 = _T142.hd;
	    _T141 = (int)_T16;
	  }_T17 = (int)_T141;
	  if (_T17 == 106) { goto _TL3D;
	  }else { goto _TL3F;
	  }
	  _TL3F: _T18 = (int)_T141;
	  if (_T18 == 122) { goto _TL3D;
	  }else { goto _TL3E;
	  }
	  _TL3E: _T19 = (int)_T141;
	  if (_T19 == 116) { goto _TL3D;
	  }else { goto _TL3B;
	  }
	  _TL3D: { int x = _T141;
	    { struct Cyc_Int_pa_PrintArg_struct _T142;
	      _T142.tag = 1;
	      _T1C = x;
	      _T142.f1 = (unsigned long)_T1C;
	      _T1B = _T142;
	    }{ struct Cyc_Int_pa_PrintArg_struct _T142 = _T1B;
	      void * _T143[1];
	      _T143[0] = &_T142;
	      { struct Cyc_List_List * (* _T144)(unsigned int,struct _fat_ptr,
						 struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
												   struct _fat_ptr,
												   struct _fat_ptr ap))Cyc_Formatstr_err_null;
		_T1D = _T144;
	      }_T1E = loc;
	      _T1F = _tag_fat("length modifier '%c' is not supported",sizeof(char),
			      38U);
	      _T20 = _tag_fat(_T143,sizeof(void *),1);
	      _T1A = _T1D(_T1E,_T1F,_T20);
	    }{ struct Cyc_List_List * _T142 = _T1A;
	      _npop_handler(0);
	      return _T142;
	    }
	  }_TL3B: goto _LL6;
	  _TL39: goto _LL6;
	  _TL37: _LL6: goto _LL3;
	  _LL3: ;
	}{ int _T141;
	  if (width == 0) { goto _TL40;
	  }
	  _T21 = width;
	  _T22 = (struct Cyc_List_List *)_T21;
	  _T23 = _T22->tl;
	  if (_T23 != 0) { goto _TL42;
	  }
	  _T24 = width;
	  { struct Cyc_List_List _T142 = *_T24;
	    _T25 = _T142.hd;
	    _T141 = (int)_T25;
	  }_T26 = (int)_T141;
	  if (_T26 != 42) { goto _TL44;
	  }
	  { int x = _T141;
	    { struct Cyc_List_List * _T142 = _cycalloc(sizeof(struct Cyc_List_List));
	      _T142->hd = Cyc_Absyn_sint_type;
	      _T142->tl = typs;
	      _T27 = (struct Cyc_List_List *)_T142;
	    }typs = _T27;
	    goto _LL8;
	  }_TL44: goto _LLB;
	  _TL42: goto _LLB;
	  _TL40: _LLB: goto _LL8;
	  _LL8: ;
	}{ int _T141;
	  int _T142;
	  if (precision == 0) { goto _TL46;
	  }
	  _T28 = precision;
	  _T29 = (struct Cyc_List_List *)_T28;
	  _T2A = _T29->tl;
	  if (_T2A == 0) { goto _TL48;
	  }
	  _T2B = precision;
	  _T2C = (struct Cyc_List_List *)_T2B;
	  _T2D = _T2C->tl;
	  _T2E = (struct Cyc_List_List *)_T2D;
	  _T2F = _T2E->tl;
	  if (_T2F != 0) { goto _TL4A;
	  }
	  _T30 = precision;
	  { struct Cyc_List_List _T143 = *_T30;
	    _T31 = _T143.hd;
	    _T142 = (int)_T31;
	    _T32 = _T143.tl;
	    { struct Cyc_List_List _T144 = *_T32;
	      _T33 = _T144.hd;
	      _T141 = (int)_T33;
	    }
	  }_T34 = (int)_T142;
	  if (_T34 != 46) { goto _TL4C;
	  }
	  _T35 = (int)_T141;
	  if (_T35 != 42) { goto _TL4C;
	  }
	  { int x = _T142;
	    int y = _T141;
	    { struct Cyc_List_List * _T143 = _cycalloc(sizeof(struct Cyc_List_List));
	      _T143->hd = Cyc_Absyn_sint_type;
	      _T143->tl = typs;
	      _T36 = (struct Cyc_List_List *)_T143;
	    }typs = _T36;
	    goto _LLD;
	  }_TL4C: goto _LL10;
	  _TL4A: goto _LL10;
	  _TL48: goto _LL10;
	  _TL46: _LL10: goto _LLD;
	  _LLD: ;
	}{ void * t;
	  _T37 = c;
	  _T38 = (int)_T37;
	  switch (_T38) {
	  case 100: 
	    goto _LL16;
	  case 105: 
	    _LL16: { struct Cyc_List_List * f = flags;
	      _TL52: if (f != 0) { goto _TL50;
	      }else { goto _TL51;
	      }
	      _TL50: _T39 = f;
	      _T3A = _T39->hd;
	      _T3B = (int)_T3A;
	      if (_T3B != 35) { goto _TL53;
	      }
	      { struct Cyc_Int_pa_PrintArg_struct _T141;
		_T141.tag = 1;
		_T3E = c;
		_T3F = (int)_T3E;
		_T141.f1 = (unsigned long)_T3F;
		_T3D = _T141;
	      }{ struct Cyc_Int_pa_PrintArg_struct _T141 = _T3D;
		void * _T142[1];
		_T142[0] = &_T141;
		{ struct Cyc_List_List * (* _T143)(unsigned int,struct _fat_ptr,
						   struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
												     struct _fat_ptr,
												     struct _fat_ptr ap))Cyc_Formatstr_err_null;
		  _T40 = _T143;
		}_T41 = loc;
		_T42 = _tag_fat("flag '#' is not valid with %%%c",sizeof(char),
				32U);
		_T43 = _tag_fat(_T142,sizeof(void *),1);
		_T3C = _T40(_T41,_T42,_T43);
	      }{ struct Cyc_List_List * _T141 = _T3C;
		_npop_handler(0);
		return _T141;
	      }_TL53: _T44 = f;
	      f = _T44->tl;
	      goto _TL52;
	      _TL51: ;
	    }{ int _T141;
	      int _T142;
	      if (lenmod != 0) { goto _TL55;
	      }
	      t = Cyc_Absyn_sint_type;
	      goto _LL3B;
	      _TL55: _T45 = lenmod;
	      _T46 = (struct Cyc_List_List *)_T45;
	      _T47 = _T46->tl;
	      if (_T47 != 0) { goto _TL57;
	      }
	      _T48 = lenmod;
	      { struct Cyc_List_List _T143 = *_T48;
		_T49 = _T143.hd;
		_T142 = (int)_T49;
	      }_T4A = (int)_T142;
	      if (_T4A != 108) { goto _TL59;
	      }
	      { int x = _T142;
		t = Cyc_Absyn_slong_type;
		goto _LL3B;
	      }_TL59: _T4B = lenmod;
	      { struct Cyc_List_List _T143 = *_T4B;
		_T4C = _T143.hd;
		_T142 = (int)_T4C;
	      }_T4D = (int)_T142;
	      if (_T4D != 104) { goto _TL5B;
	      }
	      { int x = _T142;
		t = Cyc_Absyn_sshort_type;
		goto _LL3B;
	      }_TL5B: goto _LL46;
	      _TL57: _T4E = lenmod;
	      _T4F = (struct Cyc_List_List *)_T4E;
	      _T50 = _T4F->tl;
	      _T51 = (struct Cyc_List_List *)_T50;
	      _T52 = _T51->tl;
	      if (_T52 != 0) { goto _TL5D;
	      }
	      _T53 = lenmod;
	      { struct Cyc_List_List _T143 = *_T53;
		_T54 = _T143.hd;
		_T142 = (int)_T54;
		_T55 = _T143.tl;
		{ struct Cyc_List_List _T144 = *_T55;
		  _T56 = _T144.hd;
		  _T141 = (int)_T56;
		}
	      }_T57 = (int)_T142;
	      if (_T57 != 108) { goto _TL5F;
	      }
	      _T58 = (int)_T141;
	      if (_T58 != 108) { goto _TL5F;
	      }
	      { int x = _T142;
		int y = _T141;
		t = Cyc_Absyn_slonglong_type;
		goto _LL3B;
	      }_TL5F: _T59 = lenmod;
	      { struct Cyc_List_List _T143 = *_T59;
		_T5A = _T143.hd;
		_T142 = (int)_T5A;
		_T5B = _T143.tl;
		{ struct Cyc_List_List _T144 = *_T5B;
		  _T5C = _T144.hd;
		  _T141 = (int)_T5C;
		}
	      }_T5D = (int)_T142;
	      if (_T5D != 104) { goto _TL61;
	      }
	      _T5E = (int)_T141;
	      if (_T5E != 104) { goto _TL61;
	      }
	      { int x = _T142;
		int y = _T141;
		t = Cyc_Absyn_schar_type;
		goto _LL3B;
	      }_TL61: goto _LL46;
	      _TL5D: _LL46: { struct Cyc_String_pa_PrintArg_struct _T143;
		_T143.tag = 0;
		_T143.f1 = Cyc_implode(lenmod);
		_T60 = _T143;
	      }{ struct Cyc_String_pa_PrintArg_struct _T143 = _T60;
		{ struct Cyc_Int_pa_PrintArg_struct _T144;
		  _T144.tag = 1;
		  _T62 = c;
		  _T63 = (int)_T62;
		  _T144.f1 = (unsigned long)_T63;
		  _T61 = _T144;
		}{ struct Cyc_Int_pa_PrintArg_struct _T144 = _T61;
		  void * _T145[2];
		  _T145[0] = &_T143;
		  _T145[1] = &_T144;
		  { struct Cyc_List_List * (* _T146)(unsigned int,struct _fat_ptr,
						     struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
												       struct _fat_ptr,
												       struct _fat_ptr ap))Cyc_Formatstr_err_null;
		    _T64 = _T146;
		  }_T65 = loc;
		  _T66 = _tag_fat("length modifier '%s' is not allowed with %%%c",
				  sizeof(char),46U);
		  _T67 = _tag_fat(_T145,sizeof(void *),2);
		  _T5F = _T64(_T65,_T66,_T67);
		}
	      }{ struct Cyc_List_List * _T143 = _T5F;
		_npop_handler(0);
		return _T143;
	      }_LL3B: ;
	    }{ struct Cyc_List_List * _T141 = _cycalloc(sizeof(struct Cyc_List_List));
	      _T141->hd = t;
	      _T141->tl = typs;
	      _T68 = (struct Cyc_List_List *)_T141;
	    }typs = _T68;
	    goto _LL12;
	  case 117: 
	    { struct Cyc_List_List * f = flags;
	      _TL66: if (f != 0) { goto _TL64;
	      }else { goto _TL65;
	      }
	      _TL64: _T69 = f;
	      _T6A = _T69->hd;
	      _T6B = (int)_T6A;
	      if (_T6B != 35) { goto _TL67;
	      }
	      { struct Cyc_List_List * (* _T141)(unsigned int,struct _fat_ptr,
						 struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
												   struct _fat_ptr,
												   struct _fat_ptr ap))Cyc_Formatstr_err_null;
		_T6C = _T141;
	      }_T6D = loc;
	      _T6E = _tag_fat("Flag '#' not valid with %%u",sizeof(char),
			      28U);
	      _T6F = _tag_fat(0U,sizeof(void *),0);
	      { struct Cyc_List_List * _T141 = _T6C(_T6D,_T6E,_T6F);
		_npop_handler(0);
		return _T141;
	      }_TL67: _T70 = f;
	      f = _T70->tl;
	      goto _TL66;
	      _TL65: ;
	    }goto _LL1A;
	  case 111: 
	    _LL1A: goto _LL1C;
	  case 120: 
	    _LL1C: goto _LL1E;
	  case 88: 
	    _LL1E: { int _T141;
	      int _T142;
	      if (lenmod != 0) { goto _TL69;
	      }
	      t = Cyc_Absyn_uint_type;
	      goto _LL48;
	      _TL69: _T71 = lenmod;
	      _T72 = (struct Cyc_List_List *)_T71;
	      _T73 = _T72->tl;
	      if (_T73 != 0) { goto _TL6B;
	      }
	      _T74 = lenmod;
	      { struct Cyc_List_List _T143 = *_T74;
		_T75 = _T143.hd;
		_T142 = (int)_T75;
	      }_T76 = (int)_T142;
	      if (_T76 != 108) { goto _TL6D;
	      }
	      { int x = _T142;
		t = Cyc_Absyn_ulong_type;
		goto _LL48;
	      }_TL6D: _T77 = lenmod;
	      { struct Cyc_List_List _T143 = *_T77;
		_T78 = _T143.hd;
		_T142 = (int)_T78;
	      }_T79 = (int)_T142;
	      if (_T79 != 104) { goto _TL6F;
	      }
	      { int x = _T142;
		t = Cyc_Absyn_ushort_type;
		goto _LL48;
	      }_TL6F: goto _LL53;
	      _TL6B: _T7A = lenmod;
	      _T7B = (struct Cyc_List_List *)_T7A;
	      _T7C = _T7B->tl;
	      _T7D = (struct Cyc_List_List *)_T7C;
	      _T7E = _T7D->tl;
	      if (_T7E != 0) { goto _TL71;
	      }
	      _T7F = lenmod;
	      { struct Cyc_List_List _T143 = *_T7F;
		_T80 = _T143.hd;
		_T142 = (int)_T80;
		_T81 = _T143.tl;
		{ struct Cyc_List_List _T144 = *_T81;
		  _T82 = _T144.hd;
		  _T141 = (int)_T82;
		}
	      }_T83 = (int)_T142;
	      if (_T83 != 108) { goto _TL73;
	      }
	      _T84 = (int)_T141;
	      if (_T84 != 108) { goto _TL73;
	      }
	      { int x = _T142;
		int y = _T141;
		t = Cyc_Absyn_ulonglong_type;
		goto _LL48;
	      }_TL73: _T85 = lenmod;
	      { struct Cyc_List_List _T143 = *_T85;
		_T86 = _T143.hd;
		_T142 = (int)_T86;
		_T87 = _T143.tl;
		{ struct Cyc_List_List _T144 = *_T87;
		  _T88 = _T144.hd;
		  _T141 = (int)_T88;
		}
	      }_T89 = (int)_T142;
	      if (_T89 != 104) { goto _TL75;
	      }
	      _T8A = (int)_T141;
	      if (_T8A != 104) { goto _TL75;
	      }
	      { int x = _T142;
		int y = _T141;
		t = Cyc_Absyn_uchar_type;
		goto _LL48;
	      }_TL75: goto _LL53;
	      _TL71: _LL53: { struct Cyc_String_pa_PrintArg_struct _T143;
		_T143.tag = 0;
		_T143.f1 = Cyc_implode(lenmod);
		_T8C = _T143;
	      }{ struct Cyc_String_pa_PrintArg_struct _T143 = _T8C;
		{ struct Cyc_Int_pa_PrintArg_struct _T144;
		  _T144.tag = 1;
		  _T8E = c;
		  _T8F = (int)_T8E;
		  _T144.f1 = (unsigned long)_T8F;
		  _T8D = _T144;
		}{ struct Cyc_Int_pa_PrintArg_struct _T144 = _T8D;
		  void * _T145[2];
		  _T145[0] = &_T143;
		  _T145[1] = &_T144;
		  { struct Cyc_List_List * (* _T146)(unsigned int,struct _fat_ptr,
						     struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
												       struct _fat_ptr,
												       struct _fat_ptr ap))Cyc_Formatstr_err_null;
		    _T90 = _T146;
		  }_T91 = loc;
		  _T92 = _tag_fat("length modifier '%s' is not allowed with %%%c",
				  sizeof(char),46U);
		  _T93 = _tag_fat(_T145,sizeof(void *),2);
		  _T8B = _T90(_T91,_T92,_T93);
		}
	      }{ struct Cyc_List_List * _T143 = _T8B;
		_npop_handler(0);
		return _T143;
	      }_LL48: ;
	    }{ struct Cyc_List_List * _T141 = _cycalloc(sizeof(struct Cyc_List_List));
	      _T141->hd = t;
	      _T141->tl = typs;
	      _T94 = (struct Cyc_List_List *)_T141;
	    }typs = _T94;
	    goto _LL12;
	  case 102: 
	    goto _LL22;
	  case 70: 
	    _LL22: goto _LL24;
	  case 101: 
	    _LL24: goto _LL26;
	  case 69: 
	    _LL26: goto _LL28;
	  case 103: 
	    _LL28: goto _LL2A;
	  case 71: 
	    _LL2A: goto _LL2C;
	  case 97: 
	    _LL2C: goto _LL2E;
	  case 65: 
	    _LL2E: { int _T141;
	      if (lenmod != 0) { goto _TL77;
	      }
	      { struct Cyc_List_List * _T142 = _cycalloc(sizeof(struct Cyc_List_List));
		_T142->hd = Cyc_Absyn_double_type;
		_T142->tl = typs;
		_T95 = (struct Cyc_List_List *)_T142;
	      }typs = _T95;
	      goto _LL55;
	      _TL77: _T96 = lenmod;
	      _T97 = (struct Cyc_List_List *)_T96;
	      _T98 = _T97->tl;
	      if (_T98 != 0) { goto _TL79;
	      }
	      _T99 = lenmod;
	      { struct Cyc_List_List _T142 = *_T99;
		_T9A = _T142.hd;
		_T141 = (int)_T9A;
	      }_T9B = (int)_T141;
	      if (_T9B != 108) { goto _TL7B;
	      }
	      { int x = _T141;
		{ struct Cyc_List_List * _T142 = _cycalloc(sizeof(struct Cyc_List_List));
		  _T142->hd = Cyc_Absyn_long_double_type;
		  _T142->tl = typs;
		  _T9C = (struct Cyc_List_List *)_T142;
		}typs = _T9C;
		goto _LL55;
	      }_TL7B: goto _LL5A;
	      _TL79: _LL5A: { struct Cyc_String_pa_PrintArg_struct _T142;
		_T142.tag = 0;
		_T142.f1 = Cyc_implode(lenmod);
		_T9E = _T142;
	      }{ struct Cyc_String_pa_PrintArg_struct _T142 = _T9E;
		{ struct Cyc_Int_pa_PrintArg_struct _T143;
		  _T143.tag = 1;
		  _TA0 = c;
		  _TA1 = (int)_TA0;
		  _T143.f1 = (unsigned long)_TA1;
		  _T9F = _T143;
		}{ struct Cyc_Int_pa_PrintArg_struct _T143 = _T9F;
		  void * _T144[2];
		  _T144[0] = &_T142;
		  _T144[1] = &_T143;
		  { struct Cyc_List_List * (* _T145)(unsigned int,struct _fat_ptr,
						     struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
												       struct _fat_ptr,
												       struct _fat_ptr ap))Cyc_Formatstr_err_null;
		    _TA2 = _T145;
		  }_TA3 = loc;
		  _TA4 = _tag_fat("length modifier '%s' is not allowed with %%%c",
				  sizeof(char),46U);
		  _TA5 = _tag_fat(_T144,sizeof(void *),2);
		  _T9D = _TA2(_TA3,_TA4,_TA5);
		}
	      }{ struct Cyc_List_List * _T142 = _T9D;
		_npop_handler(0);
		return _T142;
	      }_LL55: ;
	    }goto _LL12;
	  case 99: 
	    { struct Cyc_List_List * f = flags;
	      _TL80: if (f != 0) { goto _TL7E;
	      }else { goto _TL7F;
	      }
	      _TL7E: _TA6 = f;
	      _TA7 = _TA6->hd;
	      _TA8 = (int)_TA7;
	      if (_TA8 == 35) { goto _TL83;
	      }else { goto _TL84;
	      }
	      _TL84: _TA9 = f;
	      _TAA = _TA9->hd;
	      _TAB = (int)_TAA;
	      if (_TAB == 48) { goto _TL83;
	      }else { goto _TL81;
	      }
	      _TL83: { struct Cyc_Int_pa_PrintArg_struct _T141;
		_T141.tag = 1;
		_TAE = f;
		_TAF = _TAE->hd;
		_TB0 = (int)_TAF;
		_T141.f1 = (unsigned long)_TB0;
		_TAD = _T141;
	      }{ struct Cyc_Int_pa_PrintArg_struct _T141 = _TAD;
		void * _T142[1];
		_T142[0] = &_T141;
		{ struct Cyc_List_List * (* _T143)(unsigned int,struct _fat_ptr,
						   struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
												     struct _fat_ptr,
												     struct _fat_ptr ap))Cyc_Formatstr_err_null;
		  _TB1 = _T143;
		}_TB2 = loc;
		_TB3 = _tag_fat("flag '%c' not allowed with %%c",sizeof(char),
				31U);
		_TB4 = _tag_fat(_T142,sizeof(void *),1);
		_TAC = _TB1(_TB2,_TB3,_TB4);
	      }{ struct Cyc_List_List * _T141 = _TAC;
		_npop_handler(0);
		return _T141;
	      }_TL81: _TB5 = f;
	      f = _TB5->tl;
	      goto _TL80;
	      _TL7F: ;
	    }if (lenmod == 0) { goto _TL85;
	    }
	    { struct Cyc_String_pa_PrintArg_struct _T141;
	      _T141.tag = 0;
	      _T141.f1 = Cyc_implode(lenmod);
	      _TB7 = _T141;
	    }{ struct Cyc_String_pa_PrintArg_struct _T141 = _TB7;
	      void * _T142[1];
	      _T142[0] = &_T141;
	      { struct Cyc_List_List * (* _T143)(unsigned int,struct _fat_ptr,
						 struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
												   struct _fat_ptr,
												   struct _fat_ptr ap))Cyc_Formatstr_err_null;
		_TB8 = _T143;
	      }_TB9 = loc;
	      _TBA = _tag_fat("length modifier '%s' not allowed with %%c",
			      sizeof(char),42U);
	      _TBB = _tag_fat(_T142,sizeof(void *),1);
	      _TB6 = _TB8(_TB9,_TBA,_TBB);
	    }{ struct Cyc_List_List * _T141 = _TB6;
	      _npop_handler(0);
	      return _T141;
	    }_TL85: if (precision == 0) { goto _TL87;
	    }
	    { struct Cyc_String_pa_PrintArg_struct _T141;
	      _T141.tag = 0;
	      _T141.f1 = Cyc_implode(precision);
	      _TBD = _T141;
	    }{ struct Cyc_String_pa_PrintArg_struct _T141 = _TBD;
	      void * _T142[1];
	      _T142[0] = &_T141;
	      { struct Cyc_List_List * (* _T143)(unsigned int,struct _fat_ptr,
						 struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
												   struct _fat_ptr,
												   struct _fat_ptr ap))Cyc_Formatstr_err_null;
		_TBE = _T143;
	      }_TBF = loc;
	      _TC0 = _tag_fat("precision '%s' not allowed with %%c",sizeof(char),
			      36U);
	      _TC1 = _tag_fat(_T142,sizeof(void *),1);
	      _TBC = _TBE(_TBF,_TC0,_TC1);
	    }{ struct Cyc_List_List * _T141 = _TBC;
	      _npop_handler(0);
	      return _T141;
	    }_TL87: { struct Cyc_List_List * _T141 = _cycalloc(sizeof(struct Cyc_List_List));
	      _T141->hd = Cyc_Absyn_sint_type;
	      _T141->tl = typs;
	      _TC2 = (struct Cyc_List_List *)_T141;
	    }typs = _TC2;
	    goto _LL12;
	  case 115: 
	    { struct Cyc_List_List * f = flags;
	      _TL8C: if (f != 0) { goto _TL8A;
	      }else { goto _TL8B;
	      }
	      _TL8A: _TC3 = f;
	      _TC4 = _TC3->hd;
	      _TC5 = (int)_TC4;
	      if (_TC5 == 45) { goto _TL8D;
	      }
	      { struct Cyc_List_List * (* _T141)(unsigned int,struct _fat_ptr,
						 struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
												   struct _fat_ptr,
												   struct _fat_ptr ap))Cyc_Formatstr_err_null;
		_TC6 = _T141;
	      }_TC7 = loc;
	      _TC8 = _tag_fat("a flag not allowed with %%s",sizeof(char),
			      28U);
	      _TC9 = _tag_fat(0U,sizeof(void *),0);
	      { struct Cyc_List_List * _T141 = _TC6(_TC7,_TC8,_TC9);
		_npop_handler(0);
		return _T141;
	      }_TL8D: _TCA = f;
	      f = _TCA->tl;
	      goto _TL8C;
	      _TL8B: ;
	    }if (lenmod == 0) { goto _TL8F;
	    }
	    { struct Cyc_List_List * (* _T141)(unsigned int,struct _fat_ptr,
					       struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
												 struct _fat_ptr,
												 struct _fat_ptr ap))Cyc_Formatstr_err_null;
	      _TCB = _T141;
	    }_TCC = loc;
	    _TCD = _tag_fat("length modifiers not allowed with %%s",sizeof(char),
			    38U);
	    _TCE = _tag_fat(0U,sizeof(void *),0);
	    { struct Cyc_List_List * _T141 = _TCB(_TCC,_TCD,_TCE);
	      _npop_handler(0);
	      return _T141;
	    }_TL8F: { void * ptr;
	      struct Cyc_List_List * tvs = Cyc_Tcenv_lookup_type_vars(te);
	      _TCF = isCproto;
	      if (_TCF) { goto _TL91;
	      }else { goto _TL93;
	      }
	      _TL93: _TD0 = Cyc_Absyn_char_type;
	      _TD1 = &Cyc_Kinds_eko;
	      _TD2 = (struct Cyc_Core_Opt *)_TD1;
	      { struct Cyc_Core_Opt * _T141 = _cycalloc(sizeof(struct Cyc_Core_Opt));
		_T141->v = tvs;
		_TD3 = (struct Cyc_Core_Opt *)_T141;
	      }_TD4 = Cyc_Absyn_new_evar(_TD2,_TD3);
	      _TD5 = Cyc_Absyn_al_qual_type;
	      _TD6 = Cyc_Absyn_const_tqual(0U);
	      _TD7 = Cyc_Absyn_false_type;
	      _TD8 = Cyc_Tcutil_any_bool(tvs);
	      ptr = Cyc_Absyn_fatptr_type(_TD0,_TD4,_TD5,_TD6,_TD7,_TD8);
	      goto _TL92;
	      _TL91: _TD9 = Cyc_Absyn_char_type;
	      _TDA = &Cyc_Kinds_eko;
	      _TDB = (struct Cyc_Core_Opt *)_TDA;
	      { struct Cyc_Core_Opt * _T141 = _cycalloc(sizeof(struct Cyc_Core_Opt));
		_T141->v = tvs;
		_TDC = (struct Cyc_Core_Opt *)_T141;
	      }_TDD = Cyc_Absyn_new_evar(_TDB,_TDC);
	      _TDE = Cyc_Absyn_al_qual_type;
	      _TDF = Cyc_Absyn_const_tqual(0U);
	      _TE0 = Cyc_Absyn_true_type;
	      _TE1 = Cyc_Tcutil_any_bool(tvs);
	      ptr = Cyc_Absyn_at_type(_TD9,_TDD,_TDE,_TDF,_TE0,_TE1);
	      _TL92: { struct Cyc_List_List * _T141 = _cycalloc(sizeof(struct Cyc_List_List));
		_T141->hd = ptr;
		_T141->tl = typs;
		_TE2 = (struct Cyc_List_List *)_T141;
	      }typs = _TE2;
	      goto _LL12;
	    }
	  case 112: 
	    { struct Cyc_List_List * _T141 = _cycalloc(sizeof(struct Cyc_List_List));
	      _T141->hd = Cyc_Absyn_uint_type;
	      _T141->tl = typs;
	      _TE3 = (struct Cyc_List_List *)_T141;
	    }typs = _TE3;
	    goto _LL12;
	  case 110: 
	    { struct Cyc_List_List * f = flags;
	      _TL97: if (f != 0) { goto _TL95;
	      }else { goto _TL96;
	      }
	      _TL95: _TE4 = f;
	      _TE5 = _TE4->hd;
	      _TE6 = (int)_TE5;
	      if (_TE6 == 35) { goto _TL9A;
	      }else { goto _TL9B;
	      }
	      _TL9B: _TE7 = f;
	      _TE8 = _TE7->hd;
	      _TE9 = (int)_TE8;
	      if (_TE9 == 48) { goto _TL9A;
	      }else { goto _TL98;
	      }
	      _TL9A: { struct Cyc_Int_pa_PrintArg_struct _T141;
		_T141.tag = 1;
		_TEC = f;
		_TED = _TEC->hd;
		_TEE = (int)_TED;
		_T141.f1 = (unsigned long)_TEE;
		_TEB = _T141;
	      }{ struct Cyc_Int_pa_PrintArg_struct _T141 = _TEB;
		void * _T142[1];
		_T142[0] = &_T141;
		{ struct Cyc_List_List * (* _T143)(unsigned int,struct _fat_ptr,
						   struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
												     struct _fat_ptr,
												     struct _fat_ptr ap))Cyc_Formatstr_err_null;
		  _TEF = _T143;
		}_TF0 = loc;
		_TF1 = _tag_fat("flag '%c' not allowed with %%n",sizeof(char),
				31U);
		_TF2 = _tag_fat(_T142,sizeof(void *),1);
		_TEA = _TEF(_TF0,_TF1,_TF2);
	      }{ struct Cyc_List_List * _T141 = _TEA;
		_npop_handler(0);
		return _T141;
	      }_TL98: _TF3 = f;
	      f = _TF3->tl;
	      goto _TL97;
	      _TL96: ;
	    }if (precision == 0) { goto _TL9C;
	    }
	    { struct Cyc_String_pa_PrintArg_struct _T141;
	      _T141.tag = 0;
	      _T141.f1 = Cyc_implode(precision);
	      _TF5 = _T141;
	    }{ struct Cyc_String_pa_PrintArg_struct _T141 = _TF5;
	      void * _T142[1];
	      _T142[0] = &_T141;
	      { struct Cyc_List_List * (* _T143)(unsigned int,struct _fat_ptr,
						 struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
												   struct _fat_ptr,
												   struct _fat_ptr ap))Cyc_Formatstr_err_null;
		_TF6 = _T143;
	      }_TF7 = loc;
	      _TF8 = _tag_fat("precision '%s' not allowed with %%n",sizeof(char),
			      36U);
	      _TF9 = _tag_fat(_T142,sizeof(void *),1);
	      _TF4 = _TF6(_TF7,_TF8,_TF9);
	    }{ struct Cyc_List_List * _T141 = _TF4;
	      _npop_handler(0);
	      return _T141;
	    }_TL9C: { struct Cyc_List_List * tvs = Cyc_Tcenv_lookup_type_vars(te);
	      { int _T141;
		int _T142;
		if (lenmod != 0) { goto _TL9E;
		}
		t = Cyc_Absyn_sint_type;
		goto _LL5C;
		_TL9E: _TFA = lenmod;
		_TFB = (struct Cyc_List_List *)_TFA;
		_TFC = _TFB->tl;
		if (_TFC != 0) { goto _TLA0;
		}
		_TFD = lenmod;
		{ struct Cyc_List_List _T143 = *_TFD;
		  _TFE = _T143.hd;
		  _T142 = (int)_TFE;
		}_TFF = (int)_T142;
		if (_TFF != 108) { goto _TLA2;
		}
		{ int x = _T142;
		  t = Cyc_Absyn_ulong_type;
		  goto _LL5C;
		}_TLA2: _T100 = lenmod;
		{ struct Cyc_List_List _T143 = *_T100;
		  _T101 = _T143.hd;
		  _T142 = (int)_T101;
		}_T102 = (int)_T142;
		if (_T102 != 104) { goto _TLA4;
		}
		{ int x = _T142;
		  t = Cyc_Absyn_sshort_type;
		  goto _LL5C;
		}_TLA4: goto _LL65;
		_TLA0: _T103 = lenmod;
		_T104 = (struct Cyc_List_List *)_T103;
		_T105 = _T104->tl;
		_T106 = (struct Cyc_List_List *)_T105;
		_T107 = _T106->tl;
		if (_T107 != 0) { goto _TLA6;
		}
		_T108 = lenmod;
		{ struct Cyc_List_List _T143 = *_T108;
		  _T109 = _T143.hd;
		  _T142 = (int)_T109;
		  _T10A = _T143.tl;
		  { struct Cyc_List_List _T144 = *_T10A;
		    _T10B = _T144.hd;
		    _T141 = (int)_T10B;
		  }
		}_T10C = (int)_T142;
		if (_T10C != 104) { goto _TLA8;
		}
		_T10D = (int)_T141;
		if (_T10D != 104) { goto _TLA8;
		}
		{ int x = _T142;
		  int y = _T141;
		  t = Cyc_Absyn_schar_type;
		  goto _LL5C;
		}_TLA8: goto _LL65;
		_TLA6: _LL65: { struct Cyc_String_pa_PrintArg_struct _T143;
		  _T143.tag = 0;
		  _T143.f1 = Cyc_implode(lenmod);
		  _T10F = _T143;
		}{ struct Cyc_String_pa_PrintArg_struct _T143 = _T10F;
		  { struct Cyc_Int_pa_PrintArg_struct _T144;
		    _T144.tag = 1;
		    _T111 = c;
		    _T112 = (int)_T111;
		    _T144.f1 = (unsigned long)_T112;
		    _T110 = _T144;
		  }{ struct Cyc_Int_pa_PrintArg_struct _T144 = _T110;
		    void * _T145[2];
		    _T145[0] = &_T143;
		    _T145[1] = &_T144;
		    { struct Cyc_List_List * (* _T146)(unsigned int,struct _fat_ptr,
						       struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
													 struct _fat_ptr,
													 struct _fat_ptr ap))Cyc_Formatstr_err_null;
		      _T113 = _T146;
		    }_T114 = loc;
		    _T115 = _tag_fat("length modifier '%s' is not allowed with %%%c",
				     sizeof(char),46U);
		    _T116 = _tag_fat(_T145,sizeof(void *),2);
		    _T10E = _T113(_T114,_T115,_T116);
		  }
		}{ struct Cyc_List_List * _T143 = _T10E;
		  _npop_handler(0);
		  return _T143;
		}_LL5C: ;
	      }_T117 = t;
	      _T118 = &Cyc_Kinds_eko;
	      _T119 = (struct Cyc_Core_Opt *)_T118;
	      { struct Cyc_Core_Opt * _T141 = _cycalloc(sizeof(struct Cyc_Core_Opt));
		_T141->v = tvs;
		_T11A = (struct Cyc_Core_Opt *)_T141;
	      }_T11B = Cyc_Absyn_new_evar(_T119,_T11A);
	      _T11C = Cyc_Absyn_al_qual_type;
	      _T11D = Cyc_Absyn_empty_tqual(0U);
	      _T11E = Cyc_Absyn_false_type;
	      _T11F = Cyc_Tcutil_any_bool(tvs);
	      t = Cyc_Absyn_at_type(_T117,_T11B,_T11C,_T11D,_T11E,_T11F);
	      { struct Cyc_List_List * _T141 = _cycalloc(sizeof(struct Cyc_List_List));
		_T141->hd = t;
		_T141->tl = typs;
		_T120 = (struct Cyc_List_List *)_T141;
	      }typs = _T120;
	      goto _LL12;
	    }
	  case 37: 
	    if (flags == 0) { goto _TLAA;
	    }
	    { struct Cyc_String_pa_PrintArg_struct _T141;
	      _T141.tag = 0;
	      _T141.f1 = Cyc_implode(flags);
	      _T122 = _T141;
	    }{ struct Cyc_String_pa_PrintArg_struct _T141 = _T122;
	      void * _T142[1];
	      _T142[0] = &_T141;
	      { struct Cyc_List_List * (* _T143)(unsigned int,struct _fat_ptr,
						 struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
												   struct _fat_ptr,
												   struct _fat_ptr ap))Cyc_Formatstr_err_null;
		_T123 = _T143;
	      }_T124 = loc;
	      _T125 = _tag_fat("flags '%s' not allowed with %%%%",sizeof(char),
			       33U);
	      _T126 = _tag_fat(_T142,sizeof(void *),1);
	      _T121 = _T123(_T124,_T125,_T126);
	    }{ struct Cyc_List_List * _T141 = _T121;
	      _npop_handler(0);
	      return _T141;
	    }_TLAA: if (width == 0) { goto _TLAC;
	    }
	    { struct Cyc_String_pa_PrintArg_struct _T141;
	      _T141.tag = 0;
	      _T141.f1 = Cyc_implode(width);
	      _T128 = _T141;
	    }{ struct Cyc_String_pa_PrintArg_struct _T141 = _T128;
	      void * _T142[1];
	      _T142[0] = &_T141;
	      { struct Cyc_List_List * (* _T143)(unsigned int,struct _fat_ptr,
						 struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
												   struct _fat_ptr,
												   struct _fat_ptr ap))Cyc_Formatstr_err_null;
		_T129 = _T143;
	      }_T12A = loc;
	      _T12B = _tag_fat("width '%s' not allowed with %%%%",sizeof(char),
			       33U);
	      _T12C = _tag_fat(_T142,sizeof(void *),1);
	      _T127 = _T129(_T12A,_T12B,_T12C);
	    }{ struct Cyc_List_List * _T141 = _T127;
	      _npop_handler(0);
	      return _T141;
	    }_TLAC: if (precision == 0) { goto _TLAE;
	    }
	    { struct Cyc_String_pa_PrintArg_struct _T141;
	      _T141.tag = 0;
	      _T141.f1 = Cyc_implode(precision);
	      _T12E = _T141;
	    }{ struct Cyc_String_pa_PrintArg_struct _T141 = _T12E;
	      void * _T142[1];
	      _T142[0] = &_T141;
	      { struct Cyc_List_List * (* _T143)(unsigned int,struct _fat_ptr,
						 struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
												   struct _fat_ptr,
												   struct _fat_ptr ap))Cyc_Formatstr_err_null;
		_T12F = _T143;
	      }_T130 = loc;
	      _T131 = _tag_fat("precision '%s' not allowed with %%%%",sizeof(char),
			       37U);
	      _T132 = _tag_fat(_T142,sizeof(void *),1);
	      _T12D = _T12F(_T130,_T131,_T132);
	    }{ struct Cyc_List_List * _T141 = _T12D;
	      _npop_handler(0);
	      return _T141;
	    }_TLAE: if (lenmod == 0) { goto _TLB0;
	    }
	    { struct Cyc_String_pa_PrintArg_struct _T141;
	      _T141.tag = 0;
	      _T141.f1 = Cyc_implode(lenmod);
	      _T134 = _T141;
	    }{ struct Cyc_String_pa_PrintArg_struct _T141 = _T134;
	      void * _T142[1];
	      _T142[0] = &_T141;
	      { struct Cyc_List_List * (* _T143)(unsigned int,struct _fat_ptr,
						 struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
												   struct _fat_ptr,
												   struct _fat_ptr ap))Cyc_Formatstr_err_null;
		_T135 = _T143;
	      }_T136 = loc;
	      _T137 = _tag_fat("length modifier '%s' not allowed with %%%%",
			       sizeof(char),43U);
	      _T138 = _tag_fat(_T142,sizeof(void *),1);
	      _T133 = _T135(_T136,_T137,_T138);
	    }{ struct Cyc_List_List * _T141 = _T133;
	      _npop_handler(0);
	      return _T141;
	    }_TLB0: goto _LL12;
	  default: 
	    { struct Cyc_List_List * _T141 = 0;
	      _npop_handler(0);
	      return _T141;
	    }
	  }
	  _LL12: ;
	}
      }
    }
  }_TL2F: i = i + 1;
  goto _TL32;
  _TL31: { struct Cyc_List_List * _T13A = Cyc_List_imp_rev(typs);
    _npop_handler(0);
    return _T13A;
  }_pop_region();
}
 struct Cyc_Formatstr_InputFormat {
  long suppress;
  struct Cyc_List_List * width;
  struct Cyc_List_List * lenmod;
  char c;
  int j;
};
static struct Cyc_Formatstr_InputFormat * Cyc_Formatstr_parse_input_format(struct _RegionHandle * r,
									   struct _fat_ptr s,
									   int i) {
  int _T0;
  unsigned long _T1;
  unsigned long _T2;
  struct _fat_ptr _T3;
  unsigned char * _T4;
  const char * _T5;
  const char * _T6;
  int _T7;
  char _T8;
  int _T9;
  int _TA;
  unsigned long _TB;
  unsigned long _TC;
  int _TD;
  unsigned long _TE;
  unsigned long _TF;
  struct _fat_ptr _T10;
  unsigned char * _T11;
  const char * _T12;
  int _T13;
  char _T14;
  int _T15;
  int _T16;
  struct Cyc_List_List * _T17;
  struct _RegionHandle * _T18;
  char _T19;
  int _T1A;
  unsigned long _T1B;
  unsigned long _T1C;
  struct _fat_ptr _T1D;
  unsigned char * _T1E;
  const char * _T1F;
  int _T20;
  char _T21;
  int _T22;
  struct Cyc_List_List * _T23;
  struct _RegionHandle * _T24;
  char _T25;
  int _T26;
  unsigned long _T27;
  unsigned long _T28;
  struct _fat_ptr _T29;
  unsigned char * _T2A;
  const char * _T2B;
  int _T2C;
  char _T2D;
  int _T2E;
  struct Cyc_List_List * _T2F;
  struct _RegionHandle * _T30;
  char _T31;
  struct Cyc_List_List * _T32;
  struct _RegionHandle * _T33;
  char _T34;
  int _T35;
  unsigned long _T36;
  unsigned long _T37;
  struct _fat_ptr _T38;
  unsigned char * _T39;
  const char * _T3A;
  int _T3B;
  char _T3C;
  int _T3D;
  struct Cyc_List_List * _T3E;
  struct _RegionHandle * _T3F;
  char _T40;
  struct Cyc_List_List * _T41;
  struct _RegionHandle * _T42;
  char _T43;
  int _T44;
  unsigned long _T45;
  unsigned long _T46;
  struct _fat_ptr _T47;
  unsigned char * _T48;
  const char * _T49;
  int _T4A;
  char _T4B;
  int _T4C;
  struct Cyc_Formatstr_InputFormat * _T4D;
  struct _RegionHandle * _T4E;
  unsigned long len = Cyc_strlen(s);
  if (i < 0) { goto _TLB4;
  }else { goto _TLB5;
  }
  _TLB5: _T0 = i;
  _T1 = (unsigned long)_T0;
  _T2 = len;
  if (_T1 >= _T2) { goto _TLB4;
  }else { goto _TLB2;
  }
  _TLB4: return 0;
  _TLB2: { long suppress = 0;
    _T3 = s;
    _T4 = _T3.curr;
    _T5 = (const char *)_T4;
    _T6 = _check_null(_T5);
    _T7 = i;
    { char c = _T6[_T7];
      _T8 = c;
      _T9 = (int)_T8;
      if (_T9 != 42) { goto _TLB6;
      }
      suppress = 1;
      i = i + 1;
      _TA = i;
      _TB = (unsigned long)_TA;
      _TC = len;
      if (_TB < _TC) { goto _TLB8;
      }
      return 0;
      _TLB8: goto _TLB7;
      _TLB6: _TLB7: { struct Cyc_List_List * width = 0;
	_TLBD: _TD = i;
	_TE = (unsigned long)_TD;
	_TF = len;
	if (_TE < _TF) { goto _TLBB;
	}else { goto _TLBC;
	}
	_TLBB: _T10 = s;
	_T11 = _T10.curr;
	_T12 = (const char *)_T11;
	_T13 = i;
	c = _T12[_T13];
	_T14 = c;
	_T15 = (int)_T14;
	_T16 = isdigit(_T15);
	if (! _T16) { goto _TLBE;
	}
	_T18 = r;
	{ struct Cyc_List_List * _T4F = _region_malloc(_T18,0U,sizeof(struct Cyc_List_List));
	  _T19 = c;
	  _T4F->hd = (void *)_T19;
	  _T4F->tl = width;
	  _T17 = (struct Cyc_List_List *)_T4F;
	}width = _T17;
	goto _TLBF;
	_TLBE: goto _TLBC;
	_TLBF: i = i + 1;
	goto _TLBD;
	_TLBC: _T1A = i;
	_T1B = (unsigned long)_T1A;
	_T1C = len;
	if (_T1B < _T1C) { goto _TLC0;
	}
	return 0;
	_TLC0: width = Cyc_List_imp_rev(width);
	{ struct Cyc_List_List * lenmod = 0;
	  _T1D = s;
	  _T1E = _T1D.curr;
	  _T1F = (const char *)_T1E;
	  _T20 = i;
	  c = _T1F[_T20];
	  _T21 = c;
	  _T22 = (int)_T21;
	  switch (_T22) {
	  case 104: 
	    _T24 = r;
	    { struct Cyc_List_List * _T4F = _region_malloc(_T24,0U,sizeof(struct Cyc_List_List));
	      _T25 = c;
	      _T4F->hd = (void *)_T25;
	      _T4F->tl = lenmod;
	      _T23 = (struct Cyc_List_List *)_T4F;
	    }lenmod = _T23;
	    i = i + 1;
	    _T26 = i;
	    _T27 = (unsigned long)_T26;
	    _T28 = len;
	    if (_T27 < _T28) { goto _TLC3;
	    }
	    return 0;
	    _TLC3: _T29 = s;
	    _T2A = _T29.curr;
	    _T2B = (const char *)_T2A;
	    _T2C = i;
	    c = _T2B[_T2C];
	    _T2D = c;
	    _T2E = (int)_T2D;
	    if (_T2E != 104) { goto _TLC5;
	    }
	    _T30 = r;
	    { struct Cyc_List_List * _T4F = _region_malloc(_T30,0U,sizeof(struct Cyc_List_List));
	      _T31 = c;
	      _T4F->hd = (void *)_T31;
	      _T4F->tl = lenmod;
	      _T2F = (struct Cyc_List_List *)_T4F;
	    }lenmod = _T2F;
	    i = i + 1;
	    goto _TLC6;
	    _TLC5: _TLC6: goto _LL0;
	  case 108: 
	    _T33 = r;
	    { struct Cyc_List_List * _T4F = _region_malloc(_T33,0U,sizeof(struct Cyc_List_List));
	      _T34 = c;
	      _T4F->hd = (void *)_T34;
	      _T4F->tl = lenmod;
	      _T32 = (struct Cyc_List_List *)_T4F;
	    }lenmod = _T32;
	    i = i + 1;
	    _T35 = i;
	    _T36 = (unsigned long)_T35;
	    _T37 = len;
	    if (_T36 < _T37) { goto _TLC7;
	    }
	    return 0;
	    _TLC7: _T38 = s;
	    _T39 = _T38.curr;
	    _T3A = (const char *)_T39;
	    _T3B = i;
	    c = _T3A[_T3B];
	    _T3C = c;
	    _T3D = (int)_T3C;
	    if (_T3D != 108) { goto _TLC9;
	    }
	    _T3F = r;
	    { struct Cyc_List_List * _T4F = _region_malloc(_T3F,0U,sizeof(struct Cyc_List_List));
	      _T40 = c;
	      _T4F->hd = (void *)_T40;
	      _T4F->tl = lenmod;
	      _T3E = (struct Cyc_List_List *)_T4F;
	    }lenmod = _T3E;
	    i = i + 1;
	    goto _TLCA;
	    _TLC9: _TLCA: goto _LL0;
	  case 106: 
	    goto _LL8;
	  case 122: 
	    _LL8: goto _LLA;
	  case 116: 
	    _LLA: goto _LLC;
	  case 76: 
	    _LLC: _T42 = r;
	    { struct Cyc_List_List * _T4F = _region_malloc(_T42,0U,sizeof(struct Cyc_List_List));
	      _T43 = c;
	      _T4F->hd = (void *)_T43;
	      _T4F->tl = lenmod;
	      _T41 = (struct Cyc_List_List *)_T4F;
	    }lenmod = _T41;
	    i = i + 1;
	    goto _LL0;
	  default: 
	    goto _LL0;
	  }
	  _LL0: _T44 = i;
	  _T45 = (unsigned long)_T44;
	  _T46 = len;
	  if (_T45 < _T46) { goto _TLCB;
	  }
	  return 0;
	  _TLCB: lenmod = Cyc_List_imp_rev(lenmod);
	  _T47 = s;
	  _T48 = _T47.curr;
	  _T49 = (const char *)_T48;
	  _T4A = i;
	  c = _T49[_T4A];
	  _T4B = c;
	  _T4C = (int)_T4B;
	  switch (_T4C) {
	  case 100: 
	    goto _LL13;
	  case 105: 
	    _LL13: goto _LL15;
	  case 111: 
	    _LL15: goto _LL17;
	  case 117: 
	    _LL17: goto _LL19;
	  case 120: 
	    _LL19: goto _LL1B;
	  case 88: 
	    _LL1B: goto _LL1D;
	  case 102: 
	    _LL1D: goto _LL1F;
	  case 70: 
	    _LL1F: goto _LL21;
	  case 101: 
	    _LL21: goto _LL23;
	  case 69: 
	    _LL23: goto _LL25;
	  case 103: 
	    _LL25: goto _LL27;
	  case 71: 
	    _LL27: goto _LL29;
	  case 97: 
	    _LL29: goto _LL2B;
	  case 65: 
	    _LL2B: goto _LL2D;
	  case 99: 
	    _LL2D: goto _LL2F;
	  case 115: 
	    _LL2F: goto _LL31;
	  case 112: 
	    _LL31: goto _LL33;
	  case 110: 
	    _LL33: goto _LL35;
	  case 37: 
	    _LL35: goto _LLF;
	  default: 
	    return 0;
	  }
	  _LLF: _T4E = r;
	  { struct Cyc_Formatstr_InputFormat * _T4F = _region_malloc(_T4E,
								     0U,sizeof(struct Cyc_Formatstr_InputFormat));
	    _T4F->suppress = suppress;
	    _T4F->width = width;
	    _T4F->lenmod = lenmod;
	    _T4F->c = c;
	    _T4F->j = i + 1;
	    _T4D = (struct Cyc_Formatstr_InputFormat *)_T4F;
	  }return _T4D;
	}
      }
    }
  }
}
struct Cyc_List_List * Cyc_Formatstr_get_scanf_types(struct Cyc_Tcenv_Tenv * te,
						     struct _fat_ptr s,long isCproto,
						     unsigned int loc) {
  int _T0;
  unsigned long _T1;
  unsigned long _T2;
  struct _fat_ptr _T3;
  int _T4;
  unsigned char * _T5;
  const char * _T6;
  char _T7;
  int _T8;
  struct _RegionHandle * _T9;
  struct _fat_ptr _TA;
  int _TB;
  struct Cyc_List_List * (* _TC)(unsigned int,struct _fat_ptr,struct _fat_ptr ap);
  unsigned int _TD;
  struct _fat_ptr _TE;
  struct _fat_ptr _TF;
  struct Cyc_Formatstr_InputFormat * _T10;
  struct Cyc_List_List * _T11;
  struct Cyc_List_List * _T12;
  struct Cyc_List_List * _T13;
  struct Cyc_List_List * _T14;
  void * _T15;
  int _T16;
  int _T17;
  int _T18;
  struct Cyc_List_List * _T19;
  struct Cyc_Int_pa_PrintArg_struct _T1A;
  int _T1B;
  struct Cyc_List_List * (* _T1C)(unsigned int,struct _fat_ptr,struct _fat_ptr ap);
  unsigned int _T1D;
  struct _fat_ptr _T1E;
  struct _fat_ptr _T1F;
  long _T20;
  char _T21;
  int _T22;
  struct Cyc_List_List * _T23;
  struct Cyc_List_List * _T24;
  struct Cyc_List_List * _T25;
  struct Cyc_List_List * _T26;
  void * _T27;
  int _T28;
  struct Cyc_List_List * _T29;
  void * _T2A;
  int _T2B;
  struct Cyc_List_List * _T2C;
  struct Cyc_List_List * _T2D;
  struct Cyc_List_List * _T2E;
  struct Cyc_List_List * _T2F;
  struct Cyc_List_List * _T30;
  struct Cyc_List_List * _T31;
  void * _T32;
  struct Cyc_List_List * _T33;
  void * _T34;
  int _T35;
  int _T36;
  struct Cyc_List_List * _T37;
  void * _T38;
  struct Cyc_List_List * _T39;
  void * _T3A;
  int _T3B;
  int _T3C;
  struct Cyc_List_List * _T3D;
  struct Cyc_String_pa_PrintArg_struct _T3E;
  struct Cyc_Int_pa_PrintArg_struct _T3F;
  char _T40;
  int _T41;
  struct Cyc_List_List * (* _T42)(unsigned int,struct _fat_ptr,struct _fat_ptr ap);
  unsigned int _T43;
  struct _fat_ptr _T44;
  struct _fat_ptr _T45;
  void * _T46;
  struct Cyc_Core_Opt * _T47;
  struct Cyc_Core_Opt * _T48;
  struct Cyc_Core_Opt * _T49;
  void * _T4A;
  void * _T4B;
  struct Cyc_Absyn_Tqual _T4C;
  void * _T4D;
  void * _T4E;
  struct Cyc_List_List * _T4F;
  struct Cyc_List_List * _T50;
  struct Cyc_List_List * _T51;
  struct Cyc_List_List * _T52;
  struct Cyc_List_List * _T53;
  void * _T54;
  int _T55;
  struct Cyc_List_List * _T56;
  void * _T57;
  int _T58;
  struct Cyc_List_List * _T59;
  struct Cyc_List_List * _T5A;
  struct Cyc_List_List * _T5B;
  struct Cyc_List_List * _T5C;
  struct Cyc_List_List * _T5D;
  struct Cyc_List_List * _T5E;
  void * _T5F;
  struct Cyc_List_List * _T60;
  void * _T61;
  int _T62;
  int _T63;
  struct Cyc_List_List * _T64;
  void * _T65;
  struct Cyc_List_List * _T66;
  void * _T67;
  int _T68;
  int _T69;
  struct Cyc_List_List * _T6A;
  struct Cyc_String_pa_PrintArg_struct _T6B;
  struct Cyc_Int_pa_PrintArg_struct _T6C;
  char _T6D;
  int _T6E;
  struct Cyc_List_List * (* _T6F)(unsigned int,struct _fat_ptr,struct _fat_ptr ap);
  unsigned int _T70;
  struct _fat_ptr _T71;
  struct _fat_ptr _T72;
  void * _T73;
  struct Cyc_Core_Opt * _T74;
  struct Cyc_Core_Opt * _T75;
  struct Cyc_Core_Opt * _T76;
  void * _T77;
  void * _T78;
  struct Cyc_Absyn_Tqual _T79;
  void * _T7A;
  void * _T7B;
  struct Cyc_List_List * _T7C;
  struct Cyc_List_List * _T7D;
  struct Cyc_List_List * _T7E;
  struct Cyc_List_List * _T7F;
  struct Cyc_List_List * _T80;
  void * _T81;
  int _T82;
  struct Cyc_List_List * _T83;
  struct Cyc_String_pa_PrintArg_struct _T84;
  struct Cyc_Int_pa_PrintArg_struct _T85;
  char _T86;
  int _T87;
  struct Cyc_List_List * (* _T88)(unsigned int,struct _fat_ptr,struct _fat_ptr ap);
  unsigned int _T89;
  struct _fat_ptr _T8A;
  struct _fat_ptr _T8B;
  void * _T8C;
  struct Cyc_Core_Opt * _T8D;
  struct Cyc_Core_Opt * _T8E;
  struct Cyc_Core_Opt * _T8F;
  void * _T90;
  void * _T91;
  struct Cyc_Absyn_Tqual _T92;
  void * _T93;
  void * _T94;
  struct Cyc_List_List * _T95;
  long _T96;
  void * _T97;
  struct Cyc_Core_Opt * _T98;
  struct Cyc_Core_Opt * _T99;
  struct Cyc_Core_Opt * _T9A;
  void * _T9B;
  void * _T9C;
  struct Cyc_Absyn_Tqual _T9D;
  void * _T9E;
  void * _T9F;
  void * _TA0;
  struct Cyc_Core_Opt * _TA1;
  struct Cyc_Core_Opt * _TA2;
  struct Cyc_Core_Opt * _TA3;
  void * _TA4;
  void * _TA5;
  struct Cyc_Absyn_Tqual _TA6;
  void * _TA7;
  void * _TA8;
  struct Cyc_List_List * _TA9;
  long _TAA;
  void * _TAB;
  struct Cyc_Core_Opt * _TAC;
  struct Cyc_Core_Opt * _TAD;
  struct Cyc_Core_Opt * _TAE;
  void * _TAF;
  void * _TB0;
  struct Cyc_Absyn_Tqual _TB1;
  void * _TB2;
  void * _TB3;
  void * _TB4;
  struct Cyc_Core_Opt * _TB5;
  struct Cyc_Core_Opt * _TB6;
  struct Cyc_Core_Opt * _TB7;
  void * _TB8;
  void * _TB9;
  struct Cyc_Absyn_Tqual _TBA;
  void * _TBB;
  void * _TBC;
  struct Cyc_List_List * _TBD;
  struct Cyc_List_List * _TBE;
  struct Cyc_Int_pa_PrintArg_struct _TBF;
  char _TC0;
  int _TC1;
  struct Cyc_List_List * (* _TC2)(unsigned int,struct _fat_ptr,struct _fat_ptr ap);
  unsigned int _TC3;
  struct _fat_ptr _TC4;
  struct _fat_ptr _TC5;
  struct Cyc_List_List * _TC6;
  struct Cyc_List_List * _TC7;
  struct Cyc_List_List * _TC8;
  struct Cyc_List_List * _TC9;
  void * _TCA;
  int _TCB;
  struct Cyc_List_List * _TCC;
  void * _TCD;
  int _TCE;
  struct Cyc_List_List * _TCF;
  struct Cyc_List_List * _TD0;
  struct Cyc_List_List * _TD1;
  struct Cyc_List_List * _TD2;
  struct Cyc_List_List * _TD3;
  struct Cyc_List_List * _TD4;
  void * _TD5;
  struct Cyc_List_List * _TD6;
  void * _TD7;
  int _TD8;
  int _TD9;
  struct Cyc_List_List * _TDA;
  struct Cyc_String_pa_PrintArg_struct _TDB;
  struct Cyc_Int_pa_PrintArg_struct _TDC;
  char _TDD;
  int _TDE;
  struct Cyc_List_List * (* _TDF)(unsigned int,struct _fat_ptr,struct _fat_ptr ap);
  unsigned int _TE0;
  struct _fat_ptr _TE1;
  struct _fat_ptr _TE2;
  void * _TE3;
  struct Cyc_Core_Opt * _TE4;
  struct Cyc_Core_Opt * _TE5;
  struct Cyc_Core_Opt * _TE6;
  void * _TE7;
  void * _TE8;
  struct Cyc_Absyn_Tqual _TE9;
  void * _TEA;
  void * _TEB;
  struct Cyc_List_List * _TEC;
  long _TED;
  struct Cyc_List_List * (* _TEE)(unsigned int,struct _fat_ptr,struct _fat_ptr ap);
  unsigned int _TEF;
  struct _fat_ptr _TF0;
  struct _fat_ptr _TF1;
  struct Cyc_List_List * _TF2;
  struct Cyc_String_pa_PrintArg_struct _TF3;
  struct Cyc_List_List * (* _TF4)(unsigned int,struct _fat_ptr,struct _fat_ptr ap);
  unsigned int _TF5;
  struct _fat_ptr _TF6;
  struct _fat_ptr _TF7;
  struct Cyc_List_List * _TF8;
  struct Cyc_String_pa_PrintArg_struct _TF9;
  struct Cyc_List_List * (* _TFA)(unsigned int,struct _fat_ptr,struct _fat_ptr ap);
  unsigned int _TFB;
  struct _fat_ptr _TFC;
  struct _fat_ptr _TFD;
  unsigned long len = Cyc_strlen(s);
  struct Cyc_List_List * typs = 0;
  int i;
  struct _RegionHandle _TFE = _new_region(0U,"temp");
  struct _RegionHandle * temp = &_TFE;
  _push_region(temp);
  i = 0;
  _TLD1: _T0 = i;
  _T1 = (unsigned long)_T0;
  _T2 = len;
  if (_T1 < _T2) { goto _TLCF;
  }else { goto _TLD0;
  }
  _TLCF: _T3 = s;
  _T4 = i;
  _T5 = _check_fat_subscript(_T3,sizeof(char),_T4);
  _T6 = (const char *)_T5;
  _T7 = *_T6;
  _T8 = (int)_T7;
  if (_T8 == 37) { goto _TLD2;
  }
  goto _TLCE;
  _TLD2: _T9 = temp;
  _TA = s;
  _TB = i + 1;
  { struct Cyc_Formatstr_InputFormat * x = Cyc_Formatstr_parse_input_format(_T9,
									    _TA,
									    _TB);
    if (x != 0) { goto _TLD4;
    }
    { struct Cyc_List_List * (* _TFF)(unsigned int,struct _fat_ptr,struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
														     struct _fat_ptr,
														     struct _fat_ptr ap))Cyc_Formatstr_err_null;
      _TC = _TFF;
    }_TD = loc;
    _TE = _tag_fat("bad format string",sizeof(char),18U);
    _TF = _tag_fat(0U,sizeof(void *),0);
    { struct Cyc_List_List * _TFF = _TC(_TD,_TE,_TF);
      _npop_handler(0);
      return _TFF;
    }_TLD4: _T10 = x;
    { struct Cyc_Formatstr_InputFormat _TFF = *_T10;
      int _T100;
      char _T101;
      struct Cyc_List_List * _T102;
      struct Cyc_List_List * _T103;
      long _T104;
      _T104 = _TFF.suppress;
      _T103 = _TFF.width;
      _T102 = _TFF.lenmod;
      _T101 = _TFF.c;
      _T100 = _TFF.j;
      { long suppress = _T104;
	struct Cyc_List_List * width = _T103;
	struct Cyc_List_List * lenmod = _T102;
	char c = _T101;
	int j = _T100;
	i = j - 1;
	{ int _T105;
	  if (lenmod == 0) { goto _TLD6;
	  }
	  _T11 = lenmod;
	  _T12 = (struct Cyc_List_List *)_T11;
	  _T13 = _T12->tl;
	  if (_T13 != 0) { goto _TLD8;
	  }
	  _T14 = lenmod;
	  { struct Cyc_List_List _T106 = *_T14;
	    _T15 = _T106.hd;
	    _T105 = (int)_T15;
	  }_T16 = (int)_T105;
	  if (_T16 == 106) { goto _TLDC;
	  }else { goto _TLDE;
	  }
	  _TLDE: _T17 = (int)_T105;
	  if (_T17 == 122) { goto _TLDC;
	  }else { goto _TLDD;
	  }
	  _TLDD: _T18 = (int)_T105;
	  if (_T18 == 116) { goto _TLDC;
	  }else { goto _TLDA;
	  }
	  _TLDC: { int x = _T105;
	    { struct Cyc_Int_pa_PrintArg_struct _T106;
	      _T106.tag = 1;
	      _T1B = x;
	      _T106.f1 = (unsigned long)_T1B;
	      _T1A = _T106;
	    }{ struct Cyc_Int_pa_PrintArg_struct _T106 = _T1A;
	      void * _T107[1];
	      _T107[0] = &_T106;
	      { struct Cyc_List_List * (* _T108)(unsigned int,struct _fat_ptr,
						 struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
												   struct _fat_ptr,
												   struct _fat_ptr ap))Cyc_Formatstr_err_null;
		_T1C = _T108;
	      }_T1D = loc;
	      _T1E = _tag_fat("length modifier '%c' is not supported",sizeof(char),
			      38U);
	      _T1F = _tag_fat(_T107,sizeof(void *),1);
	      _T19 = _T1C(_T1D,_T1E,_T1F);
	    }{ struct Cyc_List_List * _T106 = _T19;
	      _npop_handler(0);
	      return _T106;
	    }
	  }_TLDA: goto _LL6;
	  _TLD8: goto _LL6;
	  _TLD6: _LL6: goto _LL3;
	  _LL3: ;
	}_T20 = suppress;
	if (! _T20) { goto _TLDF;
	}
	goto _TLCE;
	_TLDF: { void * t;
	  _T21 = c;
	  _T22 = (int)_T21;
	  switch (_T22) {
	  case 100: 
	    goto _LLC;
	  case 105: 
	    _LLC: { struct Cyc_List_List * tvs = Cyc_Tcenv_lookup_type_vars(te);
	      { int _T105;
		int _T106;
		if (lenmod != 0) { goto _TLE2;
		}
		t = Cyc_Absyn_sint_type;
		goto _LL33;
		_TLE2: _T23 = lenmod;
		_T24 = (struct Cyc_List_List *)_T23;
		_T25 = _T24->tl;
		if (_T25 != 0) { goto _TLE4;
		}
		_T26 = lenmod;
		{ struct Cyc_List_List _T107 = *_T26;
		  _T27 = _T107.hd;
		  _T106 = (int)_T27;
		}_T28 = (int)_T106;
		if (_T28 != 108) { goto _TLE6;
		}
		{ int x = _T106;
		  t = Cyc_Absyn_slong_type;
		  goto _LL33;
		}_TLE6: _T29 = lenmod;
		{ struct Cyc_List_List _T107 = *_T29;
		  _T2A = _T107.hd;
		  _T106 = (int)_T2A;
		}_T2B = (int)_T106;
		if (_T2B != 104) { goto _TLE8;
		}
		{ int x = _T106;
		  t = Cyc_Absyn_sshort_type;
		  goto _LL33;
		}_TLE8: goto _LL3E;
		_TLE4: _T2C = lenmod;
		_T2D = (struct Cyc_List_List *)_T2C;
		_T2E = _T2D->tl;
		_T2F = (struct Cyc_List_List *)_T2E;
		_T30 = _T2F->tl;
		if (_T30 != 0) { goto _TLEA;
		}
		_T31 = lenmod;
		{ struct Cyc_List_List _T107 = *_T31;
		  _T32 = _T107.hd;
		  _T106 = (int)_T32;
		  _T33 = _T107.tl;
		  { struct Cyc_List_List _T108 = *_T33;
		    _T34 = _T108.hd;
		    _T105 = (int)_T34;
		  }
		}_T35 = (int)_T106;
		if (_T35 != 108) { goto _TLEC;
		}
		_T36 = (int)_T105;
		if (_T36 != 108) { goto _TLEC;
		}
		{ int x = _T106;
		  int y = _T105;
		  t = Cyc_Absyn_slonglong_type;
		  goto _LL33;
		}_TLEC: _T37 = lenmod;
		{ struct Cyc_List_List _T107 = *_T37;
		  _T38 = _T107.hd;
		  _T106 = (int)_T38;
		  _T39 = _T107.tl;
		  { struct Cyc_List_List _T108 = *_T39;
		    _T3A = _T108.hd;
		    _T105 = (int)_T3A;
		  }
		}_T3B = (int)_T106;
		if (_T3B != 104) { goto _TLEE;
		}
		_T3C = (int)_T105;
		if (_T3C != 104) { goto _TLEE;
		}
		{ int x = _T106;
		  int y = _T105;
		  t = Cyc_Absyn_schar_type;
		  goto _LL33;
		}_TLEE: goto _LL3E;
		_TLEA: _LL3E: { struct Cyc_String_pa_PrintArg_struct _T107;
		  _T107.tag = 0;
		  _T107.f1 = Cyc_implode(lenmod);
		  _T3E = _T107;
		}{ struct Cyc_String_pa_PrintArg_struct _T107 = _T3E;
		  { struct Cyc_Int_pa_PrintArg_struct _T108;
		    _T108.tag = 1;
		    _T40 = c;
		    _T41 = (int)_T40;
		    _T108.f1 = (unsigned long)_T41;
		    _T3F = _T108;
		  }{ struct Cyc_Int_pa_PrintArg_struct _T108 = _T3F;
		    void * _T109[2];
		    _T109[0] = &_T107;
		    _T109[1] = &_T108;
		    { struct Cyc_List_List * (* _T10A)(unsigned int,struct _fat_ptr,
						       struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
													 struct _fat_ptr,
													 struct _fat_ptr ap))Cyc_Formatstr_err_null;
		      _T42 = _T10A;
		    }_T43 = loc;
		    _T44 = _tag_fat("length modifier '%s' is not allowed with %%%c",
				    sizeof(char),46U);
		    _T45 = _tag_fat(_T109,sizeof(void *),2);
		    _T3D = _T42(_T43,_T44,_T45);
		  }
		}{ struct Cyc_List_List * _T107 = _T3D;
		  _npop_handler(0);
		  return _T107;
		}_LL33: ;
	      }_T46 = t;
	      _T47 = &Cyc_Kinds_eko;
	      _T48 = (struct Cyc_Core_Opt *)_T47;
	      { struct Cyc_Core_Opt * _T105 = _cycalloc(sizeof(struct Cyc_Core_Opt));
		_T105->v = tvs;
		_T49 = (struct Cyc_Core_Opt *)_T105;
	      }_T4A = Cyc_Absyn_new_evar(_T48,_T49);
	      _T4B = Cyc_Absyn_al_qual_type;
	      _T4C = Cyc_Absyn_empty_tqual(0U);
	      _T4D = Cyc_Absyn_false_type;
	      _T4E = Cyc_Tcutil_any_bool(tvs);
	      t = Cyc_Absyn_at_type(_T46,_T4A,_T4B,_T4C,_T4D,_T4E);
	      { struct Cyc_List_List * _T105 = _cycalloc(sizeof(struct Cyc_List_List));
		_T105->hd = t;
		_T105->tl = typs;
		_T4F = (struct Cyc_List_List *)_T105;
	      }typs = _T4F;
	      goto _LL8;
	    }
	  case 117: 
	    goto _LL10;
	  case 111: 
	    _LL10: goto _LL12;
	  case 120: 
	    _LL12: goto _LL14;
	  case 88: 
	    _LL14: { struct Cyc_List_List * tvs = Cyc_Tcenv_lookup_type_vars(te);
	      { int _T105;
		int _T106;
		if (lenmod != 0) { goto _TLF0;
		}
		t = Cyc_Absyn_uint_type;
		goto _LL40;
		_TLF0: _T50 = lenmod;
		_T51 = (struct Cyc_List_List *)_T50;
		_T52 = _T51->tl;
		if (_T52 != 0) { goto _TLF2;
		}
		_T53 = lenmod;
		{ struct Cyc_List_List _T107 = *_T53;
		  _T54 = _T107.hd;
		  _T106 = (int)_T54;
		}_T55 = (int)_T106;
		if (_T55 != 108) { goto _TLF4;
		}
		{ int x = _T106;
		  t = Cyc_Absyn_ulong_type;
		  goto _LL40;
		}_TLF4: _T56 = lenmod;
		{ struct Cyc_List_List _T107 = *_T56;
		  _T57 = _T107.hd;
		  _T106 = (int)_T57;
		}_T58 = (int)_T106;
		if (_T58 != 104) { goto _TLF6;
		}
		{ int x = _T106;
		  t = Cyc_Absyn_ushort_type;
		  goto _LL40;
		}_TLF6: goto _LL4B;
		_TLF2: _T59 = lenmod;
		_T5A = (struct Cyc_List_List *)_T59;
		_T5B = _T5A->tl;
		_T5C = (struct Cyc_List_List *)_T5B;
		_T5D = _T5C->tl;
		if (_T5D != 0) { goto _TLF8;
		}
		_T5E = lenmod;
		{ struct Cyc_List_List _T107 = *_T5E;
		  _T5F = _T107.hd;
		  _T106 = (int)_T5F;
		  _T60 = _T107.tl;
		  { struct Cyc_List_List _T108 = *_T60;
		    _T61 = _T108.hd;
		    _T105 = (int)_T61;
		  }
		}_T62 = (int)_T106;
		if (_T62 != 108) { goto _TLFA;
		}
		_T63 = (int)_T105;
		if (_T63 != 108) { goto _TLFA;
		}
		{ int x = _T106;
		  int y = _T105;
		  t = Cyc_Absyn_ulonglong_type;
		  goto _LL40;
		}_TLFA: _T64 = lenmod;
		{ struct Cyc_List_List _T107 = *_T64;
		  _T65 = _T107.hd;
		  _T106 = (int)_T65;
		  _T66 = _T107.tl;
		  { struct Cyc_List_List _T108 = *_T66;
		    _T67 = _T108.hd;
		    _T105 = (int)_T67;
		  }
		}_T68 = (int)_T106;
		if (_T68 != 104) { goto _TLFC;
		}
		_T69 = (int)_T105;
		if (_T69 != 104) { goto _TLFC;
		}
		{ int x = _T106;
		  int y = _T105;
		  t = Cyc_Absyn_uchar_type;
		  goto _LL40;
		}_TLFC: goto _LL4B;
		_TLF8: _LL4B: { struct Cyc_String_pa_PrintArg_struct _T107;
		  _T107.tag = 0;
		  _T107.f1 = Cyc_implode(lenmod);
		  _T6B = _T107;
		}{ struct Cyc_String_pa_PrintArg_struct _T107 = _T6B;
		  { struct Cyc_Int_pa_PrintArg_struct _T108;
		    _T108.tag = 1;
		    _T6D = c;
		    _T6E = (int)_T6D;
		    _T108.f1 = (unsigned long)_T6E;
		    _T6C = _T108;
		  }{ struct Cyc_Int_pa_PrintArg_struct _T108 = _T6C;
		    void * _T109[2];
		    _T109[0] = &_T107;
		    _T109[1] = &_T108;
		    { struct Cyc_List_List * (* _T10A)(unsigned int,struct _fat_ptr,
						       struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
													 struct _fat_ptr,
													 struct _fat_ptr ap))Cyc_Formatstr_err_null;
		      _T6F = _T10A;
		    }_T70 = loc;
		    _T71 = _tag_fat("length modifier '%s' is not allowed with %%%c",
				    sizeof(char),46U);
		    _T72 = _tag_fat(_T109,sizeof(void *),2);
		    _T6A = _T6F(_T70,_T71,_T72);
		  }
		}{ struct Cyc_List_List * _T107 = _T6A;
		  _npop_handler(0);
		  return _T107;
		}_LL40: ;
	      }_T73 = t;
	      _T74 = &Cyc_Kinds_eko;
	      _T75 = (struct Cyc_Core_Opt *)_T74;
	      { struct Cyc_Core_Opt * _T105 = _cycalloc(sizeof(struct Cyc_Core_Opt));
		_T105->v = tvs;
		_T76 = (struct Cyc_Core_Opt *)_T105;
	      }_T77 = Cyc_Absyn_new_evar(_T75,_T76);
	      _T78 = Cyc_Absyn_al_qual_type;
	      _T79 = Cyc_Absyn_empty_tqual(0U);
	      _T7A = Cyc_Absyn_false_type;
	      _T7B = Cyc_Tcutil_any_bool(tvs);
	      t = Cyc_Absyn_at_type(_T73,_T77,_T78,_T79,_T7A,_T7B);
	      { struct Cyc_List_List * _T105 = _cycalloc(sizeof(struct Cyc_List_List));
		_T105->hd = t;
		_T105->tl = typs;
		_T7C = (struct Cyc_List_List *)_T105;
	      }typs = _T7C;
	      goto _LL8;
	    }
	  case 102: 
	    goto _LL18;
	  case 70: 
	    _LL18: goto _LL1A;
	  case 101: 
	    _LL1A: goto _LL1C;
	  case 69: 
	    _LL1C: goto _LL1E;
	  case 103: 
	    _LL1E: goto _LL20;
	  case 71: 
	    _LL20: goto _LL22;
	  case 97: 
	    _LL22: goto _LL24;
	  case 65: 
	    _LL24: { struct Cyc_List_List * tvs = Cyc_Tcenv_lookup_type_vars(te);
	      { int _T105;
		if (lenmod != 0) { goto _TLFE;
		}
		t = Cyc_Absyn_float_type;
		goto _LL4D;
		_TLFE: _T7D = lenmod;
		_T7E = (struct Cyc_List_List *)_T7D;
		_T7F = _T7E->tl;
		if (_T7F != 0) { goto _TL100;
		}
		_T80 = lenmod;
		{ struct Cyc_List_List _T106 = *_T80;
		  _T81 = _T106.hd;
		  _T105 = (int)_T81;
		}_T82 = (int)_T105;
		if (_T82 != 108) { goto _TL102;
		}
		{ int x = _T105;
		  t = Cyc_Absyn_double_type;
		  goto _LL4D;
		}_TL102: goto _LL52;
		_TL100: _LL52: { struct Cyc_String_pa_PrintArg_struct _T106;
		  _T106.tag = 0;
		  _T106.f1 = Cyc_implode(lenmod);
		  _T84 = _T106;
		}{ struct Cyc_String_pa_PrintArg_struct _T106 = _T84;
		  { struct Cyc_Int_pa_PrintArg_struct _T107;
		    _T107.tag = 1;
		    _T86 = c;
		    _T87 = (int)_T86;
		    _T107.f1 = (unsigned long)_T87;
		    _T85 = _T107;
		  }{ struct Cyc_Int_pa_PrintArg_struct _T107 = _T85;
		    void * _T108[2];
		    _T108[0] = &_T106;
		    _T108[1] = &_T107;
		    { struct Cyc_List_List * (* _T109)(unsigned int,struct _fat_ptr,
						       struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
													 struct _fat_ptr,
													 struct _fat_ptr ap))Cyc_Formatstr_err_null;
		      _T88 = _T109;
		    }_T89 = loc;
		    _T8A = _tag_fat("length modifier '%s' is not allowed with %%%c",
				    sizeof(char),46U);
		    _T8B = _tag_fat(_T108,sizeof(void *),2);
		    _T83 = _T88(_T89,_T8A,_T8B);
		  }
		}{ struct Cyc_List_List * _T106 = _T83;
		  _npop_handler(0);
		  return _T106;
		}_LL4D: ;
	      }_T8C = t;
	      _T8D = &Cyc_Kinds_eko;
	      _T8E = (struct Cyc_Core_Opt *)_T8D;
	      { struct Cyc_Core_Opt * _T105 = _cycalloc(sizeof(struct Cyc_Core_Opt));
		_T105->v = tvs;
		_T8F = (struct Cyc_Core_Opt *)_T105;
	      }_T90 = Cyc_Absyn_new_evar(_T8E,_T8F);
	      _T91 = Cyc_Absyn_al_qual_type;
	      _T92 = Cyc_Absyn_empty_tqual(0U);
	      _T93 = Cyc_Absyn_false_type;
	      _T94 = Cyc_Tcutil_any_bool(tvs);
	      t = Cyc_Absyn_at_type(_T8C,_T90,_T91,_T92,_T93,_T94);
	      { struct Cyc_List_List * _T105 = _cycalloc(sizeof(struct Cyc_List_List));
		_T105->hd = t;
		_T105->tl = typs;
		_T95 = (struct Cyc_List_List *)_T105;
	      }typs = _T95;
	      goto _LL8;
	    }
	  case 99: 
	    { struct Cyc_List_List * tvs = Cyc_Tcenv_lookup_type_vars(te);
	      void * ptr;
	      _T96 = isCproto;
	      if (_T96) { goto _TL104;
	      }else { goto _TL106;
	      }
	      _TL106: _T97 = Cyc_Absyn_char_type;
	      _T98 = &Cyc_Kinds_eko;
	      _T99 = (struct Cyc_Core_Opt *)_T98;
	      { struct Cyc_Core_Opt * _T105 = _cycalloc(sizeof(struct Cyc_Core_Opt));
		_T105->v = tvs;
		_T9A = (struct Cyc_Core_Opt *)_T105;
	      }_T9B = Cyc_Absyn_new_evar(_T99,_T9A);
	      _T9C = Cyc_Absyn_al_qual_type;
	      _T9D = Cyc_Absyn_empty_tqual(0U);
	      _T9E = Cyc_Absyn_false_type;
	      _T9F = Cyc_Tcutil_any_bool(tvs);
	      ptr = Cyc_Absyn_fatptr_type(_T97,_T9B,_T9C,_T9D,_T9E,_T9F);
	      goto _TL105;
	      _TL104: _TA0 = Cyc_Absyn_char_type;
	      _TA1 = &Cyc_Kinds_eko;
	      _TA2 = (struct Cyc_Core_Opt *)_TA1;
	      { struct Cyc_Core_Opt * _T105 = _cycalloc(sizeof(struct Cyc_Core_Opt));
		_T105->v = tvs;
		_TA3 = (struct Cyc_Core_Opt *)_T105;
	      }_TA4 = Cyc_Absyn_new_evar(_TA2,_TA3);
	      _TA5 = Cyc_Absyn_al_qual_type;
	      _TA6 = Cyc_Absyn_empty_tqual(0U);
	      _TA7 = Cyc_Absyn_false_type;
	      _TA8 = Cyc_Tcutil_any_bool(tvs);
	      ptr = Cyc_Absyn_at_type(_TA0,_TA4,_TA5,_TA6,_TA7,_TA8);
	      _TL105: { struct Cyc_List_List * _T105 = _cycalloc(sizeof(struct Cyc_List_List));
		_T105->hd = ptr;
		_T105->tl = typs;
		_TA9 = (struct Cyc_List_List *)_T105;
	      }typs = _TA9;
	      goto _LL8;
	    }
	  case 115: 
	    { struct Cyc_List_List * tvs = Cyc_Tcenv_lookup_type_vars(te);
	      void * ptr;
	      _TAA = isCproto;
	      if (_TAA) { goto _TL107;
	      }else { goto _TL109;
	      }
	      _TL109: _TAB = Cyc_Absyn_char_type;
	      _TAC = &Cyc_Kinds_eko;
	      _TAD = (struct Cyc_Core_Opt *)_TAC;
	      { struct Cyc_Core_Opt * _T105 = _cycalloc(sizeof(struct Cyc_Core_Opt));
		_T105->v = tvs;
		_TAE = (struct Cyc_Core_Opt *)_T105;
	      }_TAF = Cyc_Absyn_new_evar(_TAD,_TAE);
	      _TB0 = Cyc_Absyn_al_qual_type;
	      _TB1 = Cyc_Absyn_empty_tqual(0U);
	      _TB2 = Cyc_Absyn_false_type;
	      _TB3 = Cyc_Tcutil_any_bool(tvs);
	      ptr = Cyc_Absyn_fatptr_type(_TAB,_TAF,_TB0,_TB1,_TB2,_TB3);
	      goto _TL108;
	      _TL107: _TB4 = Cyc_Absyn_char_type;
	      _TB5 = &Cyc_Kinds_eko;
	      _TB6 = (struct Cyc_Core_Opt *)_TB5;
	      { struct Cyc_Core_Opt * _T105 = _cycalloc(sizeof(struct Cyc_Core_Opt));
		_T105->v = tvs;
		_TB7 = (struct Cyc_Core_Opt *)_T105;
	      }_TB8 = Cyc_Absyn_new_evar(_TB6,_TB7);
	      _TB9 = Cyc_Absyn_al_qual_type;
	      _TBA = Cyc_Absyn_empty_tqual(0U);
	      _TBB = Cyc_Absyn_true_type;
	      _TBC = Cyc_Tcutil_any_bool(tvs);
	      ptr = Cyc_Absyn_at_type(_TB4,_TB8,_TB9,_TBA,_TBB,_TBC);
	      _TL108: { struct Cyc_List_List * _T105 = _cycalloc(sizeof(struct Cyc_List_List));
		_T105->hd = ptr;
		_T105->tl = typs;
		_TBD = (struct Cyc_List_List *)_T105;
	      }typs = _TBD;
	      goto _LL8;
	    }
	  case 91: 
	    goto _LL2C;
	  case 112: 
	    _LL2C: { struct Cyc_Int_pa_PrintArg_struct _T105;
	      _T105.tag = 1;
	      _TC0 = c;
	      _TC1 = (int)_TC0;
	      _T105.f1 = (unsigned long)_TC1;
	      _TBF = _T105;
	    }{ struct Cyc_Int_pa_PrintArg_struct _T105 = _TBF;
	      void * _T106[1];
	      _T106[0] = &_T105;
	      { struct Cyc_List_List * (* _T107)(unsigned int,struct _fat_ptr,
						 struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
												   struct _fat_ptr,
												   struct _fat_ptr ap))Cyc_Formatstr_err_null;
		_TC2 = _T107;
	      }_TC3 = loc;
	      _TC4 = _tag_fat("%%%c is not supported",sizeof(char),22U);
	      _TC5 = _tag_fat(_T106,sizeof(void *),1);
	      _TBE = _TC2(_TC3,_TC4,_TC5);
	    }{ struct Cyc_List_List * _T105 = _TBE;
	      _npop_handler(0);
	      return _T105;
	    }
	  case 110: 
	    { struct Cyc_List_List * tvs = Cyc_Tcenv_lookup_type_vars(te);
	      { int _T105;
		int _T106;
		if (lenmod != 0) { goto _TL10A;
		}
		t = Cyc_Absyn_sint_type;
		goto _LL54;
		_TL10A: _TC6 = lenmod;
		_TC7 = (struct Cyc_List_List *)_TC6;
		_TC8 = _TC7->tl;
		if (_TC8 != 0) { goto _TL10C;
		}
		_TC9 = lenmod;
		{ struct Cyc_List_List _T107 = *_TC9;
		  _TCA = _T107.hd;
		  _T106 = (int)_TCA;
		}_TCB = (int)_T106;
		if (_TCB != 108) { goto _TL10E;
		}
		{ int x = _T106;
		  t = Cyc_Absyn_ulong_type;
		  goto _LL54;
		}_TL10E: _TCC = lenmod;
		{ struct Cyc_List_List _T107 = *_TCC;
		  _TCD = _T107.hd;
		  _T106 = (int)_TCD;
		}_TCE = (int)_T106;
		if (_TCE != 104) { goto _TL110;
		}
		{ int x = _T106;
		  t = Cyc_Absyn_sshort_type;
		  goto _LL54;
		}_TL110: goto _LL5D;
		_TL10C: _TCF = lenmod;
		_TD0 = (struct Cyc_List_List *)_TCF;
		_TD1 = _TD0->tl;
		_TD2 = (struct Cyc_List_List *)_TD1;
		_TD3 = _TD2->tl;
		if (_TD3 != 0) { goto _TL112;
		}
		_TD4 = lenmod;
		{ struct Cyc_List_List _T107 = *_TD4;
		  _TD5 = _T107.hd;
		  _T106 = (int)_TD5;
		  _TD6 = _T107.tl;
		  { struct Cyc_List_List _T108 = *_TD6;
		    _TD7 = _T108.hd;
		    _T105 = (int)_TD7;
		  }
		}_TD8 = (int)_T106;
		if (_TD8 != 104) { goto _TL114;
		}
		_TD9 = (int)_T105;
		if (_TD9 != 104) { goto _TL114;
		}
		{ int x = _T106;
		  int y = _T105;
		  t = Cyc_Absyn_schar_type;
		  goto _LL54;
		}_TL114: goto _LL5D;
		_TL112: _LL5D: { struct Cyc_String_pa_PrintArg_struct _T107;
		  _T107.tag = 0;
		  _T107.f1 = Cyc_implode(lenmod);
		  _TDB = _T107;
		}{ struct Cyc_String_pa_PrintArg_struct _T107 = _TDB;
		  { struct Cyc_Int_pa_PrintArg_struct _T108;
		    _T108.tag = 1;
		    _TDD = c;
		    _TDE = (int)_TDD;
		    _T108.f1 = (unsigned long)_TDE;
		    _TDC = _T108;
		  }{ struct Cyc_Int_pa_PrintArg_struct _T108 = _TDC;
		    void * _T109[2];
		    _T109[0] = &_T107;
		    _T109[1] = &_T108;
		    { struct Cyc_List_List * (* _T10A)(unsigned int,struct _fat_ptr,
						       struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
													 struct _fat_ptr,
													 struct _fat_ptr ap))Cyc_Formatstr_err_null;
		      _TDF = _T10A;
		    }_TE0 = loc;
		    _TE1 = _tag_fat("length modifier '%s' is not allowed with %%%c",
				    sizeof(char),46U);
		    _TE2 = _tag_fat(_T109,sizeof(void *),2);
		    _TDA = _TDF(_TE0,_TE1,_TE2);
		  }
		}{ struct Cyc_List_List * _T107 = _TDA;
		  _npop_handler(0);
		  return _T107;
		}_LL54: ;
	      }_TE3 = t;
	      _TE4 = &Cyc_Kinds_eko;
	      _TE5 = (struct Cyc_Core_Opt *)_TE4;
	      { struct Cyc_Core_Opt * _T105 = _cycalloc(sizeof(struct Cyc_Core_Opt));
		_T105->v = tvs;
		_TE6 = (struct Cyc_Core_Opt *)_T105;
	      }_TE7 = Cyc_Absyn_new_evar(_TE5,_TE6);
	      _TE8 = Cyc_Absyn_al_qual_type;
	      _TE9 = Cyc_Absyn_empty_tqual(0U);
	      _TEA = Cyc_Absyn_false_type;
	      _TEB = Cyc_Tcutil_any_bool(tvs);
	      t = Cyc_Absyn_at_type(_TE3,_TE7,_TE8,_TE9,_TEA,_TEB);
	      { struct Cyc_List_List * _T105 = _cycalloc(sizeof(struct Cyc_List_List));
		_T105->hd = t;
		_T105->tl = typs;
		_TEC = (struct Cyc_List_List *)_T105;
	      }typs = _TEC;
	      goto _LL8;
	    }
	  case 37: 
	    _TED = suppress;
	    if (! _TED) { goto _TL116;
	    }
	    { struct Cyc_List_List * (* _T105)(unsigned int,struct _fat_ptr,
					       struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
												 struct _fat_ptr,
												 struct _fat_ptr ap))Cyc_Formatstr_err_null;
	      _TEE = _T105;
	    }_TEF = loc;
	    _TF0 = _tag_fat("Assignment suppression (*) is not allowed with %%%%",
			    sizeof(char),52U);
	    _TF1 = _tag_fat(0U,sizeof(void *),0);
	    { struct Cyc_List_List * _T105 = _TEE(_TEF,_TF0,_TF1);
	      _npop_handler(0);
	      return _T105;
	    }_TL116: if (width == 0) { goto _TL118;
	    }
	    { struct Cyc_String_pa_PrintArg_struct _T105;
	      _T105.tag = 0;
	      _T105.f1 = Cyc_implode(width);
	      _TF3 = _T105;
	    }{ struct Cyc_String_pa_PrintArg_struct _T105 = _TF3;
	      void * _T106[1];
	      _T106[0] = &_T105;
	      { struct Cyc_List_List * (* _T107)(unsigned int,struct _fat_ptr,
						 struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
												   struct _fat_ptr,
												   struct _fat_ptr ap))Cyc_Formatstr_err_null;
		_TF4 = _T107;
	      }_TF5 = loc;
	      _TF6 = _tag_fat("width '%s' not allowed with %%%%",sizeof(char),
			      33U);
	      _TF7 = _tag_fat(_T106,sizeof(void *),1);
	      _TF2 = _TF4(_TF5,_TF6,_TF7);
	    }{ struct Cyc_List_List * _T105 = _TF2;
	      _npop_handler(0);
	      return _T105;
	    }_TL118: if (lenmod == 0) { goto _TL11A;
	    }
	    { struct Cyc_String_pa_PrintArg_struct _T105;
	      _T105.tag = 0;
	      _T105.f1 = Cyc_implode(lenmod);
	      _TF9 = _T105;
	    }{ struct Cyc_String_pa_PrintArg_struct _T105 = _TF9;
	      void * _T106[1];
	      _T106[0] = &_T105;
	      { struct Cyc_List_List * (* _T107)(unsigned int,struct _fat_ptr,
						 struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
												   struct _fat_ptr,
												   struct _fat_ptr ap))Cyc_Formatstr_err_null;
		_TFA = _T107;
	      }_TFB = loc;
	      _TFC = _tag_fat("length modifier '%s' not allowed with %%%%",
			      sizeof(char),43U);
	      _TFD = _tag_fat(_T106,sizeof(void *),1);
	      _TF8 = _TFA(_TFB,_TFC,_TFD);
	    }{ struct Cyc_List_List * _T105 = _TF8;
	      _npop_handler(0);
	      return _T105;
	    }_TL11A: goto _LL8;
	  default: 
	    { struct Cyc_List_List * _T105 = 0;
	      _npop_handler(0);
	      return _T105;
	    }
	  }
	  _LL8: ;
	}
      }
    }
  }_TLCE: i = i + 1;
  goto _TLD1;
  _TLD0: { struct Cyc_List_List * _TFF = Cyc_List_imp_rev(typs);
    _npop_handler(0);
    return _TFF;
  }_pop_region();
}
