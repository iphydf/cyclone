#include <cyc_include.h>
 struct Cyc_Core_Opt {
  void * v;
};
int Cyc_Core_ptrcmp(void *,void *);
 struct Cyc_List_List {
  void * hd;
  struct Cyc_List_List * tl;
};
extern struct Cyc_List_List * Cyc_List_rev(struct Cyc_List_List *);
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
enum Cyc_Absyn_AggrKind {
  Cyc_Absyn_StructA = 0U,
  Cyc_Absyn_UnionA = 1U
};
 struct Cyc_Absyn_Tvar {
  struct _fat_ptr * name;
  int identity;
  void * kind;
  void * aquals_bound;
};
 struct Cyc_Absyn_PtrLoc {
  unsigned int ptr_loc;
  unsigned int rgn_loc;
  unsigned int zt_loc;
};
 struct Cyc_Absyn_PtrAtts {
  void * eff;
  void * nullable;
  void * bounds;
  void * zero_term;
  struct Cyc_Absyn_PtrLoc * ptrloc;
  void * autoreleased;
  void * aqual;
};
 struct Cyc_Absyn_PtrInfo {
  void * elt_type;
  struct Cyc_Absyn_Tqual elt_tq;
  struct Cyc_Absyn_PtrAtts ptr_atts;
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
 struct Cyc_Absyn_PointerType_Absyn_Type_struct {
  int tag;
  struct Cyc_Absyn_PtrInfo f1;
};
enum Cyc_Absyn_Primop {
  Cyc_Absyn_Plus = 0U,
  Cyc_Absyn_Times = 1U,
  Cyc_Absyn_Minus = 2U,
  Cyc_Absyn_Div = 3U,
  Cyc_Absyn_Mod = 4U,
  Cyc_Absyn_Eq = 5U,
  Cyc_Absyn_Neq = 6U,
  Cyc_Absyn_Gt = 7U,
  Cyc_Absyn_Lt = 8U,
  Cyc_Absyn_Gte = 9U,
  Cyc_Absyn_Lte = 10U,
  Cyc_Absyn_Not = 11U,
  Cyc_Absyn_Bitnot = 12U,
  Cyc_Absyn_Bitand = 13U,
  Cyc_Absyn_Bitor = 14U,
  Cyc_Absyn_Bitxor = 15U,
  Cyc_Absyn_Bitlshift = 16U,
  Cyc_Absyn_Bitlrshift = 17U,
  Cyc_Absyn_Numelts = 18U,
  Cyc_Absyn_Tagof = 19U,
  Cyc_Absyn_UDiv = 20U,
  Cyc_Absyn_UMod = 21U,
  Cyc_Absyn_UGt = 22U,
  Cyc_Absyn_ULt = 23U,
  Cyc_Absyn_UGte = 24U,
  Cyc_Absyn_ULte = 25U
};
 struct Cyc_Absyn_PrimopOpt {
  enum Cyc_Absyn_Primop v;
};
enum Cyc_Absyn_Incrementor {
  Cyc_Absyn_PreInc = 0U,
  Cyc_Absyn_PostInc = 1U,
  Cyc_Absyn_PreDec = 2U,
  Cyc_Absyn_PostDec = 3U
};
 struct Cyc_Absyn_VarargCallInfo {
  int num_varargs;
  struct Cyc_List_List * injectors;
  struct Cyc_Absyn_VarargInfo * vai;
};
enum Cyc_Absyn_Coercion {
  Cyc_Absyn_Unknown_coercion = 0U,
  Cyc_Absyn_No_coercion = 1U,
  Cyc_Absyn_Null_to_NonNull = 2U,
  Cyc_Absyn_Subset_coercion = 3U,
  Cyc_Absyn_Other_coercion = 4U
};
enum Cyc_Absyn_MallocKind {
  Cyc_Absyn_Malloc = 0U,
  Cyc_Absyn_Calloc = 1U,
  Cyc_Absyn_Vmalloc = 2U
};
 struct Cyc_Absyn_MallocInfo {
  enum Cyc_Absyn_MallocKind mknd;
  struct Cyc_Absyn_Exp * rgn;
  struct Cyc_Absyn_Exp * aqual;
  void * * elt_type;
  struct Cyc_Absyn_Exp * num_elts;
  long fat_result;
  long inline_call;
};
 struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct {
  int tag;
  void * f1;
};
 struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct {
  int tag;
  enum Cyc_Absyn_Primop f1;
  struct Cyc_List_List * f2;
};
 struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  struct Cyc_Absyn_PrimopOpt * f2;
  struct Cyc_Absyn_Exp * f3;
};
 struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  enum Cyc_Absyn_Incrementor f2;
};
 struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  struct Cyc_Absyn_Exp * f2;
  struct Cyc_Absyn_Exp * f3;
};
 struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  struct Cyc_Absyn_Exp * f2;
};
 struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  struct Cyc_Absyn_Exp * f2;
};
 struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  struct Cyc_Absyn_Exp * f2;
};
 struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  struct Cyc_List_List * f2;
  struct Cyc_Absyn_VarargCallInfo * f3;
  long f4;
};
 struct Cyc_Absyn_Throw_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  long f2;
};
 struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
};
 struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  struct Cyc_List_List * f2;
};
 struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct {
  int tag;
  void * f1;
  struct Cyc_Absyn_Exp * f2;
  long f3;
  enum Cyc_Absyn_Coercion f4;
};
 struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
};
 struct Cyc_Absyn_New_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  struct Cyc_Absyn_Exp * f2;
  struct Cyc_Absyn_Exp * f3;
};
 struct Cyc_Absyn_Sizeofexp_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
};
 struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
};
 struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  struct _fat_ptr * f2;
  long f3;
  long f4;
};
 struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  struct _fat_ptr * f2;
  long f3;
  long f4;
};
 struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  struct Cyc_Absyn_Exp * f2;
};
 struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_List_List * f1;
};
 struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Vardecl * f1;
  struct Cyc_Absyn_Exp * f2;
  struct Cyc_Absyn_Exp * f3;
  long f4;
};
 struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  void * f2;
  long f3;
};
 struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct {
  int tag;
  struct _tuple0 * f1;
  struct Cyc_List_List * f2;
  struct Cyc_List_List * f3;
  struct Cyc_Absyn_Aggrdecl * f4;
};
 struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct {
  int tag;
  void * f1;
  long f2;
  struct Cyc_List_List * f3;
};
 struct Cyc_Absyn_Datatype_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_List_List * f1;
  struct Cyc_Absyn_Datatypedecl * f2;
  struct Cyc_Absyn_Datatypefield * f3;
};
 struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_MallocInfo f1;
};
 struct Cyc_Absyn_Swap_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  struct Cyc_Absyn_Exp * f2;
};
 struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Stmt * f1;
};
 struct Cyc_Absyn_Tagcheck_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  struct _fat_ptr * f2;
};
 struct Cyc_Absyn_Extension_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
};
 struct Cyc_Absyn_Assert_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  long f2;
  long f3;
};
 struct Cyc_Absyn_Assert_false_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
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
 struct _tuple9 {
  struct Cyc_Absyn_Exp * f0;
  struct Cyc_Absyn_Stmt * f1;
};
 struct Cyc_Absyn_While_s_Absyn_Raw_stmt_struct {
  int tag;
  struct _tuple9 f1;
  struct Cyc_Absyn_Stmt * f2;
};
 struct Cyc_Absyn_For_s_Absyn_Raw_stmt_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  struct _tuple9 f2;
  struct _tuple9 f3;
  struct Cyc_Absyn_Stmt * f4;
};
 struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  struct Cyc_List_List * f2;
  void * f3;
};
 struct Cyc_Absyn_Fallthru_s_Absyn_Raw_stmt_struct {
  int tag;
  struct Cyc_List_List * f1;
  struct Cyc_Absyn_Switch_clause * * f2;
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
 struct Cyc_Absyn_Do_s_Absyn_Raw_stmt_struct {
  int tag;
  struct Cyc_Absyn_Stmt * f1;
  struct _tuple9 f2;
};
 struct Cyc_Absyn_TryCatch_s_Absyn_Raw_stmt_struct {
  int tag;
  struct Cyc_Absyn_Stmt * f1;
  struct Cyc_List_List * f2;
  void * f3;
};
 struct Cyc_Absyn_Stmt {
  void * r;
  unsigned int loc;
  void * annot;
};
 struct Cyc_Absyn_Pat {
  void * r;
  void * topt;
  unsigned int loc;
};
 struct Cyc_Absyn_Switch_clause {
  struct Cyc_Absyn_Pat * pattern;
  struct Cyc_Core_Opt * pat_vars;
  struct Cyc_Absyn_Exp * where_clause;
  struct Cyc_Absyn_Stmt * body;
  unsigned int loc;
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
 struct Cyc_Absyn_AggrdeclImpl {
  struct Cyc_List_List * exist_vars;
  struct Cyc_List_List * qual_bnd;
  struct Cyc_List_List * fields;
  long tagged;
  struct Cyc_List_List * effconstr;
};
 struct Cyc_Absyn_Aggrdecl {
  enum Cyc_Absyn_AggrKind kind;
  enum Cyc_Absyn_Scope sc;
  struct _tuple0 * name;
  struct Cyc_List_List * tvs;
  struct Cyc_Absyn_AggrdeclImpl * impl;
  struct Cyc_List_List * attributes;
  long expected_mem_kind;
};
 struct Cyc_Absyn_Datatypefield {
  struct _tuple0 * name;
  struct Cyc_List_List * typs;
  unsigned int loc;
  enum Cyc_Absyn_Scope sc;
};
 struct Cyc_Absyn_Datatypedecl {
  enum Cyc_Absyn_Scope sc;
  struct _tuple0 * name;
  struct Cyc_List_List * tvs;
  struct Cyc_Core_Opt * fields;
  long is_extensible;
};
 struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct {
  int tag;
  struct Cyc_Absyn_Vardecl * f1;
};
 struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct {
  int tag;
  struct Cyc_Absyn_Fndecl * f1;
};
 struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct {
  int tag;
  struct Cyc_Absyn_Pat * f1;
  struct Cyc_Core_Opt * f2;
  struct Cyc_Absyn_Exp * f3;
  void * f4;
};
 struct Cyc_Absyn_Region_d_Absyn_Raw_decl_struct {
  int tag;
  struct Cyc_Absyn_Tvar * f1;
  struct Cyc_Absyn_Vardecl * f2;
  struct Cyc_Absyn_Exp * f3;
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
 struct Cyc_Absyn_Decl {
  void * r;
  unsigned int loc;
};
extern char Cyc_Absyn_EmptyAnnot[11U];
 struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct {
  char * tag;
};
int Cyc_Absyn_qvar_cmp(struct _tuple0 *,struct _tuple0 *);
int Cyc_Absyn_hash_qvar(struct _tuple0 *);
void * Cyc_Absyn_compress(void *);
void * Cyc_Absyn_bounds_one();
struct Cyc_Absyn_Exp * Cyc_Absyn_uint_exp(unsigned int,unsigned int);
void Cyc_Absyn_visit_stmt(long (*)(void *,struct Cyc_Absyn_Exp *),long (*)(void *,
									   struct Cyc_Absyn_Stmt *),
			  void *,struct Cyc_Absyn_Stmt *);
void Cyc_Absyn_visit_exp(long (*)(void *,struct Cyc_Absyn_Exp *),long (*)(void *,
									  struct Cyc_Absyn_Stmt *),
			 void *,struct Cyc_Absyn_Exp *);
struct Cyc_Hashtable_Table;
extern struct Cyc_Hashtable_Table * Cyc_Hashtable_create(int,int (*)(void *,
								     void *),
							 int (*)(void *));
extern void Cyc_Hashtable_insert(struct Cyc_Hashtable_Table *,void *,void *);
extern void * * Cyc_Hashtable_lookup_opt(struct Cyc_Hashtable_Table *,void *);
 struct Cyc_JumpAnalysis_Jump_Anal_Result {
  struct Cyc_Hashtable_Table * pop_tables;
  struct Cyc_Hashtable_Table * succ_tables;
  struct Cyc_Hashtable_Table * pat_pop_tables;
};
extern char Cyc_InsertChecks_FatBound[9U];
 struct Cyc_InsertChecks_FatBound_Absyn_AbsynAnnot_struct {
  char * tag;
};
extern char Cyc_InsertChecks_NoCheck[8U];
 struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct {
  char * tag;
};
extern char Cyc_InsertChecks_NullAndFatBound[16U];
 struct Cyc_InsertChecks_NullAndFatBound_Absyn_AbsynAnnot_struct {
  char * tag;
};
extern char Cyc_InsertChecks_NullAndThinBound[17U];
 struct Cyc_InsertChecks_NullAndThinBound_Absyn_AbsynAnnot_struct {
  char * tag;
  struct Cyc_Absyn_Exp * f1;
};
extern char Cyc_InsertChecks_NullOnly[9U];
 struct Cyc_InsertChecks_NullOnly_Absyn_AbsynAnnot_struct {
  char * tag;
};
extern char Cyc_InsertChecks_ThinBound[10U];
 struct Cyc_InsertChecks_ThinBound_Absyn_AbsynAnnot_struct {
  char * tag;
  struct Cyc_Absyn_Exp * f1;
};
extern struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct Cyc_InsertChecks_NoCheck_val;
extern struct Cyc_InsertChecks_NullOnly_Absyn_AbsynAnnot_struct Cyc_InsertChecks_NullOnly_val;
extern struct Cyc_InsertChecks_NullAndFatBound_Absyn_AbsynAnnot_struct Cyc_InsertChecks_NullAndFatBound_val;
extern struct Cyc_InsertChecks_FatBound_Absyn_AbsynAnnot_struct Cyc_InsertChecks_FatBound_val;
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
 struct Cyc_Double_pa_PrintArg_struct {
  int tag;
  double f1;
};
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);
extern int Cyc_fprintf(struct Cyc___cycFILE *,struct _fat_ptr,struct _fat_ptr);
struct _fat_ptr Cyc_Absynpp_exp2string(struct Cyc_Absyn_Exp *);
struct Cyc_Dict_T;
 struct Cyc_Dict_Dict {
  int (* rel)(void *,void *);
  struct _RegionHandle * r;
  const struct Cyc_Dict_T * t;
};
struct Cyc_Set_Set;
extern struct Cyc_List_List * Cyc_Graph_tsort(struct Cyc_Dict_Dict);
struct Cyc_Dict_Dict Cyc_Callgraph_compute_callgraph(struct Cyc_List_List *);
extern char Cyc_CfFlowInfo_IsZero[7U];
 struct Cyc_CfFlowInfo_IsZero_Absyn_AbsynAnnot_struct {
  char * tag;
};
extern char Cyc_CfFlowInfo_NotZero[8U];
 struct Cyc_CfFlowInfo_NotZero_Absyn_AbsynAnnot_struct {
  char * tag;
};
extern char Cyc_CfFlowInfo_UnknownZ[9U];
 struct Cyc_CfFlowInfo_UnknownZ_Absyn_AbsynAnnot_struct {
  char * tag;
};
 struct _tuple11 {
  unsigned int f0;
  long f1;
};
extern struct _tuple11 Cyc_Evexp_eval_const_uint_exp(struct Cyc_Absyn_Exp *);
extern long Cyc_Evexp_c_can_eval(struct Cyc_Absyn_Exp *);
extern long Cyc_Evexp_lte_const_exp(struct Cyc_Absyn_Exp *,struct Cyc_Absyn_Exp *);
extern long Cyc_Flags_verbose;
extern long Cyc_Flags_warn_bounds_checks;
extern long Cyc_Flags_warn_all_null_deref;
extern struct _fat_ptr Cyc_AssnDef_assn2string(void *);
 struct Cyc_AssnDef_AssnFn {
  struct Cyc_List_List * actuals;
  void * assn;
};
 struct Cyc_AssnDef_ExistAssnFn {
  struct Cyc_AssnDef_AssnFn * af;
  struct Cyc_Set_Set * existvars;
};
 struct Cyc_AssnDef_AssnMap {
  void * assn;
  struct Cyc_Dict_Dict map;
};
extern struct _fat_ptr Cyc_AssnDef_assnmap2string(struct Cyc_AssnDef_AssnMap);
extern long Cyc_AssnDef_simple_prove(void *,void *);
void Cyc_AssnDef_reset_hash_cons_table();
long Cyc_PrattProver_constraint_prove(void *,void *);
long Cyc_Tcutil_is_zeroterm_pointer_type(void *);
struct Cyc_Absyn_Exp * Cyc_Tcutil_get_bounds_exp_constrain(void *,void *,
							   long);
struct Cyc_Absyn_Exp * Cyc_Tcutil_get_type_bound(void *);
long Cyc_Tcutil_is_const_exp(struct Cyc_Absyn_Exp *);
long Cyc_Tcutil_force_type2bool(long,void *);
 struct Cyc_Vcgen_ExpChecks {
  struct Cyc_AssnDef_AssnMap ctxt;
  void * bounds_check;
  void * null_check;
};
extern void Cyc_Vcgen_vcgen_fundecl(unsigned int,struct Cyc_JumpAnalysis_Jump_Anal_Result *,
				    struct Cyc_Absyn_Fndecl *,struct Cyc_Hashtable_Table * *,
				    struct Cyc_Hashtable_Table *,long);
struct Cyc_Vcgen_ExpChecks * Cyc_Vcgen_exp2ctxt_checks(struct Cyc_Hashtable_Table * *,
						       struct Cyc_Absyn_Exp *);
struct Cyc___cycFILE;
extern struct Cyc___cycFILE * Cyc_stderr;
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);
extern int Cyc_fprintf(struct Cyc___cycFILE *,struct _fat_ptr,struct _fat_ptr);
void Cyc_Warn_warn(unsigned int,struct _fat_ptr,struct _fat_ptr);
void Cyc_Warn_err(unsigned int,struct _fat_ptr,struct _fat_ptr);
void * Cyc_Warn_impos(struct _fat_ptr,struct _fat_ptr);
void * Cyc_Warn_impos_loc(unsigned int,struct _fat_ptr,struct _fat_ptr);
char Cyc_InsertChecks_FatBound[9U] = "FatBound";
char Cyc_InsertChecks_NoCheck[8U] = "NoCheck";
char Cyc_InsertChecks_NullAndFatBound[16U] = "NullAndFatBound";
char Cyc_InsertChecks_NullAndThinBound[17U] = "NullAndThinBound";
char Cyc_InsertChecks_NullOnly[9U] = "NullOnly";
char Cyc_InsertChecks_ThinBound[10U] = "ThinBound";
struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct Cyc_InsertChecks_NoCheck_val = {Cyc_InsertChecks_NoCheck};
struct Cyc_InsertChecks_NullOnly_Absyn_AbsynAnnot_struct Cyc_InsertChecks_NullOnly_val = {Cyc_InsertChecks_NullOnly};
struct Cyc_InsertChecks_NullAndFatBound_Absyn_AbsynAnnot_struct Cyc_InsertChecks_NullAndFatBound_val = {Cyc_InsertChecks_NullAndFatBound};
struct Cyc_InsertChecks_FatBound_Absyn_AbsynAnnot_struct Cyc_InsertChecks_FatBound_val = {Cyc_InsertChecks_FatBound};
static unsigned int Cyc_InsertChecks_total_bounds_checks = 0U;
static unsigned int Cyc_InsertChecks_types_eliminated_bounds_checks = 0U;
static unsigned int Cyc_InsertChecks_simple_eliminated_bounds_checks = 0U;
static unsigned int Cyc_InsertChecks_constraints_eliminated_bounds_checks = 0U;
static unsigned int Cyc_InsertChecks_total_null_checks = 0U;
static unsigned int Cyc_InsertChecks_types_eliminated_null_checks = 0U;
static unsigned int Cyc_InsertChecks_flow_eliminated_null_checks = 0U;
static unsigned int Cyc_InsertChecks_simple_eliminated_null_checks = 0U;
static unsigned int Cyc_InsertChecks_constraints_eliminated_null_checks = 0U;
static void Cyc_InsertChecks_reset_counters() {
  Cyc_InsertChecks_total_bounds_checks = 0U;
  Cyc_InsertChecks_types_eliminated_bounds_checks = 0U;
  Cyc_InsertChecks_simple_eliminated_bounds_checks = 0U;
  Cyc_InsertChecks_constraints_eliminated_bounds_checks = 0U;
  Cyc_InsertChecks_total_null_checks = 0U;
  Cyc_InsertChecks_types_eliminated_null_checks = 0U;
  Cyc_InsertChecks_flow_eliminated_null_checks = 0U;
  Cyc_InsertChecks_simple_eliminated_null_checks = 0U;
  Cyc_InsertChecks_constraints_eliminated_null_checks = 0U;
}
static struct Cyc_Absyn_Exp * Cyc_InsertChecks_shared_zero_exp() {
  struct Cyc_Absyn_Exp * _T0;
  unsigned int _T1;
  struct Cyc_Absyn_Exp * _T2;
  static struct Cyc_Absyn_Exp * ans = 0;
  _T0 = ans;
  _T1 = (unsigned int)_T0;
  if (_T1) { goto _TL0;
  }else { goto _TL2;
  }
  _TL2: ans = Cyc_Absyn_uint_exp(0U,0U);
  goto _TL1;
  _TL0: _TL1: _T2 = ans;
  return _T2;
}
 struct Cyc_InsertChecks_Env {
  struct Cyc_JumpAnalysis_Jump_Anal_Result * tables;
  struct Cyc_Hashtable_Table * * assn_info;
  struct Cyc_Hashtable_Table * fn_precond_info;
  unsigned int pass_counter;
  long use_precond:1;
  long in_sizeof:1;
  long at_toplevel:1;
  long vcgen_r:1;
};
static int Cyc_InsertChecks_hash_ptr(void * s) {
  void * _T0;
  int _T1;
  _T0 = s;
  _T1 = (int)_T0;
  return _T1;
}
static struct Cyc_InsertChecks_Env Cyc_InsertChecks_toplevel_env(struct Cyc_JumpAnalysis_Jump_Anal_Result * tables,
								 long do_vcgen) {
  struct Cyc_Hashtable_Table * (* _T0)(int,int (*)(struct _tuple0 *,struct _tuple0 *),
				       int (*)(struct _tuple0 *));
  struct Cyc_Hashtable_Table * (* _T1)(int,int (*)(void *,void *),int (*)(void *));
  int (* _T2)(struct _tuple0 *,struct _tuple0 *);
  int (* _T3)(struct _tuple0 *);
  struct Cyc_InsertChecks_Env _T4;
  _T1 = Cyc_Hashtable_create;
  { struct Cyc_Hashtable_Table * (* _T5)(int,int (*)(struct _tuple0 *,struct _tuple0 *),
					 int (*)(struct _tuple0 *)) = (struct Cyc_Hashtable_Table * (*)(int,
													int (*)(struct _tuple0 *,
														struct _tuple0 *),
													int (*)(struct _tuple0 *)))_T1;
    _T0 = _T5;
  }_T2 = Cyc_Absyn_qvar_cmp;
  _T3 = Cyc_Absyn_hash_qvar;
  { struct Cyc_Hashtable_Table * fn_precond_info = _T0(313,_T2,_T3);
    { struct Cyc_InsertChecks_Env _T5;
      _T5.tables = tables;
      _T5.assn_info = 0;
      _T5.fn_precond_info = fn_precond_info;
      _T5.pass_counter = 1U;
      _T5.use_precond = 0;
      _T5.in_sizeof = 0;
      _T5.at_toplevel = 1;
      _T5.vcgen_r = do_vcgen;
      _T4 = _T5;
    }return _T4;
  }
}
static struct Cyc_InsertChecks_Env Cyc_InsertChecks_fn_body_env(struct Cyc_InsertChecks_Env nv) {
  struct Cyc_InsertChecks_Env _T0;
  struct Cyc_InsertChecks_Env _T1;
  struct Cyc_InsertChecks_Env _T2;
  struct Cyc_InsertChecks_Env _T3;
  struct Cyc_InsertChecks_Env _T4;
  struct Cyc_InsertChecks_Env _T5;
  struct Cyc_InsertChecks_Env _T6;
  { struct Cyc_InsertChecks_Env _T7;
    _T1 = nv;
    _T7.tables = _T1.tables;
    _T2 = nv;
    _T7.assn_info = _T2.assn_info;
    _T3 = nv;
    _T7.fn_precond_info = _T3.fn_precond_info;
    _T4 = nv;
    _T7.pass_counter = _T4.pass_counter;
    _T5 = nv;
    _T7.use_precond = _T5.use_precond;
    _T7.in_sizeof = 0;
    _T7.at_toplevel = 0;
    _T6 = nv;
    _T7.vcgen_r = _T6.vcgen_r;
    _T0 = _T7;
  }return _T0;
}
static struct Cyc_InsertChecks_Env Cyc_InsertChecks_enter_sizeof(struct Cyc_InsertChecks_Env nv) {
  struct Cyc_InsertChecks_Env _T0;
  struct Cyc_InsertChecks_Env _T1;
  struct Cyc_InsertChecks_Env _T2;
  struct Cyc_InsertChecks_Env _T3;
  struct Cyc_InsertChecks_Env _T4;
  struct Cyc_InsertChecks_Env _T5;
  struct Cyc_InsertChecks_Env _T6;
  struct Cyc_InsertChecks_Env _T7;
  { struct Cyc_InsertChecks_Env _T8;
    _T1 = nv;
    _T8.tables = _T1.tables;
    _T2 = nv;
    _T8.assn_info = _T2.assn_info;
    _T3 = nv;
    _T8.fn_precond_info = _T3.fn_precond_info;
    _T4 = nv;
    _T8.pass_counter = _T4.pass_counter;
    _T5 = nv;
    _T8.use_precond = _T5.use_precond;
    _T8.in_sizeof = 1;
    _T6 = nv;
    _T8.at_toplevel = _T6.at_toplevel;
    _T7 = nv;
    _T8.vcgen_r = _T7.vcgen_r;
    _T0 = _T8;
  }return _T0;
}
 struct _tuple14 {
  long f0;
  long f1;
};
static struct _tuple14 Cyc_InsertChecks_need_bound_null_check_annot(struct Cyc_Absyn_Exp * e) {
  struct Cyc_Absyn_Exp * _T0;
  struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct * _T1;
  char * _T2;
  char * _T3;
  struct Cyc_InsertChecks_FatBound_Absyn_AbsynAnnot_struct * _T4;
  char * _T5;
  char * _T6;
  struct Cyc_InsertChecks_ThinBound_Absyn_AbsynAnnot_struct * _T7;
  char * _T8;
  char * _T9;
  struct Cyc_InsertChecks_NullOnly_Absyn_AbsynAnnot_struct * _TA;
  char * _TB;
  char * _TC;
  struct _tuple14 _TD;
  long bds_ck;
  long null_ck;
  _T0 = e;
  { void * _TE = _T0->annot;
    _T1 = (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct *)_TE;
    _T2 = _T1->tag;
    _T3 = Cyc_InsertChecks_NoCheck;
    if (_T2 != _T3) { goto _TL3;
    }
    bds_ck = 0;
    null_ck = 0;
    goto _LL0;
    _TL3: _T4 = (struct Cyc_InsertChecks_FatBound_Absyn_AbsynAnnot_struct *)_TE;
    _T5 = _T4->tag;
    _T6 = Cyc_InsertChecks_FatBound;
    if (_T5 != _T6) { goto _TL5;
    }
    bds_ck = 1;
    null_ck = 0;
    goto _LL0;
    _TL5: _T7 = (struct Cyc_InsertChecks_ThinBound_Absyn_AbsynAnnot_struct *)_TE;
    _T8 = _T7->tag;
    _T9 = Cyc_InsertChecks_ThinBound;
    if (_T8 != _T9) { goto _TL7;
    }
    bds_ck = 1;
    null_ck = 0;
    goto _LL0;
    _TL7: _TA = (struct Cyc_InsertChecks_NullOnly_Absyn_AbsynAnnot_struct *)_TE;
    _TB = _TA->tag;
    _TC = Cyc_InsertChecks_NullOnly;
    if (_TB != _TC) { goto _TL9;
    }
    bds_ck = 0;
    null_ck = 1;
    goto _LL0;
    _TL9: bds_ck = 1;
    null_ck = 1;
    _LL0: ;
  }{ struct _tuple14 _TE;
    _TE.f0 = bds_ck;
    _TE.f1 = null_ck;
    _TD = _TE;
  }return _TD;
}
static long Cyc_InsertChecks_need_null_check(struct Cyc_InsertChecks_Env nv,
					     struct Cyc_Absyn_Exp * e,struct Cyc_Absyn_Exp * e0) {
  struct Cyc_InsertChecks_Env _T0;
  unsigned int _T1;
  long _T2;
  struct Cyc_InsertChecks_Env _T3;
  long _T4;
  struct Cyc_Absyn_Exp * _T5;
  void * _T6;
  void * _T7;
  int * _T8;
  int _T9;
  struct Cyc_Absyn_PtrInfo _TA;
  struct Cyc_Absyn_PtrAtts _TB;
  long _TC;
  int (* _TD)(unsigned int,struct _fat_ptr,struct _fat_ptr);
  void * (* _TE)(unsigned int,struct _fat_ptr,struct _fat_ptr);
  struct Cyc_Absyn_Exp * _TF;
  unsigned int _T10;
  struct _fat_ptr _T11;
  struct _fat_ptr _T12;
  struct Cyc_Absyn_Exp * _T13;
  struct Cyc_CfFlowInfo_UnknownZ_Absyn_AbsynAnnot_struct * _T14;
  char * _T15;
  char * _T16;
  struct Cyc_CfFlowInfo_NotZero_Absyn_AbsynAnnot_struct * _T17;
  char * _T18;
  char * _T19;
  struct Cyc_CfFlowInfo_IsZero_Absyn_AbsynAnnot_struct * _T1A;
  char * _T1B;
  char * _T1C;
  struct Cyc_Absyn_Exp * _T1D;
  unsigned int _T1E;
  struct _fat_ptr _T1F;
  struct _fat_ptr _T20;
  struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct * _T21;
  char * _T22;
  char * _T23;
  int (* _T24)(unsigned int,struct _fat_ptr,struct _fat_ptr);
  void * (* _T25)(unsigned int,struct _fat_ptr,struct _fat_ptr);
  struct Cyc_Absyn_Exp * _T26;
  unsigned int _T27;
  struct _fat_ptr _T28;
  struct _fat_ptr _T29;
  struct Cyc_InsertChecks_Env _T2A;
  long _T2B;
  struct Cyc_Absyn_Exp * _T2C;
  unsigned int _T2D;
  struct _fat_ptr _T2E;
  struct _fat_ptr _T2F;
  _T0 = nv;
  _T1 = _T0.pass_counter;
  if (_T1 <= 1U) { goto _TLB;
  }
  { struct _tuple14 _T30 = Cyc_InsertChecks_need_bound_null_check_annot(e0);
    long _T31;
    _T31 = _T30.f1;
    { long null_ck = _T31;
      _T2 = null_ck;
      return _T2;
    }
  }_TLB: _T3 = nv;
  _T4 = _T3.in_sizeof;
  if (! _T4) { goto _TLD;
  }
  return 0;
  _TLD: Cyc_InsertChecks_total_null_checks = Cyc_InsertChecks_total_null_checks + 1;
  _T5 = e;
  _T6 = _T5->topt;
  _T7 = _check_null(_T6);
  { void * _T30 = Cyc_Absyn_compress(_T7);
    void * _T31;
    _T8 = (int *)_T30;
    _T9 = *_T8;
    if (_T9 != 4) { goto _TLF;
    }
    { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T32 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T30;
      _TA = _T32->f1;
      _TB = _TA.ptr_atts;
      _T31 = _TB.nullable;
    }{ void * n = _T31;
      _TC = Cyc_Tcutil_force_type2bool(0,n);
      if (_TC) { goto _TL11;
      }else { goto _TL13;
      }
      _TL13: Cyc_InsertChecks_types_eliminated_null_checks = Cyc_InsertChecks_types_eliminated_null_checks + 1;
      return 0;
      _TL11: goto _LL3;
    }_TLF: _TE = Cyc_Warn_impos_loc;
    { int (* _T32)(unsigned int,struct _fat_ptr,struct _fat_ptr) = (int (*)(unsigned int,
									    struct _fat_ptr,
									    struct _fat_ptr))_TE;
      _TD = _T32;
    }_TF = e;
    _T10 = _TF->loc;
    _T11 = _tag_fat("need_null_check: non-pointer type",sizeof(char),34U);
    _T12 = _tag_fat(0U,sizeof(void *),0);
    _TD(_T10,_T11,_T12);
    _LL3: ;
  }_T13 = e;
  { void * _T30 = _T13->annot;
    _T14 = (struct Cyc_CfFlowInfo_UnknownZ_Absyn_AbsynAnnot_struct *)_T30;
    _T15 = _T14->tag;
    _T16 = Cyc_CfFlowInfo_UnknownZ;
    if (_T15 != _T16) { goto _TL14;
    }
    goto _LL8;
    _TL14: _T17 = (struct Cyc_CfFlowInfo_NotZero_Absyn_AbsynAnnot_struct *)_T30;
    _T18 = _T17->tag;
    _T19 = Cyc_CfFlowInfo_NotZero;
    if (_T18 != _T19) { goto _TL16;
    }
    Cyc_InsertChecks_flow_eliminated_null_checks = Cyc_InsertChecks_flow_eliminated_null_checks + 1;
    return 0;
    _TL16: _T1A = (struct Cyc_CfFlowInfo_IsZero_Absyn_AbsynAnnot_struct *)_T30;
    _T1B = _T1A->tag;
    _T1C = Cyc_CfFlowInfo_IsZero;
    if (_T1B != _T1C) { goto _TL18;
    }
    _T1D = e;
    _T1E = _T1D->loc;
    _T1F = _tag_fat("NULL pointer check will definitely fail",sizeof(char),
		    40U);
    _T20 = _tag_fat(0U,sizeof(void *),0);
    Cyc_Warn_err(_T1E,_T1F,_T20);
    return 0;
    _TL18: _T21 = (struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct *)_T30;
    _T22 = _T21->tag;
    _T23 = Cyc_Absyn_EmptyAnnot;
    if (_T22 != _T23) { goto _TL1A;
    }
    Cyc_InsertChecks_flow_eliminated_null_checks = Cyc_InsertChecks_flow_eliminated_null_checks + 1;
    return 0;
    _TL1A: _T25 = Cyc_Warn_impos_loc;
    { int (* _T31)(unsigned int,struct _fat_ptr,struct _fat_ptr) = (int (*)(unsigned int,
									    struct _fat_ptr,
									    struct _fat_ptr))_T25;
      _T24 = _T31;
    }_T26 = e;
    _T27 = _T26->loc;
    _T28 = _tag_fat("need_null_check: unexpected annotation",sizeof(char),
		    39U);
    _T29 = _tag_fat(0U,sizeof(void *),0);
    _T24(_T27,_T28,_T29);
    _LL8: ;
  }_T2A = nv;
  _T2B = _T2A.at_toplevel;
  if (! _T2B) { goto _TL1C;
  }
  _T2C = e;
  _T2D = _T2C->loc;
  _T2E = _tag_fat("cannot perform NULL-pointer check at toplevel",sizeof(char),
		  46U);
  _T2F = _tag_fat(0U,sizeof(void *),0);
  Cyc_Warn_err(_T2D,_T2E,_T2F);
  return 0;
  _TL1C: return 1;
}
static long Cyc_InsertChecks_simple_need_bounds_check(struct Cyc_InsertChecks_Env nv,
						      struct Cyc_Absyn_Exp * a,
						      struct Cyc_Absyn_Exp * i) {
  struct Cyc_InsertChecks_Env _T0;
  long _T1;
  struct Cyc_InsertChecks_Env _T2;
  long _T3;
  int (* _T4)(unsigned int,struct _fat_ptr,struct _fat_ptr);
  void * (* _T5)(unsigned int,struct _fat_ptr,struct _fat_ptr);
  struct Cyc_Absyn_Exp * _T6;
  unsigned int _T7;
  struct _fat_ptr _T8;
  struct _fat_ptr _T9;
  struct Cyc_Absyn_Exp * _TA;
  void * _TB;
  void * _TC;
  long _TD;
  long _TE;
  long _TF;
  long _T10;
  _T0 = nv;
  _T1 = _T0.in_sizeof;
  if (! _T1) { goto _TL1E;
  }
  return 0;
  _TL1E: Cyc_InsertChecks_total_bounds_checks = Cyc_InsertChecks_total_bounds_checks + 1;
  _T2 = nv;
  _T3 = _T2.at_toplevel;
  if (! _T3) { goto _TL20;
  }
  _T5 = Cyc_Warn_impos_loc;
  { int (* _T11)(unsigned int,struct _fat_ptr,struct _fat_ptr) = (int (*)(unsigned int,
									  struct _fat_ptr,
									  struct _fat_ptr))_T5;
    _T4 = _T11;
  }_T6 = a;
  _T7 = _T6->loc;
  _T8 = _tag_fat("InsertChecks: memory read at top-level",sizeof(char),39U);
  _T9 = _tag_fat(0U,sizeof(void *),0);
  _T4(_T7,_T8,_T9);
  goto _TL21;
  _TL20: _TL21: _TA = a;
  _TB = _TA->topt;
  _TC = _check_null(_TB);
  { struct Cyc_Absyn_Exp * bound_opt = Cyc_Tcutil_get_type_bound(_TC);
    if (bound_opt != 0) { goto _TL22;
    }
    return 1;
    _TL22: { struct Cyc_Absyn_Exp * bound = bound_opt;
      _TD = Cyc_Tcutil_is_const_exp(bound);
      if (_TD) { goto _TL27;
      }else { goto _TL26;
      }
      _TL27: _TE = Cyc_Tcutil_is_const_exp(i);
      if (_TE) { goto _TL24;
      }else { goto _TL26;
      }
      _TL26: return 1;
      _TL24: { struct _tuple11 _T11 = Cyc_Evexp_eval_const_uint_exp(bound);
	long _T12;
	unsigned int _T13;
	_T13 = _T11.f0;
	_T12 = _T11.f1;
	{ unsigned int b = _T13;
	  long b_known = _T12;
	  struct _tuple11 _T14 = Cyc_Evexp_eval_const_uint_exp(i);
	  long _T15;
	  unsigned int _T16;
	  _T16 = _T14.f0;
	  _T15 = _T14.f1;
	  { unsigned int i = _T16;
	    long i_known = _T15;
	    _TF = b_known;
	    if (_TF) { goto _TL2C;
	    }else { goto _TL2A;
	    }
	    _TL2C: _T10 = i_known;
	    if (_T10) { goto _TL2B;
	    }else { goto _TL2A;
	    }
	    _TL2B: if (i >= b) { goto _TL2A;
	    }else { goto _TL28;
	    }
	    _TL2A: return 1;
	    _TL28: Cyc_InsertChecks_types_eliminated_bounds_checks = Cyc_InsertChecks_types_eliminated_bounds_checks + 1;
	    return 0;
	  }
	}
      }
    }
  }
}
static void Cyc_InsertChecks_do_stmt(struct Cyc_InsertChecks_Env,struct Cyc_Absyn_Stmt *);
static void Cyc_InsertChecks_do_exp(struct Cyc_InsertChecks_Env,struct Cyc_Absyn_Exp *);
static void Cyc_InsertChecks_do_exp_opt(struct Cyc_InsertChecks_Env nv,struct Cyc_Absyn_Exp * eo) {
  if (eo == 0) { goto _TL2D;
  }
  Cyc_InsertChecks_do_exp(nv,eo);
  goto _TL2E;
  _TL2D: _TL2E: ;
}
static long Cyc_InsertChecks_need_null_check_vcgen(struct Cyc_InsertChecks_Env nv,
						   struct Cyc_Absyn_Exp * a) {
  struct Cyc_InsertChecks_Env _T0;
  struct Cyc_Hashtable_Table * * _T1;
  struct Cyc_Absyn_Exp * _T2;
  struct Cyc_Vcgen_ExpChecks * _T3;
  struct Cyc_AssnDef_AssnMap _T4;
  void * _T5;
  struct Cyc_Vcgen_ExpChecks * _T6;
  void * _T7;
  long _T8;
  struct Cyc_Vcgen_ExpChecks * _T9;
  struct Cyc_AssnDef_AssnMap _TA;
  void * _TB;
  struct Cyc_Vcgen_ExpChecks * _TC;
  void * _TD;
  long _TE;
  int _TF;
  _T0 = nv;
  _T1 = _T0.assn_info;
  _T2 = a;
  { struct Cyc_Vcgen_ExpChecks * ec = Cyc_Vcgen_exp2ctxt_checks(_T1,_T2);
    _T3 = ec;
    _T4 = _T3->ctxt;
    _T5 = _T4.assn;
    _T6 = ec;
    _T7 = _T6->null_check;
    { long res = Cyc_AssnDef_simple_prove(_T5,_T7);
      _T8 = res;
      if (! _T8) { goto _TL2F;
      }
      Cyc_InsertChecks_simple_eliminated_null_checks = Cyc_InsertChecks_simple_eliminated_null_checks + 1;
      goto _TL30;
      _TL2F: _T9 = ec;
      _TA = _T9->ctxt;
      _TB = _TA.assn;
      _TC = ec;
      _TD = _TC->null_check;
      res = Cyc_PrattProver_constraint_prove(_TB,_TD);
      _TE = res;
      if (! _TE) { goto _TL31;
      }
      Cyc_InsertChecks_constraints_eliminated_null_checks = Cyc_InsertChecks_constraints_eliminated_null_checks + 1;
      goto _TL32;
      _TL31: _TL32: _TL30: _TF = ! res;
      return _TF;
    }
  }
}
static long Cyc_InsertChecks_need_bounds_check_vcgen(struct Cyc_InsertChecks_Env nv,
						     struct Cyc_Absyn_Exp * a) {
  struct Cyc_InsertChecks_Env _T0;
  struct Cyc_Hashtable_Table * * _T1;
  struct Cyc_Absyn_Exp * _T2;
  struct Cyc_Vcgen_ExpChecks * _T3;
  struct Cyc_AssnDef_AssnMap _T4;
  void * _T5;
  struct Cyc_Vcgen_ExpChecks * _T6;
  void * _T7;
  long _T8;
  struct Cyc_Vcgen_ExpChecks * _T9;
  struct Cyc_AssnDef_AssnMap _TA;
  void * _TB;
  struct Cyc_Vcgen_ExpChecks * _TC;
  void * _TD;
  long _TE;
  int _TF;
  _T0 = nv;
  _T1 = _T0.assn_info;
  _T2 = a;
  { struct Cyc_Vcgen_ExpChecks * ec = Cyc_Vcgen_exp2ctxt_checks(_T1,_T2);
    _T3 = ec;
    _T4 = _T3->ctxt;
    _T5 = _T4.assn;
    _T6 = ec;
    _T7 = _T6->bounds_check;
    { long res = Cyc_AssnDef_simple_prove(_T5,_T7);
      _T8 = res;
      if (! _T8) { goto _TL33;
      }
      Cyc_InsertChecks_simple_eliminated_bounds_checks = Cyc_InsertChecks_simple_eliminated_bounds_checks + 1;
      goto _TL34;
      _TL33: _T9 = ec;
      _TA = _T9->ctxt;
      _TB = _TA.assn;
      _TC = ec;
      _TD = _TC->bounds_check;
      res = Cyc_PrattProver_constraint_prove(_TB,_TD);
      _TE = res;
      if (! _TE) { goto _TL35;
      }
      Cyc_InsertChecks_constraints_eliminated_bounds_checks = Cyc_InsertChecks_constraints_eliminated_bounds_checks + 1;
      goto _TL36;
      _TL35: _TL36: _TL34: _TF = ! res;
      return _TF;
    }
  }
}
 struct _tuple15 {
  void * f0;
  void * f1;
};
 struct _tuple16 {
  struct Cyc_Absyn_Exp * f0;
  struct Cyc_Absyn_Exp * f1;
};
 struct _tuple17 {
  struct Cyc_List_List * f0;
  struct Cyc_Absyn_Exp * f1;
};
static void Cyc_InsertChecks_do_exp(struct Cyc_InsertChecks_Env nv,struct Cyc_Absyn_Exp * e) {
  struct Cyc_Absyn_Exp * _T0;
  int * _T1;
  unsigned int _T2;
  struct Cyc_Absyn_Exp * _T3;
  struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct * _T4;
  struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct * _T5;
  struct Cyc_Absyn_Exp * _T6;
  struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct * _T7;
  struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct * _T8;
  struct Cyc_InsertChecks_Env _T9;
  struct Cyc_List_List * _TA;
  void * _TB;
  struct Cyc_Absyn_Exp * _TC;
  struct Cyc_List_List * _TD;
  struct Cyc_Absyn_Exp * _TE;
  struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct * _TF;
  struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct * _T10;
  struct Cyc_Absyn_Exp * _T11;
  struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct * _T12;
  struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct * _T13;
  struct Cyc_Absyn_Exp * _T14;
  void * _T15;
  struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct * _T16;
  struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct * _T17;
  void * _T18;
  struct Cyc_Absyn_Exp * _T19;
  void * _T1A;
  void * _T1B;
  struct Cyc_Absyn_Exp * _T1C;
  struct Cyc_Absyn_Exp * _T1D;
  void * _T1E;
  void * _T1F;
  long _T20;
  long _T21;
  long _T22;
  long _T23;
  struct Cyc_Absyn_Exp * _T24;
  unsigned int _T25;
  struct _fat_ptr _T26;
  struct _fat_ptr _T27;
  struct Cyc_Absyn_Exp * _T28;
  struct Cyc_InsertChecks_NullOnly_Absyn_AbsynAnnot_struct * _T29;
  struct Cyc_InsertChecks_NullOnly_Absyn_AbsynAnnot_struct * _T2A;
  struct Cyc_Absyn_Exp * _T2B;
  struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct * _T2C;
  struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct * _T2D;
  long _T2E;
  long _T2F;
  struct Cyc_Absyn_Exp * _T30;
  struct Cyc_InsertChecks_NullOnly_Absyn_AbsynAnnot_struct * _T31;
  struct Cyc_InsertChecks_NullOnly_Absyn_AbsynAnnot_struct * _T32;
  struct Cyc_Absyn_Exp * _T33;
  struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct * _T34;
  struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct * _T35;
  struct Cyc_InsertChecks_Env _T36;
  struct Cyc_List_List * _T37;
  void * _T38;
  struct Cyc_Absyn_Exp * _T39;
  struct Cyc_List_List * _T3A;
  void * _T3B;
  struct _tuple15 _T3C;
  struct Cyc_Absyn_Exp * _T3D;
  void * _T3E;
  void * _T3F;
  void * _T40;
  int * _T41;
  int _T42;
  void * _T43;
  int * _T44;
  int _T45;
  void * _T46;
  void * _T47;
  struct Cyc_Absyn_PtrInfo _T48;
  struct Cyc_Absyn_PtrAtts _T49;
  void * _T4A;
  struct Cyc_Absyn_PtrInfo _T4B;
  struct Cyc_Absyn_PtrAtts _T4C;
  void * _T4D;
  void * _T4E;
  struct Cyc_Absyn_PtrInfo _T4F;
  struct Cyc_Absyn_PtrAtts _T50;
  void * _T51;
  void * _T52;
  struct Cyc_Absyn_PtrInfo _T53;
  struct Cyc_Absyn_PtrAtts _T54;
  void * _T55;
  long _T56;
  long _T57;
  enum Cyc_Absyn_Coercion _T58;
  int _T59;
  struct Cyc_Absyn_Exp * _T5A;
  unsigned int _T5B;
  struct Cyc_Absyn_Exp * _T5C;
  unsigned int _T5D;
  int (* _T5E)(unsigned int,struct _fat_ptr,struct _fat_ptr);
  void * (* _T5F)(unsigned int,struct _fat_ptr,struct _fat_ptr);
  struct Cyc_Absyn_Exp * _T60;
  unsigned int _T61;
  struct _fat_ptr _T62;
  struct _fat_ptr _T63;
  struct Cyc_Absyn_Exp * _T64;
  unsigned int _T65;
  struct Cyc_Absyn_Exp * _T66;
  unsigned int _T67;
  enum Cyc_Absyn_Coercion _T68;
  int _T69;
  int (* _T6A)(unsigned int,struct _fat_ptr,struct _fat_ptr);
  void * (* _T6B)(unsigned int,struct _fat_ptr,struct _fat_ptr);
  struct Cyc_Absyn_Exp * _T6C;
  unsigned int _T6D;
  struct _fat_ptr _T6E;
  struct _fat_ptr _T6F;
  struct _tuple16 _T70;
  struct Cyc_Absyn_Exp * _T71;
  struct Cyc_Absyn_Exp * _T72;
  long _T73;
  int (* _T74)(unsigned int,struct _fat_ptr,struct _fat_ptr);
  void * (* _T75)(unsigned int,struct _fat_ptr,struct _fat_ptr);
  struct Cyc_Absyn_Exp * _T76;
  unsigned int _T77;
  struct _fat_ptr _T78;
  struct _fat_ptr _T79;
  long _T7A;
  long _T7B;
  long _T7C;
  long _T7D;
  long _T7E;
  struct Cyc_Absyn_Exp * _T7F;
  unsigned int _T80;
  struct _fat_ptr _T81;
  struct _fat_ptr _T82;
  struct Cyc_Absyn_Exp * _T83;
  struct Cyc_InsertChecks_NullOnly_Absyn_AbsynAnnot_struct * _T84;
  struct Cyc_InsertChecks_NullOnly_Absyn_AbsynAnnot_struct * _T85;
  struct Cyc_Absyn_Exp * _T86;
  struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct * _T87;
  struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct * _T88;
  long _T89;
  struct Cyc_Absyn_Exp * _T8A;
  unsigned int _T8B;
  struct _fat_ptr _T8C;
  struct _fat_ptr _T8D;
  struct Cyc_Absyn_Exp * _T8E;
  struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct * _T8F;
  struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct * _T90;
  struct Cyc_Absyn_Exp * _T91;
  struct Cyc_InsertChecks_Env _T92;
  long _T93;
  struct Cyc_Absyn_Exp * _T94;
  unsigned int _T95;
  struct _fat_ptr _T96;
  struct _fat_ptr _T97;
  long _T98;
  long _T99;
  long _T9A;
  struct Cyc_Absyn_Exp * _T9B;
  unsigned int _T9C;
  struct _fat_ptr _T9D;
  struct _fat_ptr _T9E;
  long _T9F;
  long _TA0;
  long _TA1;
  long _TA2;
  long _TA3;
  struct Cyc_Absyn_Exp * _TA4;
  unsigned int _TA5;
  struct _fat_ptr _TA6;
  struct _fat_ptr _TA7;
  struct Cyc_Absyn_Exp * _TA8;
  void * _TA9;
  long _TAA;
  struct Cyc_InsertChecks_NullAndFatBound_Absyn_AbsynAnnot_struct * _TAB;
  struct Cyc_InsertChecks_NullAndFatBound_Absyn_AbsynAnnot_struct * _TAC;
  struct Cyc_InsertChecks_NullOnly_Absyn_AbsynAnnot_struct * _TAD;
  struct Cyc_InsertChecks_NullOnly_Absyn_AbsynAnnot_struct * _TAE;
  struct Cyc_Absyn_Exp * _TAF;
  void * _TB0;
  long _TB1;
  struct Cyc_InsertChecks_FatBound_Absyn_AbsynAnnot_struct * _TB2;
  struct Cyc_InsertChecks_FatBound_Absyn_AbsynAnnot_struct * _TB3;
  struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct * _TB4;
  struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct * _TB5;
  struct Cyc_Absyn_Exp * _TB6;
  struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct * _TB7;
  struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct * _TB8;
  struct Cyc_Absyn_Exp * _TB9;
  struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct * _TBA;
  struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct * _TBB;
  struct Cyc_Absyn_Exp * _TBC;
  void * _TBD;
  void * _TBE;
  int * _TBF;
  int _TC0;
  struct Cyc_Absyn_PtrInfo _TC1;
  struct Cyc_Absyn_PtrInfo _TC2;
  struct Cyc_Absyn_PtrInfo _TC3;
  struct Cyc_Absyn_PtrAtts _TC4;
  struct Cyc_Absyn_PtrInfo _TC5;
  struct Cyc_Absyn_PtrAtts _TC6;
  struct Cyc_Absyn_PtrInfo _TC7;
  struct Cyc_Absyn_PtrAtts _TC8;
  struct Cyc_Absyn_PtrInfo _TC9;
  struct Cyc_Absyn_PtrAtts _TCA;
  long _TCB;
  long _TCC;
  struct Cyc_InsertChecks_Env _TCD;
  long _TCE;
  long _TCF;
  long _TD0;
  struct Cyc_String_pa_PrintArg_struct _TD1;
  struct Cyc_Absyn_Exp * _TD2;
  unsigned int _TD3;
  struct _fat_ptr _TD4;
  struct _fat_ptr _TD5;
  void * _TD6;
  void * _TD7;
  long _TD8;
  int _TD9;
  long _TDA;
  long _TDB;
  long _TDC;
  struct Cyc_Absyn_Exp * _TDD;
  unsigned int _TDE;
  struct _fat_ptr _TDF;
  struct _fat_ptr _TE0;
  long _TE1;
  struct Cyc_Absyn_Exp * _TE2;
  unsigned int _TE3;
  long _TE4;
  struct Cyc_InsertChecks_Env _TE5;
  struct Cyc_Hashtable_Table * * _TE6;
  struct Cyc_Absyn_Exp * _TE7;
  struct Cyc_Absyn_Exp * _TE8;
  unsigned int _TE9;
  struct _fat_ptr _TEA;
  struct Cyc_String_pa_PrintArg_struct _TEB;
  struct Cyc_Vcgen_ExpChecks * _TEC;
  void * _TED;
  struct _fat_ptr _TEE;
  struct _fat_ptr _TEF;
  struct _fat_ptr _TF0;
  struct Cyc_String_pa_PrintArg_struct _TF1;
  struct Cyc_Vcgen_ExpChecks * _TF2;
  struct Cyc_AssnDef_AssnMap _TF3;
  struct Cyc___cycFILE * _TF4;
  struct _fat_ptr _TF5;
  struct _fat_ptr _TF6;
  struct Cyc___cycFILE * _TF7;
  struct _fat_ptr _TF8;
  struct _fat_ptr _TF9;
  struct Cyc_Absyn_Exp * _TFA;
  void * _TFB;
  long _TFC;
  struct Cyc_InsertChecks_NullAndThinBound_Absyn_AbsynAnnot_struct * _TFD;
  struct Cyc_InsertChecks_ThinBound_Absyn_AbsynAnnot_struct * _TFE;
  struct Cyc_Absyn_Exp * _TFF;
  void * _T100;
  long _T101;
  struct Cyc_InsertChecks_NullAndFatBound_Absyn_AbsynAnnot_struct * _T102;
  struct Cyc_InsertChecks_NullAndFatBound_Absyn_AbsynAnnot_struct * _T103;
  struct Cyc_InsertChecks_FatBound_Absyn_AbsynAnnot_struct * _T104;
  struct Cyc_InsertChecks_FatBound_Absyn_AbsynAnnot_struct * _T105;
  long _T106;
  struct Cyc_Absyn_Exp * _T107;
  struct Cyc_InsertChecks_NullOnly_Absyn_AbsynAnnot_struct * _T108;
  struct Cyc_InsertChecks_NullOnly_Absyn_AbsynAnnot_struct * _T109;
  struct Cyc_Absyn_Exp * _T10A;
  struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct * _T10B;
  struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct * _T10C;
  int (* _T10D)(unsigned int,struct _fat_ptr,struct _fat_ptr);
  void * (* _T10E)(unsigned int,struct _fat_ptr,struct _fat_ptr);
  struct Cyc_Absyn_Exp * _T10F;
  unsigned int _T110;
  struct _fat_ptr _T111;
  struct _fat_ptr _T112;
  struct Cyc_Absyn_Exp * _T113;
  struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct * _T114;
  struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct * _T115;
  struct Cyc_InsertChecks_Env _T116;
  struct Cyc_Absyn_Exp * _T117;
  struct Cyc_Absyn_Exp * _T118;
  struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct * _T119;
  struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct * _T11A;
  struct Cyc_Absyn_MallocInfo _T11B;
  struct Cyc_Absyn_MallocInfo _T11C;
  struct Cyc_Absyn_MallocInfo _T11D;
  struct Cyc_Absyn_Exp * _T11E;
  struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct * _T11F;
  struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct * _T120;
  struct Cyc_Absyn_Exp * _T121;
  struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct * _T122;
  struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct * _T123;
  struct Cyc_Absyn_Exp * _T124;
  struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct * _T125;
  struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct * _T126;
  struct Cyc_Absyn_Exp * _T127;
  struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct * _T128;
  struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct * _T129;
  struct Cyc_Absyn_Exp * _T12A;
  struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct * _T12B;
  struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct * _T12C;
  struct Cyc_Absyn_Exp * _T12D;
  struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct * _T12E;
  struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct * _T12F;
  struct Cyc_InsertChecks_Env _T130;
  struct Cyc_List_List * _T131;
  void * _T132;
  struct _tuple17 * _T133;
  struct _tuple17 _T134;
  struct Cyc_Absyn_Exp * _T135;
  struct Cyc_List_List * _T136;
  struct Cyc_Absyn_Exp * _T137;
  struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct * _T138;
  struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct * _T139;
  struct Cyc_Absyn_Exp * _T13A;
  struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct * _T13B;
  struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct * _T13C;
  int (* _T13D)(unsigned int,struct _fat_ptr,struct _fat_ptr);
  void * (* _T13E)(unsigned int,struct _fat_ptr,struct _fat_ptr);
  struct Cyc_Absyn_Exp * _T13F;
  unsigned int _T140;
  struct _fat_ptr _T141;
  struct _fat_ptr _T142;
  _T0 = e;
  { void * _T143 = _T0->r;
    struct Cyc_Absyn_Stmt * _T144;
    struct Cyc_Absyn_Exp * _T145;
    enum Cyc_Absyn_Coercion _T146;
    long _T147;
    struct Cyc_List_List * _T148;
    enum Cyc_Absyn_Incrementor _T149;
    struct Cyc_Absyn_Exp * _T14A;
    struct Cyc_Absyn_Exp * _T14B;
    void * _T14C;
    _T1 = (int *)_T143;
    _T2 = *_T1;
    switch (_T2) {
    case 39: 
      goto _LL4;
    case 0: 
      _LL4: goto _LL6;
    case 1: 
      _LL6: goto _LL8;
    case 2: 
      _LL8: _T3 = e;
      _T4 = &Cyc_InsertChecks_NoCheck_val;
      _T5 = (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct *)_T4;
      _T3->annot = (void *)_T5;
      goto _LL0;
    case 30: 
      { struct Cyc_Absyn_Datatype_e_Absyn_Raw_exp_struct * _T14D = (struct Cyc_Absyn_Datatype_e_Absyn_Raw_exp_struct *)_T143;
	_T14C = _T14D->f1;
      }{ struct Cyc_List_List * es = _T14C;
	_T14C = es;
	goto _LLC;
      }
    case 3: 
      { struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct * _T14D = (struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct *)_T143;
	_T14C = _T14D->f2;
      }_LLC: { struct Cyc_List_List * es = _T14C;
	_T6 = e;
	_T7 = &Cyc_InsertChecks_NoCheck_val;
	_T8 = (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct *)_T7;
	_T6->annot = (void *)_T8;
	_TL3B: if (es != 0) { goto _TL39;
	}else { goto _TL3A;
	}
	_TL39: _T9 = nv;
	_TA = es;
	_TB = _TA->hd;
	_TC = (struct Cyc_Absyn_Exp *)_TB;
	Cyc_InsertChecks_do_exp(_T9,_TC);
	_TD = es;
	es = _TD->tl;
	goto _TL3B;
	_TL3A: goto _LL0;
      }
    case 4: 
      { struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct * _T14D = (struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct *)_T143;
	_T14C = _T14D->f1;
	_T14B = _T14D->f3;
      }{ struct Cyc_Absyn_Exp * e1 = _T14C;
	struct Cyc_Absyn_Exp * e2 = _T14B;
	_T14C = e1;
	_T14B = e2;
	goto _LL10;
      }
    case 9: 
      { struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct * _T14D = (struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct *)_T143;
	_T14C = _T14D->f1;
	_T14B = _T14D->f2;
      }_LL10: { struct Cyc_Absyn_Exp * e1 = _T14C;
	struct Cyc_Absyn_Exp * e2 = _T14B;
	_T14C = e1;
	_T14B = e2;
	goto _LL12;
      }
    case 7: 
      { struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct * _T14D = (struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct *)_T143;
	_T14C = _T14D->f1;
	_T14B = _T14D->f2;
      }_LL12: { struct Cyc_Absyn_Exp * e1 = _T14C;
	struct Cyc_Absyn_Exp * e2 = _T14B;
	_T14C = e1;
	_T14B = e2;
	goto _LL14;
      }
    case 8: 
      { struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct * _T14D = (struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct *)_T143;
	_T14C = _T14D->f1;
	_T14B = _T14D->f2;
      }_LL14: { struct Cyc_Absyn_Exp * e1 = _T14C;
	struct Cyc_Absyn_Exp * e2 = _T14B;
	_TE = e;
	_TF = &Cyc_InsertChecks_NoCheck_val;
	_T10 = (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct *)_TF;
	_TE->annot = (void *)_T10;
	Cyc_InsertChecks_do_exp(nv,e1);
	Cyc_InsertChecks_do_exp(nv,e2);
	goto _LL0;
      }
    case 6: 
      { struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct * _T14D = (struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct *)_T143;
	_T14C = _T14D->f1;
	_T14B = _T14D->f2;
	_T14A = _T14D->f3;
      }{ struct Cyc_Absyn_Exp * e1 = _T14C;
	struct Cyc_Absyn_Exp * e2 = _T14B;
	struct Cyc_Absyn_Exp * e3 = _T14A;
	_T11 = e;
	_T12 = &Cyc_InsertChecks_NoCheck_val;
	_T13 = (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct *)_T12;
	_T11->annot = (void *)_T13;
	Cyc_InsertChecks_do_exp(nv,e1);
	Cyc_InsertChecks_do_exp(nv,e2);
	Cyc_InsertChecks_do_exp(nv,e3);
	goto _LL0;
      }
    case 5: 
      { struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct * _T14D = (struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct *)_T143;
	_T14C = _T14D->f1;
	_T149 = _T14D->f2;
      }{ struct Cyc_Absyn_Exp * e2 = _T14C;
	enum Cyc_Absyn_Incrementor incr = _T149;
	_T14 = e;
	_T15 = _T14->annot;
	_T16 = &Cyc_InsertChecks_NoCheck_val;
	_T17 = (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct *)_T16;
	_T18 = (void *)_T17;
	if (_T15 == _T18) { goto _TL3C;
	}
	_T19 = e2;
	_T1A = _T19->topt;
	_T1B = _check_null(_T1A);
	_T1C = Cyc_Tcutil_get_type_bound(_T1B);
	if (_T1C == 0) { goto _TL3C;
	}
	_T1D = e2;
	_T1E = _T1D->topt;
	_T1F = _check_null(_T1E);
	_T20 = Cyc_Tcutil_is_zeroterm_pointer_type(_T1F);
	if (! _T20) { goto _TL3C;
	}
	_T21 = Cyc_InsertChecks_need_null_check(nv,e2,e);
	if (! _T21) { goto _TL3C;
	}
	_T22 = Cyc_InsertChecks_need_null_check_vcgen(nv,e2);
	if (! _T22) { goto _TL3C;
	}
	_T23 = Cyc_Flags_warn_all_null_deref;
	if (! _T23) { goto _TL3E;
	}
	_T24 = e;
	_T25 = _T24->loc;
	_T26 = _tag_fat("inserted null check",sizeof(char),20U);
	_T27 = _tag_fat(0U,sizeof(void *),0);
	Cyc_Warn_warn(_T25,_T26,_T27);
	goto _TL3F;
	_TL3E: _TL3F: _T28 = e;
	_T29 = &Cyc_InsertChecks_NullOnly_val;
	_T2A = (struct Cyc_InsertChecks_NullOnly_Absyn_AbsynAnnot_struct *)_T29;
	_T28->annot = (void *)_T2A;
	goto _TL3D;
	_TL3C: _T2B = e;
	_T2C = &Cyc_InsertChecks_NoCheck_val;
	_T2D = (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct *)_T2C;
	_T2B->annot = (void *)_T2D;
	_TL3D: Cyc_InsertChecks_do_exp(nv,e2);
	goto _LL0;
      }
    case 10: 
      { struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct * _T14D = (struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct *)_T143;
	_T14C = _T14D->f1;
	_T148 = _T14D->f2;
      }{ struct Cyc_Absyn_Exp * e1 = _T14C;
	struct Cyc_List_List * es = _T148;
	_T2E = Cyc_InsertChecks_need_null_check(nv,e1,e);
	if (! _T2E) { goto _TL40;
	}
	_T2F = Cyc_InsertChecks_need_null_check_vcgen(nv,e1);
	if (! _T2F) { goto _TL40;
	}
	_T30 = e;
	_T31 = &Cyc_InsertChecks_NullOnly_val;
	_T32 = (struct Cyc_InsertChecks_NullOnly_Absyn_AbsynAnnot_struct *)_T31;
	_T30->annot = (void *)_T32;
	goto _TL41;
	_TL40: _T33 = e;
	_T34 = &Cyc_InsertChecks_NoCheck_val;
	_T35 = (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct *)_T34;
	_T33->annot = (void *)_T35;
	_TL41: Cyc_InsertChecks_do_exp(nv,e1);
	_TL45: if (es != 0) { goto _TL43;
	}else { goto _TL44;
	}
	_TL43: _T36 = nv;
	_T37 = es;
	_T38 = _T37->hd;
	_T39 = (struct Cyc_Absyn_Exp *)_T38;
	Cyc_InsertChecks_do_exp(_T36,_T39);
	_T3A = es;
	es = _T3A->tl;
	goto _TL45;
	_TL44: goto _LL0;
      }
    case 14: 
      { struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct * _T14D = (struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct *)_T143;
	_T3B = _T14D->f1;
	_T14C = (void *)_T3B;
	_T14B = _T14D->f2;
	_T147 = _T14D->f3;
	_T146 = _T14D->f4;
      }{ void * t = _T14C;
	struct Cyc_Absyn_Exp * e1 = _T14B;
	long user_inserted = _T147;
	enum Cyc_Absyn_Coercion coercion = _T146;
	{ struct _tuple15 _T14D;
	  _T3D = e1;
	  _T3E = _T3D->topt;
	  _T3F = _check_null(_T3E);
	  _T14D.f0 = Cyc_Absyn_compress(_T3F);
	  _T14D.f1 = Cyc_Absyn_compress(t);
	  _T3C = _T14D;
	}{ struct _tuple15 _T14D = _T3C;
	  struct Cyc_Absyn_PtrInfo _T14E;
	  struct Cyc_Absyn_PtrInfo _T14F;
	  _T40 = _T14D.f0;
	  _T41 = (int *)_T40;
	  _T42 = *_T41;
	  if (_T42 != 4) { goto _TL46;
	  }
	  _T43 = _T14D.f1;
	  _T44 = (int *)_T43;
	  _T45 = *_T44;
	  if (_T45 != 4) { goto _TL48;
	  }
	  _T46 = _T14D.f0;
	  { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T150 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T46;
	    _T14F = _T150->f1;
	  }_T47 = _T14D.f1;
	  { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T150 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T47;
	    _T14E = _T150->f1;
	  }{ struct Cyc_Absyn_PtrInfo p1 = _T14F;
	    struct Cyc_Absyn_PtrInfo p2 = _T14E;
	    _T48 = p1;
	    _T49 = _T48.ptr_atts;
	    _T4A = _T49.nullable;
	    { long n1 = Cyc_Tcutil_force_type2bool(0,_T4A);
	      _T4B = p2;
	      _T4C = _T4B.ptr_atts;
	      _T4D = _T4C.nullable;
	      { long n2 = Cyc_Tcutil_force_type2bool(0,_T4D);
		_T4E = Cyc_Absyn_bounds_one();
		_T4F = p1;
		_T50 = _T4F.ptr_atts;
		_T51 = _T50.bounds;
		{ struct Cyc_Absyn_Exp * b1 = Cyc_Tcutil_get_bounds_exp_constrain(_T4E,
										  _T51,
										  1);
		  _T52 = Cyc_Absyn_bounds_one();
		  _T53 = p2;
		  _T54 = _T53.ptr_atts;
		  _T55 = _T54.bounds;
		  { struct Cyc_Absyn_Exp * b2 = Cyc_Tcutil_get_bounds_exp_constrain(_T52,
										    _T55,
										    1);
		    _T56 = n1;
		    if (! _T56) { goto _TL4A;
		    }
		    _T57 = n2;
		    if (_T57) { goto _TL4A;
		    }else { goto _TL4C;
		    }
		    _TL4C: _T58 = coercion;
		    _T59 = (int)_T58;
		    if (_T59 == 2) { goto _TL4A;
		    }
		    _T5A = b1;
		    _T5B = (unsigned int)_T5A;
		    if (_T5B) { goto _TL4D;
		    }else { goto _TL4E;
		    }
		    _TL4E: _T5C = b2;
		    _T5D = (unsigned int)_T5C;
		    if (_T5D) { goto _TL4D;
		    }else { goto _TL4A;
		    }
		    _TL4D: _T5F = Cyc_Warn_impos_loc;
		    { int (* _T150)(unsigned int,struct _fat_ptr,struct _fat_ptr) = (int (*)(unsigned int,
											     struct _fat_ptr,
											     struct _fat_ptr))_T5F;
		      _T5E = _T150;
		    }_T60 = e;
		    _T61 = _T60->loc;
		    _T62 = _tag_fat("null-check conversion mis-classified",
				    sizeof(char),37U);
		    _T63 = _tag_fat(0U,sizeof(void *),0);
		    _T5E(_T61,_T62,_T63);
		    goto _TL4B;
		    _TL4A: _T64 = b1;
		    _T65 = (unsigned int)_T64;
		    if (! _T65) { goto _TL4F;
		    }
		    _T66 = b2;
		    _T67 = (unsigned int)_T66;
		    if (_T67) { goto _TL4F;
		    }else { goto _TL51;
		    }
		    _TL51: _T68 = coercion;
		    _T69 = (int)_T68;
		    if (_T69 != 2) { goto _TL4F;
		    }
		    _T6B = Cyc_Warn_impos_loc;
		    { int (* _T150)(unsigned int,struct _fat_ptr,struct _fat_ptr) = (int (*)(unsigned int,
											     struct _fat_ptr,
											     struct _fat_ptr))_T6B;
		      _T6A = _T150;
		    }_T6C = e;
		    _T6D = _T6C->loc;
		    _T6E = _tag_fat("conversion mis-classified as null-check",
				    sizeof(char),40U);
		    _T6F = _tag_fat(0U,sizeof(void *),0);
		    _T6A(_T6D,_T6E,_T6F);
		    goto _TL50;
		    _TL4F: _TL50: _TL4B: { struct _tuple16 _T150;
		      _T150.f0 = b1;
		      _T150.f1 = b2;
		      _T70 = _T150;
		    }{ struct _tuple16 _T150 = _T70;
		      _T71 = _T150.f0;
		      if (_T71 == 0) { goto _TL52;
		      }
		      _T72 = _T150.f1;
		      if (_T72 == 0) { goto _TL54;
		      }
		      _T73 = Cyc_Evexp_lte_const_exp(b2,b1);
		      if (_T73) { goto _TL56;
		      }else { goto _TL58;
		      }
		      _TL58: _T75 = Cyc_Warn_impos_loc;
		      { int (* _T151)(unsigned int,struct _fat_ptr,struct _fat_ptr) = (int (*)(unsigned int,
											       struct _fat_ptr,
											       struct _fat_ptr))_T75;
			_T74 = _T151;
		      }_T76 = e;
		      _T77 = _T76->loc;
		      _T78 = _tag_fat("InsertChecks: cast to maybe-shorter pointer type",
				      sizeof(char),49U);
		      _T79 = _tag_fat(0U,sizeof(void *),0);
		      _T74(_T77,_T78,_T79);
		      goto _TL57;
		      _TL56: _TL57: _T7A = n1;
		      if (! _T7A) { goto _TL59;
		      }
		      _T7B = n2;
		      if (_T7B) { goto _TL59;
		      }else { goto _TL5B;
		      }
		      _TL5B: _T7C = Cyc_InsertChecks_need_null_check(nv,e1,
								     e);
		      if (! _T7C) { goto _TL59;
		      }
		      _T7D = Cyc_InsertChecks_need_null_check_vcgen(nv,e1);
		      if (! _T7D) { goto _TL59;
		      }
		      _T7E = user_inserted;
		      if (_T7E) { goto _TL5C;
		      }else { goto _TL5E;
		      }
		      _TL5E: _T7F = e;
		      _T80 = _T7F->loc;
		      _T81 = _tag_fat("inserted null check due to implicit cast from * to @ type",
				      sizeof(char),58U);
		      _T82 = _tag_fat(0U,sizeof(void *),0);
		      Cyc_Warn_warn(_T80,_T81,_T82);
		      goto _TL5D;
		      _TL5C: _TL5D: _T83 = e;
		      _T84 = &Cyc_InsertChecks_NullOnly_val;
		      _T85 = (struct Cyc_InsertChecks_NullOnly_Absyn_AbsynAnnot_struct *)_T84;
		      _T83->annot = (void *)_T85;
		      goto _TL5A;
		      _TL59: _T86 = e;
		      _T87 = &Cyc_InsertChecks_NoCheck_val;
		      _T88 = (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct *)_T87;
		      _T86->annot = (void *)_T88;
		      _TL5A: goto _LL5C;
		      _TL54: _T89 = Cyc_Evexp_c_can_eval(b1);
		      if (_T89) { goto _TL5F;
		      }else { goto _TL61;
		      }
		      _TL61: _T8A = e;
		      _T8B = _T8A->loc;
		      _T8C = _tag_fat("cannot perform coercion: numelts is statically unknown",
				      sizeof(char),55U);
		      _T8D = _tag_fat(0U,sizeof(void *),0);
		      Cyc_Warn_err(_T8B,_T8C,_T8D);
		      goto _TL60;
		      _TL5F: _TL60: _T8E = e;
		      _T8F = &Cyc_InsertChecks_NoCheck_val;
		      _T90 = (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct *)_T8F;
		      _T8E->annot = (void *)_T90;
		      goto _LL5C;
		      _TL52: _T91 = _T150.f1;
		      if (_T91 == 0) { goto _TL62;
		      }
		      _T92 = nv;
		      _T93 = _T92.at_toplevel;
		      if (! _T93) { goto _TL64;
		      }
		      _T94 = e;
		      _T95 = _T94->loc;
		      _T96 = _tag_fat("cannot coerce fat-pointer to thin-pointer at toplevel",
				      sizeof(char),54U);
		      _T97 = _tag_fat(0U,sizeof(void *),0);
		      Cyc_Warn_err(_T95,_T96,_T97);
		      goto _TL65;
		      _TL64: _TL65: { struct _tuple14 _T151 = Cyc_InsertChecks_need_bound_null_check_annot(e);
			long _T152;
			long _T153;
			_T153 = _T151.f0;
			_T152 = _T151.f1;
			{ long bds_ck = _T153;
			  long null_ck = _T152;
			  _T98 = bds_ck;
			  if (! _T98) { goto _TL66;
			  }
			  bds_ck = Cyc_InsertChecks_need_bounds_check_vcgen(nv,
									    e1);
			  goto _TL67;
			  _TL66: _TL67: _T99 = bds_ck;
			  if (! _T99) { goto _TL68;
			  }
			  _T9A = Cyc_Evexp_c_can_eval(b2);
			  if (_T9A) { goto _TL6A;
			  }else { goto _TL6C;
			  }
			  _TL6C: _T9B = e;
			  _T9C = _T9B->loc;
			  _T9D = _tag_fat("cannot perform coercion: numelts is statically unknown",
					  sizeof(char),55U);
			  _T9E = _tag_fat(0U,sizeof(void *),0);
			  Cyc_Warn_err(_T9C,_T9D,_T9E);
			  goto _TL6B;
			  _TL6A: _TL6B: goto _TL69;
			  _TL68: _TL69: _T9F = null_ck;
			  if (! _T9F) { goto _TL6D;
			  }
			  _TA0 = n2;
			  if (_TA0) { goto _TL6D;
			  }else { goto _TL6F;
			  }
			  _TL6F: _TA1 = Cyc_InsertChecks_need_null_check(nv,
									 e1,
									 e);
			  if (! _TA1) { goto _TL6D;
			  }
			  _TA2 = Cyc_InsertChecks_need_null_check_vcgen(nv,
									e);
			  if (! _TA2) { goto _TL6D;
			  }
			  _TA3 = user_inserted;
			  if (_TA3) { goto _TL70;
			  }else { goto _TL72;
			  }
			  _TL72: _TA4 = e;
			  _TA5 = _TA4->loc;
			  _TA6 = _tag_fat("inserted null check due to implicit cast from *@fat (?) to @ type",
					  sizeof(char),66U);
			  _TA7 = _tag_fat(0U,sizeof(void *),0);
			  Cyc_Warn_warn(_TA5,_TA6,_TA7);
			  goto _TL71;
			  _TL70: _TL71: _TA8 = e;
			  _TAA = bds_ck;
			  if (! _TAA) { goto _TL73;
			  }
			  _TAB = &Cyc_InsertChecks_NullAndFatBound_val;
			  _TAC = (struct Cyc_InsertChecks_NullAndFatBound_Absyn_AbsynAnnot_struct *)_TAB;
			  _TA9 = (void *)_TAC;
			  goto _TL74;
			  _TL73: _TAD = &Cyc_InsertChecks_NullOnly_val;
			  _TAE = (struct Cyc_InsertChecks_NullOnly_Absyn_AbsynAnnot_struct *)_TAD;
			  _TA9 = (void *)_TAE;
			  _TL74: _TA8->annot = _TA9;
			  goto _TL6E;
			  _TL6D: _TAF = e;
			  _TB1 = bds_ck;
			  if (! _TB1) { goto _TL75;
			  }
			  _TB2 = &Cyc_InsertChecks_FatBound_val;
			  _TB3 = (struct Cyc_InsertChecks_FatBound_Absyn_AbsynAnnot_struct *)_TB2;
			  _TB0 = (void *)_TB3;
			  goto _TL76;
			  _TL75: _TB4 = &Cyc_InsertChecks_NoCheck_val;
			  _TB5 = (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct *)_TB4;
			  _TB0 = (void *)_TB5;
			  _TL76: _TAF->annot = _TB0;
			  _TL6E: goto _LL5C;
			}
		      }_TL62: _TB6 = e;
		      _TB7 = &Cyc_InsertChecks_NoCheck_val;
		      _TB8 = (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct *)_TB7;
		      _TB6->annot = (void *)_TB8;
		      goto _LL5C;
		      _LL5C: ;
		    }goto _LL57;
		  }
		}
	      }
	    }
	  }_TL48: goto _LL5A;
	  _TL46: _LL5A: _TB9 = e;
	  _TBA = &Cyc_InsertChecks_NoCheck_val;
	  _TBB = (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct *)_TBA;
	  _TB9->annot = (void *)_TBB;
	  goto _LL57;
	  _LL57: ;
	}Cyc_InsertChecks_do_exp(nv,e1);
	goto _LL0;
      }
    case 22: 
      { struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct * _T14D = (struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct *)_T143;
	_T14B = _T14D->f1;
      }{ struct Cyc_Absyn_Exp * e1 = _T14B;
	_T14B = e1;
	goto _LL20;
      }
    case 20: 
      { struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct * _T14D = (struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct *)_T143;
	_T14B = _T14D->f1;
      }_LL20: { struct Cyc_Absyn_Exp * e1 = _T14B;
	_T14B = e1;
	_T14A = Cyc_InsertChecks_shared_zero_exp();
	goto _LL22;
      }
    case 23: 
      { struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct * _T14D = (struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct *)_T143;
	_T14B = _T14D->f1;
	_T14A = _T14D->f2;
      }_LL22: { struct Cyc_Absyn_Exp * e1 = _T14B;
	struct Cyc_Absyn_Exp * e2 = _T14A;
	_TBC = e1;
	_TBD = _TBC->topt;
	_TBE = _check_null(_TBD);
	{ void * _T14D = Cyc_Absyn_compress(_TBE);
	  void * _T14E;
	  void * _T14F;
	  void * _T150;
	  void * _T151;
	  struct Cyc_Absyn_Tqual _T152;
	  void * _T153;
	  _TBF = (int *)_T14D;
	  _TC0 = *_TBF;
	  if (_TC0 != 4) { goto _TL77;
	  }
	  { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T154 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T14D;
	    _TC1 = _T154->f1;
	    _T153 = _TC1.elt_type;
	    _TC2 = _T154->f1;
	    _T152 = _TC2.elt_tq;
	    _TC3 = _T154->f1;
	    _TC4 = _TC3.ptr_atts;
	    _T151 = _TC4.eff;
	    _TC5 = _T154->f1;
	    _TC6 = _TC5.ptr_atts;
	    _T150 = _TC6.nullable;
	    _TC7 = _T154->f1;
	    _TC8 = _TC7.ptr_atts;
	    _T14F = _TC8.bounds;
	    _TC9 = _T154->f1;
	    _TCA = _TC9.ptr_atts;
	    _T14E = _TCA.zero_term;
	  }{ void * ta = _T153;
	    struct Cyc_Absyn_Tqual tq = _T152;
	    void * rgn = _T151;
	    void * n = _T150;
	    void * b = _T14F;
	    void * zt = _T14E;
	    struct _tuple14 _T154 = Cyc_InsertChecks_need_bound_null_check_annot(e);
	    long _T155;
	    long _T156;
	    _T156 = _T154.f0;
	    _T155 = _T154.f1;
	    { long bds_ck = _T156;
	      long null_ck = _T155;
	      _TCB = bds_ck;
	      if (! _TCB) { goto _TL79;
	      }
	      bds_ck = Cyc_InsertChecks_simple_need_bounds_check(nv,e1,e2);
	      goto _TL7A;
	      _TL79: _TL7A: _TCC = bds_ck;
	      if (! _TCC) { goto _TL7B;
	      }
	      _TCD = nv;
	      _TCE = _TCD.vcgen_r;
	      if (! _TCE) { goto _TL7B;
	      }
	      bds_ck = Cyc_InsertChecks_need_bounds_check_vcgen(nv,e1);
	      goto _TL7C;
	      _TL7B: _TL7C: _TCF = bds_ck;
	      if (! _TCF) { goto _TL7D;
	      }
	      _TD0 = Cyc_Flags_warn_bounds_checks;
	      if (! _TD0) { goto _TL7D;
	      }
	      { struct Cyc_String_pa_PrintArg_struct _T157;
		_T157.tag = 0;
		_T157.f1 = Cyc_Absynpp_exp2string(e);
		_TD1 = _T157;
	      }{ struct Cyc_String_pa_PrintArg_struct _T157 = _TD1;
		void * _T158[1];
		_T158[0] = &_T157;
		_TD2 = e1;
		_TD3 = _TD2->loc;
		_TD4 = _tag_fat("inserted bounds check at %s",sizeof(char),
				28U);
		_TD5 = _tag_fat(_T158,sizeof(void *),1);
		Cyc_Warn_warn(_TD3,_TD4,_TD5);
	      }goto _TL7E;
	      _TL7D: _TL7E: _TD6 = Cyc_Absyn_bounds_one();
	      _TD7 = b;
	      { struct Cyc_Absyn_Exp * bd = Cyc_Tcutil_get_bounds_exp_constrain(_TD6,
										_TD7,
										1);
		long fat_ptr = bd == 0;
		_TD8 = null_ck;
		if (! _TD8) { goto _TL7F;
		}
		_TDA = Cyc_InsertChecks_need_null_check(nv,e1,e);
		if (! _TDA) { goto _TL81;
		}
		_TD9 = Cyc_InsertChecks_need_null_check_vcgen(nv,e1);
		goto _TL82;
		_TL81: _TD9 = 0;
		_TL82: null_ck = _TD9;
		_TDB = null_ck;
		if (! _TDB) { goto _TL83;
		}
		_TDC = Cyc_Flags_warn_all_null_deref;
		if (! _TDC) { goto _TL83;
		}
		_TDD = e;
		_TDE = _TDD->loc;
		_TDF = _tag_fat("inserted null check",sizeof(char),20U);
		_TE0 = _tag_fat(0U,sizeof(void *),0);
		Cyc_Warn_warn(_TDE,_TDF,_TE0);
		goto _TL84;
		_TL83: _TL84: goto _TL80;
		_TL7F: _TL80: _TE1 = bds_ck;
		if (! _TE1) { goto _TL85;
		}
		_TE2 = bd;
		_TE3 = (unsigned int)_TE2;
		if (! _TE3) { goto _TL87;
		}
		_TE4 = Cyc_Evexp_c_can_eval(bd);
		if (_TE4) { goto _TL89;
		}else { goto _TL8B;
		}
		_TL8B: _TE5 = nv;
		_TE6 = _TE5.assn_info;
		_TE7 = e1;
		{ struct Cyc_Vcgen_ExpChecks * ec = Cyc_Vcgen_exp2ctxt_checks(_TE6,
									      _TE7);
		  _TE8 = e;
		  _TE9 = _TE8->loc;
		  { struct Cyc_String_pa_PrintArg_struct _T157;
		    _T157.tag = 0;
		    _TEC = ec;
		    _TED = _TEC->bounds_check;
		    _T157.f1 = Cyc_AssnDef_assn2string(_TED);
		    _TEB = _T157;
		  }{ struct Cyc_String_pa_PrintArg_struct _T157 = _TEB;
		    void * _T158[1];
		    _T158[0] = &_T157;
		    _TEE = _tag_fat("cannot determine subscript is in bounds (%s)",
				    sizeof(char),45U);
		    _TEF = _tag_fat(_T158,sizeof(void *),1);
		    _TEA = Cyc_aprintf(_TEE,_TEF);
		  }_TF0 = _tag_fat(0U,sizeof(void *),0);
		  Cyc_Warn_err(_TE9,_TEA,_TF0);
		  { struct Cyc_String_pa_PrintArg_struct _T157;
		    _T157.tag = 0;
		    _TF2 = ec;
		    _TF3 = _TF2->ctxt;
		    _T157.f1 = Cyc_AssnDef_assnmap2string(_TF3);
		    _TF1 = _T157;
		  }{ struct Cyc_String_pa_PrintArg_struct _T157 = _TF1;
		    void * _T158[1];
		    _T158[0] = &_T157;
		    _TF4 = Cyc_stderr;
		    _TF5 = _tag_fat("[all that I can prove is %s",sizeof(char),
				    28U);
		    _TF6 = _tag_fat(_T158,sizeof(void *),1);
		    Cyc_fprintf(_TF4,_TF5,_TF6);
		  }_TF7 = Cyc_stderr;
		  _TF8 = _tag_fat("]\n",sizeof(char),3U);
		  _TF9 = _tag_fat(0U,sizeof(void *),0);
		  Cyc_fprintf(_TF7,_TF8,_TF9);
		}goto _TL8A;
		_TL89: _TL8A: _TFA = e;
		_TFC = null_ck;
		if (! _TFC) { goto _TL8C;
		}
		{ struct Cyc_InsertChecks_NullAndThinBound_Absyn_AbsynAnnot_struct * _T157 = _cycalloc(sizeof(struct Cyc_InsertChecks_NullAndThinBound_Absyn_AbsynAnnot_struct));
		  _T157->tag = Cyc_InsertChecks_NullAndThinBound;
		  _T157->f1 = bd;
		  _TFD = (struct Cyc_InsertChecks_NullAndThinBound_Absyn_AbsynAnnot_struct *)_T157;
		}_TFB = (void *)_TFD;
		goto _TL8D;
		_TL8C: { struct Cyc_InsertChecks_ThinBound_Absyn_AbsynAnnot_struct * _T157 = _cycalloc(sizeof(struct Cyc_InsertChecks_ThinBound_Absyn_AbsynAnnot_struct));
		  _T157->tag = Cyc_InsertChecks_ThinBound;
		  _T157->f1 = bd;
		  _TFE = (struct Cyc_InsertChecks_ThinBound_Absyn_AbsynAnnot_struct *)_T157;
		}_TFB = (void *)_TFE;
		_TL8D: _TFA->annot = _TFB;
		goto _TL88;
		_TL87: _TFF = e;
		_T101 = null_ck;
		if (! _T101) { goto _TL8E;
		}
		_T102 = &Cyc_InsertChecks_NullAndFatBound_val;
		_T103 = (struct Cyc_InsertChecks_NullAndFatBound_Absyn_AbsynAnnot_struct *)_T102;
		_T100 = (void *)_T103;
		goto _TL8F;
		_TL8E: _T104 = &Cyc_InsertChecks_FatBound_val;
		_T105 = (struct Cyc_InsertChecks_FatBound_Absyn_AbsynAnnot_struct *)_T104;
		_T100 = (void *)_T105;
		_TL8F: _TFF->annot = _T100;
		_TL88: goto _TL86;
		_TL85: _T106 = null_ck;
		if (! _T106) { goto _TL90;
		}
		_T107 = e;
		_T108 = &Cyc_InsertChecks_NullOnly_val;
		_T109 = (struct Cyc_InsertChecks_NullOnly_Absyn_AbsynAnnot_struct *)_T108;
		_T107->annot = (void *)_T109;
		goto _TL91;
		_TL90: _T10A = e;
		_T10B = &Cyc_InsertChecks_NoCheck_val;
		_T10C = (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct *)_T10B;
		_T10A->annot = (void *)_T10C;
		_TL91: _TL86: goto _LL68;
	      }
	    }
	  }_TL77: _T10E = Cyc_Warn_impos_loc;
	  { int (* _T154)(unsigned int,struct _fat_ptr,struct _fat_ptr) = (int (*)(unsigned int,
										   struct _fat_ptr,
										   struct _fat_ptr))_T10E;
	    _T10D = _T154;
	  }_T10F = e;
	  _T110 = _T10F->loc;
	  _T111 = _tag_fat("InsertChecks: non-pointer-type on dereference",
			   sizeof(char),46U);
	  _T112 = _tag_fat(0U,sizeof(void *),0);
	  _T10D(_T110,_T111,_T112);
	  _LL68: ;
	}Cyc_InsertChecks_do_exp(nv,e1);
	Cyc_InsertChecks_do_exp(nv,e2);
	goto _LL0;
      }
    case 18: 
      { struct Cyc_Absyn_Sizeofexp_e_Absyn_Raw_exp_struct * _T14D = (struct Cyc_Absyn_Sizeofexp_e_Absyn_Raw_exp_struct *)_T143;
	_T14B = _T14D->f1;
      }{ struct Cyc_Absyn_Exp * e1 = _T14B;
	_T113 = e;
	_T114 = &Cyc_InsertChecks_NoCheck_val;
	_T115 = (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct *)_T114;
	_T113->annot = (void *)_T115;
	_T116 = Cyc_InsertChecks_enter_sizeof(nv);
	_T117 = e1;
	Cyc_InsertChecks_do_exp(_T116,_T117);
	goto _LL0;
      }
    case 16: 
      { struct Cyc_Absyn_New_e_Absyn_Raw_exp_struct * _T14D = (struct Cyc_Absyn_New_e_Absyn_Raw_exp_struct *)_T143;
	_T14B = _T14D->f1;
	_T14A = _T14D->f2;
	_T145 = _T14D->f3;
      }{ struct Cyc_Absyn_Exp * rgnopt = _T14B;
	struct Cyc_Absyn_Exp * e1 = _T14A;
	struct Cyc_Absyn_Exp * qualopt = _T145;
	_T118 = e;
	_T119 = &Cyc_InsertChecks_NoCheck_val;
	_T11A = (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct *)_T119;
	_T118->annot = (void *)_T11A;
	Cyc_InsertChecks_do_exp_opt(nv,rgnopt);
	Cyc_InsertChecks_do_exp_opt(nv,qualopt);
	Cyc_InsertChecks_do_exp(nv,e1);
	goto _LL0;
      }
    case 33: 
      { struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct * _T14D = (struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct *)_T143;
	_T11B = _T14D->f1;
	_T14B = _T11B.rgn;
	_T11C = _T14D->f1;
	_T14A = _T11C.aqual;
	_T11D = _T14D->f1;
	_T145 = _T11D.num_elts;
      }{ struct Cyc_Absyn_Exp * rgnopt = _T14B;
	struct Cyc_Absyn_Exp * aqopt = _T14A;
	struct Cyc_Absyn_Exp * sizeexp = _T145;
	_T11E = e;
	_T11F = &Cyc_InsertChecks_NoCheck_val;
	_T120 = (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct *)_T11F;
	_T11E->annot = (void *)_T120;
	Cyc_InsertChecks_do_exp_opt(nv,rgnopt);
	Cyc_InsertChecks_do_exp_opt(nv,aqopt);
	Cyc_InsertChecks_do_exp(nv,sizeexp);
	goto _LL0;
      }
    case 41: 
      { struct Cyc_Absyn_Assert_e_Absyn_Raw_exp_struct * _T14D = (struct Cyc_Absyn_Assert_e_Absyn_Raw_exp_struct *)_T143;
	_T14B = _T14D->f1;
      }{ struct Cyc_Absyn_Exp * e1 = _T14B;
	_T14B = e1;
	goto _LL2C;
      }
    case 40: 
      { struct Cyc_Absyn_Extension_e_Absyn_Raw_exp_struct * _T14D = (struct Cyc_Absyn_Extension_e_Absyn_Raw_exp_struct *)_T143;
	_T14B = _T14D->f1;
      }_LL2C: { struct Cyc_Absyn_Exp * e1 = _T14B;
	_T14B = e1;
	goto _LL2E;
      }
    case 11: 
      { struct Cyc_Absyn_Throw_e_Absyn_Raw_exp_struct * _T14D = (struct Cyc_Absyn_Throw_e_Absyn_Raw_exp_struct *)_T143;
	_T14B = _T14D->f1;
      }_LL2E: { struct Cyc_Absyn_Exp * e1 = _T14B;
	_T14B = e1;
	goto _LL30;
      }
    case 12: 
      { struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct * _T14D = (struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct *)_T143;
	_T14B = _T14D->f1;
      }_LL30: { struct Cyc_Absyn_Exp * e1 = _T14B;
	_T14B = e1;
	goto _LL32;
      }
    case 13: 
      { struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct * _T14D = (struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct *)_T143;
	_T14B = _T14D->f1;
      }_LL32: { struct Cyc_Absyn_Exp * e1 = _T14B;
	_T14B = e1;
	goto _LL34;
      }
    case 15: 
      { struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct * _T14D = (struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct *)_T143;
	_T14B = _T14D->f1;
      }_LL34: { struct Cyc_Absyn_Exp * e1 = _T14B;
	_T14B = e1;
	goto _LL36;
      }
    case 42: 
      { struct Cyc_Absyn_Assert_false_e_Absyn_Raw_exp_struct * _T14D = (struct Cyc_Absyn_Assert_false_e_Absyn_Raw_exp_struct *)_T143;
	_T14B = _T14D->f1;
      }_LL36: { struct Cyc_Absyn_Exp * e1 = _T14B;
	_T121 = e;
	_T122 = &Cyc_InsertChecks_NoCheck_val;
	_T123 = (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct *)_T122;
	_T121->annot = (void *)_T123;
	Cyc_InsertChecks_do_exp(nv,e1);
	goto _LL0;
      }
    case 31: 
      goto _LL3A;
    case 32: 
      _LL3A: goto _LL3C;
    case 17: 
      _LL3C: goto _LL3E;
    case 19: 
      _LL3E: _T124 = e;
      _T125 = &Cyc_InsertChecks_NoCheck_val;
      _T126 = (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct *)_T125;
      _T124->annot = (void *)_T126;
      goto _LL0;
    case 21: 
      { struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct * _T14D = (struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct *)_T143;
	_T14B = _T14D->f1;
      }{ struct Cyc_Absyn_Exp * e1 = _T14B;
	_T14B = e1;
	goto _LL42;
      }
    case 37: 
      { struct Cyc_Absyn_Tagcheck_e_Absyn_Raw_exp_struct * _T14D = (struct Cyc_Absyn_Tagcheck_e_Absyn_Raw_exp_struct *)_T143;
	_T14B = _T14D->f1;
      }_LL42: { struct Cyc_Absyn_Exp * e1 = _T14B;
	_T14B = e1;
	goto _LL44;
      }
    case 27: 
      { struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct * _T14D = (struct Cyc_Absyn_ComprehensionNoinit_e_Absyn_Raw_exp_struct *)_T143;
	_T14B = _T14D->f1;
      }_LL44: { struct Cyc_Absyn_Exp * e1 = _T14B;
	_T127 = e;
	_T128 = &Cyc_InsertChecks_NoCheck_val;
	_T129 = (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct *)_T128;
	_T127->annot = (void *)_T129;
	Cyc_InsertChecks_do_exp(nv,e1);
	goto _LL0;
      }
    case 26: 
      { struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct * _T14D = (struct Cyc_Absyn_Comprehension_e_Absyn_Raw_exp_struct *)_T143;
	_T14B = _T14D->f2;
	_T14A = _T14D->f3;
      }{ struct Cyc_Absyn_Exp * e1 = _T14B;
	struct Cyc_Absyn_Exp * e2 = _T14A;
	_T14B = e1;
	_T14A = e2;
	goto _LL48;
      }
    case 34: 
      { struct Cyc_Absyn_Swap_e_Absyn_Raw_exp_struct * _T14D = (struct Cyc_Absyn_Swap_e_Absyn_Raw_exp_struct *)_T143;
	_T14B = _T14D->f1;
	_T14A = _T14D->f2;
      }_LL48: { struct Cyc_Absyn_Exp * e1 = _T14B;
	struct Cyc_Absyn_Exp * e2 = _T14A;
	_T12A = e;
	_T12B = &Cyc_InsertChecks_NoCheck_val;
	_T12C = (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct *)_T12B;
	_T12A->annot = (void *)_T12C;
	Cyc_InsertChecks_do_exp(nv,e1);
	Cyc_InsertChecks_do_exp(nv,e2);
	goto _LL0;
      }
    case 25: 
      { struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct * _T14D = (struct Cyc_Absyn_Array_e_Absyn_Raw_exp_struct *)_T143;
	_T148 = _T14D->f1;
      }{ struct Cyc_List_List * dles = _T148;
	_T148 = dles;
	goto _LL4C;
      }
    case 28: 
      { struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct * _T14D = (struct Cyc_Absyn_Aggregate_e_Absyn_Raw_exp_struct *)_T143;
	_T148 = _T14D->f3;
      }_LL4C: { struct Cyc_List_List * dles = _T148;
	_T148 = dles;
	goto _LL4E;
      }
    case 29: 
      { struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct * _T14D = (struct Cyc_Absyn_AnonStruct_e_Absyn_Raw_exp_struct *)_T143;
	_T148 = _T14D->f3;
      }_LL4E: { struct Cyc_List_List * dles = _T148;
	_T12D = e;
	_T12E = &Cyc_InsertChecks_NoCheck_val;
	_T12F = (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct *)_T12E;
	_T12D->annot = (void *)_T12F;
	_TL95: if (dles != 0) { goto _TL93;
	}else { goto _TL94;
	}
	_TL93: _T130 = nv;
	_T131 = dles;
	_T132 = _T131->hd;
	_T133 = (struct _tuple17 *)_T132;
	_T134 = *_T133;
	_T135 = _T134.f1;
	Cyc_InsertChecks_do_exp(_T130,_T135);
	_T136 = dles;
	dles = _T136->tl;
	goto _TL95;
	_TL94: goto _LL0;
      }
    case 36: 
      { struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct * _T14D = (struct Cyc_Absyn_StmtExp_e_Absyn_Raw_exp_struct *)_T143;
	_T144 = _T14D->f1;
      }{ struct Cyc_Absyn_Stmt * s = _T144;
	_T137 = e;
	_T138 = &Cyc_InsertChecks_NoCheck_val;
	_T139 = (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct *)_T138;
	_T137->annot = (void *)_T139;
	Cyc_InsertChecks_do_stmt(nv,s);
	goto _LL0;
      }
    case 38: 
      _T13A = e;
      _T13B = &Cyc_InsertChecks_NoCheck_val;
      _T13C = (struct Cyc_InsertChecks_NoCheck_Absyn_AbsynAnnot_struct *)_T13B;
      _T13A->annot = (void *)_T13C;
      goto _LL0;
    case 35: 
      goto _LL56;
    default: 
      _LL56: _T13E = Cyc_Warn_impos_loc;
      { int (* _T14D)(unsigned int,struct _fat_ptr,struct _fat_ptr) = (int (*)(unsigned int,
									       struct _fat_ptr,
									       struct _fat_ptr))_T13E;
	_T13D = _T14D;
      }_T13F = e;
      _T140 = _T13F->loc;
      _T141 = _tag_fat("InsertChecks, unexpected exp form",sizeof(char),34U);
      _T142 = _tag_fat(0U,sizeof(void *),0);
      _T13D(_T140,_T141,_T142);
    }
    _LL0: ;
  }
}
static void Cyc_InsertChecks_do_fndecl(struct Cyc_InsertChecks_Env env,struct Cyc_Absyn_Fndecl * fd) {
  struct Cyc_Absyn_Fndecl * _T0;
  long _T1;
  struct Cyc_InsertChecks_Env _T2;
  long _T3;
  struct Cyc_Hashtable_Table * * _T4;
  struct Cyc_Hashtable_Table * (* _T5)(int,int (*)(struct Cyc_Absyn_Exp *,
						   struct Cyc_Absyn_Exp *),
				       int (*)(struct Cyc_Absyn_Exp *));
  struct Cyc_Hashtable_Table * (* _T6)(int,int (*)(void *,void *),int (*)(void *));
  int (* _T7)(struct Cyc_Absyn_Exp *,struct Cyc_Absyn_Exp *);
  int (* _T8)(void *,void *);
  int (* _T9)(struct Cyc_Absyn_Exp *);
  struct Cyc_InsertChecks_Env _TA;
  long _TB;
  struct Cyc_InsertChecks_Env _TC;
  long _TD;
  struct Cyc_InsertChecks_Env _TE;
  unsigned int _TF;
  int (* _T10)(struct _fat_ptr,struct _fat_ptr);
  void * (* _T11)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T12;
  struct _fat_ptr _T13;
  struct Cyc_InsertChecks_Env _T14;
  struct Cyc_JumpAnalysis_Jump_Anal_Result * _T15;
  struct Cyc_Absyn_Fndecl * _T16;
  struct Cyc_InsertChecks_Env _T17;
  struct Cyc_Hashtable_Table * * _T18;
  struct Cyc_InsertChecks_Env _T19;
  struct Cyc_Hashtable_Table * _T1A;
  struct Cyc_InsertChecks_Env _T1B;
  long _T1C;
  struct Cyc_InsertChecks_Env _T1D;
  struct Cyc_Absyn_Fndecl * _T1E;
  struct Cyc_Absyn_Stmt * _T1F;
  _T0 = fd;
  _T1 = _T0->escapes;
  if (! _T1) { goto _TL96;
  }
  _T2 = env;
  _T3 = _T2.use_precond;
  if (! _T3) { goto _TL96;
  }
  return;
  _TL96: { struct Cyc_InsertChecks_Env nv = Cyc_InsertChecks_fn_body_env(env);
    { struct Cyc_Hashtable_Table * * _T20 = _cycalloc(sizeof(struct Cyc_Hashtable_Table *));
      _T6 = Cyc_Hashtable_create;
      { struct Cyc_Hashtable_Table * (* _T21)(int,int (*)(struct Cyc_Absyn_Exp *,
							  struct Cyc_Absyn_Exp *),
					      int (*)(struct Cyc_Absyn_Exp *)) = (struct Cyc_Hashtable_Table * (*)(int,
														   int (*)(struct Cyc_Absyn_Exp *,
															   struct Cyc_Absyn_Exp *),
														   int (*)(struct Cyc_Absyn_Exp *)))_T6;
	_T5 = _T21;
      }_T8 = Cyc_Core_ptrcmp;
      { int (* _T21)(struct Cyc_Absyn_Exp *,struct Cyc_Absyn_Exp *) = (int (*)(struct Cyc_Absyn_Exp *,
									       struct Cyc_Absyn_Exp *))_T8;
	_T7 = _T21;
      }{ int (* _T21)(struct Cyc_Absyn_Exp *) = (int (*)(struct Cyc_Absyn_Exp *))Cyc_InsertChecks_hash_ptr;
	_T9 = _T21;
      }*_T20 = _T5(57,_T7,_T9);
      _T4 = (struct Cyc_Hashtable_Table * *)_T20;
    }nv.assn_info = _T4;
    _TA = nv;
    _TB = _TA.vcgen_r;
    if (! _TB) { goto _TL98;
    }
    _TC = env;
    _TD = _TC.use_precond;
    if (! _TD) { goto _TL9A;
    }
    _TE = env;
    _TF = _TE.pass_counter;
    if (_TF > 1U) { goto _TL9A;
    }
    _T11 = Cyc_Warn_impos;
    { int (* _T20)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
							       struct _fat_ptr))_T11;
      _T10 = _T20;
    }_T12 = _tag_fat("Trying to use preconditions in vcgen at the first pass\n",
		     sizeof(char),56U);
    _T13 = _tag_fat(0U,sizeof(void *),0);
    _T10(_T12,_T13);
    goto _TL9B;
    _TL9A: _TL9B: _T14 = nv;
    _T15 = _T14.tables;
    _T16 = fd;
    _T17 = nv;
    _T18 = _T17.assn_info;
    _T19 = nv;
    _T1A = _T19.fn_precond_info;
    _T1B = nv;
    _T1C = _T1B.use_precond;
    Cyc_Vcgen_vcgen_fundecl(0U,_T15,_T16,_T18,_T1A,_T1C);
    goto _TL99;
    _TL98: _TL99: _T1D = nv;
    _T1E = fd;
    _T1F = _T1E->body;
    Cyc_InsertChecks_do_stmt(_T1D,_T1F);
    Cyc_AssnDef_reset_hash_cons_table();
  };
}
static void Cyc_InsertChecks_do_decl(struct Cyc_InsertChecks_Env nv,struct Cyc_Absyn_Decl * d) {
  struct Cyc_Absyn_Decl * _T0;
  int * _T1;
  unsigned int _T2;
  struct Cyc_InsertChecks_Env _T3;
  struct Cyc_Absyn_Vardecl * _T4;
  struct Cyc_Absyn_Exp * _T5;
  struct Cyc_InsertChecks_Env _T6;
  struct Cyc_List_List * _T7;
  void * _T8;
  struct Cyc_Absyn_Decl * _T9;
  struct Cyc_List_List * _TA;
  _T0 = d;
  { void * _TB = _T0->r;
    struct Cyc_List_List * _TC;
    struct Cyc_Absyn_Exp * _TD;
    struct Cyc_Absyn_Fndecl * _TE;
    struct Cyc_Absyn_Vardecl * _TF;
    _T1 = (int *)_TB;
    _T2 = *_T1;
    switch (_T2) {
    case 0: 
      { struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T10 = (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct *)_TB;
	_TF = _T10->f1;
      }{ struct Cyc_Absyn_Vardecl * vd = _TF;
	_T3 = nv;
	_T4 = vd;
	_T5 = _T4->initializer;
	Cyc_InsertChecks_do_exp_opt(_T3,_T5);
	goto _LL0;
      }
    case 1: 
      { struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct * _T10 = (struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct *)_TB;
	_TE = _T10->f1;
      }{ struct Cyc_Absyn_Fndecl * fd = _TE;
	goto _LL0;
      }
    case 2: 
      { struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct * _T10 = (struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct *)_TB;
	_TD = _T10->f3;
      }{ struct Cyc_Absyn_Exp * e = _TD;
	Cyc_InsertChecks_do_exp(nv,e);
	goto _LL0;
      }
    case 3: 
      goto _LL0;
    case 4: 
      { struct Cyc_Absyn_Region_d_Absyn_Raw_decl_struct * _T10 = (struct Cyc_Absyn_Region_d_Absyn_Raw_decl_struct *)_TB;
	_TD = _T10->f3;
      }{ struct Cyc_Absyn_Exp * eo = _TD;
	Cyc_InsertChecks_do_exp_opt(nv,eo);
	goto _LL0;
      }
    case 5: 
      goto _LLE;
    case 6: 
      _LLE: goto _LL10;
    case 7: 
      _LL10: goto _LL12;
    case 8: 
      _LL12: goto _LL14;
    case 13: 
      _LL14: goto _LL16;
    case 14: 
      _LL16: goto _LL18;
    case 15: 
      _LL18: goto _LL1A;
    case 16: 
      _LL1A: goto _LL1C;
    case 12: 
      _LL1C: goto _LL0;
    case 11: 
      { struct Cyc_Absyn_ExternC_d_Absyn_Raw_decl_struct * _T10 = (struct Cyc_Absyn_ExternC_d_Absyn_Raw_decl_struct *)_TB;
	_TC = _T10->f1;
      }{ struct Cyc_List_List * ds = _TC;
	_TC = ds;
	goto _LL20;
      }
    case 10: 
      { struct Cyc_Absyn_Using_d_Absyn_Raw_decl_struct * _T10 = (struct Cyc_Absyn_Using_d_Absyn_Raw_decl_struct *)_TB;
	_TC = _T10->f2;
      }_LL20: { struct Cyc_List_List * ds = _TC;
	_TC = ds;
	goto _LL22;
      }
    default: 
      { struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct * _T10 = (struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct *)_TB;
	_TC = _T10->f2;
      }_LL22: { struct Cyc_List_List * ds = _TC;
	_TLA0: if (ds != 0) { goto _TL9E;
	}else { goto _TL9F;
	}
	_TL9E: _T6 = nv;
	_T7 = ds;
	_T8 = _T7->hd;
	_T9 = (struct Cyc_Absyn_Decl *)_T8;
	Cyc_InsertChecks_do_decl(_T6,_T9);
	_TA = ds;
	ds = _TA->tl;
	goto _TLA0;
	_TL9F: ;
      }
    }
    _LL0: ;
  }
}
static void Cyc_InsertChecks_do_scs(struct Cyc_InsertChecks_Env nv,struct Cyc_List_List * scs) {
  struct Cyc_List_List * _T0;
  void * _T1;
  struct Cyc_Absyn_Switch_clause * _T2;
  struct Cyc_Absyn_Exp * _T3;
  struct Cyc_InsertChecks_Env _T4;
  struct Cyc_List_List * _T5;
  void * _T6;
  struct Cyc_Absyn_Switch_clause * _T7;
  struct Cyc_Absyn_Exp * _T8;
  struct Cyc_InsertChecks_Env _T9;
  struct Cyc_List_List * _TA;
  void * _TB;
  struct Cyc_Absyn_Switch_clause * _TC;
  struct Cyc_Absyn_Stmt * _TD;
  struct Cyc_List_List * _TE;
  _TLA4: if (scs != 0) { goto _TLA2;
  }else { goto _TLA3;
  }
  _TLA2: _T0 = scs;
  _T1 = _T0->hd;
  _T2 = (struct Cyc_Absyn_Switch_clause *)_T1;
  _T3 = _T2->where_clause;
  if (_T3 == 0) { goto _TLA5;
  }
  _T4 = nv;
  _T5 = scs;
  _T6 = _T5->hd;
  _T7 = (struct Cyc_Absyn_Switch_clause *)_T6;
  _T8 = _T7->where_clause;
  Cyc_InsertChecks_do_exp(_T4,_T8);
  goto _TLA6;
  _TLA5: _TLA6: _T9 = nv;
  _TA = scs;
  _TB = _TA->hd;
  _TC = (struct Cyc_Absyn_Switch_clause *)_TB;
  _TD = _TC->body;
  Cyc_InsertChecks_do_stmt(_T9,_TD);
  _TE = scs;
  scs = _TE->tl;
  goto _TLA4;
  _TLA3: ;
}
static void Cyc_InsertChecks_do_stmt(struct Cyc_InsertChecks_Env nv,struct Cyc_Absyn_Stmt * s) {
  struct Cyc_Absyn_Stmt * _T0;
  int * _T1;
  unsigned int _T2;
  struct Cyc_Absyn_Exp * _T3;
  unsigned int _T4;
  struct _tuple9 _T5;
  struct _tuple9 _T6;
  struct _tuple9 _T7;
  struct _tuple9 _T8;
  struct Cyc_InsertChecks_Env _T9;
  struct Cyc_List_List * _TA;
  void * _TB;
  struct Cyc_Absyn_Exp * _TC;
  struct Cyc_List_List * _TD;
  _T0 = s;
  { void * _TE = _T0->r;
    struct Cyc_Absyn_Decl * _TF;
    struct Cyc_List_List * _T10;
    struct Cyc_Absyn_Exp * _T11;
    struct Cyc_Absyn_Exp * _T12;
    struct Cyc_Absyn_Stmt * _T13;
    struct Cyc_Absyn_Stmt * _T14;
    struct Cyc_Absyn_Exp * _T15;
    _T1 = (int *)_TE;
    _T2 = *_T1;
    switch (_T2) {
    case 0: 
      goto _LL0;
    case 1: 
      { struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct * _T16 = (struct Cyc_Absyn_Exp_s_Absyn_Raw_stmt_struct *)_TE;
	_T15 = _T16->f1;
      }{ struct Cyc_Absyn_Exp * e = _T15;
	Cyc_InsertChecks_do_exp(nv,e);
	goto _LL0;
      }
    case 2: 
      { struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct * _T16 = (struct Cyc_Absyn_Seq_s_Absyn_Raw_stmt_struct *)_TE;
	_T14 = _T16->f1;
	_T13 = _T16->f2;
      }{ struct Cyc_Absyn_Stmt * s1 = _T14;
	struct Cyc_Absyn_Stmt * s2 = _T13;
	Cyc_InsertChecks_do_stmt(nv,s1);
	Cyc_InsertChecks_do_stmt(nv,s2);
	goto _LL0;
      }
    case 3: 
      { struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct * _T16 = (struct Cyc_Absyn_Return_s_Absyn_Raw_stmt_struct *)_TE;
	_T15 = _T16->f1;
      }{ struct Cyc_Absyn_Exp * eopt = _T15;
	_T3 = eopt;
	_T4 = (unsigned int)_T3;
	if (! _T4) { goto _TLA8;
	}
	Cyc_InsertChecks_do_exp(nv,eopt);
	goto _TLA9;
	_TLA8: _TLA9: goto _LL0;
      }
    case 4: 
      { struct Cyc_Absyn_IfThenElse_s_Absyn_Raw_stmt_struct * _T16 = (struct Cyc_Absyn_IfThenElse_s_Absyn_Raw_stmt_struct *)_TE;
	_T15 = _T16->f1;
	_T14 = _T16->f2;
	_T13 = _T16->f3;
      }{ struct Cyc_Absyn_Exp * e = _T15;
	struct Cyc_Absyn_Stmt * s1 = _T14;
	struct Cyc_Absyn_Stmt * s2 = _T13;
	Cyc_InsertChecks_do_exp(nv,e);
	Cyc_InsertChecks_do_stmt(nv,s1);
	Cyc_InsertChecks_do_stmt(nv,s2);
	goto _LL0;
      }
    case 14: 
      { struct Cyc_Absyn_Do_s_Absyn_Raw_stmt_struct * _T16 = (struct Cyc_Absyn_Do_s_Absyn_Raw_stmt_struct *)_TE;
	_T14 = _T16->f1;
	_T5 = _T16->f2;
	_T15 = _T5.f0;
      }{ struct Cyc_Absyn_Stmt * s1 = _T14;
	struct Cyc_Absyn_Exp * e = _T15;
	_T15 = e;
	_T14 = s1;
	goto _LLE;
      }
    case 5: 
      { struct Cyc_Absyn_While_s_Absyn_Raw_stmt_struct * _T16 = (struct Cyc_Absyn_While_s_Absyn_Raw_stmt_struct *)_TE;
	_T6 = _T16->f1;
	_T15 = _T6.f0;
	_T14 = _T16->f2;
      }_LLE: { struct Cyc_Absyn_Exp * e = _T15;
	struct Cyc_Absyn_Stmt * s1 = _T14;
	Cyc_InsertChecks_do_exp(nv,e);
	Cyc_InsertChecks_do_stmt(nv,s1);
	goto _LL0;
      }
    case 9: 
      { struct Cyc_Absyn_For_s_Absyn_Raw_stmt_struct * _T16 = (struct Cyc_Absyn_For_s_Absyn_Raw_stmt_struct *)_TE;
	_T15 = _T16->f1;
	_T7 = _T16->f2;
	_T12 = _T7.f0;
	_T8 = _T16->f3;
	_T11 = _T8.f0;
	_T14 = _T16->f4;
      }{ struct Cyc_Absyn_Exp * e1 = _T15;
	struct Cyc_Absyn_Exp * e2 = _T12;
	struct Cyc_Absyn_Exp * e3 = _T11;
	struct Cyc_Absyn_Stmt * s1 = _T14;
	Cyc_InsertChecks_do_exp(nv,e1);
	Cyc_InsertChecks_do_exp(nv,e2);
	Cyc_InsertChecks_do_exp(nv,e3);
	Cyc_InsertChecks_do_stmt(nv,s1);
	goto _LL0;
      }
    case 6: 
      goto _LL14;
    case 7: 
      _LL14: goto _LL16;
    case 8: 
      _LL16: return;
    case 11: 
      { struct Cyc_Absyn_Fallthru_s_Absyn_Raw_stmt_struct * _T16 = (struct Cyc_Absyn_Fallthru_s_Absyn_Raw_stmt_struct *)_TE;
	_T10 = _T16->f1;
      }{ struct Cyc_List_List * es = _T10;
	_TLAD: if (es != 0) { goto _TLAB;
	}else { goto _TLAC;
	}
	_TLAB: _T9 = nv;
	_TA = es;
	_TB = _TA->hd;
	_TC = (struct Cyc_Absyn_Exp *)_TB;
	Cyc_InsertChecks_do_exp(_T9,_TC);
	_TD = es;
	es = _TD->tl;
	goto _TLAD;
	_TLAC: goto _LL0;
      }
    case 13: 
      { struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct * _T16 = (struct Cyc_Absyn_Label_s_Absyn_Raw_stmt_struct *)_TE;
	_T14 = _T16->f2;
      }{ struct Cyc_Absyn_Stmt * s1 = _T14;
	Cyc_InsertChecks_do_stmt(nv,s1);
	goto _LL0;
      }
    case 12: 
      { struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct * _T16 = (struct Cyc_Absyn_Decl_s_Absyn_Raw_stmt_struct *)_TE;
	_TF = _T16->f1;
	_T14 = _T16->f2;
      }{ struct Cyc_Absyn_Decl * d = _TF;
	struct Cyc_Absyn_Stmt * s1 = _T14;
	Cyc_InsertChecks_do_decl(nv,d);
	Cyc_InsertChecks_do_stmt(nv,s1);
	goto _LL0;
      }
    case 10: 
      { struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct * _T16 = (struct Cyc_Absyn_Switch_s_Absyn_Raw_stmt_struct *)_TE;
	_T15 = _T16->f1;
	_T10 = _T16->f2;
      }{ struct Cyc_Absyn_Exp * e = _T15;
	struct Cyc_List_List * scs = _T10;
	Cyc_InsertChecks_do_exp(nv,e);
	Cyc_InsertChecks_do_scs(nv,scs);
	goto _LL0;
      }
    default: 
      { struct Cyc_Absyn_TryCatch_s_Absyn_Raw_stmt_struct * _T16 = (struct Cyc_Absyn_TryCatch_s_Absyn_Raw_stmt_struct *)_TE;
	_T14 = _T16->f1;
	_T10 = _T16->f2;
      }{ struct Cyc_Absyn_Stmt * s1 = _T14;
	struct Cyc_List_List * scs = _T10;
	Cyc_InsertChecks_do_stmt(nv,s1);
	Cyc_InsertChecks_do_scs(nv,scs);
	goto _LL0;
      }
    }
    _LL0: ;
  }
}
float Cyc_InsertChecks_percent(int i,int total) {
  int _T0;
  float _T1;
  int _T2;
  float _T3;
  float _T4;
  float _T5;
  float _T6;
  float ans = (float)1;
  if (total == 0) { goto _TLAE;
  }
  _T0 = i;
  _T1 = (float)_T0;
  _T2 = total;
  _T3 = (float)_T2;
  ans = _T1 / _T3;
  goto _TLAF;
  _TLAE: _TLAF: _T4 = ans;
  _T5 = (float)100;
  _T6 = _T4 * _T5;
  return _T6;
}
static long Cyc_InsertChecks_visit_esc_fn_exp(struct Cyc_Hashtable_Table * env,
					      struct Cyc_Absyn_Exp * e) {
  struct Cyc_Absyn_Exp * _T0;
  int * _T1;
  unsigned int _T2;
  struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct * _T3;
  void * _T4;
  int * _T5;
  int _T6;
  void * _T7;
  struct Cyc_Absyn_Exp * * (* _T8)(struct Cyc_Hashtable_Table *,struct Cyc_Absyn_Exp *);
  void * * (* _T9)(struct Cyc_Hashtable_Table *,void *);
  struct Cyc_Absyn_Exp * * _TA;
  unsigned int _TB;
  struct Cyc_Absyn_Fndecl * _TC;
  struct Cyc_Absyn_Exp * _TD;
  int * _TE;
  unsigned int _TF;
  void (* _T10)(struct Cyc_Hashtable_Table *,struct Cyc_Absyn_Exp *,struct Cyc_Absyn_Exp *);
  void (* _T11)(struct Cyc_Hashtable_Table *,void *,void *);
  void (* _T12)(struct Cyc_Hashtable_Table *,struct Cyc_Absyn_Exp *,struct Cyc_Absyn_Exp *);
  void (* _T13)(struct Cyc_Hashtable_Table *,void *,void *);
  _T0 = e;
  { void * _T14 = _T0->r;
    struct Cyc_Absyn_Exp * _T15;
    struct Cyc_Absyn_Fndecl * _T16;
    _T1 = (int *)_T14;
    _T2 = *_T1;
    switch (_T2) {
    case 1: 
      _T3 = (struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)_T14;
      _T4 = _T3->f1;
      _T5 = (int *)_T4;
      _T6 = *_T5;
      if (_T6 != 2) { goto _TLB1;
      }
      { struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct * _T17 = (struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)_T14;
	_T7 = _T17->f1;
	{ struct Cyc_Absyn_Funname_b_Absyn_Binding_struct * _T18 = (struct Cyc_Absyn_Funname_b_Absyn_Binding_struct *)_T7;
	  _T16 = _T18->f1;
	}
      }{ struct Cyc_Absyn_Fndecl * fd = _T16;
	_T9 = Cyc_Hashtable_lookup_opt;
	{ struct Cyc_Absyn_Exp * * (* _T17)(struct Cyc_Hashtable_Table *,
					    struct Cyc_Absyn_Exp *) = (struct Cyc_Absyn_Exp * * (*)(struct Cyc_Hashtable_Table *,
												    struct Cyc_Absyn_Exp *))_T9;
	  _T8 = _T17;
	}_TA = _T8(env,e);
	_TB = (unsigned int)_TA;
	if (_TB) { goto _TLB3;
	}else { goto _TLB5;
	}
	_TLB5: _TC = fd;
	_TC->escapes = 1;
	goto _TLB4;
	_TLB3: _TLB4: goto _LL0;
      }_TLB1: goto _LL5;
    case 10: 
      { struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct * _T17 = (struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct *)_T14;
	_T15 = _T17->f1;
      }{ struct Cyc_Absyn_Exp * e1 = _T15;
	_TD = e1;
	{ void * _T17 = _TD->r;
	  struct Cyc_Absyn_Exp * _T18;
	  _TE = (int *)_T17;
	  _TF = *_TE;
	  switch (_TF) {
	  case 12: 
	    { struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct * _T19 = (struct Cyc_Absyn_NoInstantiate_e_Absyn_Raw_exp_struct *)_T17;
	      _T18 = _T19->f1;
	    }{ struct Cyc_Absyn_Exp * f = _T18;
	      _T18 = f;
	      goto _LLB;
	    }
	  case 13: 
	    { struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct * _T19 = (struct Cyc_Absyn_Instantiate_e_Absyn_Raw_exp_struct *)_T17;
	      _T18 = _T19->f1;
	    }_LLB: { struct Cyc_Absyn_Exp * f = _T18;
	      _T11 = Cyc_Hashtable_insert;
	      { void (* _T19)(struct Cyc_Hashtable_Table *,struct Cyc_Absyn_Exp *,
			      struct Cyc_Absyn_Exp *) = (void (*)(struct Cyc_Hashtable_Table *,
								  struct Cyc_Absyn_Exp *,
								  struct Cyc_Absyn_Exp *))_T11;
		_T10 = _T19;
	      }_T10(env,f,f);
	      goto _LL7;
	    }
	  default: 
	    _T13 = Cyc_Hashtable_insert;
	    { void (* _T19)(struct Cyc_Hashtable_Table *,struct Cyc_Absyn_Exp *,
			    struct Cyc_Absyn_Exp *) = (void (*)(struct Cyc_Hashtable_Table *,
								struct Cyc_Absyn_Exp *,
								struct Cyc_Absyn_Exp *))_T13;
	      _T12 = _T19;
	    }_T12(env,e1,e1);
	    goto _LL7;
	  }
	  _LL7: ;
	}goto _LL0;
      }
    default: 
      _LL5: goto _LL0;
    }
    _LL0: ;
  }return 1;
}
static long Cyc_InsertChecks_visit_esc_fn_stmt(struct Cyc_Hashtable_Table * env,
					       struct Cyc_Absyn_Stmt * s) {
  return 1;
}
static void Cyc_InsertChecks_mark_escaped_fns(struct Cyc_List_List * ds) {
  struct Cyc_Hashtable_Table * (* _T0)(int,int (*)(struct Cyc_Absyn_Exp *,
						   struct Cyc_Absyn_Exp *),
				       int (*)(struct Cyc_Absyn_Exp *));
  struct Cyc_Hashtable_Table * (* _T1)(int,int (*)(void *,void *),int (*)(void *));
  int (* _T2)(struct Cyc_Absyn_Exp *,struct Cyc_Absyn_Exp *);
  int (* _T3)(void *,void *);
  int (* _T4)(struct Cyc_Absyn_Exp *);
  struct Cyc_List_List * _T5;
  void * _T6;
  struct Cyc_Absyn_Decl * _T7;
  int * _T8;
  unsigned int _T9;
  struct Cyc_Absyn_Vardecl * _TA;
  struct Cyc_Absyn_Exp * _TB;
  void (* _TC)(long (*)(struct Cyc_Hashtable_Table *,struct Cyc_Absyn_Exp *),
	       long (*)(struct Cyc_Hashtable_Table *,struct Cyc_Absyn_Stmt *),
	       struct Cyc_Hashtable_Table *,struct Cyc_Absyn_Exp *);
  void (* _TD)(long (*)(void *,struct Cyc_Absyn_Exp *),long (*)(void *,struct Cyc_Absyn_Stmt *),
	       void *,struct Cyc_Absyn_Exp *);
  struct Cyc_Hashtable_Table * _TE;
  struct Cyc_Absyn_Vardecl * _TF;
  struct Cyc_Absyn_Exp * _T10;
  struct Cyc_Absyn_Fndecl * _T11;
  enum Cyc_Absyn_Scope _T12;
  int _T13;
  struct Cyc_Absyn_Fndecl * _T14;
  void (* _T15)(long (*)(struct Cyc_Hashtable_Table *,struct Cyc_Absyn_Exp *),
		long (*)(struct Cyc_Hashtable_Table *,struct Cyc_Absyn_Stmt *),
		struct Cyc_Hashtable_Table *,struct Cyc_Absyn_Stmt *);
  void (* _T16)(long (*)(void *,struct Cyc_Absyn_Exp *),long (*)(void *,struct Cyc_Absyn_Stmt *),
		void *,struct Cyc_Absyn_Stmt *);
  struct Cyc_Hashtable_Table * _T17;
  struct Cyc_Absyn_Fndecl * _T18;
  struct Cyc_Absyn_Stmt * _T19;
  void (* _T1A)(long (*)(struct Cyc_Hashtable_Table *,struct Cyc_Absyn_Exp *),
		long (*)(struct Cyc_Hashtable_Table *,struct Cyc_Absyn_Stmt *),
		struct Cyc_Hashtable_Table *,struct Cyc_Absyn_Exp *);
  void (* _T1B)(long (*)(void *,struct Cyc_Absyn_Exp *),long (*)(void *,struct Cyc_Absyn_Stmt *),
		void *,struct Cyc_Absyn_Exp *);
  struct Cyc_Hashtable_Table * _T1C;
  struct Cyc_Absyn_Exp * _T1D;
  void (* _T1E)(long (*)(struct Cyc_Hashtable_Table *,struct Cyc_Absyn_Exp *),
		long (*)(struct Cyc_Hashtable_Table *,struct Cyc_Absyn_Stmt *),
		struct Cyc_Hashtable_Table *,struct Cyc_Absyn_Exp *);
  void (* _T1F)(long (*)(void *,struct Cyc_Absyn_Exp *),long (*)(void *,struct Cyc_Absyn_Stmt *),
		void *,struct Cyc_Absyn_Exp *);
  struct Cyc_Hashtable_Table * _T20;
  struct Cyc_Absyn_Exp * _T21;
  struct Cyc_List_List * _T22;
  _TLBA: if (ds != 0) { goto _TLB8;
  }else { goto _TLB9;
  }
  _TLB8: _T1 = Cyc_Hashtable_create;
  { struct Cyc_Hashtable_Table * (* _T23)(int,int (*)(struct Cyc_Absyn_Exp *,
						      struct Cyc_Absyn_Exp *),
					  int (*)(struct Cyc_Absyn_Exp *)) = (struct Cyc_Hashtable_Table * (*)(int,
													       int (*)(struct Cyc_Absyn_Exp *,
														       struct Cyc_Absyn_Exp *),
													       int (*)(struct Cyc_Absyn_Exp *)))_T1;
    _T0 = _T23;
  }_T3 = Cyc_Core_ptrcmp;
  { int (* _T23)(struct Cyc_Absyn_Exp *,struct Cyc_Absyn_Exp *) = (int (*)(struct Cyc_Absyn_Exp *,
									   struct Cyc_Absyn_Exp *))_T3;
    _T2 = _T23;
  }{ int (* _T23)(struct Cyc_Absyn_Exp *) = (int (*)(struct Cyc_Absyn_Exp *))Cyc_InsertChecks_hash_ptr;
    _T4 = _T23;
  }{ struct Cyc_Hashtable_Table * table = _T0(313,_T2,_T4);
    _T5 = ds;
    _T6 = _T5->hd;
    _T7 = (struct Cyc_Absyn_Decl *)_T6;
    { void * _T23 = _T7->r;
      struct Cyc_List_List * _T24;
      struct Cyc_Absyn_Exp * _T25;
      struct Cyc_Absyn_Fndecl * _T26;
      struct Cyc_Absyn_Vardecl * _T27;
      _T8 = (int *)_T23;
      _T9 = *_T8;
      switch (_T9) {
      case 0: 
	{ struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T28 = (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct *)_T23;
	  _T27 = _T28->f1;
	}{ struct Cyc_Absyn_Vardecl * vd = _T27;
	  _TA = vd;
	  _TB = _TA->initializer;
	  if (_TB == 0) { goto _TLBC;
	  }
	  _TD = Cyc_Absyn_visit_exp;
	  { void (* _T28)(long (*)(struct Cyc_Hashtable_Table *,struct Cyc_Absyn_Exp *),
			  long (*)(struct Cyc_Hashtable_Table *,struct Cyc_Absyn_Stmt *),
			  struct Cyc_Hashtable_Table *,struct Cyc_Absyn_Exp *) = (void (*)(long (*)(struct Cyc_Hashtable_Table *,
												    struct Cyc_Absyn_Exp *),
											   long (*)(struct Cyc_Hashtable_Table *,
												    struct Cyc_Absyn_Stmt *),
											   struct Cyc_Hashtable_Table *,
											   struct Cyc_Absyn_Exp *))_TD;
	    _TC = _T28;
	  }_TE = table;
	  _TF = vd;
	  _T10 = _TF->initializer;
	  _TC(Cyc_InsertChecks_visit_esc_fn_exp,Cyc_InsertChecks_visit_esc_fn_stmt,
	      _TE,_T10);
	  goto _TLBD;
	  _TLBC: _TLBD: goto _LL0;
	}
      case 1: 
	{ struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct * _T28 = (struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct *)_T23;
	  _T26 = _T28->f1;
	}{ struct Cyc_Absyn_Fndecl * fd = _T26;
	  _T11 = fd;
	  _T12 = _T11->sc;
	  _T13 = (int)_T12;
	  if (_T13 == 0) { goto _TLBE;
	  }
	  _T14 = fd;
	  _T14->escapes = 1;
	  goto _TLBF;
	  _TLBE: _TLBF: _T16 = Cyc_Absyn_visit_stmt;
	  { void (* _T28)(long (*)(struct Cyc_Hashtable_Table *,struct Cyc_Absyn_Exp *),
			  long (*)(struct Cyc_Hashtable_Table *,struct Cyc_Absyn_Stmt *),
			  struct Cyc_Hashtable_Table *,struct Cyc_Absyn_Stmt *) = (void (*)(long (*)(struct Cyc_Hashtable_Table *,
												     struct Cyc_Absyn_Exp *),
											    long (*)(struct Cyc_Hashtable_Table *,
												     struct Cyc_Absyn_Stmt *),
											    struct Cyc_Hashtable_Table *,
											    struct Cyc_Absyn_Stmt *))_T16;
	    _T15 = _T28;
	  }_T17 = table;
	  _T18 = fd;
	  _T19 = _T18->body;
	  _T15(Cyc_InsertChecks_visit_esc_fn_exp,Cyc_InsertChecks_visit_esc_fn_stmt,
	       _T17,_T19);
	  goto _LL0;
	}
      case 2: 
	{ struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct * _T28 = (struct Cyc_Absyn_Let_d_Absyn_Raw_decl_struct *)_T23;
	  _T25 = _T28->f3;
	}{ struct Cyc_Absyn_Exp * e = _T25;
	  _T1B = Cyc_Absyn_visit_exp;
	  { void (* _T28)(long (*)(struct Cyc_Hashtable_Table *,struct Cyc_Absyn_Exp *),
			  long (*)(struct Cyc_Hashtable_Table *,struct Cyc_Absyn_Stmt *),
			  struct Cyc_Hashtable_Table *,struct Cyc_Absyn_Exp *) = (void (*)(long (*)(struct Cyc_Hashtable_Table *,
												    struct Cyc_Absyn_Exp *),
											   long (*)(struct Cyc_Hashtable_Table *,
												    struct Cyc_Absyn_Stmt *),
											   struct Cyc_Hashtable_Table *,
											   struct Cyc_Absyn_Exp *))_T1B;
	    _T1A = _T28;
	  }_T1C = table;
	  _T1D = e;
	  _T1A(Cyc_InsertChecks_visit_esc_fn_exp,Cyc_InsertChecks_visit_esc_fn_stmt,
	       _T1C,_T1D);
	  goto _LL0;
	}
      case 3: 
	goto _LL0;
      case 4: 
	{ struct Cyc_Absyn_Region_d_Absyn_Raw_decl_struct * _T28 = (struct Cyc_Absyn_Region_d_Absyn_Raw_decl_struct *)_T23;
	  _T25 = _T28->f3;
	}{ struct Cyc_Absyn_Exp * eo = _T25;
	  if (eo == 0) { goto _TLC0;
	  }
	  _T1F = Cyc_Absyn_visit_exp;
	  { void (* _T28)(long (*)(struct Cyc_Hashtable_Table *,struct Cyc_Absyn_Exp *),
			  long (*)(struct Cyc_Hashtable_Table *,struct Cyc_Absyn_Stmt *),
			  struct Cyc_Hashtable_Table *,struct Cyc_Absyn_Exp *) = (void (*)(long (*)(struct Cyc_Hashtable_Table *,
												    struct Cyc_Absyn_Exp *),
											   long (*)(struct Cyc_Hashtable_Table *,
												    struct Cyc_Absyn_Stmt *),
											   struct Cyc_Hashtable_Table *,
											   struct Cyc_Absyn_Exp *))_T1F;
	    _T1E = _T28;
	  }_T20 = table;
	  _T21 = eo;
	  _T1E(Cyc_InsertChecks_visit_esc_fn_exp,Cyc_InsertChecks_visit_esc_fn_stmt,
	       _T20,_T21);
	  goto _TLC1;
	  _TLC0: _TLC1: goto _LL0;
	}
      case 5: 
	goto _LLE;
      case 6: 
	_LLE: goto _LL10;
      case 7: 
	_LL10: goto _LL12;
      case 8: 
	_LL12: goto _LL14;
      case 13: 
	_LL14: goto _LL16;
      case 14: 
	_LL16: goto _LL18;
      case 15: 
	_LL18: goto _LL1A;
      case 16: 
	_LL1A: goto _LL1C;
      case 12: 
	_LL1C: goto _LL0;
      case 11: 
	{ struct Cyc_Absyn_ExternC_d_Absyn_Raw_decl_struct * _T28 = (struct Cyc_Absyn_ExternC_d_Absyn_Raw_decl_struct *)_T23;
	  _T24 = _T28->f1;
	}{ struct Cyc_List_List * ds = _T24;
	  _T24 = ds;
	  goto _LL20;
	}
      case 10: 
	{ struct Cyc_Absyn_Using_d_Absyn_Raw_decl_struct * _T28 = (struct Cyc_Absyn_Using_d_Absyn_Raw_decl_struct *)_T23;
	  _T24 = _T28->f2;
	}_LL20: { struct Cyc_List_List * ds = _T24;
	  _T24 = ds;
	  goto _LL22;
	}
      default: 
	{ struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct * _T28 = (struct Cyc_Absyn_Namespace_d_Absyn_Raw_decl_struct *)_T23;
	  _T24 = _T28->f2;
	}_LL22: { struct Cyc_List_List * ds = _T24;
	  Cyc_InsertChecks_mark_escaped_fns(ds);
	}
      }
      _LL0: ;
    }
  }_T22 = ds;
  ds = _T22->tl;
  goto _TLBA;
  _TLB9: ;
}
void Cyc_InsertChecks_insert_checks(struct Cyc_List_List * tds,struct Cyc_JumpAnalysis_Jump_Anal_Result * tables,
				    long do_vcgen) {
  struct Cyc_InsertChecks_Env _T0;
  struct Cyc_List_List * _T1;
  void * _T2;
  struct Cyc_Absyn_Decl * _T3;
  struct Cyc_List_List * _T4;
  struct Cyc_InsertChecks_Env _T5;
  struct Cyc_List_List * _T6;
  void * _T7;
  struct Cyc_Absyn_Fndecl * _T8;
  struct Cyc_List_List * _T9;
  long _TA;
  unsigned int _TB;
  unsigned int _TC;
  unsigned int _TD;
  unsigned int _TE;
  unsigned int _TF;
  unsigned int _T10;
  struct Cyc___cycFILE * _T11;
  struct _fat_ptr _T12;
  struct _fat_ptr _T13;
  struct Cyc_Int_pa_PrintArg_struct _T14;
  unsigned int _T15;
  int _T16;
  struct Cyc_Int_pa_PrintArg_struct _T17;
  unsigned int _T18;
  int _T19;
  struct Cyc_Double_pa_PrintArg_struct _T1A;
  unsigned int _T1B;
  int _T1C;
  unsigned int _T1D;
  int _T1E;
  float _T1F;
  struct Cyc___cycFILE * _T20;
  struct _fat_ptr _T21;
  struct _fat_ptr _T22;
  struct Cyc_Int_pa_PrintArg_struct _T23;
  unsigned int _T24;
  int _T25;
  struct Cyc_Int_pa_PrintArg_struct _T26;
  unsigned int _T27;
  int _T28;
  struct Cyc_Double_pa_PrintArg_struct _T29;
  unsigned int _T2A;
  int _T2B;
  unsigned int _T2C;
  int _T2D;
  float _T2E;
  struct Cyc___cycFILE * _T2F;
  struct _fat_ptr _T30;
  struct _fat_ptr _T31;
  struct Cyc_Int_pa_PrintArg_struct _T32;
  unsigned int _T33;
  int _T34;
  struct Cyc_Double_pa_PrintArg_struct _T35;
  unsigned int _T36;
  int _T37;
  unsigned int _T38;
  int _T39;
  float _T3A;
  struct Cyc___cycFILE * _T3B;
  struct _fat_ptr _T3C;
  struct _fat_ptr _T3D;
  struct Cyc_Int_pa_PrintArg_struct _T3E;
  unsigned int _T3F;
  int _T40;
  struct Cyc_Double_pa_PrintArg_struct _T41;
  unsigned int _T42;
  int _T43;
  unsigned int _T44;
  int _T45;
  float _T46;
  struct Cyc___cycFILE * _T47;
  struct _fat_ptr _T48;
  struct _fat_ptr _T49;
  struct Cyc_Int_pa_PrintArg_struct _T4A;
  unsigned int _T4B;
  int _T4C;
  struct Cyc_Double_pa_PrintArg_struct _T4D;
  unsigned int _T4E;
  int _T4F;
  unsigned int _T50;
  int _T51;
  float _T52;
  struct Cyc___cycFILE * _T53;
  struct _fat_ptr _T54;
  struct _fat_ptr _T55;
  struct Cyc_Int_pa_PrintArg_struct _T56;
  unsigned int _T57;
  int _T58;
  struct Cyc_Int_pa_PrintArg_struct _T59;
  unsigned int _T5A;
  int _T5B;
  struct Cyc_Double_pa_PrintArg_struct _T5C;
  unsigned int _T5D;
  int _T5E;
  unsigned int _T5F;
  int _T60;
  float _T61;
  struct Cyc___cycFILE * _T62;
  struct _fat_ptr _T63;
  struct _fat_ptr _T64;
  struct Cyc_Int_pa_PrintArg_struct _T65;
  unsigned int _T66;
  int _T67;
  struct Cyc_Double_pa_PrintArg_struct _T68;
  unsigned int _T69;
  int _T6A;
  unsigned int _T6B;
  int _T6C;
  float _T6D;
  struct Cyc___cycFILE * _T6E;
  struct _fat_ptr _T6F;
  struct _fat_ptr _T70;
  struct Cyc_Int_pa_PrintArg_struct _T71;
  unsigned int _T72;
  int _T73;
  struct Cyc_Double_pa_PrintArg_struct _T74;
  unsigned int _T75;
  int _T76;
  unsigned int _T77;
  int _T78;
  float _T79;
  struct Cyc___cycFILE * _T7A;
  struct _fat_ptr _T7B;
  struct _fat_ptr _T7C;
  struct Cyc_Int_pa_PrintArg_struct _T7D;
  unsigned int _T7E;
  int _T7F;
  struct Cyc_Double_pa_PrintArg_struct _T80;
  unsigned int _T81;
  int _T82;
  unsigned int _T83;
  int _T84;
  float _T85;
  struct Cyc___cycFILE * _T86;
  struct _fat_ptr _T87;
  struct _fat_ptr _T88;
  struct Cyc_Int_pa_PrintArg_struct _T89;
  unsigned int _T8A;
  int _T8B;
  struct Cyc_Double_pa_PrintArg_struct _T8C;
  unsigned int _T8D;
  int _T8E;
  unsigned int _T8F;
  int _T90;
  float _T91;
  struct Cyc___cycFILE * _T92;
  struct _fat_ptr _T93;
  struct _fat_ptr _T94;
  struct Cyc___cycFILE * _T95;
  struct _fat_ptr _T96;
  struct _fat_ptr _T97;
  Cyc_InsertChecks_reset_counters();
  { struct Cyc_InsertChecks_Env nv = Cyc_InsertChecks_toplevel_env(tables,
								   do_vcgen);
    struct Cyc_Dict_Dict cg = Cyc_Callgraph_compute_callgraph(tds);
    Cyc_InsertChecks_mark_escaped_fns(tds);
    _TLC5: if (tds != 0) { goto _TLC3;
    }else { goto _TLC4;
    }
    _TLC3: _T0 = nv;
    _T1 = tds;
    _T2 = _T1->hd;
    _T3 = (struct Cyc_Absyn_Decl *)_T2;
    Cyc_InsertChecks_do_decl(_T0,_T3);
    _T4 = tds;
    tds = _T4->tl;
    goto _TLC5;
    _TLC4: { struct Cyc_List_List * cg_fds = Cyc_Graph_tsort(cg);
      { struct Cyc_List_List * fds = Cyc_List_rev(cg_fds);
	_TLC9: if (fds != 0) { goto _TLC7;
	}else { goto _TLC8;
	}
	_TLC7: _T5 = nv;
	_T6 = fds;
	_T7 = _T6->hd;
	_T8 = (struct Cyc_Absyn_Fndecl *)_T7;
	Cyc_InsertChecks_do_fndecl(_T5,_T8);
	_T9 = fds;
	fds = _T9->tl;
	goto _TLC9;
	_TLC8: ;
      }_TA = Cyc_Flags_verbose;
      if (! _TA) { goto _TLCA;
      }
      _TB = Cyc_InsertChecks_types_eliminated_bounds_checks + Cyc_InsertChecks_simple_eliminated_bounds_checks;
      _TC = Cyc_InsertChecks_constraints_eliminated_bounds_checks;
      { unsigned int eliminated_bounds_checks = _TB + _TC;
	_TD = Cyc_InsertChecks_types_eliminated_null_checks + Cyc_InsertChecks_flow_eliminated_null_checks;
	_TE = Cyc_InsertChecks_simple_eliminated_null_checks;
	_TF = _TD + _TE;
	_T10 = Cyc_InsertChecks_constraints_eliminated_null_checks;
	{ unsigned int eliminated_null_checks = _TF + _T10;
	  _T11 = Cyc_stderr;
	  _T12 = _tag_fat("****INSERT CHECKS***********************************\n",
			  sizeof(char),54U);
	  _T13 = _tag_fat(0U,sizeof(void *),0);
	  Cyc_fprintf(_T11,_T12,_T13);
	  { struct Cyc_Int_pa_PrintArg_struct _T98;
	    _T98.tag = 1;
	    _T15 = eliminated_bounds_checks + eliminated_null_checks;
	    _T16 = (int)_T15;
	    _T98.f1 = (unsigned long)_T16;
	    _T14 = _T98;
	  }{ struct Cyc_Int_pa_PrintArg_struct _T98 = _T14;
	    { struct Cyc_Int_pa_PrintArg_struct _T99;
	      _T99.tag = 1;
	      _T18 = Cyc_InsertChecks_total_bounds_checks + Cyc_InsertChecks_total_null_checks;
	      _T19 = (int)_T18;
	      _T99.f1 = (unsigned long)_T19;
	      _T17 = _T99;
	    }{ struct Cyc_Int_pa_PrintArg_struct _T99 = _T17;
	      { struct Cyc_Double_pa_PrintArg_struct _T9A;
		_T9A.tag = 3;
		_T1B = eliminated_bounds_checks + eliminated_null_checks;
		_T1C = (int)_T1B;
		_T1D = Cyc_InsertChecks_total_bounds_checks + Cyc_InsertChecks_total_null_checks;
		_T1E = (int)_T1D;
		_T1F = Cyc_InsertChecks_percent(_T1C,_T1E);
		_T9A.f1 = (double)_T1F;
		_T1A = _T9A;
	      }{ struct Cyc_Double_pa_PrintArg_struct _T9A = _T1A;
		void * _T9B[3];
		_T9B[0] = &_T98;
		_T9B[1] = &_T99;
		_T9B[2] = &_T9A;
		_T20 = Cyc_stderr;
		_T21 = _tag_fat("eliminated %d out of a total of %d checks (%g%%).\n",
				sizeof(char),51U);
		_T22 = _tag_fat(_T9B,sizeof(void *),3);
		Cyc_fprintf(_T20,_T21,_T22);
	      }
	    }
	  }{ struct Cyc_Int_pa_PrintArg_struct _T98;
	    _T98.tag = 1;
	    _T24 = eliminated_bounds_checks;
	    _T25 = (int)_T24;
	    _T98.f1 = (unsigned long)_T25;
	    _T23 = _T98;
	  }{ struct Cyc_Int_pa_PrintArg_struct _T98 = _T23;
	    { struct Cyc_Int_pa_PrintArg_struct _T99;
	      _T99.tag = 1;
	      _T27 = Cyc_InsertChecks_total_bounds_checks;
	      _T28 = (int)_T27;
	      _T99.f1 = (unsigned long)_T28;
	      _T26 = _T99;
	    }{ struct Cyc_Int_pa_PrintArg_struct _T99 = _T26;
	      { struct Cyc_Double_pa_PrintArg_struct _T9A;
		_T9A.tag = 3;
		_T2A = eliminated_bounds_checks;
		_T2B = (int)_T2A;
		_T2C = Cyc_InsertChecks_total_bounds_checks;
		_T2D = (int)_T2C;
		_T2E = Cyc_InsertChecks_percent(_T2B,_T2D);
		_T9A.f1 = (double)_T2E;
		_T29 = _T9A;
	      }{ struct Cyc_Double_pa_PrintArg_struct _T9A = _T29;
		void * _T9B[3];
		_T9B[0] = &_T98;
		_T9B[1] = &_T99;
		_T9B[2] = &_T9A;
		_T2F = Cyc_stderr;
		_T30 = _tag_fat("eliminated %d out of a total of %d bounds checks (%g%%).\n",
				sizeof(char),58U);
		_T31 = _tag_fat(_T9B,sizeof(void *),3);
		Cyc_fprintf(_T2F,_T30,_T31);
	      }
	    }
	  }{ struct Cyc_Int_pa_PrintArg_struct _T98;
	    _T98.tag = 1;
	    _T33 = Cyc_InsertChecks_types_eliminated_bounds_checks;
	    _T34 = (int)_T33;
	    _T98.f1 = (unsigned long)_T34;
	    _T32 = _T98;
	  }{ struct Cyc_Int_pa_PrintArg_struct _T98 = _T32;
	    { struct Cyc_Double_pa_PrintArg_struct _T99;
	      _T99.tag = 3;
	      _T36 = Cyc_InsertChecks_types_eliminated_bounds_checks;
	      _T37 = (int)_T36;
	      _T38 = Cyc_InsertChecks_total_bounds_checks;
	      _T39 = (int)_T38;
	      _T3A = Cyc_InsertChecks_percent(_T37,_T39);
	      _T99.f1 = (double)_T3A;
	      _T35 = _T99;
	    }{ struct Cyc_Double_pa_PrintArg_struct _T99 = _T35;
	      void * _T9A[2];
	      _T9A[0] = &_T98;
	      _T9A[1] = &_T99;
	      _T3B = Cyc_stderr;
	      _T3C = _tag_fat("\tbounds checks eliminated by types            : %d (%g%%)\n",
			      sizeof(char),59U);
	      _T3D = _tag_fat(_T9A,sizeof(void *),2);
	      Cyc_fprintf(_T3B,_T3C,_T3D);
	    }
	  }{ struct Cyc_Int_pa_PrintArg_struct _T98;
	    _T98.tag = 1;
	    _T3F = Cyc_InsertChecks_simple_eliminated_bounds_checks;
	    _T40 = (int)_T3F;
	    _T98.f1 = (unsigned long)_T40;
	    _T3E = _T98;
	  }{ struct Cyc_Int_pa_PrintArg_struct _T98 = _T3E;
	    { struct Cyc_Double_pa_PrintArg_struct _T99;
	      _T99.tag = 3;
	      _T42 = Cyc_InsertChecks_simple_eliminated_bounds_checks;
	      _T43 = (int)_T42;
	      _T44 = Cyc_InsertChecks_total_bounds_checks;
	      _T45 = (int)_T44;
	      _T46 = Cyc_InsertChecks_percent(_T43,_T45);
	      _T99.f1 = (double)_T46;
	      _T41 = _T99;
	    }{ struct Cyc_Double_pa_PrintArg_struct _T99 = _T41;
	      void * _T9A[2];
	      _T9A[0] = &_T98;
	      _T9A[1] = &_T99;
	      _T47 = Cyc_stderr;
	      _T48 = _tag_fat("\tbounds checks eliminated by simple prover    : %d (%g%%)\n",
			      sizeof(char),59U);
	      _T49 = _tag_fat(_T9A,sizeof(void *),2);
	      Cyc_fprintf(_T47,_T48,_T49);
	    }
	  }{ struct Cyc_Int_pa_PrintArg_struct _T98;
	    _T98.tag = 1;
	    _T4B = Cyc_InsertChecks_constraints_eliminated_bounds_checks;
	    _T4C = (int)_T4B;
	    _T98.f1 = (unsigned long)_T4C;
	    _T4A = _T98;
	  }{ struct Cyc_Int_pa_PrintArg_struct _T98 = _T4A;
	    { struct Cyc_Double_pa_PrintArg_struct _T99;
	      _T99.tag = 3;
	      _T4E = Cyc_InsertChecks_constraints_eliminated_bounds_checks;
	      _T4F = (int)_T4E;
	      _T50 = Cyc_InsertChecks_total_bounds_checks;
	      _T51 = (int)_T50;
	      _T52 = Cyc_InsertChecks_percent(_T4F,_T51);
	      _T99.f1 = (double)_T52;
	      _T4D = _T99;
	    }{ struct Cyc_Double_pa_PrintArg_struct _T99 = _T4D;
	      void * _T9A[2];
	      _T9A[0] = &_T98;
	      _T9A[1] = &_T99;
	      _T53 = Cyc_stderr;
	      _T54 = _tag_fat("\tbounds checks eliminated by constraint solver: %d (%g%%)\n",
			      sizeof(char),59U);
	      _T55 = _tag_fat(_T9A,sizeof(void *),2);
	      Cyc_fprintf(_T53,_T54,_T55);
	    }
	  }{ struct Cyc_Int_pa_PrintArg_struct _T98;
	    _T98.tag = 1;
	    _T57 = eliminated_null_checks;
	    _T58 = (int)_T57;
	    _T98.f1 = (unsigned long)_T58;
	    _T56 = _T98;
	  }{ struct Cyc_Int_pa_PrintArg_struct _T98 = _T56;
	    { struct Cyc_Int_pa_PrintArg_struct _T99;
	      _T99.tag = 1;
	      _T5A = Cyc_InsertChecks_total_null_checks;
	      _T5B = (int)_T5A;
	      _T99.f1 = (unsigned long)_T5B;
	      _T59 = _T99;
	    }{ struct Cyc_Int_pa_PrintArg_struct _T99 = _T59;
	      { struct Cyc_Double_pa_PrintArg_struct _T9A;
		_T9A.tag = 3;
		_T5D = eliminated_null_checks;
		_T5E = (int)_T5D;
		_T5F = Cyc_InsertChecks_total_null_checks;
		_T60 = (int)_T5F;
		_T61 = Cyc_InsertChecks_percent(_T5E,_T60);
		_T9A.f1 = (double)_T61;
		_T5C = _T9A;
	      }{ struct Cyc_Double_pa_PrintArg_struct _T9A = _T5C;
		void * _T9B[3];
		_T9B[0] = &_T98;
		_T9B[1] = &_T99;
		_T9B[2] = &_T9A;
		_T62 = Cyc_stderr;
		_T63 = _tag_fat("eliminated %d out of a total of %d null checks (%g%%).\n",
				sizeof(char),56U);
		_T64 = _tag_fat(_T9B,sizeof(void *),3);
		Cyc_fprintf(_T62,_T63,_T64);
	      }
	    }
	  }{ struct Cyc_Int_pa_PrintArg_struct _T98;
	    _T98.tag = 1;
	    _T66 = Cyc_InsertChecks_types_eliminated_null_checks;
	    _T67 = (int)_T66;
	    _T98.f1 = (unsigned long)_T67;
	    _T65 = _T98;
	  }{ struct Cyc_Int_pa_PrintArg_struct _T98 = _T65;
	    { struct Cyc_Double_pa_PrintArg_struct _T99;
	      _T99.tag = 3;
	      _T69 = Cyc_InsertChecks_types_eliminated_null_checks;
	      _T6A = (int)_T69;
	      _T6B = Cyc_InsertChecks_total_null_checks;
	      _T6C = (int)_T6B;
	      _T6D = Cyc_InsertChecks_percent(_T6A,_T6C);
	      _T99.f1 = (double)_T6D;
	      _T68 = _T99;
	    }{ struct Cyc_Double_pa_PrintArg_struct _T99 = _T68;
	      void * _T9A[2];
	      _T9A[0] = &_T98;
	      _T9A[1] = &_T99;
	      _T6E = Cyc_stderr;
	      _T6F = _tag_fat("\tnull checks eliminated by types              : %d (%g%%)\n",
			      sizeof(char),59U);
	      _T70 = _tag_fat(_T9A,sizeof(void *),2);
	      Cyc_fprintf(_T6E,_T6F,_T70);
	    }
	  }{ struct Cyc_Int_pa_PrintArg_struct _T98;
	    _T98.tag = 1;
	    _T72 = Cyc_InsertChecks_flow_eliminated_null_checks;
	    _T73 = (int)_T72;
	    _T98.f1 = (unsigned long)_T73;
	    _T71 = _T98;
	  }{ struct Cyc_Int_pa_PrintArg_struct _T98 = _T71;
	    { struct Cyc_Double_pa_PrintArg_struct _T99;
	      _T99.tag = 3;
	      _T75 = Cyc_InsertChecks_flow_eliminated_null_checks;
	      _T76 = (int)_T75;
	      _T77 = Cyc_InsertChecks_total_null_checks;
	      _T78 = (int)_T77;
	      _T79 = Cyc_InsertChecks_percent(_T76,_T78);
	      _T99.f1 = (double)_T79;
	      _T74 = _T99;
	    }{ struct Cyc_Double_pa_PrintArg_struct _T99 = _T74;
	      void * _T9A[2];
	      _T9A[0] = &_T98;
	      _T9A[1] = &_T99;
	      _T7A = Cyc_stderr;
	      _T7B = _tag_fat("\tnull checks eliminated by flow analysis      : %d (%g%%)\n",
			      sizeof(char),59U);
	      _T7C = _tag_fat(_T9A,sizeof(void *),2);
	      Cyc_fprintf(_T7A,_T7B,_T7C);
	    }
	  }{ struct Cyc_Int_pa_PrintArg_struct _T98;
	    _T98.tag = 1;
	    _T7E = Cyc_InsertChecks_simple_eliminated_null_checks;
	    _T7F = (int)_T7E;
	    _T98.f1 = (unsigned long)_T7F;
	    _T7D = _T98;
	  }{ struct Cyc_Int_pa_PrintArg_struct _T98 = _T7D;
	    { struct Cyc_Double_pa_PrintArg_struct _T99;
	      _T99.tag = 3;
	      _T81 = Cyc_InsertChecks_simple_eliminated_null_checks;
	      _T82 = (int)_T81;
	      _T83 = Cyc_InsertChecks_total_null_checks;
	      _T84 = (int)_T83;
	      _T85 = Cyc_InsertChecks_percent(_T82,_T84);
	      _T99.f1 = (double)_T85;
	      _T80 = _T99;
	    }{ struct Cyc_Double_pa_PrintArg_struct _T99 = _T80;
	      void * _T9A[2];
	      _T9A[0] = &_T98;
	      _T9A[1] = &_T99;
	      _T86 = Cyc_stderr;
	      _T87 = _tag_fat("\tnull checks eliminated by simple prover      : %d (%g%%)\n",
			      sizeof(char),59U);
	      _T88 = _tag_fat(_T9A,sizeof(void *),2);
	      Cyc_fprintf(_T86,_T87,_T88);
	    }
	  }{ struct Cyc_Int_pa_PrintArg_struct _T98;
	    _T98.tag = 1;
	    _T8A = Cyc_InsertChecks_constraints_eliminated_null_checks;
	    _T8B = (int)_T8A;
	    _T98.f1 = (unsigned long)_T8B;
	    _T89 = _T98;
	  }{ struct Cyc_Int_pa_PrintArg_struct _T98 = _T89;
	    { struct Cyc_Double_pa_PrintArg_struct _T99;
	      _T99.tag = 3;
	      _T8D = Cyc_InsertChecks_constraints_eliminated_null_checks;
	      _T8E = (int)_T8D;
	      _T8F = Cyc_InsertChecks_total_null_checks;
	      _T90 = (int)_T8F;
	      _T91 = Cyc_InsertChecks_percent(_T8E,_T90);
	      _T99.f1 = (double)_T91;
	      _T8C = _T99;
	    }{ struct Cyc_Double_pa_PrintArg_struct _T99 = _T8C;
	      void * _T9A[2];
	      _T9A[0] = &_T98;
	      _T9A[1] = &_T99;
	      _T92 = Cyc_stderr;
	      _T93 = _tag_fat("\tnull checks eliminated by constraint solver  : %d (%g%%)\n",
			      sizeof(char),59U);
	      _T94 = _tag_fat(_T9A,sizeof(void *),2);
	      Cyc_fprintf(_T92,_T93,_T94);
	    }
	  }_T95 = Cyc_stderr;
	  _T96 = _tag_fat("****************************************************\n",
			  sizeof(char),54U);
	  _T97 = _tag_fat(0U,sizeof(void *),0);
	  Cyc_fprintf(_T95,_T96,_T97);
	}
      }goto _TLCB;
      _TLCA: _TLCB: ;
    }
  }
}
