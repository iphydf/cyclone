#include <cyc_include.h>
 struct Cyc_List_List {
  void * hd;
  struct Cyc_List_List * tl;
};
extern struct Cyc_List_List * Cyc_List_rev(struct Cyc_List_List *);
extern struct Cyc_List_List * Cyc_List_imp_rev(struct Cyc_List_List *);
extern struct _fat_ptr Cyc_List_to_array(struct Cyc_List_List *);
struct Cyc_Dict_T;
 struct Cyc_Dict_Dict {
  int (* rel)(void *,void *);
  struct _RegionHandle * r;
  const struct Cyc_Dict_T * t;
};
extern char Cyc_Dict_Absent[7U];
 struct Cyc_Dict_Absent_exn_struct {
  char * tag;
};
extern struct Cyc_Dict_Dict Cyc_Dict_empty(int (*)(void *,void *));
extern struct Cyc_Dict_Dict Cyc_Dict_insert(struct Cyc_Dict_Dict,void *,void *);
extern void * Cyc_Dict_lookup(struct Cyc_Dict_Dict,void *);
struct Cyc_Set_Set;
extern struct Cyc_Set_Set * Cyc_Set_empty(int (*)(void *,void *));
extern struct Cyc_Set_Set * Cyc_Set_insert(struct Cyc_Set_Set *,void *);
extern struct Cyc_Set_Set * Cyc_Set_union_two(struct Cyc_Set_Set *,struct Cyc_Set_Set *);
extern long Cyc_Set_is_empty(struct Cyc_Set_Set *);
extern int Cyc_Set_setcmp(struct Cyc_Set_Set *,struct Cyc_Set_Set *);
extern void * Cyc_Set_fold(void * (*)(void *,void *),struct Cyc_Set_Set *,
			   void *);
extern void Cyc_Set_iter_c(void (*)(void *,void *),void *,struct Cyc_Set_Set *);
 struct Cyc_Syntax_Location {
  int start_pos;
  int end_pos;
  int start_line;
  int start_col;
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
 struct _tuple0 {
  void * f0;
  struct Cyc_Syntax_Location * f1;
};
 struct _tuple1 {
  struct _fat_ptr f0;
  struct _fat_ptr f1;
};
 struct _tuple2 {
  struct _fat_ptr f0;
  struct _fat_ptr f1;
  struct _tuple1 * f2;
  struct Cyc_List_List * f3;
};
 struct Cyc_Syntax_Lexer_definition {
  struct Cyc_Syntax_Location * header;
  struct Cyc_List_List * entrypoints;
  struct Cyc_Syntax_Location * trailer;
};
 struct Cyc_Lexgen_No_remember_Lexgen_Automata_trans_struct {
  int tag;
  int f1;
};
 struct Cyc_Lexgen_Remember_Lexgen_Automata_trans_struct {
  int tag;
  int f1;
};
extern struct Cyc_Lexgen_No_remember_Lexgen_Automata_trans_struct Cyc_Lexgen_No_remember_val;
 struct Cyc_Lexgen_Backtrack_Lexgen_Automata_move_struct {
  int tag;
  int f1;
};
 struct Cyc_Lexgen_Goto_Lexgen_Automata_move_struct {
  int tag;
  int f1;
};
extern struct Cyc_Lexgen_Backtrack_Lexgen_Automata_move_struct Cyc_Lexgen_Backtrack_val;
 struct Cyc_Lexgen_Perform_Lexgen_Automata_struct {
  int tag;
  int f1;
};
 struct Cyc_Lexgen_Shift_Lexgen_Automata_struct {
  int tag;
  void * f1;
  struct _fat_ptr f2;
};
 struct Cyc_Lexgen_Automata_entry {
  struct _fat_ptr name;
  struct _fat_ptr type;
  struct _tuple1 * extra_arg;
  int initial_state;
  struct Cyc_List_List * actions;
};
struct Cyc_Lexgen_No_remember_Lexgen_Automata_trans_struct Cyc_Lexgen_No_remember_val = {0,
											 0};
struct Cyc_Lexgen_Backtrack_Lexgen_Automata_move_struct Cyc_Lexgen_Backtrack_val = {0,
										    0};
 struct Cyc_Lexgen_Empty_Lexgen_Regexp_struct {
  int tag;
  int f1;
};
 struct Cyc_Lexgen_Chars_Lexgen_Regexp_struct {
  int tag;
  int f1;
};
 struct Cyc_Lexgen_Action_Lexgen_Regexp_struct {
  int tag;
  int f1;
};
 struct Cyc_Lexgen_Seq_Lexgen_Regexp_struct {
  int tag;
  void * f1;
  void * f2;
};
 struct Cyc_Lexgen_Alt_Lexgen_Regexp_struct {
  int tag;
  void * f1;
  void * f2;
};
 struct Cyc_Lexgen_Star_Lexgen_Regexp_struct {
  int tag;
  void * f1;
};
struct Cyc_Lexgen_Empty_Lexgen_Regexp_struct Cyc_Lexgen_Empty_val = {0,0};
 struct Cyc_Lexgen_Lexer_entry {
  struct _fat_ptr name;
  struct _fat_ptr type;
  struct _tuple1 * extra_arg;
  void * regexp;
  struct Cyc_List_List * actions;
};
static struct Cyc_List_List * Cyc_Lexgen_chars = 0;
static int Cyc_Lexgen_chars_count = 0;
static struct Cyc_List_List * Cyc_Lexgen_actions = 0;
static int Cyc_Lexgen_actions_count = 0;
static void * Cyc_Lexgen_encode_regexp(void * r) {
  void * _T0;
  int * _T1;
  unsigned int _T2;
  struct Cyc_Lexgen_Empty_Lexgen_Regexp_struct * _T3;
  struct Cyc_Lexgen_Empty_Lexgen_Regexp_struct * _T4;
  void * _T5;
  void * _T6;
  struct Cyc_List_List * _T7;
  struct Cyc_Lexgen_Chars_Lexgen_Regexp_struct * _T8;
  int _T9;
  void * _TA;
  void * _TB;
  void * _TC;
  void * _TD;
  struct Cyc_Lexgen_Seq_Lexgen_Regexp_struct * _TE;
  void * _TF;
  void * _T10;
  void * _T11;
  void * _T12;
  struct Cyc_Lexgen_Alt_Lexgen_Regexp_struct * _T13;
  void * _T14;
  void * _T15;
  void * _T16;
  struct Cyc_Lexgen_Star_Lexgen_Regexp_struct * _T17;
  void * _T18;
  void * _T19;
  void * _T1A;
  _T0 = r;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  switch (_T2) {
  case 0: 
    _T3 = &Cyc_Lexgen_Empty_val;
    _T4 = (struct Cyc_Lexgen_Empty_Lexgen_Regexp_struct *)_T3;
    _T5 = (void *)_T4;
    return _T5;
  case 1: 
    _T6 = r;
    { struct Cyc_Syntax_Characters_Syntax_Regular_expression_struct * _T1B = (struct Cyc_Syntax_Characters_Syntax_Regular_expression_struct *)_T6;
      _T1A = _T1B->f1;
    }{ struct Cyc_List_List * cl = _T1A;
      { struct Cyc_List_List * _T1B = _cycalloc(sizeof(struct Cyc_List_List));
	_T1B->hd = cl;
	_T1B->tl = Cyc_Lexgen_chars;
	_T7 = (struct Cyc_List_List *)_T1B;
      }Cyc_Lexgen_chars = _T7;
      { struct Cyc_Lexgen_Chars_Lexgen_Regexp_struct * _T1B = _cycalloc(sizeof(struct Cyc_Lexgen_Chars_Lexgen_Regexp_struct));
	_T1B->tag = 1;
	_T9 = Cyc_Lexgen_chars_count;
	Cyc_Lexgen_chars_count = _T9 + 1;
	_T1B->f1 = _T9;
	_T8 = (struct Cyc_Lexgen_Chars_Lexgen_Regexp_struct *)_T1B;
      }_TA = (void *)_T8;
      return _TA;
    }
  case 2: 
    _TB = r;
    { struct Cyc_Syntax_Sequence_Syntax_Regular_expression_struct * _T1B = (struct Cyc_Syntax_Sequence_Syntax_Regular_expression_struct *)_TB;
      _TC = _T1B->f1;
      _T1A = (void *)_TC;
      _TD = _T1B->f2;
      _T19 = (void *)_TD;
    }{ void * r1 = _T1A;
      void * r2 = _T19;
      { struct Cyc_Lexgen_Seq_Lexgen_Regexp_struct * _T1B = _cycalloc(sizeof(struct Cyc_Lexgen_Seq_Lexgen_Regexp_struct));
	_T1B->tag = 3;
	_T1B->f1 = Cyc_Lexgen_encode_regexp(r1);
	_T1B->f2 = Cyc_Lexgen_encode_regexp(r2);
	_TE = (struct Cyc_Lexgen_Seq_Lexgen_Regexp_struct *)_T1B;
      }_TF = (void *)_TE;
      return _TF;
    }
  case 3: 
    _T10 = r;
    { struct Cyc_Syntax_Alternative_Syntax_Regular_expression_struct * _T1B = (struct Cyc_Syntax_Alternative_Syntax_Regular_expression_struct *)_T10;
      _T11 = _T1B->f1;
      _T1A = (void *)_T11;
      _T12 = _T1B->f2;
      _T19 = (void *)_T12;
    }{ void * r1 = _T1A;
      void * r2 = _T19;
      { struct Cyc_Lexgen_Alt_Lexgen_Regexp_struct * _T1B = _cycalloc(sizeof(struct Cyc_Lexgen_Alt_Lexgen_Regexp_struct));
	_T1B->tag = 4;
	_T1B->f1 = Cyc_Lexgen_encode_regexp(r1);
	_T1B->f2 = Cyc_Lexgen_encode_regexp(r2);
	_T13 = (struct Cyc_Lexgen_Alt_Lexgen_Regexp_struct *)_T1B;
      }_T14 = (void *)_T13;
      return _T14;
    }
  default: 
    _T15 = r;
    { struct Cyc_Syntax_Repetition_Syntax_Regular_expression_struct * _T1B = (struct Cyc_Syntax_Repetition_Syntax_Regular_expression_struct *)_T15;
      _T16 = _T1B->f1;
      _T1A = (void *)_T16;
    }{ void * r1 = _T1A;
      { struct Cyc_Lexgen_Star_Lexgen_Regexp_struct * _T1B = _cycalloc(sizeof(struct Cyc_Lexgen_Star_Lexgen_Regexp_struct));
	_T1B->tag = 5;
	_T1B->f1 = Cyc_Lexgen_encode_regexp(r1);
	_T17 = (struct Cyc_Lexgen_Star_Lexgen_Regexp_struct *)_T1B;
      }_T18 = (void *)_T17;
      return _T18;
    }
  }
  ;
}
 struct _tuple3 {
  int f0;
  struct Cyc_Syntax_Location * f1;
};
static void * Cyc_Lexgen_encode_casedef(struct Cyc_List_List * casedef) {
  struct Cyc_Lexgen_Empty_Lexgen_Regexp_struct * _T0;
  struct Cyc_Lexgen_Empty_Lexgen_Regexp_struct * _T1;
  struct Cyc_List_List * _T2;
  void * _T3;
  struct Cyc_List_List * _T4;
  struct _tuple3 * _T5;
  struct Cyc_Lexgen_Alt_Lexgen_Regexp_struct * _T6;
  struct Cyc_Lexgen_Seq_Lexgen_Regexp_struct * _T7;
  struct Cyc_Lexgen_Action_Lexgen_Regexp_struct * _T8;
  struct Cyc_List_List * _T9;
  void * _TA;
  _T0 = &Cyc_Lexgen_Empty_val;
  _T1 = (struct Cyc_Lexgen_Empty_Lexgen_Regexp_struct *)_T0;
  { void * ans = (void *)_T1;
    _TL4: if (casedef != 0) { goto _TL2;
    }else { goto _TL3;
    }
    _TL2: _T2 = casedef;
    _T3 = _T2->hd;
    { struct _tuple0 * _TB = (struct _tuple0 *)_T3;
      struct Cyc_Syntax_Location * _TC;
      void * _TD;
      { struct _tuple0 _TE = *_TB;
	_TD = _TE.f0;
	_TC = _TE.f1;
      }{ void * expr = _TD;
	struct Cyc_Syntax_Location * act = _TC;
	{ struct Cyc_List_List * _TE = _cycalloc(sizeof(struct Cyc_List_List));
	  { struct _tuple3 * _TF = _cycalloc(sizeof(struct _tuple3));
	    _TF->f0 = Cyc_Lexgen_actions_count;
	    _TF->f1 = act;
	    _T5 = (struct _tuple3 *)_TF;
	  }_TE->hd = _T5;
	  _TE->tl = Cyc_Lexgen_actions;
	  _T4 = (struct Cyc_List_List *)_TE;
	}Cyc_Lexgen_actions = _T4;
	{ struct Cyc_Lexgen_Alt_Lexgen_Regexp_struct * _TE = _cycalloc(sizeof(struct Cyc_Lexgen_Alt_Lexgen_Regexp_struct));
	  _TE->tag = 4;
	  _TE->f1 = ans;
	  { struct Cyc_Lexgen_Seq_Lexgen_Regexp_struct * _TF = _cycalloc(sizeof(struct Cyc_Lexgen_Seq_Lexgen_Regexp_struct));
	    _TF->tag = 3;
	    _TF->f1 = Cyc_Lexgen_encode_regexp(expr);
	    { struct Cyc_Lexgen_Action_Lexgen_Regexp_struct * _T10 = _cycalloc(sizeof(struct Cyc_Lexgen_Action_Lexgen_Regexp_struct));
	      _T10->tag = 2;
	      _T10->f1 = Cyc_Lexgen_actions_count;
	      _T8 = (struct Cyc_Lexgen_Action_Lexgen_Regexp_struct *)_T10;
	    }_TF->f2 = (void *)_T8;
	    _T7 = (struct Cyc_Lexgen_Seq_Lexgen_Regexp_struct *)_TF;
	  }_TE->f2 = (void *)_T7;
	  _T6 = (struct Cyc_Lexgen_Alt_Lexgen_Regexp_struct *)_TE;
	}ans = (void *)_T6;
	Cyc_Lexgen_actions_count = Cyc_Lexgen_actions_count + 1;
      }
    }_T9 = casedef;
    casedef = _T9->tl;
    goto _TL4;
    _TL3: _TA = ans;
    return _TA;
  }
}
 struct _tuple4 {
  struct _fat_ptr f0;
  struct Cyc_List_List * f1;
};
static struct _tuple4 * Cyc_Lexgen_encode_lexdef(struct Cyc_Syntax_Lexer_definition * def) {
  struct Cyc_Syntax_Lexer_definition * _T0;
  struct Cyc_List_List * _T1;
  void * _T2;
  struct Cyc_List_List * _T3;
  struct Cyc_Lexgen_Lexer_entry * _T4;
  struct Cyc_List_List * _T5;
  struct Cyc_List_List * _T6;
  struct _tuple4 * _T7;
  Cyc_Lexgen_chars = 0;
  Cyc_Lexgen_chars_count = 0;
  { struct Cyc_List_List * entry_list_rev = 0;
    _T0 = _check_null(def);
    { struct Cyc_List_List * entries = _T0->entrypoints;
      _TL8: if (entries != 0) { goto _TL6;
      }else { goto _TL7;
      }
      _TL6: _T1 = entries;
      _T2 = _T1->hd;
      { struct _tuple2 * _T8 = (struct _tuple2 *)_T2;
	struct Cyc_List_List * _T9;
	struct _tuple1 * _TA;
	struct _fat_ptr _TB;
	struct _fat_ptr _TC;
	{ struct _tuple2 _TD = *_T8;
	  _TC = _TD.f0;
	  _TB = _TD.f1;
	  _TA = _TD.f2;
	  _T9 = _TD.f3;
	}{ struct _fat_ptr entry_name = _TC;
	  struct _fat_ptr entry_type = _TB;
	  struct _tuple1 * entry_extra_arg = _TA;
	  struct Cyc_List_List * casedef = _T9;
	  Cyc_Lexgen_actions = 0;
	  Cyc_Lexgen_actions_count = 0;
	  { void * re = Cyc_Lexgen_encode_casedef(casedef);
	    { struct Cyc_List_List * _TD = _cycalloc(sizeof(struct Cyc_List_List));
	      { struct Cyc_Lexgen_Lexer_entry * _TE = _cycalloc(sizeof(struct Cyc_Lexgen_Lexer_entry));
		_TE->name = entry_name;
		_TE->type = entry_type;
		_TE->extra_arg = entry_extra_arg;
		_TE->regexp = re;
		_TE->actions = Cyc_List_rev(Cyc_Lexgen_actions);
		_T4 = (struct Cyc_Lexgen_Lexer_entry *)_TE;
	      }_TD->hd = _T4;
	      _TD->tl = entry_list_rev;
	      _T3 = (struct Cyc_List_List *)_TD;
	    }entry_list_rev = _T3;
	  }
	}
      }_T5 = entries;
      entries = _T5->tl;
      goto _TL8;
      _TL7: ;
    }_T6 = Cyc_List_rev(Cyc_Lexgen_chars);
    { struct _fat_ptr chr = Cyc_List_to_array(_T6);
      Cyc_Lexgen_chars = 0;
      Cyc_Lexgen_actions = 0;
      { struct _tuple4 * _T8 = _cycalloc(sizeof(struct _tuple4));
	_T8->f0 = chr;
	_T8->f1 = Cyc_List_imp_rev(entry_list_rev);
	_T7 = (struct _tuple4 *)_T8;
      }return _T7;
    }
  }
}
 struct Cyc_Lexgen_OnChars_Lexgen_transition_struct {
  int tag;
  int f1;
};
 struct Cyc_Lexgen_ToAction_Lexgen_transition_struct {
  int tag;
  int f1;
};
 struct _tuple5 {
  void * f0;
  void * f1;
};
static int Cyc_Lexgen_transition_cmp(void * t1,void * t2) {
  struct _tuple5 _T0;
  void * _T1;
  int * _T2;
  int _T3;
  void * _T4;
  int * _T5;
  int _T6;
  void * _T7;
  void * _T8;
  int _T9;
  void * _TA;
  int * _TB;
  int _TC;
  int _TD;
  void * _TE;
  void * _TF;
  int _T10;
  { struct _tuple5 _T11;
    _T11.f0 = t1;
    _T11.f1 = t2;
    _T0 = _T11;
  }{ struct _tuple5 _T11 = _T0;
    int _T12;
    int _T13;
    _T1 = _T11.f0;
    _T2 = (int *)_T1;
    _T3 = *_T2;
    if (_T3 != 0) { goto _TL9;
    }
    _T4 = _T11.f1;
    _T5 = (int *)_T4;
    _T6 = *_T5;
    if (_T6 != 1) { goto _TLB;
    }
    return 1;
    _TLB: _T7 = _T11.f0;
    { struct Cyc_Lexgen_OnChars_Lexgen_transition_struct * _T14 = (struct Cyc_Lexgen_OnChars_Lexgen_transition_struct *)_T7;
      _T13 = _T14->f1;
    }_T8 = _T11.f1;
    { struct Cyc_Lexgen_OnChars_Lexgen_transition_struct * _T14 = (struct Cyc_Lexgen_OnChars_Lexgen_transition_struct *)_T8;
      _T12 = _T14->f1;
    }{ int i1 = _T13;
      int i2 = _T12;
      _T9 = i1 - i2;
      return _T9;
    }_TL9: _TA = _T11.f1;
    _TB = (int *)_TA;
    _TC = *_TB;
    if (_TC != 0) { goto _TLD;
    }
    _TD = - 1;
    return _TD;
    _TLD: _TE = _T11.f0;
    { struct Cyc_Lexgen_ToAction_Lexgen_transition_struct * _T14 = (struct Cyc_Lexgen_ToAction_Lexgen_transition_struct *)_TE;
      _T13 = _T14->f1;
    }_TF = _T11.f1;
    { struct Cyc_Lexgen_ToAction_Lexgen_transition_struct * _T14 = (struct Cyc_Lexgen_ToAction_Lexgen_transition_struct *)_TF;
      _T12 = _T14->f1;
    }{ int i1 = _T13;
      int i2 = _T12;
      _T10 = i1 - i2;
      return _T10;
    };
  }
}
static long Cyc_Lexgen_nullable(void * r) {
  void * _T0;
  int * _T1;
  unsigned int _T2;
  void * _T3;
  void * _T4;
  void * _T5;
  int _T6;
  long _T7;
  void * _T8;
  void * _T9;
  void * _TA;
  int _TB;
  long _TC;
  void * _TD;
  void * _TE;
  _T0 = r;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  switch (_T2) {
  case 0: 
    return 1;
  case 1: 
    return 0;
  case 2: 
    return 0;
  case 3: 
    _T3 = r;
    { struct Cyc_Lexgen_Seq_Lexgen_Regexp_struct * _TF = (struct Cyc_Lexgen_Seq_Lexgen_Regexp_struct *)_T3;
      _T4 = _TF->f1;
      _TE = (void *)_T4;
      _T5 = _TF->f2;
      _TD = (void *)_T5;
    }{ void * r1 = _TE;
      void * r2 = _TD;
      _T7 = Cyc_Lexgen_nullable(r1);
      if (! _T7) { goto _TL10;
      }
      _T6 = Cyc_Lexgen_nullable(r2);
      goto _TL11;
      _TL10: _T6 = 0;
      _TL11: return _T6;
    }
  case 4: 
    _T8 = r;
    { struct Cyc_Lexgen_Alt_Lexgen_Regexp_struct * _TF = (struct Cyc_Lexgen_Alt_Lexgen_Regexp_struct *)_T8;
      _T9 = _TF->f1;
      _TE = (void *)_T9;
      _TA = _TF->f2;
      _TD = (void *)_TA;
    }{ void * r1 = _TE;
      void * r2 = _TD;
      _TC = Cyc_Lexgen_nullable(r1);
      if (! _TC) { goto _TL12;
      }
      _TB = 1;
      goto _TL13;
      _TL12: _TB = Cyc_Lexgen_nullable(r2);
      _TL13: return _TB;
    }
  default: 
    return 1;
  }
  ;
}
static struct Cyc_Set_Set * Cyc_Lexgen_firstpos(void * r) {
  void * _T0;
  int * _T1;
  unsigned int _T2;
  struct Cyc_Set_Set * _T3;
  void * _T4;
  struct Cyc_Set_Set * _T5;
  struct Cyc_Lexgen_OnChars_Lexgen_transition_struct * _T6;
  void * _T7;
  struct Cyc_Set_Set * _T8;
  void * _T9;
  struct Cyc_Set_Set * _TA;
  struct Cyc_Lexgen_ToAction_Lexgen_transition_struct * _TB;
  void * _TC;
  struct Cyc_Set_Set * _TD;
  void * _TE;
  void * _TF;
  void * _T10;
  long _T11;
  struct Cyc_Set_Set * _T12;
  struct Cyc_Set_Set * _T13;
  struct Cyc_Set_Set * _T14;
  struct Cyc_Set_Set * _T15;
  void * _T16;
  void * _T17;
  void * _T18;
  struct Cyc_Set_Set * _T19;
  struct Cyc_Set_Set * _T1A;
  struct Cyc_Set_Set * _T1B;
  void * _T1C;
  void * _T1D;
  struct Cyc_Set_Set * _T1E;
  void * _T1F;
  void * _T20;
  int _T21;
  _T0 = r;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  switch (_T2) {
  case 0: 
    _T3 = Cyc_Set_empty(Cyc_Lexgen_transition_cmp);
    return _T3;
  case 1: 
    _T4 = r;
    { struct Cyc_Lexgen_Chars_Lexgen_Regexp_struct * _T22 = (struct Cyc_Lexgen_Chars_Lexgen_Regexp_struct *)_T4;
      _T21 = _T22->f1;
    }{ int pos = _T21;
      _T5 = Cyc_Set_empty(Cyc_Lexgen_transition_cmp);
      { struct Cyc_Lexgen_OnChars_Lexgen_transition_struct * _T22 = _cycalloc(sizeof(struct Cyc_Lexgen_OnChars_Lexgen_transition_struct));
	_T22->tag = 0;
	_T22->f1 = pos;
	_T6 = (struct Cyc_Lexgen_OnChars_Lexgen_transition_struct *)_T22;
      }_T7 = (void *)_T6;
      _T8 = Cyc_Set_insert(_T5,_T7);
      return _T8;
    }
  case 2: 
    _T9 = r;
    { struct Cyc_Lexgen_Action_Lexgen_Regexp_struct * _T22 = (struct Cyc_Lexgen_Action_Lexgen_Regexp_struct *)_T9;
      _T21 = _T22->f1;
    }{ int act = _T21;
      _TA = Cyc_Set_empty(Cyc_Lexgen_transition_cmp);
      { struct Cyc_Lexgen_ToAction_Lexgen_transition_struct * _T22 = _cycalloc(sizeof(struct Cyc_Lexgen_ToAction_Lexgen_transition_struct));
	_T22->tag = 1;
	_T22->f1 = act;
	_TB = (struct Cyc_Lexgen_ToAction_Lexgen_transition_struct *)_T22;
      }_TC = (void *)_TB;
      _TD = Cyc_Set_insert(_TA,_TC);
      return _TD;
    }
  case 3: 
    _TE = r;
    { struct Cyc_Lexgen_Seq_Lexgen_Regexp_struct * _T22 = (struct Cyc_Lexgen_Seq_Lexgen_Regexp_struct *)_TE;
      _TF = _T22->f1;
      _T20 = (void *)_TF;
      _T10 = _T22->f2;
      _T1F = (void *)_T10;
    }{ void * r1 = _T20;
      void * r2 = _T1F;
      _T11 = Cyc_Lexgen_nullable(r1);
      if (! _T11) { goto _TL15;
      }
      _T12 = Cyc_Lexgen_firstpos(r1);
      _T13 = Cyc_Lexgen_firstpos(r2);
      _T14 = Cyc_Set_union_two(_T12,_T13);
      return _T14;
      _TL15: _T15 = Cyc_Lexgen_firstpos(r1);
      return _T15;
    }
  case 4: 
    _T16 = r;
    { struct Cyc_Lexgen_Alt_Lexgen_Regexp_struct * _T22 = (struct Cyc_Lexgen_Alt_Lexgen_Regexp_struct *)_T16;
      _T17 = _T22->f1;
      _T20 = (void *)_T17;
      _T18 = _T22->f2;
      _T1F = (void *)_T18;
    }{ void * r1 = _T20;
      void * r2 = _T1F;
      _T19 = Cyc_Lexgen_firstpos(r1);
      _T1A = Cyc_Lexgen_firstpos(r2);
      _T1B = Cyc_Set_union_two(_T19,_T1A);
      return _T1B;
    }
  default: 
    _T1C = r;
    { struct Cyc_Lexgen_Star_Lexgen_Regexp_struct * _T22 = (struct Cyc_Lexgen_Star_Lexgen_Regexp_struct *)_T1C;
      _T1D = _T22->f1;
      _T20 = (void *)_T1D;
    }{ void * r1 = _T20;
      _T1E = Cyc_Lexgen_firstpos(r1);
      return _T1E;
    }
  }
  ;
}
static struct Cyc_Set_Set * Cyc_Lexgen_lastpos(void * r) {
  void * _T0;
  int * _T1;
  unsigned int _T2;
  struct Cyc_Set_Set * _T3;
  void * _T4;
  struct Cyc_Set_Set * _T5;
  struct Cyc_Lexgen_OnChars_Lexgen_transition_struct * _T6;
  void * _T7;
  struct Cyc_Set_Set * _T8;
  void * _T9;
  struct Cyc_Set_Set * _TA;
  struct Cyc_Lexgen_ToAction_Lexgen_transition_struct * _TB;
  void * _TC;
  struct Cyc_Set_Set * _TD;
  void * _TE;
  void * _TF;
  void * _T10;
  long _T11;
  struct Cyc_Set_Set * _T12;
  struct Cyc_Set_Set * _T13;
  struct Cyc_Set_Set * _T14;
  struct Cyc_Set_Set * _T15;
  void * _T16;
  void * _T17;
  void * _T18;
  struct Cyc_Set_Set * _T19;
  struct Cyc_Set_Set * _T1A;
  struct Cyc_Set_Set * _T1B;
  void * _T1C;
  void * _T1D;
  struct Cyc_Set_Set * _T1E;
  void * _T1F;
  void * _T20;
  int _T21;
  _T0 = r;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  switch (_T2) {
  case 0: 
    _T3 = Cyc_Set_empty(Cyc_Lexgen_transition_cmp);
    return _T3;
  case 1: 
    _T4 = r;
    { struct Cyc_Lexgen_Chars_Lexgen_Regexp_struct * _T22 = (struct Cyc_Lexgen_Chars_Lexgen_Regexp_struct *)_T4;
      _T21 = _T22->f1;
    }{ int pos = _T21;
      _T5 = Cyc_Set_empty(Cyc_Lexgen_transition_cmp);
      { struct Cyc_Lexgen_OnChars_Lexgen_transition_struct * _T22 = _cycalloc(sizeof(struct Cyc_Lexgen_OnChars_Lexgen_transition_struct));
	_T22->tag = 0;
	_T22->f1 = pos;
	_T6 = (struct Cyc_Lexgen_OnChars_Lexgen_transition_struct *)_T22;
      }_T7 = (void *)_T6;
      _T8 = Cyc_Set_insert(_T5,_T7);
      return _T8;
    }
  case 2: 
    _T9 = r;
    { struct Cyc_Lexgen_Action_Lexgen_Regexp_struct * _T22 = (struct Cyc_Lexgen_Action_Lexgen_Regexp_struct *)_T9;
      _T21 = _T22->f1;
    }{ int act = _T21;
      _TA = Cyc_Set_empty(Cyc_Lexgen_transition_cmp);
      { struct Cyc_Lexgen_ToAction_Lexgen_transition_struct * _T22 = _cycalloc(sizeof(struct Cyc_Lexgen_ToAction_Lexgen_transition_struct));
	_T22->tag = 1;
	_T22->f1 = act;
	_TB = (struct Cyc_Lexgen_ToAction_Lexgen_transition_struct *)_T22;
      }_TC = (void *)_TB;
      _TD = Cyc_Set_insert(_TA,_TC);
      return _TD;
    }
  case 3: 
    _TE = r;
    { struct Cyc_Lexgen_Seq_Lexgen_Regexp_struct * _T22 = (struct Cyc_Lexgen_Seq_Lexgen_Regexp_struct *)_TE;
      _TF = _T22->f1;
      _T20 = (void *)_TF;
      _T10 = _T22->f2;
      _T1F = (void *)_T10;
    }{ void * r1 = _T20;
      void * r2 = _T1F;
      _T11 = Cyc_Lexgen_nullable(r2);
      if (! _T11) { goto _TL18;
      }
      _T12 = Cyc_Lexgen_lastpos(r1);
      _T13 = Cyc_Lexgen_lastpos(r2);
      _T14 = Cyc_Set_union_two(_T12,_T13);
      return _T14;
      _TL18: _T15 = Cyc_Lexgen_lastpos(r2);
      return _T15;
    }
  case 4: 
    _T16 = r;
    { struct Cyc_Lexgen_Alt_Lexgen_Regexp_struct * _T22 = (struct Cyc_Lexgen_Alt_Lexgen_Regexp_struct *)_T16;
      _T17 = _T22->f1;
      _T20 = (void *)_T17;
      _T18 = _T22->f2;
      _T1F = (void *)_T18;
    }{ void * r1 = _T20;
      void * r2 = _T1F;
      _T19 = Cyc_Lexgen_lastpos(r1);
      _T1A = Cyc_Lexgen_lastpos(r2);
      _T1B = Cyc_Set_union_two(_T19,_T1A);
      return _T1B;
    }
  default: 
    _T1C = r;
    { struct Cyc_Lexgen_Star_Lexgen_Regexp_struct * _T22 = (struct Cyc_Lexgen_Star_Lexgen_Regexp_struct *)_T1C;
      _T1D = _T22->f1;
      _T20 = (void *)_T1D;
    }{ void * r1 = _T20;
      _T1E = Cyc_Lexgen_lastpos(r1);
      return _T1E;
    }
  }
  ;
}
 struct _tuple6 {
  struct _fat_ptr f0;
  struct Cyc_Set_Set * f1;
};
static void Cyc_Lexgen_fill_pos(struct _tuple6 * env,void * t) {
  struct _tuple6 * _T0;
  void * _T1;
  int * _T2;
  int _T3;
  void * _T4;
  struct _fat_ptr _T5;
  unsigned char * _T6;
  struct Cyc_Set_Set * * _T7;
  int _T8;
  struct _fat_ptr _T9;
  int _TA;
  unsigned char * _TB;
  struct Cyc_Set_Set * * _TC;
  struct Cyc_Set_Set * _TD;
  struct Cyc_Set_Set * _TE;
  struct Cyc_Set_Set * _TF;
  struct _fat_ptr _T10;
  _T0 = env;
  { struct _tuple6 _T11 = *_T0;
    _T10 = _T11.f0;
    _TF = _T11.f1;
  }{ struct _fat_ptr v = _T10;
    struct Cyc_Set_Set * first = _TF;
    int _T11;
    _T1 = t;
    _T2 = (int *)_T1;
    _T3 = *_T2;
    if (_T3 != 0) { goto _TL1A;
    }
    _T4 = t;
    { struct Cyc_Lexgen_OnChars_Lexgen_transition_struct * _T12 = (struct Cyc_Lexgen_OnChars_Lexgen_transition_struct *)_T4;
      _T11 = _T12->f1;
    }{ int pos = _T11;
      _T5 = v;
      _T6 = _T5.curr;
      _T7 = (struct Cyc_Set_Set * *)_T6;
      _T8 = pos;
      _T9 = v;
      _TA = pos;
      _TB = _check_fat_subscript(_T9,sizeof(struct Cyc_Set_Set *),_TA);
      _TC = (struct Cyc_Set_Set * *)_TB;
      _TD = *_TC;
      _TE = first;
      _T7[_T8] = Cyc_Set_union_two(_TD,_TE);
      goto _LL3;
    }_TL1A: goto _LL3;
    _LL3: ;
  }
}
static void Cyc_Lexgen_fill_it(void * r,struct _fat_ptr v) {
  void * _T0;
  int * _T1;
  unsigned int _T2;
  void * _T3;
  void * _T4;
  void * _T5;
  void (* _T6)(void (*)(struct _tuple6 *,void *),struct _tuple6 *,struct Cyc_Set_Set *);
  void (* _T7)(void (*)(void *,void *),void *,struct Cyc_Set_Set *);
  struct _tuple6 * _T8;
  struct Cyc_Set_Set * _T9;
  void * _TA;
  void * _TB;
  void * _TC;
  void * _TD;
  void * _TE;
  void (* _TF)(void (*)(struct _tuple6 *,void *),struct _tuple6 *,struct Cyc_Set_Set *);
  void (* _T10)(void (*)(void *,void *),void *,struct Cyc_Set_Set *);
  struct _tuple6 * _T11;
  struct Cyc_Set_Set * _T12;
  void * _T13;
  void * _T14;
  _T0 = r;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  switch (_T2) {
  case 3: 
    _T3 = r;
    { struct Cyc_Lexgen_Seq_Lexgen_Regexp_struct * _T15 = (struct Cyc_Lexgen_Seq_Lexgen_Regexp_struct *)_T3;
      _T4 = _T15->f1;
      _T14 = (void *)_T4;
      _T5 = _T15->f2;
      _T13 = (void *)_T5;
    }{ void * r1 = _T14;
      void * r2 = _T13;
      Cyc_Lexgen_fill_it(r1,v);
      Cyc_Lexgen_fill_it(r2,v);
      _T7 = Cyc_Set_iter_c;
      { void (* _T15)(void (*)(struct _tuple6 *,void *),struct _tuple6 *,
		      struct Cyc_Set_Set *) = (void (*)(void (*)(struct _tuple6 *,
								 void *),
							struct _tuple6 *,
							struct Cyc_Set_Set *))_T7;
	_T6 = _T15;
      }{ struct _tuple6 * _T15 = _cycalloc(sizeof(struct _tuple6));
	_T15->f0 = v;
	_T15->f1 = Cyc_Lexgen_firstpos(r2);
	_T8 = (struct _tuple6 *)_T15;
      }_T9 = Cyc_Lexgen_lastpos(r1);
      _T6(Cyc_Lexgen_fill_pos,_T8,_T9);
      goto _LL0;
    }
  case 4: 
    _TA = r;
    { struct Cyc_Lexgen_Alt_Lexgen_Regexp_struct * _T15 = (struct Cyc_Lexgen_Alt_Lexgen_Regexp_struct *)_TA;
      _TB = _T15->f1;
      _T14 = (void *)_TB;
      _TC = _T15->f2;
      _T13 = (void *)_TC;
    }{ void * r1 = _T14;
      void * r2 = _T13;
      Cyc_Lexgen_fill_it(r1,v);
      Cyc_Lexgen_fill_it(r2,v);
      goto _LL0;
    }
  case 5: 
    _TD = r;
    { struct Cyc_Lexgen_Star_Lexgen_Regexp_struct * _T15 = (struct Cyc_Lexgen_Star_Lexgen_Regexp_struct *)_TD;
      _TE = _T15->f1;
      _T14 = (void *)_TE;
    }{ void * r1 = _T14;
      Cyc_Lexgen_fill_it(r1,v);
      _T10 = Cyc_Set_iter_c;
      { void (* _T15)(void (*)(struct _tuple6 *,void *),struct _tuple6 *,
		      struct Cyc_Set_Set *) = (void (*)(void (*)(struct _tuple6 *,
								 void *),
							struct _tuple6 *,
							struct Cyc_Set_Set *))_T10;
	_TF = _T15;
      }{ struct _tuple6 * _T15 = _cycalloc(sizeof(struct _tuple6));
	_T15->f0 = v;
	_T15->f1 = Cyc_Lexgen_firstpos(r1);
	_T11 = (struct _tuple6 *)_T15;
      }_T12 = Cyc_Lexgen_lastpos(r1);
      _TF(Cyc_Lexgen_fill_pos,_T11,_T12);
      goto _LL0;
    }
  default: 
    goto _LL0;
  }
  _LL0: ;
}
static struct _fat_ptr Cyc_Lexgen_followpos(int sz,struct Cyc_List_List * entry_list) {
  struct _fat_ptr _T0;
  int _T1;
  struct Cyc_Set_Set * * _T2;
  unsigned int _T3;
  unsigned int _T4;
  struct Cyc_List_List * _T5;
  void * _T6;
  struct Cyc_Lexgen_Lexer_entry * _T7;
  void * _T8;
  struct _fat_ptr _T9;
  struct Cyc_List_List * _TA;
  struct _fat_ptr _TB;
  _T1 = sz;
  { unsigned int _TC = (unsigned int)_T1;
    _T3 = _check_times(_TC,sizeof(struct Cyc_Set_Set *));
    { struct Cyc_Set_Set * * _TD = _cycalloc(_T3);
      { unsigned int _TE = _TC;
	unsigned int i;
	i = 0;
	_TL20: if (i < _TE) { goto _TL1E;
	}else { goto _TL1F;
	}
	_TL1E: _T4 = i;
	_TD[_T4] = Cyc_Set_empty(Cyc_Lexgen_transition_cmp);
	i = i + 1;
	goto _TL20;
	_TL1F: ;
      }_T2 = (struct Cyc_Set_Set * *)_TD;
    }_T0 = _tag_fat(_T2,sizeof(struct Cyc_Set_Set *),_TC);
  }{ struct _fat_ptr v = _T0;
    _TL24: if (entry_list != 0) { goto _TL22;
    }else { goto _TL23;
    }
    _TL22: _T5 = entry_list;
    _T6 = _T5->hd;
    _T7 = (struct Cyc_Lexgen_Lexer_entry *)_T6;
    _T8 = _T7->regexp;
    _T9 = v;
    Cyc_Lexgen_fill_it(_T8,_T9);
    _TA = entry_list;
    entry_list = _TA->tl;
    goto _TL24;
    _TL23: _TB = v;
    return _TB;
  }
}
 struct _tuple7 {
  int f0;
  struct Cyc_List_List * f1;
};
static struct _tuple7 * Cyc_Lexgen_split_trans(void * trans,struct _tuple7 * act_pos_set) {
  struct _tuple7 * _T0;
  void * _T1;
  int * _T2;
  int _T3;
  void * _T4;
  struct Cyc_List_List * _T5;
  int _T6;
  struct Cyc_List_List * _T7;
  struct _tuple7 * _T8;
  void * _T9;
  struct _tuple7 * _TA;
  struct _tuple7 * _TB;
  struct Cyc_List_List * _TC;
  int _TD;
  _T0 = act_pos_set;
  { struct _tuple7 _TE = *_T0;
    _TD = _TE.f0;
    _TC = _TE.f1;
  }{ int act = _TD;
    struct Cyc_List_List * pos_set = _TC;
    int _TE;
    _T1 = trans;
    _T2 = (int *)_T1;
    _T3 = *_T2;
    if (_T3 != 0) { goto _TL25;
    }
    _T4 = trans;
    { struct Cyc_Lexgen_OnChars_Lexgen_transition_struct * _TF = (struct Cyc_Lexgen_OnChars_Lexgen_transition_struct *)_T4;
      _TE = _TF->f1;
    }{ int pos = _TE;
      struct Cyc_List_List * l;
      l = _cycalloc(sizeof(struct Cyc_List_List));
      _T5 = l;
      _T6 = pos;
      _T5->hd = (void *)_T6;
      _T7 = l;
      _T7->tl = pos_set;
      { struct _tuple7 * _TF = _cycalloc(sizeof(struct _tuple7));
	_TF->f0 = act;
	_TF->f1 = l;
	_T8 = (struct _tuple7 *)_TF;
      }return _T8;
    }_TL25: _T9 = trans;
    { struct Cyc_Lexgen_ToAction_Lexgen_transition_struct * _TF = (struct Cyc_Lexgen_ToAction_Lexgen_transition_struct *)_T9;
      _TE = _TF->f1;
    }{ int act1 = _TE;
      if (act1 >= act) { goto _TL27;
      }
      { struct _tuple7 * _TF = _cycalloc(sizeof(struct _tuple7));
	_TF->f0 = act1;
	_TF->f1 = pos_set;
	_TB = (struct _tuple7 *)_TF;
      }_TA = _TB;
      goto _TL28;
      _TL27: _TA = act_pos_set;
      _TL28: return _TA;
    };
  }
}
static struct _tuple7 * Cyc_Lexgen_split_trans_set(struct Cyc_Set_Set * trans_set) {
  struct _tuple7 * (* _T0)(struct _tuple7 * (*)(void *,struct _tuple7 *),
			   struct Cyc_Set_Set *,struct _tuple7 *);
  void * (* _T1)(void * (*)(void *,void *),struct Cyc_Set_Set *,void *);
  struct Cyc_Set_Set * _T2;
  struct _tuple7 * _T3;
  struct _tuple7 * _T4;
  _T1 = Cyc_Set_fold;
  { struct _tuple7 * (* _T5)(struct _tuple7 * (*)(void *,struct _tuple7 *),
			     struct Cyc_Set_Set *,struct _tuple7 *) = (struct _tuple7 * (*)(struct _tuple7 * (*)(void *,
														 struct _tuple7 *),
											    struct Cyc_Set_Set *,
											    struct _tuple7 *))_T1;
    _T0 = _T5;
  }_T2 = trans_set;
  { struct _tuple7 * _T5 = _cycalloc(sizeof(struct _tuple7));
    _T5->f0 = 536870912;
    _T5->f1 = 0;
    _T3 = (struct _tuple7 *)_T5;
  }_T4 = _T0(Cyc_Lexgen_split_trans,_T2,_T3);
  return _T4;
}
static struct Cyc_Dict_Dict * Cyc_Lexgen_state_map = 0;
static struct Cyc_List_List * Cyc_Lexgen_todo = 0;
static int Cyc_Lexgen_next_state_num = 0;
static void Cyc_Lexgen_reset_state_mem() {
  struct Cyc_Dict_Dict * _T0;
  struct Cyc_Dict_Dict (* _T1)(int (*)(struct Cyc_Set_Set *,struct Cyc_Set_Set *));
  struct Cyc_Dict_Dict (* _T2)(int (*)(void *,void *));
  int (* _T3)(struct Cyc_Set_Set *,struct Cyc_Set_Set *);
  { struct Cyc_Dict_Dict * _T4 = _cycalloc(sizeof(struct Cyc_Dict_Dict));
    _T2 = Cyc_Dict_empty;
    { struct Cyc_Dict_Dict (* _T5)(int (*)(struct Cyc_Set_Set *,struct Cyc_Set_Set *)) = (struct Cyc_Dict_Dict (*)(int (*)(struct Cyc_Set_Set *,
															   struct Cyc_Set_Set *)))_T2;
      _T1 = _T5;
    }_T3 = Cyc_Set_setcmp;
    *_T4 = _T1(_T3);
    _T0 = (struct Cyc_Dict_Dict *)_T4;
  }Cyc_Lexgen_state_map = _T0;
  Cyc_Lexgen_todo = 0;
  Cyc_Lexgen_next_state_num = 0;
}
 struct _tuple8 {
  struct Cyc_Set_Set * f0;
  int f1;
};
static int Cyc_Lexgen_get_state(struct Cyc_Set_Set * st) {
  struct _handler_cons * _T0;
  int _T1;
  int (* _T2)(struct Cyc_Dict_Dict,struct Cyc_Set_Set *);
  void * (* _T3)(struct Cyc_Dict_Dict,void *);
  struct Cyc_Dict_Dict * _T4;
  struct Cyc_Dict_Dict _T5;
  struct Cyc_Set_Set * _T6;
  void * _T7;
  struct Cyc_Dict_Absent_exn_struct * _T8;
  char * _T9;
  char * _TA;
  struct Cyc_Dict_Dict * _TB;
  struct Cyc_Dict_Dict (* _TC)(struct Cyc_Dict_Dict,struct Cyc_Set_Set *,
			       int);
  struct Cyc_Dict_Dict (* _TD)(struct Cyc_Dict_Dict,void *,void *);
  struct Cyc_Dict_Dict * _TE;
  struct Cyc_Dict_Dict _TF;
  struct Cyc_Set_Set * _T10;
  int _T11;
  struct Cyc_List_List * _T12;
  struct _tuple8 * _T13;
  int _T14;
  int _T15;
  struct _handler_cons _T16;
  _T0 = &_T16;
  _push_handler(_T0);
  { int _T17 = 0;
    _T1 = setjmp(_T16.handler);
    if (! _T1) { goto _TL29;
    }
    _T17 = 1;
    goto _TL2A;
    _TL29: _TL2A: if (_T17) { goto _TL2B;
    }else { goto _TL2D;
    }
    _TL2D: _T3 = Cyc_Dict_lookup;
    { int (* _T18)(struct Cyc_Dict_Dict,struct Cyc_Set_Set *) = (int (*)(struct Cyc_Dict_Dict,
									 struct Cyc_Set_Set *))_T3;
      _T2 = _T18;
    }_T4 = _check_null(Cyc_Lexgen_state_map);
    _T5 = *_T4;
    _T6 = st;
    { int _T18 = _T2(_T5,_T6);
      _npop_handler(0);
      return _T18;
    }_pop_handler();
    goto _TL2C;
    _TL2B: _T7 = Cyc_Core_get_exn_thrown();
    { void * _T18 = (void *)_T7;
      void * _T19;
      _T8 = (struct Cyc_Dict_Absent_exn_struct *)_T18;
      _T9 = _T8->tag;
      _TA = Cyc_Dict_Absent;
      if (_T9 != _TA) { goto _TL2E;
      }
      _TB = Cyc_Lexgen_state_map;
      _TD = Cyc_Dict_insert;
      { struct Cyc_Dict_Dict (* _T1A)(struct Cyc_Dict_Dict,struct Cyc_Set_Set *,
				      int) = (struct Cyc_Dict_Dict (*)(struct Cyc_Dict_Dict,
								       struct Cyc_Set_Set *,
								       int))_TD;
	_TC = _T1A;
      }_TE = _check_null(Cyc_Lexgen_state_map);
      _TF = *_TE;
      _T10 = st;
      _T11 = Cyc_Lexgen_next_state_num;
      *_TB = _TC(_TF,_T10,_T11);
      { struct Cyc_List_List * _T1A = _cycalloc(sizeof(struct Cyc_List_List));
	{ struct _tuple8 * _T1B = _cycalloc(sizeof(struct _tuple8));
	  _T1B->f0 = st;
	  _T1B->f1 = Cyc_Lexgen_next_state_num;
	  _T13 = (struct _tuple8 *)_T1B;
	}_T1A->hd = _T13;
	_T1A->tl = Cyc_Lexgen_todo;
	_T12 = (struct Cyc_List_List *)_T1A;
      }Cyc_Lexgen_todo = _T12;
      _T14 = Cyc_Lexgen_next_state_num;
      Cyc_Lexgen_next_state_num = _T14 + 1;
      _T15 = _T14;
      return _T15;
      _TL2E: _T19 = _T18;
      { void * exn = _T19;
	_rethrow(exn);
      };
    }_TL2C: ;
  }
}
static void * Cyc_Lexgen_goto_state(struct Cyc_Set_Set * st) {
  long _T0;
  struct Cyc_Lexgen_Backtrack_Lexgen_Automata_move_struct * _T1;
  struct Cyc_Lexgen_Backtrack_Lexgen_Automata_move_struct * _T2;
  void * _T3;
  struct Cyc_Lexgen_Goto_Lexgen_Automata_move_struct * _T4;
  void * _T5;
  _T0 = Cyc_Set_is_empty(st);
  if (! _T0) { goto _TL30;
  }
  _T1 = &Cyc_Lexgen_Backtrack_val;
  _T2 = (struct Cyc_Lexgen_Backtrack_Lexgen_Automata_move_struct *)_T1;
  _T3 = (void *)_T2;
  return _T3;
  _TL30: { struct Cyc_Lexgen_Goto_Lexgen_Automata_move_struct * _T6 = _cycalloc(sizeof(struct Cyc_Lexgen_Goto_Lexgen_Automata_move_struct));
    _T6->tag = 1;
    _T6->f1 = Cyc_Lexgen_get_state(st);
    _T4 = (struct Cyc_Lexgen_Goto_Lexgen_Automata_move_struct *)_T6;
  }_T5 = (void *)_T4;
  return _T5;
}
static struct _fat_ptr Cyc_Lexgen_transition_from(struct _fat_ptr chars,struct _fat_ptr follow,
						  struct Cyc_List_List * pos_set) {
  struct Cyc_Set_Set * * _T0;
  struct Cyc_Set_Set * * _T1;
  unsigned int _T2;
  unsigned int _T3;
  void * * _T4;
  void * * _T5;
  unsigned int _T6;
  unsigned int _T7;
  struct Cyc_Lexgen_Backtrack_Lexgen_Automata_move_struct * _T8;
  struct Cyc_Lexgen_Backtrack_Lexgen_Automata_move_struct * _T9;
  struct Cyc_List_List * _TA;
  void * _TB;
  struct _fat_ptr _TC;
  int _TD;
  unsigned char * _TE;
  struct Cyc_List_List * * _TF;
  struct Cyc_List_List * _T10;
  void * _T11;
  struct _fat_ptr _T12;
  unsigned char * _T13;
  struct Cyc_Set_Set * * _T14;
  int _T15;
  struct _fat_ptr _T16;
  int _T17;
  unsigned char * _T18;
  struct Cyc_Set_Set * * _T19;
  struct Cyc_Set_Set * _T1A;
  struct _fat_ptr _T1B;
  int _T1C;
  unsigned char * _T1D;
  struct Cyc_Set_Set * * _T1E;
  struct Cyc_Set_Set * _T1F;
  struct Cyc_List_List * _T20;
  struct Cyc_List_List * _T21;
  struct _fat_ptr _T22;
  unsigned char * _T23;
  void * * _T24;
  int _T25;
  struct _fat_ptr _T26;
  unsigned char * _T27;
  struct Cyc_Set_Set * * _T28;
  int _T29;
  struct Cyc_Set_Set * _T2A;
  struct _fat_ptr _T2B;
  { unsigned int _T2C = 257U;
    _T2 = _check_times(_T2C,sizeof(struct Cyc_Set_Set *));
    { struct Cyc_Set_Set * * _T2D = _cycalloc(_T2);
      { unsigned int _T2E = _T2C;
	unsigned int i;
	i = 0;
	_TL35: if (i < _T2E) { goto _TL33;
	}else { goto _TL34;
	}
	_TL33: _T3 = i;
	_T2D[_T3] = Cyc_Set_empty(Cyc_Lexgen_transition_cmp);
	i = i + 1;
	goto _TL35;
	_TL34: ;
      }_T1 = (struct Cyc_Set_Set * *)_T2D;
    }_T0 = _T1;
  }{ struct _fat_ptr tr = _tag_fat(_T0,sizeof(struct Cyc_Set_Set *),257U);
    { unsigned int _T2C = 257U;
      _T6 = _check_times(_T2C,sizeof(void *));
      { void * * _T2D = _cycalloc(_T6);
	{ unsigned int _T2E = _T2C;
	  unsigned int i;
	  i = 0;
	  _TL39: if (i < _T2E) { goto _TL37;
	  }else { goto _TL38;
	  }
	  _TL37: _T7 = i;
	  _T8 = &Cyc_Lexgen_Backtrack_val;
	  _T9 = (struct Cyc_Lexgen_Backtrack_Lexgen_Automata_move_struct *)_T8;
	  _T2D[_T7] = (void *)_T9;
	  i = i + 1;
	  goto _TL39;
	  _TL38: ;
	}_T5 = (void * *)_T2D;
      }_T4 = _T5;
    }{ struct _fat_ptr shift = _tag_fat(_T4,sizeof(void *),257U);
      _TL3D: if (pos_set != 0) { goto _TL3B;
      }else { goto _TL3C;
      }
      _TL3B: _TA = pos_set;
      _TB = _TA->hd;
      { int pos = (int)_TB;
	_TC = chars;
	_TD = pos;
	_TE = _check_fat_subscript(_TC,sizeof(struct Cyc_List_List *),_TD);
	_TF = (struct Cyc_List_List * *)_TE;
	{ struct Cyc_List_List * cs_pos = *_TF;
	  _TL41: if (cs_pos != 0) { goto _TL3F;
	  }else { goto _TL40;
	  }
	  _TL3F: _T10 = cs_pos;
	  _T11 = _T10->hd;
	  { int c = (int)_T11;
	    _T12 = tr;
	    _T13 = _T12.curr;
	    _T14 = (struct Cyc_Set_Set * *)_T13;
	    _T15 = c;
	    _T16 = tr;
	    _T17 = c;
	    _T18 = _check_fat_subscript(_T16,sizeof(struct Cyc_Set_Set *),
					_T17);
	    _T19 = (struct Cyc_Set_Set * *)_T18;
	    _T1A = *_T19;
	    _T1B = follow;
	    _T1C = pos;
	    _T1D = _check_fat_subscript(_T1B,sizeof(struct Cyc_Set_Set *),
					_T1C);
	    _T1E = (struct Cyc_Set_Set * *)_T1D;
	    _T1F = *_T1E;
	    _T14[_T15] = Cyc_Set_union_two(_T1A,_T1F);
	  }_T20 = cs_pos;
	  cs_pos = _T20->tl;
	  goto _TL41;
	  _TL40: ;
	}
      }_T21 = pos_set;
      pos_set = _T21->tl;
      goto _TL3D;
      _TL3C: { int i = 0;
	_TL45: if (i <= 256) { goto _TL43;
	}else { goto _TL44;
	}
	_TL43: _T22 = shift;
	_T23 = _T22.curr;
	_T24 = (void * *)_T23;
	_T25 = i;
	_T26 = tr;
	_T27 = _T26.curr;
	_T28 = (struct Cyc_Set_Set * *)_T27;
	_T29 = i;
	_T2A = _T28[_T29];
	_T24[_T25] = Cyc_Lexgen_goto_state(_T2A);
	i = i + 1;
	goto _TL45;
	_TL44: ;
      }_T2B = shift;
      return _T2B;
    }
  }
}
static void * Cyc_Lexgen_translate_state(struct _fat_ptr chars,struct _fat_ptr follow,
					 struct Cyc_Set_Set * state) {
  struct _tuple7 * _T0;
  struct Cyc_List_List * _T1;
  struct Cyc_Lexgen_Perform_Lexgen_Automata_struct * _T2;
  void * _T3;
  struct Cyc_Lexgen_Shift_Lexgen_Automata_struct * _T4;
  int _T5;
  unsigned int _T6;
  unsigned int _T7;
  struct Cyc_Lexgen_No_remember_Lexgen_Automata_trans_struct * _T8;
  struct Cyc_Lexgen_No_remember_Lexgen_Automata_trans_struct * _T9;
  struct Cyc_Lexgen_Remember_Lexgen_Automata_trans_struct * _TA;
  void * _TB;
  struct _tuple7 * _TC = Cyc_Lexgen_split_trans_set(state);
  struct Cyc_List_List * _TD;
  int _TE;
  _T0 = (struct _tuple7 *)_TC;
  _T1 = _T0->f1;
  if (_T1 != 0) { goto _TL46;
  }
  { struct _tuple7 _TF = *_TC;
    _TE = _TF.f0;
  }{ int n = _TE;
    { struct Cyc_Lexgen_Perform_Lexgen_Automata_struct * _TF = _cycalloc(sizeof(struct Cyc_Lexgen_Perform_Lexgen_Automata_struct));
      _TF->tag = 0;
      _TF->f1 = n;
      _T2 = (struct Cyc_Lexgen_Perform_Lexgen_Automata_struct *)_TF;
    }_T3 = (void *)_T2;
    return _T3;
  }_TL46: { struct _tuple7 _TF = *_TC;
    _TE = _TF.f0;
    _TD = _TF.f1;
  }{ int n = _TE;
    struct Cyc_List_List * ps = _TD;
    { struct Cyc_Lexgen_Shift_Lexgen_Automata_struct * _TF = _cycalloc(sizeof(struct Cyc_Lexgen_Shift_Lexgen_Automata_struct));
      _TF->tag = 1;
      _T5 = n;
      _T6 = (unsigned int)_T5;
      _T7 = 1U << 29;
      if (_T6 != _T7) { goto _TL48;
      }
      _T8 = &Cyc_Lexgen_No_remember_val;
      _T9 = (struct Cyc_Lexgen_No_remember_Lexgen_Automata_trans_struct *)_T8;
      _TF->f1 = (void *)_T9;
      goto _TL49;
      _TL48: { struct Cyc_Lexgen_Remember_Lexgen_Automata_trans_struct * _T10 = _cycalloc(sizeof(struct Cyc_Lexgen_Remember_Lexgen_Automata_trans_struct));
	_T10->tag = 1;
	_T10->f1 = n;
	_TA = (struct Cyc_Lexgen_Remember_Lexgen_Automata_trans_struct *)_T10;
      }_TF->f1 = (void *)_TA;
      _TL49: _TF->f2 = Cyc_Lexgen_transition_from(chars,follow,ps);
      _T4 = (struct Cyc_Lexgen_Shift_Lexgen_Automata_struct *)_TF;
    }_TB = (void *)_T4;
    return _TB;
  };
}
 struct _tuple9 {
  struct Cyc_List_List * f0;
  struct _fat_ptr f1;
};
 struct _tuple10 {
  void * f0;
  int f1;
};
struct _tuple9 * Cyc_Lexgen_make_dfa(struct Cyc_Syntax_Lexer_definition * lexdef) {
  struct _fat_ptr _T0;
  unsigned int _T1;
  int _T2;
  struct Cyc_List_List * _T3;
  struct Cyc_List_List * _T4;
  void * _T5;
  struct Cyc_List_List * _T6;
  struct Cyc_Lexgen_Automata_entry * _T7;
  struct Cyc_Lexgen_Lexer_entry * _T8;
  struct Cyc_Lexgen_Lexer_entry * _T9;
  struct Cyc_Lexgen_Lexer_entry * _TA;
  struct Cyc_Lexgen_Lexer_entry * _TB;
  void * _TC;
  struct Cyc_Set_Set * _TD;
  struct Cyc_Lexgen_Lexer_entry * _TE;
  struct Cyc_List_List * _TF;
  struct Cyc_List_List * _T10;
  void * _T11;
  struct Cyc_List_List * _T12;
  struct Cyc_List_List * _T13;
  struct _tuple10 * _T14;
  struct _fat_ptr _T15;
  int _T16;
  void * * _T17;
  unsigned int _T18;
  unsigned int _T19;
  struct Cyc_Lexgen_Perform_Lexgen_Automata_struct * _T1A;
  struct Cyc_List_List * _T1B;
  void * _T1C;
  struct _fat_ptr _T1D;
  int _T1E;
  unsigned char * _T1F;
  void * * _T20;
  struct Cyc_List_List * _T21;
  struct _tuple9 * _T22;
  struct _tuple4 * _T23 = Cyc_Lexgen_encode_lexdef(lexdef);
  struct Cyc_List_List * _T24;
  struct _fat_ptr _T25;
  { struct _tuple4 _T26 = *_T23;
    _T25 = _T26.f0;
    _T24 = _T26.f1;
  }{ struct _fat_ptr chars = _T25;
    struct Cyc_List_List * entry_list = _T24;
    _T0 = chars;
    _T1 = _get_fat_size(_T0,sizeof(struct Cyc_List_List *));
    _T2 = (int)_T1;
    _T3 = entry_list;
    { struct _fat_ptr follow = Cyc_Lexgen_followpos(_T2,_T3);
      Cyc_Lexgen_reset_state_mem();
      { struct Cyc_List_List * initial_states = 0;
	_TL4D: if (entry_list != 0) { goto _TL4B;
	}else { goto _TL4C;
	}
	_TL4B: _T4 = entry_list;
	_T5 = _T4->hd;
	{ struct Cyc_Lexgen_Lexer_entry * le = (struct Cyc_Lexgen_Lexer_entry *)_T5;
	  { struct Cyc_List_List * _T26 = _cycalloc(sizeof(struct Cyc_List_List));
	    { struct Cyc_Lexgen_Automata_entry * _T27 = _cycalloc(sizeof(struct Cyc_Lexgen_Automata_entry));
	      _T8 = le;
	      _T27->name = _T8->name;
	      _T9 = le;
	      _T27->type = _T9->type;
	      _TA = le;
	      _T27->extra_arg = _TA->extra_arg;
	      _TB = le;
	      _TC = _TB->regexp;
	      _TD = Cyc_Lexgen_firstpos(_TC);
	      _T27->initial_state = Cyc_Lexgen_get_state(_TD);
	      _TE = le;
	      _T27->actions = _TE->actions;
	      _T7 = (struct Cyc_Lexgen_Automata_entry *)_T27;
	    }_T26->hd = _T7;
	    _T26->tl = initial_states;
	    _T6 = (struct Cyc_List_List *)_T26;
	  }initial_states = _T6;
	}_TF = entry_list;
	entry_list = _TF->tl;
	goto _TL4D;
	_TL4C: initial_states = Cyc_List_imp_rev(initial_states);
	{ struct Cyc_List_List * states = 0;
	  _TL4E: if (Cyc_Lexgen_todo != 0) { goto _TL4F;
	  }else { goto _TL50;
	  }
	  _TL4F: _T10 = Cyc_Lexgen_todo;
	  _T11 = _T10->hd;
	  { struct _tuple8 * _T26 = (struct _tuple8 *)_T11;
	    int _T27;
	    struct Cyc_Set_Set * _T28;
	    { struct _tuple8 _T29 = *_T26;
	      _T28 = _T29.f0;
	      _T27 = _T29.f1;
	    }{ struct Cyc_Set_Set * st = _T28;
	      int i = _T27;
	      _T12 = Cyc_Lexgen_todo;
	      Cyc_Lexgen_todo = _T12->tl;
	      { struct Cyc_List_List * _T29 = _cycalloc(sizeof(struct Cyc_List_List));
		{ struct _tuple10 * _T2A = _cycalloc(sizeof(struct _tuple10));
		  _T2A->f0 = Cyc_Lexgen_translate_state(chars,follow,st);
		  _T2A->f1 = i;
		  _T14 = (struct _tuple10 *)_T2A;
		}_T29->hd = _T14;
		_T29->tl = states;
		_T13 = (struct Cyc_List_List *)_T29;
	      }states = _T13;
	    }
	  }goto _TL4E;
	  _TL50: states = Cyc_List_imp_rev(states);
	  _T16 = Cyc_Lexgen_next_state_num;
	  { unsigned int _T26 = (unsigned int)_T16;
	    _T18 = _check_times(_T26,sizeof(void *));
	    { void * * _T27 = _cycalloc(_T18);
	      { unsigned int _T28 = _T26;
		unsigned int i;
		i = 0;
		_TL54: if (i < _T28) { goto _TL52;
		}else { goto _TL53;
		}
		_TL52: _T19 = i;
		{ struct Cyc_Lexgen_Perform_Lexgen_Automata_struct * _T29 = _cycalloc(sizeof(struct Cyc_Lexgen_Perform_Lexgen_Automata_struct));
		  _T29->tag = 0;
		  _T29->f1 = 0;
		  _T1A = (struct Cyc_Lexgen_Perform_Lexgen_Automata_struct *)_T29;
		}_T27[_T19] = (void *)_T1A;
		i = i + 1;
		goto _TL54;
		_TL53: ;
	      }_T17 = (void * *)_T27;
	    }_T15 = _tag_fat(_T17,sizeof(void *),_T26);
	  }{ struct _fat_ptr actions = _T15;
	    _TL58: if (states != 0) { goto _TL56;
	    }else { goto _TL57;
	    }
	    _TL56: _T1B = states;
	    _T1C = _T1B->hd;
	    { struct _tuple10 * _T26 = (struct _tuple10 *)_T1C;
	      int _T27;
	      void * _T28;
	      { struct _tuple10 _T29 = *_T26;
		_T28 = _T29.f0;
		_T27 = _T29.f1;
	      }{ void * act = _T28;
		int i = _T27;
		_T1D = actions;
		_T1E = i;
		_T1F = _check_fat_subscript(_T1D,sizeof(void *),_T1E);
		_T20 = (void * *)_T1F;
		*_T20 = act;
	      }
	    }_T21 = states;
	    states = _T21->tl;
	    goto _TL58;
	    _TL57: Cyc_Lexgen_reset_state_mem();
	    { struct _tuple9 * _T26 = _cycalloc(sizeof(struct _tuple9));
	      _T26->f0 = initial_states;
	      _T26->f1 = actions;
	      _T22 = (struct _tuple9 *)_T26;
	    }return _T22;
	  }
	}
      }
    }
  }
}
