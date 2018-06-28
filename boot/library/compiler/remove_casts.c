#include <cyc_include.h>
 struct Cyc_Core_Opt {
  void * v;
};
 struct Cyc_List_List {
  void * hd;
  struct Cyc_List_List * tl;
};
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
 struct Cyc_Absyn_AppType_Absyn_Type_struct {
  int tag;
  void * f1;
  struct Cyc_List_List * f2;
};
enum Cyc_Absyn_Coercion {
  Cyc_Absyn_Unknown_coercion = 0U,
  Cyc_Absyn_No_coercion = 1U,
  Cyc_Absyn_Null_to_NonNull = 2U,
  Cyc_Absyn_Subset_coercion = 3U,
  Cyc_Absyn_Other_coercion = 4U
};
 struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  struct Cyc_Absyn_Exp * f2;
  struct Cyc_Absyn_Exp * f3;
};
 struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct {
  int tag;
  void * f1;
  struct Cyc_Absyn_Exp * f2;
  long f3;
  enum Cyc_Absyn_Coercion f4;
};
 struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Stmt * f1;
};
 struct Cyc_Absyn_Exp {
  void * topt;
  void * r;
  unsigned int loc;
  void * annot;
};
 struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
};
 struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct {
  int tag;
  struct Cyc_Absyn_Stmt * f1;
  struct Cyc_Absyn_Stmt * f2;
};
 struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
};
 struct Cyc_Absyn_IfThenElse_s_Absyn_Raw_stmt_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  struct Cyc_Absyn_Stmt * f2;
  struct Cyc_Absyn_Stmt * f3;
};
 struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct {
  int tag;
  struct Cyc_Absyn_Decl * f1;
  struct Cyc_Absyn_Stmt * f2;
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
 struct Cyc_Absyn_Decl {
  void * r;
  unsigned int loc;
};
void * Cyc_Absyn_compress(void *);
struct Cyc_Absyn_Stmt * Cyc_Absyn_return_stmt(struct Cyc_Absyn_Exp *,unsigned int);
void Cyc_Absyn_visit_stmt(long (*)(void *,struct Cyc_Absyn_Exp *),long (*)(void *,
									   struct Cyc_Absyn_Stmt *),
			  void *,struct Cyc_Absyn_Stmt *);
void Cyc_Absyn_visit_exp(long (*)(void *,struct Cyc_Absyn_Exp *),long (*)(void *,
									  struct Cyc_Absyn_Stmt *),
			 void *,struct Cyc_Absyn_Exp *);
void * Cyc_Warn_impos_loc(unsigned int,struct _fat_ptr,struct _fat_ptr);
static long Cyc_RemoveCasts_remove_visit_f1(long,struct Cyc_Absyn_Exp *);
static long Cyc_RemoveCasts_remove_visit_f2(long ignore,struct Cyc_Absyn_Stmt * s) {
  struct Cyc_Absyn_Stmt * _T0;
  int * _T1;
  unsigned int _T2;
  struct Cyc_Absyn_Exp * _T3;
  int * _T4;
  int _T5;
  struct Cyc_Absyn_Exp * _T6;
  struct Cyc_Absyn_Exp * _T7;
  struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct * _T8;
  struct Cyc_Absyn_Exp * _T9;
  struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct * _TA;
  struct Cyc_Absyn_Exp * _TB;
  struct Cyc_Absyn_Exp * _TC;
  void * _TD;
  int * _TE;
  unsigned int _TF;
  struct Cyc_Absyn_Exp * _T10;
  void * _T11;
  struct Cyc_Absyn_Stmt * _T12;
  struct Cyc_Absyn_Stmt * _T13;
  struct Cyc_Absyn_Stmt * _T14;
  int * _T15;
  unsigned int _T16;
  struct Cyc_Absyn_Stmt * _T17;
  struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct * _T18;
  int (* _T19)(unsigned int,struct _fat_ptr,struct _fat_ptr);
  void * (* _T1A)(unsigned int,struct _fat_ptr,struct _fat_ptr);
  struct Cyc_Absyn_Stmt * _T1B;
  unsigned int _T1C;
  struct _fat_ptr _T1D;
  struct _fat_ptr _T1E;
  void (* _T1F)(long (*)(long,struct Cyc_Absyn_Exp *),long (*)(long,struct Cyc_Absyn_Stmt *),
		long,struct Cyc_Absyn_Stmt *);
  void (* _T20)(long (*)(void *,struct Cyc_Absyn_Exp *),long (*)(void *,struct Cyc_Absyn_Stmt *),
		void *,struct Cyc_Absyn_Stmt *);
  long (* _T21)(long,struct Cyc_Absyn_Exp *);
  struct Cyc_Absyn_Stmt * _T22;
  struct Cyc_Absyn_Exp * _T23;
  void * _T24;
  struct Cyc_Absyn_Stmt * _T25;
  struct Cyc_Absyn_IfThenElse_s_Absyn_Raw_stmt_struct * _T26;
  void (* _T27)(long (*)(long,struct Cyc_Absyn_Exp *),long (*)(long,struct Cyc_Absyn_Stmt *),
		long,struct Cyc_Absyn_Stmt *);
  void (* _T28)(long (*)(void *,struct Cyc_Absyn_Exp *),long (*)(void *,struct Cyc_Absyn_Stmt *),
		void *,struct Cyc_Absyn_Stmt *);
  long (* _T29)(long,struct Cyc_Absyn_Exp *);
  struct Cyc_Absyn_Stmt * _T2A;
  _T0 = s;
  { void * _T2B = _T0->r;
    struct Cyc_Absyn_Exp * _T2C;
    struct Cyc_Absyn_Exp * _T2D;
    struct Cyc_Absyn_Stmt * _T2E;
    struct Cyc_Absyn_Exp * _T2F;
    _T1 = (int *)_T2B;
    _T2 = *_T1;
    switch (_T2) {
    case 1: 
      { struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct * _T30 = (struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct *)_T2B;
	_T2F = _T30->f1;
      }{ struct Cyc_Absyn_Exp * e = _T2F;
	_T3 = e;
	{ void * _T30 = _T3->r;
	  struct Cyc_Absyn_Exp * _T31;
	  _T4 = (int *)_T30;
	  _T5 = *_T4;
	  if (_T5 != 14) { goto _TL1;
	  }
	  { struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct * _T32 = (struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct *)_T30;
	    _T31 = _T32->f2;
	  }{ struct Cyc_Absyn_Exp * e1 = _T31;
	    _T6 = e;
	    _T7 = e1;
	    *_T6 = *_T7;
	    goto _LL9;
	  }_TL1: goto _LL9;
	  _LL9: ;
	}return 1;
      }
    case 3: 
      _T8 = (struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct *)_T2B;
      _T9 = _T8->f1;
      if (_T9 == 0) { goto _TL3;
      }
      _TA = (struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct *)_T2B;
      _TB = _TA->f1;
      _TC = (struct Cyc_Absyn_Exp *)_TB;
      _TD = _TC->r;
      _TE = (int *)_TD;
      _TF = *_TE;
      switch (_TF) {
      case 36: 
	{ struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct * _T30 = (struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct *)_T2B;
	  _T10 = _T30->f1;
	  { struct Cyc_Absyn_Exp _T31 = *_T10;
	    _T11 = _T31.r;
	    { struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct * _T32 = (struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct *)_T11;
	      _T2E = _T32->f1;
	    }
	  }
	}{ struct Cyc_Absyn_Stmt * s1 = _T2E;
	  _T12 = s;
	  _T13 = s1;
	  _T12->r = _T13->r;
	  _TL6: if (1) { goto _TL7;
	  }else { goto _TL8;
	  }
	  _TL7: _T14 = s1;
	  { void * _T30 = _T14->r;
	    struct Cyc_Absyn_Stmt * _T31;
	    struct Cyc_Absyn_Exp * _T32;
	    _T15 = (int *)_T30;
	    _T16 = *_T15;
	    switch (_T16) {
	    case 1: 
	      { struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct * _T33 = (struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct *)_T30;
		_T32 = _T33->f1;
	      }{ struct Cyc_Absyn_Exp * e = _T32;
		_T17 = s1;
		{ struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct * _T33 = _cycalloc(sizeof(struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct));
		  _T33->tag = 3;
		  _T33->f1 = e;
		  _T18 = (struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct *)_T33;
		}_T17->r = (void *)_T18;
		goto _LLE;
	      }
	    case 2: 
	      { struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct * _T33 = (struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct *)_T30;
		_T31 = _T33->f2;
	      }{ struct Cyc_Absyn_Stmt * s2 = _T31;
		s1 = s2;
		goto _TL6;
	      }
	    case 12: 
	      { struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct * _T33 = (struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct *)_T30;
		_T31 = _T33->f2;
	      }{ struct Cyc_Absyn_Stmt * s2 = _T31;
		s1 = s2;
		goto _TL6;
	      }
	    case 13: 
	      { struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct * _T33 = (struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct *)_T30;
		_T31 = _T33->f2;
	      }{ struct Cyc_Absyn_Stmt * s2 = _T31;
		s1 = s2;
		goto _TL6;
	      }
	    default: 
	      _T1A = Cyc_Warn_impos_loc;
	      { int (* _T33)(unsigned int,struct _fat_ptr,struct _fat_ptr) = (int (*)(unsigned int,
										      struct _fat_ptr,
										      struct _fat_ptr))_T1A;
		_T19 = _T33;
	      }_T1B = s1;
	      _T1C = _T1B->loc;
	      _T1D = _tag_fat("pushing return: no expression statement!",
			      sizeof(char),41U);
	      _T1E = _tag_fat(0U,sizeof(void *),0);
	      _T19(_T1C,_T1D,_T1E);
	    }
	    _LLE: ;
	  }goto _TL8;
	  goto _TL6;
	  _TL8: _T20 = Cyc_Absyn_visit_stmt;
	  { void (* _T30)(long (*)(long,struct Cyc_Absyn_Exp *),long (*)(long,
									 struct Cyc_Absyn_Stmt *),
			  long,struct Cyc_Absyn_Stmt *) = (void (*)(long (*)(long,
									     struct Cyc_Absyn_Exp *),
								    long (*)(long,
									     struct Cyc_Absyn_Stmt *),
								    long,
								    struct Cyc_Absyn_Stmt *))_T20;
	    _T1F = _T30;
	  }_T21 = Cyc_RemoveCasts_remove_visit_f1;
	  _T22 = s1;
	  _T1F(_T21,Cyc_RemoveCasts_remove_visit_f2,1,_T22);
	  return 0;
	}
      case 6: 
	{ struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct * _T30 = (struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct *)_T2B;
	  _T23 = _T30->f1;
	  { struct Cyc_Absyn_Exp _T31 = *_T23;
	    _T24 = _T31.r;
	    { struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct * _T32 = (struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct *)_T24;
	      _T2F = _T32->f1;
	      _T2D = _T32->f2;
	      _T2C = _T32->f3;
	    }
	  }
	}{ struct Cyc_Absyn_Exp * e1 = _T2F;
	  struct Cyc_Absyn_Exp * e2 = _T2D;
	  struct Cyc_Absyn_Exp * e3 = _T2C;
	  _T25 = s;
	  { struct Cyc_Absyn_IfThenElse_s_Absyn_Raw_stmt_struct * _T30 = _cycalloc(sizeof(struct Cyc_Absyn_IfThenElse_s_Absyn_Raw_stmt_struct));
	    _T30->tag = 4;
	    _T30->f1 = e1;
	    _T30->f2 = Cyc_Absyn_return_stmt(e2,0U);
	    _T30->f3 = Cyc_Absyn_return_stmt(e3,0U);
	    _T26 = (struct Cyc_Absyn_IfThenElse_s_Absyn_Raw_stmt_struct *)_T30;
	  }_T25->r = (void *)_T26;
	  _T28 = Cyc_Absyn_visit_stmt;
	  { void (* _T30)(long (*)(long,struct Cyc_Absyn_Exp *),long (*)(long,
									 struct Cyc_Absyn_Stmt *),
			  long,struct Cyc_Absyn_Stmt *) = (void (*)(long (*)(long,
									     struct Cyc_Absyn_Exp *),
								    long (*)(long,
									     struct Cyc_Absyn_Stmt *),
								    long,
								    struct Cyc_Absyn_Stmt *))_T28;
	    _T27 = _T30;
	  }_T29 = Cyc_RemoveCasts_remove_visit_f1;
	  _T2A = s;
	  _T27(_T29,Cyc_RemoveCasts_remove_visit_f2,1,_T2A);
	  return 0;
	}
      default: 
	goto _LL7;
      }
      goto _TL4;
      _TL3: goto _LL7;
      _TL4: ;
    default: 
      _LL7: return 1;
    }
    ;
  }
}
static long Cyc_RemoveCasts_remove_visit_f1(long ignore,struct Cyc_Absyn_Exp * e) {
  struct Cyc_Absyn_Exp * _T0;
  int * _T1;
  unsigned int _T2;
  void * _T3;
  void (* _T4)(long (*)(long,struct Cyc_Absyn_Exp *),long (*)(long,struct Cyc_Absyn_Stmt *),
	       long,struct Cyc_Absyn_Exp *);
  void (* _T5)(long (*)(void *,struct Cyc_Absyn_Exp *),long (*)(void *,struct Cyc_Absyn_Stmt *),
	       void *,struct Cyc_Absyn_Exp *);
  long _T6;
  struct Cyc_Absyn_Exp * _T7;
  int * _T8;
  int _T9;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _TA;
  void * _TB;
  int * _TC;
  int _TD;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _TE;
  struct Cyc_List_List * _TF;
  struct Cyc_Absyn_Exp * _T10;
  struct Cyc_Absyn_Exp * _T11;
  struct Cyc_Absyn_Stmt * _T12;
  int * _T13;
  unsigned int _T14;
  void (* _T15)(long (*)(long,struct Cyc_Absyn_Exp *),long (*)(long,struct Cyc_Absyn_Stmt *),
		long,struct Cyc_Absyn_Exp *);
  void (* _T16)(long (*)(void *,struct Cyc_Absyn_Exp *),long (*)(void *,struct Cyc_Absyn_Stmt *),
		void *,struct Cyc_Absyn_Exp *);
  struct Cyc_Absyn_Exp * _T17;
  void (* _T18)(long (*)(long,struct Cyc_Absyn_Exp *),long (*)(long,struct Cyc_Absyn_Stmt *),
		long,struct Cyc_Absyn_Stmt *);
  void (* _T19)(long (*)(void *,struct Cyc_Absyn_Exp *),long (*)(void *,struct Cyc_Absyn_Stmt *),
		void *,struct Cyc_Absyn_Stmt *);
  struct Cyc_Absyn_Stmt * _T1A;
  _T0 = e;
  { void * _T1B = _T0->r;
    struct Cyc_Absyn_Stmt * _T1C;
    struct Cyc_Absyn_Exp * _T1D;
    void * _T1E;
    _T1 = (int *)_T1B;
    _T2 = *_T1;
    switch (_T2) {
    case 14: 
      { struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct * _T1F = (struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct *)_T1B;
	_T3 = _T1F->f1;
	_T1E = (void *)_T3;
	_T1D = _T1F->f2;
      }{ void * t = _T1E;
	struct Cyc_Absyn_Exp * e1 = _T1D;
	_T5 = Cyc_Absyn_visit_exp;
	{ void (* _T1F)(long (*)(long,struct Cyc_Absyn_Exp *),long (*)(long,
								       struct Cyc_Absyn_Stmt *),
			long,struct Cyc_Absyn_Exp *) = (void (*)(long (*)(long,
									  struct Cyc_Absyn_Exp *),
								 long (*)(long,
									  struct Cyc_Absyn_Stmt *),
								 long,struct Cyc_Absyn_Exp *))_T5;
	  _T4 = _T1F;
	}_T6 = ignore;
	_T7 = e1;
	_T4(Cyc_RemoveCasts_remove_visit_f1,Cyc_RemoveCasts_remove_visit_f2,
	    _T6,_T7);
	{ void * _T1F = Cyc_Absyn_compress(t);
	  _T8 = (int *)_T1F;
	  _T9 = *_T8;
	  if (_T9 != 0) { goto _TLB;
	  }
	  _TA = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T1F;
	  _TB = _TA->f1;
	  _TC = (int *)_TB;
	  _TD = *_TC;
	  if (_TD != 24) { goto _TLD;
	  }
	  _TE = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T1F;
	  _TF = _TE->f2;
	  if (_TF != 0) { goto _TLF;
	  }
	  _T10 = e;
	  _T11 = e1;
	  *_T10 = *_T11;
	  return 0;
	  _TLF: goto _LLA;
	  _TLD: goto _LLA;
	  _TLB: _LLA: return 0;
	  ;
	}
      }
    case 36: 
      { struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct * _T1F = (struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct *)_T1B;
	_T1C = _T1F->f1;
      }{ struct Cyc_Absyn_Stmt * s = _T1C;
	_TL11: if (1) { goto _TL12;
	}else { goto _TL13;
	}
	_TL12: _T12 = s;
	{ void * _T1F = _T12->r;
	  struct Cyc_Absyn_Stmt * _T20;
	  struct Cyc_Absyn_Stmt * _T21;
	  struct Cyc_Absyn_Exp * _T22;
	  _T13 = (int *)_T1F;
	  _T14 = *_T13;
	  switch (_T14) {
	  case 1: 
	    { struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct * _T23 = (struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct *)_T1F;
	      _T22 = _T23->f1;
	    }{ struct Cyc_Absyn_Exp * e = _T22;
	      _T16 = Cyc_Absyn_visit_exp;
	      { void (* _T23)(long (*)(long,struct Cyc_Absyn_Exp *),long (*)(long,
									     struct Cyc_Absyn_Stmt *),
			      long,struct Cyc_Absyn_Exp *) = (void (*)(long (*)(long,
										struct Cyc_Absyn_Exp *),
								       long (*)(long,
										struct Cyc_Absyn_Stmt *),
								       long,
								       struct Cyc_Absyn_Exp *))_T16;
		_T15 = _T23;
	      }_T17 = e;
	      _T15(Cyc_RemoveCasts_remove_visit_f1,Cyc_RemoveCasts_remove_visit_f2,
		   1,_T17);
	      return 0;
	    }
	  case 2: 
	    { struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct * _T23 = (struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct *)_T1F;
	      _T21 = _T23->f1;
	      _T20 = _T23->f2;
	    }{ struct Cyc_Absyn_Stmt * s1 = _T21;
	      struct Cyc_Absyn_Stmt * s2 = _T20;
	      _T19 = Cyc_Absyn_visit_stmt;
	      { void (* _T23)(long (*)(long,struct Cyc_Absyn_Exp *),long (*)(long,
									     struct Cyc_Absyn_Stmt *),
			      long,struct Cyc_Absyn_Stmt *) = (void (*)(long (*)(long,
										 struct Cyc_Absyn_Exp *),
									long (*)(long,
										 struct Cyc_Absyn_Stmt *),
									long,
									struct Cyc_Absyn_Stmt *))_T19;
		_T18 = _T23;
	      }_T1A = s1;
	      _T18(Cyc_RemoveCasts_remove_visit_f1,Cyc_RemoveCasts_remove_visit_f2,
		   1,_T1A);
	      s = s2;
	      goto _TL11;
	    }
	  case 12: 
	    { struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct * _T23 = (struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct *)_T1F;
	      _T21 = _T23->f2;
	    }{ struct Cyc_Absyn_Stmt * s1 = _T21;
	      s = s1;
	      goto _TL11;
	    }
	  default: 
	    return 0;
	  }
	  ;
	}goto _TL11;
	_TL13: return 0;
      }
    default: 
      return 1;
    }
    ;
  }
}
struct Cyc_List_List * Cyc_RemoveCasts_remove_casts(struct Cyc_List_List * tds) {
  struct Cyc_List_List * _T0;
  void * _T1;
  struct Cyc_Absyn_Decl * _T2;
  int * _T3;
  int _T4;
  void (* _T5)(long (*)(long,struct Cyc_Absyn_Exp *),long (*)(long,struct Cyc_Absyn_Stmt *),
	       long,struct Cyc_Absyn_Stmt *);
  void (* _T6)(long (*)(void *,struct Cyc_Absyn_Exp *),long (*)(void *,struct Cyc_Absyn_Stmt *),
	       void *,struct Cyc_Absyn_Stmt *);
  struct Cyc_Absyn_Fndecl * _T7;
  struct Cyc_Absyn_Stmt * _T8;
  struct Cyc_List_List * _T9;
  struct Cyc_List_List * _TA;
  { struct Cyc_List_List * tds2 = tds;
    _TL18: if (tds2 != 0) { goto _TL16;
    }else { goto _TL17;
    }
    _TL16: _T0 = tds2;
    _T1 = _T0->hd;
    _T2 = (struct Cyc_Absyn_Decl *)_T1;
    { void * _TB = _T2->r;
      struct Cyc_Absyn_Fndecl * _TC;
      _T3 = (int *)_TB;
      _T4 = *_T3;
      if (_T4 != 1) { goto _TL19;
      }
      { struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct * _TD = (struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct *)_TB;
	_TC = _TD->f1;
      }{ struct Cyc_Absyn_Fndecl * fd = _TC;
	_T6 = Cyc_Absyn_visit_stmt;
	{ void (* _TD)(long (*)(long,struct Cyc_Absyn_Exp *),long (*)(long,
								      struct Cyc_Absyn_Stmt *),
		       long,struct Cyc_Absyn_Stmt *) = (void (*)(long (*)(long,
									  struct Cyc_Absyn_Exp *),
								 long (*)(long,
									  struct Cyc_Absyn_Stmt *),
								 long,struct Cyc_Absyn_Stmt *))_T6;
	  _T5 = _TD;
	}_T7 = fd;
	_T8 = _T7->body;
	_T5(Cyc_RemoveCasts_remove_visit_f1,Cyc_RemoveCasts_remove_visit_f2,
	    1,_T8);
	goto _LL0;
      }_TL19: goto _LL0;
      _LL0: ;
    }_T9 = tds2;
    tds2 = _T9->tl;
    goto _TL18;
    _TL17: ;
  }_TA = tds;
  return _TA;
}
