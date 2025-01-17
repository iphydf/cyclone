#include <cyc_include.h>
extern char Cyc_Core_Not_found[10U];
 struct Cyc_Core_Not_found_exn_struct {
  char * tag;
};
 struct Cyc_List_List {
  void * hd;
  struct Cyc_List_List * tl;
};
extern char Cyc_Arg_Bad[4U];
 struct Cyc_Arg_Bad_exn_struct {
  char * tag;
  struct _fat_ptr f1;
};
 struct Cyc_Arg_Unit_spec_Arg_Spec_struct {
  int tag;
  void (* f1)();
};
 struct Cyc_Arg_Flag_spec_Arg_Spec_struct {
  int tag;
  void (* f1)(struct _fat_ptr);
};
 struct Cyc_Arg_FlagString_spec_Arg_Spec_struct {
  int tag;
  void (* f1)(struct _fat_ptr,struct _fat_ptr);
};
 struct Cyc_Arg_Set_spec_Arg_Spec_struct {
  int tag;
  long * f1;
};
 struct Cyc_Arg_Clear_spec_Arg_Spec_struct {
  int tag;
  long * f1;
};
 struct Cyc_Arg_String_spec_Arg_Spec_struct {
  int tag;
  void (* f1)(struct _fat_ptr);
};
 struct Cyc_Arg_Int_spec_Arg_Spec_struct {
  int tag;
  void (* f1)(int);
};
 struct Cyc_Arg_Rest_spec_Arg_Spec_struct {
  int tag;
  void (* f1)(struct _fat_ptr);
};
extern int Cyc_Arg_current;
extern void * Cyc___assert_fail(struct _fat_ptr,struct _fat_ptr,unsigned int);
struct Cyc___cycFILE;
extern struct Cyc___cycFILE * Cyc_stderr;
 struct Cyc_String_pa_PrintArg_struct {
  int tag;
  struct _fat_ptr f1;
};
extern int Cyc_fprintf(struct Cyc___cycFILE *,struct _fat_ptr,struct _fat_ptr);
 struct Cyc_IntPtr_sa_ScanfArg_struct {
  int tag;
  int * f1;
};
extern int Cyc_sscanf(struct _fat_ptr,struct _fat_ptr,struct _fat_ptr);
extern int isspace(int);
struct Cyc_Buffer_t;
extern struct Cyc_Buffer_t * Cyc_Buffer_create(unsigned int);
extern struct _fat_ptr Cyc_Buffer_contents(struct Cyc_Buffer_t *);
extern void Cyc_Buffer_add_substring(struct Cyc_Buffer_t *,struct _fat_ptr,
				     int,int);
extern void Cyc_Buffer_add_string(struct Cyc_Buffer_t *,struct _fat_ptr);
extern unsigned long Cyc_strlen(struct _fat_ptr);
extern int Cyc_strcmp(struct _fat_ptr,struct _fat_ptr);
extern int Cyc_strncmp(struct _fat_ptr,struct _fat_ptr,unsigned long);
extern struct _fat_ptr Cyc_strconcat(struct _fat_ptr,struct _fat_ptr);
char Cyc_Arg_Bad[4U] = "Bad";
char Cyc_Arg_Error[6U] = "Error";
 struct Cyc_Arg_Unknown_Arg_error_struct {
  int tag;
  struct _fat_ptr f1;
};
 struct Cyc_Arg_Missing_Arg_error_struct {
  int tag;
  struct _fat_ptr f1;
};
 struct Cyc_Arg_Message_Arg_error_struct {
  int tag;
  struct _fat_ptr f1;
};
 struct Cyc_Arg_Wrong_Arg_error_struct {
  int tag;
  struct _fat_ptr f1;
  struct _fat_ptr f2;
  struct _fat_ptr f3;
};
 struct _tuple0 {
  struct _fat_ptr f0;
  long f1;
  struct _fat_ptr f2;
  void * f3;
  struct _fat_ptr f4;
};
static void * Cyc_Arg_lookup(struct Cyc_List_List * l,struct _fat_ptr x) {
  struct Cyc_List_List * _T0;
  void * _T1;
  struct _tuple0 * _T2;
  struct _tuple0 _T3;
  struct Cyc_List_List * _T4;
  void * _T5;
  struct _tuple0 * _T6;
  struct _tuple0 _T7;
  long _T8;
  struct _fat_ptr _T9;
  struct Cyc_List_List * _TA;
  void * _TB;
  struct _tuple0 * _TC;
  struct _tuple0 _TD;
  struct _fat_ptr _TE;
  unsigned long _TF;
  int _T10;
  struct Cyc_List_List * _T11;
  void * _T12;
  struct _tuple0 * _T13;
  struct _tuple0 _T14;
  void * _T15;
  struct _fat_ptr _T16;
  struct Cyc_List_List * _T17;
  void * _T18;
  struct _tuple0 * _T19;
  struct _tuple0 _T1A;
  struct _fat_ptr _T1B;
  int _T1C;
  struct Cyc_List_List * _T1D;
  void * _T1E;
  struct _tuple0 * _T1F;
  struct _tuple0 _T20;
  void * _T21;
  struct Cyc_List_List * _T22;
  struct Cyc_Core_Not_found_exn_struct * _T23;
  void * _T24;
  _TL0: if (l != 0) { goto _TL1;
  }else { goto _TL2;
  }
  _TL1: _T0 = l;
  _T1 = _T0->hd;
  _T2 = (struct _tuple0 *)_T1;
  _T3 = *_T2;
  { struct _fat_ptr flag = _T3.f0;
    unsigned long len = Cyc_strlen(flag);
    if (len <= 0U) { goto _TL3;
    }
    _T4 = l;
    _T5 = _T4->hd;
    _T6 = (struct _tuple0 *)_T5;
    _T7 = *_T6;
    _T8 = _T7.f1;
    if (! _T8) { goto _TL3;
    }
    _T9 = x;
    _TA = l;
    _TB = _TA->hd;
    _TC = (struct _tuple0 *)_TB;
    _TD = *_TC;
    _TE = _TD.f0;
    _TF = len;
    _T10 = Cyc_strncmp(_T9,_TE,_TF);
    if (_T10 != 0) { goto _TL5;
    }
    _T11 = l;
    _T12 = _T11->hd;
    _T13 = (struct _tuple0 *)_T12;
    _T14 = *_T13;
    _T15 = _T14.f3;
    return _T15;
    _TL5: goto _TL4;
    _TL3: _T16 = x;
    _T17 = l;
    _T18 = _T17->hd;
    _T19 = (struct _tuple0 *)_T18;
    _T1A = *_T19;
    _T1B = _T1A.f0;
    _T1C = Cyc_strcmp(_T16,_T1B);
    if (_T1C != 0) { goto _TL7;
    }
    _T1D = l;
    _T1E = _T1D->hd;
    _T1F = (struct _tuple0 *)_T1E;
    _T20 = *_T1F;
    _T21 = _T20.f3;
    return _T21;
    _TL7: _TL4: _T22 = l;
    l = _T22->tl;
  }goto _TL0;
  _TL2: { struct Cyc_Core_Not_found_exn_struct * _T25 = _cycalloc(sizeof(struct Cyc_Core_Not_found_exn_struct));
    _T25->tag = Cyc_Core_Not_found;
    _T23 = (struct Cyc_Core_Not_found_exn_struct *)_T25;
  }_T24 = (void *)_T23;
  _throw(_T24);
}
static struct _fat_ptr Cyc_Arg_Justify_break_line(struct Cyc_Buffer_t * b,
						  int howmuch,struct _fat_ptr s) {
  struct _fat_ptr _T0;
  unsigned char * _T1;
  char * _T2;
  struct _fat_ptr _T3;
  unsigned long _T4;
  struct _fat_ptr _T5;
  unsigned int _T6;
  int (* _T7)(struct _fat_ptr,struct _fat_ptr,unsigned int);
  void * (* _T8)(struct _fat_ptr,struct _fat_ptr,unsigned int);
  struct _fat_ptr _T9;
  struct _fat_ptr _TA;
  int _TB;
  unsigned long _TC;
  unsigned long _TD;
  struct _fat_ptr _TE;
  struct _fat_ptr _TF;
  int _T10;
  unsigned char * _T11;
  const char * _T12;
  char _T13;
  int _T14;
  int _T15;
  int _T16;
  int _T17;
  int _T18;
  unsigned long _T19;
  unsigned long _T1A;
  struct _fat_ptr _T1B;
  unsigned char * _T1C;
  const char * _T1D;
  int _T1E;
  char _T1F;
  int _T20;
  struct _fat_ptr _T21;
  unsigned char * _T22;
  const char * _T23;
  int _T24;
  char _T25;
  int _T26;
  int _T27;
  int _T28;
  unsigned long _T29;
  unsigned long _T2A;
  struct _fat_ptr _T2B;
  unsigned char * _T2C;
  const char * _T2D;
  int _T2E;
  char _T2F;
  int _T30;
  struct _fat_ptr _T31;
  unsigned char * _T32;
  const char * _T33;
  int _T34;
  char _T35;
  int _T36;
  int _T37;
  int _T38;
  unsigned long _T39;
  unsigned long _T3A;
  struct _fat_ptr _T3B;
  unsigned char * _T3C;
  const char * _T3D;
  int _T3E;
  char _T3F;
  int _T40;
  struct _fat_ptr _T41;
  int _T42;
  struct _fat_ptr _T43;
  _T0 = s;
  _T1 = _T0.curr;
  _T2 = (char *)_T1;
  if (_T2 != 0) { goto _TL9;
  }
  _T3 = _tag_fat(0,0,0);
  return _T3;
  _TL9: if (howmuch >= 0) { goto _TLB;
  }
  howmuch = 0;
  goto _TLC;
  _TLB: _TLC: { unsigned long len = Cyc_strlen(s);
    _T4 = len;
    _T5 = s;
    _T6 = _get_fat_size(_T5,sizeof(char));
    if (_T4 > _T6) { goto _TLD;
    }
    goto _TLE;
    _TLD: _T8 = Cyc___assert_fail;
    { int (* _T44)(struct _fat_ptr,struct _fat_ptr,unsigned int) = (int (*)(struct _fat_ptr,
									    struct _fat_ptr,
									    unsigned int))_T8;
      _T7 = _T44;
    }_T9 = _tag_fat("len <= numelts(s)",sizeof(char),18U);
    _TA = _tag_fat("cyclone/library/std/arg.cyc",sizeof(char),28U);
    _T7(_T9,_TA,90U);
    _TLE: _TB = howmuch;
    _TC = (unsigned long)_TB;
    _TD = len;
    if (_TC <= _TD) { goto _TLF;
    }
    Cyc_Buffer_add_string(b,s);
    _TE = _tag_fat(0,0,0);
    return _TE;
    _TLF: { int i;
      i = howmuch - 1;
      _TL14: if (i >= 0) { goto _TL15;
      }else { goto _TL13;
      }
      _TL15: _TF = s;
      _T10 = i;
      _T11 = _check_fat_subscript(_TF,sizeof(char),_T10);
      _T12 = (const char *)_T11;
      _T13 = *_T12;
      _T14 = (int)_T13;
      _T15 = isspace(_T14);
      if (_T15) { goto _TL13;
      }else { goto _TL12;
      }
      _TL12: i = i + -1;
      goto _TL14;
      _TL13: if (i >= 0) { goto _TL16;
      }
      _T17 = howmuch;
      if (! _T17) { goto _TL18;
      }
      _T16 = howmuch - 1;
      goto _TL19;
      _TL18: _T16 = 0;
      _TL19: i = _T16;
      _TL1D: _T18 = i;
      _T19 = (unsigned long)_T18;
      _T1A = len;
      if (_T19 < _T1A) { goto _TL1F;
      }else { goto _TL1C;
      }
      _TL1F: _T1B = s;
      _T1C = _T1B.curr;
      _T1D = (const char *)_T1C;
      _T1E = i;
      _T1F = _T1D[_T1E];
      _T20 = (int)_T1F;
      if (_T20) { goto _TL1E;
      }else { goto _TL1C;
      }
      _TL1E: _T21 = s;
      _T22 = _T21.curr;
      _T23 = (const char *)_T22;
      _T24 = i;
      _T25 = _T23[_T24];
      _T26 = (int)_T25;
      _T27 = isspace(_T26);
      if (_T27) { goto _TL1C;
      }else { goto _TL1B;
      }
      _TL1B: i = i + 1;
      goto _TL1D;
      _TL1C: goto _TL17;
      _TL16: _TL17: Cyc_Buffer_add_substring(b,s,0,i);
      { struct _fat_ptr whatsleft = _tag_fat(0,0,0);
	_TL23: _T28 = i;
	_T29 = (unsigned long)_T28;
	_T2A = len;
	if (_T29 < _T2A) { goto _TL25;
	}else { goto _TL22;
	}
	_TL25: _T2B = s;
	_T2C = _T2B.curr;
	_T2D = (const char *)_T2C;
	_T2E = i;
	_T2F = _T2D[_T2E];
	_T30 = (int)_T2F;
	if (_T30) { goto _TL24;
	}else { goto _TL22;
	}
	_TL24: _T31 = s;
	_T32 = _T31.curr;
	_T33 = (const char *)_T32;
	_T34 = i;
	_T35 = _T33[_T34];
	_T36 = (int)_T35;
	_T37 = isspace(_T36);
	if (_T37) { goto _TL21;
	}else { goto _TL22;
	}
	_TL21: i = i + 1;
	goto _TL23;
	_TL22: _T38 = i;
	_T39 = (unsigned long)_T38;
	_T3A = len;
	if (_T39 >= _T3A) { goto _TL26;
	}
	_T3B = s;
	_T3C = _T3B.curr;
	_T3D = (const char *)_T3C;
	_T3E = i;
	_T3F = _T3D[_T3E];
	_T40 = (int)_T3F;
	if (! _T40) { goto _TL26;
	}
	_T41 = s;
	_T42 = i;
	whatsleft = _fat_ptr_plus(_T41,sizeof(char),_T42);
	goto _TL27;
	_TL26: _TL27: _T43 = whatsleft;
	return _T43;
      }
    }
  }
}
void Cyc_Arg_Justify_justify_b(struct Cyc_Buffer_t * b,int indent,int margin,
			       struct _fat_ptr item,struct _fat_ptr desc) {
  struct _fat_ptr _T0;
  unsigned char * _T1;
  char * _T2;
  struct _fat_ptr _T3;
  unsigned char * _T4;
  char * _T5;
  struct _fat_ptr _T6;
  int _T7;
  unsigned int _T8;
  char * _T9;
  unsigned int _TA;
  unsigned int _TB;
  unsigned int _TC;
  int _TD;
  unsigned int _TE;
  struct _fat_ptr _TF;
  unsigned int _T10;
  int _T11;
  unsigned char * _T12;
  char * _T13;
  char _T14;
  unsigned int _T15;
  unsigned char * _T16;
  char * _T17;
  unsigned long _T18;
  unsigned long _T19;
  int _T1A;
  unsigned long _T1B;
  struct _fat_ptr _T1C;
  int _T1D;
  unsigned long _T1E;
  unsigned long _T1F;
  unsigned long _T20;
  unsigned long _T21;
  char * _T22;
  unsigned int _T23;
  unsigned int _T24;
  unsigned int _T25;
  int _T26;
  unsigned long _T27;
  unsigned long _T28;
  unsigned long _T29;
  struct _fat_ptr _T2A;
  unsigned int _T2B;
  int _T2C;
  unsigned char * _T2D;
  char * _T2E;
  unsigned int _T2F;
  unsigned char * _T30;
  char * _T31;
  struct _fat_ptr _T32;
  unsigned char * _T33;
  char * _T34;
  struct Cyc_Buffer_t * _T35;
  int _T36;
  struct _fat_ptr _T37;
  struct _fat_ptr _T38;
  unsigned char * _T39;
  char * _T3A;
  struct Cyc_Buffer_t * _T3B;
  struct _fat_ptr _T3C;
  _T0 = item;
  _T1 = _T0.curr;
  _T2 = (char *)_T1;
  if (_T2 == 0) { goto _TL28;
  }
  Cyc_Buffer_add_string(b,item);
  goto _TL29;
  _TL28: _TL29: _T3 = desc;
  _T4 = _T3.curr;
  _T5 = (char *)_T4;
  if (_T5 != 0) { goto _TL2A;
  }
  return;
  _TL2A: if (indent >= 0) { goto _TL2C;
  }
  indent = 0;
  goto _TL2D;
  _TL2C: _TL2D: if (margin >= 0) { goto _TL2E;
  }
  margin = 0;
  goto _TL2F;
  _TL2E: _TL2F: _T7 = indent + 2;
  _T8 = (unsigned int)_T7;
  { unsigned int _T3D = _T8 + 1U;
    _TA = _check_times(_T3D,sizeof(char));
    { char * _T3E = _cycalloc_atomic(_TA);
      { unsigned int _T3F = _T3D;
	unsigned int i;
	i = 0;
	_TL33: if (i < _T3F) { goto _TL31;
	}else { goto _TL32;
	}
	_TL31: _TB = i;
	_T3E[_TB] = '\000';
	i = i + 1;
	goto _TL33;
	_TL32: _T3E[_T3F] = 0;
      }_T9 = (char *)_T3E;
    }_T6 = _tag_fat(_T9,sizeof(char),_T3D);
  }{ struct _fat_ptr indentstr = _T6;
    { unsigned int i = 0U;
      _TL37: _TC = i;
      _TD = indent + 1;
      _TE = (unsigned int)_TD;
      if (_TC < _TE) { goto _TL35;
      }else { goto _TL36;
      }
      _TL35: _TF = indentstr;
      _T10 = i;
      _T11 = (int)_T10;
      { struct _fat_ptr _T3D = _fat_ptr_plus(_TF,sizeof(char),_T11);
	_T12 = _check_fat_subscript(_T3D,sizeof(char),0U);
	_T13 = (char *)_T12;
	{ char _T3E = *_T13;
	  if (i != 0U) { goto _TL38;
	  }
	  _T14 = '\n';
	  goto _TL39;
	  _TL38: _T14 = ' ';
	  _TL39: { char _T3F = _T14;
	    _T15 = _get_fat_size(_T3D,sizeof(char));
	    if (_T15 != 1U) { goto _TL3A;
	    }
	    if (_T3E != 0) { goto _TL3A;
	    }
	    if (_T3F == 0) { goto _TL3A;
	    }
	    _throw_arraybounds();
	    goto _TL3B;
	    _TL3A: _TL3B: _T16 = _T3D.curr;
	    _T17 = (char *)_T16;
	    *_T17 = _T3F;
	  }
	}
      }i = i + 1;
      goto _TL37;
      _TL36: ;
    }{ unsigned long itemlen = Cyc_strlen(item);
      struct _fat_ptr itemsep;
      _T18 = Cyc_strlen(desc);
      if (_T18 <= 0U) { goto _TL3C;
      }
      _T19 = itemlen + 1U;
      _T1A = indent;
      _T1B = (unsigned long)_T1A;
      if (_T19 <= _T1B) { goto _TL3E;
      }
      itemsep = indentstr;
      goto _TL3F;
      _TL3E: _T1D = indent;
      _T1E = (unsigned long)_T1D;
      _T1F = itemlen;
      _T20 = _T1E - _T1F;
      _T21 = _T20 + 1U;
      { unsigned int _T3D = _T21 + 1U;
	_T23 = _check_times(_T3D,sizeof(char));
	{ char * _T3E = _cycalloc_atomic(_T23);
	  { unsigned int _T3F = _T3D;
	    unsigned int i;
	    i = 0;
	    _TL43: if (i < _T3F) { goto _TL41;
	    }else { goto _TL42;
	    }
	    _TL41: _T24 = i;
	    _T3E[_T24] = '\000';
	    i = i + 1;
	    goto _TL43;
	    _TL42: _T3E[_T3F] = 0;
	  }_T22 = (char *)_T3E;
	}_T1C = _tag_fat(_T22,sizeof(char),_T3D);
      }{ struct _fat_ptr temp = _T1C;
	{ unsigned int i = 0U;
	  _TL47: _T25 = i;
	  _T26 = indent;
	  _T27 = (unsigned long)_T26;
	  _T28 = itemlen;
	  _T29 = _T27 - _T28;
	  if (_T25 < _T29) { goto _TL45;
	  }else { goto _TL46;
	  }
	  _TL45: _T2A = temp;
	  _T2B = i;
	  _T2C = (int)_T2B;
	  { struct _fat_ptr _T3D = _fat_ptr_plus(_T2A,sizeof(char),_T2C);
	    _T2D = _check_fat_subscript(_T3D,sizeof(char),0U);
	    _T2E = (char *)_T2D;
	    { char _T3E = *_T2E;
	      char _T3F = ' ';
	      _T2F = _get_fat_size(_T3D,sizeof(char));
	      if (_T2F != 1U) { goto _TL48;
	      }
	      if (_T3E != 0) { goto _TL48;
	      }
	      if (_T3F == 0) { goto _TL48;
	      }
	      _throw_arraybounds();
	      goto _TL49;
	      _TL48: _TL49: _T30 = _T3D.curr;
	      _T31 = (char *)_T30;
	      *_T31 = _T3F;
	    }
	  }i = i + 1;
	  goto _TL47;
	  _TL46: ;
	}itemsep = temp;
      }_TL3F: goto _TL3D;
      _TL3C: return;
      _TL3D: Cyc_Buffer_add_string(b,itemsep);
      _TL4A: _T32 = desc;
      _T33 = _T32.curr;
      _T34 = (char *)_T33;
      if (_T34 != 0) { goto _TL4B;
      }else { goto _TL4C;
      }
      _TL4B: _T35 = b;
      _T36 = margin - indent;
      _T37 = desc;
      desc = Cyc_Arg_Justify_break_line(_T35,_T36,_T37);
      _T38 = desc;
      _T39 = _T38.curr;
      _T3A = (char *)_T39;
      if (_T3A == 0) { goto _TL4D;
      }
      Cyc_Buffer_add_string(b,indentstr);
      goto _TL4E;
      _TL4D: _T3B = b;
      _T3C = _tag_fat("\n",sizeof(char),2U);
      Cyc_Buffer_add_string(_T3B,_T3C);
      _TL4E: goto _TL4A;
      _TL4C: return;
    }
  }
}
void Cyc_Arg_usage(struct Cyc_List_List * speclist,struct _fat_ptr errmsg) {
  struct Cyc_String_pa_PrintArg_struct _T0;
  struct Cyc___cycFILE * _T1;
  struct _fat_ptr _T2;
  struct _fat_ptr _T3;
  struct Cyc_Buffer_t * _T4;
  struct Cyc_List_List * _T5;
  void * _T6;
  struct _tuple0 * _T7;
  struct _tuple0 _T8;
  struct _fat_ptr _T9;
  struct Cyc_List_List * _TA;
  void * _TB;
  struct _tuple0 * _TC;
  struct _tuple0 _TD;
  struct _fat_ptr _TE;
  struct _fat_ptr _TF;
  struct Cyc_List_List * _T10;
  void * _T11;
  struct _tuple0 * _T12;
  struct _tuple0 _T13;
  struct _fat_ptr _T14;
  struct Cyc_List_List * _T15;
  struct Cyc_String_pa_PrintArg_struct _T16;
  struct Cyc___cycFILE * _T17;
  struct _fat_ptr _T18;
  struct _fat_ptr _T19;
  { struct Cyc_String_pa_PrintArg_struct _T1A;
    _T1A.tag = 0;
    _T1A.f1 = errmsg;
    _T0 = _T1A;
  }{ struct Cyc_String_pa_PrintArg_struct _T1A = _T0;
    void * _T1B[1];
    _T1B[0] = &_T1A;
    _T1 = Cyc_stderr;
    _T2 = _tag_fat("%s\n",sizeof(char),4U);
    _T3 = _tag_fat(_T1B,sizeof(void *),1);
    Cyc_fprintf(_T1,_T2,_T3);
  }{ struct Cyc_Buffer_t * b = Cyc_Buffer_create(1024U);
    _TL4F: if (speclist != 0) { goto _TL50;
    }else { goto _TL51;
    }
    _TL50: _T4 = b;
    _T5 = speclist;
    _T6 = _T5->hd;
    _T7 = (struct _tuple0 *)_T6;
    _T8 = *_T7;
    _T9 = _T8.f0;
    _TA = speclist;
    _TB = _TA->hd;
    _TC = (struct _tuple0 *)_TB;
    _TD = *_TC;
    _TE = _TD.f2;
    _TF = Cyc_strconcat(_T9,_TE);
    _T10 = speclist;
    _T11 = _T10->hd;
    _T12 = (struct _tuple0 *)_T11;
    _T13 = *_T12;
    _T14 = _T13.f4;
    Cyc_Arg_Justify_justify_b(_T4,12,72,_TF,_T14);
    _T15 = speclist;
    speclist = _T15->tl;
    goto _TL4F;
    _TL51: { struct Cyc_String_pa_PrintArg_struct _T1A;
      _T1A.tag = 0;
      _T1A.f1 = Cyc_Buffer_contents(b);
      _T16 = _T1A;
    }{ struct Cyc_String_pa_PrintArg_struct _T1A = _T16;
      void * _T1B[1];
      _T1B[0] = &_T1A;
      _T17 = Cyc_stderr;
      _T18 = _tag_fat("%s",sizeof(char),3U);
      _T19 = _tag_fat(_T1B,sizeof(void *),1);
      Cyc_fprintf(_T17,_T18,_T19);
    }
  }
}
int Cyc_Arg_current = 0;
static struct _fat_ptr Cyc_Arg_args = {(void *)0,(void *)0,(void *)(0 + 0)};
static void Cyc_Arg_stop(int prog_pos,void * e,struct Cyc_List_List * speclist,
			 struct _fat_ptr errmsg) {
  struct _fat_ptr _T0;
  int _T1;
  unsigned int _T2;
  struct _fat_ptr _T3;
  unsigned int _T4;
  struct _fat_ptr _T5;
  unsigned char * _T6;
  struct _fat_ptr * _T7;
  struct _fat_ptr * _T8;
  int _T9;
  void * _TA;
  int * _TB;
  unsigned int _TC;
  void * _TD;
  struct _fat_ptr _TE;
  struct _fat_ptr _TF;
  int _T10;
  struct Cyc_String_pa_PrintArg_struct _T11;
  struct Cyc_String_pa_PrintArg_struct _T12;
  struct Cyc___cycFILE * _T13;
  struct _fat_ptr _T14;
  struct _fat_ptr _T15;
  void * _T16;
  struct Cyc_String_pa_PrintArg_struct _T17;
  struct Cyc_String_pa_PrintArg_struct _T18;
  struct Cyc___cycFILE * _T19;
  struct _fat_ptr _T1A;
  struct _fat_ptr _T1B;
  void * _T1C;
  struct Cyc_String_pa_PrintArg_struct _T1D;
  struct Cyc_String_pa_PrintArg_struct _T1E;
  struct Cyc_String_pa_PrintArg_struct _T1F;
  struct Cyc_String_pa_PrintArg_struct _T20;
  struct Cyc___cycFILE * _T21;
  struct _fat_ptr _T22;
  struct _fat_ptr _T23;
  void * _T24;
  struct Cyc_String_pa_PrintArg_struct _T25;
  struct Cyc_String_pa_PrintArg_struct _T26;
  struct Cyc___cycFILE * _T27;
  struct _fat_ptr _T28;
  struct _fat_ptr _T29;
  struct _fat_ptr _T2A;
  unsigned int _T2B;
  _T1 = prog_pos;
  _T2 = (unsigned int)_T1;
  _T3 = Cyc_Arg_args;
  _T4 = _get_fat_size(_T3,sizeof(struct _fat_ptr));
  if (_T2 >= _T4) { goto _TL52;
  }
  _T5 = Cyc_Arg_args;
  _T6 = _T5.curr;
  _T7 = (struct _fat_ptr *)_T6;
  _T8 = _check_null(_T7);
  _T9 = prog_pos;
  _T0 = _T8[_T9];
  goto _TL53;
  _TL52: _T0 = _tag_fat("(?)",sizeof(char),4U);
  _TL53: { struct _fat_ptr progname = _T0;
    { struct _fat_ptr _T2C;
      struct _fat_ptr _T2D;
      struct _fat_ptr _T2E;
      _TA = e;
      _TB = (int *)_TA;
      _TC = *_TB;
      switch (_TC) {
      case 0: 
	_TD = e;
	{ struct Cyc_Arg_Unknown_Arg_error_struct * _T2F = (struct Cyc_Arg_Unknown_Arg_error_struct *)_TD;
	  _T2E = _T2F->f1;
	}{ struct _fat_ptr s = _T2E;
	  _TE = s;
	  _TF = _tag_fat("-help",sizeof(char),6U);
	  _T10 = Cyc_strcmp(_TE,_TF);
	  if (_T10 == 0) { goto _TL55;
	  }
	  { struct Cyc_String_pa_PrintArg_struct _T2F;
	    _T2F.tag = 0;
	    _T2F.f1 = progname;
	    _T11 = _T2F;
	  }{ struct Cyc_String_pa_PrintArg_struct _T2F = _T11;
	    { struct Cyc_String_pa_PrintArg_struct _T30;
	      _T30.tag = 0;
	      _T30.f1 = s;
	      _T12 = _T30;
	    }{ struct Cyc_String_pa_PrintArg_struct _T30 = _T12;
	      void * _T31[2];
	      _T31[0] = &_T2F;
	      _T31[1] = &_T30;
	      _T13 = Cyc_stderr;
	      _T14 = _tag_fat("%s: unknown option `%s'.\n",sizeof(char),26U);
	      _T15 = _tag_fat(_T31,sizeof(void *),2);
	      Cyc_fprintf(_T13,_T14,_T15);
	    }
	  }goto _TL56;
	  _TL55: _TL56: goto _LL0;
	}
      case 1: 
	_T16 = e;
	{ struct Cyc_Arg_Missing_Arg_error_struct * _T2F = (struct Cyc_Arg_Missing_Arg_error_struct *)_T16;
	  _T2E = _T2F->f1;
	}{ struct _fat_ptr s = _T2E;
	  { struct Cyc_String_pa_PrintArg_struct _T2F;
	    _T2F.tag = 0;
	    _T2F.f1 = progname;
	    _T17 = _T2F;
	  }{ struct Cyc_String_pa_PrintArg_struct _T2F = _T17;
	    { struct Cyc_String_pa_PrintArg_struct _T30;
	      _T30.tag = 0;
	      _T30.f1 = s;
	      _T18 = _T30;
	    }{ struct Cyc_String_pa_PrintArg_struct _T30 = _T18;
	      void * _T31[2];
	      _T31[0] = &_T2F;
	      _T31[1] = &_T30;
	      _T19 = Cyc_stderr;
	      _T1A = _tag_fat("%s: option `%s' needs an argument.\n",sizeof(char),
			      36U);
	      _T1B = _tag_fat(_T31,sizeof(void *),2);
	      Cyc_fprintf(_T19,_T1A,_T1B);
	    }
	  }goto _LL0;
	}
      case 3: 
	_T1C = e;
	{ struct Cyc_Arg_Wrong_Arg_error_struct * _T2F = (struct Cyc_Arg_Wrong_Arg_error_struct *)_T1C;
	  _T2E = _T2F->f1;
	  _T2D = _T2F->f2;
	  _T2C = _T2F->f3;
	}{ struct _fat_ptr flag = _T2E;
	  struct _fat_ptr cmd = _T2D;
	  struct _fat_ptr t = _T2C;
	  { struct Cyc_String_pa_PrintArg_struct _T2F;
	    _T2F.tag = 0;
	    _T2F.f1 = progname;
	    _T1D = _T2F;
	  }{ struct Cyc_String_pa_PrintArg_struct _T2F = _T1D;
	    { struct Cyc_String_pa_PrintArg_struct _T30;
	      _T30.tag = 0;
	      _T30.f1 = cmd;
	      _T1E = _T30;
	    }{ struct Cyc_String_pa_PrintArg_struct _T30 = _T1E;
	      { struct Cyc_String_pa_PrintArg_struct _T31;
		_T31.tag = 0;
		_T31.f1 = flag;
		_T1F = _T31;
	      }{ struct Cyc_String_pa_PrintArg_struct _T31 = _T1F;
		{ struct Cyc_String_pa_PrintArg_struct _T32;
		  _T32.tag = 0;
		  _T32.f1 = t;
		  _T20 = _T32;
		}{ struct Cyc_String_pa_PrintArg_struct _T32 = _T20;
		  void * _T33[4];
		  _T33[0] = &_T2F;
		  _T33[1] = &_T30;
		  _T33[2] = &_T31;
		  _T33[3] = &_T32;
		  _T21 = Cyc_stderr;
		  _T22 = _tag_fat("%s: wrong argument `%s'; option `%s' expects %s.\n",
				  sizeof(char),50U);
		  _T23 = _tag_fat(_T33,sizeof(void *),4);
		  Cyc_fprintf(_T21,_T22,_T23);
		}
	      }
	    }
	  }goto _LL0;
	}
      default: 
	_T24 = e;
	{ struct Cyc_Arg_Message_Arg_error_struct * _T2F = (struct Cyc_Arg_Message_Arg_error_struct *)_T24;
	  _T2E = _T2F->f1;
	}{ struct _fat_ptr s = _T2E;
	  { struct Cyc_String_pa_PrintArg_struct _T2F;
	    _T2F.tag = 0;
	    _T2F.f1 = progname;
	    _T25 = _T2F;
	  }{ struct Cyc_String_pa_PrintArg_struct _T2F = _T25;
	    { struct Cyc_String_pa_PrintArg_struct _T30;
	      _T30.tag = 0;
	      _T30.f1 = s;
	      _T26 = _T30;
	    }{ struct Cyc_String_pa_PrintArg_struct _T30 = _T26;
	      void * _T31[2];
	      _T31[0] = &_T2F;
	      _T31[1] = &_T30;
	      _T27 = Cyc_stderr;
	      _T28 = _tag_fat("%s: %s.\n",sizeof(char),9U);
	      _T29 = _tag_fat(_T31,sizeof(void *),2);
	      Cyc_fprintf(_T27,_T28,_T29);
	    }
	  }goto _LL0;
	}
      }
      _LL0: ;
    }Cyc_Arg_usage(speclist,errmsg);
    _T2A = Cyc_Arg_args;
    _T2B = _get_fat_size(_T2A,sizeof(struct _fat_ptr));
    Cyc_Arg_current = (int)_T2B;
  }
}
void Cyc_Arg_parse(struct Cyc_List_List * speclist,void (* anonfun)(struct _fat_ptr),
		   long (* anonflagfun)(struct _fat_ptr),struct _fat_ptr errmsg,
		   struct _fat_ptr orig_args) {
  struct _fat_ptr _T0;
  struct _fat_ptr _T1;
  unsigned int _T2;
  int _T3;
  unsigned char * _T4;
  struct _fat_ptr * _T5;
  unsigned char * _T6;
  char * _T7;
  int _T8;
  unsigned int _T9;
  unsigned int _TA;
  struct _fat_ptr _TB;
  int _TC;
  unsigned char * _TD;
  struct _fat_ptr * _TE;
  struct _fat_ptr _TF;
  unsigned char * _T10;
  char * _T11;
  struct _fat_ptr _T12;
  unsigned int _T13;
  struct _fat_ptr _T14;
  unsigned char * _T15;
  const char * _T16;
  char _T17;
  int _T18;
  struct _handler_cons * _T19;
  int _T1A;
  void * _T1B;
  struct Cyc_Core_Not_found_exn_struct * _T1C;
  char * _T1D;
  char * _T1E;
  long _T1F;
  int _T20;
  struct Cyc_Arg_Unknown_Arg_error_struct * _T21;
  void * _T22;
  struct Cyc_List_List * _T23;
  struct _fat_ptr _T24;
  struct _handler_cons * _T25;
  int _T26;
  void * _T27;
  int * _T28;
  unsigned int _T29;
  void * _T2A;
  void * _T2B;
  void * _T2C;
  long * _T2D;
  void * _T2E;
  long * _T2F;
  void * _T30;
  int _T31;
  unsigned int _T32;
  unsigned int _T33;
  struct _fat_ptr _T34;
  struct _fat_ptr _T35;
  int _T36;
  unsigned char * _T37;
  struct _fat_ptr * _T38;
  struct _fat_ptr _T39;
  int _T3A;
  struct Cyc_Arg_Missing_Arg_error_struct * _T3B;
  void * _T3C;
  struct Cyc_List_List * _T3D;
  struct _fat_ptr _T3E;
  void * _T3F;
  int _T40;
  unsigned int _T41;
  unsigned int _T42;
  struct _fat_ptr _T43;
  int _T44;
  unsigned char * _T45;
  struct _fat_ptr * _T46;
  struct _fat_ptr _T47;
  int _T48;
  struct Cyc_Arg_Missing_Arg_error_struct * _T49;
  void * _T4A;
  struct Cyc_List_List * _T4B;
  struct _fat_ptr _T4C;
  void * _T4D;
  struct _fat_ptr _T4E;
  int _T4F;
  unsigned char * _T50;
  struct _fat_ptr * _T51;
  int _T52;
  struct Cyc_IntPtr_sa_ScanfArg_struct _T53;
  struct _fat_ptr _T54;
  struct _fat_ptr _T55;
  struct _fat_ptr _T56;
  int _T57;
  struct Cyc_Arg_Wrong_Arg_error_struct * _T58;
  void * _T59;
  struct Cyc_List_List * _T5A;
  struct _fat_ptr _T5B;
  void * _T5C;
  int _T5D;
  unsigned int _T5E;
  unsigned int _T5F;
  struct _fat_ptr _T60;
  int _T61;
  unsigned char * _T62;
  struct _fat_ptr * _T63;
  struct _fat_ptr _T64;
  void * _T65;
  struct Cyc_Arg_Bad_exn_struct * _T66;
  char * _T67;
  char * _T68;
  int _T69;
  struct Cyc_Arg_Message_Arg_error_struct * _T6A;
  void * _T6B;
  struct Cyc_List_List * _T6C;
  struct _fat_ptr _T6D;
  struct _handler_cons * _T6E;
  int _T6F;
  void * _T70;
  struct Cyc_Arg_Bad_exn_struct * _T71;
  char * _T72;
  char * _T73;
  int _T74;
  struct Cyc_Arg_Message_Arg_error_struct * _T75;
  void * _T76;
  struct Cyc_List_List * _T77;
  struct _fat_ptr _T78;
  Cyc_Arg_args = orig_args;
  { int initpos = Cyc_Arg_current;
    _T0 = Cyc_Arg_args;
    { unsigned int l = _get_fat_size(_T0,sizeof(struct _fat_ptr));
      _T1 = Cyc_Arg_args;
      _T2 = l - 1U;
      _T3 = (int)_T2;
      _T4 = _check_fat_subscript(_T1,sizeof(struct _fat_ptr),_T3);
      _T5 = (struct _fat_ptr *)_T4;
      _T6 = _T5->curr;
      _T7 = (char *)_T6;
      if (_T7 != 0) { goto _TL57;
      }
      l = l - 1U;
      goto _TL58;
      _TL57: _TL58: Cyc_Arg_current = Cyc_Arg_current + 1;
      _TL59: _T8 = Cyc_Arg_current;
      _T9 = (unsigned int)_T8;
      _TA = l;
      if (_T9 < _TA) { goto _TL5A;
      }else { goto _TL5B;
      }
      _TL5A: _TB = Cyc_Arg_args;
      _TC = Cyc_Arg_current;
      _TD = _check_fat_subscript(_TB,sizeof(struct _fat_ptr),_TC);
      _TE = (struct _fat_ptr *)_TD;
      { struct _fat_ptr s = *_TE;
	_TF = s;
	_T10 = _TF.curr;
	_T11 = (char *)_T10;
	if (_T11 == 0) { goto _TL5C;
	}
	_T12 = s;
	_T13 = _get_fat_size(_T12,sizeof(char));
	if (_T13 < 1U) { goto _TL5C;
	}
	_T14 = s;
	_T15 = _T14.curr;
	_T16 = (const char *)_T15;
	_T17 = _T16[0];
	_T18 = (int)_T17;
	if (_T18 != 45) { goto _TL5C;
	}
	{ void * action;
	  { struct _handler_cons _T79;
	    _T19 = &_T79;
	    _push_handler(_T19);
	    { int _T7A = 0;
	      _T1A = setjmp(_T79.handler);
	      if (! _T1A) { goto _TL5E;
	      }
	      _T7A = 1;
	      goto _TL5F;
	      _TL5E: _TL5F: if (_T7A) { goto _TL60;
	      }else { goto _TL62;
	      }
	      _TL62: action = Cyc_Arg_lookup(speclist,s);
	      _pop_handler();
	      goto _TL61;
	      _TL60: _T1B = Cyc_Core_get_exn_thrown();
	      { void * _T7B = (void *)_T1B;
		void * _T7C;
		_T1C = (struct Cyc_Core_Not_found_exn_struct *)_T7B;
		_T1D = _T1C->tag;
		_T1E = Cyc_Core_Not_found;
		if (_T1D != _T1E) { goto _TL63;
		}
		_T1F = anonflagfun(s);
		if (_T1F) { goto _TL65;
		}else { goto _TL67;
		}
		_TL67: _T20 = initpos;
		{ struct Cyc_Arg_Unknown_Arg_error_struct * _T7D = _cycalloc(sizeof(struct Cyc_Arg_Unknown_Arg_error_struct));
		  _T7D->tag = 0;
		  _T7D->f1 = s;
		  _T21 = (struct Cyc_Arg_Unknown_Arg_error_struct *)_T7D;
		}_T22 = (void *)_T21;
		_T23 = speclist;
		_T24 = errmsg;
		Cyc_Arg_stop(_T20,_T22,_T23,_T24);
		return;
		_TL65: Cyc_Arg_current = Cyc_Arg_current + 1;
		goto _TL59;
		_TL63: _T7C = _T7B;
		{ void * exn = _T7C;
		  _rethrow(exn);
		};
	      }_TL61: ;
	    }
	  }{ struct _handler_cons _T79;
	    _T25 = &_T79;
	    _push_handler(_T25);
	    { int _T7A = 0;
	      _T26 = setjmp(_T79.handler);
	      if (! _T26) { goto _TL68;
	      }
	      _T7A = 1;
	      goto _TL69;
	      _TL68: _TL69: if (_T7A) { goto _TL6A;
	      }else { goto _TL6C;
	      }
	      _TL6C: { void (* _T7B)(int);
		void (* _T7C)(struct _fat_ptr,struct _fat_ptr);
		long * _T7D;
		void (* _T7E)(struct _fat_ptr);
		void (* _T7F)();
		_T27 = action;
		_T28 = (int *)_T27;
		_T29 = *_T28;
		switch (_T29) {
		case 0: 
		  _T2A = action;
		  { struct Cyc_Arg_Unit_spec_Arg_Spec_struct * _T80 = (struct Cyc_Arg_Unit_spec_Arg_Spec_struct *)_T2A;
		    _T7F = _T80->f1;
		  }{ void (* f)() = _T7F;
		    f();
		    goto _LL5;
		  }
		case 1: 
		  _T2B = action;
		  { struct Cyc_Arg_Flag_spec_Arg_Spec_struct * _T80 = (struct Cyc_Arg_Flag_spec_Arg_Spec_struct *)_T2B;
		    _T7E = _T80->f1;
		  }{ void (* f)(struct _fat_ptr) = _T7E;
		    f(s);
		    goto _LL5;
		  }
		case 3: 
		  _T2C = action;
		  { struct Cyc_Arg_Set_spec_Arg_Spec_struct * _T80 = (struct Cyc_Arg_Set_spec_Arg_Spec_struct *)_T2C;
		    _T7D = _T80->f1;
		  }{ long * r = _T7D;
		    _T2D = r;
		    *_T2D = 1;
		    goto _LL5;
		  }
		case 4: 
		  _T2E = action;
		  { struct Cyc_Arg_Clear_spec_Arg_Spec_struct * _T80 = (struct Cyc_Arg_Clear_spec_Arg_Spec_struct *)_T2E;
		    _T7D = _T80->f1;
		  }{ long * r = _T7D;
		    _T2F = r;
		    *_T2F = 0;
		    goto _LL5;
		  }
		case 2: 
		  _T30 = action;
		  { struct Cyc_Arg_FlagString_spec_Arg_Spec_struct * _T80 = (struct Cyc_Arg_FlagString_spec_Arg_Spec_struct *)_T30;
		    _T7C = _T80->f1;
		  }{ void (* f)(struct _fat_ptr,struct _fat_ptr) = _T7C;
		    _T31 = Cyc_Arg_current + 1;
		    _T32 = (unsigned int)_T31;
		    _T33 = l;
		    if (_T32 >= _T33) { goto _TL6E;
		    }
		    _T34 = s;
		    _T35 = Cyc_Arg_args;
		    _T36 = Cyc_Arg_current + 1;
		    _T37 = _check_fat_subscript(_T35,sizeof(struct _fat_ptr),
						_T36);
		    _T38 = (struct _fat_ptr *)_T37;
		    _T39 = *_T38;
		    f(_T34,_T39);
		    Cyc_Arg_current = Cyc_Arg_current + 1;
		    goto _TL6F;
		    _TL6E: _T3A = initpos;
		    { struct Cyc_Arg_Missing_Arg_error_struct * _T80 = _cycalloc(sizeof(struct Cyc_Arg_Missing_Arg_error_struct));
		      _T80->tag = 1;
		      _T80->f1 = s;
		      _T3B = (struct Cyc_Arg_Missing_Arg_error_struct *)_T80;
		    }_T3C = (void *)_T3B;
		    _T3D = speclist;
		    _T3E = errmsg;
		    Cyc_Arg_stop(_T3A,_T3C,_T3D,_T3E);
		    _TL6F: goto _LL5;
		  }
		case 5: 
		  _T3F = action;
		  { struct Cyc_Arg_String_spec_Arg_Spec_struct * _T80 = (struct Cyc_Arg_String_spec_Arg_Spec_struct *)_T3F;
		    _T7E = _T80->f1;
		  }{ void (* f)(struct _fat_ptr) = _T7E;
		    _T40 = Cyc_Arg_current + 1;
		    _T41 = (unsigned int)_T40;
		    _T42 = l;
		    if (_T41 >= _T42) { goto _TL70;
		    }
		    _T43 = Cyc_Arg_args;
		    _T44 = Cyc_Arg_current + 1;
		    _T45 = _check_fat_subscript(_T43,sizeof(struct _fat_ptr),
						_T44);
		    _T46 = (struct _fat_ptr *)_T45;
		    _T47 = *_T46;
		    f(_T47);
		    Cyc_Arg_current = Cyc_Arg_current + 1;
		    goto _TL71;
		    _TL70: _T48 = initpos;
		    { struct Cyc_Arg_Missing_Arg_error_struct * _T80 = _cycalloc(sizeof(struct Cyc_Arg_Missing_Arg_error_struct));
		      _T80->tag = 1;
		      _T80->f1 = s;
		      _T49 = (struct Cyc_Arg_Missing_Arg_error_struct *)_T80;
		    }_T4A = (void *)_T49;
		    _T4B = speclist;
		    _T4C = errmsg;
		    Cyc_Arg_stop(_T48,_T4A,_T4B,_T4C);
		    _TL71: goto _LL5;
		  }
		case 6: 
		  _T4D = action;
		  { struct Cyc_Arg_Int_spec_Arg_Spec_struct * _T80 = (struct Cyc_Arg_Int_spec_Arg_Spec_struct *)_T4D;
		    _T7B = _T80->f1;
		  }{ void (* f)(int) = _T7B;
		    _T4E = Cyc_Arg_args;
		    _T4F = Cyc_Arg_current + 1;
		    _T50 = _check_fat_subscript(_T4E,sizeof(struct _fat_ptr),
						_T4F);
		    _T51 = (struct _fat_ptr *)_T50;
		    { struct _fat_ptr arg = *_T51;
		      int n = 0;
		      { struct Cyc_IntPtr_sa_ScanfArg_struct _T80;
			_T80.tag = 2;
			_T80.f1 = &n;
			_T53 = _T80;
		      }{ struct Cyc_IntPtr_sa_ScanfArg_struct _T80 = _T53;
			void * _T81[1];
			_T81[0] = &_T80;
			_T54 = arg;
			_T55 = _tag_fat("%d",sizeof(char),3U);
			_T56 = _tag_fat(_T81,sizeof(void *),1);
			_T52 = Cyc_sscanf(_T54,_T55,_T56);
		      }if (_T52 == 1) { goto _TL72;
		      }
		      _T57 = initpos;
		      { struct Cyc_Arg_Wrong_Arg_error_struct * _T80 = _cycalloc(sizeof(struct Cyc_Arg_Wrong_Arg_error_struct));
			_T80->tag = 3;
			_T80->f1 = s;
			_T80->f2 = arg;
			_T80->f3 = _tag_fat("an integer",sizeof(char),11U);
			_T58 = (struct Cyc_Arg_Wrong_Arg_error_struct *)_T80;
		      }_T59 = (void *)_T58;
		      _T5A = speclist;
		      _T5B = errmsg;
		      Cyc_Arg_stop(_T57,_T59,_T5A,_T5B);
		      _npop_handler(0);
		      return;
		      _TL72: f(n);
		      Cyc_Arg_current = Cyc_Arg_current + 1;
		      goto _LL5;
		    }
		  }
		default: 
		  _T5C = action;
		  { struct Cyc_Arg_Rest_spec_Arg_Spec_struct * _T80 = (struct Cyc_Arg_Rest_spec_Arg_Spec_struct *)_T5C;
		    _T7E = _T80->f1;
		  }{ void (* f)(struct _fat_ptr) = _T7E;
		    _TL74: _T5D = Cyc_Arg_current;
		    _T5E = (unsigned int)_T5D;
		    _T5F = l - 1U;
		    if (_T5E < _T5F) { goto _TL75;
		    }else { goto _TL76;
		    }
		    _TL75: _T60 = Cyc_Arg_args;
		    _T61 = Cyc_Arg_current + 1;
		    _T62 = _check_fat_subscript(_T60,sizeof(struct _fat_ptr),
						_T61);
		    _T63 = (struct _fat_ptr *)_T62;
		    _T64 = *_T63;
		    f(_T64);
		    Cyc_Arg_current = Cyc_Arg_current + 1;
		    goto _TL74;
		    _TL76: goto _LL5;
		  }
		}
		_LL5: ;
	      }_pop_handler();
	      goto _TL6B;
	      _TL6A: _T65 = Cyc_Core_get_exn_thrown();
	      { void * _T7B = (void *)_T65;
		void * _T7C;
		struct _fat_ptr _T7D;
		_T66 = (struct Cyc_Arg_Bad_exn_struct *)_T7B;
		_T67 = _T66->tag;
		_T68 = Cyc_Arg_Bad;
		if (_T67 != _T68) { goto _TL77;
		}
		{ struct Cyc_Arg_Bad_exn_struct * _T7E = (struct Cyc_Arg_Bad_exn_struct *)_T7B;
		  _T7D = _T7E->f1;
		}{ struct _fat_ptr s2 = _T7D;
		  _T69 = initpos;
		  { struct Cyc_Arg_Message_Arg_error_struct * _T7E = _cycalloc(sizeof(struct Cyc_Arg_Message_Arg_error_struct));
		    _T7E->tag = 2;
		    _T7E->f1 = s2;
		    _T6A = (struct Cyc_Arg_Message_Arg_error_struct *)_T7E;
		  }_T6B = (void *)_T6A;
		  _T6C = speclist;
		  _T6D = errmsg;
		  Cyc_Arg_stop(_T69,_T6B,_T6C,_T6D);
		  goto _LL16;
		}_TL77: _T7C = _T7B;
		{ void * exn = _T7C;
		  _rethrow(exn);
		}_LL16: ;
	      }_TL6B: ;
	    }
	  }Cyc_Arg_current = Cyc_Arg_current + 1;
	}goto _TL5D;
	_TL5C: { struct _handler_cons _T79;
	  _T6E = &_T79;
	  _push_handler(_T6E);
	  { int _T7A = 0;
	    _T6F = setjmp(_T79.handler);
	    if (! _T6F) { goto _TL79;
	    }
	    _T7A = 1;
	    goto _TL7A;
	    _TL79: _TL7A: if (_T7A) { goto _TL7B;
	    }else { goto _TL7D;
	    }
	    _TL7D: anonfun(s);
	    _pop_handler();
	    goto _TL7C;
	    _TL7B: _T70 = Cyc_Core_get_exn_thrown();
	    { void * _T7B = (void *)_T70;
	      void * _T7C;
	      struct _fat_ptr _T7D;
	      _T71 = (struct Cyc_Arg_Bad_exn_struct *)_T7B;
	      _T72 = _T71->tag;
	      _T73 = Cyc_Arg_Bad;
	      if (_T72 != _T73) { goto _TL7E;
	      }
	      { struct Cyc_Arg_Bad_exn_struct * _T7E = (struct Cyc_Arg_Bad_exn_struct *)_T7B;
		_T7D = _T7E->f1;
	      }{ struct _fat_ptr s2 = _T7D;
		_T74 = initpos;
		{ struct Cyc_Arg_Message_Arg_error_struct * _T7E = _cycalloc(sizeof(struct Cyc_Arg_Message_Arg_error_struct));
		  _T7E->tag = 2;
		  _T7E->f1 = s2;
		  _T75 = (struct Cyc_Arg_Message_Arg_error_struct *)_T7E;
		}_T76 = (void *)_T75;
		_T77 = speclist;
		_T78 = errmsg;
		Cyc_Arg_stop(_T74,_T76,_T77,_T78);
		goto _LL1B;
	      }_TL7E: _T7C = _T7B;
	      { void * exn = _T7C;
		_rethrow(exn);
	      }_LL1B: ;
	    }_TL7C: ;
	  }
	}Cyc_Arg_current = Cyc_Arg_current + 1;
	_TL5D: ;
      }goto _TL59;
      _TL5B: ;
    }
  }
}
