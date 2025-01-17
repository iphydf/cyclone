#include <cyc_include.h>
extern unsigned long Cyc_strlen(struct _fat_ptr);
static char Cyc_Base64_encode_map[65U] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
unsigned int Cyc_Base64_encoding_length(unsigned int len) {
  unsigned int _T0;
  int _T1;
  unsigned int _T2;
  int _T3;
  unsigned int _T4;
  unsigned int _T5;
  unsigned int _T6;
  _T0 = len / 3U;
  _T2 = len % 3U;
  _T3 = (int)_T2;
  if (! _T3) { goto _TL0;
  }
  _T1 = 1;
  goto _TL1;
  _TL0: _T1 = 0;
  _TL1: _T4 = (unsigned int)_T1;
  _T5 = _T0 + _T4;
  _T6 = 4U * _T5;
  return _T6;
}
int Cyc_Base64_encode(struct _fat_ptr src,struct _fat_ptr dest,unsigned int src_len) {
  struct _handler_cons * _T0;
  int _T1;
  struct _fat_ptr _T2;
  unsigned int _T3;
  unsigned int _T4;
  int _T5;
  unsigned char * _T6;
  const char * _T7;
  int _T8;
  struct _fat_ptr _T9;
  unsigned int _TA;
  int _TB;
  unsigned char * _TC;
  const char * _TD;
  char _TE;
  int _TF;
  struct _fat_ptr _T10;
  unsigned int _T11;
  int _T12;
  unsigned char * _T13;
  const char * _T14;
  char _T15;
  char _T16;
  int _T17;
  int _T18;
  int _T19;
  int _T1A;
  int _T1B;
  int _T1C;
  struct _fat_ptr _T1D;
  unsigned int _T1E;
  unsigned int _T1F;
  int _T20;
  unsigned char * _T21;
  char * _T22;
  char * _T23;
  int _T24;
  char * _T25;
  char * _T26;
  unsigned int _T27;
  unsigned char * _T28;
  char * _T29;
  struct _fat_ptr _T2A;
  unsigned int _T2B;
  unsigned int _T2C;
  int _T2D;
  unsigned char * _T2E;
  char * _T2F;
  char * _T30;
  int _T31;
  char * _T32;
  char * _T33;
  unsigned int _T34;
  unsigned char * _T35;
  char * _T36;
  struct _fat_ptr _T37;
  unsigned int _T38;
  unsigned int _T39;
  int _T3A;
  unsigned char * _T3B;
  char * _T3C;
  char * _T3D;
  int _T3E;
  char * _T3F;
  char * _T40;
  unsigned int _T41;
  unsigned char * _T42;
  char * _T43;
  struct _fat_ptr _T44;
  unsigned int _T45;
  unsigned int _T46;
  int _T47;
  unsigned char * _T48;
  char * _T49;
  char * _T4A;
  int _T4B;
  char * _T4C;
  char * _T4D;
  unsigned int _T4E;
  unsigned char * _T4F;
  char * _T50;
  unsigned int _T51;
  int _T52;
  struct _fat_ptr _T53;
  unsigned int _T54;
  int _T55;
  unsigned char * _T56;
  char * _T57;
  unsigned int _T58;
  unsigned char * _T59;
  char * _T5A;
  void * _T5B;
  struct _handler_cons _T5C;
  _T0 = &_T5C;
  _push_handler(_T0);
  { int _T5D = 0;
    _T1 = setjmp(_T5C.handler);
    if (! _T1) { goto _TL2;
    }
    _T5D = 1;
    goto _TL3;
    _TL2: _TL3: if (_T5D) { goto _TL4;
    }else { goto _TL6;
    }
    _TL6: { unsigned int i = 0U;
      unsigned int j = 0U;
      _TL7: if (i < src_len) { goto _TL8;
      }else { goto _TL9;
      }
      _TL8: _T2 = src;
      _T3 = i;
      i = _T3 + 1;
      _T4 = _T3;
      _T5 = (int)_T4;
      _T6 = _check_fat_subscript(_T2,sizeof(char),_T5);
      _T7 = (const char *)_T6;
      { char b1 = *_T7;
	if (i >= src_len) { goto _TLA;
	}
	_T9 = src;
	_TA = i;
	_TB = (int)_TA;
	_TC = _check_fat_subscript(_T9,sizeof(char),_TB);
	_TD = (const char *)_TC;
	_TE = *_TD;
	_T8 = (int)_TE;
	goto _TLB;
	_TLA: _T8 = 0;
	_TLB: { int b2 = _T8;
	  i = i + 1;
	  if (i >= src_len) { goto _TLC;
	  }
	  _T10 = src;
	  _T11 = i;
	  _T12 = (int)_T11;
	  _T13 = _check_fat_subscript(_T10,sizeof(char),_T12);
	  _T14 = (const char *)_T13;
	  _T15 = *_T14;
	  _TF = (int)_T15;
	  goto _TLD;
	  _TLC: _TF = 0;
	  _TLD: { int b3 = _TF;
	    i = i + 1;
	    _T16 = b1 << 16;
	    _T17 = (int)_T16;
	    _T18 = b2 << 8;
	    _T19 = _T17 | _T18;
	    _T1A = b3;
	    { int r = _T19 | _T1A;
	      int a = r >> 18;
	      _T1B = r >> 12;
	      { int b = _T1B & 63;
		_T1C = r >> 6;
		{ int c = _T1C & 63;
		  int d = r & 63;
		  _T1D = dest;
		  _T1E = j;
		  j = _T1E + 1;
		  _T1F = _T1E;
		  _T20 = (int)_T1F;
		  { struct _fat_ptr _T5E = _fat_ptr_plus(_T1D,sizeof(char),
							 _T20);
		    _T21 = _check_fat_subscript(_T5E,sizeof(char),0U);
		    _T22 = (char *)_T21;
		    { char _T5F = *_T22;
		      _T23 = Cyc_Base64_encode_map;
		      _T24 = a;
		      _T25 = _check_known_subscript_notnull(_T23,65U,sizeof(char),
							    _T24);
		      _T26 = (char *)_T25;
		      { char _T60 = *_T26;
			_T27 = _get_fat_size(_T5E,sizeof(char));
			if (_T27 != 1U) { goto _TLE;
			}
			if (_T5F != 0) { goto _TLE;
			}
			if (_T60 == 0) { goto _TLE;
			}
			_throw_arraybounds();
			goto _TLF;
			_TLE: _TLF: _T28 = _T5E.curr;
			_T29 = (char *)_T28;
			*_T29 = _T60;
		      }
		    }
		  }_T2A = dest;
		  _T2B = j;
		  j = _T2B + 1;
		  _T2C = _T2B;
		  _T2D = (int)_T2C;
		  { struct _fat_ptr _T5E = _fat_ptr_plus(_T2A,sizeof(char),
							 _T2D);
		    _T2E = _check_fat_subscript(_T5E,sizeof(char),0U);
		    _T2F = (char *)_T2E;
		    { char _T5F = *_T2F;
		      _T30 = Cyc_Base64_encode_map;
		      _T31 = b;
		      _T32 = _check_known_subscript_notnull(_T30,65U,sizeof(char),
							    _T31);
		      _T33 = (char *)_T32;
		      { char _T60 = *_T33;
			_T34 = _get_fat_size(_T5E,sizeof(char));
			if (_T34 != 1U) { goto _TL10;
			}
			if (_T5F != 0) { goto _TL10;
			}
			if (_T60 == 0) { goto _TL10;
			}
			_throw_arraybounds();
			goto _TL11;
			_TL10: _TL11: _T35 = _T5E.curr;
			_T36 = (char *)_T35;
			*_T36 = _T60;
		      }
		    }
		  }_T37 = dest;
		  _T38 = j;
		  j = _T38 + 1;
		  _T39 = _T38;
		  _T3A = (int)_T39;
		  { struct _fat_ptr _T5E = _fat_ptr_plus(_T37,sizeof(char),
							 _T3A);
		    _T3B = _check_fat_subscript(_T5E,sizeof(char),0U);
		    _T3C = (char *)_T3B;
		    { char _T5F = *_T3C;
		      _T3D = Cyc_Base64_encode_map;
		      _T3E = c;
		      _T3F = _check_known_subscript_notnull(_T3D,65U,sizeof(char),
							    _T3E);
		      _T40 = (char *)_T3F;
		      { char _T60 = *_T40;
			_T41 = _get_fat_size(_T5E,sizeof(char));
			if (_T41 != 1U) { goto _TL12;
			}
			if (_T5F != 0) { goto _TL12;
			}
			if (_T60 == 0) { goto _TL12;
			}
			_throw_arraybounds();
			goto _TL13;
			_TL12: _TL13: _T42 = _T5E.curr;
			_T43 = (char *)_T42;
			*_T43 = _T60;
		      }
		    }
		  }_T44 = dest;
		  _T45 = j;
		  j = _T45 + 1;
		  _T46 = _T45;
		  _T47 = (int)_T46;
		  { struct _fat_ptr _T5E = _fat_ptr_plus(_T44,sizeof(char),
							 _T47);
		    _T48 = _check_fat_subscript(_T5E,sizeof(char),0U);
		    _T49 = (char *)_T48;
		    { char _T5F = *_T49;
		      _T4A = Cyc_Base64_encode_map;
		      _T4B = d;
		      _T4C = _check_known_subscript_notnull(_T4A,65U,sizeof(char),
							    _T4B);
		      _T4D = (char *)_T4C;
		      { char _T60 = *_T4D;
			_T4E = _get_fat_size(_T5E,sizeof(char));
			if (_T4E != 1U) { goto _TL14;
			}
			if (_T5F != 0) { goto _TL14;
			}
			if (_T60 == 0) { goto _TL14;
			}
			_throw_arraybounds();
			goto _TL15;
			_TL14: _TL15: _T4F = _T5E.curr;
			_T50 = (char *)_T4F;
			*_T50 = _T60;
		      }
		    }
		  }
		}
	      }
	    }
	  }
	}
      }goto _TL7;
      _TL9: { unsigned int k = i - src_len;
	_TL19: _T51 = k;
	_T52 = (int)_T51;
	if (_T52) { goto _TL17;
	}else { goto _TL18;
	}
	_TL17: _T53 = dest;
	_T54 = j - k;
	_T55 = (int)_T54;
	{ struct _fat_ptr _T5E = _fat_ptr_plus(_T53,sizeof(char),_T55);
	  _T56 = _check_fat_subscript(_T5E,sizeof(char),0U);
	  _T57 = (char *)_T56;
	  { char _T5F = *_T57;
	    char _T60 = '=';
	    _T58 = _get_fat_size(_T5E,sizeof(char));
	    if (_T58 != 1U) { goto _TL1A;
	    }
	    if (_T5F != 0) { goto _TL1A;
	    }
	    if (_T60 == 0) { goto _TL1A;
	    }
	    _throw_arraybounds();
	    goto _TL1B;
	    _TL1A: _TL1B: _T59 = _T5E.curr;
	    _T5A = (char *)_T59;
	    *_T5A = _T60;
	  }
	}k = k + -1;
	goto _TL19;
	_TL18: ;
      }{ int _T5E = 0;
	_npop_handler(0);
	return _T5E;
      }
    }_pop_handler();
    goto _TL5;
    _TL4: _T5B = Cyc_Core_get_exn_thrown();
    { void * _T5E = (void *)_T5B;
      return 1;
      ;
    }_TL5: ;
  }
}
static struct _fat_ptr Cyc_Base64_encode_n(struct _fat_ptr src,unsigned int src_len) {
  struct _fat_ptr _T0;
  unsigned char * _T1;
  unsigned int _T2;
  struct _fat_ptr _T3;
  unsigned int _T4;
  int _T5;
  struct _fat_ptr _T6;
  struct _fat_ptr _T7;
  void * _T8;
  int _T9;
  struct _fat_ptr _TA;
  struct _fat_ptr _TB;
  _T0 = src;
  _T1 = _T0.curr;
  _T2 = (unsigned int)_T1;
  if (_T2) { goto _TL1C;
  }else { goto _TL1E;
  }
  _TL1E: _T3 = _tag_fat(0,0,0);
  return _T3;
  _TL1C: _T4 = src_len;
  _T5 = (int)_T4;
  if (_T5) { goto _TL1F;
  }else { goto _TL21;
  }
  _TL21: _T6 = _tag_fat(0,0,0);
  return _T6;
  _TL1F: { unsigned int dest_len = Cyc_Base64_encoding_length(src_len);
    { unsigned int _TC = dest_len + 1U;
      _T8 = _cyccalloc_atomic(sizeof(char),_TC);
      _T7 = _tag_fat(_T8,sizeof(char),_TC);
    }{ struct _fat_ptr dest = _T7;
      _T9 = Cyc_Base64_encode(src,dest,src_len);
      if (! _T9) { goto _TL22;
      }
      _TA = _tag_fat(0,0,0);
      return _TA;
      _TL22: _TB = dest;
      return _TB;
    }
  }
}
struct _fat_ptr Cyc_Base64_aencode(struct _fat_ptr src) {
  struct _fat_ptr _T0;
  unsigned char * _T1;
  unsigned int _T2;
  struct _fat_ptr _T3;
  struct _fat_ptr _T4;
  struct _fat_ptr _T5;
  _T0 = src;
  _T1 = _T0.curr;
  _T2 = (unsigned int)_T1;
  if (_T2) { goto _TL24;
  }else { goto _TL26;
  }
  _TL26: _T3 = _tag_fat(0,0,0);
  return _T3;
  _TL24: _T4 = src;
  { unsigned int src_len = _get_fat_size(_T4,sizeof(char));
    _T5 = Cyc_Base64_encode_n(src,src_len);
    return _T5;
  }
}
struct _fat_ptr Cyc_Base64_aencode_zeroterm(struct _fat_ptr src) {
  struct _fat_ptr _T0;
  unsigned char * _T1;
  unsigned int _T2;
  struct _fat_ptr _T3;
  struct _fat_ptr _T4;
  _T0 = src;
  _T1 = _T0.curr;
  _T2 = (unsigned int)_T1;
  if (_T2) { goto _TL27;
  }else { goto _TL29;
  }
  _TL29: _T3 = _tag_fat(0,0,0);
  return _T3;
  _TL27: { unsigned long src_len = Cyc_strlen(src);
    _T4 = Cyc_Base64_encode_n(src,src_len);
    return _T4;
  }
}
static int Cyc_Base64_decode_char(char c) {
  char _T0;
  int _T1;
  char _T2;
  int _T3;
  char _T4;
  int _T5;
  int _T6;
  char _T7;
  int _T8;
  char _T9;
  int _TA;
  char _TB;
  int _TC;
  int _TD;
  int _TE;
  char _TF;
  int _T10;
  char _T11;
  int _T12;
  char _T13;
  int _T14;
  int _T15;
  int _T16;
  char _T17;
  int _T18;
  char _T19;
  int _T1A;
  char _T1B;
  int _T1C;
  int _T1D;
  _T0 = c;
  _T1 = (int)_T0;
  if (65 > _T1) { goto _TL2A;
  }
  _T2 = c;
  _T3 = (int)_T2;
  if (_T3 > 90) { goto _TL2A;
  }
  _T4 = c;
  _T5 = (int)_T4;
  _T6 = _T5 - 65;
  return _T6;
  _TL2A: _T7 = c;
  _T8 = (int)_T7;
  if (97 > _T8) { goto _TL2C;
  }
  _T9 = c;
  _TA = (int)_T9;
  if (_TA > 122) { goto _TL2C;
  }
  _TB = c;
  _TC = (int)_TB;
  _TD = _TC - 97;
  _TE = _TD + 26;
  return _TE;
  _TL2C: _TF = c;
  _T10 = (int)_TF;
  if (48 > _T10) { goto _TL2E;
  }
  _T11 = c;
  _T12 = (int)_T11;
  if (_T12 > 57) { goto _TL2E;
  }
  _T13 = c;
  _T14 = (int)_T13;
  _T15 = _T14 - 48;
  _T16 = _T15 + 52;
  return _T16;
  _TL2E: _T17 = c;
  _T18 = (int)_T17;
  if (_T18 != 43) { goto _TL30;
  }
  return 62;
  _TL30: _T19 = c;
  _T1A = (int)_T19;
  if (_T1A != 47) { goto _TL32;
  }
  return 63;
  _TL32: _T1B = c;
  _T1C = (int)_T1B;
  if (_T1C != 61) { goto _TL34;
  }
  return 0;
  _TL34: _T1D = - 1;
  return _T1D;
}
unsigned int Cyc_Base64_decoding_length(struct _fat_ptr src) {
  unsigned long _T0;
  int _T1;
  unsigned long _T2;
  int _T3;
  struct _fat_ptr _T4;
  unsigned long _T5;
  int _T6;
  unsigned char * _T7;
  const char * _T8;
  char _T9;
  int _TA;
  struct _fat_ptr _TB;
  unsigned char * _TC;
  const char * _TD;
  unsigned long _TE;
  int _TF;
  char _T10;
  int _T11;
  unsigned long _T12;
  unsigned long _T13;
  int _T14;
  unsigned long _T15;
  unsigned long _T16;
  unsigned long len = Cyc_strlen(src);
  _T0 = len;
  _T1 = (int)_T0;
  if (_T1) { goto _TL36;
  }else { goto _TL38;
  }
  _TL38: return 0U;
  _TL36: _T2 = len % 4U;
  _T3 = (int)_T2;
  if (! _T3) { goto _TL39;
  }
  return 0U;
  _TL39: { int pad = 0;
    _T4 = src;
    _T5 = len;
    _T6 = (int)_T5;
    _T7 = _check_fat_subscript(_T4,sizeof(char),_T6);
    _T8 = (const char *)_T7;
    _T9 = *_T8;
    _TA = (int)_T9;
    if (_TA != 61) { goto _TL3B;
    }
    pad = pad + 1;
    _TB = src;
    _TC = _TB.curr;
    _TD = (const char *)_TC;
    _TE = len - 1U;
    _TF = (int)_TE;
    _T10 = _TD[_TF];
    _T11 = (int)_T10;
    if (_T11 != 61) { goto _TL3D;
    }
    pad = pad + 1;
    goto _TL3E;
    _TL3D: _TL3E: goto _TL3C;
    _TL3B: _TL3C: _T12 = len / 4U;
    _T13 = _T12 * 3U;
    _T14 = pad;
    _T15 = (unsigned long)_T14;
    _T16 = _T13 - _T15;
    return _T16;
  }
}
int Cyc_Base64_decode(struct _fat_ptr src,struct _fat_ptr dest) {
  struct _fat_ptr _T0;
  unsigned char * _T1;
  const char * _T2;
  const char * _T3;
  unsigned int _T4;
  unsigned int _T5;
  int _T6;
  char _T7;
  struct _fat_ptr _T8;
  unsigned int _T9;
  unsigned int _TA;
  int _TB;
  unsigned char * _TC;
  const char * _TD;
  char _TE;
  struct _fat_ptr _TF;
  unsigned int _T10;
  unsigned int _T11;
  int _T12;
  unsigned char * _T13;
  const char * _T14;
  char _T15;
  struct _fat_ptr _T16;
  unsigned int _T17;
  unsigned int _T18;
  int _T19;
  unsigned char * _T1A;
  const char * _T1B;
  char _T1C;
  int _T1D;
  int _T1E;
  int _T1F;
  int _T20;
  int _T21;
  int _T22;
  struct _fat_ptr _T23;
  unsigned int _T24;
  unsigned int _T25;
  int _T26;
  unsigned char * _T27;
  char * _T28;
  int _T29;
  struct _fat_ptr _T2A;
  unsigned int _T2B;
  unsigned int _T2C;
  int _T2D;
  unsigned char * _T2E;
  char * _T2F;
  int _T30;
  int _T31;
  struct _fat_ptr _T32;
  unsigned int _T33;
  unsigned int _T34;
  int _T35;
  unsigned char * _T36;
  char * _T37;
  int _T38;
  unsigned long src_len = Cyc_strlen(src);
  unsigned int dest_len = Cyc_Base64_decoding_length(src);
  unsigned int i = 0U;
  unsigned int j = 0U;
  _TL3F: if (i < src_len) { goto _TL40;
  }else { goto _TL41;
  }
  _TL40: _T0 = src;
  _T1 = _T0.curr;
  _T2 = (const char *)_T1;
  _T3 = _check_null(_T2);
  _T4 = i;
  i = _T4 + 1;
  _T5 = _T4;
  _T6 = (int)_T5;
  _T7 = _T3[_T6];
  { int a = Cyc_Base64_decode_char(_T7);
    if (a >= 0) { goto _TL42;
    }
    return 1;
    _TL42: _T8 = src;
    _T9 = i;
    i = _T9 + 1;
    _TA = _T9;
    _TB = (int)_TA;
    _TC = _check_fat_subscript(_T8,sizeof(char),_TB);
    _TD = (const char *)_TC;
    _TE = *_TD;
    { int b = Cyc_Base64_decode_char(_TE);
      if (b >= 0) { goto _TL44;
      }
      return 1;
      _TL44: _TF = src;
      _T10 = i;
      i = _T10 + 1;
      _T11 = _T10;
      _T12 = (int)_T11;
      _T13 = _check_fat_subscript(_TF,sizeof(char),_T12);
      _T14 = (const char *)_T13;
      _T15 = *_T14;
      { int c = Cyc_Base64_decode_char(_T15);
	if (c >= 0) { goto _TL46;
	}
	return 1;
	_TL46: _T16 = src;
	_T17 = i;
	i = _T17 + 1;
	_T18 = _T17;
	_T19 = (int)_T18;
	_T1A = _check_fat_subscript(_T16,sizeof(char),_T19);
	_T1B = (const char *)_T1A;
	_T1C = *_T1B;
	{ int d = Cyc_Base64_decode_char(_T1C);
	  if (d >= 0) { goto _TL48;
	  }
	  return 1;
	  _TL48: _T1D = a << 18;
	  _T1E = b << 12;
	  _T1F = _T1D | _T1E;
	  _T20 = c << 6;
	  _T21 = _T1F | _T20;
	  _T22 = d;
	  { int r = _T21 | _T22;
	    _T23 = dest;
	    _T24 = j;
	    j = _T24 + 1;
	    _T25 = _T24;
	    _T26 = (int)_T25;
	    _T27 = _check_fat_subscript(_T23,sizeof(char),_T26);
	    _T28 = (char *)_T27;
	    _T29 = r >> 16;
	    *_T28 = (char)_T29;
	    if (j <= dest_len) { goto _TL4A;
	    }
	    goto _TL41;
	    _TL4A: _T2A = dest;
	    _T2B = j;
	    j = _T2B + 1;
	    _T2C = _T2B;
	    _T2D = (int)_T2C;
	    _T2E = _check_fat_subscript(_T2A,sizeof(char),_T2D);
	    _T2F = (char *)_T2E;
	    _T30 = r >> 8;
	    _T31 = _T30 & 255;
	    *_T2F = (char)_T31;
	    if (j <= dest_len) { goto _TL4C;
	    }
	    goto _TL41;
	    _TL4C: _T32 = dest;
	    _T33 = j;
	    j = _T33 + 1;
	    _T34 = _T33;
	    _T35 = (int)_T34;
	    _T36 = _check_fat_subscript(_T32,sizeof(char),_T35);
	    _T37 = (char *)_T36;
	    _T38 = r & 255;
	    *_T37 = (char)_T38;
	  }
	}
      }
    }
  }goto _TL3F;
  _TL41: return 0;
}
struct _fat_ptr Cyc_Base64_adecode(struct _fat_ptr src) {
  unsigned int _T0;
  int _T1;
  struct _fat_ptr _T2;
  struct _fat_ptr _T3;
  void * _T4;
  int _T5;
  struct _fat_ptr _T6;
  struct _fat_ptr _T7;
  unsigned int dest_len = Cyc_Base64_decoding_length(src);
  _T0 = dest_len;
  _T1 = (int)_T0;
  if (_T1) { goto _TL4E;
  }else { goto _TL50;
  }
  _TL50: _T2 = _tag_fat(0,0,0);
  return _T2;
  _TL4E: { unsigned int _T8 = dest_len;
    _T4 = _cycalloc_atomic(_T8);
    _T3 = _tag_fat(_T4,1U,_T8);
  }{ struct _fat_ptr dest = _T3;
    _T5 = Cyc_Base64_decode(src,dest);
    if (! _T5) { goto _TL51;
    }
    _T6 = _tag_fat(0,0,0);
    return _T6;
    _TL51: _T7 = dest;
    return _T7;
  }
}
