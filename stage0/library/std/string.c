#include <cyc_include.h>
struct _fat_ptr Cyc_Core_new_string(unsigned int);
struct _fat_ptr Cyc_Core_rnew_string(struct _RegionHandle *,unsigned int);
struct _fat_ptr Cyc_Core_rqnew_string(struct _RegionHandle *,unsigned int,
				      unsigned int);
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
extern unsigned int Cyc_Core_aliasable_qual;
struct _fat_ptr Cyc_Core_mkfat(void *,unsigned int,unsigned int);
extern int toupper(int);
 struct Cyc_List_List {
  void * hd;
  struct Cyc_List_List * tl;
};
extern int Cyc_List_length(struct Cyc_List_List *);
extern struct _fat_ptr Cyc_strncpy(struct _fat_ptr,struct _fat_ptr,unsigned long);
extern struct _fat_ptr Cyc_rstrdup(struct _RegionHandle *,struct _fat_ptr);
unsigned long Cyc_strlen(struct _fat_ptr s) {
  struct _fat_ptr _T0;
  struct _fat_ptr _T1;
  unsigned char * _T2;
  const char * _T3;
  const char * _T4;
  unsigned long _T5;
  int _T6;
  char _T7;
  int _T8;
  unsigned long _T9;
  unsigned long _TA;
  unsigned long i;
  _T0 = s;
  { unsigned int sz = _get_fat_size(_T0,sizeof(char));
    i = 0U;
    _TL3: if (1) { goto _TL4;
    }else { goto _TL2;
    }
    _TL4: if (i < sz) { goto _TL1;
    }else { goto _TL2;
    }
    _TL1: _T1 = s;
    _T2 = _T1.curr;
    _T3 = (const char *)_T2;
    _T4 = _check_null(_T3);
    _T5 = i;
    _T6 = (int)_T5;
    _T7 = _T4[_T6];
    _T8 = (int)_T7;
    if (_T8 != 0) { goto _TL5;
    }
    _T9 = i;
    return _T9;
    _TL5: i = i + 1;
    goto _TL3;
    _TL2: _TA = i;
    return _TA;
  }
}
inline static unsigned int Cyc_umin(unsigned int i,unsigned int j) {
  unsigned int _T0;
  unsigned int _T1;
  if (i >= j) { goto _TL7;
  }
  _T0 = i;
  return _T0;
  _TL7: _T1 = j;
  return _T1;
}
inline static unsigned int Cyc_umax(unsigned int i,unsigned int j) {
  unsigned int _T0;
  unsigned int _T1;
  if (i <= j) { goto _TL9;
  }
  _T0 = i;
  return _T0;
  _TL9: _T1 = j;
  return _T1;
}
int Cyc_strcmp(struct _fat_ptr s1,struct _fat_ptr s2) {
  struct _fat_ptr _T0;
  unsigned char * _T1;
  char * _T2;
  struct _fat_ptr _T3;
  unsigned char * _T4;
  char * _T5;
  struct _fat_ptr _T6;
  struct _fat_ptr _T7;
  int _T8;
  unsigned int _T9;
  unsigned int _TA;
  struct _fat_ptr _TB;
  unsigned char * _TC;
  const char * _TD;
  const char * _TE;
  int _TF;
  struct _fat_ptr _T10;
  unsigned char * _T11;
  const char * _T12;
  int _T13;
  char _T14;
  int _T15;
  int _T16;
  char _T17;
  int _T18;
  char _T19;
  int _T1A;
  char _T1B;
  int _T1C;
  char _T1D;
  int _T1E;
  int _T1F;
  int _T20;
  struct _fat_ptr _T21;
  unsigned char * _T22;
  const char * _T23;
  int _T24;
  char _T25;
  int _T26;
  int _T27;
  struct _fat_ptr _T28;
  unsigned char * _T29;
  const char * _T2A;
  int _T2B;
  char _T2C;
  int _T2D;
  _T0 = s1;
  _T1 = _T0.curr;
  _T2 = (char *)_T1;
  _T3 = s2;
  _T4 = _T3.curr;
  _T5 = (char *)_T4;
  if (_T2 != _T5) { goto _TLB;
  }
  return 0;
  _TLB: { int i = 0;
    _T6 = s1;
    { unsigned int sz1 = _get_fat_size(_T6,sizeof(char));
      _T7 = s2;
      { unsigned int sz2 = _get_fat_size(_T7,sizeof(char));
	unsigned int minsz = Cyc_umin(sz1,sz2);
	_TL10: if (1) { goto _TL11;
	}else { goto _TLF;
	}
	_TL11: _T8 = i;
	_T9 = (unsigned int)_T8;
	_TA = minsz;
	if (_T9 < _TA) { goto _TLE;
	}else { goto _TLF;
	}
	_TLE: _TB = s1;
	_TC = _TB.curr;
	_TD = (const char *)_TC;
	_TE = _check_null(_TD);
	_TF = i;
	{ char c1 = _TE[_TF];
	  _T10 = s2;
	  _T11 = _T10.curr;
	  _T12 = (const char *)_T11;
	  _T13 = i;
	  { char c2 = _T12[_T13];
	    _T14 = c1;
	    _T15 = (int)_T14;
	    if (_T15 != 0) { goto _TL12;
	    }
	    _T17 = c2;
	    _T18 = (int)_T17;
	    if (_T18 != 0) { goto _TL14;
	    }
	    _T16 = 0;
	    goto _TL15;
	    _TL14: _T16 = - 1;
	    _TL15: return _T16;
	    _TL12: _T19 = c2;
	    _T1A = (int)_T19;
	    if (_T1A != 0) { goto _TL16;
	    }
	    return 1;
	    _TL16: _T1B = c1;
	    _T1C = (int)_T1B;
	    _T1D = c2;
	    _T1E = (int)_T1D;
	    { int diff = _T1C - _T1E;
	      if (diff == 0) { goto _TL18;
	      }
	      _T1F = diff;
	      return _T1F;
	      _TL18: ;
	    }
	  }
	}i = i + 1;
	goto _TL10;
	_TLF: if (sz1 != sz2) { goto _TL1A;
	}
	return 0;
	_TL1A: if (sz1 >= sz2) { goto _TL1C;
	}
	_T21 = s2;
	_T22 = _T21.curr;
	_T23 = (const char *)_T22;
	_T24 = i;
	_T25 = _T23[_T24];
	_T26 = (int)_T25;
	if (_T26 != 0) { goto _TL1E;
	}
	_T20 = 0;
	goto _TL1F;
	_TL1E: _T20 = - 1;
	_TL1F: return _T20;
	_TL1C: _T28 = s1;
	_T29 = _T28.curr;
	_T2A = (const char *)_T29;
	_T2B = i;
	_T2C = _T2A[_T2B];
	_T2D = (int)_T2C;
	if (_T2D != 0) { goto _TL20;
	}
	_T27 = 0;
	goto _TL21;
	_TL20: _T27 = 1;
	_TL21: return _T27;
      }
    }
  }
}
int Cyc_strptrcmp(struct _fat_ptr * s1,struct _fat_ptr * s2) {
  struct _fat_ptr * _T0;
  struct _fat_ptr _T1;
  struct _fat_ptr * _T2;
  struct _fat_ptr _T3;
  int _T4;
  _T0 = s1;
  _T1 = *_T0;
  _T2 = s2;
  _T3 = *_T2;
  _T4 = Cyc_strcmp(_T1,_T3);
  return _T4;
}
inline static int Cyc_ncmp(struct _fat_ptr s1,unsigned long len1,struct _fat_ptr s2,
			   unsigned long len2,unsigned long n) {
  struct _fat_ptr _T0;
  unsigned char * _T1;
  const char * _T2;
  const char * _T3;
  unsigned int _T4;
  int _T5;
  char _T6;
  int _T7;
  struct _fat_ptr _T8;
  unsigned char * _T9;
  const char * _TA;
  const char * _TB;
  unsigned int _TC;
  int _TD;
  char _TE;
  int _TF;
  int _T10;
  int _T11;
  unsigned long _T12;
  int _T13;
  unsigned long _T14;
  int _T15;
  int _T16;
  if (n > 0U) { goto _TL22;
  }
  return 0;
  _TL22: { unsigned long min_len = Cyc_umin(len1,len2);
    unsigned long bound = Cyc_umin(min_len,n);
    { unsigned int i = 0U;
      _TL27: if (i < bound) { goto _TL25;
      }else { goto _TL26;
      }
      _TL25: { int retc;
	_T0 = s1;
	_T1 = _T0.curr;
	_T2 = (const char *)_T1;
	_T3 = _check_null(_T2);
	_T4 = i;
	_T5 = (int)_T4;
	_T6 = _T3[_T5];
	_T7 = (int)_T6;
	_T8 = s2;
	_T9 = _T8.curr;
	_TA = (const char *)_T9;
	_TB = _check_null(_TA);
	_TC = i;
	_TD = (int)_TC;
	_TE = _TB[_TD];
	_TF = (int)_TE;
	retc = _T7 - _TF;
	_T10 = retc;
	if (_T10 == 0) { goto _TL28;
	}
	_T11 = retc;
	return _T11;
	_TL28: ;
      }i = i + 1;
      goto _TL27;
      _TL26: ;
    }if (len1 < n) { goto _TL2C;
    }else { goto _TL2D;
    }
    _TL2D: if (len2 < n) { goto _TL2C;
    }else { goto _TL2A;
    }
    _TL2C: _T12 = len1;
    _T13 = (int)_T12;
    _T14 = len2;
    _T15 = (int)_T14;
    _T16 = _T13 - _T15;
    return _T16;
    _TL2A: return 0;
  }
}
int Cyc_strncmp(struct _fat_ptr s1,struct _fat_ptr s2,unsigned long n) {
  int _T0;
  unsigned long len1 = Cyc_strlen(s1);
  unsigned long len2 = Cyc_strlen(s2);
  _T0 = Cyc_ncmp(s1,len1,s2,len2,n);
  return _T0;
}
int Cyc_zstrcmp(struct _fat_ptr a,struct _fat_ptr b) {
  struct _fat_ptr _T0;
  unsigned char * _T1;
  char * _T2;
  struct _fat_ptr _T3;
  unsigned char * _T4;
  char * _T5;
  struct _fat_ptr _T6;
  struct _fat_ptr _T7;
  int _T8;
  unsigned long _T9;
  unsigned long _TA;
  int _TB;
  int _TC;
  struct _fat_ptr _TD;
  unsigned char * _TE;
  const char * _TF;
  const char * _T10;
  int _T11;
  char _T12;
  int _T13;
  struct _fat_ptr _T14;
  unsigned char * _T15;
  const char * _T16;
  int _T17;
  char _T18;
  int _T19;
  int _T1A;
  unsigned long _T1B;
  int _T1C;
  unsigned long _T1D;
  int _T1E;
  int _T1F;
  _T0 = a;
  _T1 = _T0.curr;
  _T2 = (char *)_T1;
  _T3 = b;
  _T4 = _T3.curr;
  _T5 = (char *)_T4;
  if (_T2 != _T5) { goto _TL2E;
  }
  return 0;
  _TL2E: _T6 = a;
  { unsigned long as = _get_fat_size(_T6,sizeof(char));
    _T7 = b;
    { unsigned long bs = _get_fat_size(_T7,sizeof(char));
      unsigned long min_length = Cyc_umin(as,bs);
      int i = - 1;
      _TL30: i = i + 1;
      _T8 = i;
      _T9 = (unsigned long)_T8;
      _TA = min_length;
      _TB = _T9 < _TA;
      _TC = _TB;
      if (_TC) { goto _TL31;
      }else { goto _TL32;
      }
      _TL31: _TD = a;
      _TE = _TD.curr;
      _TF = (const char *)_TE;
      _T10 = _check_null(_TF);
      _T11 = i;
      _T12 = _T10[_T11];
      _T13 = (int)_T12;
      _T14 = b;
      _T15 = _T14.curr;
      _T16 = (const char *)_T15;
      _T17 = i;
      _T18 = _T16[_T17];
      _T19 = (int)_T18;
      { int diff = _T13 - _T19;
	if (diff == 0) { goto _TL33;
	}
	_T1A = diff;
	return _T1A;
	_TL33: ;
      }goto _TL30;
      _TL32: _T1B = as;
      _T1C = (int)_T1B;
      _T1D = bs;
      _T1E = (int)_T1D;
      _T1F = _T1C - _T1E;
      return _T1F;
    }
  }
}
int Cyc_zstrncmp(struct _fat_ptr s1,struct _fat_ptr s2,unsigned long n) {
  struct _fat_ptr _T0;
  struct _fat_ptr _T1;
  int _T2;
  unsigned long _T3;
  unsigned long _T4;
  struct _fat_ptr _T5;
  unsigned char * _T6;
  const char * _T7;
  const char * _T8;
  int _T9;
  char _TA;
  int _TB;
  struct _fat_ptr _TC;
  unsigned char * _TD;
  const char * _TE;
  const char * _TF;
  int _T10;
  char _T11;
  int _T12;
  int _T13;
  struct _fat_ptr _T14;
  unsigned char * _T15;
  const char * _T16;
  int _T17;
  char _T18;
  int _T19;
  struct _fat_ptr _T1A;
  unsigned char * _T1B;
  const char * _T1C;
  int _T1D;
  char _T1E;
  int _T1F;
  int _T20;
  if (n > 0U) { goto _TL35;
  }
  return 0;
  _TL35: _T0 = s1;
  { unsigned long s1size = _get_fat_size(_T0,sizeof(char));
    _T1 = s2;
    { unsigned long s2size = _get_fat_size(_T1,sizeof(char));
      unsigned long min_size = Cyc_umin(s1size,s2size);
      unsigned long bound = Cyc_umin(n,min_size);
      { int i = 0;
	_TL3A: _T2 = i;
	_T3 = (unsigned long)_T2;
	_T4 = bound;
	if (_T3 < _T4) { goto _TL38;
	}else { goto _TL39;
	}
	_TL38: _T5 = s1;
	_T6 = _T5.curr;
	_T7 = (const char *)_T6;
	_T8 = _check_null(_T7);
	_T9 = i;
	_TA = _T8[_T9];
	_TB = (int)_TA;
	_TC = s2;
	_TD = _TC.curr;
	_TE = (const char *)_TD;
	_TF = _check_null(_TE);
	_T10 = i;
	_T11 = _TF[_T10];
	_T12 = (int)_T11;
	if (_TB >= _T12) { goto _TL3B;
	}
	_T13 = - 1;
	return _T13;
	_TL3B: _T14 = s2;
	_T15 = _T14.curr;
	_T16 = (const char *)_T15;
	_T17 = i;
	_T18 = _T16[_T17];
	_T19 = (int)_T18;
	_T1A = s1;
	_T1B = _T1A.curr;
	_T1C = (const char *)_T1B;
	_T1D = i;
	_T1E = _T1C[_T1D];
	_T1F = (int)_T1E;
	if (_T19 >= _T1F) { goto _TL3D;
	}
	return 1;
	_TL3D: i = i + 1;
	goto _TL3A;
	_TL39: ;
      }if (min_size > bound) { goto _TL3F;
      }
      return 0;
      _TL3F: if (s1size >= s2size) { goto _TL41;
      }
      _T20 = - 1;
      return _T20;
      _TL41: return 1;
    }
  }
}
int Cyc_zstrptrcmp(struct _fat_ptr * a,struct _fat_ptr * b) {
  struct _fat_ptr * _T0;
  int _T1;
  struct _fat_ptr * _T2;
  int _T3;
  struct _fat_ptr * _T4;
  struct _fat_ptr _T5;
  struct _fat_ptr * _T6;
  struct _fat_ptr _T7;
  int _T8;
  _T0 = a;
  _T1 = (int)_T0;
  _T2 = b;
  _T3 = (int)_T2;
  if (_T1 != _T3) { goto _TL43;
  }
  return 0;
  _TL43: _T4 = a;
  _T5 = *_T4;
  _T6 = b;
  _T7 = *_T6;
  _T8 = Cyc_zstrcmp(_T5,_T7);
  return _T8;
}
inline static struct _fat_ptr Cyc_int_strcato(struct _fat_ptr dest,struct _fat_ptr src) {
  struct _fat_ptr _T0;
  unsigned long _T1;
  int _T2;
  struct _fat_ptr _T3;
  int _T4;
  unsigned long _T5;
  unsigned long _T6;
  struct _fat_ptr _T7;
  int _T8;
  unsigned char * _T9;
  char * _TA;
  char * _TB;
  struct _fat_ptr _TC;
  unsigned char * _TD;
  const char * _TE;
  const char * _TF;
  int _T10;
  unsigned int _T11;
  unsigned char * _T12;
  char * _T13;
  int _T14;
  unsigned long _T15;
  unsigned long _T16;
  struct _fat_ptr _T17;
  int _T18;
  unsigned char * _T19;
  char * _T1A;
  char * _T1B;
  unsigned int _T1C;
  unsigned char * _T1D;
  char * _T1E;
  struct Cyc_Core_Invalid_argument_exn_struct * _T1F;
  void * _T20;
  struct _fat_ptr _T21;
  int i;
  unsigned long dsize;
  unsigned long slen;
  unsigned long dlen;
  unsigned long dplen;
  dlen = Cyc_strlen(dest);
  _T0 = dest;
  _T1 = dlen;
  _T2 = (int)_T1;
  { struct _fat_ptr dp = _fat_ptr_plus(_T0,sizeof(char),_T2);
    _T3 = dp;
    dplen = _get_fat_size(_T3,sizeof(char));
    slen = Cyc_strlen(src);
    if (slen > dplen) { goto _TL45;
    }
    i = 0;
    _TL4A: _T4 = i;
    _T5 = (unsigned long)_T4;
    _T6 = slen;
    if (_T5 < _T6) { goto _TL48;
    }else { goto _TL49;
    }
    _TL48: _T7 = dp;
    _T8 = i;
    { struct _fat_ptr _T22 = _fat_ptr_plus(_T7,sizeof(char),_T8);
      _T9 = _T22.curr;
      _TA = (char *)_T9;
      _TB = _check_null(_TA);
      { char _T23 = *_TB;
	_TC = src;
	_TD = _TC.curr;
	_TE = (const char *)_TD;
	_TF = _check_null(_TE);
	_T10 = i;
	{ char _T24 = _TF[_T10];
	  _T11 = _get_fat_size(_T22,sizeof(char));
	  if (_T11 != 1U) { goto _TL4B;
	  }
	  if (_T23 != 0) { goto _TL4B;
	  }
	  if (_T24 == 0) { goto _TL4B;
	  }
	  _throw_arraybounds();
	  goto _TL4C;
	  _TL4B: _TL4C: _T12 = _T22.curr;
	  _T13 = (char *)_T12;
	  *_T13 = _T24;
	}
      }
    }i = i + 1;
    goto _TL4A;
    _TL49: _T14 = i;
    _T15 = (unsigned long)_T14;
    _T16 = dplen;
    if (_T15 >= _T16) { goto _TL4D;
    }
    _T17 = dp;
    _T18 = i;
    { struct _fat_ptr _T22 = _fat_ptr_plus(_T17,sizeof(char),_T18);
      _T19 = _T22.curr;
      _T1A = (char *)_T19;
      _T1B = _check_null(_T1A);
      { char _T23 = *_T1B;
	char _T24 = '\000';
	_T1C = _get_fat_size(_T22,sizeof(char));
	if (_T1C != 1U) { goto _TL4F;
	}
	if (_T23 != 0) { goto _TL4F;
	}
	if (_T24 == 0) { goto _TL4F;
	}
	_throw_arraybounds();
	goto _TL50;
	_TL4F: _TL50: _T1D = _T22.curr;
	_T1E = (char *)_T1D;
	*_T1E = _T24;
      }
    }goto _TL4E;
    _TL4D: _TL4E: goto _TL46;
    _TL45: { struct Cyc_Core_Invalid_argument_exn_struct * _T22 = _cycalloc(sizeof(struct Cyc_Core_Invalid_argument_exn_struct));
      _T22->tag = Cyc_Core_Invalid_argument;
      _T22->f1 = _tag_fat("strcat",sizeof(char),7U);
      _T1F = (struct Cyc_Core_Invalid_argument_exn_struct *)_T22;
    }_T20 = (void *)_T1F;
    _throw(_T20);
    _TL46: _T21 = dest;
    return _T21;
  }
}
struct _fat_ptr Cyc_strcat(struct _fat_ptr dest,struct _fat_ptr src) {
  struct _fat_ptr _T0;
  _T0 = Cyc_int_strcato(dest,src);
  return _T0;
}
struct _fat_ptr Cyc_rstrconcat(struct _RegionHandle * r,struct _fat_ptr a,
			       struct _fat_ptr b) {
  struct _RegionHandle * _T0;
  unsigned int _T1;
  unsigned int _T2;
  struct _fat_ptr _T3;
  unsigned int _T4;
  int _T5;
  unsigned int _T6;
  struct _fat_ptr _T7;
  unsigned int _T8;
  struct Cyc_Core_Impossible_exn_struct * _T9;
  void * _TA;
  struct _fat_ptr _TB;
  unsigned int _TC;
  int _TD;
  unsigned char * _TE;
  char * _TF;
  char * _T10;
  struct _fat_ptr _T11;
  unsigned char * _T12;
  const char * _T13;
  const char * _T14;
  unsigned int _T15;
  int _T16;
  unsigned int _T17;
  unsigned char * _T18;
  char * _T19;
  unsigned int _T1A;
  struct _fat_ptr _T1B;
  unsigned int _T1C;
  struct Cyc_Core_Impossible_exn_struct * _T1D;
  void * _T1E;
  struct _fat_ptr _T1F;
  unsigned int _T20;
  int _T21;
  unsigned char * _T22;
  char * _T23;
  char * _T24;
  struct _fat_ptr _T25;
  unsigned char * _T26;
  const char * _T27;
  const char * _T28;
  unsigned int _T29;
  int _T2A;
  unsigned int _T2B;
  unsigned char * _T2C;
  char * _T2D;
  struct _fat_ptr _T2E;
  unsigned int alen = Cyc_strlen(a);
  unsigned int blen = Cyc_strlen(b);
  _T0 = r;
  _T1 = alen + blen;
  _T2 = _T1 + 1U;
  { struct _fat_ptr ans = Cyc_Core_rnew_string(_T0,_T2);
    _T3 = ans;
    _T4 = alen;
    _T5 = (int)_T4;
    { struct _fat_ptr ansb = _fat_ptr_plus(_T3,sizeof(char),_T5);
      unsigned int i;
      unsigned int j;
      _T6 = alen;
      _T7 = ans;
      _T8 = _get_fat_size(_T7,sizeof(char));
      if (_T6 <= _T8) { goto _TL51;
      }
      { struct Cyc_Core_Impossible_exn_struct * _T2F = _cycalloc(sizeof(struct Cyc_Core_Impossible_exn_struct));
	_T2F->tag = Cyc_Core_Impossible;
	_T2F->f1 = _tag_fat("rstrconcat 1",sizeof(char),13U);
	_T9 = (struct Cyc_Core_Impossible_exn_struct *)_T2F;
      }_TA = (void *)_T9;
      _throw(_TA);
      goto _TL52;
      _TL51: _TL52: i = 0U;
      _TL56: if (i < alen) { goto _TL54;
      }else { goto _TL55;
      }
      _TL54: _TB = ans;
      _TC = i;
      _TD = (int)_TC;
      { struct _fat_ptr _T2F = _fat_ptr_plus(_TB,sizeof(char),_TD);
	_TE = _T2F.curr;
	_TF = (char *)_TE;
	_T10 = _check_null(_TF);
	{ char _T30 = *_T10;
	  _T11 = a;
	  _T12 = _T11.curr;
	  _T13 = (const char *)_T12;
	  _T14 = _check_null(_T13);
	  _T15 = i;
	  _T16 = (int)_T15;
	  { char _T31 = _T14[_T16];
	    _T17 = _get_fat_size(_T2F,sizeof(char));
	    if (_T17 != 1U) { goto _TL57;
	    }
	    if (_T30 != 0) { goto _TL57;
	    }
	    if (_T31 == 0) { goto _TL57;
	    }
	    _throw_arraybounds();
	    goto _TL58;
	    _TL57: _TL58: _T18 = _T2F.curr;
	    _T19 = (char *)_T18;
	    *_T19 = _T31;
	  }
	}
      }i = i + 1;
      goto _TL56;
      _TL55: _T1A = blen;
      _T1B = ansb;
      _T1C = _get_fat_size(_T1B,sizeof(char));
      if (_T1A <= _T1C) { goto _TL59;
      }
      { struct Cyc_Core_Impossible_exn_struct * _T2F = _cycalloc(sizeof(struct Cyc_Core_Impossible_exn_struct));
	_T2F->tag = Cyc_Core_Impossible;
	_T2F->f1 = _tag_fat("rstrconcat 1",sizeof(char),13U);
	_T1D = (struct Cyc_Core_Impossible_exn_struct *)_T2F;
      }_T1E = (void *)_T1D;
      _throw(_T1E);
      goto _TL5A;
      _TL59: _TL5A: j = 0U;
      _TL5E: if (j < blen) { goto _TL5C;
      }else { goto _TL5D;
      }
      _TL5C: _T1F = ansb;
      _T20 = j;
      _T21 = (int)_T20;
      { struct _fat_ptr _T2F = _fat_ptr_plus(_T1F,sizeof(char),_T21);
	_T22 = _T2F.curr;
	_T23 = (char *)_T22;
	_T24 = _check_null(_T23);
	{ char _T30 = *_T24;
	  _T25 = b;
	  _T26 = _T25.curr;
	  _T27 = (const char *)_T26;
	  _T28 = _check_null(_T27);
	  _T29 = j;
	  _T2A = (int)_T29;
	  { char _T31 = _T28[_T2A];
	    _T2B = _get_fat_size(_T2F,sizeof(char));
	    if (_T2B != 1U) { goto _TL5F;
	    }
	    if (_T30 != 0) { goto _TL5F;
	    }
	    if (_T31 == 0) { goto _TL5F;
	    }
	    _throw_arraybounds();
	    goto _TL60;
	    _TL5F: _TL60: _T2C = _T2F.curr;
	    _T2D = (char *)_T2C;
	    *_T2D = _T31;
	  }
	}
      }j = j + 1;
      goto _TL5E;
      _TL5D: _T2E = ans;
      return _T2E;
    }
  }
}
struct _fat_ptr Cyc_strconcat(struct _fat_ptr a,struct _fat_ptr b) {
  struct _fat_ptr _T0;
  _T0 = Cyc_rstrconcat(Cyc_Core_heap_region,a,b);
  return _T0;
}
struct _fat_ptr Cyc_rstrconcat_l(struct _RegionHandle * r,struct Cyc_List_List * strs) {
  struct _RegionHandle * _T0;
  struct Cyc_List_List * _T1;
  struct Cyc_List_List * _T2;
  struct Cyc_List_List * _T3;
  void * _T4;
  struct _fat_ptr * _T5;
  struct _fat_ptr _T6;
  unsigned long _T7;
  struct _RegionHandle * _T8;
  struct Cyc_List_List * _T9;
  unsigned long _TA;
  struct Cyc_List_List * _TB;
  struct Cyc_List_List * _TC;
  struct Cyc_List_List * _TD;
  struct Cyc_List_List * _TE;
  struct _RegionHandle * _TF;
  unsigned long _T10;
  struct Cyc_List_List * _T11;
  void * _T12;
  struct _fat_ptr * _T13;
  struct Cyc_List_List * _T14;
  void * _T15;
  struct _fat_ptr _T16;
  unsigned long _T17;
  int _T18;
  struct _fat_ptr _T19;
  struct _fat_ptr _T1A;
  struct _fat_ptr _T1B;
  unsigned long _T1C;
  unsigned long _T1D;
  struct Cyc_List_List * _T1E;
  struct Cyc_List_List * _T1F;
  unsigned long len;
  unsigned long total_len = 0U;
  struct _fat_ptr ans;
  struct _RegionHandle _T20 = _new_region(0U,"temp");
  struct _RegionHandle * temp = &_T20;
  _push_region(temp);
  { struct Cyc_List_List * lens;
    _T0 = temp;
    lens = _region_malloc(_T0,0U,sizeof(struct Cyc_List_List));
    _T1 = lens;
    _T1->hd = (void *)0U;
    _T2 = lens;
    _T2->tl = 0;
    { struct Cyc_List_List * end = lens;
      { struct Cyc_List_List * p = strs;
	_TL64: if (p != 0) { goto _TL62;
	}else { goto _TL63;
	}
	_TL62: _T3 = p;
	_T4 = _T3->hd;
	_T5 = (struct _fat_ptr *)_T4;
	_T6 = *_T5;
	len = Cyc_strlen(_T6);
	_T7 = len;
	total_len = total_len + _T7;
	{ struct Cyc_List_List * q;
	  _T8 = temp;
	  q = _region_malloc(_T8,0U,sizeof(struct Cyc_List_List));
	  _T9 = q;
	  _TA = len;
	  _T9->hd = (void *)_TA;
	  _TB = q;
	  _TB->tl = 0;
	  _TC = end;
	  _TC->tl = q;
	  end = q;
	}_TD = p;
	p = _TD->tl;
	goto _TL64;
	_TL63: ;
      }_TE = lens;
      lens = _TE->tl;
      _TF = r;
      _T10 = total_len + 1U;
      ans = Cyc_Core_rnew_string(_TF,_T10);
      { unsigned long i = 0U;
	_TL65: if (strs != 0) { goto _TL66;
	}else { goto _TL67;
	}
	_TL66: _T11 = strs;
	_T12 = _T11->hd;
	_T13 = (struct _fat_ptr *)_T12;
	{ struct _fat_ptr next = *_T13;
	  _T14 = _check_null(lens);
	  _T15 = _T14->hd;
	  len = (unsigned long)_T15;
	  _T16 = ans;
	  _T17 = i;
	  _T18 = (int)_T17;
	  _T19 = _fat_ptr_plus(_T16,sizeof(char),_T18);
	  _T1A = _fat_ptr_decrease_size(_T19,sizeof(char),1U);
	  _T1B = next;
	  _T1C = len;
	  Cyc_strncpy(_T1A,_T1B,_T1C);
	  _T1D = len;
	  i = i + _T1D;
	  _T1E = strs;
	  strs = _T1E->tl;
	  _T1F = lens;
	  lens = _T1F->tl;
	}goto _TL65;
	_TL67: ;
      }
    }
  }{ struct _fat_ptr _T21 = ans;
    _npop_handler(0);
    return _T21;
  }_pop_region();
}
struct _fat_ptr Cyc_strconcat_l(struct Cyc_List_List * strs) {
  struct _fat_ptr _T0;
  _T0 = Cyc_rstrconcat_l(Cyc_Core_heap_region,strs);
  return _T0;
}
struct _fat_ptr Cyc_rstr_sepstr(struct _RegionHandle * r,struct Cyc_List_List * strs,
				struct _fat_ptr separator) {
  struct _fat_ptr _T0;
  struct Cyc_List_List * _T1;
  struct Cyc_List_List * _T2;
  struct _RegionHandle * _T3;
  struct Cyc_List_List * _T4;
  void * _T5;
  struct _fat_ptr * _T6;
  struct _fat_ptr _T7;
  struct _fat_ptr _T8;
  struct _RegionHandle * _T9;
  struct Cyc_List_List * _TA;
  struct Cyc_List_List * _TB;
  struct Cyc_List_List * _TC;
  void * _TD;
  struct _fat_ptr * _TE;
  struct _fat_ptr _TF;
  unsigned long _T10;
  struct _RegionHandle * _T11;
  struct Cyc_List_List * _T12;
  unsigned long _T13;
  struct Cyc_List_List * _T14;
  struct Cyc_List_List * _T15;
  struct Cyc_List_List * _T16;
  struct Cyc_List_List * _T17;
  unsigned long _T18;
  unsigned long _T19;
  unsigned long _T1A;
  struct _RegionHandle * _T1B;
  unsigned long _T1C;
  struct Cyc_List_List * _T1D;
  struct Cyc_List_List * _T1E;
  struct Cyc_List_List * _T1F;
  void * _T20;
  struct _fat_ptr * _T21;
  struct Cyc_List_List * _T22;
  void * _T23;
  struct _fat_ptr _T24;
  unsigned long _T25;
  int _T26;
  struct _fat_ptr _T27;
  struct _fat_ptr _T28;
  struct _fat_ptr _T29;
  unsigned long _T2A;
  unsigned long _T2B;
  struct _fat_ptr _T2C;
  unsigned long _T2D;
  int _T2E;
  struct _fat_ptr _T2F;
  struct _fat_ptr _T30;
  struct _fat_ptr _T31;
  unsigned long _T32;
  unsigned long _T33;
  struct Cyc_List_List * _T34;
  struct Cyc_List_List * _T35;
  struct _fat_ptr _T36;
  unsigned long _T37;
  int _T38;
  struct _fat_ptr _T39;
  struct _fat_ptr _T3A;
  struct Cyc_List_List * _T3B;
  void * _T3C;
  struct _fat_ptr * _T3D;
  struct _fat_ptr _T3E;
  struct Cyc_List_List * _T3F;
  void * _T40;
  unsigned long _T41;
  if (strs != 0) { goto _TL68;
  }
  _T0 = Cyc_Core_rnew_string(r,0U);
  return _T0;
  _TL68: _T1 = strs;
  _T2 = _T1->tl;
  if (_T2 != 0) { goto _TL6A;
  }
  _T3 = r;
  _T4 = strs;
  _T5 = _T4->hd;
  _T6 = (struct _fat_ptr *)_T5;
  _T7 = *_T6;
  _T8 = Cyc_rstrdup(_T3,_T7);
  return _T8;
  _TL6A: { struct Cyc_List_List * p = strs;
    struct _RegionHandle _T42 = _new_region(0U,"temp");
    struct _RegionHandle * temp = &_T42;
    _push_region(temp);
    { struct Cyc_List_List * lens;
      _T9 = temp;
      lens = _region_malloc(_T9,0U,sizeof(struct Cyc_List_List));
      _TA = lens;
      _TA->hd = (void *)0U;
      _TB = lens;
      _TB->tl = 0;
      { struct Cyc_List_List * end = lens;
	unsigned long len;
	unsigned long total_len = 0U;
	unsigned long list_len = 0U;
	_TL6F: if (p != 0) { goto _TL6D;
	}else { goto _TL6E;
	}
	_TL6D: _TC = p;
	_TD = _TC->hd;
	_TE = (struct _fat_ptr *)_TD;
	_TF = *_TE;
	len = Cyc_strlen(_TF);
	_T10 = len;
	total_len = total_len + _T10;
	{ struct Cyc_List_List * q;
	  _T11 = temp;
	  q = _region_malloc(_T11,0U,sizeof(struct Cyc_List_List));
	  _T12 = q;
	  _T13 = len;
	  _T12->hd = (void *)_T13;
	  _T14 = q;
	  _T14->tl = 0;
	  _T15 = end;
	  _T15->tl = q;
	  end = q;
	  list_len = list_len + 1;
	}_T16 = p;
	p = _T16->tl;
	goto _TL6F;
	_TL6E: _T17 = lens;
	lens = _T17->tl;
	{ unsigned long seplen = Cyc_strlen(separator);
	  _T18 = list_len - 1U;
	  _T19 = seplen;
	  _T1A = _T18 * _T19;
	  total_len = total_len + _T1A;
	  _T1B = r;
	  _T1C = total_len + 1U;
	  { struct _fat_ptr ans = Cyc_Core_rnew_string(_T1B,_T1C);
	    unsigned long i = 0U;
	    _TL70: _T1D = _check_null(strs);
	    _T1E = _T1D->tl;
	    if (_T1E != 0) { goto _TL71;
	    }else { goto _TL72;
	    }
	    _TL71: _T1F = strs;
	    _T20 = _T1F->hd;
	    _T21 = (struct _fat_ptr *)_T20;
	    { struct _fat_ptr next = *_T21;
	      _T22 = _check_null(lens);
	      _T23 = _T22->hd;
	      len = (unsigned long)_T23;
	      _T24 = ans;
	      _T25 = i;
	      _T26 = (int)_T25;
	      _T27 = _fat_ptr_plus(_T24,sizeof(char),_T26);
	      _T28 = _fat_ptr_decrease_size(_T27,sizeof(char),1U);
	      _T29 = next;
	      _T2A = len;
	      Cyc_strncpy(_T28,_T29,_T2A);
	      _T2B = len;
	      i = i + _T2B;
	      _T2C = ans;
	      _T2D = i;
	      _T2E = (int)_T2D;
	      _T2F = _fat_ptr_plus(_T2C,sizeof(char),_T2E);
	      _T30 = _fat_ptr_decrease_size(_T2F,sizeof(char),1U);
	      _T31 = separator;
	      _T32 = seplen;
	      Cyc_strncpy(_T30,_T31,_T32);
	      _T33 = seplen;
	      i = i + _T33;
	      _T34 = strs;
	      strs = _T34->tl;
	      _T35 = lens;
	      lens = _T35->tl;
	    }goto _TL70;
	    _TL72: _T36 = ans;
	    _T37 = i;
	    _T38 = (int)_T37;
	    _T39 = _fat_ptr_plus(_T36,sizeof(char),_T38);
	    _T3A = _fat_ptr_decrease_size(_T39,sizeof(char),1U);
	    _T3B = strs;
	    _T3C = _T3B->hd;
	    _T3D = (struct _fat_ptr *)_T3C;
	    _T3E = *_T3D;
	    _T3F = _check_null(lens);
	    _T40 = _T3F->hd;
	    _T41 = (unsigned long)_T40;
	    Cyc_strncpy(_T3A,_T3E,_T41);
	    { struct _fat_ptr _T43 = ans;
	      _npop_handler(0);
	      return _T43;
	    }
	  }
	}
      }
    }_pop_region();
  }
}
struct _fat_ptr Cyc_str_sepstr(struct Cyc_List_List * strs,struct _fat_ptr separator) {
  struct _fat_ptr _T0;
  _T0 = Cyc_rstr_sepstr(Cyc_Core_heap_region,strs,separator);
  return _T0;
}
struct _fat_ptr Cyc_strncpy(struct _fat_ptr dest,struct _fat_ptr src,unsigned long n) {
  unsigned long _T0;
  struct _fat_ptr _T1;
  unsigned int _T2;
  unsigned long _T3;
  struct _fat_ptr _T4;
  unsigned int _T5;
  struct Cyc_Core_Invalid_argument_exn_struct * _T6;
  void * _T7;
  struct _fat_ptr _T8;
  unsigned char * _T9;
  const char * _TA;
  const char * _TB;
  unsigned int _TC;
  int _TD;
  char _TE;
  int _TF;
  struct _fat_ptr _T10;
  unsigned char * _T11;
  char * _T12;
  char * _T13;
  unsigned int _T14;
  int _T15;
  struct _fat_ptr _T16;
  unsigned char * _T17;
  char * _T18;
  char * _T19;
  unsigned int _T1A;
  int _T1B;
  struct _fat_ptr _T1C;
  unsigned int i;
  _T0 = n;
  _T1 = src;
  _T2 = _get_fat_size(_T1,sizeof(char));
  if (_T0 > _T2) { goto _TL75;
  }else { goto _TL76;
  }
  _TL76: _T3 = n;
  _T4 = dest;
  _T5 = _get_fat_size(_T4,sizeof(char));
  if (_T3 > _T5) { goto _TL75;
  }else { goto _TL73;
  }
  _TL75: { struct Cyc_Core_Invalid_argument_exn_struct * _T1D = _cycalloc(sizeof(struct Cyc_Core_Invalid_argument_exn_struct));
    _T1D->tag = Cyc_Core_Invalid_argument;
    _T1D->f1 = _tag_fat("strncpy",sizeof(char),8U);
    _T6 = (struct Cyc_Core_Invalid_argument_exn_struct *)_T1D;
  }_T7 = (void *)_T6;
  _throw(_T7);
  goto _TL74;
  _TL73: _TL74: i = 0U;
  _TL7A: if (i < n) { goto _TL78;
  }else { goto _TL79;
  }
  _TL78: _T8 = src;
  _T9 = _T8.curr;
  _TA = (const char *)_T9;
  _TB = _check_null(_TA);
  _TC = i;
  _TD = (int)_TC;
  { char srcChar = _TB[_TD];
    _TE = srcChar;
    _TF = (int)_TE;
    if (_TF != 0) { goto _TL7B;
    }
    goto _TL79;
    _TL7B: _T10 = dest;
    _T11 = _T10.curr;
    _T12 = (char *)_T11;
    _T13 = _check_null(_T12);
    _T14 = i;
    _T15 = (int)_T14;
    _T13[_T15] = srcChar;
  }i = i + 1;
  goto _TL7A;
  _TL79: _TL80: if (i < n) { goto _TL7E;
  }else { goto _TL7F;
  }
  _TL7E: _T16 = dest;
  _T17 = _T16.curr;
  _T18 = (char *)_T17;
  _T19 = _check_null(_T18);
  _T1A = i;
  _T1B = (int)_T1A;
  _T19[_T1B] = '\000';
  i = i + 1;
  goto _TL80;
  _TL7F: _T1C = dest;
  return _T1C;
}
struct _fat_ptr Cyc_zstrncpy(struct _fat_ptr dest,struct _fat_ptr src,unsigned long n) {
  unsigned long _T0;
  struct _fat_ptr _T1;
  unsigned int _T2;
  unsigned long _T3;
  struct _fat_ptr _T4;
  unsigned int _T5;
  struct Cyc_Core_Invalid_argument_exn_struct * _T6;
  void * _T7;
  struct _fat_ptr _T8;
  unsigned char * _T9;
  char * _TA;
  char * _TB;
  unsigned int _TC;
  int _TD;
  struct _fat_ptr _TE;
  unsigned char * _TF;
  const char * _T10;
  const char * _T11;
  unsigned int _T12;
  int _T13;
  struct _fat_ptr _T14;
  _T0 = n;
  _T1 = dest;
  _T2 = _get_fat_size(_T1,sizeof(char));
  if (_T0 > _T2) { goto _TL83;
  }else { goto _TL84;
  }
  _TL84: _T3 = n;
  _T4 = src;
  _T5 = _get_fat_size(_T4,sizeof(char));
  if (_T3 > _T5) { goto _TL83;
  }else { goto _TL81;
  }
  _TL83: { struct Cyc_Core_Invalid_argument_exn_struct * _T15 = _cycalloc(sizeof(struct Cyc_Core_Invalid_argument_exn_struct));
    _T15->tag = Cyc_Core_Invalid_argument;
    _T15->f1 = _tag_fat("zstrncpy",sizeof(char),9U);
    _T6 = (struct Cyc_Core_Invalid_argument_exn_struct *)_T15;
  }_T7 = (void *)_T6;
  _throw(_T7);
  goto _TL82;
  _TL81: _TL82: { unsigned int i;
    i = 0U;
    _TL88: if (i < n) { goto _TL86;
    }else { goto _TL87;
    }
    _TL86: _T8 = dest;
    _T9 = _T8.curr;
    _TA = (char *)_T9;
    _TB = _check_null(_TA);
    _TC = i;
    _TD = (int)_TC;
    _TE = src;
    _TF = _TE.curr;
    _T10 = (const char *)_TF;
    _T11 = _check_null(_T10);
    _T12 = i;
    _T13 = (int)_T12;
    _TB[_TD] = _T11[_T13];
    i = i + 1;
    goto _TL88;
    _TL87: _T14 = dest;
    return _T14;
  }
}
struct _fat_ptr Cyc_strcpy(struct _fat_ptr dest,struct _fat_ptr src) {
  struct _fat_ptr _T0;
  struct _fat_ptr _T1;
  struct _fat_ptr _T2;
  unsigned char * _T3;
  const char * _T4;
  const char * _T5;
  unsigned int _T6;
  int _T7;
  struct _fat_ptr _T8;
  unsigned int _T9;
  int _TA;
  unsigned char * _TB;
  char * _TC;
  char * _TD;
  unsigned int _TE;
  unsigned char * _TF;
  char * _T10;
  char _T11;
  int _T12;
  struct _fat_ptr _T13;
  struct _fat_ptr _T14;
  struct _fat_ptr _T15;
  unsigned long _T16;
  unsigned long _T17;
  struct _fat_ptr _T18;
  unsigned int _T19;
  struct _fat_ptr _T1A;
  unsigned long _T1B;
  int _T1C;
  unsigned char * _T1D;
  char * _T1E;
  char * _T1F;
  unsigned int _T20;
  unsigned char * _T21;
  char * _T22;
  struct _fat_ptr _T23;
  _T0 = src;
  { unsigned int ssz = _get_fat_size(_T0,sizeof(char));
    _T1 = dest;
    { unsigned int dsz = _get_fat_size(_T1,sizeof(char));
      if (ssz > dsz) { goto _TL89;
      }
      { unsigned int i;
	i = 0U;
	_TL8E: if (i < ssz) { goto _TL8C;
	}else { goto _TL8D;
	}
	_TL8C: _T2 = src;
	_T3 = _T2.curr;
	_T4 = (const char *)_T3;
	_T5 = _check_null(_T4);
	_T6 = i;
	_T7 = (int)_T6;
	{ char srcChar = _T5[_T7];
	  _T8 = dest;
	  _T9 = i;
	  _TA = (int)_T9;
	  { struct _fat_ptr _T24 = _fat_ptr_plus(_T8,sizeof(char),_TA);
	    _TB = _T24.curr;
	    _TC = (char *)_TB;
	    _TD = _check_null(_TC);
	    { char _T25 = *_TD;
	      char _T26 = srcChar;
	      _TE = _get_fat_size(_T24,sizeof(char));
	      if (_TE != 1U) { goto _TL8F;
	      }
	      if (_T25 != 0) { goto _TL8F;
	      }
	      if (_T26 == 0) { goto _TL8F;
	      }
	      _throw_arraybounds();
	      goto _TL90;
	      _TL8F: _TL90: _TF = _T24.curr;
	      _T10 = (char *)_TF;
	      *_T10 = _T26;
	    }
	  }_T11 = srcChar;
	  _T12 = (int)_T11;
	  if (_T12 != 0) { goto _TL91;
	  }
	  goto _TL8D;
	  _TL91: ;
	}i = i + 1;
	goto _TL8E;
	_TL8D: ;
      }goto _TL8A;
      _TL89: { unsigned long len = Cyc_strlen(src);
	_T13 = dest;
	_T14 = _fat_ptr_decrease_size(_T13,sizeof(char),1U);
	_T15 = src;
	_T16 = len;
	Cyc_strncpy(_T14,_T15,_T16);
	_T17 = len;
	_T18 = dest;
	_T19 = _get_fat_size(_T18,sizeof(char));
	if (_T17 >= _T19) { goto _TL93;
	}
	_T1A = dest;
	_T1B = len;
	_T1C = (int)_T1B;
	{ struct _fat_ptr _T24 = _fat_ptr_plus(_T1A,sizeof(char),_T1C);
	  _T1D = _T24.curr;
	  _T1E = (char *)_T1D;
	  _T1F = _check_null(_T1E);
	  { char _T25 = *_T1F;
	    char _T26 = '\000';
	    _T20 = _get_fat_size(_T24,sizeof(char));
	    if (_T20 != 1U) { goto _TL95;
	    }
	    if (_T25 != 0) { goto _TL95;
	    }
	    if (_T26 == 0) { goto _TL95;
	    }
	    _throw_arraybounds();
	    goto _TL96;
	    _TL95: _TL96: _T21 = _T24.curr;
	    _T22 = (char *)_T21;
	    *_T22 = _T26;
	  }
	}goto _TL94;
	_TL93: _TL94: ;
      }_TL8A: _T23 = dest;
      return _T23;
    }
  }
}
struct _fat_ptr Cyc_rstrdup(struct _RegionHandle * r,struct _fat_ptr src) {
  struct _RegionHandle * _T0;
  unsigned long _T1;
  struct _fat_ptr _T2;
  struct _fat_ptr _T3;
  unsigned long len;
  struct _fat_ptr temp;
  len = Cyc_strlen(src);
  _T0 = r;
  _T1 = len + 1U;
  temp = Cyc_Core_rnew_string(_T0,_T1);
  _T2 = temp;
  { struct _fat_ptr temp2 = _fat_ptr_decrease_size(_T2,sizeof(char),1U);
    struct _fat_ptr _T4;
    _T4 = temp2;
    { struct _fat_ptr dst = _T4;
      Cyc_strncpy(dst,src,len);
    }
  }_T3 = temp;
  return _T3;
}
struct _fat_ptr Cyc_rqstrdup(struct _RegionHandle * r,unsigned int q,struct _fat_ptr src) {
  struct _RegionHandle * _T0;
  unsigned int _T1;
  unsigned long _T2;
  struct _fat_ptr _T3;
  struct _fat_ptr _T4;
  unsigned long len = Cyc_strlen(src);
  _T0 = r;
  _T1 = q;
  _T2 = len + 1U;
  { struct _fat_ptr temp = Cyc_Core_rqnew_string(_T0,_T1,_T2);
    _T3 = temp;
    { struct _fat_ptr temp2 = _fat_ptr_decrease_size(_T3,sizeof(char),1U);
      struct _fat_ptr _T5;
      _T5 = temp2;
      { struct _fat_ptr dst = _T5;
	Cyc_strncpy(dst,src,len);
      }
    }_T4 = temp;
    return _T4;
  }
}
struct _fat_ptr Cyc_strdup(struct _fat_ptr src) {
  struct _fat_ptr _T0;
  _T0 = Cyc_rstrdup(Cyc_Core_heap_region,src);
  return _T0;
}
struct _fat_ptr Cyc_rqrealloc(struct _RegionHandle * r,unsigned int q,struct _fat_ptr s,
			      unsigned long sz) {
  struct _fat_ptr _T0;
  unsigned long _T1;
  struct _fat_ptr _T2;
  struct _RegionHandle * _T3;
  unsigned int _T4;
  void * _T5;
  struct _fat_ptr _T6;
  struct _fat_ptr _T7;
  struct _fat_ptr _T8;
  unsigned long _T9;
  struct _fat_ptr _TA;
  struct _fat_ptr temp;
  unsigned long slen;
  _T0 = s;
  slen = _get_fat_size(_T0,sizeof(char));
  if (sz <= slen) { goto _TL97;
  }
  _T1 = sz;
  goto _TL98;
  _TL97: _T1 = slen;
  _TL98: sz = _T1;
  { unsigned int _TB = sz;
    _T3 = r;
    _T4 = q;
    _T5 = _region_calloc(_T3,_T4,sizeof(char),_TB);
    _T2 = _tag_fat(_T5,sizeof(char),_TB);
  }temp = _T2;
  { struct _fat_ptr _TB;
    _TB = temp;
    { struct _fat_ptr dst = _TB;
      _T6 = dst;
      _T7 = _T6;
      _T8 = s;
      _T9 = slen;
      Cyc_strncpy(_T7,_T8,_T9);
    }
  }_TA = temp;
  return _TA;
}
struct _fat_ptr Cyc_rrealloc(struct _RegionHandle * r,struct _fat_ptr s,unsigned long sz) {
  struct _fat_ptr _T0;
  _T0 = Cyc_rqrealloc(r,Cyc_Core_aliasable_qual,s,sz);
  return _T0;
}
struct _fat_ptr Cyc_rexpand(struct _RegionHandle * r,struct _fat_ptr s,unsigned long sz) {
  unsigned long _T0;
  struct _fat_ptr _T1;
  struct _fat_ptr _T2;
  struct _fat_ptr _T3;
  unsigned long _T4;
  unsigned long _T5;
  struct _fat_ptr _T6;
  unsigned int _T7;
  struct _fat_ptr _T8;
  unsigned long _T9;
  int _TA;
  unsigned char * _TB;
  char * _TC;
  char * _TD;
  unsigned int _TE;
  unsigned char * _TF;
  char * _T10;
  struct _fat_ptr _T11;
  struct _fat_ptr temp;
  unsigned long slen;
  slen = Cyc_strlen(s);
  if (sz <= slen) { goto _TL99;
  }
  _T0 = sz;
  goto _TL9A;
  _TL99: _T0 = slen;
  _TL9A: sz = _T0;
  temp = Cyc_Core_rnew_string(r,sz);
  { struct _fat_ptr _T12;
    _T12 = temp;
    { struct _fat_ptr dst = _T12;
      _T1 = dst;
      _T2 = _T1;
      _T3 = s;
      _T4 = slen;
      Cyc_strncpy(_T2,_T3,_T4);
    }
  }_T5 = slen;
  _T6 = s;
  _T7 = _get_fat_size(_T6,sizeof(char));
  if (_T5 == _T7) { goto _TL9B;
  }
  _T8 = temp;
  _T9 = slen;
  _TA = (int)_T9;
  { struct _fat_ptr _T12 = _fat_ptr_plus(_T8,sizeof(char),_TA);
    _TB = _T12.curr;
    _TC = (char *)_TB;
    _TD = _check_null(_TC);
    { char _T13 = *_TD;
      char _T14 = '\000';
      _TE = _get_fat_size(_T12,sizeof(char));
      if (_TE != 1U) { goto _TL9D;
      }
      if (_T13 != 0) { goto _TL9D;
      }
      if (_T14 == 0) { goto _TL9D;
      }
      _throw_arraybounds();
      goto _TL9E;
      _TL9D: _TL9E: _TF = _T12.curr;
      _T10 = (char *)_TF;
      *_T10 = _T14;
    }
  }goto _TL9C;
  _TL9B: _TL9C: _T11 = temp;
  return _T11;
}
struct _fat_ptr Cyc_expand(struct _fat_ptr s,unsigned long sz) {
  struct _fat_ptr _T0;
  _T0 = Cyc_rexpand(Cyc_Core_heap_region,s,sz);
  return _T0;
}
struct _fat_ptr Cyc_cond_rrealloc_str(struct _RegionHandle * r,struct _fat_ptr str,
				      unsigned long sz) {
  struct _fat_ptr _T0;
  struct _fat_ptr _T1;
  unsigned char * _T2;
  char * _T3;
  char * _T4;
  unsigned int _T5;
  unsigned char * _T6;
  char * _T7;
  unsigned long _T8;
  unsigned long _T9;
  unsigned long _TA;
  unsigned long _TB;
  unsigned long _TC;
  struct _fat_ptr _TD;
  _T0 = str;
  { unsigned long maxsizeP = _get_fat_size(_T0,sizeof(char));
    struct _fat_ptr res = _tag_fat(0,0,0);
    if (maxsizeP != 0U) { goto _TL9F;
    }
    maxsizeP = Cyc_umax(30U,sz);
    res = Cyc_Core_rnew_string(r,maxsizeP);
    _T1 = res;
    { struct _fat_ptr _TE = _fat_ptr_plus(_T1,sizeof(char),0);
      _T2 = _TE.curr;
      _T3 = (char *)_T2;
      _T4 = _check_null(_T3);
      { char _TF = *_T4;
	char _T10 = '\000';
	_T5 = _get_fat_size(_TE,sizeof(char));
	if (_T5 != 1U) { goto _TLA1;
	}
	if (_TF != 0) { goto _TLA1;
	}
	if (_T10 == 0) { goto _TLA1;
	}
	_throw_arraybounds();
	goto _TLA2;
	_TLA1: _TLA2: _T6 = _TE.curr;
	_T7 = (char *)_T6;
	*_T7 = _T10;
      }
    }goto _TLA0;
    _TL9F: if (sz <= maxsizeP) { goto _TLA3;
    }
    _T9 = maxsizeP * 2U;
    _TA = sz * 5U;
    _TB = _TA / 4U;
    if (_T9 <= _TB) { goto _TLA5;
    }
    _T8 = maxsizeP * 2U;
    goto _TLA6;
    _TLA5: _TC = sz * 5U;
    _T8 = _TC / 4U;
    _TLA6: maxsizeP = _T8;
    { struct _fat_ptr _TE;
      _TE = str;
      { struct _fat_ptr dst = _TE;
	res = Cyc_rexpand(r,dst,maxsizeP);
      }
    }goto _TLA4;
    _TLA3: _TLA4: _TLA0: _TD = res;
    return _TD;
  }
}
struct _fat_ptr Cyc_realloc_str(struct _fat_ptr str,unsigned long sz) {
  struct _fat_ptr _T0;
  unsigned char * _T1;
  char * _T2;
  struct _fat_ptr _T3;
  struct _fat_ptr _T4;
  struct _fat_ptr res = Cyc_cond_rrealloc_str(Cyc_Core_heap_region,str,sz);
  _T0 = res;
  _T1 = _T0.curr;
  _T2 = (char *)_T1;
  if (_T2 != 0) { goto _TLA7;
  }
  _T3 = str;
  return _T3;
  _TLA7: _T4 = res;
  return _T4;
}
struct _fat_ptr Cyc_rsubstring(struct _RegionHandle * r,struct _fat_ptr s,
			       int start,unsigned long amt) {
  struct _RegionHandle * _T0;
  unsigned long _T1;
  struct _fat_ptr _T2;
  int _T3;
  unsigned long _T4;
  struct _fat_ptr _T5;
  unsigned int _T6;
  unsigned long _T7;
  struct _fat_ptr _T8;
  unsigned int _T9;
  struct Cyc_Core_Invalid_argument_exn_struct * _TA;
  void * _TB;
  struct _fat_ptr _TC;
  unsigned long _TD;
  int _TE;
  unsigned char * _TF;
  char * _T10;
  char * _T11;
  struct _fat_ptr _T12;
  unsigned char * _T13;
  const char * _T14;
  const char * _T15;
  unsigned long _T16;
  int _T17;
  unsigned int _T18;
  unsigned char * _T19;
  char * _T1A;
  struct _fat_ptr _T1B;
  unsigned long _T1C;
  int _T1D;
  unsigned char * _T1E;
  char * _T1F;
  char * _T20;
  unsigned int _T21;
  unsigned char * _T22;
  char * _T23;
  struct _fat_ptr _T24;
  _T0 = r;
  _T1 = amt + 1U;
  { struct _fat_ptr ans = Cyc_Core_rnew_string(_T0,_T1);
    _T2 = s;
    _T3 = start;
    s = _fat_ptr_plus(_T2,sizeof(char),_T3);
    _T4 = amt;
    _T5 = ans;
    _T6 = _get_fat_size(_T5,sizeof(char));
    if (_T4 > _T6) { goto _TLAB;
    }else { goto _TLAC;
    }
    _TLAC: _T7 = amt;
    _T8 = s;
    _T9 = _get_fat_size(_T8,sizeof(char));
    if (_T7 > _T9) { goto _TLAB;
    }else { goto _TLA9;
    }
    _TLAB: { struct Cyc_Core_Invalid_argument_exn_struct * _T25 = _cycalloc(sizeof(struct Cyc_Core_Invalid_argument_exn_struct));
      _T25->tag = Cyc_Core_Invalid_argument;
      _T25->f1 = _tag_fat("rsubstring",sizeof(char),11U);
      _TA = (struct Cyc_Core_Invalid_argument_exn_struct *)_T25;
    }_TB = (void *)_TA;
    _throw(_TB);
    goto _TLAA;
    _TLA9: _TLAA: { unsigned long i = 0U;
      _TLB0: if (i < amt) { goto _TLAE;
      }else { goto _TLAF;
      }
      _TLAE: _TC = ans;
      _TD = i;
      _TE = (int)_TD;
      { struct _fat_ptr _T25 = _fat_ptr_plus(_TC,sizeof(char),_TE);
	_TF = _T25.curr;
	_T10 = (char *)_TF;
	_T11 = _check_null(_T10);
	{ char _T26 = *_T11;
	  _T12 = s;
	  _T13 = _T12.curr;
	  _T14 = (const char *)_T13;
	  _T15 = _check_null(_T14);
	  _T16 = i;
	  _T17 = (int)_T16;
	  { char _T27 = _T15[_T17];
	    _T18 = _get_fat_size(_T25,sizeof(char));
	    if (_T18 != 1U) { goto _TLB1;
	    }
	    if (_T26 != 0) { goto _TLB1;
	    }
	    if (_T27 == 0) { goto _TLB1;
	    }
	    _throw_arraybounds();
	    goto _TLB2;
	    _TLB1: _TLB2: _T19 = _T25.curr;
	    _T1A = (char *)_T19;
	    *_T1A = _T27;
	  }
	}
      }i = i + 1;
      goto _TLB0;
      _TLAF: ;
    }_T1B = ans;
    _T1C = amt;
    _T1D = (int)_T1C;
    { struct _fat_ptr _T25 = _fat_ptr_plus(_T1B,sizeof(char),_T1D);
      _T1E = _T25.curr;
      _T1F = (char *)_T1E;
      _T20 = _check_null(_T1F);
      { char _T26 = *_T20;
	char _T27 = '\000';
	_T21 = _get_fat_size(_T25,sizeof(char));
	if (_T21 != 1U) { goto _TLB3;
	}
	if (_T26 != 0) { goto _TLB3;
	}
	if (_T27 == 0) { goto _TLB3;
	}
	_throw_arraybounds();
	goto _TLB4;
	_TLB3: _TLB4: _T22 = _T25.curr;
	_T23 = (char *)_T22;
	*_T23 = _T27;
      }
    }_T24 = ans;
    return _T24;
  }
}
struct _fat_ptr Cyc_substring(struct _fat_ptr s,int start,unsigned long amt) {
  struct _fat_ptr _T0;
  _T0 = Cyc_rsubstring(Cyc_Core_heap_region,s,start,amt);
  return _T0;
}
struct _fat_ptr Cyc_rreplace_suffix(struct _RegionHandle * r,struct _fat_ptr src,
				    struct _fat_ptr curr_suffix,struct _fat_ptr new_suffix) {
  struct _fat_ptr _T0;
  struct _fat_ptr _T1;
  struct Cyc_Core_Invalid_argument_exn_struct * _T2;
  void * _T3;
  struct _fat_ptr _T4;
  unsigned long _T5;
  int _T6;
  unsigned char * _T7;
  const char * _T8;
  char _T9;
  int _TA;
  struct _fat_ptr _TB;
  unsigned long _TC;
  int _TD;
  unsigned char * _TE;
  const char * _TF;
  char _T10;
  int _T11;
  struct Cyc_Core_Invalid_argument_exn_struct * _T12;
  void * _T13;
  struct _RegionHandle * _T14;
  unsigned long _T15;
  struct _fat_ptr _T16;
  unsigned int _T17;
  unsigned long _T18;
  unsigned long _T19;
  struct _fat_ptr _T1A;
  struct _fat_ptr _T1B;
  struct _fat_ptr _T1C;
  unsigned long _T1D;
  struct _fat_ptr _T1E;
  unsigned long _T1F;
  int _T20;
  struct _fat_ptr _T21;
  struct _fat_ptr _T22;
  struct _fat_ptr _T23;
  struct _fat_ptr _T24;
  unsigned int _T25;
  struct _fat_ptr _T26;
  _T0 = src;
  { unsigned long m = _get_fat_size(_T0,sizeof(char));
    _T1 = curr_suffix;
    { unsigned long n = _get_fat_size(_T1,sizeof(char));
      struct _fat_ptr err = _tag_fat("replace_suffix",sizeof(char),15U);
      if (m >= n) { goto _TLB5;
      }
      { struct Cyc_Core_Invalid_argument_exn_struct * _T27 = _cycalloc(sizeof(struct Cyc_Core_Invalid_argument_exn_struct));
	_T27->tag = Cyc_Core_Invalid_argument;
	_T27->f1 = err;
	_T2 = (struct Cyc_Core_Invalid_argument_exn_struct *)_T27;
      }_T3 = (void *)_T2;
      _throw(_T3);
      goto _TLB6;
      _TLB5: _TLB6: { unsigned long i = 1U;
	_TLBA: if (i <= n) { goto _TLB8;
	}else { goto _TLB9;
	}
	_TLB8: _T4 = src;
	_T5 = m - i;
	_T6 = (int)_T5;
	_T7 = _check_fat_subscript(_T4,sizeof(char),_T6);
	_T8 = (const char *)_T7;
	_T9 = *_T8;
	_TA = (int)_T9;
	_TB = curr_suffix;
	_TC = n - i;
	_TD = (int)_TC;
	_TE = _check_fat_subscript(_TB,sizeof(char),_TD);
	_TF = (const char *)_TE;
	_T10 = *_TF;
	_T11 = (int)_T10;
	if (_TA == _T11) { goto _TLBB;
	}
	{ struct Cyc_Core_Invalid_argument_exn_struct * _T27 = _cycalloc(sizeof(struct Cyc_Core_Invalid_argument_exn_struct));
	  _T27->tag = Cyc_Core_Invalid_argument;
	  _T27->f1 = err;
	  _T12 = (struct Cyc_Core_Invalid_argument_exn_struct *)_T27;
	}_T13 = (void *)_T12;
	_throw(_T13);
	goto _TLBC;
	_TLBB: _TLBC: i = i + 1;
	goto _TLBA;
	_TLB9: ;
      }_T14 = r;
      _T15 = m - n;
      _T16 = new_suffix;
      _T17 = _get_fat_size(_T16,sizeof(char));
      _T18 = _T15 + _T17;
      _T19 = _T18 + 1U;
      { struct _fat_ptr ans = Cyc_Core_rnew_string(_T14,_T19);
	_T1A = ans;
	_T1B = _fat_ptr_decrease_size(_T1A,sizeof(char),1U);
	_T1C = src;
	_T1D = m - n;
	Cyc_strncpy(_T1B,_T1C,_T1D);
	_T1E = ans;
	_T1F = m - n;
	_T20 = (int)_T1F;
	_T21 = _fat_ptr_plus(_T1E,sizeof(char),_T20);
	_T22 = _fat_ptr_decrease_size(_T21,sizeof(char),1U);
	_T23 = new_suffix;
	_T24 = new_suffix;
	_T25 = _get_fat_size(_T24,sizeof(char));
	Cyc_strncpy(_T22,_T23,_T25);
	_T26 = ans;
	return _T26;
      }
    }
  }
}
struct _fat_ptr Cyc_replace_suffix(struct _fat_ptr src,struct _fat_ptr curr_suffix,
				   struct _fat_ptr new_suffix) {
  struct _fat_ptr _T0;
  _T0 = Cyc_rreplace_suffix(Cyc_Core_heap_region,src,curr_suffix,new_suffix);
  return _T0;
}
struct _fat_ptr Cyc_strpbrk(struct _fat_ptr s,struct _fat_ptr accept) {
  struct _fat_ptr _T0;
  unsigned int _T1;
  struct _fat_ptr _T2;
  unsigned int _T3;
  int _T4;
  unsigned int _T5;
  struct _fat_ptr _T6;
  unsigned char * _T7;
  const char * _T8;
  const char * _T9;
  unsigned int _TA;
  int _TB;
  char _TC;
  int _TD;
  char _TE;
  int _TF;
  struct _fat_ptr _T10;
  unsigned char * _T11;
  const char * _T12;
  const char * _T13;
  unsigned int _T14;
  int _T15;
  char _T16;
  int _T17;
  struct _fat_ptr _T18;
  unsigned int _T19;
  int _T1A;
  struct _fat_ptr _T1B;
  struct _fat_ptr _T1C;
  _T0 = s;
  _T1 = _get_fat_size(_T0,sizeof(char));
  { int len = (int)_T1;
    _T2 = accept;
    { unsigned int asize = _get_fat_size(_T2,sizeof(char));
      char c;
      unsigned int i;
      i = 0U;
      _TLC0: _T3 = i;
      _T4 = len;
      _T5 = (unsigned int)_T4;
      if (_T3 < _T5) { goto _TLC1;
      }else { goto _TLBF;
      }
      _TLC1: _T6 = s;
      _T7 = _T6.curr;
      _T8 = (const char *)_T7;
      _T9 = _check_null(_T8);
      _TA = i;
      _TB = (int)_TA;
      c = _T9[_TB];
      _TC = c;
      _TD = (int)_TC;
      if (_TD != 0) { goto _TLBE;
      }else { goto _TLBF;
      }
      _TLBE: { unsigned int j = 0U;
	_TLC5: if (j < asize) { goto _TLC3;
	}else { goto _TLC4;
	}
	_TLC3: _TE = c;
	_TF = (int)_TE;
	_T10 = accept;
	_T11 = _T10.curr;
	_T12 = (const char *)_T11;
	_T13 = _check_null(_T12);
	_T14 = j;
	_T15 = (int)_T14;
	_T16 = _T13[_T15];
	_T17 = (int)_T16;
	if (_TF != _T17) { goto _TLC6;
	}
	_T18 = s;
	_T19 = i;
	_T1A = (int)_T19;
	_T1B = _fat_ptr_plus(_T18,sizeof(char),_T1A);
	return _T1B;
	_TLC6: j = j + 1;
	goto _TLC5;
	_TLC4: ;
      }i = i + 1;
      goto _TLC0;
      _TLBF: _T1C = _tag_fat(0,0,0);
      return _T1C;
    }
  }
}
struct _fat_ptr Cyc_mstrpbrk(struct _fat_ptr s,struct _fat_ptr accept) {
  struct _fat_ptr _T0;
  unsigned int _T1;
  struct _fat_ptr _T2;
  unsigned int _T3;
  int _T4;
  unsigned int _T5;
  struct _fat_ptr _T6;
  unsigned char * _T7;
  char * _T8;
  char * _T9;
  unsigned int _TA;
  int _TB;
  char _TC;
  int _TD;
  char _TE;
  int _TF;
  struct _fat_ptr _T10;
  unsigned char * _T11;
  const char * _T12;
  const char * _T13;
  unsigned int _T14;
  int _T15;
  char _T16;
  int _T17;
  struct _fat_ptr _T18;
  unsigned int _T19;
  int _T1A;
  struct _fat_ptr _T1B;
  struct _fat_ptr _T1C;
  _T0 = s;
  _T1 = _get_fat_size(_T0,sizeof(char));
  { int len = (int)_T1;
    _T2 = accept;
    { unsigned int asize = _get_fat_size(_T2,sizeof(char));
      char c;
      unsigned int i;
      i = 0U;
      _TLCB: _T3 = i;
      _T4 = len;
      _T5 = (unsigned int)_T4;
      if (_T3 < _T5) { goto _TLCC;
      }else { goto _TLCA;
      }
      _TLCC: _T6 = s;
      _T7 = _T6.curr;
      _T8 = (char *)_T7;
      _T9 = _check_null(_T8);
      _TA = i;
      _TB = (int)_TA;
      c = _T9[_TB];
      _TC = c;
      _TD = (int)_TC;
      if (_TD != 0) { goto _TLC9;
      }else { goto _TLCA;
      }
      _TLC9: { unsigned int j = 0U;
	_TLD0: if (j < asize) { goto _TLCE;
	}else { goto _TLCF;
	}
	_TLCE: _TE = c;
	_TF = (int)_TE;
	_T10 = accept;
	_T11 = _T10.curr;
	_T12 = (const char *)_T11;
	_T13 = _check_null(_T12);
	_T14 = j;
	_T15 = (int)_T14;
	_T16 = _T13[_T15];
	_T17 = (int)_T16;
	if (_TF != _T17) { goto _TLD1;
	}
	_T18 = s;
	_T19 = i;
	_T1A = (int)_T19;
	_T1B = _fat_ptr_plus(_T18,sizeof(char),_T1A);
	return _T1B;
	_TLD1: j = j + 1;
	goto _TLD0;
	_TLCF: ;
      }i = i + 1;
      goto _TLCB;
      _TLCA: _T1C = _tag_fat(0,0,0);
      return _T1C;
    }
  }
}
struct _fat_ptr Cyc_mstrchr(struct _fat_ptr s,char c) {
  struct _fat_ptr _T0;
  unsigned int _T1;
  unsigned int _T2;
  int _T3;
  unsigned int _T4;
  struct _fat_ptr _T5;
  unsigned char * _T6;
  char * _T7;
  char * _T8;
  unsigned int _T9;
  int _TA;
  char _TB;
  int _TC;
  char _TD;
  int _TE;
  char _TF;
  int _T10;
  struct _fat_ptr _T11;
  unsigned int _T12;
  int _T13;
  struct _fat_ptr _T14;
  struct _fat_ptr _T15;
  _T0 = s;
  _T1 = _get_fat_size(_T0,sizeof(char));
  { int len = (int)_T1;
    char c2;
    unsigned int i;
    i = 0U;
    _TLD6: _T2 = i;
    _T3 = len;
    _T4 = (unsigned int)_T3;
    if (_T2 < _T4) { goto _TLD7;
    }else { goto _TLD5;
    }
    _TLD7: _T5 = s;
    _T6 = _T5.curr;
    _T7 = (char *)_T6;
    _T8 = _check_null(_T7);
    _T9 = i;
    _TA = (int)_T9;
    c2 = _T8[_TA];
    _TB = c2;
    _TC = (int)_TB;
    if (_TC != 0) { goto _TLD4;
    }else { goto _TLD5;
    }
    _TLD4: _TD = c2;
    _TE = (int)_TD;
    _TF = c;
    _T10 = (int)_TF;
    if (_TE != _T10) { goto _TLD8;
    }
    _T11 = s;
    _T12 = i;
    _T13 = (int)_T12;
    _T14 = _fat_ptr_plus(_T11,sizeof(char),_T13);
    return _T14;
    _TLD8: i = i + 1;
    goto _TLD6;
    _TLD5: _T15 = _tag_fat(0,0,0);
    return _T15;
  }
}
struct _fat_ptr Cyc_strchr(struct _fat_ptr s,char c) {
  struct _fat_ptr _T0;
  unsigned int _T1;
  unsigned int _T2;
  int _T3;
  unsigned int _T4;
  struct _fat_ptr _T5;
  unsigned char * _T6;
  const char * _T7;
  const char * _T8;
  unsigned int _T9;
  int _TA;
  char _TB;
  int _TC;
  char _TD;
  int _TE;
  char _TF;
  int _T10;
  struct _fat_ptr _T11;
  unsigned int _T12;
  int _T13;
  struct _fat_ptr _T14;
  struct _fat_ptr _T15;
  _T0 = s;
  _T1 = _get_fat_size(_T0,sizeof(char));
  { int len = (int)_T1;
    char c2;
    unsigned int i;
    i = 0U;
    _TLDD: _T2 = i;
    _T3 = len;
    _T4 = (unsigned int)_T3;
    if (_T2 < _T4) { goto _TLDE;
    }else { goto _TLDC;
    }
    _TLDE: _T5 = s;
    _T6 = _T5.curr;
    _T7 = (const char *)_T6;
    _T8 = _check_null(_T7);
    _T9 = i;
    _TA = (int)_T9;
    c2 = _T8[_TA];
    _TB = c2;
    _TC = (int)_TB;
    if (_TC != 0) { goto _TLDB;
    }else { goto _TLDC;
    }
    _TLDB: _TD = c2;
    _TE = (int)_TD;
    _TF = c;
    _T10 = (int)_TF;
    if (_TE != _T10) { goto _TLDF;
    }
    _T11 = s;
    _T12 = i;
    _T13 = (int)_T12;
    _T14 = _fat_ptr_plus(_T11,sizeof(char),_T13);
    return _T14;
    _TLDF: i = i + 1;
    goto _TLDD;
    _TLDC: _T15 = _tag_fat(0,0,0);
    return _T15;
  }
}
struct _fat_ptr Cyc_strrchr(struct _fat_ptr s0,char c) {
  unsigned long _T0;
  struct _fat_ptr * _T1;
  int _T2;
  struct _fat_ptr _T3;
  unsigned char * _T4;
  const char * _T5;
  char _T6;
  int _T7;
  char _T8;
  int _T9;
  struct _fat_ptr _TA;
  struct _fat_ptr _TB;
  struct _fat_ptr * _TC;
  struct _fat_ptr _TD;
  _T0 = Cyc_strlen(s0);
  { int len = (int)_T0;
    int i = len - 1;
    struct _fat_ptr s = s0;
    _T1 = &s;
    _T2 = i;
    _fat_ptr_inplace_plus(_T1,sizeof(char),_T2);
    _TLE4: if (i >= 0) { goto _TLE2;
    }else { goto _TLE3;
    }
    _TLE2: _T3 = s;
    _T4 = _check_fat_subscript(_T3,sizeof(char),0U);
    _T5 = (const char *)_T4;
    _T6 = *_T5;
    _T7 = (int)_T6;
    _T8 = c;
    _T9 = (int)_T8;
    if (_T7 != _T9) { goto _TLE5;
    }
    _TA = s;
    _TB = _TA;
    return _TB;
    _TLE5: i = i + -1;
    _TC = &s;
    _fat_ptr_inplace_plus_post(_TC,sizeof(char),-1);
    goto _TLE4;
    _TLE3: _TD = _tag_fat(0,0,0);
    return _TD;
  }
}
struct _fat_ptr Cyc_mstrrchr(struct _fat_ptr s0,char c) {
  unsigned long _T0;
  struct _fat_ptr * _T1;
  int _T2;
  struct _fat_ptr _T3;
  unsigned char * _T4;
  char * _T5;
  char _T6;
  int _T7;
  char _T8;
  int _T9;
  struct _fat_ptr _TA;
  struct _fat_ptr _TB;
  struct _fat_ptr * _TC;
  struct _fat_ptr _TD;
  _T0 = Cyc_strlen(s0);
  { int len = (int)_T0;
    int i = len - 1;
    struct _fat_ptr s = s0;
    _T1 = &s;
    _T2 = i;
    _fat_ptr_inplace_plus(_T1,sizeof(char),_T2);
    _TLEA: if (i >= 0) { goto _TLE8;
    }else { goto _TLE9;
    }
    _TLE8: _T3 = s;
    _T4 = _check_fat_subscript(_T3,sizeof(char),0U);
    _T5 = (char *)_T4;
    _T6 = *_T5;
    _T7 = (int)_T6;
    _T8 = c;
    _T9 = (int)_T8;
    if (_T7 != _T9) { goto _TLEB;
    }
    _TA = s;
    _TB = _TA;
    return _TB;
    _TLEB: i = i + -1;
    _TC = &s;
    _fat_ptr_inplace_plus_post(_TC,sizeof(char),-1);
    goto _TLEA;
    _TLE9: _TD = _tag_fat(0,0,0);
    return _TD;
  }
}
struct _fat_ptr Cyc_strstr(struct _fat_ptr haystack,struct _fat_ptr needle) {
  struct _fat_ptr _T0;
  unsigned char * _T1;
  unsigned int _T2;
  struct _fat_ptr _T3;
  unsigned char * _T4;
  unsigned int _T5;
  struct Cyc_Core_Invalid_argument_exn_struct * _T6;
  void * _T7;
  struct _fat_ptr _T8;
  unsigned char * _T9;
  const char * _TA;
  char _TB;
  int _TC;
  struct _fat_ptr _TD;
  unsigned long _TE;
  struct _fat_ptr _TF;
  struct _fat_ptr _T10;
  unsigned char * _T11;
  const char * _T12;
  char _T13;
  struct _fat_ptr _T14;
  unsigned char * _T15;
  char * _T16;
  struct _fat_ptr _T17;
  struct _fat_ptr _T18;
  int _T19;
  unsigned long _T1A;
  int _T1B;
  struct _fat_ptr _T1C;
  struct _fat_ptr _T1D;
  struct _fat_ptr _T1E;
  struct _fat_ptr _T1F;
  unsigned char * _T20;
  const char * _T21;
  char _T22;
  struct _fat_ptr _T23;
  _T0 = haystack;
  _T1 = _T0.curr;
  _T2 = (unsigned int)_T1;
  if (_T2) { goto _TLF0;
  }else { goto _TLEF;
  }
  _TLF0: _T3 = needle;
  _T4 = _T3.curr;
  _T5 = (unsigned int)_T4;
  if (_T5) { goto _TLED;
  }else { goto _TLEF;
  }
  _TLEF: { struct Cyc_Core_Invalid_argument_exn_struct * _T24 = _cycalloc(sizeof(struct Cyc_Core_Invalid_argument_exn_struct));
    _T24->tag = Cyc_Core_Invalid_argument;
    _T24->f1 = _tag_fat("strstr",sizeof(char),7U);
    _T6 = (struct Cyc_Core_Invalid_argument_exn_struct *)_T24;
  }_T7 = (void *)_T6;
  _throw(_T7);
  goto _TLEE;
  _TLED: _TLEE: _T8 = needle;
  _T9 = _check_fat_subscript(_T8,sizeof(char),0U);
  _TA = (const char *)_T9;
  _TB = *_TA;
  _TC = (int)_TB;
  if (_TC != 0) { goto _TLF1;
  }
  _TD = haystack;
  return _TD;
  _TLF1: _TE = Cyc_strlen(needle);
  { int len = (int)_TE;
    { struct _fat_ptr start = haystack;
      _TLF6: _TF = start;
      _T10 = needle;
      _T11 = _T10.curr;
      _T12 = (const char *)_T11;
      _T13 = *_T12;
      start = Cyc_strchr(_TF,_T13);
      _T14 = start;
      _T15 = _T14.curr;
      _T16 = (char *)_T15;
      if (_T16 != 0) { goto _TLF4;
      }else { goto _TLF5;
      }
      _TLF4: _T17 = start;
      _T18 = needle;
      _T19 = len;
      _T1A = (unsigned long)_T19;
      _T1B = Cyc_strncmp(_T17,_T18,_T1A);
      if (_T1B != 0) { goto _TLF7;
      }
      _T1C = start;
      return _T1C;
      _TLF7: _T1D = start;
      _T1E = _fat_ptr_plus(_T1D,sizeof(char),1);
      _T1F = needle;
      _T20 = _T1F.curr;
      _T21 = (const char *)_T20;
      _T22 = *_T21;
      start = Cyc_strchr(_T1E,_T22);
      goto _TLF6;
      _TLF5: ;
    }_T23 = _tag_fat(0,0,0);
    return _T23;
  }
}
struct _fat_ptr Cyc_mstrstr(struct _fat_ptr haystack,struct _fat_ptr needle) {
  struct _fat_ptr _T0;
  unsigned char * _T1;
  unsigned int _T2;
  struct _fat_ptr _T3;
  unsigned char * _T4;
  unsigned int _T5;
  struct Cyc_Core_Invalid_argument_exn_struct * _T6;
  void * _T7;
  struct _fat_ptr _T8;
  unsigned char * _T9;
  const char * _TA;
  char _TB;
  int _TC;
  struct _fat_ptr _TD;
  unsigned long _TE;
  struct _fat_ptr _TF;
  struct _fat_ptr _T10;
  unsigned char * _T11;
  const char * _T12;
  char _T13;
  struct _fat_ptr _T14;
  unsigned char * _T15;
  char * _T16;
  struct _fat_ptr _T17;
  struct _fat_ptr _T18;
  int _T19;
  unsigned long _T1A;
  int _T1B;
  struct _fat_ptr _T1C;
  struct _fat_ptr _T1D;
  struct _fat_ptr _T1E;
  struct _fat_ptr _T1F;
  unsigned char * _T20;
  const char * _T21;
  char _T22;
  struct _fat_ptr _T23;
  _T0 = haystack;
  _T1 = _T0.curr;
  _T2 = (unsigned int)_T1;
  if (_T2) { goto _TLFC;
  }else { goto _TLFB;
  }
  _TLFC: _T3 = needle;
  _T4 = _T3.curr;
  _T5 = (unsigned int)_T4;
  if (_T5) { goto _TLF9;
  }else { goto _TLFB;
  }
  _TLFB: { struct Cyc_Core_Invalid_argument_exn_struct * _T24 = _cycalloc(sizeof(struct Cyc_Core_Invalid_argument_exn_struct));
    _T24->tag = Cyc_Core_Invalid_argument;
    _T24->f1 = _tag_fat("mstrstr",sizeof(char),8U);
    _T6 = (struct Cyc_Core_Invalid_argument_exn_struct *)_T24;
  }_T7 = (void *)_T6;
  _throw(_T7);
  goto _TLFA;
  _TLF9: _TLFA: _T8 = needle;
  _T9 = _check_fat_subscript(_T8,sizeof(char),0U);
  _TA = (const char *)_T9;
  _TB = *_TA;
  _TC = (int)_TB;
  if (_TC != 0) { goto _TLFD;
  }
  _TD = haystack;
  return _TD;
  _TLFD: _TE = Cyc_strlen(needle);
  { int len = (int)_TE;
    { struct _fat_ptr start = haystack;
      _TL102: _TF = start;
      _T10 = needle;
      _T11 = _T10.curr;
      _T12 = (const char *)_T11;
      _T13 = *_T12;
      start = Cyc_mstrchr(_TF,_T13);
      _T14 = start;
      _T15 = _T14.curr;
      _T16 = (char *)_T15;
      if (_T16 != 0) { goto _TL100;
      }else { goto _TL101;
      }
      _TL100: _T17 = start;
      _T18 = needle;
      _T19 = len;
      _T1A = (unsigned long)_T19;
      _T1B = Cyc_strncmp(_T17,_T18,_T1A);
      if (_T1B != 0) { goto _TL103;
      }
      _T1C = start;
      return _T1C;
      _TL103: _T1D = start;
      _T1E = _fat_ptr_plus(_T1D,sizeof(char),1);
      _T1F = needle;
      _T20 = _T1F.curr;
      _T21 = (const char *)_T20;
      _T22 = *_T21;
      start = Cyc_mstrchr(_T1E,_T22);
      goto _TL102;
      _TL101: ;
    }_T23 = _tag_fat(0,0,0);
    return _T23;
  }
}
unsigned long Cyc_strspn(struct _fat_ptr s,struct _fat_ptr accept) {
  struct _fat_ptr _T0;
  struct _fat_ptr _T1;
  int _T2;
  unsigned int _T3;
  unsigned int _T4;
  struct _fat_ptr _T5;
  unsigned char * _T6;
  const char * _T7;
  const char * _T8;
  unsigned long _T9;
  int _TA;
  char _TB;
  int _TC;
  struct _fat_ptr _TD;
  unsigned char * _TE;
  const char * _TF;
  const char * _T10;
  int _T11;
  char _T12;
  int _T13;
  int _T14;
  unsigned int _T15;
  unsigned int _T16;
  unsigned long _T17;
  unsigned long _T18;
  _T0 = s;
  { struct _fat_ptr b = _T0;
    unsigned long len = Cyc_strlen(b);
    _T1 = accept;
    { unsigned int asize = _get_fat_size(_T1,sizeof(char));
      { unsigned long i = 0U;
	_TL108: if (i < len) { goto _TL106;
	}else { goto _TL107;
	}
	_TL106: { int j;
	  j = 0;
	  _TL10C: _T2 = j;
	  _T3 = (unsigned int)_T2;
	  _T4 = asize;
	  if (_T3 < _T4) { goto _TL10A;
	  }else { goto _TL10B;
	  }
	  _TL10A: _T5 = b;
	  _T6 = _T5.curr;
	  _T7 = (const char *)_T6;
	  _T8 = _check_null(_T7);
	  _T9 = i;
	  _TA = (int)_T9;
	  _TB = _T8[_TA];
	  _TC = (int)_TB;
	  _TD = accept;
	  _TE = _TD.curr;
	  _TF = (const char *)_TE;
	  _T10 = _check_null(_TF);
	  _T11 = j;
	  _T12 = _T10[_T11];
	  _T13 = (int)_T12;
	  if (_TC != _T13) { goto _TL10D;
	  }
	  goto _TL10B;
	  _TL10D: j = j + 1;
	  goto _TL10C;
	  _TL10B: _T14 = j;
	  _T15 = (unsigned int)_T14;
	  _T16 = asize;
	  if (_T15 != _T16) { goto _TL10F;
	  }
	  _T17 = i;
	  return _T17;
	  _TL10F: ;
	}i = i + 1;
	goto _TL108;
	_TL107: ;
      }_T18 = len;
      return _T18;
    }
  }
}
unsigned long Cyc_strcspn(struct _fat_ptr s,struct _fat_ptr accept) {
  struct _fat_ptr _T0;
  struct _fat_ptr _T1;
  int _T2;
  unsigned int _T3;
  unsigned int _T4;
  struct _fat_ptr _T5;
  unsigned char * _T6;
  const char * _T7;
  const char * _T8;
  unsigned long _T9;
  int _TA;
  char _TB;
  int _TC;
  struct _fat_ptr _TD;
  unsigned char * _TE;
  const char * _TF;
  const char * _T10;
  int _T11;
  char _T12;
  int _T13;
  unsigned long _T14;
  unsigned long _T15;
  _T0 = s;
  { struct _fat_ptr b = _T0;
    unsigned long len = Cyc_strlen(b);
    _T1 = accept;
    { unsigned int asize = _get_fat_size(_T1,sizeof(char));
      { unsigned long i = 0U;
	_TL114: if (i < len) { goto _TL112;
	}else { goto _TL113;
	}
	_TL112: { int j;
	  j = 0;
	  _TL118: _T2 = j;
	  _T3 = (unsigned int)_T2;
	  _T4 = asize;
	  if (_T3 < _T4) { goto _TL116;
	  }else { goto _TL117;
	  }
	  _TL116: _T5 = b;
	  _T6 = _T5.curr;
	  _T7 = (const char *)_T6;
	  _T8 = _check_null(_T7);
	  _T9 = i;
	  _TA = (int)_T9;
	  _TB = _T8[_TA];
	  _TC = (int)_TB;
	  _TD = accept;
	  _TE = _TD.curr;
	  _TF = (const char *)_TE;
	  _T10 = _check_null(_TF);
	  _T11 = j;
	  _T12 = _T10[_T11];
	  _T13 = (int)_T12;
	  if (_TC != _T13) { goto _TL119;
	  }
	  _T14 = i;
	  return _T14;
	  _TL119: j = j + 1;
	  goto _TL118;
	  _TL117: ;
	}i = i + 1;
	goto _TL114;
	_TL113: ;
      }_T15 = len;
      return _T15;
    }
  }
}
struct _fat_ptr Cyc_strtok(struct _fat_ptr s,struct _fat_ptr delim) {
  struct _fat_ptr _T0;
  unsigned char * _T1;
  char * _T2;
  struct _fat_ptr _T3;
  unsigned char * _T4;
  char * _T5;
  struct _fat_ptr _T6;
  unsigned long _T7;
  struct _fat_ptr _T8;
  unsigned int _T9;
  struct _fat_ptr _TA;
  unsigned long _TB;
  int _TC;
  struct _fat_ptr _TD;
  unsigned char * _TE;
  char * _TF;
  char _T10;
  int _T11;
  struct _fat_ptr _T12;
  struct _fat_ptr * _T13;
  unsigned long _T14;
  int _T15;
  struct _fat_ptr _T16;
  unsigned char * _T17;
  char * _T18;
  unsigned char * _T19;
  char * _T1A;
  unsigned int _T1B;
  unsigned char * _T1C;
  char * _T1D;
  struct _fat_ptr _T1E;
  struct _fat_ptr _T1F;
  static struct _fat_ptr olds = {(void *)0,(void *)0,(void *)(0 + 0)};
  struct _fat_ptr token;
  _T0 = s;
  _T1 = _T0.curr;
  _T2 = (char *)_T1;
  if (_T2 != 0) { goto _TL11B;
  }
  _T3 = olds;
  _T4 = _T3.curr;
  _T5 = (char *)_T4;
  if (_T5 != 0) { goto _TL11D;
  }
  _T6 = _tag_fat(0,0,0);
  return _T6;
  _TL11D: s = olds;
  goto _TL11C;
  _TL11B: _TL11C: { unsigned long inc = Cyc_strspn(s,delim);
    _T7 = inc;
    _T8 = s;
    _T9 = _get_fat_size(_T8,sizeof(char));
    if (_T7 >= _T9) { goto _TL121;
    }else { goto _TL122;
    }
    _TL122: _TA = s;
    _TB = inc;
    _TC = (int)_TB;
    _TD = _fat_ptr_plus(_TA,sizeof(char),_TC);
    _TE = _TD.curr;
    _TF = (char *)_TE;
    _T10 = *_TF;
    _T11 = (int)_T10;
    if (_T11 == 0) { goto _TL121;
    }else { goto _TL11F;
    }
    _TL121: olds = _tag_fat(0,0,0);
    _T12 = _tag_fat(0,0,0);
    return _T12;
    _TL11F: _T13 = &s;
    _T14 = inc;
    _T15 = (int)_T14;
    _fat_ptr_inplace_plus(_T13,sizeof(char),_T15);
    token = s;
    s = Cyc_mstrpbrk(token,delim);
    _T16 = s;
    _T17 = _T16.curr;
    _T18 = (char *)_T17;
    if (_T18 != 0) { goto _TL123;
    }
    olds = _tag_fat(0,0,0);
    goto _TL124;
    _TL123: { struct _fat_ptr _T20 = s;
      _T19 = _T20.curr;
      _T1A = (char *)_T19;
      { char _T21 = *_T1A;
	char _T22 = '\000';
	_T1B = _get_fat_size(_T20,sizeof(char));
	if (_T1B != 1U) { goto _TL125;
	}
	if (_T21 != 0) { goto _TL125;
	}
	if (_T22 == 0) { goto _TL125;
	}
	_throw_arraybounds();
	goto _TL126;
	_TL125: _TL126: _T1C = _T20.curr;
	_T1D = (char *)_T1C;
	*_T1D = _T22;
      }
    }_T1E = s;
    olds = _fat_ptr_plus(_T1E,sizeof(char),1);
    _TL124: _T1F = token;
    return _T1F;
  }
}
struct Cyc_List_List * Cyc_rexplode(struct _RegionHandle * r,struct _fat_ptr s) {
  unsigned long _T0;
  unsigned long _T1;
  struct Cyc_List_List * _T2;
  struct _RegionHandle * _T3;
  struct _fat_ptr _T4;
  int _T5;
  unsigned char * _T6;
  const char * _T7;
  char _T8;
  struct Cyc_List_List * _T9;
  struct Cyc_List_List * result = 0;
  _T0 = Cyc_strlen(s);
  _T1 = _T0 - 1U;
  { int i = (int)_T1;
    _TL12A: if (i >= 0) { goto _TL128;
    }else { goto _TL129;
    }
    _TL128: _T3 = r;
    { struct Cyc_List_List * _TA = _region_malloc(_T3,0U,sizeof(struct Cyc_List_List));
      _T4 = s;
      _T5 = i;
      _T6 = _check_fat_subscript(_T4,sizeof(char),_T5);
      _T7 = (const char *)_T6;
      _T8 = *_T7;
      _TA->hd = (void *)_T8;
      _TA->tl = result;
      _T2 = (struct Cyc_List_List *)_TA;
    }result = _T2;
    i = i + -1;
    goto _TL12A;
    _TL129: ;
  }_T9 = result;
  return _T9;
}
struct Cyc_List_List * Cyc_explode(struct _fat_ptr s) {
  struct Cyc_List_List * _T0;
  _T0 = Cyc_rexplode(Cyc_Core_heap_region,s);
  return _T0;
}
struct _fat_ptr Cyc_implode(struct Cyc_List_List * chars) {
  int _T0;
  int _T1;
  unsigned int _T2;
  struct _fat_ptr _T3;
  unsigned long _T4;
  unsigned long _T5;
  int _T6;
  unsigned char * _T7;
  char * _T8;
  struct Cyc_List_List * _T9;
  void * _TA;
  long _TB;
  unsigned int _TC;
  unsigned char * _TD;
  char * _TE;
  struct Cyc_List_List * _TF;
  struct _fat_ptr _T10;
  _T0 = Cyc_List_length(chars);
  _T1 = _T0 + 1;
  _T2 = (unsigned int)_T1;
  { struct _fat_ptr s = Cyc_Core_new_string(_T2);
    unsigned long i = 0U;
    _TL12B: if (chars != 0) { goto _TL12C;
    }else { goto _TL12D;
    }
    _TL12C: _T3 = s;
    _T4 = i;
    i = _T4 + 1;
    _T5 = _T4;
    _T6 = (int)_T5;
    { struct _fat_ptr _T11 = _fat_ptr_plus(_T3,sizeof(char),_T6);
      _T7 = _check_fat_subscript(_T11,sizeof(char),0U);
      _T8 = (char *)_T7;
      { char _T12 = *_T8;
	_T9 = chars;
	_TA = _T9->hd;
	_TB = (long)_TA;
	{ char _T13 = (char)_TB;
	  _TC = _get_fat_size(_T11,sizeof(char));
	  if (_TC != 1U) { goto _TL12E;
	  }
	  if (_T12 != 0) { goto _TL12E;
	  }
	  if (_T13 == 0) { goto _TL12E;
	  }
	  _throw_arraybounds();
	  goto _TL12F;
	  _TL12E: _TL12F: _TD = _T11.curr;
	  _TE = (char *)_TD;
	  *_TE = _T13;
	}
      }
    }_TF = chars;
    chars = _TF->tl;
    goto _TL12B;
    _TL12D: _T10 = s;
    return _T10;
  }
}
inline static int Cyc_casecmp(struct _fat_ptr s1,unsigned long len1,struct _fat_ptr s2,
			      unsigned long len2) {
  int _T0;
  unsigned long _T1;
  unsigned long _T2;
  int _T3;
  int _T4;
  struct _fat_ptr _T5;
  unsigned char * _T6;
  const char * _T7;
  const char * _T8;
  int _T9;
  char _TA;
  int _TB;
  int _TC;
  struct _fat_ptr _TD;
  unsigned char * _TE;
  const char * _TF;
  const char * _T10;
  int _T11;
  char _T12;
  int _T13;
  int _T14;
  int _T15;
  unsigned long _T16;
  int _T17;
  unsigned long _T18;
  int _T19;
  int _T1A;
  unsigned long min_length = Cyc_umin(len1,len2);
  int i = - 1;
  _TL130: i = i + 1;
  _T0 = i;
  _T1 = (unsigned long)_T0;
  _T2 = min_length;
  _T3 = _T1 < _T2;
  _T4 = _T3;
  if (_T4) { goto _TL131;
  }else { goto _TL132;
  }
  _TL131: _T5 = s1;
  _T6 = _T5.curr;
  _T7 = (const char *)_T6;
  _T8 = _check_null(_T7);
  _T9 = i;
  _TA = _T8[_T9];
  _TB = (int)_TA;
  _TC = toupper(_TB);
  _TD = s2;
  _TE = _TD.curr;
  _TF = (const char *)_TE;
  _T10 = _check_null(_TF);
  _T11 = i;
  _T12 = _T10[_T11];
  _T13 = (int)_T12;
  _T14 = toupper(_T13);
  { int diff = _TC - _T14;
    if (diff == 0) { goto _TL133;
    }
    _T15 = diff;
    return _T15;
    _TL133: ;
  }goto _TL130;
  _TL132: _T16 = len1;
  _T17 = (int)_T16;
  _T18 = len2;
  _T19 = (int)_T18;
  _T1A = _T17 - _T19;
  return _T1A;
}
int Cyc_strcasecmp(struct _fat_ptr s1,struct _fat_ptr s2) {
  struct _fat_ptr _T0;
  unsigned char * _T1;
  char * _T2;
  struct _fat_ptr _T3;
  unsigned char * _T4;
  char * _T5;
  int _T6;
  _T0 = s1;
  _T1 = _T0.curr;
  _T2 = (char *)_T1;
  _T3 = s2;
  _T4 = _T3.curr;
  _T5 = (char *)_T4;
  if (_T2 != _T5) { goto _TL135;
  }
  return 0;
  _TL135: { unsigned long len1 = Cyc_strlen(s1);
    unsigned long len2 = Cyc_strlen(s2);
    _T6 = Cyc_casecmp(s1,len1,s2,len2);
    return _T6;
  }
}
inline static int Cyc_caseless_ncmp(struct _fat_ptr s1,unsigned long len1,
				    struct _fat_ptr s2,unsigned long len2,
				    unsigned long n) {
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
  struct _fat_ptr _TB;
  unsigned char * _TC;
  const char * _TD;
  const char * _TE;
  int _TF;
  char _T10;
  int _T11;
  int _T12;
  int _T13;
  int _T14;
  unsigned long _T15;
  int _T16;
  unsigned long _T17;
  int _T18;
  int _T19;
  if (n > 0U) { goto _TL137;
  }
  return 0;
  _TL137: { unsigned long min_len = Cyc_umin(len1,len2);
    unsigned long bound = Cyc_umin(min_len,n);
    { int i = 0;
      _TL13C: _T0 = i;
      _T1 = (unsigned long)_T0;
      _T2 = bound;
      if (_T1 < _T2) { goto _TL13A;
      }else { goto _TL13B;
      }
      _TL13A: { int retc;
	_T3 = s1;
	_T4 = _T3.curr;
	_T5 = (const char *)_T4;
	_T6 = _check_null(_T5);
	_T7 = i;
	_T8 = _T6[_T7];
	_T9 = (int)_T8;
	_TA = toupper(_T9);
	_TB = s2;
	_TC = _TB.curr;
	_TD = (const char *)_TC;
	_TE = _check_null(_TD);
	_TF = i;
	_T10 = _TE[_TF];
	_T11 = (int)_T10;
	_T12 = toupper(_T11);
	retc = _TA - _T12;
	_T13 = retc;
	if (_T13 == 0) { goto _TL13D;
	}
	_T14 = retc;
	return _T14;
	_TL13D: ;
      }i = i + 1;
      goto _TL13C;
      _TL13B: ;
    }if (len1 < n) { goto _TL141;
    }else { goto _TL142;
    }
    _TL142: if (len2 < n) { goto _TL141;
    }else { goto _TL13F;
    }
    _TL141: _T15 = len1;
    _T16 = (int)_T15;
    _T17 = len2;
    _T18 = (int)_T17;
    _T19 = _T16 - _T18;
    return _T19;
    _TL13F: return 0;
  }
}
int Cyc_strncasecmp(struct _fat_ptr s1,struct _fat_ptr s2,unsigned long n) {
  int _T0;
  unsigned long len1 = Cyc_strlen(s1);
  unsigned long len2 = Cyc_strlen(s2);
  _T0 = Cyc_caseless_ncmp(s1,len1,s2,len2,n);
  return _T0;
}
extern void * memcpy(void *,const void *,unsigned long);
extern void * memmove(void *,const void *,unsigned long);
extern int memcmp(const void *,const void *,unsigned long);
extern char * memchr(const char *,int,unsigned long);
extern void * memset(void *,int,unsigned long);
extern void bcopy(const void *,void *,unsigned long);
extern void bzero(void *,unsigned long);
extern char * GC_realloc_hint(char *,unsigned int,unsigned int);
struct _fat_ptr Cyc_realloc(struct _fat_ptr s,unsigned long n) {
  struct _fat_ptr _T0;
  struct _fat_ptr _T1;
  unsigned char * _T2;
  char * _T3;
  unsigned int _T4;
  unsigned int _T5;
  struct _fat_ptr (* _T6)(char *,unsigned int,unsigned int);
  struct _fat_ptr (* _T7)(void *,unsigned int,unsigned int);
  char * _T8;
  unsigned int _T9;
  struct _fat_ptr _TA;
  _T0 = s;
  { unsigned int _TB = _get_fat_size(_T0,sizeof(char));
    unsigned int _TC;
    _TC = _TB;
    { unsigned int oldsz = _TC;
      unsigned int _TD;
      _TD = n;
      { unsigned int l = _TD;
	_T1 = s;
	_T2 = _untag_fat_ptr_check_bound(_T1,sizeof(char),1U);
	_T3 = (char *)_T2;
	_T4 = oldsz;
	_T5 = l;
	{ char * res = GC_realloc_hint(_T3,_T4,_T5);
	  _T7 = Cyc_Core_mkfat;
	  { struct _fat_ptr (* _TE)(char *,unsigned int,unsigned int) = (struct _fat_ptr (*)(char *,
											     unsigned int,
											     unsigned int))_T7;
	    _T6 = _TE;
	  }_T8 = _check_null(res);
	  _T9 = l;
	  _TA = _T6(_T8,sizeof(char),_T9);
	  return _TA;
	}
      }
    }
  }
}
struct _fat_ptr Cyc__memcpy(struct _fat_ptr d,struct _fat_ptr s,unsigned long n,
			    unsigned int sz) {
  struct _fat_ptr _T0;
  unsigned char * _T1;
  void * _T2;
  struct _fat_ptr _T3;
  unsigned int _T4;
  unsigned long _T5;
  struct _fat_ptr _T6;
  unsigned char * _T7;
  void * _T8;
  struct _fat_ptr _T9;
  unsigned int _TA;
  unsigned long _TB;
  struct Cyc_Core_Invalid_argument_exn_struct * _TC;
  void * _TD;
  struct _fat_ptr _TE;
  unsigned char * _TF;
  void * _T10;
  struct _fat_ptr _T11;
  unsigned char * _T12;
  const void * _T13;
  unsigned long _T14;
  struct _fat_ptr _T15;
  _T0 = d;
  _T1 = _T0.curr;
  _T2 = (void *)_T1;
  if (_T2 == 0) { goto _TL145;
  }else { goto _TL148;
  }
  _TL148: _T3 = d;
  _T4 = _get_fat_size(_T3,sizeof(void));
  _T5 = n;
  if (_T4 < _T5) { goto _TL145;
  }else { goto _TL147;
  }
  _TL147: _T6 = s;
  _T7 = _T6.curr;
  _T8 = (void *)_T7;
  if (_T8 == 0) { goto _TL145;
  }else { goto _TL146;
  }
  _TL146: _T9 = s;
  _TA = _get_fat_size(_T9,sizeof(void));
  _TB = n;
  if (_TA < _TB) { goto _TL145;
  }else { goto _TL143;
  }
  _TL145: { struct Cyc_Core_Invalid_argument_exn_struct * _T16 = _cycalloc(sizeof(struct Cyc_Core_Invalid_argument_exn_struct));
    _T16->tag = Cyc_Core_Invalid_argument;
    _T16->f1 = _tag_fat("memcpy",sizeof(char),7U);
    _TC = (struct Cyc_Core_Invalid_argument_exn_struct *)_T16;
  }_TD = (void *)_TC;
  _throw(_TD);
  goto _TL144;
  _TL143: _TL144: _TE = d;
  _TF = _untag_fat_ptr_check_bound(_TE,sizeof(void),1U);
  _T10 = (void *)_TF;
  _T11 = s;
  _T12 = _untag_fat_ptr_check_bound(_T11,sizeof(void),1U);
  _T13 = (const void *)_T12;
  _T14 = n * sz;
  memcpy(_T10,_T13,_T14);
  _T15 = d;
  return _T15;
}
struct _fat_ptr Cyc__memmove(struct _fat_ptr d,struct _fat_ptr s,unsigned long n,
			     unsigned int sz) {
  struct _fat_ptr _T0;
  unsigned char * _T1;
  void * _T2;
  struct _fat_ptr _T3;
  unsigned int _T4;
  unsigned long _T5;
  struct _fat_ptr _T6;
  unsigned char * _T7;
  void * _T8;
  struct _fat_ptr _T9;
  unsigned int _TA;
  unsigned long _TB;
  struct Cyc_Core_Invalid_argument_exn_struct * _TC;
  void * _TD;
  struct _fat_ptr _TE;
  unsigned char * _TF;
  void * _T10;
  struct _fat_ptr _T11;
  unsigned char * _T12;
  const void * _T13;
  unsigned long _T14;
  struct _fat_ptr _T15;
  _T0 = d;
  _T1 = _T0.curr;
  _T2 = (void *)_T1;
  if (_T2 == 0) { goto _TL14B;
  }else { goto _TL14E;
  }
  _TL14E: _T3 = d;
  _T4 = _get_fat_size(_T3,sizeof(void));
  _T5 = n;
  if (_T4 < _T5) { goto _TL14B;
  }else { goto _TL14D;
  }
  _TL14D: _T6 = s;
  _T7 = _T6.curr;
  _T8 = (void *)_T7;
  if (_T8 == 0) { goto _TL14B;
  }else { goto _TL14C;
  }
  _TL14C: _T9 = s;
  _TA = _get_fat_size(_T9,sizeof(void));
  _TB = n;
  if (_TA < _TB) { goto _TL14B;
  }else { goto _TL149;
  }
  _TL14B: { struct Cyc_Core_Invalid_argument_exn_struct * _T16 = _cycalloc(sizeof(struct Cyc_Core_Invalid_argument_exn_struct));
    _T16->tag = Cyc_Core_Invalid_argument;
    _T16->f1 = _tag_fat("memove",sizeof(char),7U);
    _TC = (struct Cyc_Core_Invalid_argument_exn_struct *)_T16;
  }_TD = (void *)_TC;
  _throw(_TD);
  goto _TL14A;
  _TL149: _TL14A: _TE = d;
  _TF = _untag_fat_ptr_check_bound(_TE,sizeof(void),1U);
  _T10 = (void *)_TF;
  _T11 = s;
  _T12 = _untag_fat_ptr_check_bound(_T11,sizeof(void),1U);
  _T13 = (const void *)_T12;
  _T14 = n * sz;
  memmove(_T10,_T13,_T14);
  _T15 = d;
  return _T15;
}
int Cyc_memcmp(struct _fat_ptr s1,struct _fat_ptr s2,unsigned long n) {
  struct _fat_ptr _T0;
  unsigned char * _T1;
  char * _T2;
  struct _fat_ptr _T3;
  unsigned char * _T4;
  char * _T5;
  struct _fat_ptr _T6;
  unsigned int _T7;
  unsigned long _T8;
  struct _fat_ptr _T9;
  unsigned int _TA;
  unsigned long _TB;
  struct Cyc_Core_Invalid_argument_exn_struct * _TC;
  void * _TD;
  struct _fat_ptr _TE;
  unsigned char * _TF;
  const void * _T10;
  struct _fat_ptr _T11;
  unsigned char * _T12;
  const void * _T13;
  unsigned long _T14;
  int _T15;
  _T0 = s1;
  _T1 = _T0.curr;
  _T2 = (char *)_T1;
  if (_T2 == 0) { goto _TL151;
  }else { goto _TL154;
  }
  _TL154: _T3 = s2;
  _T4 = _T3.curr;
  _T5 = (char *)_T4;
  if (_T5 == 0) { goto _TL151;
  }else { goto _TL153;
  }
  _TL153: _T6 = s1;
  _T7 = _get_fat_size(_T6,sizeof(char));
  _T8 = n;
  if (_T7 < _T8) { goto _TL151;
  }else { goto _TL152;
  }
  _TL152: _T9 = s2;
  _TA = _get_fat_size(_T9,sizeof(char));
  _TB = n;
  if (_TA < _TB) { goto _TL151;
  }else { goto _TL14F;
  }
  _TL151: { struct Cyc_Core_Invalid_argument_exn_struct * _T16 = _cycalloc(sizeof(struct Cyc_Core_Invalid_argument_exn_struct));
    _T16->tag = Cyc_Core_Invalid_argument;
    _T16->f1 = _tag_fat("memcmp",sizeof(char),7U);
    _TC = (struct Cyc_Core_Invalid_argument_exn_struct *)_T16;
  }_TD = (void *)_TC;
  _throw(_TD);
  goto _TL150;
  _TL14F: _TL150: _TE = s1;
  _TF = _untag_fat_ptr_check_bound(_TE,sizeof(char),1U);
  _T10 = (const void *)_TF;
  _T11 = s2;
  _T12 = _untag_fat_ptr_check_bound(_T11,sizeof(char),1U);
  _T13 = (const void *)_T12;
  _T14 = n;
  _T15 = memcmp(_T10,_T13,_T14);
  return _T15;
}
struct _fat_ptr Cyc_memchr(struct _fat_ptr s,char c,unsigned long n) {
  struct _fat_ptr _T0;
  struct _fat_ptr _T1;
  unsigned char * _T2;
  char * _T3;
  struct Cyc_Core_Invalid_argument_exn_struct * _T4;
  void * _T5;
  struct _fat_ptr _T6;
  unsigned char * _T7;
  const char * _T8;
  char _T9;
  int _TA;
  unsigned long _TB;
  struct _fat_ptr _TC;
  struct _fat_ptr _TD;
  unsigned char * _TE;
  const char * _TF;
  char * _T10;
  const char * _T11;
  struct _fat_ptr _T12;
  unsigned int _T13;
  int _T14;
  struct _fat_ptr _T15;
  _T0 = s;
  { unsigned int sz = _get_fat_size(_T0,sizeof(char));
    _T1 = s;
    _T2 = _T1.curr;
    _T3 = (char *)_T2;
    if (_T3 == 0) { goto _TL157;
    }else { goto _TL158;
    }
    _TL158: if (n > sz) { goto _TL157;
    }else { goto _TL155;
    }
    _TL157: { struct Cyc_Core_Invalid_argument_exn_struct * _T16 = _cycalloc(sizeof(struct Cyc_Core_Invalid_argument_exn_struct));
      _T16->tag = Cyc_Core_Invalid_argument;
      _T16->f1 = _tag_fat("memchr",sizeof(char),7U);
      _T4 = (struct Cyc_Core_Invalid_argument_exn_struct *)_T16;
    }_T5 = (void *)_T4;
    _throw(_T5);
    goto _TL156;
    _TL155: _TL156: _T6 = s;
    _T7 = _untag_fat_ptr_check_bound(_T6,sizeof(char),1U);
    _T8 = (const char *)_T7;
    _T9 = c;
    _TA = (int)_T9;
    _TB = n;
    { char * p = memchr(_T8,_TA,_TB);
      if (p != 0) { goto _TL159;
      }
      _TC = _tag_fat(0,0,0);
      return _TC;
      _TL159: _TD = s;
      _TE = _untag_fat_ptr(_TD,sizeof(char),1U);
      _TF = (const char *)_TE;
      { unsigned int sval = (unsigned int)_TF;
	_T10 = p;
	_T11 = (const char *)_T10;
	{ unsigned int pval = (unsigned int)_T11;
	  unsigned int delta = pval - sval;
	  _T12 = s;
	  _T13 = delta;
	  _T14 = (int)_T13;
	  _T15 = _fat_ptr_plus(_T12,sizeof(char),_T14);
	  return _T15;
	}
      }
    }
  }
}
struct _fat_ptr Cyc_mmemchr(struct _fat_ptr s,char c,unsigned long n) {
  struct _fat_ptr _T0;
  struct _fat_ptr _T1;
  unsigned char * _T2;
  char * _T3;
  struct Cyc_Core_Invalid_argument_exn_struct * _T4;
  void * _T5;
  struct _fat_ptr _T6;
  unsigned char * _T7;
  const char * _T8;
  char _T9;
  int _TA;
  unsigned long _TB;
  struct _fat_ptr _TC;
  struct _fat_ptr _TD;
  unsigned char * _TE;
  const char * _TF;
  char * _T10;
  struct _fat_ptr _T11;
  unsigned int _T12;
  int _T13;
  struct _fat_ptr _T14;
  _T0 = s;
  { unsigned int sz = _get_fat_size(_T0,sizeof(char));
    _T1 = s;
    _T2 = _T1.curr;
    _T3 = (char *)_T2;
    if (_T3 == 0) { goto _TL15D;
    }else { goto _TL15E;
    }
    _TL15E: if (n > sz) { goto _TL15D;
    }else { goto _TL15B;
    }
    _TL15D: { struct Cyc_Core_Invalid_argument_exn_struct * _T15 = _cycalloc(sizeof(struct Cyc_Core_Invalid_argument_exn_struct));
      _T15->tag = Cyc_Core_Invalid_argument;
      _T15->f1 = _tag_fat("mmemchr",sizeof(char),8U);
      _T4 = (struct Cyc_Core_Invalid_argument_exn_struct *)_T15;
    }_T5 = (void *)_T4;
    _throw(_T5);
    goto _TL15C;
    _TL15B: _TL15C: _T6 = s;
    _T7 = _untag_fat_ptr_check_bound(_T6,sizeof(char),1U);
    _T8 = (const char *)_T7;
    _T9 = c;
    _TA = (int)_T9;
    _TB = n;
    { char * p = memchr(_T8,_TA,_TB);
      if (p != 0) { goto _TL15F;
      }
      _TC = _tag_fat(0,0,0);
      return _TC;
      _TL15F: _TD = s;
      _TE = _untag_fat_ptr(_TD,sizeof(char),1U);
      _TF = (const char *)_TE;
      { unsigned int sval = (unsigned int)_TF;
	_T10 = p;
	{ unsigned int pval = (unsigned int)_T10;
	  unsigned int delta = pval - sval;
	  _T11 = s;
	  _T12 = delta;
	  _T13 = (int)_T12;
	  _T14 = _fat_ptr_plus(_T11,sizeof(char),_T13);
	  return _T14;
	}
      }
    }
  }
}
struct _fat_ptr Cyc_memset(struct _fat_ptr s,char c,unsigned long n) {
  struct _fat_ptr _T0;
  unsigned char * _T1;
  char * _T2;
  unsigned long _T3;
  struct _fat_ptr _T4;
  unsigned int _T5;
  struct Cyc_Core_Invalid_argument_exn_struct * _T6;
  void * _T7;
  struct _fat_ptr _T8;
  unsigned char * _T9;
  char * _TA;
  void * _TB;
  char _TC;
  int _TD;
  unsigned long _TE;
  struct _fat_ptr _TF;
  _T0 = s;
  _T1 = _T0.curr;
  _T2 = (char *)_T1;
  if (_T2 == 0) { goto _TL163;
  }else { goto _TL164;
  }
  _TL164: _T3 = n;
  _T4 = s;
  _T5 = _get_fat_size(_T4,sizeof(char));
  if (_T3 > _T5) { goto _TL163;
  }else { goto _TL161;
  }
  _TL163: { struct Cyc_Core_Invalid_argument_exn_struct * _T10 = _cycalloc(sizeof(struct Cyc_Core_Invalid_argument_exn_struct));
    _T10->tag = Cyc_Core_Invalid_argument;
    _T10->f1 = _tag_fat("memset",sizeof(char),7U);
    _T6 = (struct Cyc_Core_Invalid_argument_exn_struct *)_T10;
  }_T7 = (void *)_T6;
  _throw(_T7);
  goto _TL162;
  _TL161: _TL162: _T8 = s;
  _T9 = _untag_fat_ptr_check_bound(_T8,sizeof(char),1U);
  _TA = (char *)_T9;
  _TB = (void *)_TA;
  _TC = c;
  _TD = (int)_TC;
  _TE = n;
  memset(_TB,_TD,_TE);
  _TF = s;
  return _TF;
}
void Cyc_bzero(struct _fat_ptr s,unsigned long n) {
  struct _fat_ptr _T0;
  unsigned char * _T1;
  char * _T2;
  struct _fat_ptr _T3;
  unsigned int _T4;
  unsigned long _T5;
  struct Cyc_Core_Invalid_argument_exn_struct * _T6;
  void * _T7;
  void (* _T8)(char *,unsigned long);
  void (* _T9)(void *,unsigned long);
  struct _fat_ptr _TA;
  unsigned char * _TB;
  char * _TC;
  unsigned long _TD;
  _T0 = s;
  _T1 = _T0.curr;
  _T2 = (char *)_T1;
  if (_T2 == 0) { goto _TL167;
  }else { goto _TL168;
  }
  _TL168: _T3 = s;
  _T4 = _get_fat_size(_T3,sizeof(char));
  _T5 = n;
  if (_T4 < _T5) { goto _TL167;
  }else { goto _TL165;
  }
  _TL167: { struct Cyc_Core_Invalid_argument_exn_struct * _TE = _cycalloc(sizeof(struct Cyc_Core_Invalid_argument_exn_struct));
    _TE->tag = Cyc_Core_Invalid_argument;
    _TE->f1 = _tag_fat("bzero",sizeof(char),6U);
    _T6 = (struct Cyc_Core_Invalid_argument_exn_struct *)_TE;
  }_T7 = (void *)_T6;
  _throw(_T7);
  goto _TL166;
  _TL165: _TL166: _T9 = bzero;
  { void (* _TE)(char *,unsigned long) = (void (*)(char *,unsigned long))_T9;
    _T8 = _TE;
  }_TA = s;
  _TB = _untag_fat_ptr_check_bound(_TA,sizeof(char),1U);
  _TC = (char *)_TB;
  _TD = n;
  _T8(_TC,_TD);
}
void Cyc__bcopy(struct _fat_ptr src,struct _fat_ptr dst,unsigned long n,unsigned int sz) {
  struct _fat_ptr _T0;
  unsigned char * _T1;
  void * _T2;
  struct _fat_ptr _T3;
  unsigned int _T4;
  unsigned long _T5;
  struct _fat_ptr _T6;
  unsigned char * _T7;
  void * _T8;
  struct _fat_ptr _T9;
  unsigned int _TA;
  unsigned long _TB;
  struct Cyc_Core_Invalid_argument_exn_struct * _TC;
  void * _TD;
  struct _fat_ptr _TE;
  unsigned char * _TF;
  const void * _T10;
  struct _fat_ptr _T11;
  unsigned char * _T12;
  void * _T13;
  unsigned long _T14;
  _T0 = src;
  _T1 = _T0.curr;
  _T2 = (void *)_T1;
  if (_T2 == 0) { goto _TL16B;
  }else { goto _TL16E;
  }
  _TL16E: _T3 = src;
  _T4 = _get_fat_size(_T3,sizeof(void));
  _T5 = n;
  if (_T4 < _T5) { goto _TL16B;
  }else { goto _TL16D;
  }
  _TL16D: _T6 = dst;
  _T7 = _T6.curr;
  _T8 = (void *)_T7;
  if (_T8 == 0) { goto _TL16B;
  }else { goto _TL16C;
  }
  _TL16C: _T9 = dst;
  _TA = _get_fat_size(_T9,sizeof(void));
  _TB = n;
  if (_TA < _TB) { goto _TL16B;
  }else { goto _TL169;
  }
  _TL16B: { struct Cyc_Core_Invalid_argument_exn_struct * _T15 = _cycalloc(sizeof(struct Cyc_Core_Invalid_argument_exn_struct));
    _T15->tag = Cyc_Core_Invalid_argument;
    _T15->f1 = _tag_fat("bcopy",sizeof(char),6U);
    _TC = (struct Cyc_Core_Invalid_argument_exn_struct *)_T15;
  }_TD = (void *)_TC;
  _throw(_TD);
  goto _TL16A;
  _TL169: _TL16A: _TE = src;
  _TF = _untag_fat_ptr_check_bound(_TE,sizeof(void),1U);
  _T10 = (const void *)_TF;
  _T11 = dst;
  _T12 = _untag_fat_ptr_check_bound(_T11,sizeof(void),1U);
  _T13 = (void *)_T12;
  _T14 = n * sz;
  bcopy(_T10,_T13,_T14);
}
