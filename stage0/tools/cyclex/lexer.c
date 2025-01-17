#include <cyc_include.h>
 struct Cyc_Core_Opt {
  void * v;
};
struct _fat_ptr Cyc_Core_new_string(unsigned int);
struct Cyc___cycFILE;
extern struct Cyc___cycFILE * Cyc_stderr;
 struct Cyc_String_pa_PrintArg_struct {
  int tag;
  struct _fat_ptr f1;
};
 struct Cyc_Int_pa_PrintArg_struct {
  int tag;
  unsigned long f1;
};
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);
extern int Cyc_fflush(struct Cyc___cycFILE *);
extern int Cyc_fprintf(struct Cyc___cycFILE *,struct _fat_ptr,struct _fat_ptr);
struct Cyc___cycFILE;
extern struct Cyc___cycFILE * Cyc_stderr;
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);
extern int Cyc_fflush(struct Cyc___cycFILE *);
extern int Cyc_fprintf(struct Cyc___cycFILE *,struct _fat_ptr,struct _fat_ptr);
 struct Cyc_List_List {
  void * hd;
  struct Cyc_List_List * tl;
};
extern int Cyc_strcmp(struct _fat_ptr,struct _fat_ptr);
extern struct _fat_ptr Cyc_strncpy(struct _fat_ptr,struct _fat_ptr,unsigned long);
extern struct _fat_ptr Cyc_substring(struct _fat_ptr,int,unsigned long);
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
extern struct _fat_ptr Cyc_Lexing_lexeme(struct Cyc_Lexing_lexbuf *);
extern char Cyc_Lexing_lexeme_char(struct Cyc_Lexing_lexbuf *,int);
extern int Cyc_Lexing_lexeme_start(struct Cyc_Lexing_lexbuf *);
extern int Cyc_Lexing_lexeme_end(struct Cyc_Lexing_lexbuf *);
 struct Cyc_Syntax_Location {
  int start_pos;
  int end_pos;
  int start_line;
  int start_col;
};
 struct _tuple2 {
  void * f0;
  struct Cyc_Syntax_Location * f1;
};
 struct _tuple3 {
  struct _fat_ptr f0;
  struct _fat_ptr f1;
};
 struct _tuple4 {
  struct _fat_ptr f0;
  struct _fat_ptr f1;
  struct _tuple3 * f2;
  struct Cyc_List_List * f3;
};
 struct Cyc_Syntax_Lexer_definition {
  struct Cyc_Syntax_Location * header;
  struct Cyc_List_List * entrypoints;
  struct Cyc_Syntax_Location * trailer;
};
extern struct Cyc_Core_Opt * Cyc_Parser_lbuf;
extern char Cyc_Parser_Parser_error[13U];
 struct Cyc_Parser_Parser_error_exn_struct {
  char * tag;
  struct _fat_ptr f1;
};
 struct _union_YYSTYPE_YYINITIALSVAL {
  int tag;
  int val;
};
 struct _union_YYSTYPE_Lexer_definition_tok {
  int tag;
  struct Cyc_Syntax_Lexer_definition * val;
};
 struct _union_YYSTYPE_Location_tok {
  int tag;
  struct Cyc_Syntax_Location * val;
};
 struct _union_YYSTYPE_Int_tok {
  int tag;
  int val;
};
 struct _union_YYSTYPE_Entrypoint_List_tok {
  int tag;
  struct Cyc_List_List * val;
};
 struct _union_YYSTYPE_Entrypoint_tok {
  int tag;
  struct _tuple4 * val;
};
 struct _union_YYSTYPE_Acase_List_tok {
  int tag;
  struct Cyc_List_List * val;
};
 struct _union_YYSTYPE_Acase_tok {
  int tag;
  struct _tuple2 * val;
};
 struct _union_YYSTYPE_Regexp_tok {
  int tag;
  void * val;
};
 struct _union_YYSTYPE_Char_tok {
  int tag;
  char val;
};
 struct _union_YYSTYPE_String_tok {
  int tag;
  struct _fat_ptr val;
};
 struct _union_YYSTYPE_Charclass_tok {
  int tag;
  struct Cyc_List_List * val;
};
 union Cyc_YYSTYPE {
  struct _union_YYSTYPE_YYINITIALSVAL YYINITIALSVAL;
  struct _union_YYSTYPE_Lexer_definition_tok Lexer_definition_tok;
  struct _union_YYSTYPE_Location_tok Location_tok;
  struct _union_YYSTYPE_Int_tok Int_tok;
  struct _union_YYSTYPE_Entrypoint_List_tok Entrypoint_List_tok;
  struct _union_YYSTYPE_Entrypoint_tok Entrypoint_tok;
  struct _union_YYSTYPE_Acase_List_tok Acase_List_tok;
  struct _union_YYSTYPE_Acase_tok Acase_tok;
  struct _union_YYSTYPE_Regexp_tok Regexp_tok;
  struct _union_YYSTYPE_Char_tok Char_tok;
  struct _union_YYSTYPE_String_tok String_tok;
  struct _union_YYSTYPE_Charclass_tok Charclass_tok;
};
extern union Cyc_YYSTYPE Cyc_yylval;
int Cyc_Lexer_line_num = 1;
int Cyc_Lexer_line_start_pos = 0;
void Cyc_yyerror(struct _fat_ptr s) {
  struct Cyc_String_pa_PrintArg_struct _T0;
  struct Cyc_Int_pa_PrintArg_struct _T1;
  int _T2;
  struct Cyc___cycFILE * _T3;
  struct _fat_ptr _T4;
  struct _fat_ptr _T5;
  struct Cyc_Parser_Parser_error_exn_struct * _T6;
  void * _T7;
  { struct Cyc_String_pa_PrintArg_struct _T8;
    _T8.tag = 0;
    _T8.f1 = s;
    _T0 = _T8;
  }{ struct Cyc_String_pa_PrintArg_struct _T8 = _T0;
    { struct Cyc_Int_pa_PrintArg_struct _T9;
      _T9.tag = 1;
      _T2 = Cyc_Lexer_line_num;
      _T9.f1 = (unsigned long)_T2;
      _T1 = _T9;
    }{ struct Cyc_Int_pa_PrintArg_struct _T9 = _T1;
      void * _TA[2];
      _TA[0] = &_T8;
      _TA[1] = &_T9;
      _T3 = Cyc_stderr;
      _T4 = _tag_fat("%s, line:%d",sizeof(char),12U);
      _T5 = _tag_fat(_TA,sizeof(void *),2);
      Cyc_fprintf(_T3,_T4,_T5);
    }
  }Cyc_fflush(Cyc_stderr);
  { struct Cyc_Parser_Parser_error_exn_struct * _T8 = _cycalloc(sizeof(struct Cyc_Parser_Parser_error_exn_struct));
    _T8->tag = Cyc_Parser_Parser_error;
    _T8->f1 = s;
    _T6 = (struct Cyc_Parser_Parser_error_exn_struct *)_T8;
  }_T7 = (void *)_T6;
  _throw(_T7);
}
char Cyc_Lexer_Lexical_error[14U] = "Lexical_error";
 struct Cyc_Lexer_Lexical_error_exn_struct {
  char * tag;
  struct _fat_ptr f1;
  int f2;
  int f3;
};
static char _TmpG0[1U] = "";
static struct _fat_ptr Cyc_Lexer_token_string = {(unsigned char *)_TmpG0,
						 (unsigned char *)_TmpG0,
						 (unsigned char *)_TmpG0 + 1U};
static int Cyc_Lexer_token_char = (int)'D';
static struct Cyc_Syntax_Location Cyc_Lexer_dummy_loc = {0,0,0,0};
static struct Cyc_Syntax_Location * Cyc_Lexer_token_action = (struct Cyc_Syntax_Location *)&Cyc_Lexer_dummy_loc;
static int Cyc_Lexer_brace_depth = 0;
static int Cyc_Lexer_comment_depth = 0;
static char Cyc_Lexer_string_buff_v[38U];
static struct _fat_ptr Cyc_Lexer_string_buff = {(void *)Cyc_Lexer_string_buff_v,
						(void *)Cyc_Lexer_string_buff_v,
						(void *)(Cyc_Lexer_string_buff_v + 38U)};
static int Cyc_Lexer_string_index = 0;
void Cyc_Lexer_reset_string_buffer() {
  struct _fat_ptr _T0;
  unsigned int _T1;
  char * _T2;
  _T0 = Cyc_Lexer_string_buff;
  _T1 = _get_fat_size(_T0,sizeof(char));
  if (_T1 <= 16384U) { goto _TL0;
  }
  _T2 = Cyc_Lexer_string_buff_v;
  Cyc_Lexer_string_buff = _tag_fat(_T2,sizeof(char),38U);
  goto _TL1;
  _TL0: _TL1: Cyc_Lexer_string_index = 0;
}
void Cyc_Lexer_store_string_char(char c) {
  int _T0;
  unsigned int _T1;
  struct _fat_ptr _T2;
  unsigned int _T3;
  struct _fat_ptr _T4;
  unsigned int _T5;
  unsigned int _T6;
  struct _fat_ptr _T7;
  struct _fat_ptr _T8;
  struct _fat_ptr _T9;
  struct _fat_ptr _TA;
  unsigned int _TB;
  struct _fat_ptr _TC;
  int _TD;
  int _TE;
  unsigned char * _TF;
  char * _T10;
  unsigned int _T11;
  unsigned char * _T12;
  char * _T13;
  _T0 = Cyc_Lexer_string_index + 1;
  _T1 = (unsigned int)_T0;
  _T2 = Cyc_Lexer_string_buff;
  _T3 = _get_fat_size(_T2,sizeof(char));
  if (_T1 < _T3) { goto _TL2;
  }
  _T4 = Cyc_Lexer_string_buff;
  _T5 = _get_fat_size(_T4,sizeof(char));
  _T6 = _T5 * 2U;
  { struct _fat_ptr new_buff = Cyc_Core_new_string(_T6);
    _T7 = new_buff;
    _T8 = _fat_ptr_decrease_size(_T7,sizeof(char),1U);
    _T9 = Cyc_Lexer_string_buff;
    _TA = Cyc_Lexer_string_buff;
    _TB = _get_fat_size(_TA,sizeof(char));
    Cyc_strncpy(_T8,_T9,_TB);
    Cyc_Lexer_string_buff = new_buff;
  }goto _TL3;
  _TL2: _TL3: _TC = Cyc_Lexer_string_buff;
  _TD = Cyc_Lexer_string_index;
  Cyc_Lexer_string_index = _TD + 1;
  _TE = _TD;
  { struct _fat_ptr _T14 = _fat_ptr_plus(_TC,sizeof(char),_TE);
    _TF = _check_fat_subscript(_T14,sizeof(char),0U);
    _T10 = (char *)_TF;
    { char _T15 = *_T10;
      char _T16 = c;
      _T11 = _get_fat_size(_T14,sizeof(char));
      if (_T11 != 1U) { goto _TL4;
      }
      if (_T15 != 0) { goto _TL4;
      }
      if (_T16 == 0) { goto _TL4;
      }
      _throw_arraybounds();
      goto _TL5;
      _TL4: _TL5: _T12 = _T14.curr;
      _T13 = (char *)_T12;
      *_T13 = _T16;
    }
  }
}
struct _fat_ptr Cyc_Lexer_get_stored_string() {
  struct _fat_ptr _T0;
  int _T1;
  unsigned long _T2;
  struct _fat_ptr _T3;
  _T0 = Cyc_Lexer_string_buff;
  _T1 = Cyc_Lexer_string_index;
  _T2 = (unsigned long)_T1;
  _T3 = Cyc_substring(_T0,0,_T2);
  return _T3;
}
char Cyc_Lexer_char_for_backslash(char c) {
  char _T0;
  int _T1;
  char _T2;
  _T0 = c;
  _T1 = (int)_T0;
  switch (_T1) {
  case 97: 
    return '\a';
  case 98: 
    return '\b';
  case 102: 
    return '\f';
  case 110: 
    return '\n';
  case 114: 
    return '\r';
  case 116: 
    return '\t';
  case 118: 
    return '\v';
  default: 
    _T2 = c;
    return _T2;
  }
  ;
}
char Cyc_Lexer_char_for_octal_code(struct Cyc_Lexing_lexbuf * lbuf,int i) {
  char _T0;
  int _T1;
  int _T2;
  int _T3;
  struct Cyc_Lexing_lexbuf * _T4;
  int _T5;
  char _T6;
  int _T7;
  int _T8;
  int _T9;
  int _TA;
  struct Cyc_Lexing_lexbuf * _TB;
  int _TC;
  char _TD;
  int _TE;
  int _TF;
  int _T10;
  char _T11;
  _T0 = Cyc_Lexing_lexeme_char(lbuf,i);
  _T1 = (int)_T0;
  _T2 = _T1 - 48;
  _T3 = 64 * _T2;
  _T4 = lbuf;
  _T5 = i + 1;
  _T6 = Cyc_Lexing_lexeme_char(_T4,_T5);
  _T7 = (int)_T6;
  _T8 = _T7 - 48;
  _T9 = 8 * _T8;
  _TA = _T3 + _T9;
  _TB = lbuf;
  _TC = i + 2;
  _TD = Cyc_Lexing_lexeme_char(_TB,_TC);
  _TE = (int)_TD;
  _TF = _TE - 48;
  _T10 = _TA + _TF;
  _T11 = (char)_T10;
  return _T11;
}
static int Cyc_Lexer_handle_lexical_error(int (* fn)(struct Cyc_Lexing_lexbuf *),
					  struct Cyc_Lexing_lexbuf * lbuf) {
  int _T0;
  int _T1;
  struct _handler_cons * _T2;
  int _T3;
  void * _T4;
  struct Cyc_Lexer_Lexical_error_exn_struct * _T5;
  char * _T6;
  char * _T7;
  struct Cyc_Lexer_Lexical_error_exn_struct * _T8;
  void * _T9;
  int line = Cyc_Lexer_line_num;
  _T0 = Cyc_Lexing_lexeme_start(lbuf);
  _T1 = Cyc_Lexer_line_start_pos;
  { int column = _T0 - _T1;
    struct _handler_cons _TA;
    _T2 = &_TA;
    _push_handler(_T2);
    { int _TB = 0;
      _T3 = setjmp(_TA.handler);
      if (! _T3) { goto _TL7;
      }
      _TB = 1;
      goto _TL8;
      _TL7: _TL8: if (_TB) { goto _TL9;
      }else { goto _TLB;
      }
      _TLB: { int _TC = fn(lbuf);
	_npop_handler(0);
	return _TC;
      }_pop_handler();
      goto _TLA;
      _TL9: _T4 = Cyc_Core_get_exn_thrown();
      { void * _TC = (void *)_T4;
	void * _TD;
	struct _fat_ptr _TE;
	_T5 = (struct Cyc_Lexer_Lexical_error_exn_struct *)_TC;
	_T6 = _T5->tag;
	_T7 = Cyc_Lexer_Lexical_error;
	if (_T6 != _T7) { goto _TLC;
	}
	{ struct Cyc_Lexer_Lexical_error_exn_struct * _TF = (struct Cyc_Lexer_Lexical_error_exn_struct *)_TC;
	  _TE = _TF->f1;
	}{ struct _fat_ptr msg = _TE;
	  { struct Cyc_Lexer_Lexical_error_exn_struct * _TF = _cycalloc(sizeof(struct Cyc_Lexer_Lexical_error_exn_struct));
	    _TF->tag = Cyc_Lexer_Lexical_error;
	    _TF->f1 = msg;
	    _TF->f2 = line;
	    _TF->f3 = column;
	    _T8 = (struct Cyc_Lexer_Lexical_error_exn_struct *)_TF;
	  }_T9 = (void *)_T8;
	  _throw(_T9);
	}goto _TLD;
	_TLC: _TD = _TC;
	{ void * exn = _TD;
	  _rethrow(exn);
	}_TLD: ;
      }_TLA: ;
    }
  }
}
extern int Cyc_Lexer_lexmain(struct Cyc_Lexing_lexbuf *);
extern int Cyc_Lexer_action(struct Cyc_Lexing_lexbuf *);
extern int Cyc_Lexer_strng(struct Cyc_Lexing_lexbuf *);
extern int Cyc_Lexer_comment(struct Cyc_Lexing_lexbuf *);
int Cyc_yylex() {
  struct Cyc_Core_Opt * _T0;
  void * _T1;
  struct Cyc_Lexing_lexbuf * _T2;
  int _T3;
  int _T4;
  union Cyc_YYSTYPE _T5;
  union Cyc_YYSTYPE _T6;
  union Cyc_YYSTYPE _T7;
  int _T8;
  union Cyc_YYSTYPE _T9;
  int _TA;
  _T0 = _check_null(Cyc_Parser_lbuf);
  _T1 = _T0->v;
  _T2 = (struct Cyc_Lexing_lexbuf *)_T1;
  { int ans = Cyc_Lexer_lexmain(_T2);
    _T3 = ans;
    _T4 = (int)_T3;
    switch (_T4) {
    case 258: 
      { union Cyc_YYSTYPE _TB;
	(_TB.String_tok).tag = 11U;
	(_TB.String_tok).val = Cyc_Lexer_token_string;
	_T5 = _TB;
      }Cyc_yylval = _T5;
      goto _LL0;
    case 260: 
      { union Cyc_YYSTYPE _TB;
	(_TB.String_tok).tag = 11U;
	(_TB.String_tok).val = Cyc_Lexer_token_string;
	_T6 = _TB;
      }Cyc_yylval = _T6;
      goto _LL0;
    case 259: 
      { union Cyc_YYSTYPE _TB;
	(_TB.Char_tok).tag = 10U;
	_T8 = Cyc_Lexer_token_char;
	(_TB.Char_tok).val = (char)_T8;
	_T7 = _TB;
      }Cyc_yylval = _T7;
      goto _LL0;
    case 261: 
      { union Cyc_YYSTYPE _TB;
	(_TB.Location_tok).tag = 3U;
	(_TB.Location_tok).val = Cyc_Lexer_token_action;
	_T9 = _TB;
      }Cyc_yylval = _T9;
      goto _LL0;
    default: 
      goto _LL0;
    }
    _LL0: _TA = ans;
    return _TA;
  }
}
const int Cyc_Lexer_lex_base[74U] = {0,
				     10,
				     4,
				     12,
				     - 10,
				     - 9,
				     - 3,
				     53,
				     1,
				     8,
				     - 8,
				     - 1,
				     - 2,
				     13,
				     - 4,
				     88,
				     14,
				     98,
				     106,
				     16,
				     - 7,
				     - 6,
				     - 5,
				     - 6,
				     - 1,
				     157,
				     162,
				     24,
				     - 3,
				     173,
				     181,
				     153,
				     - 9,
				     - 3,
				     33,
				     16,
				     - 1,
				     - 2,
				     21,
				     231,
				     23,
				     189,
				     242,
				     25,
				     264,
				     - 23,
				     164,
				     - 2,
				     - 5,
				     52,
				     - 18,
				     - 19,
				     - 15,
				     - 17,
				     - 21,
				     84,
				     - 10,
				     - 16,
				     345,
				     - 13,
				     - 14,
				     - 20,
				     - 12,
				     - 9,
				     - 11,
				     - 22,
				     429,
				     89,
				     265,
				     90,
				     282,
				     300,
				     91,
				     169};
const int Cyc_Lexer_lex_backtrk[74U] = {- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					9,
					9,
					9,
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
					6,
					- 1,
					1,
					- 1,
					- 1,
					- 1,
					9,
					- 1,
					- 1,
					10,
					10,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					9,
					- 1,
					0,
					- 1,
					- 1,
					22,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					22,
					- 1,
					- 1,
					3,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					3,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					0};
const int Cyc_Lexer_lex_default[74U] = {45,
					31,
					20,
					4,
					0,
					0,
					0,
					13,
					- 1,
					- 1,
					0,
					0,
					0,
					- 1,
					0,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					0,
					0,
					0,
					0,
					0,
					- 1,
					- 1,
					- 1,
					0,
					- 1,
					- 1,
					44,
					0,
					0,
					38,
					- 1,
					0,
					0,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					44,
					0,
					- 1,
					0,
					0,
					67,
					0,
					0,
					0,
					0,
					0,
					- 1,
					0,
					0,
					- 1,
					0,
					0,
					0,
					0,
					0,
					0,
					0,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1,
					- 1};
const int Cyc_Lexer_lex_trans[686U] = {0,
				       0,
				       0,
				       0,
				       0,
				       0,
				       0,
				       0,
				       0,
				       46,
				       47,
				       0,
				       46,
				       46,
				       23,
				       0,
				       0,
				       0,
				       0,
				       0,
				       32,
				       0,
				       5,
				       0,
				       0,
				       0,
				       0,
				       0,
				       0,
				       0,
				       0,
				       0,
				       46,
				       27,
				       48,
				       0,
				       27,
				       27,
				       24,
				       49,
				       50,
				       51,
				       52,
				       53,
				       33,
				       54,
				       6,
				       55,
				       12,
				       34,
				       11,
				       7,
				       22,
				       21,
				       8,
				       20,
				       27,
				       35,
				       20,
				       9,
				       14,
				       56,
				       22,
				       57,
				       21,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       59,
				       14,
				       60,
				       61,
				       62,
				       25,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       63,
				       64,
				       39,
				       28,
				       16,
				       21,
				       20,
				       10,
				       0,
				       0,
				       36,
				       0,
				       37,
				       17,
				       17,
				       17,
				       17,
				       17,
				       17,
				       17,
				       17,
				       68,
				       15,
				       18,
				       18,
				       18,
				       18,
				       18,
				       18,
				       18,
				       18,
				       19,
				       19,
				       19,
				       19,
				       19,
				       19,
				       19,
				       19,
				       0,
				       - 1,
				       0,
				       0,
				       26,
				       27,
				       0,
				       26,
				       26,
				       26,
				       27,
				       73,
				       26,
				       26,
				       73,
				       73,
				       73,
				       0,
				       16,
				       73,
				       73,
				       0,
				       0,
				       0,
				       16,
				       - 1,
				       0,
				       26,
				       0,
				       28,
				       - 1,
				       0,
				       26,
				       0,
				       73,
				       0,
				       16,
				       0,
				       - 1,
				       73,
				       16,
				       0,
				       16,
				       29,
				       29,
				       29,
				       29,
				       29,
				       29,
				       29,
				       29,
				       0,
				       0,
				       0,
				       0,
				       0,
				       0,
				       0,
				       28,
				       30,
				       30,
				       30,
				       30,
				       30,
				       30,
				       30,
				       30,
				       14,
				       14,
				       14,
				       14,
				       14,
				       14,
				       14,
				       14,
				       42,
				       42,
				       42,
				       42,
				       42,
				       42,
				       42,
				       42,
				       0,
				       0,
				       0,
				       0,
				       28,
				       0,
				       0,
				       0,
				       0,
				       28,
				       28,
				       65,
				       0,
				       0,
				       28,
				       22,
				       0,
				       0,
				       0,
				       0,
				       0,
				       10,
				       28,
				       10,
				       0,
				       40,
				       28,
				       0,
				       28,
				       - 1,
				       28,
				       - 1,
				       0,
				       - 1,
				       41,
				       41,
				       41,
				       41,
				       41,
				       41,
				       41,
				       41,
				       0,
				       0,
				       - 1,
				       43,
				       43,
				       43,
				       43,
				       43,
				       43,
				       43,
				       43,
				       - 1,
				       0,
				       0,
				       0,
				       0,
				       - 1,
				       69,
				       0,
				       0,
				       0,
				       - 1,
				       - 1,
				       0,
				       - 1,
				       0,
				       70,
				       70,
				       70,
				       70,
				       70,
				       70,
				       70,
				       70,
				       0,
				       0,
				       40,
				       0,
				       0,
				       0,
				       0,
				       69,
				       40,
				       71,
				       71,
				       71,
				       71,
				       71,
				       71,
				       71,
				       71,
				       0,
				       0,
				       0,
				       40,
				       0,
				       0,
				       0,
				       40,
				       0,
				       40,
				       72,
				       72,
				       72,
				       72,
				       72,
				       72,
				       72,
				       72,
				       0,
				       69,
				       0,
				       0,
				       0,
				       0,
				       69,
				       69,
				       0,
				       0,
				       0,
				       69,
				       0,
				       0,
				       0,
				       0,
				       0,
				       0,
				       0,
				       69,
				       0,
				       0,
				       0,
				       69,
				       0,
				       69,
				       0,
				       69,
				       66,
				       0,
				       0,
				       - 1,
				       0,
				       - 1,
				       0,
				       0,
				       0,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       0,
				       0,
				       0,
				       0,
				       0,
				       0,
				       - 1,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       0,
				       0,
				       0,
				       0,
				       66,
				       0,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       0,
				       0,
				       0,
				       0,
				       0,
				       0,
				       0,
				       0,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       0,
				       0,
				       0,
				       0,
				       0,
				       0,
				       0,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       - 1,
				       0,
				       0,
				       0,
				       66,
				       0,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
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
				       0};
const int Cyc_Lexer_lex_check[686U] = {- 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       0,
				       0,
				       - 1,
				       0,
				       0,
				       2,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       1,
				       - 1,
				       3,
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
				       27,
				       0,
				       - 1,
				       27,
				       27,
				       2,
				       0,
				       0,
				       0,
				       0,
				       0,
				       1,
				       0,
				       3,
				       0,
				       8,
				       1,
				       9,
				       3,
				       13,
				       16,
				       3,
				       19,
				       27,
				       1,
				       35,
				       3,
				       38,
				       0,
				       40,
				       0,
				       43,
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
				       7,
				       0,
				       0,
				       0,
				       2,
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
				       34,
				       55,
				       15,
				       67,
				       69,
				       72,
				       - 1,
				       - 1,
				       1,
				       - 1,
				       1,
				       15,
				       15,
				       15,
				       15,
				       15,
				       15,
				       15,
				       15,
				       49,
				       7,
				       17,
				       17,
				       17,
				       17,
				       17,
				       17,
				       17,
				       17,
				       18,
				       18,
				       18,
				       18,
				       18,
				       18,
				       18,
				       18,
				       - 1,
				       31,
				       - 1,
				       - 1,
				       25,
				       25,
				       - 1,
				       25,
				       25,
				       26,
				       26,
				       46,
				       26,
				       26,
				       46,
				       46,
				       73,
				       - 1,
				       15,
				       73,
				       73,
				       - 1,
				       - 1,
				       - 1,
				       15,
				       31,
				       - 1,
				       25,
				       - 1,
				       25,
				       31,
				       - 1,
				       26,
				       - 1,
				       46,
				       - 1,
				       15,
				       - 1,
				       31,
				       73,
				       15,
				       - 1,
				       15,
				       25,
				       25,
				       25,
				       25,
				       25,
				       25,
				       25,
				       25,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       25,
				       29,
				       29,
				       29,
				       29,
				       29,
				       29,
				       29,
				       29,
				       30,
				       30,
				       30,
				       30,
				       30,
				       30,
				       30,
				       30,
				       41,
				       41,
				       41,
				       41,
				       41,
				       41,
				       41,
				       41,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       25,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       25,
				       25,
				       0,
				       - 1,
				       - 1,
				       25,
				       2,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       1,
				       25,
				       3,
				       - 1,
				       39,
				       25,
				       - 1,
				       25,
				       44,
				       25,
				       31,
				       - 1,
				       31,
				       39,
				       39,
				       39,
				       39,
				       39,
				       39,
				       39,
				       39,
				       - 1,
				       - 1,
				       34,
				       42,
				       42,
				       42,
				       42,
				       42,
				       42,
				       42,
				       42,
				       44,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       44,
				       68,
				       - 1,
				       - 1,
				       - 1,
				       49,
				       7,
				       - 1,
				       44,
				       - 1,
				       68,
				       68,
				       68,
				       68,
				       68,
				       68,
				       68,
				       68,
				       - 1,
				       - 1,
				       39,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       68,
				       39,
				       70,
				       70,
				       70,
				       70,
				       70,
				       70,
				       70,
				       70,
				       - 1,
				       - 1,
				       - 1,
				       39,
				       - 1,
				       - 1,
				       - 1,
				       39,
				       - 1,
				       39,
				       71,
				       71,
				       71,
				       71,
				       71,
				       71,
				       71,
				       71,
				       - 1,
				       68,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       68,
				       68,
				       - 1,
				       - 1,
				       - 1,
				       68,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       68,
				       - 1,
				       - 1,
				       - 1,
				       68,
				       - 1,
				       68,
				       - 1,
				       68,
				       58,
				       - 1,
				       - 1,
				       44,
				       - 1,
				       44,
				       - 1,
				       - 1,
				       - 1,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       31,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       58,
				       - 1,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       58,
				       66,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       - 1,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       44,
				       - 1,
				       - 1,
				       - 1,
				       66,
				       - 1,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
				       66,
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
				       - 1};
int Cyc_Lexer_lex_engine(int start_state,struct Cyc_Lexing_lexbuf * lbuf) {
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
  if (state < 0) { goto _TLF;
  }
  _T0 = lbuf;
  _T1 = lbuf;
  _T2 = lbuf;
  _T1->lex_start_pos = _T2->lex_curr_pos;
  _T0->lex_last_pos = _T1->lex_start_pos;
  _T3 = lbuf;
  _T3->lex_last_action = - 1;
  goto _TL10;
  _TLF: _T4 = - state;
  state = _T4 - 1;
  _TL10: _TL11: if (1) { goto _TL12;
  }else { goto _TL13;
  }
  _TL12: _T5 = Cyc_Lexer_lex_base;
  _T6 = state;
  _T7 = _check_known_subscript_notnull(_T5,74U,sizeof(int),_T6);
  _T8 = (const int *)_T7;
  base = *_T8;
  if (base >= 0) { goto _TL14;
  }
  _T9 = - base;
  _TA = _T9 - 1;
  return _TA;
  _TL14: _TB = Cyc_Lexer_lex_backtrk;
  _TC = state;
  backtrk = _TB[_TC];
  if (backtrk < 0) { goto _TL16;
  }
  _TD = lbuf;
  _TE = lbuf;
  _TD->lex_last_pos = _TE->lex_curr_pos;
  _TF = lbuf;
  _TF->lex_last_action = backtrk;
  goto _TL17;
  _TL16: _TL17: _T10 = lbuf;
  _T11 = _T10->lex_curr_pos;
  _T12 = lbuf;
  _T13 = _T12->lex_buffer_len;
  if (_T11 < _T13) { goto _TL18;
  }
  _T14 = lbuf;
  _T15 = _T14->lex_eof_reached;
  if (_T15) { goto _TL1A;
  }else { goto _TL1C;
  }
  _TL1C: _T16 = - state;
  _T17 = _T16 - 1;
  return _T17;
  _TL1A: c = 256;
  goto _TL19;
  _TL18: _T18 = lbuf;
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
  if (_T20 != _T21) { goto _TL1D;
  }
  c = 256;
  goto _TL1E;
  _TL1D: if (c >= 0) { goto _TL1F;
  }
  c = 256 + c;
  goto _TL20;
  _TL1F: _TL20: _TL1E: _TL19: _T22 = Cyc_Lexer_lex_check;
  _T23 = base + c;
  _T24 = _check_known_subscript_notnull(_T22,686U,sizeof(int),_T23);
  _T25 = (const int *)_T24;
  _T26 = *_T25;
  _T27 = state;
  if (_T26 != _T27) { goto _TL21;
  }
  _T28 = Cyc_Lexer_lex_trans;
  _T29 = base + c;
  state = _T28[_T29];
  goto _TL22;
  _TL21: _T2A = Cyc_Lexer_lex_default;
  _T2B = state;
  state = _T2A[_T2B];
  _TL22: if (state >= 0) { goto _TL23;
  }
  _T2C = lbuf;
  _T2D = lbuf;
  _T2C->lex_curr_pos = _T2D->lex_last_pos;
  _T2E = lbuf;
  _T2F = _T2E->lex_last_action;
  _T30 = - 1;
  if (_T2F != _T30) { goto _TL25;
  }
  { struct Cyc_Lexing_Error_exn_struct * _T36 = _cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));
    _T36->tag = Cyc_Lexing_Error;
    _T36->f1 = _tag_fat("empty token",sizeof(char),12U);
    _T31 = (struct Cyc_Lexing_Error_exn_struct *)_T36;
  }_T32 = (void *)_T31;
  _throw(_T32);
  goto _TL26;
  _TL25: _T33 = lbuf;
  _T34 = _T33->lex_last_action;
  return _T34;
  _TL26: goto _TL24;
  _TL23: if (c != 256) { goto _TL27;
  }
  _T35 = lbuf;
  _T35->lex_eof_reached = 0;
  goto _TL28;
  _TL27: _TL28: _TL24: goto _TL11;
  _TL13: ;
}
int Cyc_Lexer_lexmain_rec(struct Cyc_Lexing_lexbuf * lexbuf,int lexstate) {
  int _T0;
  int _T1;
  int _T2;
  int _T3;
  int (* _T4)(struct Cyc_Lexing_lexbuf *);
  struct Cyc_Lexing_lexbuf * _T5;
  int _T6;
  struct _fat_ptr _T7;
  struct _fat_ptr _T8;
  int _T9;
  struct _fat_ptr _TA;
  struct _fat_ptr _TB;
  int _TC;
  struct _fat_ptr _TD;
  struct _fat_ptr _TE;
  int _TF;
  struct _fat_ptr _T10;
  struct _fat_ptr _T11;
  int _T12;
  struct _fat_ptr _T13;
  struct _fat_ptr _T14;
  int _T15;
  int _T16;
  int _T17;
  struct _handler_cons * _T18;
  int _T19;
  int _T1A;
  void * _T1B;
  struct Cyc_Lexer_Lexical_error_exn_struct * _T1C;
  char * _T1D;
  char * _T1E;
  struct Cyc_Lexer_Lexical_error_exn_struct * _T1F;
  void * _T20;
  char _T21;
  char _T22;
  char _T23;
  char _T24;
  int (* _T25)(struct Cyc_Lexing_lexbuf *);
  struct Cyc_Lexing_lexbuf * _T26;
  struct Cyc_Syntax_Location * _T27;
  int _T28;
  struct Cyc_Lexer_Lexical_error_exn_struct * _T29;
  struct _fat_ptr _T2A;
  struct Cyc_String_pa_PrintArg_struct _T2B;
  struct _fat_ptr _T2C;
  struct _fat_ptr _T2D;
  int _T2E;
  int _T2F;
  void * _T30;
  struct Cyc_Lexing_lexbuf * _T31;
  void (* _T32)(struct Cyc_Lexing_lexbuf *);
  int _T33;
  struct Cyc_Lexing_Error_exn_struct * _T34;
  void * _T35;
  lexstate = Cyc_Lexer_lex_engine(lexstate,lexbuf);
  _T0 = lexstate;
  _T1 = (int)_T0;
  switch (_T1) {
  case 0: 
    _T2 = Cyc_Lexer_lexmain(lexbuf);
    return _T2;
  case 1: 
    Cyc_Lexer_line_start_pos = Cyc_Lexing_lexeme_end(lexbuf);
    Cyc_Lexer_line_num = Cyc_Lexer_line_num + 1;
    _T3 = Cyc_Lexer_lexmain(lexbuf);
    return _T3;
  case 2: 
    Cyc_Lexer_comment_depth = 1;
    _T4 = Cyc_Lexer_comment;
    _T5 = lexbuf;
    Cyc_Lexer_handle_lexical_error(_T4,_T5);
    _T6 = Cyc_Lexer_lexmain(lexbuf);
    return _T6;
  case 3: 
    { struct _fat_ptr s = Cyc_Lexing_lexeme(lexbuf);
      _T7 = s;
      _T8 = _tag_fat("rule",sizeof(char),5U);
      _T9 = Cyc_strcmp(_T7,_T8);
      if (_T9 != 0) { goto _TL2A;
      }
      return 262;
      _TL2A: _TA = s;
      _TB = _tag_fat("parse",sizeof(char),6U);
      _TC = Cyc_strcmp(_TA,_TB);
      if (_TC != 0) { goto _TL2C;
      }
      return 263;
      _TL2C: _TD = s;
      _TE = _tag_fat("and",sizeof(char),4U);
      _TF = Cyc_strcmp(_TD,_TE);
      if (_TF != 0) { goto _TL2E;
      }
      return 264;
      _TL2E: _T10 = s;
      _T11 = _tag_fat("eof",sizeof(char),4U);
      _T12 = Cyc_strcmp(_T10,_T11);
      if (_T12 != 0) { goto _TL30;
      }
      return 268;
      _TL30: _T13 = s;
      _T14 = _tag_fat("let",sizeof(char),4U);
      _T15 = Cyc_strcmp(_T13,_T14);
      if (_T15 != 0) { goto _TL32;
      }
      return 278;
      _TL32: Cyc_Lexer_token_string = s;
      return 258;
    }
  case 4: 
    Cyc_Lexer_reset_string_buffer();
    { int line = Cyc_Lexer_line_num;
      _T16 = Cyc_Lexing_lexeme_start(lexbuf);
      _T17 = Cyc_Lexer_line_start_pos;
      { int column = _T16 - _T17;
	{ struct _handler_cons _T36;
	  _T18 = &_T36;
	  _push_handler(_T18);
	  { int _T37 = 0;
	    _T19 = setjmp(_T36.handler);
	    if (! _T19) { goto _TL34;
	    }
	    _T37 = 1;
	    goto _TL35;
	    _TL34: _TL35: if (_T37) { goto _TL36;
	    }else { goto _TL38;
	    }
	    _TL38: _TL39: _T1A = Cyc_Lexer_strng(lexbuf);
	    if (_T1A) { goto _TL3A;
	    }else { goto _TL3B;
	    }
	    _TL3A: goto _TL39;
	    _TL3B: _pop_handler();
	    goto _TL37;
	    _TL36: _T1B = Cyc_Core_get_exn_thrown();
	    { void * _T38 = (void *)_T1B;
	      void * _T39;
	      struct _fat_ptr _T3A;
	      _T1C = (struct Cyc_Lexer_Lexical_error_exn_struct *)_T38;
	      _T1D = _T1C->tag;
	      _T1E = Cyc_Lexer_Lexical_error;
	      if (_T1D != _T1E) { goto _TL3C;
	      }
	      { struct Cyc_Lexer_Lexical_error_exn_struct * _T3B = (struct Cyc_Lexer_Lexical_error_exn_struct *)_T38;
		_T3A = _T3B->f1;
	      }{ struct _fat_ptr msg = _T3A;
		{ struct Cyc_Lexer_Lexical_error_exn_struct * _T3B = _cycalloc(sizeof(struct Cyc_Lexer_Lexical_error_exn_struct));
		  _T3B->tag = Cyc_Lexer_Lexical_error;
		  _T3B->f1 = msg;
		  _T3B->f2 = line;
		  _T3B->f3 = column;
		  _T1F = (struct Cyc_Lexer_Lexical_error_exn_struct *)_T3B;
		}_T20 = (void *)_T1F;
		_throw(_T20);
	      }goto _TL3D;
	      _TL3C: _T39 = _T38;
	      { void * exn = _T39;
		_rethrow(exn);
	      }_TL3D: ;
	    }_TL37: ;
	  }
	}Cyc_Lexer_token_string = Cyc_Lexer_get_stored_string();
	return 260;
      }
    }
  case 5: 
    _T21 = Cyc_Lexing_lexeme_char(lexbuf,1);
    Cyc_Lexer_token_char = (int)_T21;
    return 259;
  case 6: 
    _T22 = Cyc_Lexing_lexeme_char(lexbuf,2);
    _T23 = Cyc_Lexer_char_for_backslash(_T22);
    Cyc_Lexer_token_char = (int)_T23;
    return 259;
  case 7: 
    _T24 = Cyc_Lexer_char_for_octal_code(lexbuf,2);
    Cyc_Lexer_token_char = (int)_T24;
    return 259;
  case 8: 
    { int n1 = Cyc_Lexing_lexeme_end(lexbuf);
      int l1 = Cyc_Lexer_line_num;
      int s1 = Cyc_Lexer_line_start_pos;
      Cyc_Lexer_brace_depth = 1;
      _T25 = Cyc_Lexer_action;
      _T26 = lexbuf;
      { int n2 = Cyc_Lexer_handle_lexical_error(_T25,_T26);
	{ struct Cyc_Syntax_Location * _T36 = _cycalloc(sizeof(struct Cyc_Syntax_Location));
	  _T36->start_pos = n1;
	  _T36->end_pos = n2;
	  _T36->start_line = l1;
	  _T36->start_col = n1 - s1;
	  _T27 = (struct Cyc_Syntax_Location *)_T36;
	}Cyc_Lexer_token_action = _T27;
	return 261;
      }
    }
  case 9: 
    return 265;
  case 10: 
    return 266;
  case 11: 
    return 267;
  case 12: 
    return 269;
  case 13: 
    return 270;
  case 14: 
    return 271;
  case 15: 
    return 272;
  case 16: 
    return 273;
  case 17: 
    return 274;
  case 18: 
    return 275;
  case 19: 
    return 276;
  case 20: 
    return 277;
  case 21: 
    _T28 = - 1;
    return _T28;
  case 22: 
    { struct Cyc_Lexer_Lexical_error_exn_struct * _T36 = _cycalloc(sizeof(struct Cyc_Lexer_Lexical_error_exn_struct));
      _T36->tag = Cyc_Lexer_Lexical_error;
      { struct Cyc_String_pa_PrintArg_struct _T37;
	_T37.tag = 0;
	_T37.f1 = Cyc_Lexing_lexeme(lexbuf);
	_T2B = _T37;
      }{ struct Cyc_String_pa_PrintArg_struct _T37 = _T2B;
	void * _T38[1];
	_T38[0] = &_T37;
	_T2C = _tag_fat("illegal character %s",sizeof(char),21U);
	_T2D = _tag_fat(_T38,sizeof(void *),1);
	_T2A = Cyc_aprintf(_T2C,_T2D);
      }_T36->f1 = _T2A;
      _T36->f2 = Cyc_Lexer_line_num;
      _T2E = Cyc_Lexing_lexeme_start(lexbuf);
      _T2F = Cyc_Lexer_line_start_pos;
      _T36->f3 = _T2E - _T2F;
      _T29 = (struct Cyc_Lexer_Lexical_error_exn_struct *)_T36;
    }_T30 = (void *)_T29;
    _throw(_T30);
  default: 
    _T31 = lexbuf;
    _T32 = _T31->refill_buff;
    _T32(lexbuf);
    _T33 = Cyc_Lexer_lexmain_rec(lexbuf,lexstate);
    return _T33;
  }
  { struct Cyc_Lexing_Error_exn_struct * _T36 = _cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));
    _T36->tag = Cyc_Lexing_Error;
    _T36->f1 = _tag_fat("some action didn't return!",sizeof(char),27U);
    _T34 = (struct Cyc_Lexing_Error_exn_struct *)_T36;
  }_T35 = (void *)_T34;
  _throw(_T35);
}
int Cyc_Lexer_lexmain(struct Cyc_Lexing_lexbuf * lexbuf) {
  int _T0;
  _T0 = Cyc_Lexer_lexmain_rec(lexbuf,0);
  return _T0;
}
int Cyc_Lexer_action_rec(struct Cyc_Lexing_lexbuf * lexbuf,int lexstate) {
  int _T0;
  int _T1;
  int _T2;
  int _T3;
  int _T4;
  int _T5;
  int _T6;
  int _T7;
  int _T8;
  int _T9;
  int _TA;
  struct Cyc_Lexer_Lexical_error_exn_struct * _TB;
  void * _TC;
  int _TD;
  int _TE;
  int _TF;
  struct Cyc_Lexing_lexbuf * _T10;
  void (* _T11)(struct Cyc_Lexing_lexbuf *);
  int _T12;
  struct Cyc_Lexing_Error_exn_struct * _T13;
  void * _T14;
  lexstate = Cyc_Lexer_lex_engine(lexstate,lexbuf);
  _T0 = lexstate;
  _T1 = (int)_T0;
  switch (_T1) {
  case 0: 
    Cyc_Lexer_brace_depth = Cyc_Lexer_brace_depth + 1;
    _T2 = Cyc_Lexer_action(lexbuf);
    return _T2;
  case 1: 
    Cyc_Lexer_brace_depth = Cyc_Lexer_brace_depth + -1;
    if (Cyc_Lexer_brace_depth != 0) { goto _TL3F;
    }
    _T3 = Cyc_Lexing_lexeme_start(lexbuf);
    return _T3;
    _TL3F: _T4 = Cyc_Lexer_action(lexbuf);
    return _T4;
  case 2: 
    Cyc_Lexer_reset_string_buffer();
    _TL41: _T5 = Cyc_Lexer_strng(lexbuf);
    if (_T5) { goto _TL42;
    }else { goto _TL43;
    }
    _TL42: goto _TL41;
    _TL43: Cyc_Lexer_reset_string_buffer();
    _T6 = Cyc_Lexer_action(lexbuf);
    return _T6;
  case 3: 
    _T7 = Cyc_Lexer_action(lexbuf);
    return _T7;
  case 4: 
    _T8 = Cyc_Lexer_action(lexbuf);
    return _T8;
  case 5: 
    _T9 = Cyc_Lexer_action(lexbuf);
    return _T9;
  case 6: 
    Cyc_Lexer_comment_depth = 1;
    Cyc_Lexer_comment(lexbuf);
    _TA = Cyc_Lexer_action(lexbuf);
    return _TA;
  case 7: 
    { struct Cyc_Lexer_Lexical_error_exn_struct * _T15 = _cycalloc(sizeof(struct Cyc_Lexer_Lexical_error_exn_struct));
      _T15->tag = Cyc_Lexer_Lexical_error;
      _T15->f1 = _tag_fat("unterminated action",sizeof(char),20U);
      _T15->f2 = 0;
      _T15->f3 = 0;
      _TB = (struct Cyc_Lexer_Lexical_error_exn_struct *)_T15;
    }_TC = (void *)_TB;
    _throw(_TC);
  case 8: 
    Cyc_Lexer_line_start_pos = Cyc_Lexing_lexeme_end(lexbuf);
    Cyc_Lexer_line_num = Cyc_Lexer_line_num + 1;
    _TD = Cyc_Lexer_action(lexbuf);
    return _TD;
  case 9: 
    _TE = Cyc_Lexer_action(lexbuf);
    return _TE;
  case 10: 
    _TF = Cyc_Lexer_action(lexbuf);
    return _TF;
  default: 
    _T10 = lexbuf;
    _T11 = _T10->refill_buff;
    _T11(lexbuf);
    _T12 = Cyc_Lexer_action_rec(lexbuf,lexstate);
    return _T12;
  }
  { struct Cyc_Lexing_Error_exn_struct * _T15 = _cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));
    _T15->tag = Cyc_Lexing_Error;
    _T15->f1 = _tag_fat("some action didn't return!",sizeof(char),27U);
    _T13 = (struct Cyc_Lexing_Error_exn_struct *)_T15;
  }_T14 = (void *)_T13;
  _throw(_T14);
}
int Cyc_Lexer_action(struct Cyc_Lexing_lexbuf * lexbuf) {
  int _T0;
  _T0 = Cyc_Lexer_action_rec(lexbuf,1);
  return _T0;
}
int Cyc_Lexer_strng_rec(struct Cyc_Lexing_lexbuf * lexbuf,int lexstate) {
  int _T0;
  int _T1;
  char _T2;
  char _T3;
  char _T4;
  struct Cyc_Lexer_Lexical_error_exn_struct * _T5;
  void * _T6;
  char _T7;
  struct Cyc_Lexing_lexbuf * _T8;
  void (* _T9)(struct Cyc_Lexing_lexbuf *);
  int _TA;
  struct Cyc_Lexing_Error_exn_struct * _TB;
  void * _TC;
  lexstate = Cyc_Lexer_lex_engine(lexstate,lexbuf);
  _T0 = lexstate;
  _T1 = (int)_T0;
  switch (_T1) {
  case 0: 
    return 0;
  case 1: 
    Cyc_Lexer_line_start_pos = Cyc_Lexing_lexeme_end(lexbuf);
    Cyc_Lexer_line_num = Cyc_Lexer_line_num + 1;
    return 1;
  case 2: 
    _T2 = Cyc_Lexing_lexeme_char(lexbuf,1);
    _T3 = Cyc_Lexer_char_for_backslash(_T2);
    Cyc_Lexer_store_string_char(_T3);
    return 1;
  case 3: 
    _T4 = Cyc_Lexer_char_for_octal_code(lexbuf,1);
    Cyc_Lexer_store_string_char(_T4);
    return 1;
  case 4: 
    { struct Cyc_Lexer_Lexical_error_exn_struct * _TD = _cycalloc(sizeof(struct Cyc_Lexer_Lexical_error_exn_struct));
      _TD->tag = Cyc_Lexer_Lexical_error;
      _TD->f1 = _tag_fat("unterminated string",sizeof(char),20U);
      _TD->f2 = 0;
      _TD->f3 = 0;
      _T5 = (struct Cyc_Lexer_Lexical_error_exn_struct *)_TD;
    }_T6 = (void *)_T5;
    _throw(_T6);
  case 5: 
    Cyc_Lexer_store_string_char('\n');
    Cyc_Lexer_line_start_pos = Cyc_Lexing_lexeme_end(lexbuf);
    Cyc_Lexer_line_num = Cyc_Lexer_line_num + 1;
    return 1;
  case 6: 
    _T7 = Cyc_Lexing_lexeme_char(lexbuf,0);
    Cyc_Lexer_store_string_char(_T7);
    return 1;
  default: 
    _T8 = lexbuf;
    _T9 = _T8->refill_buff;
    _T9(lexbuf);
    _TA = Cyc_Lexer_strng_rec(lexbuf,lexstate);
    return _TA;
  }
  { struct Cyc_Lexing_Error_exn_struct * _TD = _cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));
    _TD->tag = Cyc_Lexing_Error;
    _TD->f1 = _tag_fat("some action didn't return!",sizeof(char),27U);
    _TB = (struct Cyc_Lexing_Error_exn_struct *)_TD;
  }_TC = (void *)_TB;
  _throw(_TC);
}
int Cyc_Lexer_strng(struct Cyc_Lexing_lexbuf * lexbuf) {
  int _T0;
  _T0 = Cyc_Lexer_strng_rec(lexbuf,2);
  return _T0;
}
int Cyc_Lexer_comment_rec(struct Cyc_Lexing_lexbuf * lexbuf,int lexstate) {
  int _T0;
  int _T1;
  int _T2;
  int _T3;
  int _T4;
  int _T5;
  int _T6;
  int _T7;
  int _T8;
  int _T9;
  struct Cyc_Lexer_Lexical_error_exn_struct * _TA;
  void * _TB;
  int _TC;
  int _TD;
  struct Cyc_Lexing_lexbuf * _TE;
  void (* _TF)(struct Cyc_Lexing_lexbuf *);
  int _T10;
  struct Cyc_Lexing_Error_exn_struct * _T11;
  void * _T12;
  lexstate = Cyc_Lexer_lex_engine(lexstate,lexbuf);
  _T0 = lexstate;
  _T1 = (int)_T0;
  switch (_T1) {
  case 0: 
    Cyc_Lexer_comment_depth = Cyc_Lexer_comment_depth + 1;
    _T2 = Cyc_Lexer_comment(lexbuf);
    return _T2;
  case 1: 
    Cyc_Lexer_comment_depth = Cyc_Lexer_comment_depth + -1;
    if (Cyc_Lexer_comment_depth != 0) { goto _TL46;
    }
    _T3 = 0;
    goto _TL47;
    _TL46: _T3 = Cyc_Lexer_comment(lexbuf);
    _TL47: return _T3;
  case 2: 
    Cyc_Lexer_reset_string_buffer();
    _TL48: _T4 = Cyc_Lexer_strng(lexbuf);
    if (_T4) { goto _TL49;
    }else { goto _TL4A;
    }
    _TL49: goto _TL48;
    _TL4A: Cyc_Lexer_reset_string_buffer();
    _T5 = Cyc_Lexer_comment(lexbuf);
    return _T5;
  case 3: 
    _T6 = Cyc_Lexer_comment(lexbuf);
    return _T6;
  case 4: 
    _T7 = Cyc_Lexer_comment(lexbuf);
    return _T7;
  case 5: 
    _T8 = Cyc_Lexer_comment(lexbuf);
    return _T8;
  case 6: 
    _T9 = Cyc_Lexer_comment(lexbuf);
    return _T9;
  case 7: 
    { struct Cyc_Lexer_Lexical_error_exn_struct * _T13 = _cycalloc(sizeof(struct Cyc_Lexer_Lexical_error_exn_struct));
      _T13->tag = Cyc_Lexer_Lexical_error;
      _T13->f1 = _tag_fat("unterminated comment",sizeof(char),21U);
      _T13->f2 = 0;
      _T13->f3 = 0;
      _TA = (struct Cyc_Lexer_Lexical_error_exn_struct *)_T13;
    }_TB = (void *)_TA;
    _throw(_TB);
  case 8: 
    Cyc_Lexer_line_start_pos = Cyc_Lexing_lexeme_end(lexbuf);
    Cyc_Lexer_line_num = Cyc_Lexer_line_num + 1;
    _TC = Cyc_Lexer_comment(lexbuf);
    return _TC;
  case 9: 
    _TD = Cyc_Lexer_comment(lexbuf);
    return _TD;
  default: 
    _TE = lexbuf;
    _TF = _TE->refill_buff;
    _TF(lexbuf);
    _T10 = Cyc_Lexer_comment_rec(lexbuf,lexstate);
    return _T10;
  }
  { struct Cyc_Lexing_Error_exn_struct * _T13 = _cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));
    _T13->tag = Cyc_Lexing_Error;
    _T13->f1 = _tag_fat("some action didn't return!",sizeof(char),27U);
    _T11 = (struct Cyc_Lexing_Error_exn_struct *)_T13;
  }_T12 = (void *)_T11;
  _throw(_T12);
}
int Cyc_Lexer_comment(struct Cyc_Lexing_lexbuf * lexbuf) {
  int _T0;
  _T0 = Cyc_Lexer_comment_rec(lexbuf,3);
  return _T0;
}
