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
extern void * Cyc_Absyn_schar_type;
extern void * Cyc_Absyn_sshort_type;
extern void * Cyc_Absyn_sint_type;
extern void * Cyc_Absyn_slong_type;
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
  struct Cyc_String_pa_PrintArg_struct _T5A;
  struct Cyc_Int_pa_PrintArg_struct _T5B;
  char _T5C;
  int _T5D;
  struct Cyc_List_List * (* _T5E)(unsigned int,struct _fat_ptr,struct _fat_ptr ap);
  unsigned int _T5F;
  struct _fat_ptr _T60;
  struct _fat_ptr _T61;
  struct Cyc_List_List * _T62;
  struct Cyc_List_List * _T63;
  void * _T64;
  int _T65;
  struct Cyc_List_List * (* _T66)(unsigned int,struct _fat_ptr,struct _fat_ptr ap);
  unsigned int _T67;
  struct _fat_ptr _T68;
  struct _fat_ptr _T69;
  struct Cyc_List_List * _T6A;
  struct Cyc_List_List * _T6B;
  struct Cyc_List_List * _T6C;
  struct Cyc_List_List * _T6D;
  struct Cyc_List_List * _T6E;
  void * _T6F;
  int _T70;
  struct Cyc_List_List * _T71;
  void * _T72;
  int _T73;
  struct Cyc_List_List * _T74;
  struct Cyc_List_List * _T75;
  struct Cyc_List_List * _T76;
  struct Cyc_List_List * _T77;
  struct Cyc_List_List * _T78;
  struct Cyc_List_List * _T79;
  void * _T7A;
  struct Cyc_List_List * _T7B;
  void * _T7C;
  int _T7D;
  int _T7E;
  struct Cyc_List_List * _T7F;
  struct Cyc_String_pa_PrintArg_struct _T80;
  struct Cyc_Int_pa_PrintArg_struct _T81;
  char _T82;
  int _T83;
  struct Cyc_List_List * (* _T84)(unsigned int,struct _fat_ptr,struct _fat_ptr ap);
  unsigned int _T85;
  struct _fat_ptr _T86;
  struct _fat_ptr _T87;
  struct Cyc_List_List * _T88;
  struct Cyc_List_List * _T89;
  struct Cyc_List_List * _T8A;
  struct Cyc_List_List * _T8B;
  struct Cyc_List_List * _T8C;
  struct Cyc_List_List * _T8D;
  void * _T8E;
  int _T8F;
  struct Cyc_List_List * _T90;
  struct Cyc_List_List * _T91;
  struct Cyc_String_pa_PrintArg_struct _T92;
  struct Cyc_Int_pa_PrintArg_struct _T93;
  char _T94;
  int _T95;
  struct Cyc_List_List * (* _T96)(unsigned int,struct _fat_ptr,struct _fat_ptr ap);
  unsigned int _T97;
  struct _fat_ptr _T98;
  struct _fat_ptr _T99;
  struct Cyc_List_List * _T9A;
  void * _T9B;
  int _T9C;
  struct Cyc_List_List * _T9D;
  void * _T9E;
  int _T9F;
  struct Cyc_List_List * _TA0;
  struct Cyc_Int_pa_PrintArg_struct _TA1;
  struct Cyc_List_List * _TA2;
  void * _TA3;
  int _TA4;
  struct Cyc_List_List * (* _TA5)(unsigned int,struct _fat_ptr,struct _fat_ptr ap);
  unsigned int _TA6;
  struct _fat_ptr _TA7;
  struct _fat_ptr _TA8;
  struct Cyc_List_List * _TA9;
  struct Cyc_List_List * _TAA;
  struct Cyc_String_pa_PrintArg_struct _TAB;
  struct Cyc_List_List * (* _TAC)(unsigned int,struct _fat_ptr,struct _fat_ptr ap);
  unsigned int _TAD;
  struct _fat_ptr _TAE;
  struct _fat_ptr _TAF;
  struct Cyc_List_List * _TB0;
  struct Cyc_String_pa_PrintArg_struct _TB1;
  struct Cyc_List_List * (* _TB2)(unsigned int,struct _fat_ptr,struct _fat_ptr ap);
  unsigned int _TB3;
  struct _fat_ptr _TB4;
  struct _fat_ptr _TB5;
  struct Cyc_List_List * _TB6;
  struct Cyc_List_List * _TB7;
  void * _TB8;
  int _TB9;
  struct Cyc_List_List * (* _TBA)(unsigned int,struct _fat_ptr,struct _fat_ptr ap);
  unsigned int _TBB;
  struct _fat_ptr _TBC;
  struct _fat_ptr _TBD;
  struct Cyc_List_List * _TBE;
  struct Cyc_List_List * (* _TBF)(unsigned int,struct _fat_ptr,struct _fat_ptr ap);
  unsigned int _TC0;
  struct _fat_ptr _TC1;
  struct _fat_ptr _TC2;
  long _TC3;
  void * _TC4;
  struct Cyc_Core_Opt * _TC5;
  struct Cyc_Core_Opt * _TC6;
  struct Cyc_Core_Opt * _TC7;
  void * _TC8;
  void * _TC9;
  struct Cyc_Absyn_Tqual _TCA;
  void * _TCB;
  void * _TCC;
  void * _TCD;
  struct Cyc_Core_Opt * _TCE;
  struct Cyc_Core_Opt * _TCF;
  struct Cyc_Core_Opt * _TD0;
  void * _TD1;
  void * _TD2;
  struct Cyc_Absyn_Tqual _TD3;
  void * _TD4;
  void * _TD5;
  struct Cyc_List_List * _TD6;
  struct Cyc_List_List * _TD7;
  struct Cyc_List_List * _TD8;
  void * _TD9;
  int _TDA;
  struct Cyc_List_List * _TDB;
  void * _TDC;
  int _TDD;
  struct Cyc_List_List * _TDE;
  struct Cyc_Int_pa_PrintArg_struct _TDF;
  struct Cyc_List_List * _TE0;
  void * _TE1;
  int _TE2;
  struct Cyc_List_List * (* _TE3)(unsigned int,struct _fat_ptr,struct _fat_ptr ap);
  unsigned int _TE4;
  struct _fat_ptr _TE5;
  struct _fat_ptr _TE6;
  struct Cyc_List_List * _TE7;
  struct Cyc_List_List * _TE8;
  struct Cyc_String_pa_PrintArg_struct _TE9;
  struct Cyc_List_List * (* _TEA)(unsigned int,struct _fat_ptr,struct _fat_ptr ap);
  unsigned int _TEB;
  struct _fat_ptr _TEC;
  struct _fat_ptr _TED;
  struct Cyc_List_List * _TEE;
  struct Cyc_List_List * _TEF;
  struct Cyc_List_List * _TF0;
  struct Cyc_List_List * _TF1;
  void * _TF2;
  int _TF3;
  struct Cyc_List_List * _TF4;
  void * _TF5;
  int _TF6;
  struct Cyc_List_List * _TF7;
  struct Cyc_List_List * _TF8;
  struct Cyc_List_List * _TF9;
  struct Cyc_List_List * _TFA;
  struct Cyc_List_List * _TFB;
  struct Cyc_List_List * _TFC;
  void * _TFD;
  struct Cyc_List_List * _TFE;
  void * _TFF;
  int _T100;
  int _T101;
  struct Cyc_List_List * _T102;
  struct Cyc_String_pa_PrintArg_struct _T103;
  struct Cyc_Int_pa_PrintArg_struct _T104;
  char _T105;
  int _T106;
  struct Cyc_List_List * (* _T107)(unsigned int,struct _fat_ptr,struct _fat_ptr ap);
  unsigned int _T108;
  struct _fat_ptr _T109;
  struct _fat_ptr _T10A;
  void * _T10B;
  struct Cyc_Core_Opt * _T10C;
  struct Cyc_Core_Opt * _T10D;
  struct Cyc_Core_Opt * _T10E;
  void * _T10F;
  void * _T110;
  struct Cyc_Absyn_Tqual _T111;
  void * _T112;
  void * _T113;
  struct Cyc_List_List * _T114;
  struct Cyc_List_List * _T115;
  struct Cyc_String_pa_PrintArg_struct _T116;
  struct Cyc_List_List * (* _T117)(unsigned int,struct _fat_ptr,struct _fat_ptr ap);
  unsigned int _T118;
  struct _fat_ptr _T119;
  struct _fat_ptr _T11A;
  struct Cyc_List_List * _T11B;
  struct Cyc_String_pa_PrintArg_struct _T11C;
  struct Cyc_List_List * (* _T11D)(unsigned int,struct _fat_ptr,struct _fat_ptr ap);
  unsigned int _T11E;
  struct _fat_ptr _T11F;
  struct _fat_ptr _T120;
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
  unsigned long len = Cyc_strlen(s);
  struct Cyc_List_List * typs = 0;
  int i;
  struct _RegionHandle _T12D = _new_region(0U,"temp");
  struct _RegionHandle * temp = &_T12D;
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
    { struct Cyc_List_List * (* _T12E)(unsigned int,struct _fat_ptr,struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
														      struct _fat_ptr,
														      struct _fat_ptr ap))Cyc_Formatstr_err_null;
      _TD = _T12E;
    }_TE = loc;
    _TF = _tag_fat("bad format string",sizeof(char),18U);
    _T10 = _tag_fat(0U,sizeof(void *),0);
    { struct Cyc_List_List * _T12E = _TD(_TE,_TF,_T10);
      _npop_handler(0);
      return _T12E;
    }_TL35: _T11 = cs;
    { struct Cyc_Formatstr_ConversionSpecification _T12E = *_T11;
      int _T12F;
      char _T130;
      struct Cyc_List_List * _T131;
      struct Cyc_List_List * _T132;
      struct Cyc_List_List * _T133;
      struct Cyc_List_List * _T134;
      _T134 = _T12E.flags;
      _T133 = _T12E.width;
      _T132 = _T12E.precision;
      _T131 = _T12E.lenmod;
      _T130 = _T12E.c;
      _T12F = _T12E.j;
      { struct Cyc_List_List * flags = _T134;
	struct Cyc_List_List * width = _T133;
	struct Cyc_List_List * precision = _T132;
	struct Cyc_List_List * lenmod = _T131;
	char c = _T130;
	int j = _T12F;
	i = j - 1;
	{ int _T135;
	  if (lenmod == 0) { goto _TL37;
	  }
	  _T12 = lenmod;
	  _T13 = (struct Cyc_List_List *)_T12;
	  _T14 = _T13->tl;
	  if (_T14 != 0) { goto _TL39;
	  }
	  _T15 = lenmod;
	  { struct Cyc_List_List _T136 = *_T15;
	    _T16 = _T136.hd;
	    _T135 = (int)_T16;
	  }_T17 = (int)_T135;
	  if (_T17 == 106) { goto _TL3D;
	  }else { goto _TL3F;
	  }
	  _TL3F: _T18 = (int)_T135;
	  if (_T18 == 122) { goto _TL3D;
	  }else { goto _TL3E;
	  }
	  _TL3E: _T19 = (int)_T135;
	  if (_T19 == 116) { goto _TL3D;
	  }else { goto _TL3B;
	  }
	  _TL3D: { int x = _T135;
	    { struct Cyc_Int_pa_PrintArg_struct _T136;
	      _T136.tag = 1;
	      _T1C = x;
	      _T136.f1 = (unsigned long)_T1C;
	      _T1B = _T136;
	    }{ struct Cyc_Int_pa_PrintArg_struct _T136 = _T1B;
	      void * _T137[1];
	      _T137[0] = &_T136;
	      { struct Cyc_List_List * (* _T138)(unsigned int,struct _fat_ptr,
						 struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
												   struct _fat_ptr,
												   struct _fat_ptr ap))Cyc_Formatstr_err_null;
		_T1D = _T138;
	      }_T1E = loc;
	      _T1F = _tag_fat("length modifier '%c' is not supported",sizeof(char),
			      38U);
	      _T20 = _tag_fat(_T137,sizeof(void *),1);
	      _T1A = _T1D(_T1E,_T1F,_T20);
	    }{ struct Cyc_List_List * _T136 = _T1A;
	      _npop_handler(0);
	      return _T136;
	    }
	  }_TL3B: goto _LL6;
	  _TL39: goto _LL6;
	  _TL37: _LL6: goto _LL3;
	  _LL3: ;
	}{ int _T135;
	  if (width == 0) { goto _TL40;
	  }
	  _T21 = width;
	  _T22 = (struct Cyc_List_List *)_T21;
	  _T23 = _T22->tl;
	  if (_T23 != 0) { goto _TL42;
	  }
	  _T24 = width;
	  { struct Cyc_List_List _T136 = *_T24;
	    _T25 = _T136.hd;
	    _T135 = (int)_T25;
	  }_T26 = (int)_T135;
	  if (_T26 != 42) { goto _TL44;
	  }
	  { int x = _T135;
	    { struct Cyc_List_List * _T136 = _cycalloc(sizeof(struct Cyc_List_List));
	      _T136->hd = Cyc_Absyn_sint_type;
	      _T136->tl = typs;
	      _T27 = (struct Cyc_List_List *)_T136;
	    }typs = _T27;
	    goto _LL8;
	  }_TL44: goto _LLB;
	  _TL42: goto _LLB;
	  _TL40: _LLB: goto _LL8;
	  _LL8: ;
	}{ int _T135;
	  int _T136;
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
	  { struct Cyc_List_List _T137 = *_T30;
	    _T31 = _T137.hd;
	    _T136 = (int)_T31;
	    _T32 = _T137.tl;
	    { struct Cyc_List_List _T138 = *_T32;
	      _T33 = _T138.hd;
	      _T135 = (int)_T33;
	    }
	  }_T34 = (int)_T136;
	  if (_T34 != 46) { goto _TL4C;
	  }
	  _T35 = (int)_T135;
	  if (_T35 != 42) { goto _TL4C;
	  }
	  { int x = _T136;
	    int y = _T135;
	    { struct Cyc_List_List * _T137 = _cycalloc(sizeof(struct Cyc_List_List));
	      _T137->hd = Cyc_Absyn_sint_type;
	      _T137->tl = typs;
	      _T36 = (struct Cyc_List_List *)_T137;
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
	      { struct Cyc_Int_pa_PrintArg_struct _T135;
		_T135.tag = 1;
		_T3E = c;
		_T3F = (int)_T3E;
		_T135.f1 = (unsigned long)_T3F;
		_T3D = _T135;
	      }{ struct Cyc_Int_pa_PrintArg_struct _T135 = _T3D;
		void * _T136[1];
		_T136[0] = &_T135;
		{ struct Cyc_List_List * (* _T137)(unsigned int,struct _fat_ptr,
						   struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
												     struct _fat_ptr,
												     struct _fat_ptr ap))Cyc_Formatstr_err_null;
		  _T40 = _T137;
		}_T41 = loc;
		_T42 = _tag_fat("flag '#' is not valid with %%%c",sizeof(char),
				32U);
		_T43 = _tag_fat(_T136,sizeof(void *),1);
		_T3C = _T40(_T41,_T42,_T43);
	      }{ struct Cyc_List_List * _T135 = _T3C;
		_npop_handler(0);
		return _T135;
	      }_TL53: _T44 = f;
	      f = _T44->tl;
	      goto _TL52;
	      _TL51: ;
	    }{ int _T135;
	      int _T136;
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
	      { struct Cyc_List_List _T137 = *_T48;
		_T49 = _T137.hd;
		_T136 = (int)_T49;
	      }_T4A = (int)_T136;
	      if (_T4A != 108) { goto _TL59;
	      }
	      { int x = _T136;
		t = Cyc_Absyn_slong_type;
		goto _LL3B;
	      }_TL59: _T4B = lenmod;
	      { struct Cyc_List_List _T137 = *_T4B;
		_T4C = _T137.hd;
		_T136 = (int)_T4C;
	      }_T4D = (int)_T136;
	      if (_T4D != 104) { goto _TL5B;
	      }
	      { int x = _T136;
		t = Cyc_Absyn_sshort_type;
		goto _LL3B;
	      }_TL5B: goto _LL44;
	      _TL57: _T4E = lenmod;
	      _T4F = (struct Cyc_List_List *)_T4E;
	      _T50 = _T4F->tl;
	      _T51 = (struct Cyc_List_List *)_T50;
	      _T52 = _T51->tl;
	      if (_T52 != 0) { goto _TL5D;
	      }
	      _T53 = lenmod;
	      { struct Cyc_List_List _T137 = *_T53;
		_T54 = _T137.hd;
		_T136 = (int)_T54;
		_T55 = _T137.tl;
		{ struct Cyc_List_List _T138 = *_T55;
		  _T56 = _T138.hd;
		  _T135 = (int)_T56;
		}
	      }_T57 = (int)_T136;
	      if (_T57 != 104) { goto _TL5F;
	      }
	      _T58 = (int)_T135;
	      if (_T58 != 104) { goto _TL5F;
	      }
	      { int x = _T136;
		int y = _T135;
		t = Cyc_Absyn_schar_type;
		goto _LL3B;
	      }_TL5F: goto _LL44;
	      _TL5D: _LL44: { struct Cyc_String_pa_PrintArg_struct _T137;
		_T137.tag = 0;
		_T137.f1 = Cyc_implode(lenmod);
		_T5A = _T137;
	      }{ struct Cyc_String_pa_PrintArg_struct _T137 = _T5A;
		{ struct Cyc_Int_pa_PrintArg_struct _T138;
		  _T138.tag = 1;
		  _T5C = c;
		  _T5D = (int)_T5C;
		  _T138.f1 = (unsigned long)_T5D;
		  _T5B = _T138;
		}{ struct Cyc_Int_pa_PrintArg_struct _T138 = _T5B;
		  void * _T139[2];
		  _T139[0] = &_T137;
		  _T139[1] = &_T138;
		  { struct Cyc_List_List * (* _T13A)(unsigned int,struct _fat_ptr,
						     struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
												       struct _fat_ptr,
												       struct _fat_ptr ap))Cyc_Formatstr_err_null;
		    _T5E = _T13A;
		  }_T5F = loc;
		  _T60 = _tag_fat("length modifier '%s' is not allowed with %%%c",
				  sizeof(char),46U);
		  _T61 = _tag_fat(_T139,sizeof(void *),2);
		  _T59 = _T5E(_T5F,_T60,_T61);
		}
	      }{ struct Cyc_List_List * _T137 = _T59;
		_npop_handler(0);
		return _T137;
	      }_LL3B: ;
	    }{ struct Cyc_List_List * _T135 = _cycalloc(sizeof(struct Cyc_List_List));
	      _T135->hd = t;
	      _T135->tl = typs;
	      _T62 = (struct Cyc_List_List *)_T135;
	    }typs = _T62;
	    goto _LL12;
	  case 117: 
	    { struct Cyc_List_List * f = flags;
	      _TL64: if (f != 0) { goto _TL62;
	      }else { goto _TL63;
	      }
	      _TL62: _T63 = f;
	      _T64 = _T63->hd;
	      _T65 = (int)_T64;
	      if (_T65 != 35) { goto _TL65;
	      }
	      { struct Cyc_List_List * (* _T135)(unsigned int,struct _fat_ptr,
						 struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
												   struct _fat_ptr,
												   struct _fat_ptr ap))Cyc_Formatstr_err_null;
		_T66 = _T135;
	      }_T67 = loc;
	      _T68 = _tag_fat("Flag '#' not valid with %%u",sizeof(char),
			      28U);
	      _T69 = _tag_fat(0U,sizeof(void *),0);
	      { struct Cyc_List_List * _T135 = _T66(_T67,_T68,_T69);
		_npop_handler(0);
		return _T135;
	      }_TL65: _T6A = f;
	      f = _T6A->tl;
	      goto _TL64;
	      _TL63: ;
	    }goto _LL1A;
	  case 111: 
	    _LL1A: goto _LL1C;
	  case 120: 
	    _LL1C: goto _LL1E;
	  case 88: 
	    _LL1E: { int _T135;
	      int _T136;
	      if (lenmod != 0) { goto _TL67;
	      }
	      t = Cyc_Absyn_uint_type;
	      goto _LL46;
	      _TL67: _T6B = lenmod;
	      _T6C = (struct Cyc_List_List *)_T6B;
	      _T6D = _T6C->tl;
	      if (_T6D != 0) { goto _TL69;
	      }
	      _T6E = lenmod;
	      { struct Cyc_List_List _T137 = *_T6E;
		_T6F = _T137.hd;
		_T136 = (int)_T6F;
	      }_T70 = (int)_T136;
	      if (_T70 != 108) { goto _TL6B;
	      }
	      { int x = _T136;
		t = Cyc_Absyn_ulong_type;
		goto _LL46;
	      }_TL6B: _T71 = lenmod;
	      { struct Cyc_List_List _T137 = *_T71;
		_T72 = _T137.hd;
		_T136 = (int)_T72;
	      }_T73 = (int)_T136;
	      if (_T73 != 104) { goto _TL6D;
	      }
	      { int x = _T136;
		t = Cyc_Absyn_ushort_type;
		goto _LL46;
	      }_TL6D: goto _LL4F;
	      _TL69: _T74 = lenmod;
	      _T75 = (struct Cyc_List_List *)_T74;
	      _T76 = _T75->tl;
	      _T77 = (struct Cyc_List_List *)_T76;
	      _T78 = _T77->tl;
	      if (_T78 != 0) { goto _TL6F;
	      }
	      _T79 = lenmod;
	      { struct Cyc_List_List _T137 = *_T79;
		_T7A = _T137.hd;
		_T136 = (int)_T7A;
		_T7B = _T137.tl;
		{ struct Cyc_List_List _T138 = *_T7B;
		  _T7C = _T138.hd;
		  _T135 = (int)_T7C;
		}
	      }_T7D = (int)_T136;
	      if (_T7D != 104) { goto _TL71;
	      }
	      _T7E = (int)_T135;
	      if (_T7E != 104) { goto _TL71;
	      }
	      { int x = _T136;
		int y = _T135;
		t = Cyc_Absyn_uchar_type;
		goto _LL46;
	      }_TL71: goto _LL4F;
	      _TL6F: _LL4F: { struct Cyc_String_pa_PrintArg_struct _T137;
		_T137.tag = 0;
		_T137.f1 = Cyc_implode(lenmod);
		_T80 = _T137;
	      }{ struct Cyc_String_pa_PrintArg_struct _T137 = _T80;
		{ struct Cyc_Int_pa_PrintArg_struct _T138;
		  _T138.tag = 1;
		  _T82 = c;
		  _T83 = (int)_T82;
		  _T138.f1 = (unsigned long)_T83;
		  _T81 = _T138;
		}{ struct Cyc_Int_pa_PrintArg_struct _T138 = _T81;
		  void * _T139[2];
		  _T139[0] = &_T137;
		  _T139[1] = &_T138;
		  { struct Cyc_List_List * (* _T13A)(unsigned int,struct _fat_ptr,
						     struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
												       struct _fat_ptr,
												       struct _fat_ptr ap))Cyc_Formatstr_err_null;
		    _T84 = _T13A;
		  }_T85 = loc;
		  _T86 = _tag_fat("length modifier '%s' is not allowed with %%%c",
				  sizeof(char),46U);
		  _T87 = _tag_fat(_T139,sizeof(void *),2);
		  _T7F = _T84(_T85,_T86,_T87);
		}
	      }{ struct Cyc_List_List * _T137 = _T7F;
		_npop_handler(0);
		return _T137;
	      }_LL46: ;
	    }{ struct Cyc_List_List * _T135 = _cycalloc(sizeof(struct Cyc_List_List));
	      _T135->hd = t;
	      _T135->tl = typs;
	      _T88 = (struct Cyc_List_List *)_T135;
	    }typs = _T88;
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
	    _LL2E: { int _T135;
	      if (lenmod != 0) { goto _TL73;
	      }
	      { struct Cyc_List_List * _T136 = _cycalloc(sizeof(struct Cyc_List_List));
		_T136->hd = Cyc_Absyn_double_type;
		_T136->tl = typs;
		_T89 = (struct Cyc_List_List *)_T136;
	      }typs = _T89;
	      goto _LL51;
	      _TL73: _T8A = lenmod;
	      _T8B = (struct Cyc_List_List *)_T8A;
	      _T8C = _T8B->tl;
	      if (_T8C != 0) { goto _TL75;
	      }
	      _T8D = lenmod;
	      { struct Cyc_List_List _T136 = *_T8D;
		_T8E = _T136.hd;
		_T135 = (int)_T8E;
	      }_T8F = (int)_T135;
	      if (_T8F != 108) { goto _TL77;
	      }
	      { int x = _T135;
		{ struct Cyc_List_List * _T136 = _cycalloc(sizeof(struct Cyc_List_List));
		  _T136->hd = Cyc_Absyn_long_double_type;
		  _T136->tl = typs;
		  _T90 = (struct Cyc_List_List *)_T136;
		}typs = _T90;
		goto _LL51;
	      }_TL77: goto _LL56;
	      _TL75: _LL56: { struct Cyc_String_pa_PrintArg_struct _T136;
		_T136.tag = 0;
		_T136.f1 = Cyc_implode(lenmod);
		_T92 = _T136;
	      }{ struct Cyc_String_pa_PrintArg_struct _T136 = _T92;
		{ struct Cyc_Int_pa_PrintArg_struct _T137;
		  _T137.tag = 1;
		  _T94 = c;
		  _T95 = (int)_T94;
		  _T137.f1 = (unsigned long)_T95;
		  _T93 = _T137;
		}{ struct Cyc_Int_pa_PrintArg_struct _T137 = _T93;
		  void * _T138[2];
		  _T138[0] = &_T136;
		  _T138[1] = &_T137;
		  { struct Cyc_List_List * (* _T139)(unsigned int,struct _fat_ptr,
						     struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
												       struct _fat_ptr,
												       struct _fat_ptr ap))Cyc_Formatstr_err_null;
		    _T96 = _T139;
		  }_T97 = loc;
		  _T98 = _tag_fat("length modifier '%s' is not allowed with %%%c",
				  sizeof(char),46U);
		  _T99 = _tag_fat(_T138,sizeof(void *),2);
		  _T91 = _T96(_T97,_T98,_T99);
		}
	      }{ struct Cyc_List_List * _T136 = _T91;
		_npop_handler(0);
		return _T136;
	      }_LL51: ;
	    }goto _LL12;
	  case 99: 
	    { struct Cyc_List_List * f = flags;
	      _TL7C: if (f != 0) { goto _TL7A;
	      }else { goto _TL7B;
	      }
	      _TL7A: _T9A = f;
	      _T9B = _T9A->hd;
	      _T9C = (int)_T9B;
	      if (_T9C == 35) { goto _TL7F;
	      }else { goto _TL80;
	      }
	      _TL80: _T9D = f;
	      _T9E = _T9D->hd;
	      _T9F = (int)_T9E;
	      if (_T9F == 48) { goto _TL7F;
	      }else { goto _TL7D;
	      }
	      _TL7F: { struct Cyc_Int_pa_PrintArg_struct _T135;
		_T135.tag = 1;
		_TA2 = f;
		_TA3 = _TA2->hd;
		_TA4 = (int)_TA3;
		_T135.f1 = (unsigned long)_TA4;
		_TA1 = _T135;
	      }{ struct Cyc_Int_pa_PrintArg_struct _T135 = _TA1;
		void * _T136[1];
		_T136[0] = &_T135;
		{ struct Cyc_List_List * (* _T137)(unsigned int,struct _fat_ptr,
						   struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
												     struct _fat_ptr,
												     struct _fat_ptr ap))Cyc_Formatstr_err_null;
		  _TA5 = _T137;
		}_TA6 = loc;
		_TA7 = _tag_fat("flag '%c' not allowed with %%c",sizeof(char),
				31U);
		_TA8 = _tag_fat(_T136,sizeof(void *),1);
		_TA0 = _TA5(_TA6,_TA7,_TA8);
	      }{ struct Cyc_List_List * _T135 = _TA0;
		_npop_handler(0);
		return _T135;
	      }_TL7D: _TA9 = f;
	      f = _TA9->tl;
	      goto _TL7C;
	      _TL7B: ;
	    }if (lenmod == 0) { goto _TL81;
	    }
	    { struct Cyc_String_pa_PrintArg_struct _T135;
	      _T135.tag = 0;
	      _T135.f1 = Cyc_implode(lenmod);
	      _TAB = _T135;
	    }{ struct Cyc_String_pa_PrintArg_struct _T135 = _TAB;
	      void * _T136[1];
	      _T136[0] = &_T135;
	      { struct Cyc_List_List * (* _T137)(unsigned int,struct _fat_ptr,
						 struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
												   struct _fat_ptr,
												   struct _fat_ptr ap))Cyc_Formatstr_err_null;
		_TAC = _T137;
	      }_TAD = loc;
	      _TAE = _tag_fat("length modifier '%s' not allowed with %%c",
			      sizeof(char),42U);
	      _TAF = _tag_fat(_T136,sizeof(void *),1);
	      _TAA = _TAC(_TAD,_TAE,_TAF);
	    }{ struct Cyc_List_List * _T135 = _TAA;
	      _npop_handler(0);
	      return _T135;
	    }_TL81: if (precision == 0) { goto _TL83;
	    }
	    { struct Cyc_String_pa_PrintArg_struct _T135;
	      _T135.tag = 0;
	      _T135.f1 = Cyc_implode(precision);
	      _TB1 = _T135;
	    }{ struct Cyc_String_pa_PrintArg_struct _T135 = _TB1;
	      void * _T136[1];
	      _T136[0] = &_T135;
	      { struct Cyc_List_List * (* _T137)(unsigned int,struct _fat_ptr,
						 struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
												   struct _fat_ptr,
												   struct _fat_ptr ap))Cyc_Formatstr_err_null;
		_TB2 = _T137;
	      }_TB3 = loc;
	      _TB4 = _tag_fat("precision '%s' not allowed with %%c",sizeof(char),
			      36U);
	      _TB5 = _tag_fat(_T136,sizeof(void *),1);
	      _TB0 = _TB2(_TB3,_TB4,_TB5);
	    }{ struct Cyc_List_List * _T135 = _TB0;
	      _npop_handler(0);
	      return _T135;
	    }_TL83: { struct Cyc_List_List * _T135 = _cycalloc(sizeof(struct Cyc_List_List));
	      _T135->hd = Cyc_Absyn_sint_type;
	      _T135->tl = typs;
	      _TB6 = (struct Cyc_List_List *)_T135;
	    }typs = _TB6;
	    goto _LL12;
	  case 115: 
	    { struct Cyc_List_List * f = flags;
	      _TL88: if (f != 0) { goto _TL86;
	      }else { goto _TL87;
	      }
	      _TL86: _TB7 = f;
	      _TB8 = _TB7->hd;
	      _TB9 = (int)_TB8;
	      if (_TB9 == 45) { goto _TL89;
	      }
	      { struct Cyc_List_List * (* _T135)(unsigned int,struct _fat_ptr,
						 struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
												   struct _fat_ptr,
												   struct _fat_ptr ap))Cyc_Formatstr_err_null;
		_TBA = _T135;
	      }_TBB = loc;
	      _TBC = _tag_fat("a flag not allowed with %%s",sizeof(char),
			      28U);
	      _TBD = _tag_fat(0U,sizeof(void *),0);
	      { struct Cyc_List_List * _T135 = _TBA(_TBB,_TBC,_TBD);
		_npop_handler(0);
		return _T135;
	      }_TL89: _TBE = f;
	      f = _TBE->tl;
	      goto _TL88;
	      _TL87: ;
	    }if (lenmod == 0) { goto _TL8B;
	    }
	    { struct Cyc_List_List * (* _T135)(unsigned int,struct _fat_ptr,
					       struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
												 struct _fat_ptr,
												 struct _fat_ptr ap))Cyc_Formatstr_err_null;
	      _TBF = _T135;
	    }_TC0 = loc;
	    _TC1 = _tag_fat("length modifiers not allowed with %%s",sizeof(char),
			    38U);
	    _TC2 = _tag_fat(0U,sizeof(void *),0);
	    { struct Cyc_List_List * _T135 = _TBF(_TC0,_TC1,_TC2);
	      _npop_handler(0);
	      return _T135;
	    }_TL8B: { void * ptr;
	      struct Cyc_List_List * tvs = Cyc_Tcenv_lookup_type_vars(te);
	      _TC3 = isCproto;
	      if (_TC3) { goto _TL8D;
	      }else { goto _TL8F;
	      }
	      _TL8F: _TC4 = Cyc_Absyn_char_type;
	      _TC5 = &Cyc_Kinds_eko;
	      _TC6 = (struct Cyc_Core_Opt *)_TC5;
	      { struct Cyc_Core_Opt * _T135 = _cycalloc(sizeof(struct Cyc_Core_Opt));
		_T135->v = tvs;
		_TC7 = (struct Cyc_Core_Opt *)_T135;
	      }_TC8 = Cyc_Absyn_new_evar(_TC6,_TC7);
	      _TC9 = Cyc_Absyn_al_qual_type;
	      _TCA = Cyc_Absyn_const_tqual(0U);
	      _TCB = Cyc_Absyn_false_type;
	      _TCC = Cyc_Tcutil_any_bool(tvs);
	      ptr = Cyc_Absyn_fatptr_type(_TC4,_TC8,_TC9,_TCA,_TCB,_TCC);
	      goto _TL8E;
	      _TL8D: _TCD = Cyc_Absyn_char_type;
	      _TCE = &Cyc_Kinds_eko;
	      _TCF = (struct Cyc_Core_Opt *)_TCE;
	      { struct Cyc_Core_Opt * _T135 = _cycalloc(sizeof(struct Cyc_Core_Opt));
		_T135->v = tvs;
		_TD0 = (struct Cyc_Core_Opt *)_T135;
	      }_TD1 = Cyc_Absyn_new_evar(_TCF,_TD0);
	      _TD2 = Cyc_Absyn_al_qual_type;
	      _TD3 = Cyc_Absyn_const_tqual(0U);
	      _TD4 = Cyc_Absyn_true_type;
	      _TD5 = Cyc_Tcutil_any_bool(tvs);
	      ptr = Cyc_Absyn_at_type(_TCD,_TD1,_TD2,_TD3,_TD4,_TD5);
	      _TL8E: { struct Cyc_List_List * _T135 = _cycalloc(sizeof(struct Cyc_List_List));
		_T135->hd = ptr;
		_T135->tl = typs;
		_TD6 = (struct Cyc_List_List *)_T135;
	      }typs = _TD6;
	      goto _LL12;
	    }
	  case 112: 
	    { struct Cyc_List_List * _T135 = _cycalloc(sizeof(struct Cyc_List_List));
	      _T135->hd = Cyc_Absyn_uint_type;
	      _T135->tl = typs;
	      _TD7 = (struct Cyc_List_List *)_T135;
	    }typs = _TD7;
	    goto _LL12;
	  case 110: 
	    { struct Cyc_List_List * f = flags;
	      _TL93: if (f != 0) { goto _TL91;
	      }else { goto _TL92;
	      }
	      _TL91: _TD8 = f;
	      _TD9 = _TD8->hd;
	      _TDA = (int)_TD9;
	      if (_TDA == 35) { goto _TL96;
	      }else { goto _TL97;
	      }
	      _TL97: _TDB = f;
	      _TDC = _TDB->hd;
	      _TDD = (int)_TDC;
	      if (_TDD == 48) { goto _TL96;
	      }else { goto _TL94;
	      }
	      _TL96: { struct Cyc_Int_pa_PrintArg_struct _T135;
		_T135.tag = 1;
		_TE0 = f;
		_TE1 = _TE0->hd;
		_TE2 = (int)_TE1;
		_T135.f1 = (unsigned long)_TE2;
		_TDF = _T135;
	      }{ struct Cyc_Int_pa_PrintArg_struct _T135 = _TDF;
		void * _T136[1];
		_T136[0] = &_T135;
		{ struct Cyc_List_List * (* _T137)(unsigned int,struct _fat_ptr,
						   struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
												     struct _fat_ptr,
												     struct _fat_ptr ap))Cyc_Formatstr_err_null;
		  _TE3 = _T137;
		}_TE4 = loc;
		_TE5 = _tag_fat("flag '%c' not allowed with %%n",sizeof(char),
				31U);
		_TE6 = _tag_fat(_T136,sizeof(void *),1);
		_TDE = _TE3(_TE4,_TE5,_TE6);
	      }{ struct Cyc_List_List * _T135 = _TDE;
		_npop_handler(0);
		return _T135;
	      }_TL94: _TE7 = f;
	      f = _TE7->tl;
	      goto _TL93;
	      _TL92: ;
	    }if (precision == 0) { goto _TL98;
	    }
	    { struct Cyc_String_pa_PrintArg_struct _T135;
	      _T135.tag = 0;
	      _T135.f1 = Cyc_implode(precision);
	      _TE9 = _T135;
	    }{ struct Cyc_String_pa_PrintArg_struct _T135 = _TE9;
	      void * _T136[1];
	      _T136[0] = &_T135;
	      { struct Cyc_List_List * (* _T137)(unsigned int,struct _fat_ptr,
						 struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
												   struct _fat_ptr,
												   struct _fat_ptr ap))Cyc_Formatstr_err_null;
		_TEA = _T137;
	      }_TEB = loc;
	      _TEC = _tag_fat("precision '%s' not allowed with %%n",sizeof(char),
			      36U);
	      _TED = _tag_fat(_T136,sizeof(void *),1);
	      _TE8 = _TEA(_TEB,_TEC,_TED);
	    }{ struct Cyc_List_List * _T135 = _TE8;
	      _npop_handler(0);
	      return _T135;
	    }_TL98: { struct Cyc_List_List * tvs = Cyc_Tcenv_lookup_type_vars(te);
	      { int _T135;
		int _T136;
		if (lenmod != 0) { goto _TL9A;
		}
		t = Cyc_Absyn_sint_type;
		goto _LL58;
		_TL9A: _TEE = lenmod;
		_TEF = (struct Cyc_List_List *)_TEE;
		_TF0 = _TEF->tl;
		if (_TF0 != 0) { goto _TL9C;
		}
		_TF1 = lenmod;
		{ struct Cyc_List_List _T137 = *_TF1;
		  _TF2 = _T137.hd;
		  _T136 = (int)_TF2;
		}_TF3 = (int)_T136;
		if (_TF3 != 108) { goto _TL9E;
		}
		{ int x = _T136;
		  t = Cyc_Absyn_ulong_type;
		  goto _LL58;
		}_TL9E: _TF4 = lenmod;
		{ struct Cyc_List_List _T137 = *_TF4;
		  _TF5 = _T137.hd;
		  _T136 = (int)_TF5;
		}_TF6 = (int)_T136;
		if (_TF6 != 104) { goto _TLA0;
		}
		{ int x = _T136;
		  t = Cyc_Absyn_sshort_type;
		  goto _LL58;
		}_TLA0: goto _LL61;
		_TL9C: _TF7 = lenmod;
		_TF8 = (struct Cyc_List_List *)_TF7;
		_TF9 = _TF8->tl;
		_TFA = (struct Cyc_List_List *)_TF9;
		_TFB = _TFA->tl;
		if (_TFB != 0) { goto _TLA2;
		}
		_TFC = lenmod;
		{ struct Cyc_List_List _T137 = *_TFC;
		  _TFD = _T137.hd;
		  _T136 = (int)_TFD;
		  _TFE = _T137.tl;
		  { struct Cyc_List_List _T138 = *_TFE;
		    _TFF = _T138.hd;
		    _T135 = (int)_TFF;
		  }
		}_T100 = (int)_T136;
		if (_T100 != 104) { goto _TLA4;
		}
		_T101 = (int)_T135;
		if (_T101 != 104) { goto _TLA4;
		}
		{ int x = _T136;
		  int y = _T135;
		  t = Cyc_Absyn_schar_type;
		  goto _LL58;
		}_TLA4: goto _LL61;
		_TLA2: _LL61: { struct Cyc_String_pa_PrintArg_struct _T137;
		  _T137.tag = 0;
		  _T137.f1 = Cyc_implode(lenmod);
		  _T103 = _T137;
		}{ struct Cyc_String_pa_PrintArg_struct _T137 = _T103;
		  { struct Cyc_Int_pa_PrintArg_struct _T138;
		    _T138.tag = 1;
		    _T105 = c;
		    _T106 = (int)_T105;
		    _T138.f1 = (unsigned long)_T106;
		    _T104 = _T138;
		  }{ struct Cyc_Int_pa_PrintArg_struct _T138 = _T104;
		    void * _T139[2];
		    _T139[0] = &_T137;
		    _T139[1] = &_T138;
		    { struct Cyc_List_List * (* _T13A)(unsigned int,struct _fat_ptr,
						       struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
													 struct _fat_ptr,
													 struct _fat_ptr ap))Cyc_Formatstr_err_null;
		      _T107 = _T13A;
		    }_T108 = loc;
		    _T109 = _tag_fat("length modifier '%s' is not allowed with %%%c",
				     sizeof(char),46U);
		    _T10A = _tag_fat(_T139,sizeof(void *),2);
		    _T102 = _T107(_T108,_T109,_T10A);
		  }
		}{ struct Cyc_List_List * _T137 = _T102;
		  _npop_handler(0);
		  return _T137;
		}_LL58: ;
	      }_T10B = t;
	      _T10C = &Cyc_Kinds_eko;
	      _T10D = (struct Cyc_Core_Opt *)_T10C;
	      { struct Cyc_Core_Opt * _T135 = _cycalloc(sizeof(struct Cyc_Core_Opt));
		_T135->v = tvs;
		_T10E = (struct Cyc_Core_Opt *)_T135;
	      }_T10F = Cyc_Absyn_new_evar(_T10D,_T10E);
	      _T110 = Cyc_Absyn_al_qual_type;
	      _T111 = Cyc_Absyn_empty_tqual(0U);
	      _T112 = Cyc_Absyn_false_type;
	      _T113 = Cyc_Tcutil_any_bool(tvs);
	      t = Cyc_Absyn_at_type(_T10B,_T10F,_T110,_T111,_T112,_T113);
	      { struct Cyc_List_List * _T135 = _cycalloc(sizeof(struct Cyc_List_List));
		_T135->hd = t;
		_T135->tl = typs;
		_T114 = (struct Cyc_List_List *)_T135;
	      }typs = _T114;
	      goto _LL12;
	    }
	  case 37: 
	    if (flags == 0) { goto _TLA6;
	    }
	    { struct Cyc_String_pa_PrintArg_struct _T135;
	      _T135.tag = 0;
	      _T135.f1 = Cyc_implode(flags);
	      _T116 = _T135;
	    }{ struct Cyc_String_pa_PrintArg_struct _T135 = _T116;
	      void * _T136[1];
	      _T136[0] = &_T135;
	      { struct Cyc_List_List * (* _T137)(unsigned int,struct _fat_ptr,
						 struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
												   struct _fat_ptr,
												   struct _fat_ptr ap))Cyc_Formatstr_err_null;
		_T117 = _T137;
	      }_T118 = loc;
	      _T119 = _tag_fat("flags '%s' not allowed with %%%%",sizeof(char),
			       33U);
	      _T11A = _tag_fat(_T136,sizeof(void *),1);
	      _T115 = _T117(_T118,_T119,_T11A);
	    }{ struct Cyc_List_List * _T135 = _T115;
	      _npop_handler(0);
	      return _T135;
	    }_TLA6: if (width == 0) { goto _TLA8;
	    }
	    { struct Cyc_String_pa_PrintArg_struct _T135;
	      _T135.tag = 0;
	      _T135.f1 = Cyc_implode(width);
	      _T11C = _T135;
	    }{ struct Cyc_String_pa_PrintArg_struct _T135 = _T11C;
	      void * _T136[1];
	      _T136[0] = &_T135;
	      { struct Cyc_List_List * (* _T137)(unsigned int,struct _fat_ptr,
						 struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
												   struct _fat_ptr,
												   struct _fat_ptr ap))Cyc_Formatstr_err_null;
		_T11D = _T137;
	      }_T11E = loc;
	      _T11F = _tag_fat("width '%s' not allowed with %%%%",sizeof(char),
			       33U);
	      _T120 = _tag_fat(_T136,sizeof(void *),1);
	      _T11B = _T11D(_T11E,_T11F,_T120);
	    }{ struct Cyc_List_List * _T135 = _T11B;
	      _npop_handler(0);
	      return _T135;
	    }_TLA8: if (precision == 0) { goto _TLAA;
	    }
	    { struct Cyc_String_pa_PrintArg_struct _T135;
	      _T135.tag = 0;
	      _T135.f1 = Cyc_implode(precision);
	      _T122 = _T135;
	    }{ struct Cyc_String_pa_PrintArg_struct _T135 = _T122;
	      void * _T136[1];
	      _T136[0] = &_T135;
	      { struct Cyc_List_List * (* _T137)(unsigned int,struct _fat_ptr,
						 struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
												   struct _fat_ptr,
												   struct _fat_ptr ap))Cyc_Formatstr_err_null;
		_T123 = _T137;
	      }_T124 = loc;
	      _T125 = _tag_fat("precision '%s' not allowed with %%%%",sizeof(char),
			       37U);
	      _T126 = _tag_fat(_T136,sizeof(void *),1);
	      _T121 = _T123(_T124,_T125,_T126);
	    }{ struct Cyc_List_List * _T135 = _T121;
	      _npop_handler(0);
	      return _T135;
	    }_TLAA: if (lenmod == 0) { goto _TLAC;
	    }
	    { struct Cyc_String_pa_PrintArg_struct _T135;
	      _T135.tag = 0;
	      _T135.f1 = Cyc_implode(lenmod);
	      _T128 = _T135;
	    }{ struct Cyc_String_pa_PrintArg_struct _T135 = _T128;
	      void * _T136[1];
	      _T136[0] = &_T135;
	      { struct Cyc_List_List * (* _T137)(unsigned int,struct _fat_ptr,
						 struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
												   struct _fat_ptr,
												   struct _fat_ptr ap))Cyc_Formatstr_err_null;
		_T129 = _T137;
	      }_T12A = loc;
	      _T12B = _tag_fat("length modifier '%s' not allowed with %%%%",
			       sizeof(char),43U);
	      _T12C = _tag_fat(_T136,sizeof(void *),1);
	      _T127 = _T129(_T12A,_T12B,_T12C);
	    }{ struct Cyc_List_List * _T135 = _T127;
	      _npop_handler(0);
	      return _T135;
	    }_TLAC: goto _LL12;
	  default: 
	    { struct Cyc_List_List * _T135 = 0;
	      _npop_handler(0);
	      return _T135;
	    }
	  }
	  _LL12: ;
	}
      }
    }
  }_TL2F: i = i + 1;
  goto _TL32;
  _TL31: { struct Cyc_List_List * _T12E = Cyc_List_imp_rev(typs);
    _npop_handler(0);
    return _T12E;
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
  if (i < 0) { goto _TLB0;
  }else { goto _TLB1;
  }
  _TLB1: _T0 = i;
  _T1 = (unsigned long)_T0;
  _T2 = len;
  if (_T1 >= _T2) { goto _TLB0;
  }else { goto _TLAE;
  }
  _TLB0: return 0;
  _TLAE: { long suppress = 0;
    _T3 = s;
    _T4 = _T3.curr;
    _T5 = (const char *)_T4;
    _T6 = _check_null(_T5);
    _T7 = i;
    { char c = _T6[_T7];
      _T8 = c;
      _T9 = (int)_T8;
      if (_T9 != 42) { goto _TLB2;
      }
      suppress = 1;
      i = i + 1;
      _TA = i;
      _TB = (unsigned long)_TA;
      _TC = len;
      if (_TB < _TC) { goto _TLB4;
      }
      return 0;
      _TLB4: goto _TLB3;
      _TLB2: _TLB3: { struct Cyc_List_List * width = 0;
	_TLB9: _TD = i;
	_TE = (unsigned long)_TD;
	_TF = len;
	if (_TE < _TF) { goto _TLB7;
	}else { goto _TLB8;
	}
	_TLB7: _T10 = s;
	_T11 = _T10.curr;
	_T12 = (const char *)_T11;
	_T13 = i;
	c = _T12[_T13];
	_T14 = c;
	_T15 = (int)_T14;
	_T16 = isdigit(_T15);
	if (! _T16) { goto _TLBA;
	}
	_T18 = r;
	{ struct Cyc_List_List * _T4F = _region_malloc(_T18,0U,sizeof(struct Cyc_List_List));
	  _T19 = c;
	  _T4F->hd = (void *)_T19;
	  _T4F->tl = width;
	  _T17 = (struct Cyc_List_List *)_T4F;
	}width = _T17;
	goto _TLBB;
	_TLBA: goto _TLB8;
	_TLBB: i = i + 1;
	goto _TLB9;
	_TLB8: _T1A = i;
	_T1B = (unsigned long)_T1A;
	_T1C = len;
	if (_T1B < _T1C) { goto _TLBC;
	}
	return 0;
	_TLBC: width = Cyc_List_imp_rev(width);
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
	    if (_T27 < _T28) { goto _TLBF;
	    }
	    return 0;
	    _TLBF: _T29 = s;
	    _T2A = _T29.curr;
	    _T2B = (const char *)_T2A;
	    _T2C = i;
	    c = _T2B[_T2C];
	    _T2D = c;
	    _T2E = (int)_T2D;
	    if (_T2E != 104) { goto _TLC1;
	    }
	    _T30 = r;
	    { struct Cyc_List_List * _T4F = _region_malloc(_T30,0U,sizeof(struct Cyc_List_List));
	      _T31 = c;
	      _T4F->hd = (void *)_T31;
	      _T4F->tl = lenmod;
	      _T2F = (struct Cyc_List_List *)_T4F;
	    }lenmod = _T2F;
	    i = i + 1;
	    goto _TLC2;
	    _TLC1: _TLC2: goto _LL0;
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
	    if (_T36 < _T37) { goto _TLC3;
	    }
	    return 0;
	    _TLC3: _T38 = s;
	    _T39 = _T38.curr;
	    _T3A = (const char *)_T39;
	    _T3B = i;
	    c = _T3A[_T3B];
	    _T3C = c;
	    _T3D = (int)_T3C;
	    if (_T3D != 108) { goto _TLC5;
	    }
	    _T3F = r;
	    { struct Cyc_List_List * _T4F = _region_malloc(_T3F,0U,sizeof(struct Cyc_List_List));
	      _T40 = c;
	      _T4F->hd = (void *)_T40;
	      _T4F->tl = lenmod;
	      _T3E = (struct Cyc_List_List *)_T4F;
	    }lenmod = _T3E;
	    i = i + 1;
	    goto _TLC6;
	    _TLC5: _TLC6: goto _LL0;
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
	  if (_T45 < _T46) { goto _TLC7;
	  }
	  return 0;
	  _TLC7: lenmod = Cyc_List_imp_rev(lenmod);
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
  struct Cyc_String_pa_PrintArg_struct _T38;
  struct Cyc_Int_pa_PrintArg_struct _T39;
  char _T3A;
  int _T3B;
  struct Cyc_List_List * (* _T3C)(unsigned int,struct _fat_ptr,struct _fat_ptr ap);
  unsigned int _T3D;
  struct _fat_ptr _T3E;
  struct _fat_ptr _T3F;
  void * _T40;
  struct Cyc_Core_Opt * _T41;
  struct Cyc_Core_Opt * _T42;
  struct Cyc_Core_Opt * _T43;
  void * _T44;
  void * _T45;
  struct Cyc_Absyn_Tqual _T46;
  void * _T47;
  void * _T48;
  struct Cyc_List_List * _T49;
  struct Cyc_List_List * _T4A;
  struct Cyc_List_List * _T4B;
  struct Cyc_List_List * _T4C;
  struct Cyc_List_List * _T4D;
  void * _T4E;
  int _T4F;
  struct Cyc_List_List * _T50;
  void * _T51;
  int _T52;
  struct Cyc_List_List * _T53;
  struct Cyc_List_List * _T54;
  struct Cyc_List_List * _T55;
  struct Cyc_List_List * _T56;
  struct Cyc_List_List * _T57;
  struct Cyc_List_List * _T58;
  void * _T59;
  struct Cyc_List_List * _T5A;
  void * _T5B;
  int _T5C;
  int _T5D;
  struct Cyc_List_List * _T5E;
  struct Cyc_String_pa_PrintArg_struct _T5F;
  struct Cyc_Int_pa_PrintArg_struct _T60;
  char _T61;
  int _T62;
  struct Cyc_List_List * (* _T63)(unsigned int,struct _fat_ptr,struct _fat_ptr ap);
  unsigned int _T64;
  struct _fat_ptr _T65;
  struct _fat_ptr _T66;
  void * _T67;
  struct Cyc_Core_Opt * _T68;
  struct Cyc_Core_Opt * _T69;
  struct Cyc_Core_Opt * _T6A;
  void * _T6B;
  void * _T6C;
  struct Cyc_Absyn_Tqual _T6D;
  void * _T6E;
  void * _T6F;
  struct Cyc_List_List * _T70;
  struct Cyc_List_List * _T71;
  struct Cyc_List_List * _T72;
  struct Cyc_List_List * _T73;
  struct Cyc_List_List * _T74;
  void * _T75;
  int _T76;
  struct Cyc_List_List * _T77;
  struct Cyc_String_pa_PrintArg_struct _T78;
  struct Cyc_Int_pa_PrintArg_struct _T79;
  char _T7A;
  int _T7B;
  struct Cyc_List_List * (* _T7C)(unsigned int,struct _fat_ptr,struct _fat_ptr ap);
  unsigned int _T7D;
  struct _fat_ptr _T7E;
  struct _fat_ptr _T7F;
  void * _T80;
  struct Cyc_Core_Opt * _T81;
  struct Cyc_Core_Opt * _T82;
  struct Cyc_Core_Opt * _T83;
  void * _T84;
  void * _T85;
  struct Cyc_Absyn_Tqual _T86;
  void * _T87;
  void * _T88;
  struct Cyc_List_List * _T89;
  long _T8A;
  void * _T8B;
  struct Cyc_Core_Opt * _T8C;
  struct Cyc_Core_Opt * _T8D;
  struct Cyc_Core_Opt * _T8E;
  void * _T8F;
  void * _T90;
  struct Cyc_Absyn_Tqual _T91;
  void * _T92;
  void * _T93;
  void * _T94;
  struct Cyc_Core_Opt * _T95;
  struct Cyc_Core_Opt * _T96;
  struct Cyc_Core_Opt * _T97;
  void * _T98;
  void * _T99;
  struct Cyc_Absyn_Tqual _T9A;
  void * _T9B;
  void * _T9C;
  struct Cyc_List_List * _T9D;
  long _T9E;
  void * _T9F;
  struct Cyc_Core_Opt * _TA0;
  struct Cyc_Core_Opt * _TA1;
  struct Cyc_Core_Opt * _TA2;
  void * _TA3;
  void * _TA4;
  struct Cyc_Absyn_Tqual _TA5;
  void * _TA6;
  void * _TA7;
  void * _TA8;
  struct Cyc_Core_Opt * _TA9;
  struct Cyc_Core_Opt * _TAA;
  struct Cyc_Core_Opt * _TAB;
  void * _TAC;
  void * _TAD;
  struct Cyc_Absyn_Tqual _TAE;
  void * _TAF;
  void * _TB0;
  struct Cyc_List_List * _TB1;
  struct Cyc_List_List * _TB2;
  struct Cyc_Int_pa_PrintArg_struct _TB3;
  char _TB4;
  int _TB5;
  struct Cyc_List_List * (* _TB6)(unsigned int,struct _fat_ptr,struct _fat_ptr ap);
  unsigned int _TB7;
  struct _fat_ptr _TB8;
  struct _fat_ptr _TB9;
  struct Cyc_List_List * _TBA;
  struct Cyc_List_List * _TBB;
  struct Cyc_List_List * _TBC;
  struct Cyc_List_List * _TBD;
  void * _TBE;
  int _TBF;
  struct Cyc_List_List * _TC0;
  void * _TC1;
  int _TC2;
  struct Cyc_List_List * _TC3;
  struct Cyc_List_List * _TC4;
  struct Cyc_List_List * _TC5;
  struct Cyc_List_List * _TC6;
  struct Cyc_List_List * _TC7;
  struct Cyc_List_List * _TC8;
  void * _TC9;
  struct Cyc_List_List * _TCA;
  void * _TCB;
  int _TCC;
  int _TCD;
  struct Cyc_List_List * _TCE;
  struct Cyc_String_pa_PrintArg_struct _TCF;
  struct Cyc_Int_pa_PrintArg_struct _TD0;
  char _TD1;
  int _TD2;
  struct Cyc_List_List * (* _TD3)(unsigned int,struct _fat_ptr,struct _fat_ptr ap);
  unsigned int _TD4;
  struct _fat_ptr _TD5;
  struct _fat_ptr _TD6;
  void * _TD7;
  struct Cyc_Core_Opt * _TD8;
  struct Cyc_Core_Opt * _TD9;
  struct Cyc_Core_Opt * _TDA;
  void * _TDB;
  void * _TDC;
  struct Cyc_Absyn_Tqual _TDD;
  void * _TDE;
  void * _TDF;
  struct Cyc_List_List * _TE0;
  long _TE1;
  struct Cyc_List_List * (* _TE2)(unsigned int,struct _fat_ptr,struct _fat_ptr ap);
  unsigned int _TE3;
  struct _fat_ptr _TE4;
  struct _fat_ptr _TE5;
  struct Cyc_List_List * _TE6;
  struct Cyc_String_pa_PrintArg_struct _TE7;
  struct Cyc_List_List * (* _TE8)(unsigned int,struct _fat_ptr,struct _fat_ptr ap);
  unsigned int _TE9;
  struct _fat_ptr _TEA;
  struct _fat_ptr _TEB;
  struct Cyc_List_List * _TEC;
  struct Cyc_String_pa_PrintArg_struct _TED;
  struct Cyc_List_List * (* _TEE)(unsigned int,struct _fat_ptr,struct _fat_ptr ap);
  unsigned int _TEF;
  struct _fat_ptr _TF0;
  struct _fat_ptr _TF1;
  unsigned long len = Cyc_strlen(s);
  struct Cyc_List_List * typs = 0;
  int i;
  struct _RegionHandle _TF2 = _new_region(0U,"temp");
  struct _RegionHandle * temp = &_TF2;
  _push_region(temp);
  i = 0;
  _TLCD: _T0 = i;
  _T1 = (unsigned long)_T0;
  _T2 = len;
  if (_T1 < _T2) { goto _TLCB;
  }else { goto _TLCC;
  }
  _TLCB: _T3 = s;
  _T4 = i;
  _T5 = _check_fat_subscript(_T3,sizeof(char),_T4);
  _T6 = (const char *)_T5;
  _T7 = *_T6;
  _T8 = (int)_T7;
  if (_T8 == 37) { goto _TLCE;
  }
  goto _TLCA;
  _TLCE: _T9 = temp;
  _TA = s;
  _TB = i + 1;
  { struct Cyc_Formatstr_InputFormat * x = Cyc_Formatstr_parse_input_format(_T9,
									    _TA,
									    _TB);
    if (x != 0) { goto _TLD0;
    }
    { struct Cyc_List_List * (* _TF3)(unsigned int,struct _fat_ptr,struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
														     struct _fat_ptr,
														     struct _fat_ptr ap))Cyc_Formatstr_err_null;
      _TC = _TF3;
    }_TD = loc;
    _TE = _tag_fat("bad format string",sizeof(char),18U);
    _TF = _tag_fat(0U,sizeof(void *),0);
    { struct Cyc_List_List * _TF3 = _TC(_TD,_TE,_TF);
      _npop_handler(0);
      return _TF3;
    }_TLD0: _T10 = x;
    { struct Cyc_Formatstr_InputFormat _TF3 = *_T10;
      int _TF4;
      char _TF5;
      struct Cyc_List_List * _TF6;
      struct Cyc_List_List * _TF7;
      long _TF8;
      _TF8 = _TF3.suppress;
      _TF7 = _TF3.width;
      _TF6 = _TF3.lenmod;
      _TF5 = _TF3.c;
      _TF4 = _TF3.j;
      { long suppress = _TF8;
	struct Cyc_List_List * width = _TF7;
	struct Cyc_List_List * lenmod = _TF6;
	char c = _TF5;
	int j = _TF4;
	i = j - 1;
	{ int _TF9;
	  if (lenmod == 0) { goto _TLD2;
	  }
	  _T11 = lenmod;
	  _T12 = (struct Cyc_List_List *)_T11;
	  _T13 = _T12->tl;
	  if (_T13 != 0) { goto _TLD4;
	  }
	  _T14 = lenmod;
	  { struct Cyc_List_List _TFA = *_T14;
	    _T15 = _TFA.hd;
	    _TF9 = (int)_T15;
	  }_T16 = (int)_TF9;
	  if (_T16 == 106) { goto _TLD8;
	  }else { goto _TLDA;
	  }
	  _TLDA: _T17 = (int)_TF9;
	  if (_T17 == 122) { goto _TLD8;
	  }else { goto _TLD9;
	  }
	  _TLD9: _T18 = (int)_TF9;
	  if (_T18 == 116) { goto _TLD8;
	  }else { goto _TLD6;
	  }
	  _TLD8: { int x = _TF9;
	    { struct Cyc_Int_pa_PrintArg_struct _TFA;
	      _TFA.tag = 1;
	      _T1B = x;
	      _TFA.f1 = (unsigned long)_T1B;
	      _T1A = _TFA;
	    }{ struct Cyc_Int_pa_PrintArg_struct _TFA = _T1A;
	      void * _TFB[1];
	      _TFB[0] = &_TFA;
	      { struct Cyc_List_List * (* _TFC)(unsigned int,struct _fat_ptr,
						struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
												  struct _fat_ptr,
												  struct _fat_ptr ap))Cyc_Formatstr_err_null;
		_T1C = _TFC;
	      }_T1D = loc;
	      _T1E = _tag_fat("length modifier '%c' is not supported",sizeof(char),
			      38U);
	      _T1F = _tag_fat(_TFB,sizeof(void *),1);
	      _T19 = _T1C(_T1D,_T1E,_T1F);
	    }{ struct Cyc_List_List * _TFA = _T19;
	      _npop_handler(0);
	      return _TFA;
	    }
	  }_TLD6: goto _LL6;
	  _TLD4: goto _LL6;
	  _TLD2: _LL6: goto _LL3;
	  _LL3: ;
	}_T20 = suppress;
	if (! _T20) { goto _TLDB;
	}
	goto _TLCA;
	_TLDB: { void * t;
	  _T21 = c;
	  _T22 = (int)_T21;
	  switch (_T22) {
	  case 100: 
	    goto _LLC;
	  case 105: 
	    _LLC: { struct Cyc_List_List * tvs = Cyc_Tcenv_lookup_type_vars(te);
	      { int _TF9;
		int _TFA;
		if (lenmod != 0) { goto _TLDE;
		}
		t = Cyc_Absyn_sint_type;
		goto _LL33;
		_TLDE: _T23 = lenmod;
		_T24 = (struct Cyc_List_List *)_T23;
		_T25 = _T24->tl;
		if (_T25 != 0) { goto _TLE0;
		}
		_T26 = lenmod;
		{ struct Cyc_List_List _TFB = *_T26;
		  _T27 = _TFB.hd;
		  _TFA = (int)_T27;
		}_T28 = (int)_TFA;
		if (_T28 != 108) { goto _TLE2;
		}
		{ int x = _TFA;
		  t = Cyc_Absyn_slong_type;
		  goto _LL33;
		}_TLE2: _T29 = lenmod;
		{ struct Cyc_List_List _TFB = *_T29;
		  _T2A = _TFB.hd;
		  _TFA = (int)_T2A;
		}_T2B = (int)_TFA;
		if (_T2B != 104) { goto _TLE4;
		}
		{ int x = _TFA;
		  t = Cyc_Absyn_sshort_type;
		  goto _LL33;
		}_TLE4: goto _LL3C;
		_TLE0: _T2C = lenmod;
		_T2D = (struct Cyc_List_List *)_T2C;
		_T2E = _T2D->tl;
		_T2F = (struct Cyc_List_List *)_T2E;
		_T30 = _T2F->tl;
		if (_T30 != 0) { goto _TLE6;
		}
		_T31 = lenmod;
		{ struct Cyc_List_List _TFB = *_T31;
		  _T32 = _TFB.hd;
		  _TFA = (int)_T32;
		  _T33 = _TFB.tl;
		  { struct Cyc_List_List _TFC = *_T33;
		    _T34 = _TFC.hd;
		    _TF9 = (int)_T34;
		  }
		}_T35 = (int)_TFA;
		if (_T35 != 104) { goto _TLE8;
		}
		_T36 = (int)_TF9;
		if (_T36 != 104) { goto _TLE8;
		}
		{ int x = _TFA;
		  int y = _TF9;
		  t = Cyc_Absyn_schar_type;
		  goto _LL33;
		}_TLE8: goto _LL3C;
		_TLE6: _LL3C: { struct Cyc_String_pa_PrintArg_struct _TFB;
		  _TFB.tag = 0;
		  _TFB.f1 = Cyc_implode(lenmod);
		  _T38 = _TFB;
		}{ struct Cyc_String_pa_PrintArg_struct _TFB = _T38;
		  { struct Cyc_Int_pa_PrintArg_struct _TFC;
		    _TFC.tag = 1;
		    _T3A = c;
		    _T3B = (int)_T3A;
		    _TFC.f1 = (unsigned long)_T3B;
		    _T39 = _TFC;
		  }{ struct Cyc_Int_pa_PrintArg_struct _TFC = _T39;
		    void * _TFD[2];
		    _TFD[0] = &_TFB;
		    _TFD[1] = &_TFC;
		    { struct Cyc_List_List * (* _TFE)(unsigned int,struct _fat_ptr,
						      struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
													struct _fat_ptr,
													struct _fat_ptr ap))Cyc_Formatstr_err_null;
		      _T3C = _TFE;
		    }_T3D = loc;
		    _T3E = _tag_fat("length modifier '%s' is not allowed with %%%c",
				    sizeof(char),46U);
		    _T3F = _tag_fat(_TFD,sizeof(void *),2);
		    _T37 = _T3C(_T3D,_T3E,_T3F);
		  }
		}{ struct Cyc_List_List * _TFB = _T37;
		  _npop_handler(0);
		  return _TFB;
		}_LL33: ;
	      }_T40 = t;
	      _T41 = &Cyc_Kinds_eko;
	      _T42 = (struct Cyc_Core_Opt *)_T41;
	      { struct Cyc_Core_Opt * _TF9 = _cycalloc(sizeof(struct Cyc_Core_Opt));
		_TF9->v = tvs;
		_T43 = (struct Cyc_Core_Opt *)_TF9;
	      }_T44 = Cyc_Absyn_new_evar(_T42,_T43);
	      _T45 = Cyc_Absyn_al_qual_type;
	      _T46 = Cyc_Absyn_empty_tqual(0U);
	      _T47 = Cyc_Absyn_false_type;
	      _T48 = Cyc_Tcutil_any_bool(tvs);
	      t = Cyc_Absyn_at_type(_T40,_T44,_T45,_T46,_T47,_T48);
	      { struct Cyc_List_List * _TF9 = _cycalloc(sizeof(struct Cyc_List_List));
		_TF9->hd = t;
		_TF9->tl = typs;
		_T49 = (struct Cyc_List_List *)_TF9;
	      }typs = _T49;
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
	      { int _TF9;
		int _TFA;
		if (lenmod != 0) { goto _TLEA;
		}
		t = Cyc_Absyn_uint_type;
		goto _LL3E;
		_TLEA: _T4A = lenmod;
		_T4B = (struct Cyc_List_List *)_T4A;
		_T4C = _T4B->tl;
		if (_T4C != 0) { goto _TLEC;
		}
		_T4D = lenmod;
		{ struct Cyc_List_List _TFB = *_T4D;
		  _T4E = _TFB.hd;
		  _TFA = (int)_T4E;
		}_T4F = (int)_TFA;
		if (_T4F != 108) { goto _TLEE;
		}
		{ int x = _TFA;
		  t = Cyc_Absyn_ulong_type;
		  goto _LL3E;
		}_TLEE: _T50 = lenmod;
		{ struct Cyc_List_List _TFB = *_T50;
		  _T51 = _TFB.hd;
		  _TFA = (int)_T51;
		}_T52 = (int)_TFA;
		if (_T52 != 104) { goto _TLF0;
		}
		{ int x = _TFA;
		  t = Cyc_Absyn_ushort_type;
		  goto _LL3E;
		}_TLF0: goto _LL47;
		_TLEC: _T53 = lenmod;
		_T54 = (struct Cyc_List_List *)_T53;
		_T55 = _T54->tl;
		_T56 = (struct Cyc_List_List *)_T55;
		_T57 = _T56->tl;
		if (_T57 != 0) { goto _TLF2;
		}
		_T58 = lenmod;
		{ struct Cyc_List_List _TFB = *_T58;
		  _T59 = _TFB.hd;
		  _TFA = (int)_T59;
		  _T5A = _TFB.tl;
		  { struct Cyc_List_List _TFC = *_T5A;
		    _T5B = _TFC.hd;
		    _TF9 = (int)_T5B;
		  }
		}_T5C = (int)_TFA;
		if (_T5C != 104) { goto _TLF4;
		}
		_T5D = (int)_TF9;
		if (_T5D != 104) { goto _TLF4;
		}
		{ int x = _TFA;
		  int y = _TF9;
		  t = Cyc_Absyn_uchar_type;
		  goto _LL3E;
		}_TLF4: goto _LL47;
		_TLF2: _LL47: { struct Cyc_String_pa_PrintArg_struct _TFB;
		  _TFB.tag = 0;
		  _TFB.f1 = Cyc_implode(lenmod);
		  _T5F = _TFB;
		}{ struct Cyc_String_pa_PrintArg_struct _TFB = _T5F;
		  { struct Cyc_Int_pa_PrintArg_struct _TFC;
		    _TFC.tag = 1;
		    _T61 = c;
		    _T62 = (int)_T61;
		    _TFC.f1 = (unsigned long)_T62;
		    _T60 = _TFC;
		  }{ struct Cyc_Int_pa_PrintArg_struct _TFC = _T60;
		    void * _TFD[2];
		    _TFD[0] = &_TFB;
		    _TFD[1] = &_TFC;
		    { struct Cyc_List_List * (* _TFE)(unsigned int,struct _fat_ptr,
						      struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
													struct _fat_ptr,
													struct _fat_ptr ap))Cyc_Formatstr_err_null;
		      _T63 = _TFE;
		    }_T64 = loc;
		    _T65 = _tag_fat("length modifier '%s' is not allowed with %%%c",
				    sizeof(char),46U);
		    _T66 = _tag_fat(_TFD,sizeof(void *),2);
		    _T5E = _T63(_T64,_T65,_T66);
		  }
		}{ struct Cyc_List_List * _TFB = _T5E;
		  _npop_handler(0);
		  return _TFB;
		}_LL3E: ;
	      }_T67 = t;
	      _T68 = &Cyc_Kinds_eko;
	      _T69 = (struct Cyc_Core_Opt *)_T68;
	      { struct Cyc_Core_Opt * _TF9 = _cycalloc(sizeof(struct Cyc_Core_Opt));
		_TF9->v = tvs;
		_T6A = (struct Cyc_Core_Opt *)_TF9;
	      }_T6B = Cyc_Absyn_new_evar(_T69,_T6A);
	      _T6C = Cyc_Absyn_al_qual_type;
	      _T6D = Cyc_Absyn_empty_tqual(0U);
	      _T6E = Cyc_Absyn_false_type;
	      _T6F = Cyc_Tcutil_any_bool(tvs);
	      t = Cyc_Absyn_at_type(_T67,_T6B,_T6C,_T6D,_T6E,_T6F);
	      { struct Cyc_List_List * _TF9 = _cycalloc(sizeof(struct Cyc_List_List));
		_TF9->hd = t;
		_TF9->tl = typs;
		_T70 = (struct Cyc_List_List *)_TF9;
	      }typs = _T70;
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
	      { int _TF9;
		if (lenmod != 0) { goto _TLF6;
		}
		t = Cyc_Absyn_float_type;
		goto _LL49;
		_TLF6: _T71 = lenmod;
		_T72 = (struct Cyc_List_List *)_T71;
		_T73 = _T72->tl;
		if (_T73 != 0) { goto _TLF8;
		}
		_T74 = lenmod;
		{ struct Cyc_List_List _TFA = *_T74;
		  _T75 = _TFA.hd;
		  _TF9 = (int)_T75;
		}_T76 = (int)_TF9;
		if (_T76 != 108) { goto _TLFA;
		}
		{ int x = _TF9;
		  t = Cyc_Absyn_double_type;
		  goto _LL49;
		}_TLFA: goto _LL4E;
		_TLF8: _LL4E: { struct Cyc_String_pa_PrintArg_struct _TFA;
		  _TFA.tag = 0;
		  _TFA.f1 = Cyc_implode(lenmod);
		  _T78 = _TFA;
		}{ struct Cyc_String_pa_PrintArg_struct _TFA = _T78;
		  { struct Cyc_Int_pa_PrintArg_struct _TFB;
		    _TFB.tag = 1;
		    _T7A = c;
		    _T7B = (int)_T7A;
		    _TFB.f1 = (unsigned long)_T7B;
		    _T79 = _TFB;
		  }{ struct Cyc_Int_pa_PrintArg_struct _TFB = _T79;
		    void * _TFC[2];
		    _TFC[0] = &_TFA;
		    _TFC[1] = &_TFB;
		    { struct Cyc_List_List * (* _TFD)(unsigned int,struct _fat_ptr,
						      struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
													struct _fat_ptr,
													struct _fat_ptr ap))Cyc_Formatstr_err_null;
		      _T7C = _TFD;
		    }_T7D = loc;
		    _T7E = _tag_fat("length modifier '%s' is not allowed with %%%c",
				    sizeof(char),46U);
		    _T7F = _tag_fat(_TFC,sizeof(void *),2);
		    _T77 = _T7C(_T7D,_T7E,_T7F);
		  }
		}{ struct Cyc_List_List * _TFA = _T77;
		  _npop_handler(0);
		  return _TFA;
		}_LL49: ;
	      }_T80 = t;
	      _T81 = &Cyc_Kinds_eko;
	      _T82 = (struct Cyc_Core_Opt *)_T81;
	      { struct Cyc_Core_Opt * _TF9 = _cycalloc(sizeof(struct Cyc_Core_Opt));
		_TF9->v = tvs;
		_T83 = (struct Cyc_Core_Opt *)_TF9;
	      }_T84 = Cyc_Absyn_new_evar(_T82,_T83);
	      _T85 = Cyc_Absyn_al_qual_type;
	      _T86 = Cyc_Absyn_empty_tqual(0U);
	      _T87 = Cyc_Absyn_false_type;
	      _T88 = Cyc_Tcutil_any_bool(tvs);
	      t = Cyc_Absyn_at_type(_T80,_T84,_T85,_T86,_T87,_T88);
	      { struct Cyc_List_List * _TF9 = _cycalloc(sizeof(struct Cyc_List_List));
		_TF9->hd = t;
		_TF9->tl = typs;
		_T89 = (struct Cyc_List_List *)_TF9;
	      }typs = _T89;
	      goto _LL8;
	    }
	  case 99: 
	    { struct Cyc_List_List * tvs = Cyc_Tcenv_lookup_type_vars(te);
	      void * ptr;
	      _T8A = isCproto;
	      if (_T8A) { goto _TLFC;
	      }else { goto _TLFE;
	      }
	      _TLFE: _T8B = Cyc_Absyn_char_type;
	      _T8C = &Cyc_Kinds_eko;
	      _T8D = (struct Cyc_Core_Opt *)_T8C;
	      { struct Cyc_Core_Opt * _TF9 = _cycalloc(sizeof(struct Cyc_Core_Opt));
		_TF9->v = tvs;
		_T8E = (struct Cyc_Core_Opt *)_TF9;
	      }_T8F = Cyc_Absyn_new_evar(_T8D,_T8E);
	      _T90 = Cyc_Absyn_al_qual_type;
	      _T91 = Cyc_Absyn_empty_tqual(0U);
	      _T92 = Cyc_Absyn_false_type;
	      _T93 = Cyc_Tcutil_any_bool(tvs);
	      ptr = Cyc_Absyn_fatptr_type(_T8B,_T8F,_T90,_T91,_T92,_T93);
	      goto _TLFD;
	      _TLFC: _T94 = Cyc_Absyn_char_type;
	      _T95 = &Cyc_Kinds_eko;
	      _T96 = (struct Cyc_Core_Opt *)_T95;
	      { struct Cyc_Core_Opt * _TF9 = _cycalloc(sizeof(struct Cyc_Core_Opt));
		_TF9->v = tvs;
		_T97 = (struct Cyc_Core_Opt *)_TF9;
	      }_T98 = Cyc_Absyn_new_evar(_T96,_T97);
	      _T99 = Cyc_Absyn_al_qual_type;
	      _T9A = Cyc_Absyn_empty_tqual(0U);
	      _T9B = Cyc_Absyn_false_type;
	      _T9C = Cyc_Tcutil_any_bool(tvs);
	      ptr = Cyc_Absyn_at_type(_T94,_T98,_T99,_T9A,_T9B,_T9C);
	      _TLFD: { struct Cyc_List_List * _TF9 = _cycalloc(sizeof(struct Cyc_List_List));
		_TF9->hd = ptr;
		_TF9->tl = typs;
		_T9D = (struct Cyc_List_List *)_TF9;
	      }typs = _T9D;
	      goto _LL8;
	    }
	  case 115: 
	    { struct Cyc_List_List * tvs = Cyc_Tcenv_lookup_type_vars(te);
	      void * ptr;
	      _T9E = isCproto;
	      if (_T9E) { goto _TLFF;
	      }else { goto _TL101;
	      }
	      _TL101: _T9F = Cyc_Absyn_char_type;
	      _TA0 = &Cyc_Kinds_eko;
	      _TA1 = (struct Cyc_Core_Opt *)_TA0;
	      { struct Cyc_Core_Opt * _TF9 = _cycalloc(sizeof(struct Cyc_Core_Opt));
		_TF9->v = tvs;
		_TA2 = (struct Cyc_Core_Opt *)_TF9;
	      }_TA3 = Cyc_Absyn_new_evar(_TA1,_TA2);
	      _TA4 = Cyc_Absyn_al_qual_type;
	      _TA5 = Cyc_Absyn_empty_tqual(0U);
	      _TA6 = Cyc_Absyn_false_type;
	      _TA7 = Cyc_Tcutil_any_bool(tvs);
	      ptr = Cyc_Absyn_fatptr_type(_T9F,_TA3,_TA4,_TA5,_TA6,_TA7);
	      goto _TL100;
	      _TLFF: _TA8 = Cyc_Absyn_char_type;
	      _TA9 = &Cyc_Kinds_eko;
	      _TAA = (struct Cyc_Core_Opt *)_TA9;
	      { struct Cyc_Core_Opt * _TF9 = _cycalloc(sizeof(struct Cyc_Core_Opt));
		_TF9->v = tvs;
		_TAB = (struct Cyc_Core_Opt *)_TF9;
	      }_TAC = Cyc_Absyn_new_evar(_TAA,_TAB);
	      _TAD = Cyc_Absyn_al_qual_type;
	      _TAE = Cyc_Absyn_empty_tqual(0U);
	      _TAF = Cyc_Absyn_true_type;
	      _TB0 = Cyc_Tcutil_any_bool(tvs);
	      ptr = Cyc_Absyn_at_type(_TA8,_TAC,_TAD,_TAE,_TAF,_TB0);
	      _TL100: { struct Cyc_List_List * _TF9 = _cycalloc(sizeof(struct Cyc_List_List));
		_TF9->hd = ptr;
		_TF9->tl = typs;
		_TB1 = (struct Cyc_List_List *)_TF9;
	      }typs = _TB1;
	      goto _LL8;
	    }
	  case 91: 
	    goto _LL2C;
	  case 112: 
	    _LL2C: { struct Cyc_Int_pa_PrintArg_struct _TF9;
	      _TF9.tag = 1;
	      _TB4 = c;
	      _TB5 = (int)_TB4;
	      _TF9.f1 = (unsigned long)_TB5;
	      _TB3 = _TF9;
	    }{ struct Cyc_Int_pa_PrintArg_struct _TF9 = _TB3;
	      void * _TFA[1];
	      _TFA[0] = &_TF9;
	      { struct Cyc_List_List * (* _TFB)(unsigned int,struct _fat_ptr,
						struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
												  struct _fat_ptr,
												  struct _fat_ptr ap))Cyc_Formatstr_err_null;
		_TB6 = _TFB;
	      }_TB7 = loc;
	      _TB8 = _tag_fat("%%%c is not supported",sizeof(char),22U);
	      _TB9 = _tag_fat(_TFA,sizeof(void *),1);
	      _TB2 = _TB6(_TB7,_TB8,_TB9);
	    }{ struct Cyc_List_List * _TF9 = _TB2;
	      _npop_handler(0);
	      return _TF9;
	    }
	  case 110: 
	    { struct Cyc_List_List * tvs = Cyc_Tcenv_lookup_type_vars(te);
	      { int _TF9;
		int _TFA;
		if (lenmod != 0) { goto _TL102;
		}
		t = Cyc_Absyn_sint_type;
		goto _LL50;
		_TL102: _TBA = lenmod;
		_TBB = (struct Cyc_List_List *)_TBA;
		_TBC = _TBB->tl;
		if (_TBC != 0) { goto _TL104;
		}
		_TBD = lenmod;
		{ struct Cyc_List_List _TFB = *_TBD;
		  _TBE = _TFB.hd;
		  _TFA = (int)_TBE;
		}_TBF = (int)_TFA;
		if (_TBF != 108) { goto _TL106;
		}
		{ int x = _TFA;
		  t = Cyc_Absyn_ulong_type;
		  goto _LL50;
		}_TL106: _TC0 = lenmod;
		{ struct Cyc_List_List _TFB = *_TC0;
		  _TC1 = _TFB.hd;
		  _TFA = (int)_TC1;
		}_TC2 = (int)_TFA;
		if (_TC2 != 104) { goto _TL108;
		}
		{ int x = _TFA;
		  t = Cyc_Absyn_sshort_type;
		  goto _LL50;
		}_TL108: goto _LL59;
		_TL104: _TC3 = lenmod;
		_TC4 = (struct Cyc_List_List *)_TC3;
		_TC5 = _TC4->tl;
		_TC6 = (struct Cyc_List_List *)_TC5;
		_TC7 = _TC6->tl;
		if (_TC7 != 0) { goto _TL10A;
		}
		_TC8 = lenmod;
		{ struct Cyc_List_List _TFB = *_TC8;
		  _TC9 = _TFB.hd;
		  _TFA = (int)_TC9;
		  _TCA = _TFB.tl;
		  { struct Cyc_List_List _TFC = *_TCA;
		    _TCB = _TFC.hd;
		    _TF9 = (int)_TCB;
		  }
		}_TCC = (int)_TFA;
		if (_TCC != 104) { goto _TL10C;
		}
		_TCD = (int)_TF9;
		if (_TCD != 104) { goto _TL10C;
		}
		{ int x = _TFA;
		  int y = _TF9;
		  t = Cyc_Absyn_schar_type;
		  goto _LL50;
		}_TL10C: goto _LL59;
		_TL10A: _LL59: { struct Cyc_String_pa_PrintArg_struct _TFB;
		  _TFB.tag = 0;
		  _TFB.f1 = Cyc_implode(lenmod);
		  _TCF = _TFB;
		}{ struct Cyc_String_pa_PrintArg_struct _TFB = _TCF;
		  { struct Cyc_Int_pa_PrintArg_struct _TFC;
		    _TFC.tag = 1;
		    _TD1 = c;
		    _TD2 = (int)_TD1;
		    _TFC.f1 = (unsigned long)_TD2;
		    _TD0 = _TFC;
		  }{ struct Cyc_Int_pa_PrintArg_struct _TFC = _TD0;
		    void * _TFD[2];
		    _TFD[0] = &_TFB;
		    _TFD[1] = &_TFC;
		    { struct Cyc_List_List * (* _TFE)(unsigned int,struct _fat_ptr,
						      struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
													struct _fat_ptr,
													struct _fat_ptr ap))Cyc_Formatstr_err_null;
		      _TD3 = _TFE;
		    }_TD4 = loc;
		    _TD5 = _tag_fat("length modifier '%s' is not allowed with %%%c",
				    sizeof(char),46U);
		    _TD6 = _tag_fat(_TFD,sizeof(void *),2);
		    _TCE = _TD3(_TD4,_TD5,_TD6);
		  }
		}{ struct Cyc_List_List * _TFB = _TCE;
		  _npop_handler(0);
		  return _TFB;
		}_LL50: ;
	      }_TD7 = t;
	      _TD8 = &Cyc_Kinds_eko;
	      _TD9 = (struct Cyc_Core_Opt *)_TD8;
	      { struct Cyc_Core_Opt * _TF9 = _cycalloc(sizeof(struct Cyc_Core_Opt));
		_TF9->v = tvs;
		_TDA = (struct Cyc_Core_Opt *)_TF9;
	      }_TDB = Cyc_Absyn_new_evar(_TD9,_TDA);
	      _TDC = Cyc_Absyn_al_qual_type;
	      _TDD = Cyc_Absyn_empty_tqual(0U);
	      _TDE = Cyc_Absyn_false_type;
	      _TDF = Cyc_Tcutil_any_bool(tvs);
	      t = Cyc_Absyn_at_type(_TD7,_TDB,_TDC,_TDD,_TDE,_TDF);
	      { struct Cyc_List_List * _TF9 = _cycalloc(sizeof(struct Cyc_List_List));
		_TF9->hd = t;
		_TF9->tl = typs;
		_TE0 = (struct Cyc_List_List *)_TF9;
	      }typs = _TE0;
	      goto _LL8;
	    }
	  case 37: 
	    _TE1 = suppress;
	    if (! _TE1) { goto _TL10E;
	    }
	    { struct Cyc_List_List * (* _TF9)(unsigned int,struct _fat_ptr,
					      struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
												struct _fat_ptr,
												struct _fat_ptr ap))Cyc_Formatstr_err_null;
	      _TE2 = _TF9;
	    }_TE3 = loc;
	    _TE4 = _tag_fat("Assignment suppression (*) is not allowed with %%%%",
			    sizeof(char),52U);
	    _TE5 = _tag_fat(0U,sizeof(void *),0);
	    { struct Cyc_List_List * _TF9 = _TE2(_TE3,_TE4,_TE5);
	      _npop_handler(0);
	      return _TF9;
	    }_TL10E: if (width == 0) { goto _TL110;
	    }
	    { struct Cyc_String_pa_PrintArg_struct _TF9;
	      _TF9.tag = 0;
	      _TF9.f1 = Cyc_implode(width);
	      _TE7 = _TF9;
	    }{ struct Cyc_String_pa_PrintArg_struct _TF9 = _TE7;
	      void * _TFA[1];
	      _TFA[0] = &_TF9;
	      { struct Cyc_List_List * (* _TFB)(unsigned int,struct _fat_ptr,
						struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
												  struct _fat_ptr,
												  struct _fat_ptr ap))Cyc_Formatstr_err_null;
		_TE8 = _TFB;
	      }_TE9 = loc;
	      _TEA = _tag_fat("width '%s' not allowed with %%%%",sizeof(char),
			      33U);
	      _TEB = _tag_fat(_TFA,sizeof(void *),1);
	      _TE6 = _TE8(_TE9,_TEA,_TEB);
	    }{ struct Cyc_List_List * _TF9 = _TE6;
	      _npop_handler(0);
	      return _TF9;
	    }_TL110: if (lenmod == 0) { goto _TL112;
	    }
	    { struct Cyc_String_pa_PrintArg_struct _TF9;
	      _TF9.tag = 0;
	      _TF9.f1 = Cyc_implode(lenmod);
	      _TED = _TF9;
	    }{ struct Cyc_String_pa_PrintArg_struct _TF9 = _TED;
	      void * _TFA[1];
	      _TFA[0] = &_TF9;
	      { struct Cyc_List_List * (* _TFB)(unsigned int,struct _fat_ptr,
						struct _fat_ptr ap) = (struct Cyc_List_List * (*)(unsigned int,
												  struct _fat_ptr,
												  struct _fat_ptr ap))Cyc_Formatstr_err_null;
		_TEE = _TFB;
	      }_TEF = loc;
	      _TF0 = _tag_fat("length modifier '%s' not allowed with %%%%",
			      sizeof(char),43U);
	      _TF1 = _tag_fat(_TFA,sizeof(void *),1);
	      _TEC = _TEE(_TEF,_TF0,_TF1);
	    }{ struct Cyc_List_List * _TF9 = _TEC;
	      _npop_handler(0);
	      return _TF9;
	    }_TL112: goto _LL8;
	  default: 
	    { struct Cyc_List_List * _TF9 = 0;
	      _npop_handler(0);
	      return _TF9;
	    }
	  }
	  _LL8: ;
	}
      }
    }
  }_TLCA: i = i + 1;
  goto _TLCD;
  _TLCC: { struct Cyc_List_List * _TF3 = Cyc_List_imp_rev(typs);
    _npop_handler(0);
    return _TF3;
  }_pop_region();
}
