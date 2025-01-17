#include <cyc_include.h>
 struct Cyc_Core_Opt {
  void * v;
};
extern char Cyc_Core_Failure[8U];
 struct Cyc_Core_Failure_exn_struct {
  char * tag;
  struct _fat_ptr f1;
};
extern char Cyc_Core_Not_found[10U];
 struct Cyc_Core_Not_found_exn_struct {
  char * tag;
};
struct Cyc___cycFILE;
 struct Cyc_String_pa_PrintArg_struct {
  int tag;
  struct _fat_ptr f1;
};
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);
 struct Cyc_List_List {
  void * hd;
  struct Cyc_List_List * tl;
};
extern struct Cyc_List_List * Cyc_List_rev(struct Cyc_List_List *);
extern struct Cyc_List_List * Cyc_List_imp_rev(struct Cyc_List_List *);
extern struct Cyc_List_List * Cyc_List_append(struct Cyc_List_List *,struct Cyc_List_List *);
extern long Cyc_List_memq(struct Cyc_List_List *,void *);
struct Cyc_Hashtable_Table;
extern struct Cyc_Hashtable_Table * Cyc_Hashtable_create(int,int (*)(void *,
								     void *),
							 int (*)(void *));
extern void Cyc_Hashtable_insert(struct Cyc_Hashtable_Table *,void *,void *);
extern void * Cyc_Hashtable_lookup(struct Cyc_Hashtable_Table *,void *);
extern int Cyc_Hashtable_hash_stringptr(struct _fat_ptr *);
struct Cyc___cycFILE;
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);
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
extern unsigned long Cyc_strlen(struct _fat_ptr);
extern int Cyc_strptrcmp(struct _fat_ptr *,struct _fat_ptr *);
 struct Cyc_Syntax_Location {
  int start_pos;
  int end_pos;
  int start_line;
  int start_col;
};
 struct Cyc_Syntax_Epsilon_Syntax_Regular_expression_struct {
  int tag;
  int f1;
};
 struct Cyc_Syntax_Characters_Syntax_Regular_expression_struct {
  int tag;
  struct Cyc_List_List * f1;
};
 struct Cyc_Syntax_Sequence_Syntax_Regular_expression_struct {
  int tag;
  void * f1;
  void * f2;
};
 struct Cyc_Syntax_Alternative_Syntax_Regular_expression_struct {
  int tag;
  void * f1;
  void * f2;
};
 struct Cyc_Syntax_Repetition_Syntax_Regular_expression_struct {
  int tag;
  void * f1;
};
extern struct Cyc_Syntax_Epsilon_Syntax_Regular_expression_struct Cyc_Syntax_Epsilon_val;
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
struct Cyc_Core_Opt * Cyc_Parser_lbuf = 0;
char Cyc_Parser_Parser_error[13U] = "Parser_error";
struct Cyc_Hashtable_Table * Cyc_Parser_named_regexps = 0;
struct Cyc_Syntax_Lexer_definition * Cyc_Parser_parse_result = 0;
void * Cyc_Parser_regexp_for_string(struct _fat_ptr s) {
  unsigned long _T0;
  struct Cyc_Syntax_Epsilon_Syntax_Regular_expression_struct * _T1;
  struct Cyc_Syntax_Epsilon_Syntax_Regular_expression_struct * _T2;
  void * _T3;
  struct Cyc_Syntax_Characters_Syntax_Regular_expression_struct * _T4;
  struct Cyc_List_List * _T5;
  struct _fat_ptr _T6;
  unsigned char * _T7;
  const char * _T8;
  const char * _T9;
  int _TA;
  char _TB;
  struct Cyc_Syntax_Sequence_Syntax_Regular_expression_struct * _TC;
  struct Cyc_Syntax_Characters_Syntax_Regular_expression_struct * _TD;
  struct Cyc_List_List * _TE;
  struct _fat_ptr _TF;
  int _T10;
  unsigned char * _T11;
  const char * _T12;
  char _T13;
  void * _T14;
  _T0 = Cyc_strlen(s);
  { int len = (int)_T0;
    if (len != 0) { goto _TL0;
    }
    _T1 = &Cyc_Syntax_Epsilon_val;
    _T2 = (struct Cyc_Syntax_Epsilon_Syntax_Regular_expression_struct *)_T1;
    _T3 = (void *)_T2;
    return _T3;
    _TL0: { struct Cyc_Syntax_Characters_Syntax_Regular_expression_struct * _T15 = _cycalloc(sizeof(struct Cyc_Syntax_Characters_Syntax_Regular_expression_struct));
      _T15->tag = 1;
      { struct Cyc_List_List * _T16 = _cycalloc(sizeof(struct Cyc_List_List));
	_T6 = s;
	_T7 = _T6.curr;
	_T8 = (const char *)_T7;
	_T9 = _check_null(_T8);
	_TA = len - 1;
	_TB = _T9[_TA];
	_T16->hd = (void *)_TB;
	_T16->tl = 0;
	_T5 = (struct Cyc_List_List *)_T16;
      }_T15->f1 = _T5;
      _T4 = (struct Cyc_Syntax_Characters_Syntax_Regular_expression_struct *)_T15;
    }{ void * ans = (void *)_T4;
      { int n = len - 2;
	_TL5: if (n >= 0) { goto _TL3;
	}else { goto _TL4;
	}
	_TL3: { struct Cyc_Syntax_Sequence_Syntax_Regular_expression_struct * _T15 = _cycalloc(sizeof(struct Cyc_Syntax_Sequence_Syntax_Regular_expression_struct));
	  _T15->tag = 2;
	  { struct Cyc_Syntax_Characters_Syntax_Regular_expression_struct * _T16 = _cycalloc(sizeof(struct Cyc_Syntax_Characters_Syntax_Regular_expression_struct));
	    _T16->tag = 1;
	    { struct Cyc_List_List * _T17 = _cycalloc(sizeof(struct Cyc_List_List));
	      _TF = s;
	      _T10 = n;
	      _T11 = _check_fat_subscript(_TF,sizeof(char),_T10);
	      _T12 = (const char *)_T11;
	      _T13 = *_T12;
	      _T17->hd = (void *)_T13;
	      _T17->tl = 0;
	      _TE = (struct Cyc_List_List *)_T17;
	    }_T16->f1 = _TE;
	    _TD = (struct Cyc_Syntax_Characters_Syntax_Regular_expression_struct *)_T16;
	  }_T15->f1 = (void *)_TD;
	  _T15->f2 = ans;
	  _TC = (struct Cyc_Syntax_Sequence_Syntax_Regular_expression_struct *)_T15;
	}ans = (void *)_TC;
	n = n + -1;
	goto _TL5;
	_TL4: ;
      }_T14 = ans;
      return _T14;
    }
  }
}
struct Cyc_List_List * Cyc_Parser_char_class(int c1,int c2) {
  struct Cyc_List_List * _T0;
  int _T1;
  struct Cyc_List_List * _T2;
  struct Cyc_List_List * ans = 0;
  { int n = c2;
    _TL9: if (n >= c1) { goto _TL7;
    }else { goto _TL8;
    }
    _TL7: { struct Cyc_List_List * _T3 = _cycalloc(sizeof(struct Cyc_List_List));
      _T1 = n;
      _T3->hd = (void *)_T1;
      _T3->tl = ans;
      _T0 = (struct Cyc_List_List *)_T3;
    }ans = _T0;
    n = n + -1;
    goto _TL9;
    _TL8: ;
  }_T2 = ans;
  return _T2;
}
static struct Cyc_List_List * Cyc_Parser_all_chars_s = 0;
static struct Cyc_List_List * Cyc_Parser_all_chars() {
  struct Cyc_List_List * _T0;
  if (Cyc_Parser_all_chars_s != 0) { goto _TLA;
  }
  Cyc_Parser_all_chars_s = Cyc_Parser_char_class(0,255);
  goto _TLB;
  _TLA: _TLB: _T0 = Cyc_Parser_all_chars_s;
  return _T0;
}
static struct Cyc_List_List * Cyc_Parser_subtract(struct Cyc_List_List * l1,
						  struct Cyc_List_List * l2) {
  long (* _T0)(struct Cyc_List_List *,int);
  long (* _T1)(struct Cyc_List_List *,void *);
  struct Cyc_List_List * _T2;
  struct Cyc_List_List * _T3;
  void * _T4;
  int _T5;
  long _T6;
  struct Cyc_List_List * _T7;
  struct Cyc_List_List * _T8;
  void * _T9;
  struct Cyc_List_List * _TA;
  struct Cyc_List_List * _TB;
  struct Cyc_List_List * rev_ans = 0;
  _TLF: if (l1 != 0) { goto _TLD;
  }else { goto _TLE;
  }
  _TLD: _T1 = Cyc_List_memq;
  { long (* _TC)(struct Cyc_List_List *,int) = (long (*)(struct Cyc_List_List *,
							 int))_T1;
    _T0 = _TC;
  }_T2 = l2;
  _T3 = l1;
  _T4 = _T3->hd;
  _T5 = (int)_T4;
  _T6 = _T0(_T2,_T5);
  if (_T6) { goto _TL10;
  }else { goto _TL12;
  }
  _TL12: { struct Cyc_List_List * _TC = _cycalloc(sizeof(struct Cyc_List_List));
    _T8 = l1;
    _T9 = _T8->hd;
    _TC->hd = (void *)_T9;
    _TC->tl = rev_ans;
    _T7 = (struct Cyc_List_List *)_TC;
  }rev_ans = _T7;
  goto _TL11;
  _TL10: _TL11: _TA = l1;
  l1 = _TA->tl;
  goto _TLF;
  _TLE: _TB = Cyc_List_imp_rev(rev_ans);
  return _TB;
}
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
static void Cyc_yythrowfail(struct _fat_ptr s) {
  struct Cyc_Core_Failure_exn_struct * _T0;
  void * _T1;
  { struct Cyc_Core_Failure_exn_struct * _T2 = _cycalloc(sizeof(struct Cyc_Core_Failure_exn_struct));
    _T2->tag = Cyc_Core_Failure;
    _T2->f1 = s;
    _T0 = (struct Cyc_Core_Failure_exn_struct *)_T2;
  }_T1 = (void *)_T0;
  _throw(_T1);
}
static char _TmpG0[19U] = "lexer_definition_t";
static struct Cyc_Syntax_Lexer_definition * Cyc_yyget_Lexer_definition_tok(union Cyc_YYSTYPE * yy1) {
  union Cyc_YYSTYPE * _T0;
  union Cyc_YYSTYPE * _T1;
  struct _union_YYSTYPE_Lexer_definition_tok _T2;
  unsigned int _T3;
  union Cyc_YYSTYPE * _T4;
  struct _union_YYSTYPE_Lexer_definition_tok _T5;
  struct Cyc_Syntax_Lexer_definition * _T6;
  static struct _fat_ptr s = {(unsigned char *)_TmpG0,(unsigned char *)_TmpG0,
			      (unsigned char *)_TmpG0 + 19U};
  struct Cyc_Syntax_Lexer_definition * _T7;
  _T0 = yy1;
  _T1 = (union Cyc_YYSTYPE *)_T0;
  _T2 = _T1->Lexer_definition_tok;
  _T3 = _T2.tag;
  if (_T3 != 2) { goto _TL13;
  }
  _T4 = yy1;
  { union Cyc_YYSTYPE _T8 = *_T4;
    _T5 = _T8.Lexer_definition_tok;
    _T7 = _T5.val;
  }{ struct Cyc_Syntax_Lexer_definition * yy = _T7;
    _T6 = yy;
    return _T6;
  }_TL13: Cyc_yythrowfail(s);
  ;
}
static union Cyc_YYSTYPE Cyc_Lexer_definition_tok(struct Cyc_Syntax_Lexer_definition * yy1) {
  union Cyc_YYSTYPE _T0;
  { union Cyc_YYSTYPE _T1;
    (_T1.Lexer_definition_tok).tag = 2U;
    (_T1.Lexer_definition_tok).val = yy1;
    _T0 = _T1;
  }return _T0;
}
static char _TmpG1[11U] = "location_t";
static struct Cyc_Syntax_Location * Cyc_yyget_Location_tok(union Cyc_YYSTYPE * yy1) {
  union Cyc_YYSTYPE * _T0;
  union Cyc_YYSTYPE * _T1;
  struct _union_YYSTYPE_Location_tok _T2;
  unsigned int _T3;
  union Cyc_YYSTYPE * _T4;
  struct _union_YYSTYPE_Location_tok _T5;
  struct Cyc_Syntax_Location * _T6;
  static struct _fat_ptr s = {(unsigned char *)_TmpG1,(unsigned char *)_TmpG1,
			      (unsigned char *)_TmpG1 + 11U};
  struct Cyc_Syntax_Location * _T7;
  _T0 = yy1;
  _T1 = (union Cyc_YYSTYPE *)_T0;
  _T2 = _T1->Location_tok;
  _T3 = _T2.tag;
  if (_T3 != 3) { goto _TL15;
  }
  _T4 = yy1;
  { union Cyc_YYSTYPE _T8 = *_T4;
    _T5 = _T8.Location_tok;
    _T7 = _T5.val;
  }{ struct Cyc_Syntax_Location * yy = _T7;
    _T6 = yy;
    return _T6;
  }_TL15: Cyc_yythrowfail(s);
  ;
}
static union Cyc_YYSTYPE Cyc_Location_tok(struct Cyc_Syntax_Location * yy1) {
  union Cyc_YYSTYPE _T0;
  { union Cyc_YYSTYPE _T1;
    (_T1.Location_tok).tag = 3U;
    (_T1.Location_tok).val = yy1;
    _T0 = _T1;
  }return _T0;
}
static char _TmpG2[4U] = "int";
static int Cyc_yyget_Int_tok(union Cyc_YYSTYPE * yy1) {
  union Cyc_YYSTYPE * _T0;
  union Cyc_YYSTYPE * _T1;
  struct _union_YYSTYPE_Int_tok _T2;
  unsigned int _T3;
  union Cyc_YYSTYPE * _T4;
  struct _union_YYSTYPE_Int_tok _T5;
  int _T6;
  static struct _fat_ptr s = {(unsigned char *)_TmpG2,(unsigned char *)_TmpG2,
			      (unsigned char *)_TmpG2 + 4U};
  int _T7;
  _T0 = yy1;
  _T1 = (union Cyc_YYSTYPE *)_T0;
  _T2 = _T1->Int_tok;
  _T3 = _T2.tag;
  if (_T3 != 4) { goto _TL17;
  }
  _T4 = yy1;
  { union Cyc_YYSTYPE _T8 = *_T4;
    _T5 = _T8.Int_tok;
    _T7 = _T5.val;
  }{ int yy = _T7;
    _T6 = yy;
    return _T6;
  }_TL17: Cyc_yythrowfail(s);
  ;
}
static union Cyc_YYSTYPE Cyc_Int_tok(int yy1) {
  union Cyc_YYSTYPE _T0;
  { union Cyc_YYSTYPE _T1;
    (_T1.Int_tok).tag = 4U;
    (_T1.Int_tok).val = yy1;
    _T0 = _T1;
  }return _T0;
}
static char _TmpG3[24U] = "list_t<entrypoint_t,`H>";
static struct Cyc_List_List * Cyc_yyget_Entrypoint_List_tok(union Cyc_YYSTYPE * yy1) {
  union Cyc_YYSTYPE * _T0;
  union Cyc_YYSTYPE * _T1;
  struct _union_YYSTYPE_Entrypoint_List_tok _T2;
  unsigned int _T3;
  union Cyc_YYSTYPE * _T4;
  struct _union_YYSTYPE_Entrypoint_List_tok _T5;
  struct Cyc_List_List * _T6;
  static struct _fat_ptr s = {(unsigned char *)_TmpG3,(unsigned char *)_TmpG3,
			      (unsigned char *)_TmpG3 + 24U};
  struct Cyc_List_List * _T7;
  _T0 = yy1;
  _T1 = (union Cyc_YYSTYPE *)_T0;
  _T2 = _T1->Entrypoint_List_tok;
  _T3 = _T2.tag;
  if (_T3 != 5) { goto _TL19;
  }
  _T4 = yy1;
  { union Cyc_YYSTYPE _T8 = *_T4;
    _T5 = _T8.Entrypoint_List_tok;
    _T7 = _T5.val;
  }{ struct Cyc_List_List * yy = _T7;
    _T6 = yy;
    return _T6;
  }_TL19: Cyc_yythrowfail(s);
  ;
}
static union Cyc_YYSTYPE Cyc_Entrypoint_List_tok(struct Cyc_List_List * yy1) {
  union Cyc_YYSTYPE _T0;
  { union Cyc_YYSTYPE _T1;
    (_T1.Entrypoint_List_tok).tag = 5U;
    (_T1.Entrypoint_List_tok).val = yy1;
    _T0 = _T1;
  }return _T0;
}
static char _TmpG4[13U] = "entrypoint_t";
static struct _tuple4 * Cyc_yyget_Entrypoint_tok(union Cyc_YYSTYPE * yy1) {
  union Cyc_YYSTYPE * _T0;
  union Cyc_YYSTYPE * _T1;
  struct _union_YYSTYPE_Entrypoint_tok _T2;
  unsigned int _T3;
  union Cyc_YYSTYPE * _T4;
  struct _union_YYSTYPE_Entrypoint_tok _T5;
  struct _tuple4 * _T6;
  static struct _fat_ptr s = {(unsigned char *)_TmpG4,(unsigned char *)_TmpG4,
			      (unsigned char *)_TmpG4 + 13U};
  struct _tuple4 * _T7;
  _T0 = yy1;
  _T1 = (union Cyc_YYSTYPE *)_T0;
  _T2 = _T1->Entrypoint_tok;
  _T3 = _T2.tag;
  if (_T3 != 6) { goto _TL1B;
  }
  _T4 = yy1;
  { union Cyc_YYSTYPE _T8 = *_T4;
    _T5 = _T8.Entrypoint_tok;
    _T7 = _T5.val;
  }{ struct _tuple4 * yy = _T7;
    _T6 = yy;
    return _T6;
  }_TL1B: Cyc_yythrowfail(s);
  ;
}
static union Cyc_YYSTYPE Cyc_Entrypoint_tok(struct _tuple4 * yy1) {
  union Cyc_YYSTYPE _T0;
  { union Cyc_YYSTYPE _T1;
    (_T1.Entrypoint_tok).tag = 6U;
    (_T1.Entrypoint_tok).val = yy1;
    _T0 = _T1;
  }return _T0;
}
static char _TmpG5[19U] = "list_t<acase_t,`H>";
static struct Cyc_List_List * Cyc_yyget_Acase_List_tok(union Cyc_YYSTYPE * yy1) {
  union Cyc_YYSTYPE * _T0;
  union Cyc_YYSTYPE * _T1;
  struct _union_YYSTYPE_Acase_List_tok _T2;
  unsigned int _T3;
  union Cyc_YYSTYPE * _T4;
  struct _union_YYSTYPE_Acase_List_tok _T5;
  struct Cyc_List_List * _T6;
  static struct _fat_ptr s = {(unsigned char *)_TmpG5,(unsigned char *)_TmpG5,
			      (unsigned char *)_TmpG5 + 19U};
  struct Cyc_List_List * _T7;
  _T0 = yy1;
  _T1 = (union Cyc_YYSTYPE *)_T0;
  _T2 = _T1->Acase_List_tok;
  _T3 = _T2.tag;
  if (_T3 != 7) { goto _TL1D;
  }
  _T4 = yy1;
  { union Cyc_YYSTYPE _T8 = *_T4;
    _T5 = _T8.Acase_List_tok;
    _T7 = _T5.val;
  }{ struct Cyc_List_List * yy = _T7;
    _T6 = yy;
    return _T6;
  }_TL1D: Cyc_yythrowfail(s);
  ;
}
static union Cyc_YYSTYPE Cyc_Acase_List_tok(struct Cyc_List_List * yy1) {
  union Cyc_YYSTYPE _T0;
  { union Cyc_YYSTYPE _T1;
    (_T1.Acase_List_tok).tag = 7U;
    (_T1.Acase_List_tok).val = yy1;
    _T0 = _T1;
  }return _T0;
}
static char _TmpG6[8U] = "acase_t";
static struct _tuple2 * Cyc_yyget_Acase_tok(union Cyc_YYSTYPE * yy1) {
  union Cyc_YYSTYPE * _T0;
  union Cyc_YYSTYPE * _T1;
  struct _union_YYSTYPE_Acase_tok _T2;
  unsigned int _T3;
  union Cyc_YYSTYPE * _T4;
  struct _union_YYSTYPE_Acase_tok _T5;
  struct _tuple2 * _T6;
  static struct _fat_ptr s = {(unsigned char *)_TmpG6,(unsigned char *)_TmpG6,
			      (unsigned char *)_TmpG6 + 8U};
  struct _tuple2 * _T7;
  _T0 = yy1;
  _T1 = (union Cyc_YYSTYPE *)_T0;
  _T2 = _T1->Acase_tok;
  _T3 = _T2.tag;
  if (_T3 != 8) { goto _TL1F;
  }
  _T4 = yy1;
  { union Cyc_YYSTYPE _T8 = *_T4;
    _T5 = _T8.Acase_tok;
    _T7 = _T5.val;
  }{ struct _tuple2 * yy = _T7;
    _T6 = yy;
    return _T6;
  }_TL1F: Cyc_yythrowfail(s);
  ;
}
static union Cyc_YYSTYPE Cyc_Acase_tok(struct _tuple2 * yy1) {
  union Cyc_YYSTYPE _T0;
  { union Cyc_YYSTYPE _T1;
    (_T1.Acase_tok).tag = 8U;
    (_T1.Acase_tok).val = yy1;
    _T0 = _T1;
  }return _T0;
}
static char _TmpG7[21U] = "regular_expression_t";
static void * Cyc_yyget_Regexp_tok(union Cyc_YYSTYPE * yy1) {
  union Cyc_YYSTYPE * _T0;
  union Cyc_YYSTYPE * _T1;
  struct _union_YYSTYPE_Regexp_tok _T2;
  unsigned int _T3;
  union Cyc_YYSTYPE * _T4;
  struct _union_YYSTYPE_Regexp_tok _T5;
  void * _T6;
  static struct _fat_ptr s = {(unsigned char *)_TmpG7,(unsigned char *)_TmpG7,
			      (unsigned char *)_TmpG7 + 21U};
  void * _T7;
  _T0 = yy1;
  _T1 = (union Cyc_YYSTYPE *)_T0;
  _T2 = _T1->Regexp_tok;
  _T3 = _T2.tag;
  if (_T3 != 9) { goto _TL21;
  }
  _T4 = yy1;
  { union Cyc_YYSTYPE _T8 = *_T4;
    _T5 = _T8.Regexp_tok;
    _T7 = _T5.val;
  }{ void * yy = _T7;
    _T6 = yy;
    return _T6;
  }_TL21: Cyc_yythrowfail(s);
  ;
}
static union Cyc_YYSTYPE Cyc_Regexp_tok(void * yy1) {
  union Cyc_YYSTYPE _T0;
  { union Cyc_YYSTYPE _T1;
    (_T1.Regexp_tok).tag = 9U;
    (_T1.Regexp_tok).val = yy1;
    _T0 = _T1;
  }return _T0;
}
static char _TmpG8[5U] = "char";
static char Cyc_yyget_Char_tok(union Cyc_YYSTYPE * yy1) {
  union Cyc_YYSTYPE * _T0;
  union Cyc_YYSTYPE * _T1;
  struct _union_YYSTYPE_Char_tok _T2;
  unsigned int _T3;
  union Cyc_YYSTYPE * _T4;
  struct _union_YYSTYPE_Char_tok _T5;
  char _T6;
  static struct _fat_ptr s = {(unsigned char *)_TmpG8,(unsigned char *)_TmpG8,
			      (unsigned char *)_TmpG8 + 5U};
  char _T7;
  _T0 = yy1;
  _T1 = (union Cyc_YYSTYPE *)_T0;
  _T2 = _T1->Char_tok;
  _T3 = _T2.tag;
  if (_T3 != 10) { goto _TL23;
  }
  _T4 = yy1;
  { union Cyc_YYSTYPE _T8 = *_T4;
    _T5 = _T8.Char_tok;
    _T7 = _T5.val;
  }{ char yy = _T7;
    _T6 = yy;
    return _T6;
  }_TL23: Cyc_yythrowfail(s);
  ;
}
static union Cyc_YYSTYPE Cyc_Char_tok(char yy1) {
  union Cyc_YYSTYPE _T0;
  { union Cyc_YYSTYPE _T1;
    (_T1.Char_tok).tag = 10U;
    (_T1.Char_tok).val = yy1;
    _T0 = _T1;
  }return _T0;
}
static char _TmpG9[13U] = "string_t<`H>";
static struct _fat_ptr Cyc_yyget_String_tok(union Cyc_YYSTYPE * yy1) {
  union Cyc_YYSTYPE * _T0;
  union Cyc_YYSTYPE * _T1;
  struct _union_YYSTYPE_String_tok _T2;
  unsigned int _T3;
  union Cyc_YYSTYPE * _T4;
  struct _union_YYSTYPE_String_tok _T5;
  struct _fat_ptr _T6;
  static struct _fat_ptr s = {(unsigned char *)_TmpG9,(unsigned char *)_TmpG9,
			      (unsigned char *)_TmpG9 + 13U};
  struct _fat_ptr _T7;
  _T0 = yy1;
  _T1 = (union Cyc_YYSTYPE *)_T0;
  _T2 = _T1->String_tok;
  _T3 = _T2.tag;
  if (_T3 != 11) { goto _TL25;
  }
  _T4 = yy1;
  { union Cyc_YYSTYPE _T8 = *_T4;
    _T5 = _T8.String_tok;
    _T7 = _T5.val;
  }{ struct _fat_ptr yy = _T7;
    _T6 = yy;
    return _T6;
  }_TL25: Cyc_yythrowfail(s);
  ;
}
static union Cyc_YYSTYPE Cyc_String_tok(struct _fat_ptr yy1) {
  union Cyc_YYSTYPE _T0;
  { union Cyc_YYSTYPE _T1;
    (_T1.String_tok).tag = 11U;
    (_T1.String_tok).val = yy1;
    _T0 = _T1;
  }return _T0;
}
static char _TmpGA[15U] = "list_t<int,`H>";
static struct Cyc_List_List * Cyc_yyget_Charclass_tok(union Cyc_YYSTYPE * yy1) {
  union Cyc_YYSTYPE * _T0;
  union Cyc_YYSTYPE * _T1;
  struct _union_YYSTYPE_Charclass_tok _T2;
  unsigned int _T3;
  union Cyc_YYSTYPE * _T4;
  struct _union_YYSTYPE_Charclass_tok _T5;
  struct Cyc_List_List * _T6;
  static struct _fat_ptr s = {(unsigned char *)_TmpGA,(unsigned char *)_TmpGA,
			      (unsigned char *)_TmpGA + 15U};
  struct Cyc_List_List * _T7;
  _T0 = yy1;
  _T1 = (union Cyc_YYSTYPE *)_T0;
  _T2 = _T1->Charclass_tok;
  _T3 = _T2.tag;
  if (_T3 != 12) { goto _TL27;
  }
  _T4 = yy1;
  { union Cyc_YYSTYPE _T8 = *_T4;
    _T5 = _T8.Charclass_tok;
    _T7 = _T5.val;
  }{ struct Cyc_List_List * yy = _T7;
    _T6 = yy;
    return _T6;
  }_TL27: Cyc_yythrowfail(s);
  ;
}
static union Cyc_YYSTYPE Cyc_Charclass_tok(struct Cyc_List_List * yy1) {
  union Cyc_YYSTYPE _T0;
  { union Cyc_YYSTYPE _T1;
    (_T1.Charclass_tok).tag = 12U;
    (_T1.Charclass_tok).val = yy1;
    _T0 = _T1;
  }return _T0;
}
static short Cyc_yytranslate[280U] = {0,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      2,
				      1,
				      2,
				      3,
				      4,
				      5,
				      6,
				      7,
				      8,
				      9,
				      10,
				      11,
				      12,
				      13,
				      14,
				      15,
				      16,
				      17,
				      18,
				      19,
				      20,
				      21,
				      22,
				      23,
				      24};
static short Cyc_yyr1[33U] = {0,
			      25,
			      26,
			      26,
			      27,
			      27,
			      28,
			      28,
			      29,
			      29,
			      29,
			      30,
			      30,
			      31,
			      31,
			      32,
			      33,
			      33,
			      33,
			      33,
			      33,
			      33,
			      33,
			      33,
			      33,
			      33,
			      33,
			      33,
			      34,
			      34,
			      35,
			      35,
			      35};
static short Cyc_yyr2[33U] = {0,
			      6,
			      1,
			      0,
			      5,
			      0,
			      3,
			      0,
			      3,
			      4,
			      6,
			      3,
			      2,
			      3,
			      0,
			      2,
			      1,
			      1,
			      1,
			      1,
			      3,
			      2,
			      2,
			      2,
			      3,
			      2,
			      3,
			      1,
			      2,
			      1,
			      3,
			      1,
			      2};
static short Cyc_yydefact[59U] = {3,
				  2,
				  5,
				  0,
				  0,
				  0,
				  0,
				  7,
				  0,
				  0,
				  0,
				  3,
				  0,
				  0,
				  0,
				  14,
				  8,
				  0,
				  1,
				  27,
				  18,
				  19,
				  16,
				  17,
				  0,
				  0,
				  4,
				  0,
				  9,
				  12,
				  14,
				  0,
				  6,
				  31,
				  0,
				  0,
				  29,
				  0,
				  0,
				  21,
				  22,
				  23,
				  25,
				  0,
				  0,
				  11,
				  15,
				  0,
				  28,
				  20,
				  32,
				  26,
				  24,
				  10,
				  13,
				  30,
				  0,
				  0,
				  0};
static short Cyc_yydefgoto[11U] = {56,
				   2,
				   3,
				   11,
				   7,
				   16,
				   29,
				   30,
				   42,
				   35,
				   50};
static short Cyc_yypact[59U] = {5,
				- -32768,
				- -32768,
				- 5,
				2,
				9,
				- 1,
				- -32768,
				15,
				19,
				23,
				31,
				81,
				34,
				23,
				81,
				- -32768,
				2,
				- -32768,
				- -32768,
				- -32768,
				- -32768,
				- -32768,
				- -32768,
				6,
				81,
				47,
				35,
				- -32768,
				42,
				- -32768,
				30,
				- -32768,
				32,
				51,
				41,
				51,
				3,
				81,
				- -32768,
				- -32768,
				- -32768,
				64,
				23,
				81,
				42,
				- -32768,
				53,
				51,
				- -32768,
				51,
				- -32768,
				64,
				- -32768,
				- -32768,
				- -32768,
				62,
				70,
				- -32768};
static short Cyc_yypgoto[11U] = {- -32768,
				 60,
				 - -32768,
				 - -32768,
				 55,
				 - 13,
				 43,
				 44,
				 - 12,
				 - -32768,
				 4};
static short Cyc_yytable[101U] = {26,
				  28,
				  4,
				  31,
				  9,
				  6,
				  19,
				  20,
				  21,
				  10,
				  33,
				  1,
				  8,
				  37,
				  38,
				  22,
				  23,
				  24,
				  5,
				  39,
				  40,
				  41,
				  25,
				  51,
				  13,
				  12,
				  52,
				  34,
				  36,
				  14,
				  53,
				  15,
				  31,
				  19,
				  20,
				  21,
				  46,
				  1,
				  48,
				  27,
				  17,
				  38,
				  22,
				  23,
				  24,
				  43,
				  39,
				  40,
				  41,
				  25,
				  19,
				  20,
				  21,
				  44,
				  47,
				  33,
				  49,
				  55,
				  38,
				  22,
				  23,
				  24,
				  57,
				  39,
				  40,
				  41,
				  25,
				  19,
				  20,
				  21,
				  58,
				  18,
				  32,
				  45,
				  0,
				  0,
				  22,
				  23,
				  24,
				  0,
				  39,
				  40,
				  41,
				  25,
				  19,
				  20,
				  21,
				  0,
				  54,
				  0,
				  0,
				  0,
				  0,
				  22,
				  23,
				  24,
				  0,
				  0,
				  0,
				  0,
				  25};
static short Cyc_yycheck[101U] = {12,
				  14,
				  7,
				  15,
				  5,
				  3,
				  3,
				  4,
				  5,
				  10,
				  4,
				  6,
				  3,
				  25,
				  11,
				  12,
				  13,
				  14,
				  23,
				  16,
				  17,
				  18,
				  19,
				  20,
				  5,
				  10,
				  38,
				  21,
				  24,
				  10,
				  43,
				  8,
				  44,
				  3,
				  4,
				  5,
				  6,
				  6,
				  34,
				  5,
				  9,
				  11,
				  12,
				  13,
				  14,
				  10,
				  16,
				  17,
				  18,
				  19,
				  3,
				  4,
				  5,
				  11,
				  22,
				  4,
				  15,
				  4,
				  11,
				  12,
				  13,
				  14,
				  0,
				  16,
				  17,
				  18,
				  19,
				  3,
				  4,
				  5,
				  0,
				  11,
				  17,
				  30,
				  - 1,
				  - 1,
				  12,
				  13,
				  14,
				  - 1,
				  16,
				  17,
				  18,
				  19,
				  3,
				  4,
				  5,
				  - 1,
				  44,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  12,
				  13,
				  14,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  19};
char Cyc_Yystack_overflow[17U] = "Yystack_overflow";
 struct Cyc_Yystack_overflow_exn_struct {
  char * tag;
  int f1;
};
struct Cyc_Yystack_overflow_exn_struct Cyc_Yystack_overflow_val = {Cyc_Yystack_overflow,
								   0};
extern void Cyc_yyerror(struct _fat_ptr,int,int);
extern int Cyc_yylex();
static int Cyc_yychar = (int)'\000';
union Cyc_YYSTYPE Cyc_yylval = {.YYINITIALSVAL={1,0}};
static int Cyc_yynerrs = 0;
 struct Cyc_Yystacktype {
  union Cyc_YYSTYPE v;
};
int Cyc_yyparse() {
  struct _fat_ptr _T0;
  struct _RegionHandle * _T1;
  void * _T2;
  struct Cyc_Yystacktype * _T3;
  struct Cyc_Yystacktype * _T4;
  struct _RegionHandle * _T5;
  unsigned int _T6;
  unsigned int _T7;
  struct _fat_ptr _T8;
  int _T9;
  unsigned char * _TA;
  short * _TB;
  int _TC;
  int _TD;
  int _TE;
  int _TF;
  struct _fat_ptr _T10;
  int _T11;
  int _T12;
  struct Cyc_Yystack_overflow_exn_struct * _T13;
  struct Cyc_Yystack_overflow_exn_struct * _T14;
  struct _fat_ptr _T15;
  int _T16;
  short * _T17;
  struct _RegionHandle * _T18;
  unsigned int _T19;
  unsigned int _T1A;
  int _T1B;
  unsigned int _T1C;
  unsigned int _T1D;
  struct _fat_ptr _T1E;
  unsigned char * _T1F;
  short * _T20;
  unsigned int _T21;
  int _T22;
  unsigned int _T23;
  struct _fat_ptr _T24;
  int _T25;
  struct Cyc_Yystacktype * _T26;
  struct _RegionHandle * _T27;
  unsigned int _T28;
  unsigned int _T29;
  int _T2A;
  unsigned int _T2B;
  unsigned int _T2C;
  struct _fat_ptr _T2D;
  unsigned int _T2E;
  int _T2F;
  unsigned char * _T30;
  struct Cyc_Yystacktype * _T31;
  unsigned int _T32;
  struct _fat_ptr _T33;
  unsigned char * _T34;
  struct Cyc_Yystacktype * _T35;
  short * _T36;
  int _T37;
  char * _T38;
  short * _T39;
  short _T3A;
  int _T3B;
  int _T3C;
  int _T3D;
  int _T3E;
  int _T3F;
  short * _T40;
  int _T41;
  short _T42;
  int _T43;
  short * _T44;
  int _T45;
  short _T46;
  int _T47;
  int _T48;
  short * _T49;
  int _T4A;
  short _T4B;
  int _T4C;
  int _T4D;
  struct _fat_ptr _T4E;
  unsigned char * _T4F;
  struct Cyc_Yystacktype * _T50;
  int _T51;
  struct Cyc_Yystacktype _T52;
  short * _T53;
  int _T54;
  char * _T55;
  short * _T56;
  short _T57;
  short * _T58;
  int _T59;
  char * _T5A;
  short * _T5B;
  short _T5C;
  struct _fat_ptr _T5D;
  int _T5E;
  int _T5F;
  int _T60;
  struct _fat_ptr _T61;
  unsigned char * _T62;
  unsigned char * _T63;
  struct Cyc_Yystacktype * _T64;
  struct Cyc_Yystacktype _T65;
  int _T66;
  int _T67;
  struct Cyc_Syntax_Lexer_definition * _T68;
  struct Cyc_Yystacktype * _T69;
  union Cyc_YYSTYPE * _T6A;
  union Cyc_YYSTYPE * _T6B;
  struct Cyc_Syntax_Lexer_definition * _T6C;
  struct Cyc_List_List * _T6D;
  struct Cyc_Yystacktype * _T6E;
  union Cyc_YYSTYPE * _T6F;
  union Cyc_YYSTYPE * _T70;
  struct Cyc_Yystacktype * _T71;
  union Cyc_YYSTYPE * _T72;
  union Cyc_YYSTYPE * _T73;
  struct Cyc_List_List * _T74;
  struct Cyc_Syntax_Lexer_definition * _T75;
  struct Cyc_Yystacktype * _T76;
  union Cyc_YYSTYPE * _T77;
  union Cyc_YYSTYPE * _T78;
  struct Cyc_Yystacktype * _T79;
  struct Cyc_Yystacktype _T7A;
  struct Cyc_Syntax_Location * _T7B;
  void (* _T7C)(struct Cyc_Hashtable_Table *,struct _fat_ptr *,void *);
  void (* _T7D)(struct Cyc_Hashtable_Table *,void *,void *);
  struct Cyc_Hashtable_Table * _T7E;
  struct _fat_ptr * _T7F;
  struct _fat_ptr * _T80;
  unsigned int _T81;
  struct Cyc_Yystacktype * _T82;
  union Cyc_YYSTYPE * _T83;
  union Cyc_YYSTYPE * _T84;
  struct _fat_ptr _T85;
  struct Cyc_Yystacktype * _T86;
  union Cyc_YYSTYPE * _T87;
  union Cyc_YYSTYPE * _T88;
  void * _T89;
  struct Cyc_List_List * _T8A;
  struct Cyc_Yystacktype * _T8B;
  union Cyc_YYSTYPE * _T8C;
  union Cyc_YYSTYPE * _T8D;
  struct Cyc_Yystacktype * _T8E;
  union Cyc_YYSTYPE * _T8F;
  union Cyc_YYSTYPE * _T90;
  struct _tuple4 * _T91;
  struct Cyc_Yystacktype * _T92;
  union Cyc_YYSTYPE * _T93;
  union Cyc_YYSTYPE * _T94;
  struct _fat_ptr _T95;
  struct Cyc_Yystacktype * _T96;
  union Cyc_YYSTYPE * _T97;
  union Cyc_YYSTYPE * _T98;
  struct _tuple4 * _T99;
  struct Cyc_Yystacktype * _T9A;
  union Cyc_YYSTYPE * _T9B;
  union Cyc_YYSTYPE * _T9C;
  struct Cyc_Yystacktype * _T9D;
  union Cyc_YYSTYPE * _T9E;
  union Cyc_YYSTYPE * _T9F;
  struct Cyc_Yystacktype * _TA0;
  union Cyc_YYSTYPE * _TA1;
  union Cyc_YYSTYPE * _TA2;
  struct _tuple4 * _TA3;
  struct Cyc_Yystacktype * _TA4;
  union Cyc_YYSTYPE * _TA5;
  union Cyc_YYSTYPE * _TA6;
  struct Cyc_Yystacktype * _TA7;
  union Cyc_YYSTYPE * _TA8;
  union Cyc_YYSTYPE * _TA9;
  struct _tuple3 * _TAA;
  struct Cyc_Yystacktype * _TAB;
  union Cyc_YYSTYPE * _TAC;
  union Cyc_YYSTYPE * _TAD;
  struct Cyc_Yystacktype * _TAE;
  union Cyc_YYSTYPE * _TAF;
  union Cyc_YYSTYPE * _TB0;
  struct Cyc_Yystacktype * _TB1;
  union Cyc_YYSTYPE * _TB2;
  union Cyc_YYSTYPE * _TB3;
  struct Cyc_List_List * _TB4;
  struct Cyc_Yystacktype * _TB5;
  union Cyc_YYSTYPE * _TB6;
  union Cyc_YYSTYPE * _TB7;
  struct Cyc_Yystacktype * _TB8;
  union Cyc_YYSTYPE * _TB9;
  union Cyc_YYSTYPE * _TBA;
  struct Cyc_List_List * _TBB;
  struct Cyc_Yystacktype * _TBC;
  union Cyc_YYSTYPE * _TBD;
  union Cyc_YYSTYPE * _TBE;
  struct Cyc_List_List * _TBF;
  struct Cyc_List_List * _TC0;
  struct Cyc_List_List * _TC1;
  struct Cyc_Yystacktype * _TC2;
  union Cyc_YYSTYPE * _TC3;
  union Cyc_YYSTYPE * _TC4;
  struct Cyc_Yystacktype * _TC5;
  union Cyc_YYSTYPE * _TC6;
  union Cyc_YYSTYPE * _TC7;
  struct _tuple2 * _TC8;
  struct Cyc_Yystacktype * _TC9;
  union Cyc_YYSTYPE * _TCA;
  union Cyc_YYSTYPE * _TCB;
  struct Cyc_Yystacktype * _TCC;
  union Cyc_YYSTYPE * _TCD;
  union Cyc_YYSTYPE * _TCE;
  struct Cyc_Syntax_Characters_Syntax_Regular_expression_struct * _TCF;
  void * _TD0;
  struct Cyc_Syntax_Characters_Syntax_Regular_expression_struct * _TD1;
  struct Cyc_List_List * _TD2;
  void * _TD3;
  struct Cyc_Syntax_Characters_Syntax_Regular_expression_struct * _TD4;
  struct Cyc_List_List * _TD5;
  struct Cyc_Yystacktype * _TD6;
  union Cyc_YYSTYPE * _TD7;
  union Cyc_YYSTYPE * _TD8;
  char _TD9;
  void * _TDA;
  struct Cyc_Yystacktype * _TDB;
  union Cyc_YYSTYPE * _TDC;
  union Cyc_YYSTYPE * _TDD;
  struct _fat_ptr _TDE;
  void * _TDF;
  struct Cyc_Syntax_Characters_Syntax_Regular_expression_struct * _TE0;
  struct Cyc_Yystacktype * _TE1;
  union Cyc_YYSTYPE * _TE2;
  union Cyc_YYSTYPE * _TE3;
  void * _TE4;
  struct Cyc_Syntax_Repetition_Syntax_Regular_expression_struct * _TE5;
  struct Cyc_Yystacktype * _TE6;
  union Cyc_YYSTYPE * _TE7;
  union Cyc_YYSTYPE * _TE8;
  void * _TE9;
  struct Cyc_Syntax_Alternative_Syntax_Regular_expression_struct * _TEA;
  struct Cyc_Yystacktype * _TEB;
  union Cyc_YYSTYPE * _TEC;
  union Cyc_YYSTYPE * _TED;
  struct Cyc_Syntax_Epsilon_Syntax_Regular_expression_struct * _TEE;
  struct Cyc_Syntax_Epsilon_Syntax_Regular_expression_struct * _TEF;
  void * _TF0;
  struct Cyc_Syntax_Sequence_Syntax_Regular_expression_struct * _TF1;
  struct Cyc_Yystacktype * _TF2;
  union Cyc_YYSTYPE * _TF3;
  union Cyc_YYSTYPE * _TF4;
  struct Cyc_Syntax_Repetition_Syntax_Regular_expression_struct * _TF5;
  struct Cyc_Yystacktype * _TF6;
  union Cyc_YYSTYPE * _TF7;
  union Cyc_YYSTYPE * _TF8;
  void * _TF9;
  struct Cyc_Syntax_Alternative_Syntax_Regular_expression_struct * _TFA;
  struct Cyc_Yystacktype * _TFB;
  union Cyc_YYSTYPE * _TFC;
  union Cyc_YYSTYPE * _TFD;
  struct Cyc_Yystacktype * _TFE;
  union Cyc_YYSTYPE * _TFF;
  union Cyc_YYSTYPE * _T100;
  void * _T101;
  struct Cyc_Syntax_Sequence_Syntax_Regular_expression_struct * _T102;
  struct Cyc_Yystacktype * _T103;
  union Cyc_YYSTYPE * _T104;
  union Cyc_YYSTYPE * _T105;
  struct Cyc_Yystacktype * _T106;
  union Cyc_YYSTYPE * _T107;
  union Cyc_YYSTYPE * _T108;
  void * _T109;
  struct Cyc_Yystacktype * _T10A;
  union Cyc_YYSTYPE * _T10B;
  union Cyc_YYSTYPE * _T10C;
  void * _T10D;
  struct _handler_cons * _T10E;
  int _T10F;
  void * (* _T110)(struct Cyc_Hashtable_Table *,struct _fat_ptr *);
  void * (* _T111)(struct Cyc_Hashtable_Table *,void *);
  struct Cyc_Hashtable_Table * _T112;
  struct _fat_ptr * _T113;
  struct _fat_ptr * _T114;
  unsigned int _T115;
  struct Cyc_Yystacktype * _T116;
  union Cyc_YYSTYPE * _T117;
  union Cyc_YYSTYPE * _T118;
  struct _fat_ptr _T119;
  void * _T11A;
  void * _T11B;
  struct Cyc_Core_Not_found_exn_struct * _T11C;
  char * _T11D;
  char * _T11E;
  struct _fat_ptr _T11F;
  struct Cyc_String_pa_PrintArg_struct _T120;
  struct Cyc_Yystacktype * _T121;
  union Cyc_YYSTYPE * _T122;
  union Cyc_YYSTYPE * _T123;
  struct _fat_ptr _T124;
  struct _fat_ptr _T125;
  int _T126;
  int _T127;
  struct Cyc_List_List * _T128;
  struct Cyc_Yystacktype * _T129;
  union Cyc_YYSTYPE * _T12A;
  union Cyc_YYSTYPE * _T12B;
  struct Cyc_List_List * _T12C;
  struct Cyc_List_List * _T12D;
  struct Cyc_Yystacktype * _T12E;
  struct Cyc_Yystacktype _T12F;
  struct Cyc_Yystacktype * _T130;
  union Cyc_YYSTYPE * _T131;
  union Cyc_YYSTYPE * _T132;
  char _T133;
  int _T134;
  struct Cyc_Yystacktype * _T135;
  union Cyc_YYSTYPE * _T136;
  union Cyc_YYSTYPE * _T137;
  char _T138;
  int _T139;
  struct Cyc_List_List * _T13A;
  struct Cyc_List_List * _T13B;
  struct Cyc_Yystacktype * _T13C;
  union Cyc_YYSTYPE * _T13D;
  union Cyc_YYSTYPE * _T13E;
  char _T13F;
  struct Cyc_Yystacktype * _T140;
  union Cyc_YYSTYPE * _T141;
  union Cyc_YYSTYPE * _T142;
  struct Cyc_List_List * _T143;
  struct Cyc_Yystacktype * _T144;
  union Cyc_YYSTYPE * _T145;
  union Cyc_YYSTYPE * _T146;
  struct Cyc_List_List * _T147;
  struct Cyc_List_List * _T148;
  int _T149;
  int _T14A;
  struct _fat_ptr _T14B;
  int _T14C;
  unsigned char * _T14D;
  struct Cyc_Yystacktype * _T14E;
  short * _T14F;
  int _T150;
  short _T151;
  short * _T152;
  int _T153;
  char * _T154;
  short * _T155;
  short _T156;
  int _T157;
  struct _fat_ptr _T158;
  int _T159;
  unsigned char * _T15A;
  short * _T15B;
  short _T15C;
  int _T15D;
  short * _T15E;
  int _T15F;
  short _T160;
  int _T161;
  struct _fat_ptr _T162;
  unsigned char * _T163;
  short * _T164;
  int _T165;
  short _T166;
  int _T167;
  short * _T168;
  int _T169;
  short _T16A;
  short * _T16B;
  int _T16C;
  short _T16D;
  struct _fat_ptr _T16E;
  int _T16F;
  int _T170;
  struct _fat_ptr _T171;
  int _T172;
  unsigned char * _T173;
  short * _T174;
  short _T175;
  short * _T176;
  int _T177;
  char * _T178;
  short * _T179;
  short _T17A;
  int _T17B;
  int _T17C;
  short * _T17D;
  int _T17E;
  short _T17F;
  int _T180;
  short * _T181;
  int _T182;
  short _T183;
  int _T184;
  int _T185;
  struct _fat_ptr _T186;
  int _T187;
  unsigned char * _T188;
  struct Cyc_Yystacktype * _T189;
  struct Cyc_Yystacktype _T18A;
  struct _RegionHandle _T18B = _new_region(0U,"yyregion");
  struct _RegionHandle * yyregion = &_T18B;
  _push_region(yyregion);
  { int yystate;
    int yyn = 0;
    int yyerrstatus;
    int yychar1 = 0;
    int yyssp_offset;
    { unsigned int _T18C = 200U;
      _T1 = yyregion;
      _T2 = _region_calloc(_T1,0U,sizeof(short),_T18C);
      _T0 = _tag_fat(_T2,sizeof(short),_T18C);
    }{ struct _fat_ptr yyss = _T0;
      int yyvsp_offset;
      { unsigned int _T18C = 200U;
	_T5 = yyregion;
	_T6 = _check_times(_T18C,sizeof(struct Cyc_Yystacktype));
	{ struct Cyc_Yystacktype * _T18D = _region_malloc(_T5,0U,_T6);
	  { unsigned int _T18E = _T18C;
	    unsigned int i;
	    i = 0;
	    _TL2C: if (i < _T18E) { goto _TL2A;
	    }else { goto _TL2B;
	    }
	    _TL2A: _T7 = i;
	    (_T18D[_T7]).v = Cyc_yylval;
	    i = i + 1;
	    goto _TL2C;
	    _TL2B: ;
	  }_T4 = (struct Cyc_Yystacktype *)_T18D;
	}_T3 = _T4;
      }{ struct _fat_ptr yyvs = _tag_fat(_T3,sizeof(struct Cyc_Yystacktype),
					 200U);
	struct Cyc_Yystacktype * yyyvsp;
	int yystacksize = 200;
	union Cyc_YYSTYPE yyval = Cyc_yylval;
	int yylen;
	yystate = 0;
	yyerrstatus = 0;
	Cyc_yynerrs = 0;
	Cyc_yychar = - 2;
	yyssp_offset = - 1;
	yyvsp_offset = 0;
	yynewstate: _T8 = yyss;
	yyssp_offset = yyssp_offset + 1;
	_T9 = yyssp_offset;
	_TA = _check_fat_subscript(_T8,sizeof(short),_T9);
	_TB = (short *)_TA;
	_TC = yystate;
	*_TB = (short)_TC;
	_TD = yyssp_offset;
	_TE = yystacksize - 1;
	_TF = _TE - 7;
	if (_TD < _TF) { goto _TL2D;
	}
	if (yystacksize < 10000) { goto _TL2F;
	}
	_T10 = _tag_fat("parser stack overflow",sizeof(char),22U);
	_T11 = yystate;
	_T12 = Cyc_yychar;
	Cyc_yyerror(_T10,_T11,_T12);
	_T13 = &Cyc_Yystack_overflow_val;
	_T14 = (struct Cyc_Yystack_overflow_exn_struct *)_T13;
	_throw(_T14);
	goto _TL30;
	_TL2F: _TL30: yystacksize = yystacksize * 2;
	if (yystacksize <= 10000) { goto _TL31;
	}
	yystacksize = 10000;
	goto _TL32;
	_TL31: _TL32: _T16 = yystacksize;
	{ unsigned int _T18C = (unsigned int)_T16;
	  _T18 = yyregion;
	  _T19 = _check_times(_T18C,sizeof(short));
	  { short * _T18D = _region_malloc(_T18,0U,_T19);
	    { unsigned int _T18E = _T18C;
	      unsigned int i;
	      i = 0;
	      _TL36: if (i < _T18E) { goto _TL34;
	      }else { goto _TL35;
	      }
	      _TL34: _T1A = i;
	      _T1B = yyssp_offset;
	      _T1C = (unsigned int)_T1B;
	      if (_T1A > _T1C) { goto _TL37;
	      }
	      _T1D = i;
	      _T1E = yyss;
	      _T1F = _T1E.curr;
	      _T20 = (short *)_T1F;
	      _T21 = i;
	      _T22 = (int)_T21;
	      _T18D[_T1D] = _T20[_T22];
	      goto _TL38;
	      _TL37: _T23 = i;
	      _T18D[_T23] = 0;
	      _TL38: i = i + 1;
	      goto _TL36;
	      _TL35: ;
	    }_T17 = (short *)_T18D;
	  }_T15 = _tag_fat(_T17,sizeof(short),_T18C);
	}{ struct _fat_ptr yyss1 = _T15;
	  _T25 = yystacksize;
	  { unsigned int _T18C = (unsigned int)_T25;
	    _T27 = yyregion;
	    _T28 = _check_times(_T18C,sizeof(struct Cyc_Yystacktype));
	    { struct Cyc_Yystacktype * _T18D = _region_malloc(_T27,0U,_T28);
	      { unsigned int _T18E = _T18C;
		unsigned int i;
		i = 0;
		_TL3C: if (i < _T18E) { goto _TL3A;
		}else { goto _TL3B;
		}
		_TL3A: _T29 = i;
		_T2A = yyssp_offset;
		_T2B = (unsigned int)_T2A;
		if (_T29 > _T2B) { goto _TL3D;
		}
		_T2C = i;
		_T2D = yyvs;
		_T2E = i;
		_T2F = (int)_T2E;
		_T30 = _check_fat_subscript(_T2D,sizeof(struct Cyc_Yystacktype),
					    _T2F);
		_T31 = (struct Cyc_Yystacktype *)_T30;
		_T18D[_T2C] = *_T31;
		goto _TL3E;
		_TL3D: _T32 = i;
		_T33 = yyvs;
		_T34 = _check_fat_subscript(_T33,sizeof(struct Cyc_Yystacktype),
					    0);
		_T35 = (struct Cyc_Yystacktype *)_T34;
		_T18D[_T32] = *_T35;
		_TL3E: i = i + 1;
		goto _TL3C;
		_TL3B: ;
	      }_T26 = (struct Cyc_Yystacktype *)_T18D;
	    }_T24 = _tag_fat(_T26,sizeof(struct Cyc_Yystacktype),_T18C);
	  }{ struct _fat_ptr yyvs1 = _T24;
	    yyss = yyss1;
	    yyvs = yyvs1;
	  }
	}goto _TL2E;
	_TL2D: _TL2E: goto yybackup;
	yybackup: _T36 = Cyc_yypact;
	_T37 = yystate;
	_T38 = _check_known_subscript_notnull(_T36,59U,sizeof(short),_T37);
	_T39 = (short *)_T38;
	_T3A = *_T39;
	yyn = (int)_T3A;
	_T3B = yyn;
	_T3C = - 32768;
	if (_T3B != _T3C) { goto _TL3F;
	}
	goto yydefault;
	_TL3F: _T3D = Cyc_yychar;
	_T3E = - 2;
	if (_T3D != _T3E) { goto _TL41;
	}
	Cyc_yychar = Cyc_yylex();
	goto _TL42;
	_TL41: _TL42: if (Cyc_yychar > 0) { goto _TL43;
	}
	yychar1 = 0;
	Cyc_yychar = 0;
	goto _TL44;
	_TL43: if (Cyc_yychar <= 0) { goto _TL45;
	}
	if (Cyc_yychar > 279) { goto _TL45;
	}
	_T40 = Cyc_yytranslate;
	_T41 = Cyc_yychar;
	_T42 = _T40[_T41];
	_T3F = (int)_T42;
	goto _TL46;
	_TL45: _T3F = 36;
	_TL46: yychar1 = _T3F;
	_TL44: _T43 = yychar1;
	yyn = yyn + _T43;
	if (yyn < 0) { goto _TL49;
	}else { goto _TL4B;
	}
	_TL4B: if (yyn > 100) { goto _TL49;
	}else { goto _TL4A;
	}
	_TL4A: _T44 = Cyc_yycheck;
	_T45 = yyn;
	_T46 = _T44[_T45];
	_T47 = (int)_T46;
	_T48 = yychar1;
	if (_T47 != _T48) { goto _TL49;
	}else { goto _TL47;
	}
	_TL49: goto yydefault;
	_TL47: _T49 = Cyc_yytable;
	_T4A = yyn;
	_T4B = _T49[_T4A];
	yyn = (int)_T4B;
	if (yyn >= 0) { goto _TL4C;
	}
	_T4C = yyn;
	_T4D = - 32768;
	if (_T4C != _T4D) { goto _TL4E;
	}
	goto yyerrlab;
	_TL4E: yyn = - yyn;
	goto yyreduce;
	_TL4C: if (yyn != 0) { goto _TL50;
	}
	goto yyerrlab;
	_TL50: if (yyn != 58) { goto _TL52;
	}
	{ int _T18C = 0;
	  _npop_handler(0);
	  return _T18C;
	}_TL52: if (Cyc_yychar == 0) { goto _TL54;
	}
	Cyc_yychar = - 2;
	goto _TL55;
	_TL54: _TL55: _T4E = yyvs;
	_T4F = _T4E.curr;
	_T50 = (struct Cyc_Yystacktype *)_T4F;
	yyvsp_offset = yyvsp_offset + 1;
	_T51 = yyvsp_offset;
	{ struct Cyc_Yystacktype _T18C;
	  _T18C.v = Cyc_yylval;
	  _T52 = _T18C;
	}_T50[_T51] = _T52;
	if (yyerrstatus == 0) { goto _TL56;
	}
	yyerrstatus = yyerrstatus + -1;
	goto _TL57;
	_TL56: _TL57: yystate = yyn;
	goto yynewstate;
	yydefault: _T53 = Cyc_yydefact;
	_T54 = yystate;
	_T55 = _check_known_subscript_notnull(_T53,59U,sizeof(short),_T54);
	_T56 = (short *)_T55;
	_T57 = *_T56;
	yyn = (int)_T57;
	if (yyn != 0) { goto _TL58;
	}
	goto yyerrlab;
	_TL58: yyreduce: _T58 = Cyc_yyr2;
	_T59 = yyn;
	_T5A = _check_known_subscript_notnull(_T58,33U,sizeof(short),_T59);
	_T5B = (short *)_T5A;
	_T5C = *_T5B;
	yylen = (int)_T5C;
	_T5D = yyvs;
	_T5E = yyvsp_offset + 1;
	_T5F = yylen;
	_T60 = _T5E - _T5F;
	_T61 = _fat_ptr_plus(_T5D,sizeof(struct Cyc_Yystacktype),_T60);
	_T62 = _untag_fat_ptr_check_bound(_T61,sizeof(struct Cyc_Yystacktype),
					  7U);
	_T63 = _check_null(_T62);
	yyyvsp = (struct Cyc_Yystacktype *)_T63;
	if (yylen <= 0) { goto _TL5A;
	}
	_T64 = yyyvsp;
	_T65 = _T64[0];
	yyval = _T65.v;
	goto _TL5B;
	_TL5A: _TL5B: _T66 = yyn;
	_T67 = (int)_T66;
	switch (_T67) {
	case 1: 
	  { struct Cyc_Syntax_Lexer_definition * ans;
	    ans = _cycalloc(sizeof(struct Cyc_Syntax_Lexer_definition));
	    _T68 = ans;
	    _T69 = yyyvsp;
	    _T6A = &(_T69[0]).v;
	    _T6B = (union Cyc_YYSTYPE *)_T6A;
	    _T68->header = Cyc_yyget_Location_tok(_T6B);
	    _T6C = ans;
	    { struct Cyc_List_List * _T18C = _cycalloc(sizeof(struct Cyc_List_List));
	      _T6E = yyyvsp;
	      _T6F = &(_T6E[3]).v;
	      _T70 = (union Cyc_YYSTYPE *)_T6F;
	      _T18C->hd = Cyc_yyget_Entrypoint_tok(_T70);
	      _T71 = yyyvsp;
	      _T72 = &(_T71[4]).v;
	      _T73 = (union Cyc_YYSTYPE *)_T72;
	      _T74 = Cyc_yyget_Entrypoint_List_tok(_T73);
	      _T18C->tl = Cyc_List_rev(_T74);
	      _T6D = (struct Cyc_List_List *)_T18C;
	    }_T6C->entrypoints = _T6D;
	    _T75 = ans;
	    _T76 = yyyvsp;
	    _T77 = &(_T76[5]).v;
	    _T78 = (union Cyc_YYSTYPE *)_T77;
	    _T75->trailer = Cyc_yyget_Location_tok(_T78);
	    yyval = Cyc_Lexer_definition_tok(ans);
	    Cyc_Parser_parse_result = ans;
	    goto _LL0;
	  }
	case 2: 
	  _T79 = yyyvsp;
	  _T7A = _T79[0];
	  yyval = _T7A.v;
	  goto _LL0;
	case 3: 
	  { struct Cyc_Syntax_Location * _T18C = _cycalloc(sizeof(struct Cyc_Syntax_Location));
	    _T18C->start_pos = 0;
	    _T18C->end_pos = 0;
	    _T18C->start_line = 1;
	    _T18C->start_col = 0;
	    _T7B = (struct Cyc_Syntax_Location *)_T18C;
	  }yyval = Cyc_Location_tok(_T7B);
	  goto _LL0;
	case 4: 
	  _T7D = Cyc_Hashtable_insert;
	  { void (* _T18C)(struct Cyc_Hashtable_Table *,struct _fat_ptr *,
			   void *) = (void (*)(struct Cyc_Hashtable_Table *,
					       struct _fat_ptr *,void *))_T7D;
	    _T7C = _T18C;
	  }_T7E = _check_null(Cyc_Parser_named_regexps);
	  { unsigned int _T18C = 1;
	    _T81 = _check_times(_T18C,sizeof(struct _fat_ptr));
	    { struct _fat_ptr * _T18D = _cycalloc(_T81);
	      _T82 = yyyvsp;
	      _T83 = &(_T82[2]).v;
	      _T84 = (union Cyc_YYSTYPE *)_T83;
	      _T85 = Cyc_yyget_String_tok(_T84);
	      _T18D[0] = _T85;
	      _T80 = (struct _fat_ptr *)_T18D;
	    }_T7F = _T80;
	  }_T86 = yyyvsp;
	  _T87 = &(_T86[4]).v;
	  _T88 = (union Cyc_YYSTYPE *)_T87;
	  _T89 = Cyc_yyget_Regexp_tok(_T88);
	  _T7C(_T7E,_T7F,_T89);
	  yyval = Cyc_Int_tok(0);
	  goto _LL0;
	case 5: 
	  yyval = Cyc_Int_tok(0);
	  goto _LL0;
	case 6: 
	  { struct Cyc_List_List * _T18C = _cycalloc(sizeof(struct Cyc_List_List));
	    _T8B = yyyvsp;
	    _T8C = &(_T8B[2]).v;
	    _T8D = (union Cyc_YYSTYPE *)_T8C;
	    _T18C->hd = Cyc_yyget_Entrypoint_tok(_T8D);
	    _T8E = yyyvsp;
	    _T8F = &(_T8E[0]).v;
	    _T90 = (union Cyc_YYSTYPE *)_T8F;
	    _T18C->tl = Cyc_yyget_Entrypoint_List_tok(_T90);
	    _T8A = (struct Cyc_List_List *)_T18C;
	  }yyval = Cyc_Entrypoint_List_tok(_T8A);
	  goto _LL0;
	case 7: 
	  yyval = Cyc_Entrypoint_List_tok(0);
	  goto _LL0;
	case 8: 
	  { struct _tuple4 * _T18C = _cycalloc(sizeof(struct _tuple4));
	    _T92 = yyyvsp;
	    _T93 = &(_T92[0]).v;
	    _T94 = (union Cyc_YYSTYPE *)_T93;
	    _T18C->f0 = Cyc_yyget_String_tok(_T94);
	    _T95 = _tag_fat(0,0,0);
	    _T18C->f1 = _T95;
	    _T18C->f2 = 0;
	    _T96 = yyyvsp;
	    _T97 = &(_T96[2]).v;
	    _T98 = (union Cyc_YYSTYPE *)_T97;
	    _T18C->f3 = Cyc_yyget_Acase_List_tok(_T98);
	    _T91 = (struct _tuple4 *)_T18C;
	  }yyval = Cyc_Entrypoint_tok(_T91);
	  goto _LL0;
	case 9: 
	  { struct _tuple4 * _T18C = _cycalloc(sizeof(struct _tuple4));
	    _T9A = yyyvsp;
	    _T9B = &(_T9A[0]).v;
	    _T9C = (union Cyc_YYSTYPE *)_T9B;
	    _T18C->f0 = Cyc_yyget_String_tok(_T9C);
	    _T9D = yyyvsp;
	    _T9E = &(_T9D[1]).v;
	    _T9F = (union Cyc_YYSTYPE *)_T9E;
	    _T18C->f1 = Cyc_yyget_String_tok(_T9F);
	    _T18C->f2 = 0;
	    _TA0 = yyyvsp;
	    _TA1 = &(_TA0[3]).v;
	    _TA2 = (union Cyc_YYSTYPE *)_TA1;
	    _T18C->f3 = Cyc_yyget_Acase_List_tok(_TA2);
	    _T99 = (struct _tuple4 *)_T18C;
	  }yyval = Cyc_Entrypoint_tok(_T99);
	  goto _LL0;
	case 10: 
	  { struct _tuple4 * _T18C = _cycalloc(sizeof(struct _tuple4));
	    _TA4 = yyyvsp;
	    _TA5 = &(_TA4[0]).v;
	    _TA6 = (union Cyc_YYSTYPE *)_TA5;
	    _T18C->f0 = Cyc_yyget_String_tok(_TA6);
	    _TA7 = yyyvsp;
	    _TA8 = &(_TA7[1]).v;
	    _TA9 = (union Cyc_YYSTYPE *)_TA8;
	    _T18C->f1 = Cyc_yyget_String_tok(_TA9);
	    { struct _tuple3 * _T18D = _cycalloc(sizeof(struct _tuple3));
	      _TAB = yyyvsp;
	      _TAC = &(_TAB[2]).v;
	      _TAD = (union Cyc_YYSTYPE *)_TAC;
	      _T18D->f0 = Cyc_yyget_String_tok(_TAD);
	      _TAE = yyyvsp;
	      _TAF = &(_TAE[3]).v;
	      _TB0 = (union Cyc_YYSTYPE *)_TAF;
	      _T18D->f1 = Cyc_yyget_String_tok(_TB0);
	      _TAA = (struct _tuple3 *)_T18D;
	    }_T18C->f2 = _TAA;
	    _TB1 = yyyvsp;
	    _TB2 = &(_TB1[5]).v;
	    _TB3 = (union Cyc_YYSTYPE *)_TB2;
	    _T18C->f3 = Cyc_yyget_Acase_List_tok(_TB3);
	    _TA3 = (struct _tuple4 *)_T18C;
	  }yyval = Cyc_Entrypoint_tok(_TA3);
	  goto _LL0;
	case 11: 
	  { struct Cyc_List_List * _T18C = _cycalloc(sizeof(struct Cyc_List_List));
	    _TB5 = yyyvsp;
	    _TB6 = &(_TB5[1]).v;
	    _TB7 = (union Cyc_YYSTYPE *)_TB6;
	    _T18C->hd = Cyc_yyget_Acase_tok(_TB7);
	    _TB8 = yyyvsp;
	    _TB9 = &(_TB8[2]).v;
	    _TBA = (union Cyc_YYSTYPE *)_TB9;
	    _TBB = Cyc_yyget_Acase_List_tok(_TBA);
	    _T18C->tl = Cyc_List_rev(_TBB);
	    _TB4 = (struct Cyc_List_List *)_T18C;
	  }yyval = Cyc_Acase_List_tok(_TB4);
	  goto _LL0;
	case 12: 
	  _TBC = yyyvsp;
	  _TBD = &(_TBC[1]).v;
	  _TBE = (union Cyc_YYSTYPE *)_TBD;
	  _TBF = Cyc_yyget_Acase_List_tok(_TBE);
	  _TC0 = Cyc_List_rev(_TBF);
	  yyval = Cyc_Acase_List_tok(_TC0);
	  goto _LL0;
	case 13: 
	  { struct Cyc_List_List * _T18C = _cycalloc(sizeof(struct Cyc_List_List));
	    _TC2 = yyyvsp;
	    _TC3 = &(_TC2[2]).v;
	    _TC4 = (union Cyc_YYSTYPE *)_TC3;
	    _T18C->hd = Cyc_yyget_Acase_tok(_TC4);
	    _TC5 = yyyvsp;
	    _TC6 = &(_TC5[0]).v;
	    _TC7 = (union Cyc_YYSTYPE *)_TC6;
	    _T18C->tl = Cyc_yyget_Acase_List_tok(_TC7);
	    _TC1 = (struct Cyc_List_List *)_T18C;
	  }yyval = Cyc_Acase_List_tok(_TC1);
	  goto _LL0;
	case 14: 
	  yyval = Cyc_Acase_List_tok(0);
	  goto _LL0;
	case 15: 
	  { struct _tuple2 * _T18C = _cycalloc(sizeof(struct _tuple2));
	    _TC9 = yyyvsp;
	    _TCA = &(_TC9[0]).v;
	    _TCB = (union Cyc_YYSTYPE *)_TCA;
	    _T18C->f0 = Cyc_yyget_Regexp_tok(_TCB);
	    _TCC = yyyvsp;
	    _TCD = &(_TCC[1]).v;
	    _TCE = (union Cyc_YYSTYPE *)_TCD;
	    _T18C->f1 = Cyc_yyget_Location_tok(_TCE);
	    _TC8 = (struct _tuple2 *)_T18C;
	  }yyval = Cyc_Acase_tok(_TC8);
	  goto _LL0;
	case 16: 
	  { struct Cyc_Syntax_Characters_Syntax_Regular_expression_struct * _T18C = _cycalloc(sizeof(struct Cyc_Syntax_Characters_Syntax_Regular_expression_struct));
	    _T18C->tag = 1;
	    _T18C->f1 = Cyc_Parser_all_chars();
	    _TCF = (struct Cyc_Syntax_Characters_Syntax_Regular_expression_struct *)_T18C;
	  }_TD0 = (void *)_TCF;
	  yyval = Cyc_Regexp_tok(_TD0);
	  goto _LL0;
	case 17: 
	  { struct Cyc_Syntax_Characters_Syntax_Regular_expression_struct * _T18C = _cycalloc(sizeof(struct Cyc_Syntax_Characters_Syntax_Regular_expression_struct));
	    _T18C->tag = 1;
	    { struct Cyc_List_List * _T18D = _cycalloc(sizeof(struct Cyc_List_List));
	      _T18D->hd = (void *)256;
	      _T18D->tl = 0;
	      _TD2 = (struct Cyc_List_List *)_T18D;
	    }_T18C->f1 = _TD2;
	    _TD1 = (struct Cyc_Syntax_Characters_Syntax_Regular_expression_struct *)_T18C;
	  }_TD3 = (void *)_TD1;
	  yyval = Cyc_Regexp_tok(_TD3);
	  goto _LL0;
	case 18: 
	  { struct Cyc_Syntax_Characters_Syntax_Regular_expression_struct * _T18C = _cycalloc(sizeof(struct Cyc_Syntax_Characters_Syntax_Regular_expression_struct));
	    _T18C->tag = 1;
	    { struct Cyc_List_List * _T18D = _cycalloc(sizeof(struct Cyc_List_List));
	      _TD6 = yyyvsp;
	      _TD7 = &(_TD6[0]).v;
	      _TD8 = (union Cyc_YYSTYPE *)_TD7;
	      _TD9 = Cyc_yyget_Char_tok(_TD8);
	      _T18D->hd = (void *)_TD9;
	      _T18D->tl = 0;
	      _TD5 = (struct Cyc_List_List *)_T18D;
	    }_T18C->f1 = _TD5;
	    _TD4 = (struct Cyc_Syntax_Characters_Syntax_Regular_expression_struct *)_T18C;
	  }_TDA = (void *)_TD4;
	  yyval = Cyc_Regexp_tok(_TDA);
	  goto _LL0;
	case 19: 
	  _TDB = yyyvsp;
	  _TDC = &(_TDB[0]).v;
	  _TDD = (union Cyc_YYSTYPE *)_TDC;
	  _TDE = Cyc_yyget_String_tok(_TDD);
	  _TDF = Cyc_Parser_regexp_for_string(_TDE);
	  yyval = Cyc_Regexp_tok(_TDF);
	  goto _LL0;
	case 20: 
	  { struct Cyc_Syntax_Characters_Syntax_Regular_expression_struct * _T18C = _cycalloc(sizeof(struct Cyc_Syntax_Characters_Syntax_Regular_expression_struct));
	    _T18C->tag = 1;
	    _TE1 = yyyvsp;
	    _TE2 = &(_TE1[1]).v;
	    _TE3 = (union Cyc_YYSTYPE *)_TE2;
	    _T18C->f1 = Cyc_yyget_Charclass_tok(_TE3);
	    _TE0 = (struct Cyc_Syntax_Characters_Syntax_Regular_expression_struct *)_T18C;
	  }_TE4 = (void *)_TE0;
	  yyval = Cyc_Regexp_tok(_TE4);
	  goto _LL0;
	case 21: 
	  { struct Cyc_Syntax_Repetition_Syntax_Regular_expression_struct * _T18C = _cycalloc(sizeof(struct Cyc_Syntax_Repetition_Syntax_Regular_expression_struct));
	    _T18C->tag = 4;
	    _TE6 = yyyvsp;
	    _TE7 = &(_TE6[0]).v;
	    _TE8 = (union Cyc_YYSTYPE *)_TE7;
	    _T18C->f1 = Cyc_yyget_Regexp_tok(_TE8);
	    _TE5 = (struct Cyc_Syntax_Repetition_Syntax_Regular_expression_struct *)_T18C;
	  }_TE9 = (void *)_TE5;
	  yyval = Cyc_Regexp_tok(_TE9);
	  goto _LL0;
	case 22: 
	  { struct Cyc_Syntax_Alternative_Syntax_Regular_expression_struct * _T18C = _cycalloc(sizeof(struct Cyc_Syntax_Alternative_Syntax_Regular_expression_struct));
	    _T18C->tag = 3;
	    _TEB = yyyvsp;
	    _TEC = &(_TEB[0]).v;
	    _TED = (union Cyc_YYSTYPE *)_TEC;
	    _T18C->f1 = Cyc_yyget_Regexp_tok(_TED);
	    _TEE = &Cyc_Syntax_Epsilon_val;
	    _TEF = (struct Cyc_Syntax_Epsilon_Syntax_Regular_expression_struct *)_TEE;
	    _T18C->f2 = (void *)_TEF;
	    _TEA = (struct Cyc_Syntax_Alternative_Syntax_Regular_expression_struct *)_T18C;
	  }_TF0 = (void *)_TEA;
	  yyval = Cyc_Regexp_tok(_TF0);
	  goto _LL0;
	case 23: 
	  { struct Cyc_Syntax_Sequence_Syntax_Regular_expression_struct * _T18C = _cycalloc(sizeof(struct Cyc_Syntax_Sequence_Syntax_Regular_expression_struct));
	    _T18C->tag = 2;
	    _TF2 = yyyvsp;
	    _TF3 = &(_TF2[0]).v;
	    _TF4 = (union Cyc_YYSTYPE *)_TF3;
	    _T18C->f1 = Cyc_yyget_Regexp_tok(_TF4);
	    { struct Cyc_Syntax_Repetition_Syntax_Regular_expression_struct * _T18D = _cycalloc(sizeof(struct Cyc_Syntax_Repetition_Syntax_Regular_expression_struct));
	      _T18D->tag = 4;
	      _TF6 = yyyvsp;
	      _TF7 = &(_TF6[0]).v;
	      _TF8 = (union Cyc_YYSTYPE *)_TF7;
	      _T18D->f1 = Cyc_yyget_Regexp_tok(_TF8);
	      _TF5 = (struct Cyc_Syntax_Repetition_Syntax_Regular_expression_struct *)_T18D;
	    }_T18C->f2 = (void *)_TF5;
	    _TF1 = (struct Cyc_Syntax_Sequence_Syntax_Regular_expression_struct *)_T18C;
	  }_TF9 = (void *)_TF1;
	  yyval = Cyc_Regexp_tok(_TF9);
	  goto _LL0;
	case 24: 
	  { struct Cyc_Syntax_Alternative_Syntax_Regular_expression_struct * _T18C = _cycalloc(sizeof(struct Cyc_Syntax_Alternative_Syntax_Regular_expression_struct));
	    _T18C->tag = 3;
	    _TFB = yyyvsp;
	    _TFC = &(_TFB[0]).v;
	    _TFD = (union Cyc_YYSTYPE *)_TFC;
	    _T18C->f1 = Cyc_yyget_Regexp_tok(_TFD);
	    _TFE = yyyvsp;
	    _TFF = &(_TFE[2]).v;
	    _T100 = (union Cyc_YYSTYPE *)_TFF;
	    _T18C->f2 = Cyc_yyget_Regexp_tok(_T100);
	    _TFA = (struct Cyc_Syntax_Alternative_Syntax_Regular_expression_struct *)_T18C;
	  }_T101 = (void *)_TFA;
	  yyval = Cyc_Regexp_tok(_T101);
	  goto _LL0;
	case 25: 
	  { struct Cyc_Syntax_Sequence_Syntax_Regular_expression_struct * _T18C = _cycalloc(sizeof(struct Cyc_Syntax_Sequence_Syntax_Regular_expression_struct));
	    _T18C->tag = 2;
	    _T103 = yyyvsp;
	    _T104 = &(_T103[0]).v;
	    _T105 = (union Cyc_YYSTYPE *)_T104;
	    _T18C->f1 = Cyc_yyget_Regexp_tok(_T105);
	    _T106 = yyyvsp;
	    _T107 = &(_T106[1]).v;
	    _T108 = (union Cyc_YYSTYPE *)_T107;
	    _T18C->f2 = Cyc_yyget_Regexp_tok(_T108);
	    _T102 = (struct Cyc_Syntax_Sequence_Syntax_Regular_expression_struct *)_T18C;
	  }_T109 = (void *)_T102;
	  yyval = Cyc_Regexp_tok(_T109);
	  goto _LL0;
	case 26: 
	  _T10A = yyyvsp;
	  _T10B = &(_T10A[1]).v;
	  _T10C = (union Cyc_YYSTYPE *)_T10B;
	  _T10D = Cyc_yyget_Regexp_tok(_T10C);
	  yyval = Cyc_Regexp_tok(_T10D);
	  goto _LL0;
	case 27: 
	  { struct _handler_cons _T18C;
	    _T10E = &_T18C;
	    _push_handler(_T10E);
	    { int _T18D = 0;
	      _T10F = setjmp(_T18C.handler);
	      if (! _T10F) { goto _TL5D;
	      }
	      _T18D = 1;
	      goto _TL5E;
	      _TL5D: _TL5E: if (_T18D) { goto _TL5F;
	      }else { goto _TL61;
	      }
	      _TL61: _T111 = Cyc_Hashtable_lookup;
	      { void * (* _T18E)(struct Cyc_Hashtable_Table *,struct _fat_ptr *) = (void * (*)(struct Cyc_Hashtable_Table *,
											       struct _fat_ptr *))_T111;
		_T110 = _T18E;
	      }_T112 = _check_null(Cyc_Parser_named_regexps);
	      { unsigned int _T18E = 1;
		_T115 = _check_times(_T18E,sizeof(struct _fat_ptr));
		{ struct _fat_ptr * _T18F = _cycalloc(_T115);
		  _T116 = yyyvsp;
		  _T117 = &(_T116[0]).v;
		  _T118 = (union Cyc_YYSTYPE *)_T117;
		  _T119 = Cyc_yyget_String_tok(_T118);
		  _T18F[0] = _T119;
		  _T114 = (struct _fat_ptr *)_T18F;
		}_T113 = _T114;
	      }_T11A = _T110(_T112,_T113);
	      yyval = Cyc_Regexp_tok(_T11A);
	      _pop_handler();
	      goto _TL60;
	      _TL5F: _T11B = Cyc_Core_get_exn_thrown();
	      { void * _T18E = (void *)_T11B;
		void * _T18F;
		_T11C = (struct Cyc_Core_Not_found_exn_struct *)_T18E;
		_T11D = _T11C->tag;
		_T11E = Cyc_Core_Not_found;
		if (_T11D != _T11E) { goto _TL62;
		}
		{ struct Cyc_String_pa_PrintArg_struct _T190;
		  _T190.tag = 0;
		  _T121 = yyyvsp;
		  _T122 = &(_T121[0]).v;
		  _T123 = (union Cyc_YYSTYPE *)_T122;
		  _T190.f1 = Cyc_yyget_String_tok(_T123);
		  _T120 = _T190;
		}{ struct Cyc_String_pa_PrintArg_struct _T190 = _T120;
		  void * _T191[1];
		  _T191[0] = &_T190;
		  _T124 = _tag_fat("Reference to unbound regexp name `%s'",
				   sizeof(char),38U);
		  _T125 = _tag_fat(_T191,sizeof(void *),1);
		  _T11F = Cyc_aprintf(_T124,_T125);
		}_T126 = - 1;
		_T127 = - 1;
		Cyc_yyerror(_T11F,_T126,_T127);
		goto _LL43;
		_TL62: _T18F = _T18E;
		{ void * exn = _T18F;
		  _rethrow(exn);
		}_LL43: ;
	      }_TL60: ;
	    }
	  }goto _LL0;
	case 28: 
	  _T128 = Cyc_Parser_all_chars();
	  _T129 = yyyvsp;
	  _T12A = &(_T129[1]).v;
	  _T12B = (union Cyc_YYSTYPE *)_T12A;
	  _T12C = Cyc_yyget_Charclass_tok(_T12B);
	  _T12D = Cyc_Parser_subtract(_T128,_T12C);
	  yyval = Cyc_Charclass_tok(_T12D);
	  goto _LL0;
	case 29: 
	  _T12E = yyyvsp;
	  _T12F = _T12E[0];
	  yyval = _T12F.v;
	  goto _LL0;
	case 30: 
	  _T130 = yyyvsp;
	  _T131 = &(_T130[0]).v;
	  _T132 = (union Cyc_YYSTYPE *)_T131;
	  _T133 = Cyc_yyget_Char_tok(_T132);
	  _T134 = (int)_T133;
	  _T135 = yyyvsp;
	  _T136 = &(_T135[2]).v;
	  _T137 = (union Cyc_YYSTYPE *)_T136;
	  _T138 = Cyc_yyget_Char_tok(_T137);
	  _T139 = (int)_T138;
	  _T13A = Cyc_Parser_char_class(_T134,_T139);
	  yyval = Cyc_Charclass_tok(_T13A);
	  goto _LL0;
	case 31: 
	  { struct Cyc_List_List * _T18C = _cycalloc(sizeof(struct Cyc_List_List));
	    _T13C = yyyvsp;
	    _T13D = &(_T13C[0]).v;
	    _T13E = (union Cyc_YYSTYPE *)_T13D;
	    _T13F = Cyc_yyget_Char_tok(_T13E);
	    _T18C->hd = (void *)_T13F;
	    _T18C->tl = 0;
	    _T13B = (struct Cyc_List_List *)_T18C;
	  }yyval = Cyc_Charclass_tok(_T13B);
	  goto _LL0;
	case 32: 
	  _T140 = yyyvsp;
	  _T141 = &(_T140[0]).v;
	  _T142 = (union Cyc_YYSTYPE *)_T141;
	  _T143 = Cyc_yyget_Charclass_tok(_T142);
	  _T144 = yyyvsp;
	  _T145 = &(_T144[1]).v;
	  _T146 = (union Cyc_YYSTYPE *)_T145;
	  _T147 = Cyc_yyget_Charclass_tok(_T146);
	  _T148 = Cyc_List_append(_T143,_T147);
	  yyval = Cyc_Charclass_tok(_T148);
	  goto _LL0;
	default: 
	  goto _LL0;
	}
	_LL0: _T149 = yylen;
	yyvsp_offset = yyvsp_offset - _T149;
	_T14A = yylen;
	yyssp_offset = yyssp_offset - _T14A;
	_T14B = yyvs;
	yyvsp_offset = yyvsp_offset + 1;
	_T14C = yyvsp_offset;
	_T14D = _check_fat_subscript(_T14B,sizeof(struct Cyc_Yystacktype),
				     _T14C);
	_T14E = (struct Cyc_Yystacktype *)_T14D;
	(*_T14E).v = yyval;
	_T14F = Cyc_yyr1;
	_T150 = yyn;
	_T151 = _T14F[_T150];
	yyn = (int)_T151;
	_T152 = Cyc_yypgoto;
	_T153 = yyn - 25;
	_T154 = _check_known_subscript_notnull(_T152,11U,sizeof(short),_T153);
	_T155 = (short *)_T154;
	_T156 = *_T155;
	_T157 = (int)_T156;
	_T158 = yyss;
	_T159 = yyssp_offset;
	_T15A = _check_fat_subscript(_T158,sizeof(short),_T159);
	_T15B = (short *)_T15A;
	_T15C = *_T15B;
	_T15D = (int)_T15C;
	yystate = _T157 + _T15D;
	if (yystate < 0) { goto _TL64;
	}
	if (yystate > 100) { goto _TL64;
	}
	_T15E = Cyc_yycheck;
	_T15F = yystate;
	_T160 = _T15E[_T15F];
	_T161 = (int)_T160;
	_T162 = yyss;
	_T163 = _T162.curr;
	_T164 = (short *)_T163;
	_T165 = yyssp_offset;
	_T166 = _T164[_T165];
	_T167 = (int)_T166;
	if (_T161 != _T167) { goto _TL64;
	}
	_T168 = Cyc_yytable;
	_T169 = yystate;
	_T16A = _T168[_T169];
	yystate = (int)_T16A;
	goto _TL65;
	_TL64: _T16B = Cyc_yydefgoto;
	_T16C = yyn - 25;
	_T16D = _T16B[_T16C];
	yystate = (int)_T16D;
	_TL65: goto yynewstate;
	yyerrlab: if (yyerrstatus != 0) { goto _TL66;
	}
	Cyc_yynerrs = Cyc_yynerrs + 1;
	_T16E = _tag_fat("parse error",sizeof(char),12U);
	_T16F = yystate;
	_T170 = Cyc_yychar;
	Cyc_yyerror(_T16E,_T16F,_T170);
	goto _TL67;
	_TL66: _TL67: goto yyerrlab1;
	yyerrlab1: if (yyerrstatus != 3) { goto _TL68;
	}
	if (Cyc_yychar != 0) { goto _TL6A;
	}
	{ int _T18C = 1;
	  _npop_handler(0);
	  return _T18C;
	}_TL6A: Cyc_yychar = - 2;
	goto _TL69;
	_TL68: _TL69: yyerrstatus = 3;
	goto yyerrhandle;
	yyerrdefault: yyerrpop: if (yyssp_offset != 0) { goto _TL6C;
	}
	{ int _T18C = 1;
	  _npop_handler(0);
	  return _T18C;
	}_TL6C: yyvsp_offset = yyvsp_offset + -1;
	_T171 = yyss;
	yyssp_offset = yyssp_offset + -1;
	_T172 = yyssp_offset;
	_T173 = _check_fat_subscript(_T171,sizeof(short),_T172);
	_T174 = (short *)_T173;
	_T175 = *_T174;
	yystate = (int)_T175;
	yyerrhandle: _T176 = Cyc_yypact;
	_T177 = yystate;
	_T178 = _check_known_subscript_notnull(_T176,59U,sizeof(short),_T177);
	_T179 = (short *)_T178;
	_T17A = *_T179;
	yyn = (int)_T17A;
	_T17B = yyn;
	_T17C = - 32768;
	if (_T17B != _T17C) { goto _TL6E;
	}
	goto yyerrdefault;
	_TL6E: yyn = yyn + 1;
	if (yyn < 0) { goto _TL72;
	}else { goto _TL74;
	}
	_TL74: if (yyn > 100) { goto _TL72;
	}else { goto _TL73;
	}
	_TL73: _T17D = Cyc_yycheck;
	_T17E = yyn;
	_T17F = _T17D[_T17E];
	_T180 = (int)_T17F;
	if (_T180 != 1) { goto _TL72;
	}else { goto _TL70;
	}
	_TL72: goto yyerrdefault;
	_TL70: _T181 = Cyc_yytable;
	_T182 = yyn;
	_T183 = _T181[_T182];
	yyn = (int)_T183;
	if (yyn >= 0) { goto _TL75;
	}
	_T184 = yyn;
	_T185 = - 32768;
	if (_T184 != _T185) { goto _TL77;
	}
	goto yyerrpop;
	_TL77: yyn = - yyn;
	goto yyreduce;
	_TL75: if (yyn != 0) { goto _TL79;
	}
	goto yyerrpop;
	_TL79: if (yyn != 58) { goto _TL7B;
	}
	{ int _T18C = 0;
	  _npop_handler(0);
	  return _T18C;
	}_TL7B: _T186 = yyvs;
	yyvsp_offset = yyvsp_offset + 1;
	_T187 = yyvsp_offset;
	_T188 = _check_fat_subscript(_T186,sizeof(struct Cyc_Yystacktype),
				     _T187);
	_T189 = (struct Cyc_Yystacktype *)_T188;
	{ struct Cyc_Yystacktype _T18C;
	  _T18C.v = Cyc_yylval;
	  _T18A = _T18C;
	}*_T189 = _T18A;
	goto yynewstate;
      }
    }
  }_pop_region();
}
struct Cyc_Syntax_Lexer_definition * Cyc_Parser_parse_file(struct Cyc___cycFILE * f) {
  struct Cyc_Hashtable_Table * (* _T0)(int,int (*)(struct _fat_ptr *,struct _fat_ptr *),
				       int (*)(struct _fat_ptr *));
  struct Cyc_Hashtable_Table * (* _T1)(int,int (*)(void *,void *),int (*)(void *));
  int (* _T2)(struct _fat_ptr *,struct _fat_ptr *);
  int (* _T3)(struct _fat_ptr *);
  struct Cyc_Core_Opt * _T4;
  struct Cyc_Syntax_Lexer_definition * _T5;
  _T1 = Cyc_Hashtable_create;
  { struct Cyc_Hashtable_Table * (* _T6)(int,int (*)(struct _fat_ptr *,struct _fat_ptr *),
					 int (*)(struct _fat_ptr *)) = (struct Cyc_Hashtable_Table * (*)(int,
													 int (*)(struct _fat_ptr *,
														 struct _fat_ptr *),
													 int (*)(struct _fat_ptr *)))_T1;
    _T0 = _T6;
  }_T2 = Cyc_strptrcmp;
  _T3 = Cyc_Hashtable_hash_stringptr;
  Cyc_Parser_named_regexps = _T0(13,_T2,_T3);
  Cyc_Parser_parse_result = 0;
  { struct Cyc_Core_Opt * _T6 = _cycalloc(sizeof(struct Cyc_Core_Opt));
    _T6->v = Cyc_Lexing_from_file(f);
    _T4 = (struct Cyc_Core_Opt *)_T6;
  }Cyc_Parser_lbuf = _T4;
  Cyc_yyparse();
  _T5 = Cyc_Parser_parse_result;
  return _T5;
}
