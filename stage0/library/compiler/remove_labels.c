#include <cyc_include.h>
 struct Cyc_Core_Opt {
  void * v;
};
 struct Cyc_List_List {
  void * hd;
  struct Cyc_List_List * tl;
};
extern int Cyc_strptrcmp(struct _fat_ptr *,struct _fat_ptr *);
struct Cyc_AssnDef_ExistAssnFn;
 struct _union_Nmspace_Abs_n {
  int tag;
  struct Cyc_List_List * val;
};
 struct _union_Nmspace_Rel_n {
  int tag;
  struct Cyc_List_List * val;
};
 struct _union_Nmspace_C_n {
  int tag;
  struct Cyc_List_List * val;
};
 struct _union_Nmspace_Loc_n {
  int tag;
  int val;
};
 union Cyc_Absyn_Nmspace {
  struct _union_Nmspace_Abs_n Abs_n;
  struct _union_Nmspace_Rel_n Rel_n;
  struct _union_Nmspace_C_n C_n;
  struct _union_Nmspace_Loc_n Loc_n;
};
 struct _tuple0 {
  union Cyc_Absyn_Nmspace f0;
  struct _fat_ptr * f1;
};
enum Cyc_Absyn_Scope {
  Cyc_Absyn_Static = 0U,
  Cyc_Absyn_Abstract = 1U,
  Cyc_Absyn_Public = 2U,
  Cyc_Absyn_Extern = 3U,
  Cyc_Absyn_ExternC = 4U,
  Cyc_Absyn_Register = 5U
};
 struct Cyc_Absyn_Tqual {
  long print_const:1;
  long q_volatile:1;
  long q_restrict:1;
  long real_const:1;
  unsigned int loc;
};
 struct Cyc_Absyn_VarargInfo {
  struct _fat_ptr * name;
  struct Cyc_Absyn_Tqual tq;
  void * type;
  long inject;
};
 struct Cyc_Absyn_FnInfo {
  struct Cyc_List_List * tvars;
  void * effect;
  struct Cyc_Absyn_Tqual ret_tqual;
  void * ret_type;
  struct Cyc_List_List * args;
  long c_varargs;
  struct Cyc_Absyn_VarargInfo * cyc_varargs;
  struct Cyc_List_List * qual_bnd;
  struct Cyc_List_List * attributes;
  struct Cyc_Absyn_Exp * checks_clause;
  struct Cyc_AssnDef_ExistAssnFn * checks_assn;
  struct Cyc_Absyn_Exp * requires_clause;
  struct Cyc_AssnDef_ExistAssnFn * requires_assn;
  struct Cyc_Absyn_Exp * ensures_clause;
  struct Cyc_AssnDef_ExistAssnFn * ensures_assn;
  struct Cyc_Absyn_Exp * throws_clause;
  struct Cyc_AssnDef_ExistAssnFn * throws_assn;
  struct Cyc_Absyn_Vardecl * return_value;
  struct Cyc_List_List * arg_vardecls;
  struct Cyc_List_List * effconstr;
};
 struct Cyc_Absyn_Exp {
  void * topt;
  void * r;
  unsigned int loc;
  void * annot;
};
 struct Cyc_Absyn_Goto_s_Absyn_Raw_stmt_struct {
  int tag;
  struct _fat_ptr * f1;
};
 struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct {
  int tag;
  struct _fat_ptr * f1;
  struct Cyc_Absyn_Stmt * f2;
};
 struct Cyc_Absyn_Stmt {
  void * r;
  unsigned int loc;
  void * annot;
};
 struct Cyc_Absyn_Vardecl {
  enum Cyc_Absyn_Scope sc;
  struct _tuple0 * name;
  unsigned int varloc;
  struct Cyc_Absyn_Tqual tq;
  void * type;
  struct Cyc_Absyn_Exp * initializer;
  void * rgn;
  struct Cyc_List_List * attributes;
  long escapes;
  long is_proto;
  struct Cyc_Absyn_Exp * rename;
};
 struct Cyc_Absyn_Fndecl {
  enum Cyc_Absyn_Scope sc;
  long is_inline;
  struct _tuple0 * name;
  struct Cyc_Absyn_Stmt * body;
  struct Cyc_Absyn_FnInfo i;
  void * cached_type;
  struct Cyc_Core_Opt * param_vardecls;
  struct Cyc_Absyn_Vardecl * fn_vardecl;
  enum Cyc_Absyn_Scope orig_scope;
  long escapes;
};
 struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct {
  int tag;
  struct Cyc_Absyn_Fndecl * f1;
};
 struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct {
  int tag;
  struct _fat_ptr * f1;
  struct Cyc_List_List * f2;
};
 struct Cyc_Absyn_Using_d_Absyn_Raw_decl_struct {
  int tag;
  struct _tuple0 * f1;
  struct Cyc_List_List * f2;
};
 struct Cyc_Absyn_ExternC_d_Absyn_Raw_decl_struct {
  int tag;
  struct Cyc_List_List * f1;
};
 struct _tuple10 {
  unsigned int f0;
  struct Cyc_List_List * f1;
};
 struct Cyc_Absyn_ExternCinclude_d_Absyn_Raw_decl_struct {
  int tag;
  struct Cyc_List_List * f1;
  struct Cyc_List_List * f2;
  struct Cyc_List_List * f3;
  struct _tuple10 * f4;
};
 struct Cyc_Absyn_Decl {
  void * r;
  unsigned int loc;
};
void Cyc_Absyn_visit_stmt(long (*)(void *,struct Cyc_Absyn_Exp *),long (*)(void *,
									   struct Cyc_Absyn_Stmt *),
			  void *,struct Cyc_Absyn_Stmt *);
 struct Cyc_RemoveLabels_LabelBin {
  struct Cyc_List_List * label_gotos;
  struct Cyc_List_List * label_stmts;
};
static void Cyc_RemoveLabels_remove_with_labelbin(struct Cyc_RemoveLabels_LabelBin * lb) {
  struct Cyc_RemoveLabels_LabelBin * _T0;
  struct Cyc_List_List * _T1;
  struct Cyc_RemoveLabels_LabelBin * _T2;
  struct Cyc_List_List * _T3;
  void * _T4;
  struct Cyc_Absyn_Stmt * _T5;
  int * _T6;
  int _T7;
  struct Cyc_RemoveLabels_LabelBin * _T8;
  long _T9;
  struct Cyc_List_List * _TA;
  void * _TB;
  struct _fat_ptr * _TC;
  struct _fat_ptr * _TD;
  int _TE;
  struct Cyc_List_List * _TF;
  long _T10;
  struct Cyc_Absyn_Stmt * _T11;
  struct Cyc_Absyn_Stmt * _T12;
  struct Cyc_RemoveLabels_LabelBin * _T13;
  struct Cyc_RemoveLabels_LabelBin * _T14;
  struct Cyc_List_List * _T15;
  _TL3: _T0 = lb;
  _T1 = _T0->label_stmts;
  if (_T1 != 0) { goto _TL1;
  }else { goto _TL2;
  }
  _TL1: _T2 = lb;
  _T3 = _T2->label_stmts;
  _T4 = _T3->hd;
  { struct Cyc_Absyn_Stmt * statement = (struct Cyc_Absyn_Stmt *)_T4;
    _T5 = statement;
    { void * _T16 = _T5->r;
      struct Cyc_Absyn_Stmt * _T17;
      struct _fat_ptr * _T18;
      _T6 = (int *)_T16;
      _T7 = *_T6;
      if (_T7 != 13) { goto _TL4;
      }
      { struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct * _T19 = (struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct *)_T16;
	_T18 = _T19->f1;
	_T17 = _T19->f2;
      }{ struct _fat_ptr * label = _T18;
	struct Cyc_Absyn_Stmt * s = _T17;
	long label_used = 0;
	_T8 = lb;
	{ struct Cyc_List_List * label_iter = _T8->label_gotos;
	  _TL6: if (label_iter != 0) { goto _TL9;
	  }else { goto _TL8;
	  }
	  _TL9: _T9 = label_used;
	  if (_T9) { goto _TL8;
	  }else { goto _TL7;
	  }
	  _TL7: _TA = label_iter;
	  _TB = _TA->hd;
	  _TC = (struct _fat_ptr *)_TB;
	  _TD = label;
	  _TE = Cyc_strptrcmp(_TC,_TD);
	  if (_TE != 0) { goto _TLA;
	  }
	  label_used = 1;
	  goto _TLB;
	  _TLA: _TLB: _TF = label_iter;
	  label_iter = _TF->tl;
	  goto _TL6;
	  _TL8: _T10 = label_used;
	  if (_T10) { goto _TLC;
	  }else { goto _TLE;
	  }
	  _TLE: _T11 = statement;
	  _T12 = s;
	  *_T11 = *_T12;
	  goto _TLD;
	  _TLC: _TLD: goto _LL0;
	}
      }_TL4: goto _LL0;
      _LL0: ;
    }
  }_T13 = lb;
  _T14 = lb;
  _T15 = _T14->label_stmts;
  _T13->label_stmts = _T15->tl;
  goto _TL3;
  _TL2: ;
}
static long Cyc_RemoveLabels_visit_label_f1(struct Cyc_RemoveLabels_LabelBin * lb,
					    struct Cyc_Absyn_Exp * e) {
  return 1;
}
static long Cyc_RemoveLabels_visit_label_f2(struct Cyc_RemoveLabels_LabelBin * lb,
					    struct Cyc_Absyn_Stmt * s) {
  struct Cyc_Absyn_Stmt * _T0;
  int * _T1;
  unsigned int _T2;
  struct Cyc_RemoveLabels_LabelBin * _T3;
  struct Cyc_List_List * _T4;
  struct Cyc_RemoveLabels_LabelBin * _T5;
  struct Cyc_RemoveLabels_LabelBin * _T6;
  struct Cyc_List_List * _T7;
  struct Cyc_RemoveLabels_LabelBin * _T8;
  _T0 = s;
  { void * _T9 = _T0->r;
    struct _fat_ptr * _TA;
    _T1 = (int *)_T9;
    _T2 = *_T1;
    switch (_T2) {
    case 8: 
      { struct Cyc_Absyn_Goto_s_Absyn_Raw_stmt_struct * _TB = (struct Cyc_Absyn_Goto_s_Absyn_Raw_stmt_struct *)_T9;
	_TA = _TB->f1;
      }{ struct _fat_ptr * vt = _TA;
	_T3 = lb;
	{ struct Cyc_List_List * _TB = _cycalloc(sizeof(struct Cyc_List_List));
	  _TB->hd = vt;
	  _T5 = lb;
	  _TB->tl = _T5->label_gotos;
	  _T4 = (struct Cyc_List_List *)_TB;
	}_T3->label_gotos = _T4;
	return 1;
      }
    case 13: 
      _T6 = lb;
      { struct Cyc_List_List * _TB = _cycalloc(sizeof(struct Cyc_List_List));
	_TB->hd = s;
	_T8 = lb;
	_TB->tl = _T8->label_stmts;
	_T7 = (struct Cyc_List_List *)_TB;
      }_T6->label_stmts = _T7;
      return 1;
    default: 
      return 1;
    }
    ;
  }
}
static void Cyc_RemoveLabels_anal_decl(struct Cyc_List_List * tds) {
  struct Cyc_List_List * _T0;
  void * _T1;
  struct Cyc_Absyn_Decl * _T2;
  int * _T3;
  unsigned int _T4;
  struct Cyc_RemoveLabels_LabelBin * _T5;
  struct Cyc_RemoveLabels_LabelBin * _T6;
  void (* _T7)(long (*)(struct Cyc_RemoveLabels_LabelBin *,struct Cyc_Absyn_Exp *),
	       long (*)(struct Cyc_RemoveLabels_LabelBin *,struct Cyc_Absyn_Stmt *),
	       struct Cyc_RemoveLabels_LabelBin *,struct Cyc_Absyn_Stmt *);
  void (* _T8)(long (*)(void *,struct Cyc_Absyn_Exp *),long (*)(void *,struct Cyc_Absyn_Stmt *),
	       void *,struct Cyc_Absyn_Stmt *);
  struct Cyc_RemoveLabels_LabelBin * _T9;
  struct Cyc_Absyn_Fndecl * _TA;
  struct Cyc_Absyn_Stmt * _TB;
  struct Cyc_List_List * _TC;
  _TL13: if (tds != 0) { goto _TL11;
  }else { goto _TL12;
  }
  _TL11: _T0 = tds;
  _T1 = _T0->hd;
  _T2 = (struct Cyc_Absyn_Decl *)_T1;
  { void * _TD = _T2->r;
    struct Cyc_List_List * _TE;
    struct Cyc_List_List * _TF;
    struct Cyc_Absyn_Fndecl * _T10;
    _T3 = (int *)_TD;
    _T4 = *_T3;
    switch (_T4) {
    case 1: 
      { struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct * _T11 = (struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct *)_TD;
	_T10 = _T11->f1;
      }{ struct Cyc_Absyn_Fndecl * fndt = _T10;
	struct Cyc_RemoveLabels_LabelBin * lb;
	lb = _cycalloc(sizeof(struct Cyc_RemoveLabels_LabelBin));
	_T5 = lb;
	_T5->label_gotos = 0;
	_T6 = lb;
	_T6->label_stmts = 0;
	_T8 = Cyc_Absyn_visit_stmt;
	{ void (* _T11)(long (*)(struct Cyc_RemoveLabels_LabelBin *,struct Cyc_Absyn_Exp *),
			long (*)(struct Cyc_RemoveLabels_LabelBin *,struct Cyc_Absyn_Stmt *),
			struct Cyc_RemoveLabels_LabelBin *,struct Cyc_Absyn_Stmt *) = (void (*)(long (*)(struct Cyc_RemoveLabels_LabelBin *,
													 struct Cyc_Absyn_Exp *),
												long (*)(struct Cyc_RemoveLabels_LabelBin *,
													 struct Cyc_Absyn_Stmt *),
												struct Cyc_RemoveLabels_LabelBin *,
												struct Cyc_Absyn_Stmt *))_T8;
	  _T7 = _T11;
	}_T9 = lb;
	_TA = fndt;
	_TB = _TA->body;
	_T7(Cyc_RemoveLabels_visit_label_f1,Cyc_RemoveLabels_visit_label_f2,
	    _T9,_TB);
	Cyc_RemoveLabels_remove_with_labelbin(lb);
	goto _LL0;
      }
    case 12: 
      { struct Cyc_Absyn_ExternCinclude_d_Absyn_Raw_decl_struct * _T11 = (struct Cyc_Absyn_ExternCinclude_d_Absyn_Raw_decl_struct *)_TD;
	_TF = _T11->f1;
	_TE = _T11->f2;
      }{ struct Cyc_List_List * tds1 = _TF;
	struct Cyc_List_List * tds2 = _TE;
	Cyc_RemoveLabels_anal_decl(tds1);
	_TF = tds2;
	goto _LL6;
      }
    case 10: 
      { struct Cyc_Absyn_Using_d_Absyn_Raw_decl_struct * _T11 = (struct Cyc_Absyn_Using_d_Absyn_Raw_decl_struct *)_TD;
	_TF = _T11->f2;
      }_LL6: { struct Cyc_List_List * tds = _TF;
	_TF = tds;
	goto _LL8;
      }
    case 11: 
      { struct Cyc_Absyn_ExternC_d_Absyn_Raw_decl_struct * _T11 = (struct Cyc_Absyn_ExternC_d_Absyn_Raw_decl_struct *)_TD;
	_TF = _T11->f1;
      }_LL8: { struct Cyc_List_List * tds = _TF;
	_TF = tds;
	goto _LLA;
      }
    case 9: 
      { struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct * _T11 = (struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct *)_TD;
	_TF = _T11->f2;
      }_LLA: { struct Cyc_List_List * tds = _TF;
	Cyc_RemoveLabels_anal_decl(tds);
	goto _LL0;
      }
    default: 
      goto _LL0;
    }
    _LL0: ;
  }_TC = tds;
  tds = _TC->tl;
  goto _TL13;
  _TL12: ;
}
struct Cyc_List_List * Cyc_RemoveLabels_remove_unused_labels(struct Cyc_List_List * tds) {
  struct Cyc_List_List * _T0;
  Cyc_RemoveLabels_anal_decl(tds);
  _T0 = tds;
  return _T0;
}
