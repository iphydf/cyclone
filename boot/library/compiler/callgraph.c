#include <cyc_include.h>
 struct Cyc_Core_Opt {
  void * v;
};
extern char Cyc_Core_Not_found[10U];
 struct Cyc_Core_Not_found_exn_struct {
  char * tag;
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
 struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct {
  int tag;
  void * f1;
};
 struct Cyc_Absyn_Exp {
  void * topt;
  void * r;
  unsigned int loc;
  void * annot;
};
 struct Cyc_Absyn_Stmt {
  void * r;
  unsigned int loc;
  void * annot;
};
 struct Cyc_Absyn_Global_b_Absyn_Binding_struct {
  int tag;
  struct Cyc_Absyn_Vardecl * f1;
};
 struct Cyc_Absyn_Funname_b_Absyn_Binding_struct {
  int tag;
  struct Cyc_Absyn_Fndecl * f1;
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
 struct Cyc_Absyn_Decl {
  void * r;
  unsigned int loc;
};
int Cyc_Absyn_qvar_cmp(struct _tuple0 *,struct _tuple0 *);
int Cyc_Absyn_hash_qvar(struct _tuple0 *);
void Cyc_Absyn_visit_stmt(long (*)(void *,struct Cyc_Absyn_Exp *),long (*)(void *,
									   struct Cyc_Absyn_Stmt *),
			  void *,struct Cyc_Absyn_Stmt *);
struct Cyc___cycFILE;
 struct Cyc_String_pa_PrintArg_struct {
  int tag;
  struct _fat_ptr f1;
};
extern int Cyc_fprintf(struct Cyc___cycFILE *,struct _fat_ptr,struct _fat_ptr);
struct Cyc_Dict_T;
 struct Cyc_Dict_Dict {
  int (* rel)(void *,void *);
  struct _RegionHandle * r;
  const struct Cyc_Dict_T * t;
};
struct Cyc_Set_Set;
extern struct Cyc_Set_Set * Cyc_Set_empty(int (*)(void *,void *));
extern struct Cyc_Set_Set * Cyc_Set_insert(struct Cyc_Set_Set *,void *);
void Cyc_Graph_print(struct Cyc___cycFILE *,struct Cyc_Dict_Dict,void (*)(struct Cyc___cycFILE *,
									  void *));
extern struct Cyc_Dict_Dict Cyc_Graph_empty(int (*)(void *,void *));
extern struct Cyc_Dict_Dict Cyc_Graph_add_node(struct Cyc_Dict_Dict,void *);
extern struct Cyc_Dict_Dict Cyc_Graph_add_edges(struct Cyc_Dict_Dict,void *,
						struct Cyc_Set_Set *);
struct _fat_ptr Cyc_Absynpp_qvar2string(struct _tuple0 *);
struct Cyc_Hashtable_Table;
extern struct Cyc_Hashtable_Table * Cyc_Hashtable_create(int,int (*)(void *,
								     void *),
							 int (*)(void *));
extern void Cyc_Hashtable_insert(struct Cyc_Hashtable_Table *,void *,void *);
extern void * Cyc_Hashtable_lookup(struct Cyc_Hashtable_Table *,void *);
 struct _tuple11 {
  struct Cyc_Hashtable_Table * f0;
  struct Cyc_Set_Set * f1;
};
static long Cyc_Callgraph_visit_cg_f1(struct _tuple11 * env,struct Cyc_Absyn_Exp * e) {
  struct Cyc_Absyn_Exp * _T0;
  int * _T1;
  int _T2;
  struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct * _T3;
  void * _T4;
  int * _T5;
  unsigned int _T6;
  void * _T7;
  struct Cyc_Absyn_Fndecl * _T8;
  void * _T9;
  struct Cyc_Absyn_Vardecl * _TA;
  struct _tuple11 * _TB;
  struct _handler_cons * _TC;
  int _TD;
  struct Cyc_Set_Set * (* _TE)(struct Cyc_Set_Set *,struct Cyc_Absyn_Fndecl *);
  struct Cyc_Set_Set * (* _TF)(struct Cyc_Set_Set *,void *);
  struct Cyc_Set_Set * _T10;
  struct Cyc_Absyn_Fndecl * (* _T11)(struct Cyc_Hashtable_Table *,struct _tuple0 *);
  void * (* _T12)(struct Cyc_Hashtable_Table *,void *);
  struct Cyc_Absyn_Fndecl * _T13;
  struct _tuple11 * _T14;
  struct _tuple11 _T15;
  void * _T16;
  struct Cyc_Core_Not_found_exn_struct * _T17;
  char * _T18;
  char * _T19;
  struct _tuple0 * name;
  _T0 = e;
  { void * _T1A = _T0->r;
    struct Cyc_Absyn_Vardecl * _T1B;
    struct Cyc_Absyn_Fndecl * _T1C;
    _T1 = (int *)_T1A;
    _T2 = *_T1;
    if (_T2 != 1) { goto _TL0;
    }
    _T3 = (struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)_T1A;
    _T4 = _T3->f1;
    _T5 = (int *)_T4;
    _T6 = *_T5;
    switch (_T6) {
    case 2: 
      { struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct * _T1D = (struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)_T1A;
	_T7 = _T1D->f1;
	{ struct Cyc_Absyn_Funname_b_Absyn_Binding_struct * _T1E = (struct Cyc_Absyn_Funname_b_Absyn_Binding_struct *)_T7;
	  _T1C = _T1E->f1;
	}
      }{ struct Cyc_Absyn_Fndecl * fd = _T1C;
	_T8 = fd;
	name = _T8->name;
	goto _LL0;
      }
    case 1: 
      { struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct * _T1D = (struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)_T1A;
	_T9 = _T1D->f1;
	{ struct Cyc_Absyn_Global_b_Absyn_Binding_struct * _T1E = (struct Cyc_Absyn_Global_b_Absyn_Binding_struct *)_T9;
	  _T1B = _T1E->f1;
	}
      }{ struct Cyc_Absyn_Vardecl * vd = _T1B;
	_TA = vd;
	name = _TA->name;
	goto _LL0;
      }
    default: 
      goto _LL5;
    }
    goto _TL1;
    _TL0: _LL5: return 1;
    _TL1: _LL0: ;
  }{ struct Cyc_Set_Set * _T1A;
    struct Cyc_Hashtable_Table * _T1B;
    _TB = env;
    { struct _tuple11 _T1C = *_TB;
      _T1B = _T1C.f0;
      _T1A = _T1C.f1;
    }{ struct Cyc_Hashtable_Table * fds = _T1B;
      struct Cyc_Set_Set * s = _T1A;
      { struct _handler_cons _T1C;
	_TC = &_T1C;
	_push_handler(_TC);
	{ int _T1D = 0;
	  _TD = setjmp(_T1C.handler);
	  if (! _TD) { goto _TL3;
	  }
	  _T1D = 1;
	  goto _TL4;
	  _TL3: _TL4: if (_T1D) { goto _TL5;
	  }else { goto _TL7;
	  }
	  _TL7: _TF = Cyc_Set_insert;
	  { struct Cyc_Set_Set * (* _T1E)(struct Cyc_Set_Set *,struct Cyc_Absyn_Fndecl *) = (struct Cyc_Set_Set * (*)(struct Cyc_Set_Set *,
														      struct Cyc_Absyn_Fndecl *))_TF;
	    _TE = _T1E;
	  }_T10 = s;
	  _T12 = Cyc_Hashtable_lookup;
	  { struct Cyc_Absyn_Fndecl * (* _T1E)(struct Cyc_Hashtable_Table *,
					       struct _tuple0 *) = (struct Cyc_Absyn_Fndecl * (*)(struct Cyc_Hashtable_Table *,
												  struct _tuple0 *))_T12;
	    _T11 = _T1E;
	  }_T13 = _T11(fds,name);
	  s = _TE(_T10,_T13);
	  _T14 = env;
	  { struct _tuple11 _T1E;
	    _T1E.f0 = fds;
	    _T1E.f1 = s;
	    _T15 = _T1E;
	  }*_T14 = _T15;
	  _pop_handler();
	  goto _TL6;
	  _TL5: _T16 = Cyc_Core_get_exn_thrown();
	  { void * _T1E = (void *)_T16;
	    void * _T1F;
	    _T17 = (struct Cyc_Core_Not_found_exn_struct *)_T1E;
	    _T18 = _T17->tag;
	    _T19 = Cyc_Core_Not_found;
	    if (_T18 != _T19) { goto _TL8;
	    }
	    goto _LLA;
	    _TL8: _T1F = _T1E;
	    { void * exn = _T1F;
	      _rethrow(exn);
	    }_LLA: ;
	  }_TL6: ;
	}
      }return 0;
    }
  }
}
static long Cyc_Callgraph_visit_cg_f2(struct _tuple11 * env,struct Cyc_Absyn_Stmt * s) {
  return 1;
}
static struct Cyc_Set_Set * Cyc_Callgraph_cg_stmt(struct Cyc_Hashtable_Table * fds,
						  struct Cyc_Absyn_Stmt * e,
						  struct Cyc_Set_Set * s) {
  struct _tuple11 _T0;
  void (* _T1)(long (*)(struct _tuple11 *,struct Cyc_Absyn_Exp *),long (*)(struct _tuple11 *,
									   struct Cyc_Absyn_Stmt *),
	       struct _tuple11 *,struct Cyc_Absyn_Stmt *);
  void (* _T2)(long (*)(void *,struct Cyc_Absyn_Exp *),long (*)(void *,struct Cyc_Absyn_Stmt *),
	       void *,struct Cyc_Absyn_Stmt *);
  struct _tuple11 * _T3;
  struct Cyc_Absyn_Stmt * _T4;
  struct _tuple11 _T5;
  struct Cyc_Set_Set * _T6;
  { struct _tuple11 _T7;
    _T7.f0 = fds;
    _T7.f1 = s;
    _T0 = _T7;
  }{ struct _tuple11 env = _T0;
    _T2 = Cyc_Absyn_visit_stmt;
    { void (* _T7)(long (*)(struct _tuple11 *,struct Cyc_Absyn_Exp *),long (*)(struct _tuple11 *,
									       struct Cyc_Absyn_Stmt *),
		   struct _tuple11 *,struct Cyc_Absyn_Stmt *) = (void (*)(long (*)(struct _tuple11 *,
										   struct Cyc_Absyn_Exp *),
									  long (*)(struct _tuple11 *,
										   struct Cyc_Absyn_Stmt *),
									  struct _tuple11 *,
									  struct Cyc_Absyn_Stmt *))_T2;
      _T1 = _T7;
    }_T3 = &env;
    _T4 = e;
    _T1(Cyc_Callgraph_visit_cg_f1,Cyc_Callgraph_visit_cg_f2,_T3,_T4);
    { struct Cyc_Set_Set * _T7;
      _T5 = env;
      _T7 = _T5.f1;
      { struct Cyc_Set_Set * s = _T7;
	_T6 = s;
	return _T6;
      }
    }
  }
}
static int Cyc_Callgraph_fndecl_cmp(struct Cyc_Absyn_Fndecl * fd1,struct Cyc_Absyn_Fndecl * fd2) {
  struct Cyc_Absyn_Fndecl * _T0;
  struct _tuple0 * _T1;
  struct Cyc_Absyn_Fndecl * _T2;
  struct _tuple0 * _T3;
  int _T4;
  _T0 = fd1;
  _T1 = _T0->name;
  _T2 = fd2;
  _T3 = _T2->name;
  _T4 = Cyc_Absyn_qvar_cmp(_T1,_T3);
  return _T4;
}
static int Cyc_Callgraph_hash_fndecl(struct Cyc_Absyn_Fndecl * fd) {
  struct Cyc_Absyn_Fndecl * _T0;
  int _T1;
  _T0 = fd;
  _T1 = (int)_T0;
  return _T1;
}
static struct Cyc_Dict_Dict Cyc_Callgraph_cg_topdecls(struct Cyc_Hashtable_Table * fds,
						      struct Cyc_Dict_Dict cg,
						      struct Cyc_List_List * ds) {
  struct Cyc_Set_Set * (* _T0)(int (*)(struct Cyc_Absyn_Fndecl *,struct Cyc_Absyn_Fndecl *));
  struct Cyc_Set_Set * (* _T1)(int (*)(void *,void *));
  struct Cyc_List_List * _T2;
  void * _T3;
  struct Cyc_Absyn_Decl * _T4;
  int * _T5;
  unsigned int _T6;
  struct Cyc_Dict_Dict (* _T7)(struct Cyc_Dict_Dict,struct Cyc_Absyn_Fndecl *,
			       struct Cyc_Set_Set *);
  struct Cyc_Dict_Dict (* _T8)(struct Cyc_Dict_Dict,void *,struct Cyc_Set_Set *);
  struct Cyc_Dict_Dict _T9;
  struct Cyc_Absyn_Fndecl * _TA;
  struct Cyc_Hashtable_Table * _TB;
  struct Cyc_Absyn_Fndecl * _TC;
  struct Cyc_Absyn_Stmt * _TD;
  struct Cyc_Set_Set * _TE;
  struct Cyc_Set_Set * _TF;
  struct Cyc_List_List * _T10;
  struct Cyc_Dict_Dict _T11;
  _T1 = Cyc_Set_empty;
  { struct Cyc_Set_Set * (* _T12)(int (*)(struct Cyc_Absyn_Fndecl *,struct Cyc_Absyn_Fndecl *)) = (struct Cyc_Set_Set * (*)(int (*)(struct Cyc_Absyn_Fndecl *,
																    struct Cyc_Absyn_Fndecl *)))_T1;
    _T0 = _T12;
  }{ struct Cyc_Set_Set * mt = _T0(Cyc_Callgraph_fndecl_cmp);
    { struct Cyc_List_List * _T12 = ds;
      struct Cyc_List_List * ds = _T12;
      _TLD: if (ds != 0) { goto _TLB;
      }else { goto _TLC;
      }
      _TLB: _T2 = ds;
      _T3 = _T2->hd;
      _T4 = (struct Cyc_Absyn_Decl *)_T3;
      { void * _T13 = _T4->r;
	struct Cyc_List_List * _T14;
	struct Cyc_Absyn_Fndecl * _T15;
	_T5 = (int *)_T13;
	_T6 = *_T5;
	switch (_T6) {
	case 1: 
	  { struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct * _T16 = (struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct *)_T13;
	    _T15 = _T16->f1;
	  }{ struct Cyc_Absyn_Fndecl * fd = _T15;
	    _T8 = Cyc_Graph_add_edges;
	    { struct Cyc_Dict_Dict (* _T16)(struct Cyc_Dict_Dict,struct Cyc_Absyn_Fndecl *,
					    struct Cyc_Set_Set *) = (struct Cyc_Dict_Dict (*)(struct Cyc_Dict_Dict,
											      struct Cyc_Absyn_Fndecl *,
											      struct Cyc_Set_Set *))_T8;
	      _T7 = _T16;
	    }_T9 = cg;
	    _TA = fd;
	    _TB = fds;
	    _TC = fd;
	    _TD = _TC->body;
	    _TE = mt;
	    _TF = Cyc_Callgraph_cg_stmt(_TB,_TD,_TE);
	    cg = _T7(_T9,_TA,_TF);
	    goto _LL0;
	  }
	case 10: 
	  { struct Cyc_Absyn_Using_d_Absyn_Raw_decl_struct * _T16 = (struct Cyc_Absyn_Using_d_Absyn_Raw_decl_struct *)_T13;
	    _T14 = _T16->f2;
	  }{ struct Cyc_List_List * ds = _T14;
	    _T14 = ds;
	    goto _LL6;
	  }
	case 9: 
	  { struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct * _T16 = (struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct *)_T13;
	    _T14 = _T16->f2;
	  }_LL6: { struct Cyc_List_List * ds = _T14;
	    cg = Cyc_Callgraph_cg_topdecls(fds,cg,ds);
	    goto _LL0;
	  }
	default: 
	  goto _LL0;
	}
	_LL0: ;
      }_T10 = ds;
      ds = _T10->tl;
      goto _TLD;
      _TLC: ;
    }_T11 = cg;
    return _T11;
  }
}
static struct Cyc_Dict_Dict Cyc_Callgraph_enter_fndecls(struct Cyc_Hashtable_Table * fds,
							struct Cyc_Dict_Dict cg,
							struct Cyc_List_List * ds) {
  struct Cyc_List_List * _T0;
  void * _T1;
  struct Cyc_Absyn_Decl * _T2;
  int * _T3;
  unsigned int _T4;
  void (* _T5)(struct Cyc_Hashtable_Table *,struct _tuple0 *,struct Cyc_Absyn_Fndecl *);
  void (* _T6)(struct Cyc_Hashtable_Table *,void *,void *);
  struct Cyc_Hashtable_Table * _T7;
  struct Cyc_Absyn_Fndecl * _T8;
  struct _tuple0 * _T9;
  struct Cyc_Absyn_Fndecl * _TA;
  struct Cyc_Dict_Dict (* _TB)(struct Cyc_Dict_Dict,struct Cyc_Absyn_Fndecl *);
  struct Cyc_Dict_Dict (* _TC)(struct Cyc_Dict_Dict,void *);
  struct Cyc_List_List * _TD;
  struct Cyc_Dict_Dict _TE;
  { struct Cyc_List_List * _TF = ds;
    struct Cyc_List_List * ds = _TF;
    _TL12: if (ds != 0) { goto _TL10;
    }else { goto _TL11;
    }
    _TL10: _T0 = ds;
    _T1 = _T0->hd;
    _T2 = (struct Cyc_Absyn_Decl *)_T1;
    { void * _T10 = _T2->r;
      struct Cyc_List_List * _T11;
      struct Cyc_Absyn_Fndecl * _T12;
      _T3 = (int *)_T10;
      _T4 = *_T3;
      switch (_T4) {
      case 1: 
	{ struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct * _T13 = (struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct *)_T10;
	  _T12 = _T13->f1;
	}{ struct Cyc_Absyn_Fndecl * f = _T12;
	  _T6 = Cyc_Hashtable_insert;
	  { void (* _T13)(struct Cyc_Hashtable_Table *,struct _tuple0 *,struct Cyc_Absyn_Fndecl *) = (void (*)(struct Cyc_Hashtable_Table *,
													       struct _tuple0 *,
													       struct Cyc_Absyn_Fndecl *))_T6;
	    _T5 = _T13;
	  }_T7 = fds;
	  _T8 = f;
	  _T9 = _T8->name;
	  _TA = f;
	  _T5(_T7,_T9,_TA);
	  _TC = Cyc_Graph_add_node;
	  { struct Cyc_Dict_Dict (* _T13)(struct Cyc_Dict_Dict,struct Cyc_Absyn_Fndecl *) = (struct Cyc_Dict_Dict (*)(struct Cyc_Dict_Dict,
														      struct Cyc_Absyn_Fndecl *))_TC;
	    _TB = _T13;
	  }cg = _TB(cg,f);
	  goto _LL0;
	}
      case 10: 
	{ struct Cyc_Absyn_Using_d_Absyn_Raw_decl_struct * _T13 = (struct Cyc_Absyn_Using_d_Absyn_Raw_decl_struct *)_T10;
	  _T11 = _T13->f2;
	}{ struct Cyc_List_List * ds = _T11;
	  _T11 = ds;
	  goto _LL6;
	}
      case 9: 
	{ struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct * _T13 = (struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct *)_T10;
	  _T11 = _T13->f2;
	}_LL6: { struct Cyc_List_List * ds = _T11;
	  cg = Cyc_Callgraph_enter_fndecls(fds,cg,ds);
	  goto _LL0;
	}
      default: 
	goto _LL0;
      }
      _LL0: ;
    }_TD = ds;
    ds = _TD->tl;
    goto _TL12;
    _TL11: ;
  }_TE = cg;
  return _TE;
}
struct Cyc_Dict_Dict Cyc_Callgraph_compute_callgraph(struct Cyc_List_List * ds) {
  struct Cyc_Hashtable_Table * (* _T0)(int,int (*)(struct _tuple0 *,struct _tuple0 *),
				       int (*)(struct _tuple0 *));
  struct Cyc_Hashtable_Table * (* _T1)(int,int (*)(void *,void *),int (*)(void *));
  int (* _T2)(struct _tuple0 *,struct _tuple0 *);
  int (* _T3)(struct _tuple0 *);
  struct Cyc_Hashtable_Table * _T4;
  struct Cyc_Dict_Dict (* _T5)(int (*)(struct Cyc_Absyn_Fndecl *,struct Cyc_Absyn_Fndecl *));
  struct Cyc_Dict_Dict (* _T6)(int (*)(void *,void *));
  struct Cyc_Dict_Dict _T7;
  struct Cyc_List_List * _T8;
  struct Cyc_Dict_Dict _T9;
  _T1 = Cyc_Hashtable_create;
  { struct Cyc_Hashtable_Table * (* _TA)(int,int (*)(struct _tuple0 *,struct _tuple0 *),
					 int (*)(struct _tuple0 *)) = (struct Cyc_Hashtable_Table * (*)(int,
													int (*)(struct _tuple0 *,
														struct _tuple0 *),
													int (*)(struct _tuple0 *)))_T1;
    _T0 = _TA;
  }_T2 = Cyc_Absyn_qvar_cmp;
  _T3 = Cyc_Absyn_hash_qvar;
  { struct Cyc_Hashtable_Table * fd = _T0(51,_T2,_T3);
    _T4 = fd;
    _T6 = Cyc_Graph_empty;
    { struct Cyc_Dict_Dict (* _TA)(int (*)(struct Cyc_Absyn_Fndecl *,struct Cyc_Absyn_Fndecl *)) = (struct Cyc_Dict_Dict (*)(int (*)(struct Cyc_Absyn_Fndecl *,
																     struct Cyc_Absyn_Fndecl *)))_T6;
      _T5 = _TA;
    }_T7 = _T5(Cyc_Callgraph_fndecl_cmp);
    _T8 = ds;
    { struct Cyc_Dict_Dict cg = Cyc_Callgraph_enter_fndecls(_T4,_T7,_T8);
      cg = Cyc_Callgraph_cg_topdecls(fd,cg,ds);
      _T9 = cg;
      return _T9;
    }
  }
}
static void Cyc_Callgraph_print_fndecl(struct Cyc___cycFILE * f,struct Cyc_Absyn_Fndecl * fd) {
  struct Cyc_String_pa_PrintArg_struct _T0;
  struct Cyc_Absyn_Fndecl * _T1;
  struct _tuple0 * _T2;
  struct Cyc___cycFILE * _T3;
  struct _fat_ptr _T4;
  struct _fat_ptr _T5;
  { struct Cyc_String_pa_PrintArg_struct _T6;
    _T6.tag = 0;
    _T1 = fd;
    _T2 = _T1->name;
    _T6.f1 = Cyc_Absynpp_qvar2string(_T2);
    _T0 = _T6;
  }{ struct Cyc_String_pa_PrintArg_struct _T6 = _T0;
    void * _T7[1];
    _T7[0] = &_T6;
    _T3 = f;
    _T4 = _tag_fat("%s ",sizeof(char),4U);
    _T5 = _tag_fat(_T7,sizeof(void *),1);
    Cyc_fprintf(_T3,_T4,_T5);
  }
}
void Cyc_Callgraph_print_callgraph(struct Cyc___cycFILE * f,struct Cyc_Dict_Dict cg) {
  void (* _T0)(struct Cyc___cycFILE *,struct Cyc_Dict_Dict,void (*)(struct Cyc___cycFILE *,
								    struct Cyc_Absyn_Fndecl *));
  void (* _T1)(struct Cyc___cycFILE *,struct Cyc_Dict_Dict,void (*)(struct Cyc___cycFILE *,
								    void *));
  struct Cyc___cycFILE * _T2;
  struct Cyc_Dict_Dict _T3;
  _T1 = Cyc_Graph_print;
  { void (* _T4)(struct Cyc___cycFILE *,struct Cyc_Dict_Dict,void (*)(struct Cyc___cycFILE *,
								      struct Cyc_Absyn_Fndecl *)) = (void (*)(struct Cyc___cycFILE *,
													      struct Cyc_Dict_Dict,
													      void (*)(struct Cyc___cycFILE *,
														       struct Cyc_Absyn_Fndecl *)))_T1;
    _T0 = _T4;
  }_T2 = f;
  _T3 = cg;
  _T0(_T2,_T3,Cyc_Callgraph_print_fndecl);
}
