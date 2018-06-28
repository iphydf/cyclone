#include <cyc_include.h>
struct Cyc___cycFILE;
extern int Cyc_getc(struct Cyc___cycFILE *);
extern int Cyc_ungetc(int,struct Cyc___cycFILE *);
extern int isalnum(int);
extern int isalpha(int);
extern int isdigit(int);
struct Cyc___cycFILE;
extern int Cyc_getc(struct Cyc___cycFILE *);
extern int Cyc_ungetc(int,struct Cyc___cycFILE *);
extern int isalnum(int);
extern int isalpha(int);
extern int isdigit(int);
extern int Cyc_strcmp(struct _fat_ptr,struct _fat_ptr);
extern struct _fat_ptr Cyc_strcpy(struct _fat_ptr,struct _fat_ptr);
extern struct Cyc___cycFILE * Cyc_finput;
 struct Cyc_bucket {
  struct Cyc_bucket * link;
  struct Cyc_bucket * next;
  struct _fat_ptr tag;
  struct _fat_ptr type_name;
  short value;
  short prec;
  short assoc;
  short user_token_number;
  struct Cyc_bucket * _alias;
  char class;
};
extern struct Cyc_bucket * Cyc_getsym(struct _fat_ptr);
extern int Cyc_toknumflag;
extern int Cyc_nolinesflag;
extern int Cyc_rawtoknumflag;
extern int Cyc_lineno;
extern int Cyc_translations;
int Cyc_parse_percent_token();
extern struct _fat_ptr Cyc_printable_version(char);
extern void Cyc_fatal(struct _fat_ptr);
extern void Cyc_warni(struct _fat_ptr,int);
extern void Cyc_warns(struct _fat_ptr,struct _fat_ptr);
extern void Cyc_warn(struct _fat_ptr);
struct _fat_ptr Cyc_token_buffer;
int Cyc_maxtoken;
struct Cyc_bucket * Cyc_symval;
int Cyc_numval;
static int Cyc_unlexed;
static struct Cyc_bucket * Cyc_unlexed_symval;
void Cyc_init_lex() {
  struct _fat_ptr _T0;
  int _T1;
  unsigned int _T2;
  char * _T3;
  unsigned int _T4;
  unsigned int _T5;
  Cyc_maxtoken = 100;
  _T1 = Cyc_maxtoken + 1;
  _T2 = (unsigned int)_T1;
  { unsigned int _T6 = _T2 + 1U;
    _T4 = _check_times(_T6,sizeof(char));
    { char * _T7 = _cycalloc_atomic(_T4);
      { unsigned int _T8 = _T6;
	unsigned int _new2_cyclone;
	_new2_cyclone = 0;
	_TL3: if (_new2_cyclone < _T8) { goto _TL1;
	}else { goto _TL2;
	}
	_TL1: _T5 = _new2_cyclone;
	_T7[_T5] = '\000';
	_new2_cyclone = _new2_cyclone + 1;
	goto _TL3;
	_TL2: _T7[_T8] = 0;
      }_T3 = (char *)_T7;
    }_T0 = _tag_fat(_T3,sizeof(char),_T6);
  }Cyc_token_buffer = _T0;
  Cyc_unlexed = - 1;
}
struct _fat_ptr Cyc_grow_token_buffer(struct _fat_ptr p) {
  struct _fat_ptr _T0;
  unsigned char * _T1;
  struct _fat_ptr _T2;
  unsigned char * _T3;
  int _T4;
  struct _fat_ptr _T5;
  int _T6;
  unsigned int _T7;
  char * _T8;
  unsigned int _T9;
  unsigned int _TA;
  unsigned int _TB;
  struct _fat_ptr _TC;
  unsigned int _TD;
  struct _fat_ptr _TE;
  unsigned int _TF;
  int _T10;
  unsigned char * _T11;
  char * _T12;
  struct _fat_ptr _T13;
  unsigned char * _T14;
  char * _T15;
  char * _T16;
  unsigned int _T17;
  int _T18;
  unsigned int _T19;
  unsigned char * _T1A;
  char * _T1B;
  struct _fat_ptr _T1C;
  int _T1D;
  struct _fat_ptr _T1E;
  _T0 = p;
  _T1 = _T0.curr;
  _T2 = Cyc_token_buffer;
  _T3 = _T2.curr;
  _T4 = _T1 - _T3;
  { int offset = _T4 / sizeof(char);
    Cyc_maxtoken = Cyc_maxtoken * 2;
    _T6 = Cyc_maxtoken + 1;
    _T7 = (unsigned int)_T6;
    { unsigned int _T1F = _T7 + 1U;
      _T9 = _check_times(_T1F,sizeof(char));
      { char * _T20 = _cycalloc_atomic(_T9);
	{ unsigned int _T21 = _T1F;
	  unsigned int _temp_;
	  _temp_ = 0;
	  _TL7: if (_temp_ < _T21) { goto _TL5;
	  }else { goto _TL6;
	  }
	  _TL5: _TA = _temp_;
	  _T20[_TA] = '\000';
	  _temp_ = _temp_ + 1;
	  goto _TL7;
	  _TL6: _T20[_T21] = 0;
	}_T8 = (char *)_T20;
      }_T5 = _tag_fat(_T8,sizeof(char),_T1F);
    }{ struct _fat_ptr new_token_buffer = _T5;
      { unsigned int i = 0U;
	_TLB: _TB = i;
	_TC = Cyc_token_buffer;
	_TD = _get_fat_size(_TC,sizeof(char));
	if (_TB < _TD) { goto _TL9;
	}else { goto _TLA;
	}
	_TL9: _TE = new_token_buffer;
	_TF = i;
	_T10 = (int)_TF;
	{ struct _fat_ptr _T1F = _fat_ptr_plus(_TE,sizeof(char),_T10);
	  _T11 = _check_fat_subscript(_T1F,sizeof(char),0U);
	  _T12 = (char *)_T11;
	  { char _T20 = *_T12;
	    _T13 = Cyc_token_buffer;
	    _T14 = _T13.curr;
	    _T15 = (char *)_T14;
	    _T16 = _check_null(_T15);
	    _T17 = i;
	    _T18 = (int)_T17;
	    { char _T21 = _T16[_T18];
	      _T19 = _get_fat_size(_T1F,sizeof(char));
	      if (_T19 != 1U) { goto _TLC;
	      }
	      if (_T20 != 0) { goto _TLC;
	      }
	      if (_T21 == 0) { goto _TLC;
	      }
	      _throw_arraybounds();
	      goto _TLD;
	      _TLC: _TLD: _T1A = _T1F.curr;
	      _T1B = (char *)_T1A;
	      *_T1B = _T21;
	    }
	  }
	}i = i + 1;
	goto _TLB;
	_TLA: ;
      }Cyc_token_buffer = new_token_buffer;
      _T1C = Cyc_token_buffer;
      _T1D = offset;
      _T1E = _fat_ptr_plus(_T1C,sizeof(char),_T1D);
      return _T1E;
    }
  }
}
int Cyc_skip_white_space() {
  struct Cyc___cycFILE * _T0;
  int _T1;
  int _T2;
  struct Cyc___cycFILE * _T3;
  struct _fat_ptr _T4;
  struct Cyc___cycFILE * _T5;
  int _T6;
  int _T7;
  struct Cyc___cycFILE * _T8;
  struct Cyc___cycFILE * _T9;
  int _TA;
  struct Cyc___cycFILE * _TB;
  int _TC;
  int _TD;
  struct _fat_ptr _TE;
  int _TF;
  register int c;
  register int inside;
  _T0 = _check_null(Cyc_finput);
  c = Cyc_getc(_T0);
  _TL11: if (1) { goto _TLF;
  }else { goto _TL10;
  }
  _TLF: { int cplus_comment;
    _T1 = c;
    _T2 = (int)_T1;
    switch (_T2) {
    case 47: 
      _T3 = _check_null(Cyc_finput);
      c = Cyc_getc(_T3);
      if (c == 42) { goto _TL13;
      }
      if (c == 47) { goto _TL13;
      }
      _T4 = _tag_fat("unexpected `/' found and ignored",sizeof(char),33U);
      Cyc_warn(_T4);
      goto _LL0;
      _TL13: cplus_comment = c == 47;
      _T5 = _check_null(Cyc_finput);
      c = Cyc_getc(_T5);
      inside = 1;
      _TL15: _T6 = inside;
      if (_T6) { goto _TL16;
      }else { goto _TL17;
      }
      _TL16: _T7 = cplus_comment;
      if (_T7) { goto _TL18;
      }else { goto _TL1A;
      }
      _TL1A: if (c != 42) { goto _TL18;
      }
      _TL1B: if (c == 42) { goto _TL1C;
      }else { goto _TL1D;
      }
      _TL1C: _T8 = _check_null(Cyc_finput);
      c = Cyc_getc(_T8);
      goto _TL1B;
      _TL1D: if (c != 47) { goto _TL1E;
      }
      inside = 0;
      _T9 = _check_null(Cyc_finput);
      c = Cyc_getc(_T9);
      goto _TL1F;
      _TL1E: _TL1F: goto _TL19;
      _TL18: if (c != 10) { goto _TL20;
      }
      Cyc_lineno = Cyc_lineno + 1;
      _TA = cplus_comment;
      if (! _TA) { goto _TL22;
      }
      inside = 0;
      goto _TL23;
      _TL22: _TL23: _TB = _check_null(Cyc_finput);
      c = Cyc_getc(_TB);
      goto _TL21;
      _TL20: _TC = c;
      _TD = - 1;
      if (_TC != _TD) { goto _TL24;
      }
      _TE = _tag_fat("unterminated comment",sizeof(char),21U);
      Cyc_fatal(_TE);
      goto _TL25;
      _TL24: c = Cyc_getc(Cyc_finput);
      _TL25: _TL21: _TL19: goto _TL15;
      _TL17: goto _LL0;
    case 10: 
      Cyc_lineno = Cyc_lineno + 1;
      goto _LL6;
    case 32: 
      _LL6: goto _LL8;
    case 9: 
      _LL8: goto _LLA;
    case 12: 
      _LLA: goto _LLC;
    case 13: 
      _LLC: c = Cyc_getc(Cyc_finput);
      goto _LL0;
    default: 
      _TF = c;
      return _TF;
    }
    _LL0: ;
  }goto _TL11;
  _TL10: ;
}
int Cyc_safegetc(struct Cyc___cycFILE * f) {
  struct Cyc___cycFILE * _T0;
  int _T1;
  int _T2;
  struct _fat_ptr _T3;
  int _T4;
  _T0 = _check_null(f);
  { register int c = Cyc_getc(_T0);
    _T1 = c;
    _T2 = - 1;
    if (_T1 != _T2) { goto _TL26;
    }
    _T3 = _tag_fat("Unexpected end of file",sizeof(char),23U);
    Cyc_fatal(_T3);
    goto _TL27;
    _TL26: _TL27: _T4 = c;
    return _T4;
  }
}
int Cyc_literalchar(struct _fat_ptr * pp,int * pcode,char term) {
  struct _fat_ptr _T0;
  int _T1;
  char _T2;
  int _T3;
  int _T4;
  int _T5;
  struct _fat_ptr _T6;
  int _T7;
  int _T8;
  int _T9;
  int _TA;
  int _TB;
  int _TC;
  struct _fat_ptr _TD;
  int _TE;
  int _TF;
  struct Cyc___cycFILE * _T10;
  struct _fat_ptr _T11;
  int _T12;
  char _T13;
  struct _fat_ptr _T14;
  struct _fat_ptr * _T15;
  struct _fat_ptr * _T16;
  unsigned char * _T17;
  char * _T18;
  int _T19;
  unsigned int _T1A;
  unsigned char * _T1B;
  char * _T1C;
  struct _fat_ptr * _T1D;
  unsigned char * _T1E;
  char * _T1F;
  unsigned int _T20;
  unsigned char * _T21;
  char * _T22;
  struct _fat_ptr * _T23;
  unsigned char * _T24;
  char * _T25;
  unsigned int _T26;
  unsigned char * _T27;
  char * _T28;
  struct _fat_ptr * _T29;
  unsigned char * _T2A;
  char * _T2B;
  unsigned int _T2C;
  unsigned char * _T2D;
  char * _T2E;
  struct _fat_ptr * _T2F;
  unsigned char * _T30;
  char * _T31;
  unsigned int _T32;
  unsigned char * _T33;
  char * _T34;
  struct _fat_ptr * _T35;
  unsigned char * _T36;
  char * _T37;
  unsigned int _T38;
  unsigned char * _T39;
  char * _T3A;
  struct _fat_ptr * _T3B;
  unsigned char * _T3C;
  char * _T3D;
  unsigned int _T3E;
  unsigned char * _T3F;
  char * _T40;
  struct _fat_ptr * _T41;
  unsigned char * _T42;
  char * _T43;
  unsigned int _T44;
  unsigned char * _T45;
  char * _T46;
  struct _fat_ptr * _T47;
  unsigned char * _T48;
  char * _T49;
  unsigned int _T4A;
  unsigned char * _T4B;
  char * _T4C;
  struct _fat_ptr * _T4D;
  unsigned char * _T4E;
  char * _T4F;
  unsigned int _T50;
  unsigned char * _T51;
  char * _T52;
  struct _fat_ptr * _T53;
  unsigned char * _T54;
  char * _T55;
  unsigned int _T56;
  unsigned char * _T57;
  char * _T58;
  struct _fat_ptr * _T59;
  unsigned char * _T5A;
  char * _T5B;
  unsigned int _T5C;
  unsigned char * _T5D;
  char * _T5E;
  struct _fat_ptr * _T5F;
  unsigned char * _T60;
  char * _T61;
  unsigned int _T62;
  unsigned char * _T63;
  char * _T64;
  struct _fat_ptr * _T65;
  unsigned char * _T66;
  char * _T67;
  unsigned int _T68;
  unsigned char * _T69;
  char * _T6A;
  struct _fat_ptr * _T6B;
  unsigned char * _T6C;
  char * _T6D;
  unsigned int _T6E;
  unsigned char * _T6F;
  char * _T70;
  struct _fat_ptr * _T71;
  unsigned char * _T72;
  char * _T73;
  unsigned int _T74;
  unsigned char * _T75;
  char * _T76;
  struct _fat_ptr * _T77;
  unsigned char * _T78;
  char * _T79;
  unsigned int _T7A;
  unsigned char * _T7B;
  char * _T7C;
  struct _fat_ptr * _T7D;
  unsigned char * _T7E;
  char * _T7F;
  unsigned int _T80;
  unsigned char * _T81;
  char * _T82;
  struct _fat_ptr * _T83;
  unsigned char * _T84;
  char * _T85;
  unsigned int _T86;
  unsigned char * _T87;
  char * _T88;
  struct _fat_ptr * _T89;
  unsigned char * _T8A;
  char * _T8B;
  unsigned int _T8C;
  unsigned char * _T8D;
  char * _T8E;
  struct _fat_ptr * _T8F;
  unsigned char * _T90;
  char * _T91;
  int _T92;
  int _T93;
  unsigned int _T94;
  unsigned char * _T95;
  char * _T96;
  struct _fat_ptr * _T97;
  unsigned char * _T98;
  char * _T99;
  int _T9A;
  int _T9B;
  int _T9C;
  unsigned int _T9D;
  unsigned char * _T9E;
  char * _T9F;
  struct _fat_ptr * _TA0;
  unsigned char * _TA1;
  char * _TA2;
  int _TA3;
  int _TA4;
  unsigned int _TA5;
  unsigned char * _TA6;
  char * _TA7;
  struct _fat_ptr * _TA8;
  int * _TA9;
  int _TAA;
  register int c;
  struct _fat_ptr p;
  register int code;
  int wasquote = 0;
  c = Cyc_safegetc(Cyc_finput);
  if (c != 10) { goto _TL28;
  }
  _T0 = _tag_fat("unescaped newline in constant",sizeof(char),30U);
  Cyc_warn(_T0);
  Cyc_ungetc(c,Cyc_finput);
  code = 63;
  wasquote = 1;
  goto _TL29;
  _TL28: if (c == 92) { goto _TL2A;
  }
  code = c;
  _T1 = c;
  _T2 = term;
  _T3 = (int)_T2;
  if (_T1 != _T3) { goto _TL2C;
  }
  wasquote = 1;
  goto _TL2D;
  _TL2C: _TL2D: goto _TL2B;
  _TL2A: c = Cyc_safegetc(Cyc_finput);
  if (c != 116) { goto _TL2E;
  }
  code = 9;
  goto _TL2F;
  _TL2E: if (c != 110) { goto _TL30;
  }
  code = 10;
  goto _TL31;
  _TL30: if (c != 97) { goto _TL32;
  }
  code = 7;
  goto _TL33;
  _TL32: if (c != 114) { goto _TL34;
  }
  code = 13;
  goto _TL35;
  _TL34: if (c != 102) { goto _TL36;
  }
  code = 12;
  goto _TL37;
  _TL36: if (c != 98) { goto _TL38;
  }
  code = 8;
  goto _TL39;
  _TL38: if (c != 118) { goto _TL3A;
  }
  code = 11;
  goto _TL3B;
  _TL3A: if (c != 92) { goto _TL3C;
  }
  code = 92;
  goto _TL3D;
  _TL3C: if (c != 39) { goto _TL3E;
  }
  code = 39;
  goto _TL3F;
  _TL3E: if (c != 34) { goto _TL40;
  }
  code = 34;
  goto _TL41;
  _TL40: if (c > 55) { goto _TL42;
  }
  if (c < 48) { goto _TL42;
  }
  code = 0;
  _TL44: if (c <= 55) { goto _TL47;
  }else { goto _TL46;
  }
  _TL47: if (c >= 48) { goto _TL45;
  }else { goto _TL46;
  }
  _TL45: _T4 = code * 8;
  _T5 = c - 48;
  code = _T4 + _T5;
  if (code >= 256) { goto _TL4A;
  }else { goto _TL4B;
  }
  _TL4B: if (code < 0) { goto _TL4A;
  }else { goto _TL48;
  }
  _TL4A: _T6 = _tag_fat("octal value outside range 0...255: `\\%o'",sizeof(char),
			41U);
  _T7 = code;
  Cyc_warni(_T6,_T7);
  code = code & 255;
  goto _TL46;
  _TL48: c = Cyc_safegetc(Cyc_finput);
  goto _TL44;
  _TL46: Cyc_ungetc(c,Cyc_finput);
  goto _TL43;
  _TL42: if (c != 120) { goto _TL4C;
  }
  c = Cyc_safegetc(Cyc_finput);
  code = 0;
  _TL4E: if (1) { goto _TL4F;
  }else { goto _TL50;
  }
  _TL4F: if (c < 48) { goto _TL51;
  }
  if (c > 57) { goto _TL51;
  }
  code = code * 16;
  _T8 = c - 48;
  code = code + _T8;
  goto _TL52;
  _TL51: if (c < 97) { goto _TL53;
  }
  if (c > 102) { goto _TL53;
  }
  code = code * 16;
  _T9 = c - 97;
  _TA = _T9 + 10;
  code = code + _TA;
  goto _TL54;
  _TL53: if (c < 65) { goto _TL55;
  }
  if (c > 70) { goto _TL55;
  }
  code = code * 16;
  _TB = c - 65;
  _TC = _TB + 10;
  code = code + _TC;
  goto _TL56;
  _TL55: goto _TL50;
  _TL56: _TL54: _TL52: if (code >= 256) { goto _TL59;
  }else { goto _TL5A;
  }
  _TL5A: if (code < 0) { goto _TL59;
  }else { goto _TL57;
  }
  _TL59: _TD = _tag_fat("hexadecimal value above 255: `\\x%x'",sizeof(char),
			36U);
  _TE = code;
  Cyc_warni(_TD,_TE);
  code = code & 255;
  goto _TL50;
  _TL57: c = Cyc_safegetc(Cyc_finput);
  goto _TL4E;
  _TL50: _TF = c;
  _T10 = _check_null(Cyc_finput);
  Cyc_ungetc(_TF,_T10);
  goto _TL4D;
  _TL4C: _T11 = _tag_fat("unknown escape sequence: `\\' followed by `%s'",
			 sizeof(char),46U);
  _T12 = c;
  _T13 = (char)_T12;
  _T14 = Cyc_printable_version(_T13);
  Cyc_warns(_T11,_T14);
  code = 63;
  _TL4D: _TL43: _TL41: _TL3F: _TL3D: _TL3B: _TL39: _TL37: _TL35: _TL33: _TL31: _TL2F: _TL2B: _TL29: _T15 = pp;
  p = *_T15;
  if (code < 32) { goto _TL5B;
  }
  if (code >= 127) { goto _TL5B;
  }
  _T16 = &p;
  { struct _fat_ptr _TAB = _fat_ptr_inplace_plus_post(_T16,sizeof(char),1);
    _T17 = _TAB.curr;
    _T18 = (char *)_T17;
    { char _TAC = *_T18;
      _T19 = code;
      { char _TAD = (char)_T19;
	_T1A = _get_fat_size(_TAB,sizeof(char));
	if (_T1A != 1U) { goto _TL5D;
	}
	if (_TAC != 0) { goto _TL5D;
	}
	if (_TAD == 0) { goto _TL5D;
	}
	_throw_arraybounds();
	goto _TL5E;
	_TL5D: _TL5E: _T1B = _TAB.curr;
	_T1C = (char *)_T1B;
	*_T1C = _TAD;
      }
    }
  }goto _TL5C;
  _TL5B: if (code != 92) { goto _TL5F;
  }
  _T1D = &p;
  { struct _fat_ptr _TAB = _fat_ptr_inplace_plus_post(_T1D,sizeof(char),1);
    _T1E = _TAB.curr;
    _T1F = (char *)_T1E;
    { char _TAC = *_T1F;
      char _TAD = '\\';
      _T20 = _get_fat_size(_TAB,sizeof(char));
      if (_T20 != 1U) { goto _TL61;
      }
      if (_TAC != 0) { goto _TL61;
      }
      if (_TAD == 0) { goto _TL61;
      }
      _throw_arraybounds();
      goto _TL62;
      _TL61: _TL62: _T21 = _TAB.curr;
      _T22 = (char *)_T21;
      *_T22 = _TAD;
    }
  }_T23 = &p;
  { struct _fat_ptr _TAB = _fat_ptr_inplace_plus_post(_T23,sizeof(char),1);
    _T24 = _TAB.curr;
    _T25 = (char *)_T24;
    { char _TAC = *_T25;
      char _TAD = '\\';
      _T26 = _get_fat_size(_TAB,sizeof(char));
      if (_T26 != 1U) { goto _TL63;
      }
      if (_TAC != 0) { goto _TL63;
      }
      if (_TAD == 0) { goto _TL63;
      }
      _throw_arraybounds();
      goto _TL64;
      _TL63: _TL64: _T27 = _TAB.curr;
      _T28 = (char *)_T27;
      *_T28 = _TAD;
    }
  }goto _TL60;
  _TL5F: if (code != 39) { goto _TL65;
  }
  _T29 = &p;
  { struct _fat_ptr _TAB = _fat_ptr_inplace_plus_post(_T29,sizeof(char),1);
    _T2A = _TAB.curr;
    _T2B = (char *)_T2A;
    { char _TAC = *_T2B;
      char _TAD = '\\';
      _T2C = _get_fat_size(_TAB,sizeof(char));
      if (_T2C != 1U) { goto _TL67;
      }
      if (_TAC != 0) { goto _TL67;
      }
      if (_TAD == 0) { goto _TL67;
      }
      _throw_arraybounds();
      goto _TL68;
      _TL67: _TL68: _T2D = _TAB.curr;
      _T2E = (char *)_T2D;
      *_T2E = _TAD;
    }
  }_T2F = &p;
  { struct _fat_ptr _TAB = _fat_ptr_inplace_plus_post(_T2F,sizeof(char),1);
    _T30 = _TAB.curr;
    _T31 = (char *)_T30;
    { char _TAC = *_T31;
      char _TAD = '\'';
      _T32 = _get_fat_size(_TAB,sizeof(char));
      if (_T32 != 1U) { goto _TL69;
      }
      if (_TAC != 0) { goto _TL69;
      }
      if (_TAD == 0) { goto _TL69;
      }
      _throw_arraybounds();
      goto _TL6A;
      _TL69: _TL6A: _T33 = _TAB.curr;
      _T34 = (char *)_T33;
      *_T34 = _TAD;
    }
  }goto _TL66;
  _TL65: if (code != 34) { goto _TL6B;
  }
  _T35 = &p;
  { struct _fat_ptr _TAB = _fat_ptr_inplace_plus_post(_T35,sizeof(char),1);
    _T36 = _TAB.curr;
    _T37 = (char *)_T36;
    { char _TAC = *_T37;
      char _TAD = '\\';
      _T38 = _get_fat_size(_TAB,sizeof(char));
      if (_T38 != 1U) { goto _TL6D;
      }
      if (_TAC != 0) { goto _TL6D;
      }
      if (_TAD == 0) { goto _TL6D;
      }
      _throw_arraybounds();
      goto _TL6E;
      _TL6D: _TL6E: _T39 = _TAB.curr;
      _T3A = (char *)_T39;
      *_T3A = _TAD;
    }
  }_T3B = &p;
  { struct _fat_ptr _TAB = _fat_ptr_inplace_plus_post(_T3B,sizeof(char),1);
    _T3C = _TAB.curr;
    _T3D = (char *)_T3C;
    { char _TAC = *_T3D;
      char _TAD = '"';
      _T3E = _get_fat_size(_TAB,sizeof(char));
      if (_T3E != 1U) { goto _TL6F;
      }
      if (_TAC != 0) { goto _TL6F;
      }
      if (_TAD == 0) { goto _TL6F;
      }
      _throw_arraybounds();
      goto _TL70;
      _TL6F: _TL70: _T3F = _TAB.curr;
      _T40 = (char *)_T3F;
      *_T40 = _TAD;
    }
  }goto _TL6C;
  _TL6B: if (code != 9) { goto _TL71;
  }
  _T41 = &p;
  { struct _fat_ptr _TAB = _fat_ptr_inplace_plus_post(_T41,sizeof(char),1);
    _T42 = _TAB.curr;
    _T43 = (char *)_T42;
    { char _TAC = *_T43;
      char _TAD = '\\';
      _T44 = _get_fat_size(_TAB,sizeof(char));
      if (_T44 != 1U) { goto _TL73;
      }
      if (_TAC != 0) { goto _TL73;
      }
      if (_TAD == 0) { goto _TL73;
      }
      _throw_arraybounds();
      goto _TL74;
      _TL73: _TL74: _T45 = _TAB.curr;
      _T46 = (char *)_T45;
      *_T46 = _TAD;
    }
  }_T47 = &p;
  { struct _fat_ptr _TAB = _fat_ptr_inplace_plus_post(_T47,sizeof(char),1);
    _T48 = _TAB.curr;
    _T49 = (char *)_T48;
    { char _TAC = *_T49;
      char _TAD = 't';
      _T4A = _get_fat_size(_TAB,sizeof(char));
      if (_T4A != 1U) { goto _TL75;
      }
      if (_TAC != 0) { goto _TL75;
      }
      if (_TAD == 0) { goto _TL75;
      }
      _throw_arraybounds();
      goto _TL76;
      _TL75: _TL76: _T4B = _TAB.curr;
      _T4C = (char *)_T4B;
      *_T4C = _TAD;
    }
  }goto _TL72;
  _TL71: if (code != 10) { goto _TL77;
  }
  _T4D = &p;
  { struct _fat_ptr _TAB = _fat_ptr_inplace_plus_post(_T4D,sizeof(char),1);
    _T4E = _TAB.curr;
    _T4F = (char *)_T4E;
    { char _TAC = *_T4F;
      char _TAD = '\\';
      _T50 = _get_fat_size(_TAB,sizeof(char));
      if (_T50 != 1U) { goto _TL79;
      }
      if (_TAC != 0) { goto _TL79;
      }
      if (_TAD == 0) { goto _TL79;
      }
      _throw_arraybounds();
      goto _TL7A;
      _TL79: _TL7A: _T51 = _TAB.curr;
      _T52 = (char *)_T51;
      *_T52 = _TAD;
    }
  }_T53 = &p;
  { struct _fat_ptr _TAB = _fat_ptr_inplace_plus_post(_T53,sizeof(char),1);
    _T54 = _TAB.curr;
    _T55 = (char *)_T54;
    { char _TAC = *_T55;
      char _TAD = 'n';
      _T56 = _get_fat_size(_TAB,sizeof(char));
      if (_T56 != 1U) { goto _TL7B;
      }
      if (_TAC != 0) { goto _TL7B;
      }
      if (_TAD == 0) { goto _TL7B;
      }
      _throw_arraybounds();
      goto _TL7C;
      _TL7B: _TL7C: _T57 = _TAB.curr;
      _T58 = (char *)_T57;
      *_T58 = _TAD;
    }
  }goto _TL78;
  _TL77: if (code != 13) { goto _TL7D;
  }
  _T59 = &p;
  { struct _fat_ptr _TAB = _fat_ptr_inplace_plus_post(_T59,sizeof(char),1);
    _T5A = _TAB.curr;
    _T5B = (char *)_T5A;
    { char _TAC = *_T5B;
      char _TAD = '\\';
      _T5C = _get_fat_size(_TAB,sizeof(char));
      if (_T5C != 1U) { goto _TL7F;
      }
      if (_TAC != 0) { goto _TL7F;
      }
      if (_TAD == 0) { goto _TL7F;
      }
      _throw_arraybounds();
      goto _TL80;
      _TL7F: _TL80: _T5D = _TAB.curr;
      _T5E = (char *)_T5D;
      *_T5E = _TAD;
    }
  }_T5F = &p;
  { struct _fat_ptr _TAB = _fat_ptr_inplace_plus_post(_T5F,sizeof(char),1);
    _T60 = _TAB.curr;
    _T61 = (char *)_T60;
    { char _TAC = *_T61;
      char _TAD = 'r';
      _T62 = _get_fat_size(_TAB,sizeof(char));
      if (_T62 != 1U) { goto _TL81;
      }
      if (_TAC != 0) { goto _TL81;
      }
      if (_TAD == 0) { goto _TL81;
      }
      _throw_arraybounds();
      goto _TL82;
      _TL81: _TL82: _T63 = _TAB.curr;
      _T64 = (char *)_T63;
      *_T64 = _TAD;
    }
  }goto _TL7E;
  _TL7D: if (code != 11) { goto _TL83;
  }
  _T65 = &p;
  { struct _fat_ptr _TAB = _fat_ptr_inplace_plus_post(_T65,sizeof(char),1);
    _T66 = _TAB.curr;
    _T67 = (char *)_T66;
    { char _TAC = *_T67;
      char _TAD = '\\';
      _T68 = _get_fat_size(_TAB,sizeof(char));
      if (_T68 != 1U) { goto _TL85;
      }
      if (_TAC != 0) { goto _TL85;
      }
      if (_TAD == 0) { goto _TL85;
      }
      _throw_arraybounds();
      goto _TL86;
      _TL85: _TL86: _T69 = _TAB.curr;
      _T6A = (char *)_T69;
      *_T6A = _TAD;
    }
  }_T6B = &p;
  { struct _fat_ptr _TAB = _fat_ptr_inplace_plus_post(_T6B,sizeof(char),1);
    _T6C = _TAB.curr;
    _T6D = (char *)_T6C;
    { char _TAC = *_T6D;
      char _TAD = 'v';
      _T6E = _get_fat_size(_TAB,sizeof(char));
      if (_T6E != 1U) { goto _TL87;
      }
      if (_TAC != 0) { goto _TL87;
      }
      if (_TAD == 0) { goto _TL87;
      }
      _throw_arraybounds();
      goto _TL88;
      _TL87: _TL88: _T6F = _TAB.curr;
      _T70 = (char *)_T6F;
      *_T70 = _TAD;
    }
  }goto _TL84;
  _TL83: if (code != 8) { goto _TL89;
  }
  _T71 = &p;
  { struct _fat_ptr _TAB = _fat_ptr_inplace_plus_post(_T71,sizeof(char),1);
    _T72 = _TAB.curr;
    _T73 = (char *)_T72;
    { char _TAC = *_T73;
      char _TAD = '\\';
      _T74 = _get_fat_size(_TAB,sizeof(char));
      if (_T74 != 1U) { goto _TL8B;
      }
      if (_TAC != 0) { goto _TL8B;
      }
      if (_TAD == 0) { goto _TL8B;
      }
      _throw_arraybounds();
      goto _TL8C;
      _TL8B: _TL8C: _T75 = _TAB.curr;
      _T76 = (char *)_T75;
      *_T76 = _TAD;
    }
  }_T77 = &p;
  { struct _fat_ptr _TAB = _fat_ptr_inplace_plus_post(_T77,sizeof(char),1);
    _T78 = _TAB.curr;
    _T79 = (char *)_T78;
    { char _TAC = *_T79;
      char _TAD = 'b';
      _T7A = _get_fat_size(_TAB,sizeof(char));
      if (_T7A != 1U) { goto _TL8D;
      }
      if (_TAC != 0) { goto _TL8D;
      }
      if (_TAD == 0) { goto _TL8D;
      }
      _throw_arraybounds();
      goto _TL8E;
      _TL8D: _TL8E: _T7B = _TAB.curr;
      _T7C = (char *)_T7B;
      *_T7C = _TAD;
    }
  }goto _TL8A;
  _TL89: if (code != 12) { goto _TL8F;
  }
  _T7D = &p;
  { struct _fat_ptr _TAB = _fat_ptr_inplace_plus_post(_T7D,sizeof(char),1);
    _T7E = _TAB.curr;
    _T7F = (char *)_T7E;
    { char _TAC = *_T7F;
      char _TAD = '\\';
      _T80 = _get_fat_size(_TAB,sizeof(char));
      if (_T80 != 1U) { goto _TL91;
      }
      if (_TAC != 0) { goto _TL91;
      }
      if (_TAD == 0) { goto _TL91;
      }
      _throw_arraybounds();
      goto _TL92;
      _TL91: _TL92: _T81 = _TAB.curr;
      _T82 = (char *)_T81;
      *_T82 = _TAD;
    }
  }_T83 = &p;
  { struct _fat_ptr _TAB = _fat_ptr_inplace_plus_post(_T83,sizeof(char),1);
    _T84 = _TAB.curr;
    _T85 = (char *)_T84;
    { char _TAC = *_T85;
      char _TAD = 'f';
      _T86 = _get_fat_size(_TAB,sizeof(char));
      if (_T86 != 1U) { goto _TL93;
      }
      if (_TAC != 0) { goto _TL93;
      }
      if (_TAD == 0) { goto _TL93;
      }
      _throw_arraybounds();
      goto _TL94;
      _TL93: _TL94: _T87 = _TAB.curr;
      _T88 = (char *)_T87;
      *_T88 = _TAD;
    }
  }goto _TL90;
  _TL8F: _T89 = &p;
  { struct _fat_ptr _TAB = _fat_ptr_inplace_plus_post(_T89,sizeof(char),1);
    _T8A = _TAB.curr;
    _T8B = (char *)_T8A;
    { char _TAC = *_T8B;
      char _TAD = '\\';
      _T8C = _get_fat_size(_TAB,sizeof(char));
      if (_T8C != 1U) { goto _TL95;
      }
      if (_TAC != 0) { goto _TL95;
      }
      if (_TAD == 0) { goto _TL95;
      }
      _throw_arraybounds();
      goto _TL96;
      _TL95: _TL96: _T8D = _TAB.curr;
      _T8E = (char *)_T8D;
      *_T8E = _TAD;
    }
  }_T8F = &p;
  { struct _fat_ptr _TAB = _fat_ptr_inplace_plus_post(_T8F,sizeof(char),1);
    _T90 = _TAB.curr;
    _T91 = (char *)_T90;
    { char _TAC = *_T91;
      _T92 = code / 64;
      _T93 = _T92 + 48;
      { char _TAD = (char)_T93;
	_T94 = _get_fat_size(_TAB,sizeof(char));
	if (_T94 != 1U) { goto _TL97;
	}
	if (_TAC != 0) { goto _TL97;
	}
	if (_TAD == 0) { goto _TL97;
	}
	_throw_arraybounds();
	goto _TL98;
	_TL97: _TL98: _T95 = _TAB.curr;
	_T96 = (char *)_T95;
	*_T96 = _TAD;
      }
    }
  }_T97 = &p;
  { struct _fat_ptr _TAB = _fat_ptr_inplace_plus_post(_T97,sizeof(char),1);
    _T98 = _TAB.curr;
    _T99 = (char *)_T98;
    { char _TAC = *_T99;
      _T9A = code / 8;
      _T9B = _T9A & 7;
      _T9C = _T9B + 48;
      { char _TAD = (char)_T9C;
	_T9D = _get_fat_size(_TAB,sizeof(char));
	if (_T9D != 1U) { goto _TL99;
	}
	if (_TAC != 0) { goto _TL99;
	}
	if (_TAD == 0) { goto _TL99;
	}
	_throw_arraybounds();
	goto _TL9A;
	_TL99: _TL9A: _T9E = _TAB.curr;
	_T9F = (char *)_T9E;
	*_T9F = _TAD;
      }
    }
  }_TA0 = &p;
  { struct _fat_ptr _TAB = _fat_ptr_inplace_plus_post(_TA0,sizeof(char),1);
    _TA1 = _TAB.curr;
    _TA2 = (char *)_TA1;
    { char _TAC = *_TA2;
      _TA3 = code & 7;
      _TA4 = _TA3 + 48;
      { char _TAD = (char)_TA4;
	_TA5 = _get_fat_size(_TAB,sizeof(char));
	if (_TA5 != 1U) { goto _TL9B;
	}
	if (_TAC != 0) { goto _TL9B;
	}
	if (_TAD == 0) { goto _TL9B;
	}
	_throw_arraybounds();
	goto _TL9C;
	_TL9B: _TL9C: _TA6 = _TAB.curr;
	_TA7 = (char *)_TA6;
	*_TA7 = _TAD;
      }
    }
  }_TL90: _TL8A: _TL84: _TL7E: _TL78: _TL72: _TL6C: _TL66: _TL60: _TL5C: _TA8 = pp;
  *_TA8 = p;
  _TA9 = pcode;
  *_TA9 = code;
  _TAA = ! wasquote;
  return _TAA;
}
void Cyc_unlex(int token) {
  Cyc_unlexed = token;
  Cyc_unlexed_symval = Cyc_symval;
}
int Cyc_lex() {
  int _T0;
  unsigned char * _T1;
  char * _T2;
  int _T3;
  unsigned int _T4;
  unsigned char * _T5;
  char * _T6;
  struct _fat_ptr _T7;
  unsigned char * _T8;
  char * _T9;
  unsigned int _TA;
  unsigned char * _TB;
  char * _TC;
  int _TD;
  int _TE;
  struct _fat_ptr _TF;
  struct _fat_ptr _T10;
  int _T11;
  struct _fat_ptr _T12;
  unsigned char * _T13;
  char * _T14;
  struct _fat_ptr _T15;
  int _T16;
  struct _fat_ptr _T17;
  unsigned char * _T18;
  char * _T19;
  struct _fat_ptr * _T1A;
  unsigned char * _T1B;
  char * _T1C;
  int _T1D;
  unsigned int _T1E;
  unsigned char * _T1F;
  char * _T20;
  unsigned char * _T21;
  char * _T22;
  unsigned int _T23;
  unsigned char * _T24;
  char * _T25;
  int _T26;
  struct _fat_ptr _T27;
  unsigned char * _T28;
  char * _T29;
  struct _fat_ptr _T2A;
  int _T2B;
  struct _fat_ptr _T2C;
  unsigned char * _T2D;
  char * _T2E;
  struct _fat_ptr * _T2F;
  unsigned char * _T30;
  char * _T31;
  int _T32;
  unsigned int _T33;
  unsigned char * _T34;
  char * _T35;
  int _T36;
  int _T37;
  int _T38;
  unsigned char * _T39;
  char * _T3A;
  unsigned int _T3B;
  unsigned char * _T3C;
  char * _T3D;
  struct _fat_ptr * _T3E;
  unsigned char * _T3F;
  char * _T40;
  unsigned int _T41;
  unsigned char * _T42;
  char * _T43;
  struct _fat_ptr * _T44;
  struct _fat_ptr * _T45;
  int * _T46;
  char * _T47;
  char * _T48;
  unsigned int _T49;
  unsigned int _T4A;
  struct _fat_ptr _T4B;
  struct _fat_ptr * _T4C;
  struct _fat_ptr * _T4D;
  int * _T4E;
  int _T4F;
  struct _fat_ptr * _T50;
  unsigned char * _T51;
  char * _T52;
  unsigned int _T53;
  unsigned char * _T54;
  char * _T55;
  unsigned char * _T56;
  char * _T57;
  unsigned int _T58;
  unsigned char * _T59;
  char * _T5A;
  struct Cyc_bucket * _T5B;
  struct Cyc_bucket * _T5C;
  short _T5D;
  int _T5E;
  struct Cyc_bucket * _T5F;
  int _T60;
  struct _fat_ptr * _T61;
  unsigned char * _T62;
  char * _T63;
  unsigned int _T64;
  unsigned char * _T65;
  char * _T66;
  struct _fat_ptr * _T67;
  struct _fat_ptr * _T68;
  int * _T69;
  int _T6A;
  struct _fat_ptr _T6B;
  unsigned char * _T6C;
  char * _T6D;
  struct _fat_ptr _T6E;
  int _T6F;
  struct _fat_ptr _T70;
  unsigned char * _T71;
  char * _T72;
  unsigned char * _T73;
  char * _T74;
  unsigned int _T75;
  unsigned char * _T76;
  char * _T77;
  struct Cyc_bucket * _T78;
  struct _fat_ptr _T79;
  struct _fat_ptr _T7A;
  int _T7B;
  int _T7C;
  struct _fat_ptr _T7D;
  struct _fat_ptr _T7E;
  struct _fat_ptr _T7F;
  struct _fat_ptr _T80;
  unsigned char * _T81;
  char * _T82;
  struct _fat_ptr _T83;
  int _T84;
  struct _fat_ptr _T85;
  unsigned char * _T86;
  char * _T87;
  struct _fat_ptr * _T88;
  unsigned char * _T89;
  char * _T8A;
  int _T8B;
  unsigned int _T8C;
  unsigned char * _T8D;
  char * _T8E;
  unsigned char * _T8F;
  char * _T90;
  unsigned int _T91;
  unsigned char * _T92;
  char * _T93;
  int _T94;
  register int c;
  struct _fat_ptr p;
  if (Cyc_unlexed < 0) { goto _TL9D;
  }
  Cyc_symval = Cyc_unlexed_symval;
  c = Cyc_unlexed;
  Cyc_unlexed = - 1;
  _T0 = c;
  return _T0;
  _TL9D: c = Cyc_skip_white_space();
  { struct _fat_ptr _T95 = Cyc_token_buffer;
    _T1 = _check_fat_subscript(_T95,sizeof(char),0U);
    _T2 = (char *)_T1;
    { char _T96 = *_T2;
      _T3 = c;
      { char _T97 = (char)_T3;
	_T4 = _get_fat_size(_T95,sizeof(char));
	if (_T4 != 1U) { goto _TL9F;
	}
	if (_T96 != 0) { goto _TL9F;
	}
	if (_T97 == 0) { goto _TL9F;
	}
	_throw_arraybounds();
	goto _TLA0;
	_TL9F: _TLA0: _T5 = _T95.curr;
	_T6 = (char *)_T5;
	*_T6 = _T97;
      }
    }
  }_T7 = Cyc_token_buffer;
  { struct _fat_ptr _T95 = _fat_ptr_plus(_T7,sizeof(char),1);
    _T8 = _check_fat_subscript(_T95,sizeof(char),0U);
    _T9 = (char *)_T8;
    { char _T96 = *_T9;
      char _T97 = '\000';
      _TA = _get_fat_size(_T95,sizeof(char));
      if (_TA != 1U) { goto _TLA1;
      }
      if (_T96 != 0) { goto _TLA1;
      }
      if (_T97 == 0) { goto _TLA1;
      }
      _throw_arraybounds();
      goto _TLA2;
      _TLA1: _TLA2: _TB = _T95.curr;
      _TC = (char *)_TB;
      *_TC = _T97;
    }
  }_TD = c;
  _TE = (int)_TD;
  switch (_TE) {
  case -1: 
    _TF = Cyc_token_buffer;
    _T10 = _tag_fat("EOF",sizeof(char),4U);
    Cyc_strcpy(_TF,_T10);
    return 0;
  case 65: 
    goto _LL6;
  case 66: 
    _LL6: goto _LL8;
  case 67: 
    _LL8: goto _LLA;
  case 68: 
    _LLA: goto _LLC;
  case 69: 
    _LLC: goto _LLE;
  case 70: 
    _LLE: goto _LL10;
  case 71: 
    _LL10: goto _LL12;
  case 72: 
    _LL12: goto _LL14;
  case 73: 
    _LL14: goto _LL16;
  case 74: 
    _LL16: goto _LL18;
  case 75: 
    _LL18: goto _LL1A;
  case 76: 
    _LL1A: goto _LL1C;
  case 77: 
    _LL1C: goto _LL1E;
  case 78: 
    _LL1E: goto _LL20;
  case 79: 
    _LL20: goto _LL22;
  case 80: 
    _LL22: goto _LL24;
  case 81: 
    _LL24: goto _LL26;
  case 82: 
    _LL26: goto _LL28;
  case 83: 
    _LL28: goto _LL2A;
  case 84: 
    _LL2A: goto _LL2C;
  case 85: 
    _LL2C: goto _LL2E;
  case 86: 
    _LL2E: goto _LL30;
  case 87: 
    _LL30: goto _LL32;
  case 88: 
    _LL32: goto _LL34;
  case 89: 
    _LL34: goto _LL36;
  case 90: 
    _LL36: goto _LL38;
  case 97: 
    _LL38: goto _LL3A;
  case 98: 
    _LL3A: goto _LL3C;
  case 99: 
    _LL3C: goto _LL3E;
  case 100: 
    _LL3E: goto _LL40;
  case 101: 
    _LL40: goto _LL42;
  case 102: 
    _LL42: goto _LL44;
  case 103: 
    _LL44: goto _LL46;
  case 104: 
    _LL46: goto _LL48;
  case 105: 
    _LL48: goto _LL4A;
  case 106: 
    _LL4A: goto _LL4C;
  case 107: 
    _LL4C: goto _LL4E;
  case 108: 
    _LL4E: goto _LL50;
  case 109: 
    _LL50: goto _LL52;
  case 110: 
    _LL52: goto _LL54;
  case 111: 
    _LL54: goto _LL56;
  case 112: 
    _LL56: goto _LL58;
  case 113: 
    _LL58: goto _LL5A;
  case 114: 
    _LL5A: goto _LL5C;
  case 115: 
    _LL5C: goto _LL5E;
  case 116: 
    _LL5E: goto _LL60;
  case 117: 
    _LL60: goto _LL62;
  case 118: 
    _LL62: goto _LL64;
  case 119: 
    _LL64: goto _LL66;
  case 120: 
    _LL66: goto _LL68;
  case 121: 
    _LL68: goto _LL6A;
  case 122: 
    _LL6A: goto _LL6C;
  case 46: 
    _LL6C: goto _LL6E;
  case 95: 
    _LL6E: p = Cyc_token_buffer;
    _TLA4: _T11 = isalnum(c);
    if (_T11) { goto _TLA5;
    }else { goto _TLA8;
    }
    _TLA8: if (c == 95) { goto _TLA5;
    }else { goto _TLA7;
    }
    _TLA7: if (c == 46) { goto _TLA5;
    }else { goto _TLA6;
    }
    _TLA5: _T12 = p;
    _T13 = _T12.curr;
    _T14 = (char *)_T13;
    _T15 = Cyc_token_buffer;
    _T16 = Cyc_maxtoken;
    _T17 = _fat_ptr_plus(_T15,sizeof(char),_T16);
    _T18 = _T17.curr;
    _T19 = (char *)_T18;
    if (_T14 != _T19) { goto _TLA9;
    }
    p = Cyc_grow_token_buffer(p);
    goto _TLAA;
    _TLA9: _TLAA: _T1A = &p;
    { struct _fat_ptr _T95 = _fat_ptr_inplace_plus_post(_T1A,sizeof(char),
							1);
      _T1B = _T95.curr;
      _T1C = (char *)_T1B;
      { char _T96 = *_T1C;
	_T1D = c;
	{ char _T97 = (char)_T1D;
	  _T1E = _get_fat_size(_T95,sizeof(char));
	  if (_T1E != 1U) { goto _TLAB;
	  }
	  if (_T96 != 0) { goto _TLAB;
	  }
	  if (_T97 == 0) { goto _TLAB;
	  }
	  _throw_arraybounds();
	  goto _TLAC;
	  _TLAB: _TLAC: _T1F = _T95.curr;
	  _T20 = (char *)_T1F;
	  *_T20 = _T97;
	}
      }
    }c = Cyc_getc(Cyc_finput);
    goto _TLA4;
    _TLA6: { struct _fat_ptr _T95 = p;
      _T21 = _T95.curr;
      _T22 = (char *)_T21;
      { char _T96 = *_T22;
	char _T97 = '\000';
	_T23 = _get_fat_size(_T95,sizeof(char));
	if (_T23 != 1U) { goto _TLAD;
	}
	if (_T96 != 0) { goto _TLAD;
	}
	if (_T97 == 0) { goto _TLAD;
	}
	_throw_arraybounds();
	goto _TLAE;
	_TLAD: _TLAE: _T24 = _T95.curr;
	_T25 = (char *)_T24;
	*_T25 = _T97;
      }
    }Cyc_ungetc(c,Cyc_finput);
    Cyc_symval = Cyc_getsym(Cyc_token_buffer);
    return 1;
  case 48: 
    goto _LL72;
  case 49: 
    _LL72: goto _LL74;
  case 50: 
    _LL74: goto _LL76;
  case 51: 
    _LL76: goto _LL78;
  case 52: 
    _LL78: goto _LL7A;
  case 53: 
    _LL7A: goto _LL7C;
  case 54: 
    _LL7C: goto _LL7E;
  case 55: 
    _LL7E: goto _LL80;
  case 56: 
    _LL80: goto _LL82;
  case 57: 
    _LL82: Cyc_numval = 0;
    p = Cyc_token_buffer;
    _TLAF: _T26 = isdigit(c);
    if (_T26) { goto _TLB0;
    }else { goto _TLB1;
    }
    _TLB0: _T27 = p;
    _T28 = _T27.curr;
    _T29 = (char *)_T28;
    _T2A = Cyc_token_buffer;
    _T2B = Cyc_maxtoken;
    _T2C = _fat_ptr_plus(_T2A,sizeof(char),_T2B);
    _T2D = _T2C.curr;
    _T2E = (char *)_T2D;
    if (_T29 != _T2E) { goto _TLB2;
    }
    p = Cyc_grow_token_buffer(p);
    goto _TLB3;
    _TLB2: _TLB3: _T2F = &p;
    { struct _fat_ptr _T95 = _fat_ptr_inplace_plus_post(_T2F,sizeof(char),
							1);
      _T30 = _T95.curr;
      _T31 = (char *)_T30;
      { char _T96 = *_T31;
	_T32 = c;
	{ char _T97 = (char)_T32;
	  _T33 = _get_fat_size(_T95,sizeof(char));
	  if (_T33 != 1U) { goto _TLB4;
	  }
	  if (_T96 != 0) { goto _TLB4;
	  }
	  if (_T97 == 0) { goto _TLB4;
	  }
	  _throw_arraybounds();
	  goto _TLB5;
	  _TLB4: _TLB5: _T34 = _T95.curr;
	  _T35 = (char *)_T34;
	  *_T35 = _T97;
	}
      }
    }_T36 = Cyc_numval * 10;
    _T37 = c;
    _T38 = _T36 + _T37;
    Cyc_numval = _T38 - 48;
    c = Cyc_getc(Cyc_finput);
    goto _TLAF;
    _TLB1: { struct _fat_ptr _T95 = p;
      _T39 = _T95.curr;
      _T3A = (char *)_T39;
      { char _T96 = *_T3A;
	char _T97 = '\000';
	_T3B = _get_fat_size(_T95,sizeof(char));
	if (_T3B != 1U) { goto _TLB6;
	}
	if (_T96 != 0) { goto _TLB6;
	}
	if (_T97 == 0) { goto _TLB6;
	}
	_throw_arraybounds();
	goto _TLB7;
	_TLB6: _TLB7: _T3C = _T95.curr;
	_T3D = (char *)_T3C;
	*_T3D = _T97;
      }
    }Cyc_ungetc(c,Cyc_finput);
    return 22;
  case 39: 
    Cyc_translations = - 1;
    { int code = 0;
      int discode = 0;
      struct _fat_ptr discard;
      struct _fat_ptr dp;
      p = Cyc_token_buffer;
      _T3E = &p;
      { struct _fat_ptr _T95 = _fat_ptr_inplace_plus_post(_T3E,sizeof(char),
							  1);
	_T3F = _T95.curr;
	_T40 = (char *)_T3F;
	{ char _T96 = *_T40;
	  char _T97 = '\'';
	  _T41 = _get_fat_size(_T95,sizeof(char));
	  if (_T41 != 1U) { goto _TLB8;
	  }
	  if (_T96 != 0) { goto _TLB8;
	  }
	  if (_T97 == 0) { goto _TLB8;
	  }
	  _throw_arraybounds();
	  goto _TLB9;
	  _TLB8: _TLB9: _T42 = _T95.curr;
	  _T43 = (char *)_T42;
	  *_T43 = _T97;
	}
      }_T44 = &p;
      _T45 = (struct _fat_ptr *)_T44;
      _T46 = &code;
      Cyc_literalchar(_T45,_T46,'\'');
      { unsigned int _T95 = 10U + 1U;
	_T49 = _check_times(_T95,sizeof(char));
	{ char * _T96 = _cycalloc_atomic(_T49);
	  { unsigned int _T97 = _T95;
	    unsigned int _new2_cyclone;
	    _new2_cyclone = 0;
	    _TLBD: if (_new2_cyclone < _T97) { goto _TLBB;
	    }else { goto _TLBC;
	    }
	    _TLBB: _T4A = _new2_cyclone;
	    _T96[_T4A] = '\000';
	    _new2_cyclone = _new2_cyclone + 1;
	    goto _TLBD;
	    _TLBC: _T96[_T97] = 0;
	  }_T48 = (char *)_T96;
	}_T47 = _T48;
      }discard = _tag_fat(_T47,sizeof(char),11U);
      c = Cyc_getc(Cyc_finput);
      if (c == 39) { goto _TLBE;
      }
      _T4B = _tag_fat("use \"...\" for multi-character literal tokens",sizeof(char),
		      45U);
      Cyc_warn(_T4B);
      dp = discard;
      _TLC0: _T4C = &dp;
      _T4D = (struct _fat_ptr *)_T4C;
      _T4E = &discode;
      _T4F = Cyc_literalchar(_T4D,_T4E,'\'');
      if (_T4F) { goto _TLC1;
      }else { goto _TLC2;
      }
      _TLC1: goto _TLC0;
      _TLC2: goto _TLBF;
      _TLBE: _TLBF: _T50 = &p;
      { struct _fat_ptr _T95 = _fat_ptr_inplace_plus_post(_T50,sizeof(char),
							  1);
	_T51 = _T95.curr;
	_T52 = (char *)_T51;
	{ char _T96 = *_T52;
	  char _T97 = '\'';
	  _T53 = _get_fat_size(_T95,sizeof(char));
	  if (_T53 != 1U) { goto _TLC3;
	  }
	  if (_T96 != 0) { goto _TLC3;
	  }
	  if (_T97 == 0) { goto _TLC3;
	  }
	  _throw_arraybounds();
	  goto _TLC4;
	  _TLC3: _TLC4: _T54 = _T95.curr;
	  _T55 = (char *)_T54;
	  *_T55 = _T97;
	}
      }{ struct _fat_ptr _T95 = p;
	_T56 = _T95.curr;
	_T57 = (char *)_T56;
	{ char _T96 = *_T57;
	  char _T97 = '\000';
	  _T58 = _get_fat_size(_T95,sizeof(char));
	  if (_T58 != 1U) { goto _TLC5;
	  }
	  if (_T96 != 0) { goto _TLC5;
	  }
	  if (_T97 == 0) { goto _TLC5;
	  }
	  _throw_arraybounds();
	  goto _TLC6;
	  _TLC5: _TLC6: _T59 = _T95.curr;
	  _T5A = (char *)_T59;
	  *_T5A = _T97;
	}
      }Cyc_symval = Cyc_getsym(Cyc_token_buffer);
      _T5B = Cyc_symval;
      _T5B->class = '\001';
      _T5C = Cyc_symval;
      _T5D = _T5C->user_token_number;
      _T5E = (int)_T5D;
      if (_T5E) { goto _TLC7;
      }else { goto _TLC9;
      }
      _TLC9: _T5F = Cyc_symval;
      _T60 = code;
      _T5F->user_token_number = (short)_T60;
      goto _TLC8;
      _TLC7: _TLC8: return 1;
    }
  case 34: 
    Cyc_translations = - 1;
    { int code = 0;
      p = Cyc_token_buffer;
      _T61 = &p;
      { struct _fat_ptr _T95 = _fat_ptr_inplace_plus_post(_T61,sizeof(char),
							  1);
	_T62 = _T95.curr;
	_T63 = (char *)_T62;
	{ char _T96 = *_T63;
	  char _T97 = '"';
	  _T64 = _get_fat_size(_T95,sizeof(char));
	  if (_T64 != 1U) { goto _TLCA;
	  }
	  if (_T96 != 0) { goto _TLCA;
	  }
	  if (_T97 == 0) { goto _TLCA;
	  }
	  _throw_arraybounds();
	  goto _TLCB;
	  _TLCA: _TLCB: _T65 = _T95.curr;
	  _T66 = (char *)_T65;
	  *_T66 = _T97;
	}
      }_TLCC: _T67 = &p;
      _T68 = (struct _fat_ptr *)_T67;
      _T69 = &code;
      _T6A = Cyc_literalchar(_T68,_T69,'"');
      if (_T6A) { goto _TLCD;
      }else { goto _TLCE;
      }
      _TLCD: _T6B = p;
      _T6C = _T6B.curr;
      _T6D = (char *)_T6C;
      _T6E = Cyc_token_buffer;
      _T6F = Cyc_maxtoken - 4;
      _T70 = _fat_ptr_plus(_T6E,sizeof(char),_T6F);
      _T71 = _T70.curr;
      _T72 = (char *)_T71;
      if (_T6D < _T72) { goto _TLCF;
      }
      p = Cyc_grow_token_buffer(p);
      goto _TLD0;
      _TLCF: _TLD0: goto _TLCC;
      _TLCE: { struct _fat_ptr _T95 = p;
	_T73 = _T95.curr;
	_T74 = (char *)_T73;
	{ char _T96 = *_T74;
	  char _T97 = '\000';
	  _T75 = _get_fat_size(_T95,sizeof(char));
	  if (_T75 != 1U) { goto _TLD1;
	  }
	  if (_T96 != 0) { goto _TLD1;
	  }
	  if (_T97 == 0) { goto _TLD1;
	  }
	  _throw_arraybounds();
	  goto _TLD2;
	  _TLD1: _TLD2: _T76 = _T95.curr;
	  _T77 = (char *)_T76;
	  *_T77 = _T97;
	}
      }Cyc_symval = Cyc_getsym(Cyc_token_buffer);
      _T78 = Cyc_symval;
      _T78->class = '\001';
      return 1;
    }
  case 44: 
    return 2;
  case 58: 
    return 3;
  case 59: 
    return 4;
  case 124: 
    return 5;
  case 123: 
    return 6;
  case 61: 
    _TLD3: c = Cyc_getc(Cyc_finput);
    if (c != 10) { goto _TLD5;
    }
    Cyc_lineno = Cyc_lineno + 1;
    goto _TLD6;
    _TLD5: _TLD6: if (c == 32) { goto _TLD3;
    }else { goto _TLD8;
    }
    _TLD8: if (c == 10) { goto _TLD3;
    }else { goto _TLD7;
    }
    _TLD7: if (c == 9) { goto _TLD3;
    }else { goto _TLD4;
    }
    _TLD4: if (c != 123) { goto _TLD9;
    }
    _T79 = Cyc_token_buffer;
    _T7A = _tag_fat("={",sizeof(char),3U);
    Cyc_strcpy(_T79,_T7A);
    return 6;
    _TLD9: Cyc_ungetc(c,Cyc_finput);
    return 28;
  case 60: 
    { int level = 0;
      p = Cyc_token_buffer;
      c = Cyc_getc(Cyc_finput);
      _TLDB: if (c != 62) { goto _TLDC;
      }else { goto _TLDE;
      }
      _TLDE: if (level > 0) { goto _TLDC;
      }else { goto _TLDD;
      }
      _TLDC: _T7B = c;
      _T7C = - 1;
      if (_T7B != _T7C) { goto _TLDF;
      }
      _T7D = _tag_fat("unterminated type name at end of file",sizeof(char),
		      38U);
      Cyc_fatal(_T7D);
      goto _TLE0;
      _TLDF: _TLE0: if (c != 10) { goto _TLE1;
      }
      _T7E = _tag_fat("unterminated type name",sizeof(char),23U);
      Cyc_warn(_T7E);
      Cyc_ungetc(c,Cyc_finput);
      goto _TLDD;
      _TLE1: if (c != 60) { goto _TLE3;
      }
      level = level + 1;
      goto _TLE4;
      _TLE3: _TLE4: if (c != 62) { goto _TLE5;
      }
      level = level + -1;
      if (level >= 0) { goto _TLE7;
      }
      _T7F = _tag_fat("unmatched <> inside type definition",sizeof(char),
		      36U);
      Cyc_warn(_T7F);
      Cyc_ungetc(c,Cyc_finput);
      goto _TLDD;
      _TLE7: goto _TLE6;
      _TLE5: _TLE6: _T80 = p;
      _T81 = _T80.curr;
      _T82 = (char *)_T81;
      _T83 = Cyc_token_buffer;
      _T84 = Cyc_maxtoken;
      _T85 = _fat_ptr_plus(_T83,sizeof(char),_T84);
      _T86 = _T85.curr;
      _T87 = (char *)_T86;
      if (_T82 != _T87) { goto _TLE9;
      }
      p = Cyc_grow_token_buffer(p);
      goto _TLEA;
      _TLE9: _TLEA: _T88 = &p;
      { struct _fat_ptr _T95 = _fat_ptr_inplace_plus_post(_T88,sizeof(char),
							  1);
	_T89 = _T95.curr;
	_T8A = (char *)_T89;
	{ char _T96 = *_T8A;
	  _T8B = c;
	  { char _T97 = (char)_T8B;
	    _T8C = _get_fat_size(_T95,sizeof(char));
	    if (_T8C != 1U) { goto _TLEB;
	    }
	    if (_T96 != 0) { goto _TLEB;
	    }
	    if (_T97 == 0) { goto _TLEB;
	    }
	    _throw_arraybounds();
	    goto _TLEC;
	    _TLEB: _TLEC: _T8D = _T95.curr;
	    _T8E = (char *)_T8D;
	    *_T8E = _T97;
	  }
	}
      }c = Cyc_getc(Cyc_finput);
      goto _TLDB;
      _TLDD: { struct _fat_ptr _T95 = p;
	_T8F = _T95.curr;
	_T90 = (char *)_T8F;
	{ char _T96 = *_T90;
	  char _T97 = '\000';
	  _T91 = _get_fat_size(_T95,sizeof(char));
	  if (_T91 != 1U) { goto _TLED;
	  }
	  if (_T96 != 0) { goto _TLED;
	  }
	  if (_T97 == 0) { goto _TLED;
	  }
	  _throw_arraybounds();
	  goto _TLEE;
	  _TLED: _TLEE: _T92 = _T95.curr;
	  _T93 = (char *)_T92;
	  *_T93 = _T97;
	}
      }return 21;
    }
  case 37: 
    _T94 = Cyc_parse_percent_token();
    return _T94;
  default: 
    return 28;
  }
  ;
}
 struct Cyc_percent_table_struct {
  struct _fat_ptr name;
  void * setflag;
  int retval;
};
static char _TmpG0[6U] = "token";
static char _TmpG1[5U] = "term";
static char _TmpG2[6U] = "nterm";
static char _TmpG3[5U] = "type";
static char _TmpG4[6U] = "guard";
static char _TmpG5[6U] = "union";
static char _TmpG6[7U] = "expect";
static char _TmpG7[10U] = "expect_rr";
static char _TmpG8[6U] = "thong";
static char _TmpG9[6U] = "start";
static char _TmpGA[5U] = "left";
static char _TmpGB[6U] = "right";
static char _TmpGC[9U] = "nonassoc";
static char _TmpGD[7U] = "binary";
static char _TmpGE[16U] = "semantic_parser";
static char _TmpGF[12U] = "pure_parser";
static char _TmpG10[5U] = "prec";
static char _TmpG11[9U] = "no_lines";
static char _TmpG12[4U] = "raw";
static char _TmpG13[12U] = "token_table";
struct Cyc_percent_table_struct Cyc_percent_table[21U] = {{{(unsigned char *)_TmpG0,
							    (unsigned char *)_TmpG0,
							    (unsigned char *)_TmpG0 + 6U},
							   0,9},
							  {{(unsigned char *)_TmpG1,
							    (unsigned char *)_TmpG1,
							    (unsigned char *)_TmpG1 + 5U},
							   0,9},
							  {{(unsigned char *)_TmpG2,
							    (unsigned char *)_TmpG2,
							    (unsigned char *)_TmpG2 + 6U},
							   0,10},
							  {{(unsigned char *)_TmpG3,
							    (unsigned char *)_TmpG3,
							    (unsigned char *)_TmpG3 + 5U},
							   0,12},
							  {{(unsigned char *)_TmpG4,
							    (unsigned char *)_TmpG4,
							    (unsigned char *)_TmpG4 + 6U},
							   0,11},
							  {{(unsigned char *)_TmpG5,
							    (unsigned char *)_TmpG5,
							    (unsigned char *)_TmpG5 + 6U},
							   0,13},
							  {{(unsigned char *)_TmpG6,
							    (unsigned char *)_TmpG6,
							    (unsigned char *)_TmpG6 + 7U},
							   0,23},
							  {{(unsigned char *)_TmpG7,
							    (unsigned char *)_TmpG7,
							    (unsigned char *)_TmpG7 + 10U},
							   0,24},
							  {{(unsigned char *)_TmpG8,
							    (unsigned char *)_TmpG8,
							    (unsigned char *)_TmpG8 + 6U},
							   0,25},
							  {{(unsigned char *)_TmpG9,
							    (unsigned char *)_TmpG9,
							    (unsigned char *)_TmpG9 + 6U},
							   0,14},
							  {{(unsigned char *)_TmpGA,
							    (unsigned char *)_TmpGA,
							    (unsigned char *)_TmpGA + 5U},
							   0,15},
							  {{(unsigned char *)_TmpGB,
							    (unsigned char *)_TmpGB,
							    (unsigned char *)_TmpGB + 6U},
							   0,16},
							  {{(unsigned char *)_TmpGC,
							    (unsigned char *)_TmpGC,
							    (unsigned char *)_TmpGC + 9U},
							   0,17},
							  {{(unsigned char *)_TmpGD,
							    (unsigned char *)_TmpGD,
							    (unsigned char *)_TmpGD + 7U},
							   0,17},
							  {{(unsigned char *)_TmpGE,
							    (unsigned char *)_TmpGE,
							    (unsigned char *)_TmpGE + 16U},
							   0,19},
							  {{(unsigned char *)_TmpGF,
							    (unsigned char *)_TmpGF,
							    (unsigned char *)_TmpGF + 12U},
							   0,20},
							  {{(unsigned char *)_TmpG10,
							    (unsigned char *)_TmpG10,
							    (unsigned char *)_TmpG10 + 5U},
							   0,18},
							  {{(unsigned char *)_TmpG11,
							    (unsigned char *)_TmpG11,
							    (unsigned char *)_TmpG11 + 9U},
							   (void *)&Cyc_nolinesflag,
							   26},
							  {{(unsigned char *)_TmpG12,
							    (unsigned char *)_TmpG12,
							    (unsigned char *)_TmpG12 + 4U},
							   (void *)&Cyc_rawtoknumflag,
							   26},
							  {{(unsigned char *)_TmpG13,
							    (unsigned char *)_TmpG13,
							    (unsigned char *)_TmpG13 + 12U},
							   (void *)&Cyc_toknumflag,
							   26},
							  {{(void *)0,(void *)0,
							    (void *)(0 + 0)},
							   0,28}};
int Cyc_parse_percent_token() {
  struct Cyc___cycFILE * _T0;
  struct _fat_ptr * _T1;
  unsigned char * _T2;
  char * _T3;
  unsigned int _T4;
  unsigned char * _T5;
  char * _T6;
  struct _fat_ptr * _T7;
  unsigned char * _T8;
  char * _T9;
  int _TA;
  unsigned int _TB;
  unsigned char * _TC;
  char * _TD;
  unsigned char * _TE;
  char * _TF;
  unsigned int _T10;
  unsigned char * _T11;
  char * _T12;
  int _T13;
  int _T14;
  int _T15;
  struct _fat_ptr * _T16;
  unsigned char * _T17;
  char * _T18;
  unsigned int _T19;
  unsigned char * _T1A;
  char * _T1B;
  int _T1C;
  struct _fat_ptr _T1D;
  unsigned char * _T1E;
  char * _T1F;
  struct _fat_ptr _T20;
  int _T21;
  struct _fat_ptr _T22;
  unsigned char * _T23;
  char * _T24;
  struct _fat_ptr * _T25;
  unsigned char * _T26;
  char * _T27;
  int _T28;
  unsigned int _T29;
  unsigned char * _T2A;
  char * _T2B;
  int _T2C;
  struct Cyc___cycFILE * _T2D;
  unsigned char * _T2E;
  char * _T2F;
  unsigned int _T30;
  unsigned char * _T31;
  char * _T32;
  struct Cyc_percent_table_struct * _T33;
  struct _fat_ptr _T34;
  unsigned char * _T35;
  struct Cyc_percent_table_struct * _T36;
  struct _fat_ptr _T37;
  unsigned char * _T38;
  unsigned int _T39;
  struct _fat_ptr _T3A;
  struct _fat_ptr _T3B;
  struct _fat_ptr _T3C;
  unsigned char * _T3D;
  struct Cyc_percent_table_struct * _T3E;
  struct _fat_ptr _T3F;
  int _T40;
  struct _fat_ptr * _T41;
  struct _fat_ptr _T42;
  unsigned char * _T43;
  struct Cyc_percent_table_struct * _T44;
  int _T45;
  register int c;
  struct _fat_ptr p;
  struct _fat_ptr tx;
  p = Cyc_token_buffer;
  _T0 = _check_null(Cyc_finput);
  c = Cyc_getc(_T0);
  _T1 = &p;
  { struct _fat_ptr _T46 = _fat_ptr_inplace_plus_post(_T1,sizeof(char),1);
    _T2 = _check_fat_subscript(_T46,sizeof(char),0U);
    _T3 = (char *)_T2;
    { char _T47 = *_T3;
      char _T48 = '%';
      _T4 = _get_fat_size(_T46,sizeof(char));
      if (_T4 != 1U) { goto _TLEF;
      }
      if (_T47 != 0) { goto _TLEF;
      }
      if (_T48 == 0) { goto _TLEF;
      }
      _throw_arraybounds();
      goto _TLF0;
      _TLEF: _TLF0: _T5 = _T46.curr;
      _T6 = (char *)_T5;
      *_T6 = _T48;
    }
  }_T7 = &p;
  { struct _fat_ptr _T46 = _fat_ptr_inplace_plus_post(_T7,sizeof(char),1);
    _T8 = _check_fat_subscript(_T46,sizeof(char),0U);
    _T9 = (char *)_T8;
    { char _T47 = *_T9;
      _TA = c;
      { char _T48 = (char)_TA;
	_TB = _get_fat_size(_T46,sizeof(char));
	if (_TB != 1U) { goto _TLF1;
	}
	if (_T47 != 0) { goto _TLF1;
	}
	if (_T48 == 0) { goto _TLF1;
	}
	_throw_arraybounds();
	goto _TLF2;
	_TLF1: _TLF2: _TC = _T46.curr;
	_TD = (char *)_TC;
	*_TD = _T48;
      }
    }
  }{ struct _fat_ptr _T46 = p;
    _TE = _check_fat_subscript(_T46,sizeof(char),0U);
    _TF = (char *)_TE;
    { char _T47 = *_TF;
      char _T48 = '\000';
      _T10 = _get_fat_size(_T46,sizeof(char));
      if (_T10 != 1U) { goto _TLF3;
      }
      if (_T47 != 0) { goto _TLF3;
      }
      if (_T48 == 0) { goto _TLF3;
      }
      _throw_arraybounds();
      goto _TLF4;
      _TLF3: _TLF4: _T11 = _T46.curr;
      _T12 = (char *)_T11;
      *_T12 = _T48;
    }
  }_T13 = c;
  _T14 = (int)_T13;
  switch (_T14) {
  case 37: 
    return 7;
  case 123: 
    return 8;
  case 60: 
    return 15;
  case 62: 
    return 16;
  case 50: 
    return 17;
  case 48: 
    return 9;
  case 61: 
    return 18;
  default: 
    goto _LL0;
  }
  _LL0: _T15 = isalpha(c);
  if (_T15) { goto _TLF6;
  }else { goto _TLF8;
  }
  _TLF8: return 28;
  _TLF6: p = Cyc_token_buffer;
  _T16 = &p;
  { struct _fat_ptr _T46 = _fat_ptr_inplace_plus_post(_T16,sizeof(char),1);
    _T17 = _check_fat_subscript(_T46,sizeof(char),0U);
    _T18 = (char *)_T17;
    { char _T47 = *_T18;
      char _T48 = '%';
      _T19 = _get_fat_size(_T46,sizeof(char));
      if (_T19 != 1U) { goto _TLF9;
      }
      if (_T47 != 0) { goto _TLF9;
      }
      if (_T48 == 0) { goto _TLF9;
      }
      _throw_arraybounds();
      goto _TLFA;
      _TLF9: _TLFA: _T1A = _T46.curr;
      _T1B = (char *)_T1A;
      *_T1B = _T48;
    }
  }_TLFB: _T1C = isalpha(c);
  if (_T1C) { goto _TLFC;
  }else { goto _TLFF;
  }
  _TLFF: if (c == 95) { goto _TLFC;
  }else { goto _TLFE;
  }
  _TLFE: if (c == 45) { goto _TLFC;
  }else { goto _TLFD;
  }
  _TLFC: _T1D = p;
  _T1E = _T1D.curr;
  _T1F = (char *)_T1E;
  _T20 = Cyc_token_buffer;
  _T21 = Cyc_maxtoken;
  _T22 = _fat_ptr_plus(_T20,sizeof(char),_T21);
  _T23 = _T22.curr;
  _T24 = (char *)_T23;
  if (_T1F != _T24) { goto _TL100;
  }
  p = Cyc_grow_token_buffer(p);
  goto _TL101;
  _TL100: _TL101: if (c != 45) { goto _TL102;
  }
  c = 95;
  goto _TL103;
  _TL102: _TL103: _T25 = &p;
  { struct _fat_ptr _T46 = _fat_ptr_inplace_plus_post(_T25,sizeof(char),1);
    _T26 = _T46.curr;
    _T27 = (char *)_T26;
    { char _T47 = *_T27;
      _T28 = c;
      { char _T48 = (char)_T28;
	_T29 = _get_fat_size(_T46,sizeof(char));
	if (_T29 != 1U) { goto _TL104;
	}
	if (_T47 != 0) { goto _TL104;
	}
	if (_T48 == 0) { goto _TL104;
	}
	_throw_arraybounds();
	goto _TL105;
	_TL104: _TL105: _T2A = _T46.curr;
	_T2B = (char *)_T2A;
	*_T2B = _T48;
      }
    }
  }c = Cyc_getc(Cyc_finput);
  goto _TLFB;
  _TLFD: _T2C = c;
  _T2D = _check_null(Cyc_finput);
  Cyc_ungetc(_T2C,_T2D);
  { struct _fat_ptr _T46 = p;
    _T2E = _check_fat_subscript(_T46,sizeof(char),0U);
    _T2F = (char *)_T2E;
    { char _T47 = *_T2F;
      char _T48 = '\000';
      _T30 = _get_fat_size(_T46,sizeof(char));
      if (_T30 != 1U) { goto _TL106;
      }
      if (_T47 != 0) { goto _TL106;
      }
      if (_T48 == 0) { goto _TL106;
      }
      _throw_arraybounds();
      goto _TL107;
      _TL106: _TL107: _T31 = _T46.curr;
      _T32 = (char *)_T31;
      *_T32 = _T48;
    }
  }_T33 = Cyc_percent_table;
  tx = _tag_fat(_T33,sizeof(struct Cyc_percent_table_struct),21U);
  _TL10B: _T34 = tx;
  _T35 = _check_fat_subscript(_T34,sizeof(struct Cyc_percent_table_struct),
			      0U);
  _T36 = (struct Cyc_percent_table_struct *)_T35;
  _T37 = _T36->name;
  _T38 = _T37.curr;
  _T39 = (unsigned int)_T38;
  if (_T39) { goto _TL109;
  }else { goto _TL10A;
  }
  _TL109: _T3A = Cyc_token_buffer;
  _T3B = _fat_ptr_plus(_T3A,sizeof(char),1);
  _T3C = tx;
  _T3D = _T3C.curr;
  _T3E = (struct Cyc_percent_table_struct *)_T3D;
  _T3F = _T3E->name;
  _T40 = Cyc_strcmp(_T3B,_T3F);
  if (_T40 != 0) { goto _TL10C;
  }
  goto _TL10A;
  _TL10C: _T41 = &tx;
  _fat_ptr_inplace_plus(_T41,sizeof(struct Cyc_percent_table_struct),1);
  goto _TL10B;
  _TL10A: _T42 = tx;
  _T43 = _T42.curr;
  _T44 = (struct Cyc_percent_table_struct *)_T43;
  _T45 = _T44->retval;
  return _T45;
}
