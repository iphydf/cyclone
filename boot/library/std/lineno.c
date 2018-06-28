#include <cyc_include.h>
struct _fat_ptr Cyc_Core_new_string(unsigned int);
int Cyc_Core_intcmp(int,int);
struct Cyc___cycFILE;
 struct Cyc_IntPtr_sa_ScanfArg_struct {
  int tag;
  int * f1;
};
extern int Cyc_sscanf(struct _fat_ptr,struct _fat_ptr,struct _fat_ptr);
extern struct Cyc___cycFILE * Cyc_file_open(struct _fat_ptr,struct _fat_ptr);
extern void Cyc_file_close(struct Cyc___cycFILE *);
extern char Cyc_Lexing_Error[6U];
 struct Cyc_Lexing_Error_exn_struct {
  char * tag;
  struct _fat_ptr f1;
};
 struct Cyc_Lexing_lexbuf {
  void (* refill_buff)(struct Cyc_Lexing_lexbuf *);
  void * refill_state;
  struct _fat_ptr lex_buffer;
  int lex_buffer_len;
  int lex_abs_pos;
  int lex_start_pos;
  int lex_curr_pos;
  int lex_last_pos;
  int lex_last_action;
  long lex_eof_reached;
};
extern struct Cyc_Lexing_lexbuf * Cyc_Lexing_from_file(struct Cyc___cycFILE *);
extern struct _fat_ptr Cyc_Lexing_lexeme(struct Cyc_Lexing_lexbuf *);
extern int Cyc_Lexing_lexeme_end(struct Cyc_Lexing_lexbuf *);
 struct Cyc_List_List {
  void * hd;
  struct Cyc_List_List * tl;
};
extern struct Cyc_List_List * Cyc_List_merge_sort(int (*)(void *,void *),
						  struct Cyc_List_List *);
extern unsigned long Cyc_strlen(struct _fat_ptr);
extern struct _fat_ptr Cyc_strdup(struct _fat_ptr);
extern struct _fat_ptr Cyc_substring(struct _fat_ptr,int,unsigned long);
 struct Cyc_Lineno_Pos {
  struct _fat_ptr logical_file;
  struct _fat_ptr line;
  int line_no;
  int col;
};
enum Cyc_Lineno_token_val {
  Cyc_Lineno_NEWLINE = 0U,
  Cyc_Lineno_LINEDEF = 1U,
  Cyc_Lineno_END = 2U
};
const int Cyc_Lineno_lex_base[10U] = {0,1,- 2,2,6,- 3,16,7,- 1,8};
const int Cyc_Lineno_lex_backtrk[10U] = {- 1,- 1,- 1,1,- 1,- 1,- 1,- 1,- 1,
					 0};
const int Cyc_Lineno_lex_default[10U] = {1,1,0,- 1,1,0,7,7,0,- 1};
const int Cyc_Lineno_lex_trans[273U] = {0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					2,
					2,
					2,
					3,
					3,
					4,
					2,
					8,
					8,
					3,
					9,
					0,
					0,
					0,
					0,
					0,
					8,
					0,
					0,
					9,
					0,
					0,
					0,
					0,
					0,
					4,
					0,
					0,
					4,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					6,
					6,
					6,
					6,
					6,
					6,
					6,
					6,
					6,
					6,
					6,
					6,
					6,
					6,
					6,
					6,
					6,
					6,
					6,
					6,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					5,
					5,
					0,
					0,
					0,
					0,
					5,
					5,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					5};
const int Cyc_Lineno_lex_check[273U] = {- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					0,
					1,
					3,
					0,
					1,
					4,
					4,
					7,
					9,
					4,
					7,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					6,
					- 1,
					- 1,
					6,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					0,
					- 1,
					- 1,
					4,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					4,
					4,
					4,
					4,
					4,
					4,
					4,
					4,
					4,
					4,
					6,
					6,
					6,
					6,
					6,
					6,
					6,
					6,
					6,
					6,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					0,
					1,
					- 1,
					- 1,
					- 1,
					- 1,
					4,
					7,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					6};
int Cyc_Lineno_lex_engine(int start_state,struct Cyc_Lexing_lexbuf * lbuf) {
  struct Cyc_Lexing_lexbuf * _T0;
  struct Cyc_Lexing_lexbuf * _T1;
  struct Cyc_Lexing_lexbuf * _T2;
  struct Cyc_Lexing_lexbuf * _T3;
  int _T4;
  const int * _T5;
  int _T6;
  const char * _T7;
  const int * _T8;
  int _T9;
  int _TA;
  const int * _TB;
  int _TC;
  struct Cyc_Lexing_lexbuf * _TD;
  struct Cyc_Lexing_lexbuf * _TE;
  struct Cyc_Lexing_lexbuf * _TF;
  struct Cyc_Lexing_lexbuf * _T10;
  int _T11;
  struct Cyc_Lexing_lexbuf * _T12;
  int _T13;
  struct Cyc_Lexing_lexbuf * _T14;
  long _T15;
  int _T16;
  int _T17;
  struct Cyc_Lexing_lexbuf * _T18;
  struct _fat_ptr _T19;
  struct Cyc_Lexing_lexbuf * _T1A;
  int _T1B;
  int _T1C;
  unsigned char * _T1D;
  char * _T1E;
  char _T1F;
  int _T20;
  int _T21;
  const int * _T22;
  int _T23;
  const char * _T24;
  const int * _T25;
  int _T26;
  int _T27;
  const int * _T28;
  int _T29;
  const int * _T2A;
  int _T2B;
  struct Cyc_Lexing_lexbuf * _T2C;
  struct Cyc_Lexing_lexbuf * _T2D;
  struct Cyc_Lexing_lexbuf * _T2E;
  int _T2F;
  int _T30;
  struct Cyc_Lexing_Error_exn_struct * _T31;
  void * _T32;
  struct Cyc_Lexing_lexbuf * _T33;
  int _T34;
  struct Cyc_Lexing_lexbuf * _T35;
  int state;
  int base;
  int backtrk;
  int c;
  state = start_state;
  if (state < 0) { goto _TL0;
  }
  _T0 = lbuf;
  _T1 = lbuf;
  _T2 = lbuf;
  _T1->lex_start_pos = _T2->lex_curr_pos;
  _T0->lex_last_pos = _T1->lex_start_pos;
  _T3 = lbuf;
  _T3->lex_last_action = - 1;
  goto _TL1;
  _TL0: _T4 = - state;
  state = _T4 - 1;
  _TL1: _TL2: if (1) { goto _TL3;
  }else { goto _TL4;
  }
  _TL3: _T5 = Cyc_Lineno_lex_base;
  _T6 = state;
  _T7 = _check_known_subscript_notnull(_T5,10U,sizeof(int),_T6);
  _T8 = (const int *)_T7;
  base = *_T8;
  if (base >= 0) { goto _TL5;
  }
  _T9 = - base;
  _TA = _T9 - 1;
  return _TA;
  _TL5: _TB = Cyc_Lineno_lex_backtrk;
  _TC = state;
  backtrk = _TB[_TC];
  if (backtrk < 0) { goto _TL7;
  }
  _TD = lbuf;
  _TE = lbuf;
  _TD->lex_last_pos = _TE->lex_curr_pos;
  _TF = lbuf;
  _TF->lex_last_action = backtrk;
  goto _TL8;
  _TL7: _TL8: _T10 = lbuf;
  _T11 = _T10->lex_curr_pos;
  _T12 = lbuf;
  _T13 = _T12->lex_buffer_len;
  if (_T11 < _T13) { goto _TL9;
  }
  _T14 = lbuf;
  _T15 = _T14->lex_eof_reached;
  if (_T15) { goto _TLB;
  }else { goto _TLD;
  }
  _TLD: _T16 = - state;
  _T17 = _T16 - 1;
  return _T17;
  _TLB: c = 256;
  goto _TLA;
  _TL9: _T18 = lbuf;
  _T19 = _T18->lex_buffer;
  _T1A = lbuf;
  _T1B = _T1A->lex_curr_pos;
  _T1A->lex_curr_pos = _T1B + 1;
  _T1C = _T1B;
  _T1D = _check_fat_subscript(_T19,sizeof(char),_T1C);
  _T1E = (char *)_T1D;
  _T1F = *_T1E;
  c = (int)_T1F;
  _T20 = c;
  _T21 = - 1;
  if (_T20 != _T21) { goto _TLE;
  }
  c = 256;
  goto _TLF;
  _TLE: if (c >= 0) { goto _TL10;
  }
  c = 256 + c;
  goto _TL11;
  _TL10: _TL11: _TLF: _TLA: _T22 = Cyc_Lineno_lex_check;
  _T23 = base + c;
  _T24 = _check_known_subscript_notnull(_T22,273U,sizeof(int),_T23);
  _T25 = (const int *)_T24;
  _T26 = *_T25;
  _T27 = state;
  if (_T26 != _T27) { goto _TL12;
  }
  _T28 = Cyc_Lineno_lex_trans;
  _T29 = base + c;
  state = _T28[_T29];
  goto _TL13;
  _TL12: _T2A = Cyc_Lineno_lex_default;
  _T2B = state;
  state = _T2A[_T2B];
  _TL13: if (state >= 0) { goto _TL14;
  }
  _T2C = lbuf;
  _T2D = lbuf;
  _T2C->lex_curr_pos = _T2D->lex_last_pos;
  _T2E = lbuf;
  _T2F = _T2E->lex_last_action;
  _T30 = - 1;
  if (_T2F != _T30) { goto _TL16;
  }
  { struct Cyc_Lexing_Error_exn_struct * _T36 = _cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));
    _T36->tag = Cyc_Lexing_Error;
    _T36->f1 = _tag_fat("empty token",sizeof(char),12U);
    _T31 = (struct Cyc_Lexing_Error_exn_struct *)_T36;
  }_T32 = (void *)_T31;
  _throw(_T32);
  goto _TL17;
  _TL16: _T33 = lbuf;
  _T34 = _T33->lex_last_action;
  return _T34;
  _TL17: goto _TL15;
  _TL14: if (c != 256) { goto _TL18;
  }
  _T35 = lbuf;
  _T35->lex_eof_reached = 0;
  goto _TL19;
  _TL18: _TL19: _TL15: goto _TL2;
  _TL4: ;
}
enum Cyc_Lineno_token_val Cyc_Lineno_token_rec(struct Cyc_Lexing_lexbuf * lexbuf,
					       int lexstate) {
  int _T0;
  int _T1;
  struct Cyc_Lexing_lexbuf * _T2;
  void (* _T3)(struct Cyc_Lexing_lexbuf *);
  enum Cyc_Lineno_token_val _T4;
  struct Cyc_Lexing_Error_exn_struct * _T5;
  void * _T6;
  lexstate = Cyc_Lineno_lex_engine(lexstate,lexbuf);
  _T0 = lexstate;
  _T1 = (int)_T0;
  switch (_T1) {
  case 0: 
    return 1U;
  case 1: 
    return 0U;
  case 2: 
    return 2U;
  default: 
    _T2 = lexbuf;
    _T3 = _T2->refill_buff;
    _T3(lexbuf);
    _T4 = Cyc_Lineno_token_rec(lexbuf,lexstate);
    return _T4;
  }
  { struct Cyc_Lexing_Error_exn_struct * _T7 = _cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));
    _T7->tag = Cyc_Lexing_Error;
    _T7->f1 = _tag_fat("some action didn't return!",sizeof(char),27U);
    _T5 = (struct Cyc_Lexing_Error_exn_struct *)_T7;
  }_T6 = (void *)_T5;
  _throw(_T6);
}
enum Cyc_Lineno_token_val Cyc_Lineno_token(struct Cyc_Lexing_lexbuf * lexbuf) {
  enum Cyc_Lineno_token_val _T0;
  _T0 = Cyc_Lineno_token_rec(lexbuf,0);
  return _T0;
}
 struct _tuple0 {
  struct _fat_ptr f0;
  int f1;
};
static struct _tuple0 * Cyc_Lineno_parse_linedef(struct _fat_ptr line) {
  struct _handler_cons * _T0;
  int _T1;
  int _T2;
  unsigned int _T3;
  struct _fat_ptr _T4;
  unsigned int _T5;
  struct _fat_ptr _T6;
  unsigned char * _T7;
  char * _T8;
  char * _T9;
  int _TA;
  char _TB;
  int _TC;
  struct _fat_ptr _TD;
  unsigned char * _TE;
  char * _TF;
  int _T10;
  char _T11;
  int _T12;
  int _T13;
  unsigned int _T14;
  struct _fat_ptr _T15;
  unsigned int _T16;
  struct _fat_ptr _T17;
  unsigned char * _T18;
  char * _T19;
  char * _T1A;
  int _T1B;
  char _T1C;
  int _T1D;
  struct _fat_ptr _T1E;
  unsigned char * _T1F;
  char * _T20;
  int _T21;
  char _T22;
  int _T23;
  int _T24;
  unsigned int _T25;
  struct _fat_ptr _T26;
  unsigned int _T27;
  int _T28;
  struct Cyc_IntPtr_sa_ScanfArg_struct _T29;
  struct _fat_ptr _T2A;
  int _T2B;
  int _T2C;
  unsigned long _T2D;
  struct _fat_ptr _T2E;
  struct _fat_ptr _T2F;
  struct _fat_ptr _T30;
  int _T31;
  unsigned int _T32;
  struct _fat_ptr _T33;
  unsigned int _T34;
  struct _fat_ptr _T35;
  unsigned char * _T36;
  char * _T37;
  char * _T38;
  int _T39;
  char _T3A;
  int _T3B;
  int _T3C;
  unsigned int _T3D;
  struct _fat_ptr _T3E;
  unsigned int _T3F;
  struct _fat_ptr _T40;
  unsigned char * _T41;
  char * _T42;
  char * _T43;
  int _T44;
  char _T45;
  int _T46;
  int _T47;
  unsigned int _T48;
  struct _fat_ptr _T49;
  unsigned int _T4A;
  int _T4B;
  unsigned int _T4C;
  struct _fat_ptr _T4D;
  unsigned int _T4E;
  struct _fat_ptr _T4F;
  int _T50;
  int _T51;
  unsigned long _T52;
  void * _T53;
  struct _handler_cons _T54;
  _T0 = &_T54;
  _push_handler(_T0);
  { int _T55 = 0;
    _T1 = setjmp(_T54.handler);
    if (! _T1) { goto _TL1B;
    }
    _T55 = 1;
    goto _TL1C;
    _TL1B: _TL1C: if (_T55) { goto _TL1D;
    }else { goto _TL1F;
    }
    _TL1F: { int i = 0;
      _TL20: _T2 = i;
      _T3 = (unsigned int)_T2;
      _T4 = line;
      _T5 = _get_fat_size(_T4,sizeof(char));
      if (_T3 < _T5) { goto _TL23;
      }else { goto _TL22;
      }
      _TL23: _T6 = line;
      _T7 = _T6.curr;
      _T8 = (char *)_T7;
      _T9 = _check_null(_T8);
      _TA = i;
      _TB = _T9[_TA];
      _TC = (int)_TB;
      if (_TC < 48) { goto _TL21;
      }else { goto _TL24;
      }
      _TL24: _TD = line;
      _TE = _TD.curr;
      _TF = (char *)_TE;
      _T10 = i;
      _T11 = _TF[_T10];
      _T12 = (int)_T11;
      if (_T12 > 57) { goto _TL21;
      }else { goto _TL22;
      }
      _TL21: i = i + 1;
      goto _TL20;
      _TL22: { int j = i;
	_TL25: _T13 = j;
	_T14 = (unsigned int)_T13;
	_T15 = line;
	_T16 = _get_fat_size(_T15,sizeof(char));
	if (_T14 < _T16) { goto _TL29;
	}else { goto _TL27;
	}
	_TL29: _T17 = line;
	_T18 = _T17.curr;
	_T19 = (char *)_T18;
	_T1A = _check_null(_T19);
	_T1B = j;
	_T1C = _T1A[_T1B];
	_T1D = (int)_T1C;
	if (_T1D >= 48) { goto _TL28;
	}else { goto _TL27;
	}
	_TL28: _T1E = line;
	_T1F = _T1E.curr;
	_T20 = (char *)_T1F;
	_T21 = j;
	_T22 = _T20[_T21];
	_T23 = (int)_T22;
	if (_T23 <= 57) { goto _TL26;
	}else { goto _TL27;
	}
	_TL26: j = j + 1;
	goto _TL25;
	_TL27: _T24 = i;
	_T25 = (unsigned int)_T24;
	_T26 = line;
	_T27 = _get_fat_size(_T26,sizeof(char));
	if (_T25 != _T27) { goto _TL2A;
	}
	{ struct _tuple0 * _T56 = 0;
	  _npop_handler(0);
	  return _T56;
	}_TL2A: { int number = 0;
	  { struct Cyc_IntPtr_sa_ScanfArg_struct _T56;
	    _T56.tag = 2;
	    _T56.f1 = &number;
	    _T29 = _T56;
	  }{ struct Cyc_IntPtr_sa_ScanfArg_struct _T56 = _T29;
	    void * _T57[1];
	    _T57[0] = &_T56;
	    _T2A = line;
	    _T2B = i;
	    _T2C = j - i;
	    _T2D = (unsigned long)_T2C;
	    _T2E = Cyc_substring(_T2A,_T2B,_T2D);
	    _T2F = _tag_fat("%d",sizeof(char),3U);
	    _T30 = _tag_fat(_T57,sizeof(void *),1);
	    _T28 = Cyc_sscanf(_T2E,_T2F,_T30);
	  }if (_T28 == 1) { goto _TL2C;
	  }
	  { struct _tuple0 * _T56 = 0;
	    _npop_handler(0);
	    return _T56;
	  }_TL2C: _TL2E: _T31 = j;
	  _T32 = (unsigned int)_T31;
	  _T33 = line;
	  _T34 = _get_fat_size(_T33,sizeof(char));
	  if (_T32 < _T34) { goto _TL31;
	  }else { goto _TL30;
	  }
	  _TL31: _T35 = line;
	  _T36 = _T35.curr;
	  _T37 = (char *)_T36;
	  _T38 = _check_null(_T37);
	  _T39 = j;
	  _T3A = _T38[_T39];
	  _T3B = (int)_T3A;
	  if (_T3B != 34) { goto _TL2F;
	  }else { goto _TL30;
	  }
	  _TL2F: j = j + 1;
	  goto _TL2E;
	  _TL30: j = j + 1;
	  { int k = j;
	    _TL32: _T3C = k;
	    _T3D = (unsigned int)_T3C;
	    _T3E = line;
	    _T3F = _get_fat_size(_T3E,sizeof(char));
	    if (_T3D < _T3F) { goto _TL35;
	    }else { goto _TL34;
	    }
	    _TL35: _T40 = line;
	    _T41 = _T40.curr;
	    _T42 = (char *)_T41;
	    _T43 = _check_null(_T42);
	    _T44 = k;
	    _T45 = _T43[_T44];
	    _T46 = (int)_T45;
	    if (_T46 != 34) { goto _TL33;
	    }else { goto _TL34;
	    }
	    _TL33: k = k + 1;
	    goto _TL32;
	    _TL34: _T47 = j;
	    _T48 = (unsigned int)_T47;
	    _T49 = line;
	    _T4A = _get_fat_size(_T49,sizeof(char));
	    if (_T48 == _T4A) { goto _TL38;
	    }else { goto _TL39;
	    }
	    _TL39: _T4B = k;
	    _T4C = (unsigned int)_T4B;
	    _T4D = line;
	    _T4E = _get_fat_size(_T4D,sizeof(char));
	    if (_T4C == _T4E) { goto _TL38;
	    }else { goto _TL36;
	    }
	    _TL38: { struct _tuple0 * _T56 = 0;
	      _npop_handler(0);
	      return _T56;
	    }_TL36: _T4F = line;
	    _T50 = j;
	    _T51 = k - j;
	    _T52 = (unsigned long)_T51;
	    { struct _fat_ptr fname = Cyc_substring(_T4F,_T50,_T52);
	      struct _tuple0 * _T56;
	      _T56 = _cycalloc(sizeof(struct _tuple0));
	      _T56->f0 = fname;
	      _T56->f1 = number;
	      _npop_handler(0);
	      return _T56;
	    }
	  }
	}
      }
    }_pop_handler();
    goto _TL1E;
    _TL1D: _T53 = Cyc_Core_get_exn_thrown();
    { void * _T56 = (void *)_T53;
      return 0;
      ;
    }_TL1E: ;
  }
}
 struct _tuple1 {
  int f0;
  struct Cyc_Lineno_Pos * f1;
};
int Cyc_Lineno_place_cmp(struct _tuple1 * place1,struct _tuple1 * place2) {
  struct _tuple1 * _T0;
  struct _tuple1 _T1;
  int _T2;
  struct _tuple1 * _T3;
  struct _tuple1 _T4;
  int _T5;
  int _T6;
  _T0 = place1;
  _T1 = *_T0;
  _T2 = _T1.f0;
  _T3 = place2;
  _T4 = *_T3;
  _T5 = _T4.f0;
  _T6 = Cyc_Core_intcmp(_T2,_T5);
  return _T6;
}
void Cyc_Lineno_poss_of_abss(struct _fat_ptr filename,struct Cyc_List_List * places) {
  struct Cyc_List_List * (* _T0)(int (*)(struct _tuple1 *,struct _tuple1 *),
				 struct Cyc_List_List *);
  struct Cyc_List_List * (* _T1)(int (*)(void *,void *),struct Cyc_List_List *);
  struct Cyc_List_List * _T2;
  struct _fat_ptr _T3;
  struct _fat_ptr _T4;
  struct _handler_cons * _T5;
  int _T6;
  enum Cyc_Lineno_token_val _T7;
  int _T8;
  int _T9;
  struct Cyc_List_List * _TA;
  void * _TB;
  struct _tuple1 * _TC;
  struct _tuple1 _TD;
  int _TE;
  enum Cyc_Lineno_token_val _TF;
  int _T10;
  struct _tuple0 * _T11;
  struct _tuple0 _T12;
  struct _tuple0 * _T13;
  struct _tuple0 _T14;
  enum Cyc_Lineno_token_val _T15;
  int _T16;
  int _T17;
  struct Cyc_List_List * _T18;
  void * _T19;
  struct _tuple1 * _T1A;
  struct _tuple1 _T1B;
  int _T1C;
  struct Cyc_List_List * _T1D;
  void * _T1E;
  struct _tuple1 * _T1F;
  struct _tuple1 _T20;
  struct Cyc_Lineno_Pos * _T21;
  struct Cyc_Lineno_Pos * _T22;
  struct Cyc_Lineno_Pos * _T23;
  struct Cyc_Lineno_Pos * _T24;
  unsigned long _T25;
  int _T26;
  struct Cyc_List_List * _T27;
  void * _T28;
  struct _tuple1 * _T29;
  struct _tuple1 _T2A;
  int _T2B;
  int _T2C;
  unsigned long _T2D;
  unsigned long _T2E;
  struct Cyc_Lineno_Pos * _T2F;
  int _T30;
  struct Cyc_Lineno_Pos * _T31;
  struct Cyc_List_List * _T32;
  void * _T33;
  _T1 = Cyc_List_merge_sort;
  { struct Cyc_List_List * (* _T34)(int (*)(struct _tuple1 *,struct _tuple1 *),
				    struct Cyc_List_List *) = (struct Cyc_List_List * (*)(int (*)(struct _tuple1 *,
												  struct _tuple1 *),
											  struct Cyc_List_List *))_T1;
    _T0 = _T34;
  }_T2 = places;
  places = _T0(Cyc_Lineno_place_cmp,_T2);
  _T3 = filename;
  _T4 = _tag_fat("r",sizeof(char),2U);
  { struct Cyc___cycFILE * f = Cyc_file_open(_T3,_T4);
    { struct _handler_cons _T34;
      _T5 = &_T34;
      _push_handler(_T5);
      { int _T35 = 0;
	_T6 = setjmp(_T34.handler);
	if (! _T6) { goto _TL3A;
	}
	_T35 = 1;
	goto _TL3B;
	_TL3A: _TL3B: if (_T35) { goto _TL3C;
	}else { goto _TL3E;
	}
	_TL3E: { struct Cyc_Lexing_lexbuf * lbuf = Cyc_Lexing_from_file(f);
	  struct _fat_ptr source_file = filename;
	  int line = 1;
	  struct _fat_ptr this_line;
	  int eol;
	  enum Cyc_Lineno_token_val next;
	  _TL3F: if (places != 0) { goto _TL40;
	  }else { goto _TL41;
	  }
	  _TL40: _TL42: if (1) { goto _TL43;
	  }else { goto _TL44;
	  }
	  _TL43: next = Cyc_Lineno_token(lbuf);
	  eol = Cyc_Lexing_lexeme_end(lbuf);
	  this_line = Cyc_Lexing_lexeme(lbuf);
	  _T7 = next;
	  _T8 = (int)_T7;
	  if (_T8 == 2) { goto _TL47;
	  }else { goto _TL48;
	  }
	  _TL48: _T9 = eol;
	  _TA = places;
	  _TB = _TA->hd;
	  _TC = (struct _tuple1 *)_TB;
	  _TD = *_TC;
	  _TE = _TD.f0;
	  if (_T9 > _TE) { goto _TL47;
	  }else { goto _TL45;
	  }
	  _TL47: goto _TL44;
	  _TL45: _TF = next;
	  _T10 = (int)_TF;
	  if (_T10 != 0) { goto _TL49;
	  }
	  line = line + 1;
	  goto _TL4A;
	  _TL49: { struct _tuple0 * fno = Cyc_Lineno_parse_linedef(this_line);
	    if (fno != 0) { goto _TL4B;
	    }
	    line = line + 1;
	    goto _TL4C;
	    _TL4B: _T11 = fno;
	    _T12 = *_T11;
	    source_file = _T12.f0;
	    _T13 = fno;
	    _T14 = *_T13;
	    line = _T14.f1;
	    _TL4C: ;
	  }_TL4A: goto _TL42;
	  _TL44: _TL4D: if (places != 0) { goto _TL50;
	  }else { goto _TL4F;
	  }
	  _TL50: _T15 = next;
	  _T16 = (int)_T15;
	  if (_T16 == 2) { goto _TL4E;
	  }else { goto _TL51;
	  }
	  _TL51: _T17 = eol;
	  _T18 = places;
	  _T19 = _T18->hd;
	  _T1A = (struct _tuple1 *)_T19;
	  _T1B = *_T1A;
	  _T1C = _T1B.f0;
	  if (_T17 > _T1C) { goto _TL4E;
	  }else { goto _TL4F;
	  }
	  _TL4E: _T1D = places;
	  _T1E = _T1D->hd;
	  _T1F = (struct _tuple1 *)_T1E;
	  _T20 = *_T1F;
	  { struct Cyc_Lineno_Pos * p = _T20.f1;
	    _T21 = p;
	    _T21->logical_file = Cyc_strdup(source_file);
	    _T22 = p;
	    _T22->line = this_line;
	    _T23 = p;
	    _T23->line_no = line;
	    _T24 = p;
	    _T25 = Cyc_strlen(this_line);
	    _T26 = eol;
	    _T27 = places;
	    _T28 = _T27->hd;
	    _T29 = (struct _tuple1 *)_T28;
	    _T2A = *_T29;
	    _T2B = _T2A.f0;
	    _T2C = _T26 - _T2B;
	    _T2D = (unsigned long)_T2C;
	    _T2E = _T25 - _T2D;
	    _T24->col = (int)_T2E;
	    _T2F = p;
	    _T30 = _T2F->col;
	    if (_T30 >= 0) { goto _TL52;
	    }
	    _T31 = p;
	    _T31->col = 0;
	    goto _TL53;
	    _TL52: _TL53: _T32 = places;
	    places = _T32->tl;
	  }goto _TL4D;
	  _TL4F: line = line + 1;
	  goto _TL3F;
	  _TL41: ;
	}_pop_handler();
	goto _TL3D;
	_TL3C: _T33 = Cyc_Core_get_exn_thrown();
	{ void * _T36 = (void *)_T33;
	  void * _T37;
	  _T37 = _T36;
	  { void * y = _T37;
	    Cyc_file_close(f);
	    _throw(y);
	  };
	}_TL3D: ;
      }
    }Cyc_file_close(f);
    return;
  }
}
struct Cyc_Lineno_Pos * Cyc_Lineno_pos_of_abs(struct _fat_ptr filename,int abs) {
  struct Cyc_Lineno_Pos * _T0;
  struct Cyc_Lineno_Pos * _T1;
  struct Cyc_Lineno_Pos * _T2;
  struct Cyc_Lineno_Pos * _T3;
  struct _fat_ptr _T4;
  struct Cyc_List_List * _T5;
  struct _tuple1 * _T6;
  struct Cyc_Lineno_Pos * _T7;
  struct Cyc_Lineno_Pos * ans;
  ans = _cycalloc(sizeof(struct Cyc_Lineno_Pos));
  _T0 = ans;
  _T0->logical_file = _tag_fat("",sizeof(char),1U);
  _T1 = ans;
  _T1->line = Cyc_Core_new_string(0U);
  _T2 = ans;
  _T2->line_no = 0;
  _T3 = ans;
  _T3->col = 0;
  _T4 = filename;
  { struct Cyc_List_List * _T8 = _cycalloc(sizeof(struct Cyc_List_List));
    { struct _tuple1 * _T9 = _cycalloc(sizeof(struct _tuple1));
      _T9->f0 = abs;
      _T9->f1 = ans;
      _T6 = (struct _tuple1 *)_T9;
    }_T8->hd = _T6;
    _T8->tl = 0;
    _T5 = (struct Cyc_List_List *)_T8;
  }Cyc_Lineno_poss_of_abss(_T4,_T5);
  _T7 = ans;
  return _T7;
}
