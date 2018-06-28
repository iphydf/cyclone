#include <cyc_include.h>
 struct Cyc_Core_Opt {
  void * v;
};
extern char Cyc_Core_Invalid_argument[17U];
 struct Cyc_Core_Invalid_argument_exn_struct {
  char * tag;
  struct _fat_ptr f1;
};
extern char Cyc_Core_Failure[8U];
 struct Cyc_Core_Failure_exn_struct {
  char * tag;
  struct _fat_ptr f1;
};
extern char Cyc_Core_Impossible[11U];
 struct Cyc_Core_Impossible_exn_struct {
  char * tag;
  struct _fat_ptr f1;
};
extern char Cyc_Core_Not_found[10U];
 struct Cyc_Core_Not_found_exn_struct {
  char * tag;
};
extern struct _RegionHandle * Cyc_Core_heap_region;
void Cyc_Core_rethrow(void *);
extern int Cyc_open(const char *,int,struct _fat_ptr);
struct Cyc___cycFILE;
extern struct Cyc___cycFILE * Cyc_stdout;
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
extern int Cyc_fclose(struct Cyc___cycFILE *);
extern int Cyc_fflush(struct Cyc___cycFILE *);
extern struct Cyc___cycFILE * Cyc_fopen(const char *,const char *);
extern int Cyc_fprintf(struct Cyc___cycFILE *,struct _fat_ptr,struct _fat_ptr);
extern int Cyc_fputc(int,struct Cyc___cycFILE *);
extern int Cyc_fputs(const char *,struct Cyc___cycFILE *);
extern int Cyc_vfprintf(struct Cyc___cycFILE *,struct _fat_ptr,struct _fat_ptr);
extern int isspace(int);
extern int toupper(int);
extern int system(const char *);
extern void exit(int);
extern int mkdir(const char *,unsigned short);
extern int close(int);
extern int chdir(const char *);
extern struct _fat_ptr Cyc_getcwd(struct _fat_ptr,unsigned long);
 struct Cyc_List_List {
  void * hd;
  struct Cyc_List_List * tl;
};
extern struct Cyc_List_List * Cyc_List_list(struct _fat_ptr);
extern struct Cyc_List_List * Cyc_List_map(void * (*)(void *),struct Cyc_List_List *);
extern struct Cyc_List_List * Cyc_List_rev(struct Cyc_List_List *);
extern struct Cyc_List_List * Cyc_List_imp_rev(struct Cyc_List_List *);
extern struct Cyc_List_List * Cyc_List_append(struct Cyc_List_List *,struct Cyc_List_List *);
 struct _tuple0 {
  struct Cyc_List_List * f0;
  struct Cyc_List_List * f1;
};
extern struct _tuple0 Cyc_List_split(struct Cyc_List_List *);
extern long Cyc_List_mem(int (*)(void *,void *),struct Cyc_List_List *,void *);
extern unsigned long Cyc_strlen(struct _fat_ptr);
extern int Cyc_strcmp(struct _fat_ptr,struct _fat_ptr);
extern int Cyc_strptrcmp(struct _fat_ptr *,struct _fat_ptr *);
extern int Cyc_strncmp(struct _fat_ptr,struct _fat_ptr,unsigned long);
extern struct _fat_ptr Cyc_strconcat(struct _fat_ptr,struct _fat_ptr);
extern struct _fat_ptr Cyc_strconcat_l(struct Cyc_List_List *);
extern struct _fat_ptr Cyc_str_sepstr(struct Cyc_List_List *,struct _fat_ptr);
extern struct _fat_ptr Cyc_strdup(struct _fat_ptr);
extern struct _fat_ptr Cyc_substring(struct _fat_ptr,int,unsigned long);
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
 struct _tuple1 {
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
 struct _tuple3 {
  enum Cyc_Absyn_AggrKind f0;
  struct _tuple1 * f1;
  struct Cyc_Core_Opt * f2;
};
 struct _union_AggrInfo_UnknownAggr {
  int tag;
  struct _tuple3 val;
};
 struct _union_AggrInfo_KnownAggr {
  int tag;
  struct Cyc_Absyn_Aggrdecl * * val;
};
 union Cyc_Absyn_AggrInfo {
  struct _union_AggrInfo_UnknownAggr UnknownAggr;
  struct _union_AggrInfo_KnownAggr KnownAggr;
};
 struct Cyc_Absyn_ArrayInfo {
  void * elt_type;
  struct Cyc_Absyn_Tqual tq;
  struct Cyc_Absyn_Exp * num_elts;
  void * zero_term;
  unsigned int zt_loc;
};
 struct Cyc_Absyn_Aggr_td_Absyn_Raw_typedecl_struct {
  int tag;
  struct Cyc_Absyn_Aggrdecl * f1;
};
 struct Cyc_Absyn_Enum_td_Absyn_Raw_typedecl_struct {
  int tag;
  struct Cyc_Absyn_Enumdecl * f1;
};
 struct Cyc_Absyn_Datatype_td_Absyn_Raw_typedecl_struct {
  int tag;
  struct Cyc_Absyn_Datatypedecl * f1;
};
 struct Cyc_Absyn_TypeDecl {
  void * r;
  unsigned int loc;
};
 struct Cyc_Absyn_EnumCon_Absyn_TyCon_struct {
  int tag;
  struct _tuple1 * f1;
  struct Cyc_Absyn_Enumdecl * f2;
};
 struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct {
  int tag;
  union Cyc_Absyn_AggrInfo f1;
};
 struct Cyc_Absyn_AppType_Absyn_Type_struct {
  int tag;
  void * f1;
  struct Cyc_List_List * f2;
};
 struct Cyc_Absyn_PointerType_Absyn_Type_struct {
  int tag;
  struct Cyc_Absyn_PtrInfo f1;
};
 struct Cyc_Absyn_ArrayType_Absyn_Type_struct {
  int tag;
  struct Cyc_Absyn_ArrayInfo f1;
};
 struct Cyc_Absyn_FnType_Absyn_Type_struct {
  int tag;
  struct Cyc_Absyn_FnInfo f1;
};
 struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct {
  int tag;
  enum Cyc_Absyn_AggrKind f1;
  long f2;
  struct Cyc_List_List * f3;
};
 struct Cyc_Absyn_TypedefType_Absyn_Type_struct {
  int tag;
  struct _tuple1 * f1;
  struct Cyc_List_List * f2;
  struct Cyc_Absyn_Typedefdecl * f3;
  void * f4;
};
 struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct {
  int tag;
  struct Cyc_Absyn_TypeDecl * f1;
  void * * f2;
};
 struct Cyc_Absyn_TypeofType_Absyn_Type_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
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
 struct Cyc_Absyn_StructField_Absyn_OffsetofField_struct {
  int tag;
  struct _fat_ptr * f1;
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
 struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct {
  int tag;
  void * f1;
};
 struct Cyc_Absyn_Sizeofexp_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
};
 struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct {
  int tag;
  void * f1;
  struct Cyc_List_List * f2;
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
 struct _tuple9 {
  struct _fat_ptr * f0;
  struct Cyc_Absyn_Tqual f1;
  void * f2;
};
 struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_MallocInfo f1;
};
 struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Core_Opt * f1;
  struct Cyc_List_List * f2;
};
 struct Cyc_Absyn_Tagcheck_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  struct _fat_ptr * f2;
};
 struct Cyc_Absyn_Valueof_e_Absyn_Raw_exp_struct {
  int tag;
  void * f1;
};
 struct Cyc_Absyn_Extension_e_Absyn_Raw_exp_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
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
 struct Cyc_Absyn_Vardecl {
  enum Cyc_Absyn_Scope sc;
  struct _tuple1 * name;
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
  struct _tuple1 * name;
  struct Cyc_Absyn_Stmt * body;
  struct Cyc_Absyn_FnInfo i;
  void * cached_type;
  struct Cyc_Core_Opt * param_vardecls;
  struct Cyc_Absyn_Vardecl * fn_vardecl;
  enum Cyc_Absyn_Scope orig_scope;
  long escapes;
};
 struct Cyc_Absyn_Aggrfield {
  struct _fat_ptr * name;
  struct Cyc_Absyn_Tqual tq;
  void * type;
  struct Cyc_Absyn_Exp * width;
  struct Cyc_List_List * attributes;
  struct Cyc_Absyn_Exp * requires_clause;
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
  struct _tuple1 * name;
  struct Cyc_List_List * tvs;
  struct Cyc_Absyn_AggrdeclImpl * impl;
  struct Cyc_List_List * attributes;
  long expected_mem_kind;
};
 struct Cyc_Absyn_Datatypedecl {
  enum Cyc_Absyn_Scope sc;
  struct _tuple1 * name;
  struct Cyc_List_List * tvs;
  struct Cyc_Core_Opt * fields;
  long is_extensible;
};
 struct Cyc_Absyn_Enumfield {
  struct _tuple1 * name;
  struct Cyc_Absyn_Exp * tag;
  unsigned int loc;
};
 struct Cyc_Absyn_Enumdecl {
  enum Cyc_Absyn_Scope sc;
  struct _tuple1 * name;
  struct Cyc_Core_Opt * fields;
};
 struct Cyc_Absyn_Typedefdecl {
  struct _tuple1 * name;
  struct Cyc_Absyn_Tqual tq;
  struct Cyc_List_List * tvs;
  struct Cyc_Core_Opt * kind;
  void * defn;
  struct Cyc_List_List * atts;
  long extern_c;
};
 struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct {
  int tag;
  struct Cyc_Absyn_Vardecl * f1;
};
 struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct {
  int tag;
  struct Cyc_Absyn_Fndecl * f1;
};
 struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct {
  int tag;
  struct Cyc_Absyn_Aggrdecl * f1;
};
 struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct {
  int tag;
  struct Cyc_Absyn_Enumdecl * f1;
};
 struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct {
  int tag;
  struct Cyc_Absyn_Typedefdecl * f1;
};
 struct Cyc_Absyn_Decl {
  void * r;
  unsigned int loc;
};
struct Cyc_Absyn_Decl * Cyc_Absyn_new_decl(void *,unsigned int);
struct Cyc_Absyn_Decl * Cyc_Absyn_lookup_decl(struct Cyc_List_List *,struct _fat_ptr *);
 struct _tuple12 {
  enum Cyc_Absyn_AggrKind f0;
  struct _tuple1 * f1;
};
struct _tuple12 Cyc_Absyn_aggr_kinded_name(union Cyc_Absyn_AggrInfo);
struct _tuple1 * Cyc_Absyn_binding2qvar(void *);
 struct Cyc_Absynpp_Params {
  long expand_typedefs;
  long qvar_to_Cids;
  long add_cyc_prefix;
  long decls_first;
  long rewrite_temp_tvars;
  long print_all_tvars;
  long print_all_kinds;
  long print_all_effects;
  long print_using_stmts;
  long print_externC_stmts;
  long print_full_evars;
  long print_zeroterm;
  long generate_line_directives;
  long use_curr_namespace;
  struct Cyc_List_List * curr_namespace;
  long gen_clean_cyclone;
};
void Cyc_Absynpp_set_params(struct Cyc_Absynpp_Params *);
extern struct Cyc_Absynpp_Params Cyc_Absynpp_cyc_params_r;
void Cyc_Absynpp_decllist2file(struct Cyc_List_List *,struct Cyc___cycFILE *);
struct _fat_ptr Cyc_Absynpp_typ2string(void *);
 struct Cyc_Iter_Iter {
  void * env;
  long (* next)(void *,void *);
};
long Cyc_Iter_next(struct Cyc_Iter_Iter,void *);
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
void Cyc_Binding_resolve_all(struct Cyc_List_List *);
 struct Cyc_Tcenv_Genv {
  struct Cyc_Dict_Dict aggrdecls;
  struct Cyc_Dict_Dict datatypedecls;
  struct Cyc_Dict_Dict enumdecls;
  struct Cyc_Dict_Dict typedefs;
  struct Cyc_Dict_Dict ordinaries;
};
struct Cyc_Tcenv_Fenv;
 struct Cyc_Tcenv_Tenv {
  struct Cyc_List_List * ns;
  struct Cyc_Tcenv_Genv * ae;
  struct Cyc_Tcenv_Fenv * le;
  long allow_valueof:1;
  long in_extern_c_include:1;
  long in_tempest:1;
  long tempest_generalize:1;
  long in_extern_c_inc_repeat:1;
};
struct Cyc_Tcenv_Tenv * Cyc_Tcenv_tc_init();
struct Cyc___cycFILE;
extern struct Cyc___cycFILE * Cyc_stdout;
extern struct Cyc___cycFILE * Cyc_stderr;
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);
extern int Cyc_fclose(struct Cyc___cycFILE *);
extern int Cyc_fflush(struct Cyc___cycFILE *);
extern struct Cyc___cycFILE * Cyc_fopen(const char *,const char *);
extern int Cyc_fprintf(struct Cyc___cycFILE *,struct _fat_ptr,struct _fat_ptr);
extern int Cyc_fputc(int,struct Cyc___cycFILE *);
extern int Cyc_fputs(const char *,struct Cyc___cycFILE *);
extern int Cyc_vfprintf(struct Cyc___cycFILE *,struct _fat_ptr,struct _fat_ptr);
struct Cyc_List_List * Cyc_Parse_parse_file(struct Cyc___cycFILE *);
void Cyc_Tc_tc(struct Cyc_Tcenv_Tenv *,long,struct Cyc_List_List *);
extern void Cyc_Warn_reset(struct _fat_ptr);
extern int Cyc_Warn_print_warnings;
 struct Cyc_Arg_Flag_spec_Arg_Spec_struct {
  int tag;
  void (* f1)(struct _fat_ptr);
};
 struct Cyc_Arg_Set_spec_Arg_Spec_struct {
  int tag;
  long * f1;
};
 struct Cyc_Arg_String_spec_Arg_Spec_struct {
  int tag;
  void (* f1)(struct _fat_ptr);
};
extern void Cyc_Arg_usage(struct Cyc_List_List *,struct _fat_ptr);
extern int Cyc_Arg_current;
extern void Cyc_Arg_parse(struct Cyc_List_List *,void (*)(struct _fat_ptr),
			  long (*)(struct _fat_ptr),struct _fat_ptr,struct _fat_ptr);
struct Cyc_Buffer_t;
extern struct Cyc_Buffer_t * Cyc_Buffer_create(unsigned int);
extern struct _fat_ptr Cyc_Buffer_contents(struct Cyc_Buffer_t *);
extern void Cyc_Buffer_add_char(struct Cyc_Buffer_t *,char);
extern void Cyc_Buffer_add_string(struct Cyc_Buffer_t *,struct _fat_ptr);
extern struct _fat_ptr Cyc_Filename_concat(struct _fat_ptr,struct _fat_ptr);
extern struct _fat_ptr Cyc_Filename_chop_extension(struct _fat_ptr);
extern struct _fat_ptr Cyc_Filename_dirname(struct _fat_ptr);
extern struct _fat_ptr Cyc_Filename_basename(struct _fat_ptr);
struct Cyc_Hashtable_Table;
extern struct Cyc_Hashtable_Table * Cyc_Hashtable_create(int,int (*)(void *,
								     void *),
							 int (*)(void *));
extern void Cyc_Hashtable_insert(struct Cyc_Hashtable_Table *,void *,void *);
extern void * Cyc_Hashtable_lookup(struct Cyc_Hashtable_Table *,void *);
extern int Cyc_Hashtable_hash_stringptr(struct _fat_ptr *);
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
extern char Cyc_Lexing_lexeme_char(struct Cyc_Lexing_lexbuf *,int);
extern int Cyc_Lexing_lexeme_start(struct Cyc_Lexing_lexbuf *);
extern int Cyc_Lexing_lexeme_end(struct Cyc_Lexing_lexbuf *);
struct Cyc_Set_Set;
extern struct Cyc_Set_Set * Cyc_Set_empty(int (*)(void *,void *));
extern struct Cyc_Set_Set * Cyc_Set_insert(struct Cyc_Set_Set *,void *);
extern struct Cyc_Set_Set * Cyc_Set_union_two(struct Cyc_Set_Set *,struct Cyc_Set_Set *);
extern struct Cyc_Set_Set * Cyc_Set_diff(struct Cyc_Set_Set *,struct Cyc_Set_Set *);
extern struct Cyc_Set_Set * Cyc_Set_delete(struct Cyc_Set_Set *,void *);
extern int Cyc_Set_cardinality(struct Cyc_Set_Set *);
extern long Cyc_Set_is_empty(struct Cyc_Set_Set *);
extern long Cyc_Set_member(struct Cyc_Set_Set *,void *);
extern void * Cyc_Set_choose(struct Cyc_Set_Set *);
extern struct Cyc_Iter_Iter Cyc_Set_make_iter(struct _RegionHandle *,struct Cyc_Set_Set *);
extern void Cyc_Lex_lex_init(long);
enum Cyc_name_kind {
  Cyc_NK_Tag = 0U,
  Cyc_NK_Ident = 1U
};
static struct _fat_ptr Cyc_nk2str(enum Cyc_name_kind kind) {
  enum Cyc_name_kind _T0;
  int _T1;
  struct _fat_ptr _T2;
  struct _fat_ptr _T3;
  struct _fat_ptr _T4;
  _T0 = kind;
  _T1 = (int)_T0;
  switch (_T1) {
  case Cyc_NK_Tag: 
    _T2 = _tag_fat("tag",sizeof(char),4U);
    return _T2;
  case Cyc_NK_Ident: 
    _T3 = _tag_fat("",sizeof(char),1U);
    return _T3;
  default: 
    _T4 = _tag_fat("<invalid>",sizeof(char),10U);
    return _T4;
  }
  ;
}
static char _TmpG0[4U] = "gcc";
static struct _fat_ptr Cyc_cyclone_cc = {(unsigned char *)_TmpG0,(unsigned char *)_TmpG0,
					 (unsigned char *)_TmpG0 + 4U};
static long Cyc_do_setjmp = 0;
static long Cyc_verbose = 0;
struct Cyc___cycFILE * Cyc_log_file = 0;
struct Cyc___cycFILE * Cyc_cstubs_file = 0;
struct Cyc___cycFILE * Cyc_cycstubs_file = 0;
int Cyc_log(struct _fat_ptr fmt,struct _fat_ptr ap) {
  struct Cyc___cycFILE * _T0;
  struct _fat_ptr _T1;
  struct _fat_ptr _T2;
  struct Cyc___cycFILE * _T3;
  int _T4;
  if (Cyc_log_file != 0) { goto _TL1;
  }
  _T0 = Cyc_stderr;
  _T1 = _tag_fat("Internal error: log file is NULL\n",sizeof(char),34U);
  _T2 = _tag_fat(0U,sizeof(void *),0);
  Cyc_fprintf(_T0,_T1,_T2);
  exit(1);
  goto _TL2;
  _TL1: _TL2: { int x = Cyc_vfprintf(Cyc_log_file,fmt,ap);
    _T3 = _check_null(Cyc_log_file);
    Cyc_fflush(_T3);
    _T4 = x;
    return _T4;
  }
}
static struct _fat_ptr * Cyc_current_source = 0;
static struct Cyc_List_List * Cyc_current_args = 0;
static struct Cyc_Set_Set * * Cyc_current_targets = 0;
static void Cyc_add_target(struct _fat_ptr * sptr) {
  struct Cyc_Set_Set * * _T0;
  struct Cyc_Set_Set * (* _T1)(struct Cyc_Set_Set *,struct _fat_ptr *);
  struct Cyc_Set_Set * (* _T2)(struct Cyc_Set_Set *,void *);
  struct Cyc_Set_Set * * _T3;
  struct Cyc_Set_Set * _T4;
  struct _fat_ptr * _T5;
  { struct Cyc_Set_Set * * _T6 = _cycalloc(sizeof(struct Cyc_Set_Set *));
    _T2 = Cyc_Set_insert;
    { struct Cyc_Set_Set * (* _T7)(struct Cyc_Set_Set *,struct _fat_ptr *) = (struct Cyc_Set_Set * (*)(struct Cyc_Set_Set *,
												       struct _fat_ptr *))_T2;
      _T1 = _T7;
    }_T3 = _check_null(Cyc_current_targets);
    _T4 = *_T3;
    _T5 = sptr;
    *_T6 = _T1(_T4,_T5);
    _T0 = (struct Cyc_Set_Set * *)_T6;
  }Cyc_current_targets = _T0;
}
static struct Cyc_Set_Set * * Cyc_headers_to_do = 0;
 struct _tuple15 {
  struct _fat_ptr * f0;
  struct Cyc_Set_Set * f1;
};
extern struct _tuple15 * Cyc_line(struct Cyc_Lexing_lexbuf *);
extern int Cyc_macroname(struct Cyc_Lexing_lexbuf *);
extern int Cyc_args(struct Cyc_Lexing_lexbuf *);
extern int Cyc_token(struct Cyc_Lexing_lexbuf *);
extern int Cyc_string(struct Cyc_Lexing_lexbuf *);
struct Cyc___cycFILE * Cyc_slurp_out = 0;
extern int Cyc_slurp_string(struct Cyc_Lexing_lexbuf *);
extern int Cyc_asm_string(struct Cyc_Lexing_lexbuf *);
extern int Cyc_asm_comment(struct Cyc_Lexing_lexbuf *);
 struct _tuple16 {
  struct _fat_ptr f0;
  struct _fat_ptr * f1;
};
extern struct _tuple16 * Cyc_suck_line(struct Cyc_Lexing_lexbuf *);
extern int Cyc_suck_macroname(struct Cyc_Lexing_lexbuf *);
extern int Cyc_suck_restofline(struct Cyc_Lexing_lexbuf *);
struct _fat_ptr Cyc_current_line = {(void *)0,(void *)0,(void *)(0 + 0)};
 struct _tuple17 {
  struct _fat_ptr f0;
  struct _fat_ptr f1;
};
 struct _tuple18 {
  struct _fat_ptr * f0;
  struct _fat_ptr * f1;
};
 struct _tuple19 {
  struct _fat_ptr f0;
  struct Cyc_List_List * f1;
  struct Cyc_List_List * f2;
  struct Cyc_List_List * f3;
  struct Cyc_List_List * f4;
  struct Cyc_List_List * f5;
  struct Cyc_List_List * f6;
  struct Cyc_List_List * f7;
};
extern struct _tuple19 * Cyc_spec(struct Cyc_Lexing_lexbuf *);
extern int Cyc_commands(struct Cyc_Lexing_lexbuf *);
extern int Cyc_snarfsymbols(struct Cyc_Lexing_lexbuf *);
extern int Cyc_block(struct Cyc_Lexing_lexbuf *);
extern int Cyc_block_string(struct Cyc_Lexing_lexbuf *);
extern int Cyc_block_comment(struct Cyc_Lexing_lexbuf *);
struct _fat_ptr Cyc_current_headerfile = {(void *)0,(void *)0,(void *)(0 + 0)};
struct Cyc_List_List * Cyc_snarfed_symbols = 0;
struct Cyc_List_List * Cyc_current_symbols = 0;
struct Cyc_List_List * Cyc_current_user_defs = 0;
struct Cyc_List_List * Cyc_current_cstubs = 0;
struct Cyc_List_List * Cyc_current_cycstubs = 0;
struct Cyc_List_List * Cyc_current_hstubs = 0;
struct Cyc_List_List * Cyc_current_omit_symbols = 0;
struct Cyc_List_List * Cyc_current_cpp = 0;
struct Cyc_Buffer_t * Cyc_specbuf = 0;
struct _fat_ptr Cyc_current_symbol = {(void *)0,(void *)0,(void *)(0 + 0)};
long Cyc_rename_current_symbol = 0;
int Cyc_braces_to_match = 0;
int Cyc_parens_to_match = 0;
int Cyc_numdef = 0;
static struct Cyc_List_List * Cyc_cppargs = 0;
static char _TmpG1[14U] = "BUILDLIB_sym_";
struct _fat_ptr Cyc_user_prefix = {(unsigned char *)_TmpG1,(unsigned char *)_TmpG1,
				   (unsigned char *)_TmpG1 + 14U};
static struct _fat_ptr * Cyc_add_user_prefix(struct _fat_ptr * symbol) {
  struct _fat_ptr _T0;
  struct _fat_ptr * _T1;
  struct _fat_ptr _T2;
  struct _fat_ptr _T3;
  struct _fat_ptr * _T4;
  _T0 = Cyc_user_prefix;
  _T1 = symbol;
  _T2 = *_T1;
  _T3 = Cyc_strconcat(_T0,_T2);
  { struct _fat_ptr s = _T3;
    { struct _fat_ptr * _T5 = _cycalloc(sizeof(struct _fat_ptr));
      *_T5 = s;
      _T4 = (struct _fat_ptr *)_T5;
    }return _T4;
  }
}
static struct _fat_ptr Cyc_remove_user_prefix(struct _fat_ptr symbol) {
  int _T0;
  struct Cyc_String_pa_PrintArg_struct _T1;
  struct Cyc___cycFILE * _T2;
  struct _fat_ptr _T3;
  struct _fat_ptr _T4;
  struct _fat_ptr _T5;
  struct _fat_ptr _T6;
  unsigned int _T7;
  int _T8;
  unsigned long _T9;
  unsigned int _TA;
  unsigned long _TB;
  struct _fat_ptr _TC;
  struct _fat_ptr _TD;
  unsigned int prefix_len = Cyc_strlen(Cyc_user_prefix);
  _T0 = Cyc_strncmp(symbol,Cyc_user_prefix,prefix_len);
  if (_T0 == 0) { goto _TL3;
  }
  { struct Cyc_String_pa_PrintArg_struct _TE;
    _TE.tag = 0;
    _TE.f1 = symbol;
    _T1 = _TE;
  }{ struct Cyc_String_pa_PrintArg_struct _TE = _T1;
    void * _TF[1];
    _TF[0] = &_TE;
    _T2 = Cyc_stderr;
    _T3 = _tag_fat("Internal error: bad user type name %s\n",sizeof(char),
		   39U);
    _T4 = _tag_fat(_TF,sizeof(void *),1);
    Cyc_fprintf(_T2,_T3,_T4);
  }_T5 = symbol;
  return _T5;
  _TL3: _T6 = symbol;
  _T7 = prefix_len;
  _T8 = (int)_T7;
  _T9 = Cyc_strlen(symbol);
  _TA = prefix_len;
  _TB = _T9 - _TA;
  _TC = Cyc_substring(_T6,_T8,_TB);
  _TD = _TC;
  return _TD;
}
static void Cyc_rename_decl(struct Cyc_Absyn_Decl * d) {
  struct Cyc_Absyn_Decl * _T0;
  int * _T1;
  unsigned int _T2;
  struct Cyc_Absyn_Aggrdecl * _T3;
  struct _tuple1 * _T4;
  struct _fat_ptr * _T5;
  struct Cyc_Absyn_Aggrdecl * _T6;
  struct _tuple1 * _T7;
  struct _tuple1 _T8;
  struct _fat_ptr * _T9;
  struct _fat_ptr _TA;
  struct Cyc_Absyn_Enumdecl * _TB;
  struct _tuple1 * _TC;
  struct _fat_ptr * _TD;
  struct Cyc_Absyn_Enumdecl * _TE;
  struct _tuple1 * _TF;
  struct _tuple1 _T10;
  struct _fat_ptr * _T11;
  struct _fat_ptr _T12;
  struct Cyc_Absyn_Typedefdecl * _T13;
  struct _tuple1 * _T14;
  struct _fat_ptr * _T15;
  struct Cyc_Absyn_Typedefdecl * _T16;
  struct _tuple1 * _T17;
  struct _tuple1 _T18;
  struct _fat_ptr * _T19;
  struct _fat_ptr _T1A;
  struct Cyc___cycFILE * _T1B;
  struct _fat_ptr _T1C;
  struct _fat_ptr _T1D;
  _T0 = d;
  { void * _T1E = _T0->r;
    struct Cyc_Absyn_Typedefdecl * _T1F;
    struct Cyc_Absyn_Enumdecl * _T20;
    struct Cyc_Absyn_Aggrdecl * _T21;
    _T1 = (int *)_T1E;
    _T2 = *_T1;
    switch (_T2) {
    case 5: 
      { struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct * _T22 = (struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct *)_T1E;
	_T21 = _T22->f1;
      }{ struct Cyc_Absyn_Aggrdecl * ad = _T21;
	_T3 = ad;
	_T4 = _T3->name;
	{ struct _fat_ptr * _T22 = _cycalloc(sizeof(struct _fat_ptr));
	  _T6 = ad;
	  _T7 = _T6->name;
	  _T8 = *_T7;
	  _T9 = _T8.f1;
	  _TA = *_T9;
	  *_T22 = Cyc_remove_user_prefix(_TA);
	  _T5 = (struct _fat_ptr *)_T22;
	}(*_T4).f1 = _T5;
	goto _LL0;
      }
    case 7: 
      { struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct * _T22 = (struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct *)_T1E;
	_T20 = _T22->f1;
      }{ struct Cyc_Absyn_Enumdecl * ed = _T20;
	_TB = ed;
	_TC = _TB->name;
	{ struct _fat_ptr * _T22 = _cycalloc(sizeof(struct _fat_ptr));
	  _TE = ed;
	  _TF = _TE->name;
	  _T10 = *_TF;
	  _T11 = _T10.f1;
	  _T12 = *_T11;
	  *_T22 = Cyc_remove_user_prefix(_T12);
	  _TD = (struct _fat_ptr *)_T22;
	}(*_TC).f1 = _TD;
	goto _LL0;
      }
    case 8: 
      { struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct * _T22 = (struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct *)_T1E;
	_T1F = _T22->f1;
      }{ struct Cyc_Absyn_Typedefdecl * td = _T1F;
	_T13 = td;
	_T14 = _T13->name;
	{ struct _fat_ptr * _T22 = _cycalloc(sizeof(struct _fat_ptr));
	  _T16 = td;
	  _T17 = _T16->name;
	  _T18 = *_T17;
	  _T19 = _T18.f1;
	  _T1A = *_T19;
	  *_T22 = Cyc_remove_user_prefix(_T1A);
	  _T15 = (struct _fat_ptr *)_T22;
	}(*_T14).f1 = _T15;
	goto _LL0;
      }
    default: 
      _T1B = Cyc_stderr;
      _T1C = _tag_fat("Error in .cys file: bad user-defined type definition\n",
		      sizeof(char),54U);
      _T1D = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T1B,_T1C,_T1D);
      exit(1);
    }
    _LL0: ;
  }
}
const int Cyc_lex_base[496U] = {0,
				0,
				75,
				192,
				305,
				310,
				311,
				166,
				312,
				91,
				27,
				384,
				28,
				523,
				637,
				715,
				829,
				325,
				92,
				- 3,
				0,
				- 1,
				- 2,
				- 8,
				- 3,
				1,
				- 2,
				323,
				- 4,
				2,
				166,
				- 5,
				605,
				907,
				312,
				- 6,
				- 8,
				- 4,
				16,
				945,
				- 3,
				1021,
				29,
				11,
				12,
				1135,
				- 3,
				- 4,
				13,
				1250,
				81,
				223,
				- 14,
				317,
				13,
				- 2,
				219,
				20,
				27,
				29,
				34,
				50,
				49,
				71,
				55,
				66,
				101,
				101,
				100,
				108,
				95,
				319,
				112,
				104,
				105,
				123,
				126,
				386,
				112,
				134,
				190,
				397,
				1365,
				1480,
				399,
				205,
				225,
				244,
				235,
				237,
				237,
				257,
				414,
				1595,
				- 9,
				1710,
				525,
				- 10,
				239,
				259,
				654,
				1825,
				- 7,
				1940,
				684,
				720,
				- 11,
				434,
				370,
				379,
				2018,
				2095,
				2172,
				2253,
				465,
				467,
				381,
				2328,
				258,
				267,
				267,
				265,
				271,
				281,
				0,
				14,
				4,
				2409,
				5,
				462,
				2417,
				2482,
				475,
				- 4,
				- 3,
				351,
				550,
				6,
				2443,
				7,
				491,
				2505,
				2543,
				499,
				- 29,
				746,
				1162,
				1,
				279,
				282,
				276,
				286,
				300,
				306,
				319,
				- 26,
				584,
				300,
				302,
				310,
				306,
				318,
				329,
				340,
				373,
				397,
				407,
				418,
				424,
				426,
				- 24,
				416,
				440,
				444,
				454,
				463,
				448,
				- 28,
				457,
				477,
				473,
				483,
				490,
				491,
				- 20,
				471,
				513,
				505,
				501,
				512,
				508,
				539,
				556,
				557,
				555,
				551,
				552,
				581,
				582,
				- 22,
				573,
				571,
				564,
				582,
				578,
				596,
				574,
				598,
				605,
				593,
				603,
				594,
				594,
				- 27,
				602,
				596,
				599,
				609,
				617,
				600,
				602,
				618,
				625,
				627,
				829,
				4,
				631,
				632,
				631,
				622,
				621,
				636,
				639,
				642,
				624,
				642,
				644,
				5,
				23,
				- 16,
				741,
				644,
				635,
				638,
				636,
				654,
				643,
				639,
				645,
				661,
				646,
				660,
				663,
				659,
				681,
				691,
				699,
				706,
				733,
				736,
				752,
				753,
				51,
				52,
				- 18,
				739,
				742,
				736,
				746,
				748,
				763,
				764,
				1,
				54,
				823,
				819,
				821,
				765,
				765,
				772,
				773,
				938,
				830,
				776,
				777,
				805,
				801,
				780,
				792,
				847,
				848,
				849,
				796,
				797,
				1078,
				847,
				848,
				849,
				850,
				814,
				839,
				865,
				871,
				872,
				927,
				928,
				938,
				- 15,
				885,
				886,
				941,
				942,
				943,
				890,
				891,
				946,
				947,
				948,
				- 12,
				895,
				896,
				951,
				962,
				995,
				942,
				943,
				998,
				1000,
				1027,
				- 13,
				968,
				967,
				981,
				984,
				987,
				996,
				1012,
				1014,
				1020,
				1022,
				1106,
				1108,
				- 17,
				1056,
				1057,
				1255,
				1121,
				1123,
				- 19,
				1281,
				1056,
				1057,
				1054,
				1053,
				1052,
				1047,
				1050,
				1055,
				1057,
				1055,
				1069,
				1257,
				1061,
				1062,
				1062,
				1075,
				1372,
				1392,
				1079,
				1080,
				1070,
				1071,
				1069,
				1082,
				1485,
				1074,
				1085,
				1084,
				1097,
				1487,
				- 7,
				- 8,
				8,
				1374,
				2575,
				9,
				1454,
				2599,
				2637,
				1561,
				1608,
				- 49,
				1377,
				- 2,
				1137,
				- 4,
				1138,
				1224,
				1482,
				1165,
				1231,
				1248,
				1580,
				1166,
				2664,
				2707,
				1170,
				1217,
				1168,
				1211,
				2777,
				1170,
				1219,
				- 36,
				- 42,
				- 37,
				2852,
				1208,
				- 40,
				- 25,
				1214,
				- 45,
				- 39,
				- 48,
				2927,
				2956,
				1679,
				1227,
				1238,
				1695,
				2966,
				2996,
				1794,
				1810,
				3029,
				3060,
				3098,
				1306,
				1317,
				3168,
				3206,
				1309,
				1319,
				1311,
				1353,
				1425,
				1435,
				- 6,
				- 34,
				1235,
				3138,
				- 47,
				- 30,
				- 32,
				- 46,
				- 31,
				- 33,
				1244,
				3246,
				1245,
				1247,
				1912,
				1249,
				1257,
				1269,
				1272,
				1302,
				1303,
				1337,
				1353,
				1359,
				3319,
				3403,
				- 23,
				- 21,
				1929,
				1360,
				- 41,
				- 38,
				- 35,
				1943,
				3485,
				2,
				1354,
				1357,
				1366,
				3568,
				1369,
				15,
				1311,
				1355,
				1355,
				1353,
				1349,
				1398,
				4};
const int Cyc_lex_backtrk[496U] = {- 1,
				   - 1,
				   - 1,
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
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   2,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   2,
				   - 1,
				   8,
				   - 1,
				   3,
				   5,
				   - 1,
				   - 1,
				   6,
				   5,
				   - 1,
				   - 1,
				   - 1,
				   7,
				   6,
				   - 1,
				   6,
				   5,
				   2,
				   5,
				   0,
				   - 1,
				   - 1,
				   - 1,
				   0,
				   - 1,
				   2,
				   - 1,
				   12,
				   13,
				   - 1,
				   13,
				   13,
				   13,
				   13,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   11,
				   12,
				   2,
				   4,
				   4,
				   - 1,
				   0,
				   0,
				   0,
				   2,
				   0,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   2,
				   2,
				   8,
				   3,
				   5,
				   - 1,
				   6,
				   5,
				   - 1,
				   - 1,
				   6,
				   5,
				   2,
				   8,
				   3,
				   5,
				   - 1,
				   6,
				   5,
				   - 1,
				   28,
				   28,
				   28,
				   28,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   24,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   20,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   22,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
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
				   1,
				   9,
				   2,
				   4,
				   - 1,
				   5,
				   4,
				   - 1,
				   - 1,
				   2,
				   - 1,
				   48,
				   - 1,
				   48,
				   48,
				   48,
				   48,
				   48,
				   48,
				   48,
				   48,
				   5,
				   7,
				   48,
				   48,
				   48,
				   48,
				   0,
				   48,
				   48,
				   - 1,
				   - 1,
				   - 1,
				   0,
				   43,
				   - 1,
				   - 1,
				   42,
				   - 1,
				   - 1,
				   - 1,
				   9,
				   7,
				   - 1,
				   7,
				   7,
				   - 1,
				   8,
				   9,
				   - 1,
				   - 1,
				   9,
				   5,
				   6,
				   5,
				   5,
				   - 1,
				   4,
				   4,
				   4,
				   6,
				   6,
				   5,
				   5,
				   - 1,
				   - 1,
				   - 1,
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
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   2,
				   - 1,
				   1,
				   - 1,
				   - 1,
				   - 1,
				   2,
				   1,
				   1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1};
const int Cyc_lex_default[496U] = {- 1,
				   - 1,
				   - 1,
				   391,
				   380,
				   144,
				   23,
				   102,
				   23,
				   19,
				   - 1,
				   - 1,
				   12,
				   31,
				   52,
				   35,
				   36,
				   23,
				   19,
				   0,
				   - 1,
				   0,
				   0,
				   0,
				   0,
				   - 1,
				   0,
				   - 1,
				   0,
				   - 1,
				   - 1,
				   0,
				   - 1,
				   - 1,
				   - 1,
				   0,
				   0,
				   0,
				   - 1,
				   - 1,
				   0,
				   - 1,
				   42,
				   - 1,
				   - 1,
				   - 1,
				   0,
				   0,
				   - 1,
				   - 1,
				   50,
				   - 1,
				   0,
				   - 1,
				   - 1,
				   0,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
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
				   - 1,
				   - 1,
				   0,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   0,
				   - 1,
				   - 1,
				   - 1,
				   0,
				   107,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   114,
				   114,
				   114,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
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
				   0,
				   - 1,
				   136,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   0,
				   - 1,
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
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
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
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   0,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   0,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
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
				   - 1,
				   - 1,
				   - 1,
				   - 1,
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
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
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
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
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
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   274,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
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
				   - 1,
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
				   - 1,
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
				   - 1,
				   - 1,
				   - 1,
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
				   - 1,
				   - 1,
				   - 1,
				   347,
				   347,
				   0,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
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
				   0,
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
				   - 1,
				   0,
				   - 1,
				   0,
				   - 1,
				   - 1,
				   457,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
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
				   0,
				   0,
				   - 1,
				   - 1,
				   0,
				   0,
				   - 1,
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
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
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
				   0,
				   - 1,
				   - 1,
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
				   0,
				   - 1,
				   - 1,
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
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1,
				   - 1};
const int Cyc_lex_trans[3825U] = {0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  22,
				  19,
				  28,
				  488,
				  19,
				  28,
				  19,
				  28,
				  36,
				  19,
				  51,
				  51,
				  48,
				  48,
				  51,
				  22,
				  48,
				  0,
				  0,
				  0,
				  0,
				  0,
				  21,
				  273,
				  21,
				  489,
				  21,
				  22,
				  - 1,
				  - 1,
				  22,
				  - 1,
				  - 1,
				  51,
				  226,
				  48,
				  238,
				  22,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  31,
				  50,
				  107,
				  22,
				  118,
				  42,
				  239,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  19,
				  263,
				  264,
				  274,
				  486,
				  156,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  125,
				  20,
				  78,
				  22,
				  72,
				  60,
				  61,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  62,
				  63,
				  64,
				  65,
				  481,
				  66,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  67,
				  68,
				  133,
				  392,
				  393,
				  392,
				  392,
				  393,
				  134,
				  22,
				  69,
				  70,
				  71,
				  73,
				  74,
				  135,
				  34,
				  34,
				  34,
				  34,
				  34,
				  34,
				  34,
				  34,
				  75,
				  76,
				  392,
				  394,
				  395,
				  77,
				  79,
				  396,
				  397,
				  398,
				  51,
				  51,
				  399,
				  400,
				  51,
				  401,
				  402,
				  403,
				  404,
				  405,
				  405,
				  405,
				  405,
				  405,
				  405,
				  405,
				  405,
				  405,
				  406,
				  80,
				  407,
				  408,
				  409,
				  51,
				  19,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  19,
				  - 1,
				  - 1,
				  411,
				  410,
				  81,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  381,
				  412,
				  105,
				  382,
				  145,
				  145,
				  24,
				  24,
				  145,
				  137,
				  126,
				  108,
				  108,
				  71,
				  71,
				  108,
				  85,
				  71,
				  28,
				  86,
				  24,
				  29,
				  - 1,
				  25,
				  383,
				  87,
				  98,
				  145,
				  88,
				  22,
				  26,
				  26,
				  21,
				  21,
				  108,
				  89,
				  71,
				  146,
				  90,
				  91,
				  92,
				  99,
				  100,
				  119,
				  26,
				  35,
				  35,
				  35,
				  35,
				  35,
				  35,
				  35,
				  35,
				  120,
				  121,
				  122,
				  30,
				  30,
				  30,
				  30,
				  30,
				  30,
				  30,
				  30,
				  108,
				  108,
				  123,
				  124,
				  108,
				  149,
				  150,
				  151,
				  152,
				  116,
				  116,
				  116,
				  116,
				  116,
				  31,
				  116,
				  77,
				  77,
				  384,
				  136,
				  77,
				  153,
				  154,
				  108,
				  138,
				  127,
				  147,
				  82,
				  82,
				  84,
				  84,
				  82,
				  116,
				  84,
				  116,
				  155,
				  214,
				  215,
				  27,
				  77,
				  200,
				  31,
				  194,
				  21,
				  93,
				  93,
				  148,
				  185,
				  93,
				  178,
				  82,
				  171,
				  84,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  28,
				  32,
				  - 1,
				  164,
				  93,
				  - 1,
				  22,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  - 1,
				  165,
				  - 1,
				  - 1,
				  117,
				  - 1,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  166,
				  167,
				  19,
				  132,
				  132,
				  132,
				  132,
				  132,
				  132,
				  132,
				  132,
				  168,
				  169,
				  31,
				  170,
				  35,
				  35,
				  35,
				  35,
				  35,
				  35,
				  35,
				  35,
				  35,
				  172,
				  109,
				  109,
				  96,
				  96,
				  109,
				  94,
				  96,
				  143,
				  143,
				  143,
				  143,
				  143,
				  143,
				  143,
				  143,
				  35,
				  35,
				  35,
				  35,
				  35,
				  35,
				  35,
				  35,
				  109,
				  173,
				  96,
				  174,
				  175,
				  - 1,
				  94,
				  176,
				  - 1,
				  177,
				  179,
				  21,
				  21,
				  21,
				  110,
				  111,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  21,
				  180,
				  181,
				  182,
				  183,
				  184,
				  186,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  187,
				  188,
				  189,
				  190,
				  110,
				  191,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  53,
				  53,
				  97,
				  192,
				  53,
				  193,
				  36,
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
				  101,
				  101,
				  195,
				  196,
				  101,
				  197,
				  53,
				  33,
				  33,
				  33,
				  33,
				  33,
				  33,
				  198,
				  199,
				  201,
				  202,
				  203,
				  157,
				  158,
				  159,
				  54,
				  160,
				  101,
				  204,
				  205,
				  161,
				  - 1,
				  206,
				  207,
				  104,
				  104,
				  208,
				  55,
				  104,
				  162,
				  163,
				  209,
				  210,
				  33,
				  33,
				  33,
				  33,
				  33,
				  33,
				  211,
				  212,
				  213,
				  343,
				  216,
				  217,
				  218,
				  219,
				  104,
				  220,
				  221,
				  222,
				  223,
				  - 1,
				  224,
				  - 1,
				  43,
				  43,
				  227,
				  240,
				  43,
				  105,
				  105,
				  228,
				  229,
				  105,
				  230,
				  231,
				  56,
				  232,
				  233,
				  234,
				  235,
				  57,
				  58,
				  236,
				  237,
				  330,
				  277,
				  43,
				  59,
				  265,
				  245,
				  246,
				  105,
				  247,
				  248,
				  367,
				  367,
				  249,
				  250,
				  367,
				  251,
				  252,
				  44,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  253,
				  46,
				  254,
				  255,
				  102,
				  367,
				  28,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  - 1,
				  36,
				  256,
				  257,
				  45,
				  258,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  224,
				  224,
				  47,
				  241,
				  224,
				  106,
				  259,
				  368,
				  260,
				  261,
				  262,
				  266,
				  242,
				  243,
				  267,
				  268,
				  269,
				  369,
				  270,
				  244,
				  271,
				  272,
				  276,
				  224,
				  94,
				  37,
				  275,
				  278,
				  279,
				  280,
				  281,
				  225,
				  292,
				  284,
				  285,
				  286,
				  287,
				  288,
				  38,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  289,
				  290,
				  291,
				  52,
				  293,
				  294,
				  21,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  324,
				  319,
				  313,
				  308,
				  39,
				  300,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  40,
				  301,
				  22,
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
				  302,
				  303,
				  304,
				  305,
				  306,
				  282,
				  31,
				  33,
				  33,
				  33,
				  33,
				  33,
				  33,
				  283,
				  307,
				  309,
				  310,
				  311,
				  312,
				  106,
				  314,
				  315,
				  316,
				  317,
				  318,
				  320,
				  321,
				  322,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  323,
				  33,
				  33,
				  33,
				  33,
				  33,
				  33,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  97,
				  325,
				  326,
				  327,
				  41,
				  328,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  329,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  - 1,
				  331,
				  332,
				  333,
				  334,
				  335,
				  21,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  336,
				  337,
				  338,
				  339,
				  41,
				  340,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  48,
				  48,
				  295,
				  341,
				  48,
				  342,
				  296,
				  344,
				  345,
				  362,
				  357,
				  353,
				  354,
				  355,
				  356,
				  297,
				  102,
				  298,
				  - 1,
				  358,
				  348,
				  359,
				  360,
				  48,
				  361,
				  363,
				  364,
				  349,
				  349,
				  365,
				  366,
				  349,
				  375,
				  370,
				  371,
				  372,
				  373,
				  374,
				  376,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  377,
				  349,
				  378,
				  379,
				  299,
				  155,
				  479,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  456,
				  448,
				  423,
				  419,
				  49,
				  415,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  22,
				  48,
				  48,
				  350,
				  477,
				  48,
				  345,
				  345,
				  361,
				  361,
				  345,
				  418,
				  361,
				  351,
				  177,
				  417,
				  144,
				  422,
				  352,
				  420,
				  213,
				  421,
				  413,
				  451,
				  48,
				  170,
				  184,
				  478,
				  348,
				  345,
				  474,
				  361,
				  349,
				  349,
				  455,
				  452,
				  349,
				  346,
				  264,
				  19,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  106,
				  453,
				  454,
				  318,
				  36,
				  349,
				  36,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  329,
				  52,
				  414,
				  36,
				  49,
				  36,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  22,
				  82,
				  82,
				  307,
				  - 1,
				  82,
				  - 1,
				  350,
				  366,
				  366,
				  390,
				  390,
				  366,
				  480,
				  390,
				  480,
				  480,
				  351,
				  35,
				  239,
				  35,
				  31,
				  31,
				  102,
				  82,
				  342,
				  199,
				  484,
				  367,
				  367,
				  485,
				  366,
				  367,
				  390,
				  28,
				  21,
				  480,
				  21,
				  490,
				  31,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  35,
				  367,
				  35,
				  31,
				  31,
				  102,
				  102,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  491,
				  492,
				  493,
				  494,
				  83,
				  102,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  31,
				  84,
				  84,
				  368,
				  - 1,
				  84,
				  374,
				  374,
				  379,
				  379,
				  374,
				  495,
				  379,
				  369,
				  389,
				  389,
				  389,
				  389,
				  389,
				  389,
				  389,
				  389,
				  447,
				  447,
				  84,
				  0,
				  0,
				  0,
				  0,
				  374,
				  0,
				  379,
				  0,
				  - 1,
				  0,
				  0,
				  0,
				  28,
				  0,
				  35,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  0,
				  0,
				  0,
				  0,
				  447,
				  447,
				  0,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  0,
				  0,
				  0,
				  458,
				  83,
				  0,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  35,
				  93,
				  93,
				  0,
				  0,
				  93,
				  31,
				  31,
				  31,
				  31,
				  31,
				  31,
				  31,
				  31,
				  390,
				  390,
				  0,
				  0,
				  390,
				  0,
				  0,
				  0,
				  0,
				  449,
				  93,
				  450,
				  450,
				  450,
				  450,
				  450,
				  450,
				  450,
				  450,
				  450,
				  450,
				  0,
				  0,
				  390,
				  0,
				  21,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  0,
				  0,
				  0,
				  0,
				  95,
				  0,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  94,
				  96,
				  96,
				  0,
				  429,
				  96,
				  429,
				  0,
				  0,
				  430,
				  430,
				  430,
				  430,
				  430,
				  430,
				  430,
				  430,
				  430,
				  430,
				  0,
				  - 1,
				  0,
				  0,
				  0,
				  96,
				  430,
				  430,
				  430,
				  430,
				  430,
				  430,
				  430,
				  430,
				  430,
				  430,
				  0,
				  0,
				  0,
				  0,
				  0,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  0,
				  0,
				  0,
				  0,
				  95,
				  0,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  97,
				  101,
				  101,
				  0,
				  433,
				  101,
				  433,
				  0,
				  0,
				  434,
				  434,
				  434,
				  434,
				  434,
				  434,
				  434,
				  434,
				  434,
				  434,
				  0,
				  0,
				  0,
				  0,
				  0,
				  101,
				  434,
				  434,
				  434,
				  434,
				  434,
				  434,
				  434,
				  434,
				  434,
				  434,
				  0,
				  0,
				  0,
				  0,
				  0,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  0,
				  0,
				  0,
				  0,
				  103,
				  0,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  102,
				  104,
				  104,
				  199,
				  480,
				  104,
				  480,
				  480,
				  0,
				  0,
				  0,
				  0,
				  475,
				  475,
				  475,
				  475,
				  475,
				  475,
				  475,
				  475,
				  199,
				  0,
				  0,
				  0,
				  104,
				  0,
				  0,
				  480,
				  0,
				  476,
				  476,
				  476,
				  476,
				  476,
				  476,
				  476,
				  476,
				  0,
				  0,
				  0,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  0,
				  0,
				  0,
				  0,
				  103,
				  0,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  36,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  22,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  0,
				  0,
				  0,
				  0,
				  112,
				  0,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  113,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  22,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  0,
				  0,
				  0,
				  0,
				  112,
				  0,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  22,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  - 1,
				  0,
				  0,
				  - 1,
				  112,
				  0,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  0,
				  0,
				  0,
				  0,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  115,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  0,
				  0,
				  0,
				  0,
				  113,
				  0,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  28,
				  0,
				  0,
				  128,
				  117,
				  0,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  0,
				  0,
				  28,
				  0,
				  0,
				  139,
				  129,
				  129,
				  129,
				  129,
				  129,
				  129,
				  129,
				  129,
				  131,
				  131,
				  131,
				  131,
				  131,
				  131,
				  131,
				  131,
				  131,
				  131,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  131,
				  131,
				  131,
				  131,
				  131,
				  131,
				  0,
				  0,
				  0,
				  140,
				  140,
				  140,
				  140,
				  140,
				  140,
				  140,
				  140,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  31,
				  0,
				  0,
				  - 1,
				  0,
				  0,
				  0,
				  0,
				  131,
				  131,
				  131,
				  131,
				  131,
				  131,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  130,
				  131,
				  131,
				  131,
				  131,
				  131,
				  131,
				  131,
				  131,
				  131,
				  131,
				  31,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  131,
				  131,
				  131,
				  131,
				  131,
				  131,
				  142,
				  142,
				  142,
				  142,
				  142,
				  142,
				  142,
				  142,
				  142,
				  142,
				  141,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  142,
				  142,
				  142,
				  142,
				  142,
				  142,
				  0,
				  0,
				  0,
				  131,
				  131,
				  131,
				  131,
				  131,
				  131,
				  19,
				  0,
				  0,
				  385,
				  0,
				  0,
				  142,
				  142,
				  142,
				  142,
				  142,
				  142,
				  142,
				  142,
				  142,
				  142,
				  0,
				  142,
				  142,
				  142,
				  142,
				  142,
				  142,
				  142,
				  142,
				  142,
				  142,
				  142,
				  142,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  386,
				  386,
				  386,
				  386,
				  386,
				  386,
				  386,
				  386,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  142,
				  142,
				  142,
				  142,
				  142,
				  142,
				  0,
				  388,
				  388,
				  388,
				  388,
				  388,
				  388,
				  388,
				  388,
				  388,
				  388,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  388,
				  388,
				  388,
				  388,
				  388,
				  388,
				  0,
				  0,
				  28,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  388,
				  388,
				  388,
				  388,
				  388,
				  388,
				  388,
				  388,
				  388,
				  388,
				  387,
				  388,
				  388,
				  388,
				  388,
				  388,
				  388,
				  388,
				  388,
				  388,
				  388,
				  388,
				  388,
				  0,
				  0,
				  424,
				  0,
				  435,
				  435,
				  435,
				  435,
				  435,
				  435,
				  435,
				  435,
				  436,
				  436,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  426,
				  388,
				  388,
				  388,
				  388,
				  388,
				  388,
				  437,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  438,
				  0,
				  0,
				  439,
				  424,
				  0,
				  425,
				  425,
				  425,
				  425,
				  425,
				  425,
				  425,
				  425,
				  425,
				  425,
				  426,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  437,
				  0,
				  0,
				  0,
				  426,
				  0,
				  0,
				  0,
				  0,
				  438,
				  0,
				  427,
				  439,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  428,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  426,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  427,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  428,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  0,
				  0,
				  0,
				  0,
				  416,
				  0,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  0,
				  0,
				  0,
				  0,
				  416,
				  0,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  431,
				  431,
				  431,
				  431,
				  431,
				  431,
				  431,
				  431,
				  431,
				  431,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  432,
				  97,
				  0,
				  0,
				  0,
				  0,
				  424,
				  97,
				  425,
				  425,
				  425,
				  425,
				  425,
				  425,
				  425,
				  425,
				  425,
				  425,
				  430,
				  430,
				  430,
				  430,
				  430,
				  430,
				  430,
				  430,
				  430,
				  430,
				  0,
				  426,
				  0,
				  0,
				  432,
				  97,
				  0,
				  0,
				  427,
				  0,
				  0,
				  97,
				  94,
				  0,
				  0,
				  0,
				  0,
				  428,
				  94,
				  0,
				  431,
				  431,
				  431,
				  431,
				  431,
				  431,
				  431,
				  431,
				  431,
				  431,
				  0,
				  0,
				  0,
				  426,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  427,
				  432,
				  97,
				  0,
				  94,
				  0,
				  0,
				  0,
				  97,
				  428,
				  94,
				  0,
				  0,
				  434,
				  434,
				  434,
				  434,
				  434,
				  434,
				  434,
				  434,
				  434,
				  434,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  432,
				  97,
				  97,
				  0,
				  0,
				  0,
				  0,
				  97,
				  97,
				  424,
				  0,
				  435,
				  435,
				  435,
				  435,
				  435,
				  435,
				  435,
				  435,
				  436,
				  436,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  426,
				  0,
				  97,
				  0,
				  0,
				  0,
				  0,
				  445,
				  97,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  424,
				  446,
				  436,
				  436,
				  436,
				  436,
				  436,
				  436,
				  436,
				  436,
				  436,
				  436,
				  0,
				  0,
				  0,
				  0,
				  0,
				  426,
				  0,
				  0,
				  0,
				  0,
				  0,
				  426,
				  445,
				  0,
				  0,
				  0,
				  0,
				  0,
				  443,
				  0,
				  0,
				  446,
				  0,
				  0,
				  0,
				  0,
				  0,
				  444,
				  0,
				  0,
				  450,
				  450,
				  450,
				  450,
				  450,
				  450,
				  450,
				  450,
				  450,
				  450,
				  0,
				  0,
				  0,
				  426,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  443,
				  432,
				  97,
				  0,
				  0,
				  0,
				  0,
				  0,
				  97,
				  444,
				  440,
				  440,
				  440,
				  440,
				  440,
				  440,
				  440,
				  440,
				  440,
				  440,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  440,
				  440,
				  440,
				  440,
				  440,
				  440,
				  432,
				  97,
				  0,
				  0,
				  0,
				  0,
				  0,
				  97,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  440,
				  440,
				  440,
				  440,
				  440,
				  440,
				  440,
				  440,
				  440,
				  440,
				  0,
				  440,
				  440,
				  440,
				  440,
				  440,
				  440,
				  440,
				  440,
				  440,
				  440,
				  440,
				  440,
				  0,
				  0,
				  0,
				  459,
				  0,
				  441,
				  0,
				  0,
				  460,
				  0,
				  0,
				  0,
				  0,
				  0,
				  442,
				  0,
				  0,
				  461,
				  461,
				  461,
				  461,
				  461,
				  461,
				  461,
				  461,
				  0,
				  440,
				  440,
				  440,
				  440,
				  440,
				  440,
				  462,
				  0,
				  0,
				  0,
				  0,
				  441,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  442,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  463,
				  0,
				  0,
				  0,
				  0,
				  464,
				  465,
				  0,
				  0,
				  0,
				  466,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  467,
				  0,
				  0,
				  0,
				  468,
				  0,
				  469,
				  0,
				  470,
				  0,
				  471,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  473,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  19,
				  0,
				  0,
				  482,
				  0,
				  483,
				  0,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  0,
				  0,
				  0,
				  0,
				  481,
				  0,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  487,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  0,
				  0,
				  0,
				  0,
				  486,
				  0,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
				  0,
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
const int Cyc_lex_check[3825U] = {- 1,
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
				  25,
				  29,
				  0,
				  126,
				  128,
				  137,
				  139,
				  382,
				  385,
				  43,
				  43,
				  48,
				  48,
				  43,
				  488,
				  48,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  124,
				  272,
				  482,
				  0,
				  495,
				  10,
				  12,
				  42,
				  10,
				  12,
				  42,
				  43,
				  225,
				  48,
				  237,
				  20,
				  1,
				  1,
				  1,
				  1,
				  1,
				  1,
				  1,
				  1,
				  1,
				  1,
				  38,
				  44,
				  54,
				  125,
				  10,
				  38,
				  238,
				  1,
				  1,
				  1,
				  1,
				  1,
				  1,
				  1,
				  1,
				  1,
				  1,
				  1,
				  1,
				  1,
				  1,
				  1,
				  1,
				  1,
				  1,
				  1,
				  1,
				  1,
				  1,
				  1,
				  1,
				  1,
				  1,
				  50,
				  262,
				  263,
				  273,
				  1,
				  147,
				  1,
				  1,
				  1,
				  1,
				  1,
				  1,
				  1,
				  1,
				  1,
				  1,
				  1,
				  1,
				  1,
				  1,
				  1,
				  1,
				  1,
				  1,
				  1,
				  1,
				  1,
				  1,
				  1,
				  1,
				  1,
				  1,
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
				  9,
				  18,
				  57,
				  48,
				  58,
				  59,
				  60,
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
				  61,
				  62,
				  63,
				  64,
				  2,
				  65,
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
				  66,
				  67,
				  7,
				  3,
				  3,
				  3,
				  3,
				  3,
				  7,
				  7,
				  68,
				  69,
				  70,
				  72,
				  73,
				  7,
				  30,
				  30,
				  30,
				  30,
				  30,
				  30,
				  30,
				  30,
				  74,
				  75,
				  3,
				  3,
				  3,
				  76,
				  78,
				  3,
				  3,
				  3,
				  51,
				  51,
				  3,
				  3,
				  51,
				  3,
				  3,
				  3,
				  3,
				  3,
				  3,
				  3,
				  3,
				  3,
				  3,
				  3,
				  3,
				  3,
				  3,
				  79,
				  3,
				  3,
				  3,
				  51,
				  0,
				  3,
				  3,
				  3,
				  3,
				  3,
				  3,
				  3,
				  3,
				  3,
				  3,
				  3,
				  3,
				  3,
				  3,
				  3,
				  3,
				  3,
				  3,
				  3,
				  3,
				  3,
				  3,
				  3,
				  3,
				  3,
				  3,
				  10,
				  12,
				  42,
				  3,
				  3,
				  80,
				  3,
				  3,
				  3,
				  3,
				  3,
				  3,
				  3,
				  3,
				  3,
				  3,
				  3,
				  3,
				  3,
				  3,
				  3,
				  3,
				  3,
				  3,
				  3,
				  3,
				  3,
				  3,
				  3,
				  3,
				  3,
				  3,
				  4,
				  3,
				  85,
				  4,
				  5,
				  5,
				  6,
				  8,
				  5,
				  6,
				  8,
				  53,
				  53,
				  71,
				  71,
				  53,
				  56,
				  71,
				  27,
				  56,
				  17,
				  27,
				  50,
				  17,
				  4,
				  56,
				  86,
				  5,
				  87,
				  5,
				  6,
				  8,
				  9,
				  18,
				  53,
				  88,
				  71,
				  5,
				  89,
				  90,
				  91,
				  98,
				  99,
				  118,
				  17,
				  34,
				  34,
				  34,
				  34,
				  34,
				  34,
				  34,
				  34,
				  119,
				  120,
				  121,
				  27,
				  27,
				  27,
				  27,
				  27,
				  27,
				  27,
				  27,
				  108,
				  108,
				  122,
				  123,
				  108,
				  148,
				  149,
				  150,
				  151,
				  109,
				  109,
				  116,
				  116,
				  109,
				  135,
				  116,
				  77,
				  77,
				  4,
				  135,
				  77,
				  152,
				  153,
				  108,
				  6,
				  8,
				  5,
				  81,
				  81,
				  84,
				  84,
				  81,
				  109,
				  84,
				  116,
				  154,
				  157,
				  157,
				  17,
				  77,
				  158,
				  27,
				  159,
				  7,
				  92,
				  92,
				  5,
				  160,
				  92,
				  161,
				  81,
				  162,
				  84,
				  11,
				  11,
				  11,
				  11,
				  11,
				  11,
				  11,
				  11,
				  11,
				  11,
				  71,
				  27,
				  107,
				  163,
				  92,
				  107,
				  3,
				  11,
				  11,
				  11,
				  11,
				  11,
				  11,
				  11,
				  11,
				  11,
				  11,
				  11,
				  11,
				  11,
				  11,
				  11,
				  11,
				  11,
				  11,
				  11,
				  11,
				  11,
				  11,
				  11,
				  11,
				  11,
				  11,
				  114,
				  164,
				  115,
				  114,
				  11,
				  115,
				  11,
				  11,
				  11,
				  11,
				  11,
				  11,
				  11,
				  11,
				  11,
				  11,
				  11,
				  11,
				  11,
				  11,
				  11,
				  11,
				  11,
				  11,
				  11,
				  11,
				  11,
				  11,
				  11,
				  11,
				  11,
				  11,
				  165,
				  166,
				  77,
				  129,
				  129,
				  129,
				  129,
				  129,
				  129,
				  129,
				  129,
				  167,
				  168,
				  81,
				  169,
				  84,
				  132,
				  132,
				  132,
				  132,
				  132,
				  132,
				  132,
				  132,
				  171,
				  13,
				  13,
				  96,
				  96,
				  13,
				  92,
				  96,
				  140,
				  140,
				  140,
				  140,
				  140,
				  140,
				  140,
				  140,
				  143,
				  143,
				  143,
				  143,
				  143,
				  143,
				  143,
				  143,
				  13,
				  172,
				  96,
				  173,
				  174,
				  136,
				  4,
				  175,
				  136,
				  176,
				  178,
				  5,
				  6,
				  8,
				  13,
				  13,
				  13,
				  13,
				  13,
				  13,
				  13,
				  13,
				  13,
				  13,
				  13,
				  13,
				  17,
				  179,
				  180,
				  181,
				  182,
				  183,
				  185,
				  13,
				  13,
				  13,
				  13,
				  13,
				  13,
				  13,
				  13,
				  13,
				  13,
				  13,
				  13,
				  13,
				  13,
				  13,
				  13,
				  13,
				  13,
				  13,
				  13,
				  13,
				  13,
				  13,
				  13,
				  13,
				  13,
				  186,
				  187,
				  188,
				  189,
				  13,
				  190,
				  13,
				  13,
				  13,
				  13,
				  13,
				  13,
				  13,
				  13,
				  13,
				  13,
				  13,
				  13,
				  13,
				  13,
				  13,
				  13,
				  13,
				  13,
				  13,
				  13,
				  13,
				  13,
				  13,
				  13,
				  13,
				  13,
				  14,
				  14,
				  96,
				  191,
				  14,
				  192,
				  193,
				  32,
				  32,
				  32,
				  32,
				  32,
				  32,
				  32,
				  32,
				  32,
				  32,
				  100,
				  100,
				  194,
				  195,
				  100,
				  196,
				  14,
				  32,
				  32,
				  32,
				  32,
				  32,
				  32,
				  197,
				  198,
				  200,
				  201,
				  202,
				  156,
				  156,
				  156,
				  14,
				  156,
				  100,
				  203,
				  204,
				  156,
				  107,
				  205,
				  206,
				  104,
				  104,
				  207,
				  14,
				  104,
				  156,
				  156,
				  208,
				  209,
				  32,
				  32,
				  32,
				  32,
				  32,
				  32,
				  210,
				  211,
				  212,
				  214,
				  215,
				  216,
				  217,
				  218,
				  104,
				  219,
				  220,
				  221,
				  222,
				  114,
				  223,
				  115,
				  15,
				  15,
				  226,
				  227,
				  15,
				  105,
				  105,
				  226,
				  228,
				  105,
				  229,
				  230,
				  14,
				  231,
				  232,
				  233,
				  234,
				  14,
				  14,
				  235,
				  236,
				  241,
				  242,
				  15,
				  14,
				  243,
				  244,
				  245,
				  105,
				  246,
				  247,
				  145,
				  145,
				  248,
				  249,
				  145,
				  250,
				  251,
				  15,
				  15,
				  15,
				  15,
				  15,
				  15,
				  15,
				  15,
				  15,
				  15,
				  15,
				  252,
				  15,
				  253,
				  254,
				  100,
				  145,
				  13,
				  15,
				  15,
				  15,
				  15,
				  15,
				  15,
				  15,
				  15,
				  15,
				  15,
				  15,
				  15,
				  15,
				  15,
				  15,
				  15,
				  15,
				  15,
				  15,
				  15,
				  15,
				  15,
				  15,
				  15,
				  15,
				  15,
				  136,
				  104,
				  255,
				  256,
				  15,
				  257,
				  15,
				  15,
				  15,
				  15,
				  15,
				  15,
				  15,
				  15,
				  15,
				  15,
				  15,
				  15,
				  15,
				  15,
				  15,
				  15,
				  15,
				  15,
				  15,
				  15,
				  15,
				  15,
				  15,
				  15,
				  15,
				  15,
				  224,
				  224,
				  15,
				  240,
				  224,
				  105,
				  258,
				  145,
				  259,
				  260,
				  261,
				  265,
				  240,
				  240,
				  266,
				  267,
				  268,
				  145,
				  269,
				  240,
				  270,
				  271,
				  275,
				  224,
				  276,
				  16,
				  274,
				  277,
				  278,
				  279,
				  280,
				  224,
				  282,
				  283,
				  284,
				  285,
				  286,
				  287,
				  16,
				  16,
				  16,
				  16,
				  16,
				  16,
				  16,
				  16,
				  16,
				  16,
				  16,
				  288,
				  289,
				  290,
				  291,
				  292,
				  293,
				  14,
				  16,
				  16,
				  16,
				  16,
				  16,
				  16,
				  16,
				  16,
				  16,
				  16,
				  16,
				  16,
				  16,
				  16,
				  16,
				  16,
				  16,
				  16,
				  16,
				  16,
				  16,
				  16,
				  16,
				  16,
				  16,
				  16,
				  295,
				  296,
				  297,
				  298,
				  16,
				  299,
				  16,
				  16,
				  16,
				  16,
				  16,
				  16,
				  16,
				  16,
				  16,
				  16,
				  16,
				  16,
				  16,
				  16,
				  16,
				  16,
				  16,
				  16,
				  16,
				  16,
				  16,
				  16,
				  16,
				  16,
				  16,
				  16,
				  16,
				  300,
				  16,
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
				  301,
				  302,
				  303,
				  304,
				  305,
				  281,
				  15,
				  33,
				  33,
				  33,
				  33,
				  33,
				  33,
				  281,
				  306,
				  308,
				  309,
				  310,
				  311,
				  312,
				  313,
				  314,
				  315,
				  316,
				  317,
				  319,
				  320,
				  321,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  322,
				  33,
				  33,
				  33,
				  33,
				  33,
				  33,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  323,
				  324,
				  325,
				  326,
				  39,
				  327,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  39,
				  328,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  274,
				  330,
				  331,
				  332,
				  333,
				  334,
				  16,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  335,
				  336,
				  337,
				  338,
				  41,
				  339,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  41,
				  45,
				  45,
				  294,
				  340,
				  45,
				  341,
				  294,
				  343,
				  344,
				  350,
				  351,
				  352,
				  353,
				  354,
				  355,
				  294,
				  356,
				  294,
				  346,
				  357,
				  347,
				  358,
				  359,
				  45,
				  360,
				  362,
				  363,
				  146,
				  146,
				  364,
				  365,
				  146,
				  368,
				  369,
				  370,
				  371,
				  372,
				  373,
				  375,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  376,
				  146,
				  377,
				  378,
				  294,
				  394,
				  396,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  399,
				  403,
				  406,
				  408,
				  45,
				  411,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  45,
				  49,
				  49,
				  146,
				  397,
				  49,
				  345,
				  345,
				  361,
				  361,
				  345,
				  417,
				  361,
				  146,
				  409,
				  409,
				  400,
				  420,
				  146,
				  407,
				  407,
				  407,
				  412,
				  449,
				  49,
				  457,
				  459,
				  397,
				  460,
				  345,
				  462,
				  361,
				  349,
				  349,
				  400,
				  401,
				  349,
				  345,
				  463,
				  361,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  464,
				  401,
				  401,
				  465,
				  427,
				  349,
				  428,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  466,
				  467,
				  412,
				  427,
				  49,
				  428,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  49,
				  82,
				  82,
				  468,
				  346,
				  82,
				  347,
				  349,
				  366,
				  366,
				  383,
				  383,
				  366,
				  392,
				  383,
				  392,
				  392,
				  349,
				  437,
				  469,
				  438,
				  441,
				  442,
				  443,
				  82,
				  470,
				  476,
				  483,
				  367,
				  367,
				  484,
				  366,
				  367,
				  383,
				  485,
				  383,
				  392,
				  487,
				  489,
				  366,
				  82,
				  82,
				  82,
				  82,
				  82,
				  82,
				  82,
				  82,
				  82,
				  82,
				  437,
				  367,
				  438,
				  441,
				  442,
				  443,
				  444,
				  82,
				  82,
				  82,
				  82,
				  82,
				  82,
				  82,
				  82,
				  82,
				  82,
				  82,
				  82,
				  82,
				  82,
				  82,
				  82,
				  82,
				  82,
				  82,
				  82,
				  82,
				  82,
				  82,
				  82,
				  82,
				  82,
				  490,
				  491,
				  492,
				  493,
				  82,
				  444,
				  82,
				  82,
				  82,
				  82,
				  82,
				  82,
				  82,
				  82,
				  82,
				  82,
				  82,
				  82,
				  82,
				  82,
				  82,
				  82,
				  82,
				  82,
				  82,
				  82,
				  82,
				  82,
				  82,
				  82,
				  82,
				  82,
				  82,
				  83,
				  83,
				  367,
				  398,
				  83,
				  374,
				  374,
				  379,
				  379,
				  374,
				  494,
				  379,
				  367,
				  386,
				  386,
				  386,
				  386,
				  386,
				  386,
				  386,
				  386,
				  445,
				  446,
				  83,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  374,
				  - 1,
				  379,
				  - 1,
				  398,
				  - 1,
				  - 1,
				  - 1,
				  374,
				  - 1,
				  379,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  445,
				  446,
				  - 1,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  - 1,
				  - 1,
				  - 1,
				  398,
				  83,
				  - 1,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  83,
				  93,
				  93,
				  - 1,
				  - 1,
				  93,
				  389,
				  389,
				  389,
				  389,
				  389,
				  389,
				  389,
				  389,
				  390,
				  390,
				  - 1,
				  - 1,
				  390,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  402,
				  93,
				  402,
				  402,
				  402,
				  402,
				  402,
				  402,
				  402,
				  402,
				  402,
				  402,
				  - 1,
				  - 1,
				  390,
				  - 1,
				  390,
				  93,
				  93,
				  93,
				  93,
				  93,
				  93,
				  93,
				  93,
				  93,
				  93,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  93,
				  93,
				  93,
				  93,
				  93,
				  93,
				  93,
				  93,
				  93,
				  93,
				  93,
				  93,
				  93,
				  93,
				  93,
				  93,
				  93,
				  93,
				  93,
				  93,
				  93,
				  93,
				  93,
				  93,
				  93,
				  93,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  93,
				  - 1,
				  93,
				  93,
				  93,
				  93,
				  93,
				  93,
				  93,
				  93,
				  93,
				  93,
				  93,
				  93,
				  93,
				  93,
				  93,
				  93,
				  93,
				  93,
				  93,
				  93,
				  93,
				  93,
				  93,
				  93,
				  93,
				  93,
				  93,
				  95,
				  95,
				  - 1,
				  426,
				  95,
				  426,
				  - 1,
				  - 1,
				  426,
				  426,
				  426,
				  426,
				  426,
				  426,
				  426,
				  426,
				  426,
				  426,
				  - 1,
				  398,
				  - 1,
				  - 1,
				  - 1,
				  95,
				  429,
				  429,
				  429,
				  429,
				  429,
				  429,
				  429,
				  429,
				  429,
				  429,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  95,
				  - 1,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  95,
				  101,
				  101,
				  - 1,
				  432,
				  101,
				  432,
				  - 1,
				  - 1,
				  432,
				  432,
				  432,
				  432,
				  432,
				  432,
				  432,
				  432,
				  432,
				  432,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  101,
				  433,
				  433,
				  433,
				  433,
				  433,
				  433,
				  433,
				  433,
				  433,
				  433,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  101,
				  101,
				  101,
				  101,
				  101,
				  101,
				  101,
				  101,
				  101,
				  101,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  101,
				  101,
				  101,
				  101,
				  101,
				  101,
				  101,
				  101,
				  101,
				  101,
				  101,
				  101,
				  101,
				  101,
				  101,
				  101,
				  101,
				  101,
				  101,
				  101,
				  101,
				  101,
				  101,
				  101,
				  101,
				  101,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  101,
				  - 1,
				  101,
				  101,
				  101,
				  101,
				  101,
				  101,
				  101,
				  101,
				  101,
				  101,
				  101,
				  101,
				  101,
				  101,
				  101,
				  101,
				  101,
				  101,
				  101,
				  101,
				  101,
				  101,
				  101,
				  101,
				  101,
				  101,
				  101,
				  103,
				  103,
				  461,
				  480,
				  103,
				  480,
				  480,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  461,
				  461,
				  461,
				  461,
				  461,
				  461,
				  461,
				  461,
				  475,
				  - 1,
				  - 1,
				  - 1,
				  103,
				  - 1,
				  - 1,
				  480,
				  - 1,
				  475,
				  475,
				  475,
				  475,
				  475,
				  475,
				  475,
				  475,
				  - 1,
				  - 1,
				  - 1,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  103,
				  - 1,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  103,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  110,
				  - 1,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  110,
				  111,
				  111,
				  111,
				  111,
				  111,
				  111,
				  111,
				  111,
				  111,
				  111,
				  111,
				  111,
				  111,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  111,
				  111,
				  111,
				  111,
				  111,
				  111,
				  111,
				  111,
				  111,
				  111,
				  111,
				  111,
				  111,
				  111,
				  111,
				  111,
				  111,
				  111,
				  111,
				  111,
				  111,
				  111,
				  111,
				  111,
				  111,
				  111,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  111,
				  - 1,
				  111,
				  111,
				  111,
				  111,
				  111,
				  111,
				  111,
				  111,
				  111,
				  111,
				  111,
				  111,
				  111,
				  111,
				  111,
				  111,
				  111,
				  111,
				  111,
				  111,
				  111,
				  111,
				  111,
				  111,
				  111,
				  111,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  113,
				  - 1,
				  - 1,
				  113,
				  112,
				  - 1,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  112,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  113,
				  - 1,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  113,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  127,
				  - 1,
				  - 1,
				  127,
				  117,
				  - 1,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  117,
				  - 1,
				  - 1,
				  138,
				  - 1,
				  - 1,
				  138,
				  127,
				  127,
				  127,
				  127,
				  127,
				  127,
				  127,
				  127,
				  130,
				  130,
				  130,
				  130,
				  130,
				  130,
				  130,
				  130,
				  130,
				  130,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  130,
				  130,
				  130,
				  130,
				  130,
				  130,
				  - 1,
				  - 1,
				  - 1,
				  138,
				  138,
				  138,
				  138,
				  138,
				  138,
				  138,
				  138,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  127,
				  - 1,
				  - 1,
				  113,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  130,
				  130,
				  130,
				  130,
				  130,
				  130,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  127,
				  131,
				  131,
				  131,
				  131,
				  131,
				  131,
				  131,
				  131,
				  131,
				  131,
				  138,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  131,
				  131,
				  131,
				  131,
				  131,
				  131,
				  141,
				  141,
				  141,
				  141,
				  141,
				  141,
				  141,
				  141,
				  141,
				  141,
				  138,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  141,
				  141,
				  141,
				  141,
				  141,
				  141,
				  - 1,
				  - 1,
				  - 1,
				  131,
				  131,
				  131,
				  131,
				  131,
				  131,
				  384,
				  - 1,
				  - 1,
				  384,
				  - 1,
				  - 1,
				  142,
				  142,
				  142,
				  142,
				  142,
				  142,
				  142,
				  142,
				  142,
				  142,
				  - 1,
				  141,
				  141,
				  141,
				  141,
				  141,
				  141,
				  142,
				  142,
				  142,
				  142,
				  142,
				  142,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  384,
				  384,
				  384,
				  384,
				  384,
				  384,
				  384,
				  384,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  142,
				  142,
				  142,
				  142,
				  142,
				  142,
				  - 1,
				  387,
				  387,
				  387,
				  387,
				  387,
				  387,
				  387,
				  387,
				  387,
				  387,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  387,
				  387,
				  387,
				  387,
				  387,
				  387,
				  - 1,
				  - 1,
				  384,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  388,
				  388,
				  388,
				  388,
				  388,
				  388,
				  388,
				  388,
				  388,
				  388,
				  384,
				  387,
				  387,
				  387,
				  387,
				  387,
				  387,
				  388,
				  388,
				  388,
				  388,
				  388,
				  388,
				  - 1,
				  - 1,
				  404,
				  - 1,
				  404,
				  404,
				  404,
				  404,
				  404,
				  404,
				  404,
				  404,
				  404,
				  404,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  404,
				  388,
				  388,
				  388,
				  388,
				  388,
				  388,
				  404,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  404,
				  - 1,
				  - 1,
				  404,
				  405,
				  - 1,
				  405,
				  405,
				  405,
				  405,
				  405,
				  405,
				  405,
				  405,
				  405,
				  405,
				  404,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  404,
				  - 1,
				  - 1,
				  - 1,
				  405,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  404,
				  - 1,
				  405,
				  404,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  405,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  405,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  405,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  405,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  410,
				  - 1,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  410,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  416,
				  - 1,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  416,
				  424,
				  424,
				  424,
				  424,
				  424,
				  424,
				  424,
				  424,
				  424,
				  424,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  424,
				  424,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  425,
				  424,
				  425,
				  425,
				  425,
				  425,
				  425,
				  425,
				  425,
				  425,
				  425,
				  425,
				  430,
				  430,
				  430,
				  430,
				  430,
				  430,
				  430,
				  430,
				  430,
				  430,
				  - 1,
				  425,
				  - 1,
				  - 1,
				  424,
				  424,
				  - 1,
				  - 1,
				  425,
				  - 1,
				  - 1,
				  424,
				  430,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  425,
				  430,
				  - 1,
				  431,
				  431,
				  431,
				  431,
				  431,
				  431,
				  431,
				  431,
				  431,
				  431,
				  - 1,
				  - 1,
				  - 1,
				  425,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  425,
				  431,
				  431,
				  - 1,
				  430,
				  - 1,
				  - 1,
				  - 1,
				  431,
				  425,
				  430,
				  - 1,
				  - 1,
				  434,
				  434,
				  434,
				  434,
				  434,
				  434,
				  434,
				  434,
				  434,
				  434,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  431,
				  431,
				  434,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  431,
				  434,
				  435,
				  - 1,
				  435,
				  435,
				  435,
				  435,
				  435,
				  435,
				  435,
				  435,
				  435,
				  435,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  435,
				  - 1,
				  434,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  435,
				  434,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  436,
				  435,
				  436,
				  436,
				  436,
				  436,
				  436,
				  436,
				  436,
				  436,
				  436,
				  436,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  435,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  436,
				  435,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  436,
				  - 1,
				  - 1,
				  435,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  436,
				  - 1,
				  - 1,
				  450,
				  450,
				  450,
				  450,
				  450,
				  450,
				  450,
				  450,
				  450,
				  450,
				  - 1,
				  - 1,
				  - 1,
				  436,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  436,
				  450,
				  450,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  450,
				  436,
				  439,
				  439,
				  439,
				  439,
				  439,
				  439,
				  439,
				  439,
				  439,
				  439,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  439,
				  439,
				  439,
				  439,
				  439,
				  439,
				  450,
				  450,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  450,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  440,
				  440,
				  440,
				  440,
				  440,
				  440,
				  440,
				  440,
				  440,
				  440,
				  - 1,
				  439,
				  439,
				  439,
				  439,
				  439,
				  439,
				  440,
				  440,
				  440,
				  440,
				  440,
				  440,
				  - 1,
				  - 1,
				  - 1,
				  458,
				  - 1,
				  440,
				  - 1,
				  - 1,
				  458,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  440,
				  - 1,
				  - 1,
				  458,
				  458,
				  458,
				  458,
				  458,
				  458,
				  458,
				  458,
				  - 1,
				  440,
				  440,
				  440,
				  440,
				  440,
				  440,
				  458,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  440,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  440,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  458,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  458,
				  458,
				  - 1,
				  - 1,
				  - 1,
				  458,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  458,
				  - 1,
				  - 1,
				  - 1,
				  458,
				  - 1,
				  458,
				  - 1,
				  458,
				  - 1,
				  458,
				  471,
				  471,
				  471,
				  471,
				  471,
				  471,
				  471,
				  471,
				  471,
				  471,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  471,
				  471,
				  471,
				  471,
				  471,
				  471,
				  471,
				  471,
				  471,
				  471,
				  471,
				  471,
				  471,
				  471,
				  471,
				  471,
				  471,
				  471,
				  471,
				  471,
				  471,
				  471,
				  471,
				  471,
				  471,
				  471,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  471,
				  471,
				  471,
				  471,
				  471,
				  471,
				  471,
				  471,
				  471,
				  471,
				  471,
				  471,
				  471,
				  471,
				  471,
				  471,
				  471,
				  471,
				  471,
				  471,
				  471,
				  471,
				  471,
				  471,
				  471,
				  471,
				  472,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  472,
				  481,
				  - 1,
				  - 1,
				  481,
				  - 1,
				  481,
				  - 1,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  481,
				  - 1,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  481,
				  486,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  486,
				  - 1,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  486,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
				  - 1,
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
int Cyc_lex_engine(int start_state,struct Cyc_Lexing_lexbuf * lbuf) {
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
  if (state < 0) { goto _TL6;
  }
  _T0 = lbuf;
  _T1 = lbuf;
  _T2 = lbuf;
  _T1->lex_start_pos = _T2->lex_curr_pos;
  _T0->lex_last_pos = _T1->lex_start_pos;
  _T3 = lbuf;
  _T3->lex_last_action = - 1;
  goto _TL7;
  _TL6: _T4 = - state;
  state = _T4 - 1;
  _TL7: _TL8: if (1) { goto _TL9;
  }else { goto _TLA;
  }
  _TL9: _T5 = Cyc_lex_base;
  _T6 = state;
  _T7 = _check_known_subscript_notnull(_T5,496U,sizeof(int),_T6);
  _T8 = (const int *)_T7;
  base = *_T8;
  if (base >= 0) { goto _TLB;
  }
  _T9 = - base;
  _TA = _T9 - 1;
  return _TA;
  _TLB: _TB = Cyc_lex_backtrk;
  _TC = state;
  backtrk = _TB[_TC];
  if (backtrk < 0) { goto _TLD;
  }
  _TD = lbuf;
  _TE = lbuf;
  _TD->lex_last_pos = _TE->lex_curr_pos;
  _TF = lbuf;
  _TF->lex_last_action = backtrk;
  goto _TLE;
  _TLD: _TLE: _T10 = lbuf;
  _T11 = _T10->lex_curr_pos;
  _T12 = lbuf;
  _T13 = _T12->lex_buffer_len;
  if (_T11 < _T13) { goto _TLF;
  }
  _T14 = lbuf;
  _T15 = _T14->lex_eof_reached;
  if (_T15) { goto _TL11;
  }else { goto _TL13;
  }
  _TL13: _T16 = - state;
  _T17 = _T16 - 1;
  return _T17;
  _TL11: c = 256;
  goto _TL10;
  _TLF: _T18 = lbuf;
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
  if (_T20 != _T21) { goto _TL14;
  }
  c = 256;
  goto _TL15;
  _TL14: if (c >= 0) { goto _TL16;
  }
  c = 256 + c;
  goto _TL17;
  _TL16: _TL17: _TL15: _TL10: _T22 = Cyc_lex_check;
  _T23 = base + c;
  _T24 = _check_known_subscript_notnull(_T22,3825U,sizeof(int),_T23);
  _T25 = (const int *)_T24;
  _T26 = *_T25;
  _T27 = state;
  if (_T26 != _T27) { goto _TL18;
  }
  _T28 = Cyc_lex_trans;
  _T29 = base + c;
  state = _T28[_T29];
  goto _TL19;
  _TL18: _T2A = Cyc_lex_default;
  _T2B = state;
  state = _T2A[_T2B];
  _TL19: if (state >= 0) { goto _TL1A;
  }
  _T2C = lbuf;
  _T2D = lbuf;
  _T2C->lex_curr_pos = _T2D->lex_last_pos;
  _T2E = lbuf;
  _T2F = _T2E->lex_last_action;
  _T30 = - 1;
  if (_T2F != _T30) { goto _TL1C;
  }
  { struct Cyc_Lexing_Error_exn_struct * _T36 = _cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));
    _T36->tag = Cyc_Lexing_Error;
    _T36->f1 = _tag_fat("empty token",sizeof(char),12U);
    _T31 = (struct Cyc_Lexing_Error_exn_struct *)_T36;
  }_T32 = (void *)_T31;
  _throw(_T32);
  goto _TL1D;
  _TL1C: _T33 = lbuf;
  _T34 = _T33->lex_last_action;
  return _T34;
  _TL1D: goto _TL1B;
  _TL1A: if (c != 256) { goto _TL1E;
  }
  _T35 = lbuf;
  _T35->lex_eof_reached = 0;
  goto _TL1F;
  _TL1E: _TL1F: _TL1B: goto _TL8;
  _TLA: ;
}
struct _tuple15 * Cyc_line_rec(struct Cyc_Lexing_lexbuf * lexbuf,int lexstate) {
  int _T0;
  int _T1;
  struct Cyc_Set_Set * * _T2;
  struct Cyc_Set_Set * (* _T3)(struct Cyc_Set_Set *,struct _fat_ptr *);
  struct Cyc_Set_Set * (* _T4)(struct Cyc_Set_Set *,void *);
  struct Cyc_Set_Set * * _T5;
  struct Cyc_Set_Set * _T6;
  struct Cyc_List_List * _T7;
  void * _T8;
  struct _fat_ptr * _T9;
  struct Cyc_List_List * _TA;
  struct _tuple15 * _TB;
  struct Cyc_Set_Set * * _TC;
  struct _tuple15 * _TD;
  struct Cyc_Lexing_lexbuf * _TE;
  void (* _TF)(struct Cyc_Lexing_lexbuf *);
  struct _tuple15 * _T10;
  struct Cyc_Lexing_Error_exn_struct * _T11;
  void * _T12;
  lexstate = Cyc_lex_engine(lexstate,lexbuf);
  _T0 = lexstate;
  _T1 = (int)_T0;
  switch (_T1) {
  case 0: 
    Cyc_macroname(lexbuf);
    _TL24: if (Cyc_current_args != 0) { goto _TL22;
    }else { goto _TL23;
    }
    _TL22: { struct Cyc_Set_Set * * _T13 = _cycalloc(sizeof(struct Cyc_Set_Set *));
      _T4 = Cyc_Set_delete;
      { struct Cyc_Set_Set * (* _T14)(struct Cyc_Set_Set *,struct _fat_ptr *) = (struct Cyc_Set_Set * (*)(struct Cyc_Set_Set *,
													  struct _fat_ptr *))_T4;
	_T3 = _T14;
      }_T5 = _check_null(Cyc_current_targets);
      _T6 = *_T5;
      _T7 = Cyc_current_args;
      _T8 = _T7->hd;
      _T9 = (struct _fat_ptr *)_T8;
      *_T13 = _T3(_T6,_T9);
      _T2 = (struct Cyc_Set_Set * *)_T13;
    }Cyc_current_targets = _T2;
    _TA = _check_null(Cyc_current_args);
    Cyc_current_args = _TA->tl;
    goto _TL24;
    _TL23: { struct _tuple15 * _T13 = _cycalloc(sizeof(struct _tuple15));
      _T13->f0 = _check_null(Cyc_current_source);
      _TC = _check_null(Cyc_current_targets);
      _T13->f1 = *_TC;
      _TB = (struct _tuple15 *)_T13;
    }return _TB;
  case 1: 
    _TD = Cyc_line(lexbuf);
    return _TD;
  case 2: 
    return 0;
  default: 
    _TE = lexbuf;
    _TF = _TE->refill_buff;
    _TF(lexbuf);
    _T10 = Cyc_line_rec(lexbuf,lexstate);
    return _T10;
  }
  { struct Cyc_Lexing_Error_exn_struct * _T13 = _cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));
    _T13->tag = Cyc_Lexing_Error;
    _T13->f1 = _tag_fat("some action didn't return!",sizeof(char),27U);
    _T11 = (struct Cyc_Lexing_Error_exn_struct *)_T13;
  }_T12 = (void *)_T11;
  _throw(_T12);
}
struct _tuple15 * Cyc_line(struct Cyc_Lexing_lexbuf * lexbuf) {
  struct _tuple15 * _T0;
  _T0 = Cyc_line_rec(lexbuf,0);
  return _T0;
}
int Cyc_macroname_rec(struct Cyc_Lexing_lexbuf * lexbuf,int lexstate) {
  int _T0;
  int _T1;
  struct _fat_ptr * _T2;
  struct _fat_ptr _T3;
  int _T4;
  int _T5;
  int _T6;
  int _T7;
  unsigned long _T8;
  struct _fat_ptr _T9;
  struct Cyc_Set_Set * * _TA;
  struct Cyc_Set_Set * (* _TB)(int (*)(struct _fat_ptr *,struct _fat_ptr *));
  struct Cyc_Set_Set * (* _TC)(int (*)(void *,void *));
  int (* _TD)(struct _fat_ptr *,struct _fat_ptr *);
  struct _fat_ptr * _TE;
  struct _fat_ptr _TF;
  int _T10;
  int _T11;
  int _T12;
  int _T13;
  unsigned long _T14;
  struct _fat_ptr _T15;
  struct Cyc_Set_Set * * _T16;
  struct Cyc_Set_Set * (* _T17)(int (*)(struct _fat_ptr *,struct _fat_ptr *));
  struct Cyc_Set_Set * (* _T18)(int (*)(void *,void *));
  int (* _T19)(struct _fat_ptr *,struct _fat_ptr *);
  struct _fat_ptr * _T1A;
  struct _fat_ptr _T1B;
  struct Cyc_Set_Set * * _T1C;
  struct Cyc_Set_Set * (* _T1D)(int (*)(struct _fat_ptr *,struct _fat_ptr *));
  struct Cyc_Set_Set * (* _T1E)(int (*)(void *,void *));
  int (* _T1F)(struct _fat_ptr *,struct _fat_ptr *);
  struct Cyc_Lexing_lexbuf * _T20;
  void (* _T21)(struct Cyc_Lexing_lexbuf *);
  int _T22;
  struct Cyc_Lexing_Error_exn_struct * _T23;
  void * _T24;
  lexstate = Cyc_lex_engine(lexstate,lexbuf);
  _T0 = lexstate;
  _T1 = (int)_T0;
  switch (_T1) {
  case 0: 
    { struct _fat_ptr * _T25 = _cycalloc(sizeof(struct _fat_ptr));
      _T3 = Cyc_Lexing_lexeme(lexbuf);
      _T4 = Cyc_Lexing_lexeme_end(lexbuf);
      _T5 = Cyc_Lexing_lexeme_start(lexbuf);
      _T6 = _T4 - _T5;
      _T7 = _T6 - 2;
      _T8 = (unsigned long)_T7;
      _T9 = Cyc_substring(_T3,0,_T8);
      *_T25 = _T9;
      _T2 = (struct _fat_ptr *)_T25;
    }Cyc_current_source = _T2;
    Cyc_current_args = 0;
    { struct Cyc_Set_Set * * _T25 = _cycalloc(sizeof(struct Cyc_Set_Set *));
      _TC = Cyc_Set_empty;
      { struct Cyc_Set_Set * (* _T26)(int (*)(struct _fat_ptr *,struct _fat_ptr *)) = (struct Cyc_Set_Set * (*)(int (*)(struct _fat_ptr *,
															struct _fat_ptr *)))_TC;
	_TB = _T26;
      }_TD = Cyc_strptrcmp;
      *_T25 = _TB(_TD);
      _TA = (struct Cyc_Set_Set * *)_T25;
    }Cyc_current_targets = _TA;
    Cyc_token(lexbuf);
    return 0;
  case 1: 
    { struct _fat_ptr * _T25 = _cycalloc(sizeof(struct _fat_ptr));
      _TF = Cyc_Lexing_lexeme(lexbuf);
      _T10 = Cyc_Lexing_lexeme_end(lexbuf);
      _T11 = Cyc_Lexing_lexeme_start(lexbuf);
      _T12 = _T10 - _T11;
      _T13 = _T12 - 1;
      _T14 = (unsigned long)_T13;
      _T15 = Cyc_substring(_TF,0,_T14);
      *_T25 = _T15;
      _TE = (struct _fat_ptr *)_T25;
    }Cyc_current_source = _TE;
    Cyc_current_args = 0;
    { struct Cyc_Set_Set * * _T25 = _cycalloc(sizeof(struct Cyc_Set_Set *));
      _T18 = Cyc_Set_empty;
      { struct Cyc_Set_Set * (* _T26)(int (*)(struct _fat_ptr *,struct _fat_ptr *)) = (struct Cyc_Set_Set * (*)(int (*)(struct _fat_ptr *,
															struct _fat_ptr *)))_T18;
	_T17 = _T26;
      }_T19 = Cyc_strptrcmp;
      *_T25 = _T17(_T19);
      _T16 = (struct Cyc_Set_Set * *)_T25;
    }Cyc_current_targets = _T16;
    Cyc_args(lexbuf);
    return 0;
  case 2: 
    { struct _fat_ptr * _T25 = _cycalloc(sizeof(struct _fat_ptr));
      _T1B = Cyc_Lexing_lexeme(lexbuf);
      *_T25 = _T1B;
      _T1A = (struct _fat_ptr *)_T25;
    }Cyc_current_source = _T1A;
    Cyc_current_args = 0;
    { struct Cyc_Set_Set * * _T25 = _cycalloc(sizeof(struct Cyc_Set_Set *));
      _T1E = Cyc_Set_empty;
      { struct Cyc_Set_Set * (* _T26)(int (*)(struct _fat_ptr *,struct _fat_ptr *)) = (struct Cyc_Set_Set * (*)(int (*)(struct _fat_ptr *,
															struct _fat_ptr *)))_T1E;
	_T1D = _T26;
      }_T1F = Cyc_strptrcmp;
      *_T25 = _T1D(_T1F);
      _T1C = (struct Cyc_Set_Set * *)_T25;
    }Cyc_current_targets = _T1C;
    Cyc_token(lexbuf);
    return 0;
  default: 
    _T20 = lexbuf;
    _T21 = _T20->refill_buff;
    _T21(lexbuf);
    _T22 = Cyc_macroname_rec(lexbuf,lexstate);
    return _T22;
  }
  { struct Cyc_Lexing_Error_exn_struct * _T25 = _cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));
    _T25->tag = Cyc_Lexing_Error;
    _T25->f1 = _tag_fat("some action didn't return!",sizeof(char),27U);
    _T23 = (struct Cyc_Lexing_Error_exn_struct *)_T25;
  }_T24 = (void *)_T23;
  _throw(_T24);
}
int Cyc_macroname(struct Cyc_Lexing_lexbuf * lexbuf) {
  int _T0;
  _T0 = Cyc_macroname_rec(lexbuf,1);
  return _T0;
}
int Cyc_args_rec(struct Cyc_Lexing_lexbuf * lexbuf,int lexstate) {
  int _T0;
  int _T1;
  struct _fat_ptr * _T2;
  struct _fat_ptr _T3;
  int _T4;
  int _T5;
  int _T6;
  int _T7;
  unsigned long _T8;
  struct _fat_ptr _T9;
  struct Cyc_List_List * _TA;
  int _TB;
  struct _fat_ptr * _TC;
  struct _fat_ptr _TD;
  int _TE;
  int _TF;
  int _T10;
  int _T11;
  unsigned long _T12;
  struct _fat_ptr _T13;
  struct Cyc_List_List * _T14;
  int _T15;
  struct _fat_ptr * _T16;
  struct _fat_ptr _T17;
  int _T18;
  int _T19;
  int _T1A;
  int _T1B;
  unsigned long _T1C;
  struct _fat_ptr _T1D;
  struct Cyc_List_List * _T1E;
  int _T1F;
  struct _fat_ptr * _T20;
  struct _fat_ptr _T21;
  int _T22;
  int _T23;
  int _T24;
  int _T25;
  unsigned long _T26;
  struct _fat_ptr _T27;
  struct Cyc_List_List * _T28;
  int _T29;
  struct Cyc_Lexing_lexbuf * _T2A;
  void (* _T2B)(struct Cyc_Lexing_lexbuf *);
  int _T2C;
  struct Cyc_Lexing_Error_exn_struct * _T2D;
  void * _T2E;
  lexstate = Cyc_lex_engine(lexstate,lexbuf);
  _T0 = lexstate;
  _T1 = (int)_T0;
  switch (_T1) {
  case 0: 
    { struct _fat_ptr * a;
      a = _cycalloc(sizeof(struct _fat_ptr));
      _T2 = a;
      _T3 = Cyc_Lexing_lexeme(lexbuf);
      _T4 = Cyc_Lexing_lexeme_end(lexbuf);
      _T5 = Cyc_Lexing_lexeme_start(lexbuf);
      _T6 = _T4 - _T5;
      _T7 = _T6 - 2;
      _T8 = (unsigned long)_T7;
      _T9 = Cyc_substring(_T3,0,_T8);
      *_T2 = _T9;
      { struct Cyc_List_List * _T2F = _cycalloc(sizeof(struct Cyc_List_List));
	_T2F->hd = a;
	_T2F->tl = Cyc_current_args;
	_TA = (struct Cyc_List_List *)_T2F;
      }Cyc_current_args = _TA;
      _TB = Cyc_args(lexbuf);
      return _TB;
    }
  case 1: 
    { struct _fat_ptr * a;
      a = _cycalloc(sizeof(struct _fat_ptr));
      _TC = a;
      _TD = Cyc_Lexing_lexeme(lexbuf);
      _TE = Cyc_Lexing_lexeme_end(lexbuf);
      _TF = Cyc_Lexing_lexeme_start(lexbuf);
      _T10 = _TE - _TF;
      _T11 = _T10 - 1;
      _T12 = (unsigned long)_T11;
      _T13 = Cyc_substring(_TD,0,_T12);
      *_TC = _T13;
      { struct Cyc_List_List * _T2F = _cycalloc(sizeof(struct Cyc_List_List));
	_T2F->hd = a;
	_T2F->tl = Cyc_current_args;
	_T14 = (struct Cyc_List_List *)_T2F;
      }Cyc_current_args = _T14;
      _T15 = Cyc_args(lexbuf);
      return _T15;
    }
  case 2: 
    { struct _fat_ptr * a;
      a = _cycalloc(sizeof(struct _fat_ptr));
      _T16 = a;
      _T17 = Cyc_Lexing_lexeme(lexbuf);
      _T18 = Cyc_Lexing_lexeme_end(lexbuf);
      _T19 = Cyc_Lexing_lexeme_start(lexbuf);
      _T1A = _T18 - _T19;
      _T1B = _T1A - 1;
      _T1C = (unsigned long)_T1B;
      _T1D = Cyc_substring(_T17,0,_T1C);
      *_T16 = _T1D;
      { struct Cyc_List_List * _T2F = _cycalloc(sizeof(struct Cyc_List_List));
	_T2F->hd = a;
	_T2F->tl = Cyc_current_args;
	_T1E = (struct Cyc_List_List *)_T2F;
      }Cyc_current_args = _T1E;
      _T1F = Cyc_token(lexbuf);
      return _T1F;
    }
  case 3: 
    { struct _fat_ptr * a;
      a = _cycalloc(sizeof(struct _fat_ptr));
      _T20 = a;
      _T21 = Cyc_Lexing_lexeme(lexbuf);
      _T22 = Cyc_Lexing_lexeme_end(lexbuf);
      _T23 = Cyc_Lexing_lexeme_start(lexbuf);
      _T24 = _T22 - _T23;
      _T25 = _T24 - 4;
      _T26 = (unsigned long)_T25;
      _T27 = Cyc_substring(_T21,0,_T26);
      *_T20 = _T27;
      { struct Cyc_List_List * _T2F = _cycalloc(sizeof(struct Cyc_List_List));
	_T2F->hd = a;
	_T2F->tl = Cyc_current_args;
	_T28 = (struct Cyc_List_List *)_T2F;
      }Cyc_current_args = _T28;
      _T29 = Cyc_token(lexbuf);
      return _T29;
    }
  default: 
    _T2A = lexbuf;
    _T2B = _T2A->refill_buff;
    _T2B(lexbuf);
    _T2C = Cyc_args_rec(lexbuf,lexstate);
    return _T2C;
  }
  { struct Cyc_Lexing_Error_exn_struct * _T2F = _cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));
    _T2F->tag = Cyc_Lexing_Error;
    _T2F->f1 = _tag_fat("some action didn't return!",sizeof(char),27U);
    _T2D = (struct Cyc_Lexing_Error_exn_struct *)_T2F;
  }_T2E = (void *)_T2D;
  _throw(_T2E);
}
int Cyc_args(struct Cyc_Lexing_lexbuf * lexbuf) {
  int _T0;
  _T0 = Cyc_args_rec(lexbuf,2);
  return _T0;
}
int Cyc_token_rec(struct Cyc_Lexing_lexbuf * lexbuf,int lexstate) {
  int _T0;
  int _T1;
  struct _fat_ptr * _T2;
  struct _fat_ptr _T3;
  int _T4;
  int _T5;
  int _T6;
  int _T7;
  int _T8;
  int _T9;
  int _TA;
  int _TB;
  int _TC;
  int _TD;
  int _TE;
  int _TF;
  int _T10;
  int _T11;
  int _T12;
  int _T13;
  int _T14;
  int _T15;
  int _T16;
  int _T17;
  int _T18;
  int _T19;
  int _T1A;
  int _T1B;
  int _T1C;
  int _T1D;
  int _T1E;
  int _T1F;
  int _T20;
  int _T21;
  int _T22;
  int _T23;
  int _T24;
  int _T25;
  int _T26;
  int _T27;
  int _T28;
  int _T29;
  int _T2A;
  int _T2B;
  int _T2C;
  int _T2D;
  int _T2E;
  int _T2F;
  int _T30;
  int _T31;
  int _T32;
  int _T33;
  struct Cyc_Lexing_lexbuf * _T34;
  void (* _T35)(struct Cyc_Lexing_lexbuf *);
  int _T36;
  struct Cyc_Lexing_Error_exn_struct * _T37;
  void * _T38;
  lexstate = Cyc_lex_engine(lexstate,lexbuf);
  _T0 = lexstate;
  _T1 = (int)_T0;
  switch (_T1) {
  case 0: 
    { struct _fat_ptr * _T39 = _cycalloc(sizeof(struct _fat_ptr));
      _T3 = Cyc_Lexing_lexeme(lexbuf);
      *_T39 = _T3;
      _T2 = (struct _fat_ptr *)_T39;
    }Cyc_add_target(_T2);
    _T4 = Cyc_token(lexbuf);
    return _T4;
  case 1: 
    return 0;
  case 2: 
    _T5 = Cyc_token(lexbuf);
    return _T5;
  case 3: 
    Cyc_string(lexbuf);
    _T6 = Cyc_token(lexbuf);
    return _T6;
  case 4: 
    _T7 = Cyc_token(lexbuf);
    return _T7;
  case 5: 
    _T8 = Cyc_token(lexbuf);
    return _T8;
  case 6: 
    _T9 = Cyc_token(lexbuf);
    return _T9;
  case 7: 
    _TA = Cyc_token(lexbuf);
    return _TA;
  case 8: 
    _TB = Cyc_token(lexbuf);
    return _TB;
  case 9: 
    _TC = Cyc_token(lexbuf);
    return _TC;
  case 10: 
    _TD = Cyc_token(lexbuf);
    return _TD;
  case 11: 
    _TE = Cyc_token(lexbuf);
    return _TE;
  case 12: 
    _TF = Cyc_token(lexbuf);
    return _TF;
  case 13: 
    _T10 = Cyc_token(lexbuf);
    return _T10;
  case 14: 
    _T11 = Cyc_token(lexbuf);
    return _T11;
  case 15: 
    _T12 = Cyc_token(lexbuf);
    return _T12;
  case 16: 
    _T13 = Cyc_token(lexbuf);
    return _T13;
  case 17: 
    _T14 = Cyc_token(lexbuf);
    return _T14;
  case 18: 
    _T15 = Cyc_token(lexbuf);
    return _T15;
  case 19: 
    _T16 = Cyc_token(lexbuf);
    return _T16;
  case 20: 
    _T17 = Cyc_token(lexbuf);
    return _T17;
  case 21: 
    _T18 = Cyc_token(lexbuf);
    return _T18;
  case 22: 
    _T19 = Cyc_token(lexbuf);
    return _T19;
  case 23: 
    _T1A = Cyc_token(lexbuf);
    return _T1A;
  case 24: 
    _T1B = Cyc_token(lexbuf);
    return _T1B;
  case 25: 
    _T1C = Cyc_token(lexbuf);
    return _T1C;
  case 26: 
    _T1D = Cyc_token(lexbuf);
    return _T1D;
  case 27: 
    _T1E = Cyc_token(lexbuf);
    return _T1E;
  case 28: 
    _T1F = Cyc_token(lexbuf);
    return _T1F;
  case 29: 
    _T20 = Cyc_token(lexbuf);
    return _T20;
  case 30: 
    _T21 = Cyc_token(lexbuf);
    return _T21;
  case 31: 
    _T22 = Cyc_token(lexbuf);
    return _T22;
  case 32: 
    _T23 = Cyc_token(lexbuf);
    return _T23;
  case 33: 
    _T24 = Cyc_token(lexbuf);
    return _T24;
  case 34: 
    _T25 = Cyc_token(lexbuf);
    return _T25;
  case 35: 
    _T26 = Cyc_token(lexbuf);
    return _T26;
  case 36: 
    _T27 = Cyc_token(lexbuf);
    return _T27;
  case 37: 
    _T28 = Cyc_token(lexbuf);
    return _T28;
  case 38: 
    _T29 = Cyc_token(lexbuf);
    return _T29;
  case 39: 
    _T2A = Cyc_token(lexbuf);
    return _T2A;
  case 40: 
    _T2B = Cyc_token(lexbuf);
    return _T2B;
  case 41: 
    _T2C = Cyc_token(lexbuf);
    return _T2C;
  case 42: 
    _T2D = Cyc_token(lexbuf);
    return _T2D;
  case 43: 
    _T2E = Cyc_token(lexbuf);
    return _T2E;
  case 44: 
    _T2F = Cyc_token(lexbuf);
    return _T2F;
  case 45: 
    _T30 = Cyc_token(lexbuf);
    return _T30;
  case 46: 
    _T31 = Cyc_token(lexbuf);
    return _T31;
  case 47: 
    _T32 = Cyc_token(lexbuf);
    return _T32;
  case 48: 
    _T33 = Cyc_token(lexbuf);
    return _T33;
  default: 
    _T34 = lexbuf;
    _T35 = _T34->refill_buff;
    _T35(lexbuf);
    _T36 = Cyc_token_rec(lexbuf,lexstate);
    return _T36;
  }
  { struct Cyc_Lexing_Error_exn_struct * _T39 = _cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));
    _T39->tag = Cyc_Lexing_Error;
    _T39->f1 = _tag_fat("some action didn't return!",sizeof(char),27U);
    _T37 = (struct Cyc_Lexing_Error_exn_struct *)_T39;
  }_T38 = (void *)_T37;
  _throw(_T38);
}
int Cyc_token(struct Cyc_Lexing_lexbuf * lexbuf) {
  int _T0;
  _T0 = Cyc_token_rec(lexbuf,3);
  return _T0;
}
int Cyc_string_rec(struct Cyc_Lexing_lexbuf * lexbuf,int lexstate) {
  int _T0;
  int _T1;
  int _T2;
  int _T3;
  int _T4;
  int _T5;
  int _T6;
  int _T7;
  int _T8;
  struct Cyc_Lexing_lexbuf * _T9;
  void (* _TA)(struct Cyc_Lexing_lexbuf *);
  int _TB;
  struct Cyc_Lexing_Error_exn_struct * _TC;
  void * _TD;
  lexstate = Cyc_lex_engine(lexstate,lexbuf);
  _T0 = lexstate;
  _T1 = (int)_T0;
  switch (_T1) {
  case 0: 
    _T2 = Cyc_string(lexbuf);
    return _T2;
  case 1: 
    return 0;
  case 2: 
    _T3 = Cyc_string(lexbuf);
    return _T3;
  case 3: 
    _T4 = Cyc_string(lexbuf);
    return _T4;
  case 4: 
    _T5 = Cyc_string(lexbuf);
    return _T5;
  case 5: 
    _T6 = Cyc_string(lexbuf);
    return _T6;
  case 6: 
    _T7 = Cyc_string(lexbuf);
    return _T7;
  case 7: 
    return 0;
  case 8: 
    return 0;
  case 9: 
    _T8 = Cyc_string(lexbuf);
    return _T8;
  default: 
    _T9 = lexbuf;
    _TA = _T9->refill_buff;
    _TA(lexbuf);
    _TB = Cyc_string_rec(lexbuf,lexstate);
    return _TB;
  }
  { struct Cyc_Lexing_Error_exn_struct * _TE = _cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));
    _TE->tag = Cyc_Lexing_Error;
    _TE->f1 = _tag_fat("some action didn't return!",sizeof(char),27U);
    _TC = (struct Cyc_Lexing_Error_exn_struct *)_TE;
  }_TD = (void *)_TC;
  _throw(_TD);
}
int Cyc_string(struct Cyc_Lexing_lexbuf * lexbuf) {
  int _T0;
  _T0 = Cyc_string_rec(lexbuf,4);
  return _T0;
}
int Cyc_slurp_rec(struct Cyc_Lexing_lexbuf * lexbuf,int lexstate) {
  int _T0;
  int _T1;
  struct Cyc___cycFILE * _T2;
  int _T3;
  struct Cyc___cycFILE * _T4;
  struct _fat_ptr _T5;
  struct _fat_ptr _T6;
  struct Cyc___cycFILE * _T7;
  struct _fat_ptr _T8;
  struct _fat_ptr _T9;
  struct Cyc___cycFILE * _TA;
  struct _fat_ptr _TB;
  struct _fat_ptr _TC;
  struct Cyc___cycFILE * _TD;
  struct _fat_ptr _TE;
  struct _fat_ptr _TF;
  struct Cyc___cycFILE * _T10;
  struct _fat_ptr _T11;
  struct _fat_ptr _T12;
  struct _fat_ptr _T13;
  struct _fat_ptr _T14;
  struct _fat_ptr _T15;
  struct _fat_ptr _T16;
  struct _fat_ptr _T17;
  struct _fat_ptr _T18;
  struct _fat_ptr _T19;
  struct _fat_ptr _T1A;
  struct _fat_ptr _T1B;
  struct _fat_ptr _T1C;
  struct _fat_ptr _T1D;
  struct _fat_ptr _T1E;
  struct _fat_ptr _T1F;
  struct _fat_ptr _T20;
  struct _fat_ptr _T21;
  struct _fat_ptr _T22;
  struct _fat_ptr _T23;
  struct _fat_ptr _T24;
  struct _fat_ptr _T25;
  struct _fat_ptr _T26;
  struct _fat_ptr _T27;
  struct _fat_ptr _T28;
  struct _fat_ptr _T29;
  struct _fat_ptr _T2A;
  struct Cyc___cycFILE * _T2B;
  struct Cyc___cycFILE * _T2C;
  struct Cyc___cycFILE * _T2D;
  struct Cyc___cycFILE * _T2E;
  struct Cyc___cycFILE * _T2F;
  struct Cyc___cycFILE * _T30;
  struct Cyc___cycFILE * _T31;
  struct Cyc___cycFILE * _T32;
  char _T33;
  int _T34;
  struct Cyc___cycFILE * _T35;
  struct Cyc_Lexing_lexbuf * _T36;
  void (* _T37)(struct Cyc_Lexing_lexbuf *);
  int _T38;
  struct Cyc_Lexing_Error_exn_struct * _T39;
  void * _T3A;
  lexstate = Cyc_lex_engine(lexstate,lexbuf);
  _T0 = lexstate;
  _T1 = (int)_T0;
  switch (_T1) {
  case 0: 
    return 0;
  case 1: 
    _T2 = _check_null(Cyc_slurp_out);
    Cyc_fputc(34,_T2);
    _TL2A: _T3 = Cyc_slurp_string(lexbuf);
    if (_T3) { goto _TL2B;
    }else { goto _TL2C;
    }
    _TL2B: goto _TL2A;
    _TL2C: return 1;
  case 2: 
    _T4 = _check_null(Cyc_slurp_out);
    Cyc_fputs("*__IGNORE_FOR_CYCLONE_MALLOC(",_T4);
    _T5 = _tag_fat("Warning: declaration of malloc sidestepped\n",sizeof(char),
		   44U);
    _T6 = _tag_fat(0U,sizeof(void *),0);
    Cyc_log(_T5,_T6);
    return 1;
  case 3: 
    _T7 = _check_null(Cyc_slurp_out);
    Cyc_fputs(" __IGNORE_FOR_CYCLONE_MALLOC(",_T7);
    _T8 = _tag_fat("Warning: declaration of malloc sidestepped\n",sizeof(char),
		   44U);
    _T9 = _tag_fat(0U,sizeof(void *),0);
    Cyc_log(_T8,_T9);
    return 1;
  case 4: 
    _TA = _check_null(Cyc_slurp_out);
    Cyc_fputs("*__IGNORE_FOR_CYCLONE_CALLOC(",_TA);
    _TB = _tag_fat("Warning: declaration of calloc sidestepped\n",sizeof(char),
		   44U);
    _TC = _tag_fat(0U,sizeof(void *),0);
    Cyc_log(_TB,_TC);
    return 1;
  case 5: 
    _TD = _check_null(Cyc_slurp_out);
    Cyc_fputs(" __IGNORE_FOR_CYCLONE_CALLOC(",_TD);
    _TE = _tag_fat("Warning: declaration of calloc sidestepped\n",sizeof(char),
		   44U);
    _TF = _tag_fat(0U,sizeof(void *),0);
    Cyc_log(_TE,_TF);
    return 1;
  case 6: 
    _T10 = _check_null(Cyc_slurp_out);
    Cyc_fputs("__region",_T10);
    _T11 = _tag_fat("Warning: use of region sidestepped\n",sizeof(char),36U);
    _T12 = _tag_fat(0U,sizeof(void *),0);
    Cyc_log(_T11,_T12);
    return 1;
  case 7: 
    _T13 = _tag_fat("Warning: use of __extension__ deleted\n",sizeof(char),
		    39U);
    _T14 = _tag_fat(0U,sizeof(void *),0);
    Cyc_log(_T13,_T14);
    return 1;
  case 8: 
    _T15 = _tag_fat("Warning: use of nonnull attribute deleted\n",sizeof(char),
		    43U);
    _T16 = _tag_fat(0U,sizeof(void *),0);
    Cyc_log(_T15,_T16);
    return 1;
  case 9: 
    _T17 = _tag_fat("Warning: use of mode HI deleted\n",sizeof(char),33U);
    _T18 = _tag_fat(0U,sizeof(void *),0);
    Cyc_log(_T17,_T18);
    return 1;
  case 10: 
    _T19 = _tag_fat("Warning: use of mode SI deleted\n",sizeof(char),33U);
    _T1A = _tag_fat(0U,sizeof(void *),0);
    Cyc_log(_T19,_T1A);
    return 1;
  case 11: 
    _T1B = _tag_fat("Warning: use of mode QI deleted\n",sizeof(char),33U);
    _T1C = _tag_fat(0U,sizeof(void *),0);
    Cyc_log(_T1B,_T1C);
    return 1;
  case 12: 
    _T1D = _tag_fat("Warning: use of mode DI deleted\n",sizeof(char),33U);
    _T1E = _tag_fat(0U,sizeof(void *),0);
    Cyc_log(_T1D,_T1E);
    return 1;
  case 13: 
    _T1F = _tag_fat("Warning: use of mode DI deleted\n",sizeof(char),33U);
    _T20 = _tag_fat(0U,sizeof(void *),0);
    Cyc_log(_T1F,_T20);
    return 1;
  case 14: 
    _T21 = _tag_fat("Warning: use of mode word deleted\n",sizeof(char),35U);
    _T22 = _tag_fat(0U,sizeof(void *),0);
    Cyc_log(_T21,_T22);
    return 1;
  case 15: 
    _T23 = _tag_fat("Warning: use of __attribute__((deprecated)) deleted\n",
		    sizeof(char),53U);
    _T24 = _tag_fat(0U,sizeof(void *),0);
    Cyc_log(_T23,_T24);
    return 1;
  case 16: 
    _T25 = _tag_fat("Warning: use of __attribute__((__deprecated__)) deleted\n",
		    sizeof(char),57U);
    _T26 = _tag_fat(0U,sizeof(void *),0);
    Cyc_log(_T25,_T26);
    return 1;
  case 17: 
    _T27 = _tag_fat("Warning: use of __attribute__((__transparent_union__)) deleted\n",
		    sizeof(char),64U);
    _T28 = _tag_fat(0U,sizeof(void *),0);
    Cyc_log(_T27,_T28);
    return 1;
  case 18: 
    _T29 = _tag_fat("Warning: use of __asm__ on declaration deleted\n",sizeof(char),
		    48U);
    _T2A = _tag_fat(0U,sizeof(void *),0);
    Cyc_log(_T29,_T2A);
    return 1;
  case 19: 
    _T2B = _check_null(Cyc_slurp_out);
    Cyc_fputs("inline",_T2B);
    return 1;
  case 20: 
    _T2C = _check_null(Cyc_slurp_out);
    Cyc_fputs("inline",_T2C);
    return 1;
  case 21: 
    _T2D = _check_null(Cyc_slurp_out);
    Cyc_fputs("const",_T2D);
    return 1;
  case 22: 
    _T2E = _check_null(Cyc_slurp_out);
    Cyc_fputs("const",_T2E);
    return 1;
  case 23: 
    _T2F = _check_null(Cyc_slurp_out);
    Cyc_fputs("signed",_T2F);
    return 1;
  case 24: 
    _T30 = _check_null(Cyc_slurp_out);
    Cyc_fputs("signed",_T30);
    return 1;
  case 25: 
    _T31 = _check_null(Cyc_slurp_out);
    Cyc_fputs("signed",_T31);
    return 1;
  case 26: 
    _T32 = _check_null(Cyc_slurp_out);
    Cyc_fputs("int",_T32);
    return 1;
  case 27: 
    return 1;
  case 28: 
    _T33 = Cyc_Lexing_lexeme_char(lexbuf,0);
    _T34 = (int)_T33;
    _T35 = _check_null(Cyc_slurp_out);
    Cyc_fputc(_T34,_T35);
    return 1;
  default: 
    _T36 = lexbuf;
    _T37 = _T36->refill_buff;
    _T37(lexbuf);
    _T38 = Cyc_slurp_rec(lexbuf,lexstate);
    return _T38;
  }
  { struct Cyc_Lexing_Error_exn_struct * _T3B = _cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));
    _T3B->tag = Cyc_Lexing_Error;
    _T3B->f1 = _tag_fat("some action didn't return!",sizeof(char),27U);
    _T39 = (struct Cyc_Lexing_Error_exn_struct *)_T3B;
  }_T3A = (void *)_T39;
  _throw(_T3A);
}
int Cyc_slurp(struct Cyc_Lexing_lexbuf * lexbuf) {
  int _T0;
  _T0 = Cyc_slurp_rec(lexbuf,5);
  return _T0;
}
int Cyc_slurp_string_rec(struct Cyc_Lexing_lexbuf * lexbuf,int lexstate) {
  int _T0;
  int _T1;
  struct Cyc___cycFILE * _T2;
  struct _fat_ptr _T3;
  struct _fat_ptr _T4;
  struct Cyc_String_pa_PrintArg_struct _T5;
  struct Cyc___cycFILE * _T6;
  struct _fat_ptr _T7;
  struct _fat_ptr _T8;
  struct Cyc_String_pa_PrintArg_struct _T9;
  struct Cyc___cycFILE * _TA;
  struct _fat_ptr _TB;
  struct _fat_ptr _TC;
  struct Cyc_String_pa_PrintArg_struct _TD;
  struct Cyc___cycFILE * _TE;
  struct _fat_ptr _TF;
  struct _fat_ptr _T10;
  struct Cyc_String_pa_PrintArg_struct _T11;
  struct Cyc___cycFILE * _T12;
  struct _fat_ptr _T13;
  struct _fat_ptr _T14;
  struct Cyc_String_pa_PrintArg_struct _T15;
  struct Cyc___cycFILE * _T16;
  struct _fat_ptr _T17;
  struct _fat_ptr _T18;
  struct Cyc_String_pa_PrintArg_struct _T19;
  struct Cyc___cycFILE * _T1A;
  struct _fat_ptr _T1B;
  struct _fat_ptr _T1C;
  struct Cyc_String_pa_PrintArg_struct _T1D;
  struct Cyc___cycFILE * _T1E;
  struct _fat_ptr _T1F;
  struct _fat_ptr _T20;
  struct Cyc_Lexing_lexbuf * _T21;
  void (* _T22)(struct Cyc_Lexing_lexbuf *);
  int _T23;
  struct Cyc_Lexing_Error_exn_struct * _T24;
  void * _T25;
  lexstate = Cyc_lex_engine(lexstate,lexbuf);
  _T0 = lexstate;
  _T1 = (int)_T0;
  switch (_T1) {
  case 0: 
    return 0;
  case 1: 
    _T2 = _check_null(Cyc_slurp_out);
    Cyc_fputc(34,_T2);
    return 0;
  case 2: 
    _T3 = _tag_fat("Warning: unclosed string\n",sizeof(char),26U);
    _T4 = _tag_fat(0U,sizeof(void *),0);
    Cyc_log(_T3,_T4);
    { struct Cyc_String_pa_PrintArg_struct _T26;
      _T26.tag = 0;
      _T26.f1 = Cyc_Lexing_lexeme(lexbuf);
      _T5 = _T26;
    }{ struct Cyc_String_pa_PrintArg_struct _T26 = _T5;
      void * _T27[1];
      _T27[0] = &_T26;
      _T6 = _check_null(Cyc_slurp_out);
      _T7 = _tag_fat("%s",sizeof(char),3U);
      _T8 = _tag_fat(_T27,sizeof(void *),1);
      Cyc_fprintf(_T6,_T7,_T8);
    }return 1;
  case 3: 
    { struct Cyc_String_pa_PrintArg_struct _T26;
      _T26.tag = 0;
      _T26.f1 = Cyc_Lexing_lexeme(lexbuf);
      _T9 = _T26;
    }{ struct Cyc_String_pa_PrintArg_struct _T26 = _T9;
      void * _T27[1];
      _T27[0] = &_T26;
      _TA = _check_null(Cyc_slurp_out);
      _TB = _tag_fat("%s",sizeof(char),3U);
      _TC = _tag_fat(_T27,sizeof(void *),1);
      Cyc_fprintf(_TA,_TB,_TC);
    }return 1;
  case 4: 
    { struct Cyc_String_pa_PrintArg_struct _T26;
      _T26.tag = 0;
      _T26.f1 = Cyc_Lexing_lexeme(lexbuf);
      _TD = _T26;
    }{ struct Cyc_String_pa_PrintArg_struct _T26 = _TD;
      void * _T27[1];
      _T27[0] = &_T26;
      _TE = _check_null(Cyc_slurp_out);
      _TF = _tag_fat("%s",sizeof(char),3U);
      _T10 = _tag_fat(_T27,sizeof(void *),1);
      Cyc_fprintf(_TE,_TF,_T10);
    }return 1;
  case 5: 
    { struct Cyc_String_pa_PrintArg_struct _T26;
      _T26.tag = 0;
      _T26.f1 = Cyc_Lexing_lexeme(lexbuf);
      _T11 = _T26;
    }{ struct Cyc_String_pa_PrintArg_struct _T26 = _T11;
      void * _T27[1];
      _T27[0] = &_T26;
      _T12 = _check_null(Cyc_slurp_out);
      _T13 = _tag_fat("%s",sizeof(char),3U);
      _T14 = _tag_fat(_T27,sizeof(void *),1);
      Cyc_fprintf(_T12,_T13,_T14);
    }return 1;
  case 6: 
    { struct Cyc_String_pa_PrintArg_struct _T26;
      _T26.tag = 0;
      _T26.f1 = Cyc_Lexing_lexeme(lexbuf);
      _T15 = _T26;
    }{ struct Cyc_String_pa_PrintArg_struct _T26 = _T15;
      void * _T27[1];
      _T27[0] = &_T26;
      _T16 = _check_null(Cyc_slurp_out);
      _T17 = _tag_fat("%s",sizeof(char),3U);
      _T18 = _tag_fat(_T27,sizeof(void *),1);
      Cyc_fprintf(_T16,_T17,_T18);
    }return 1;
  case 7: 
    { struct Cyc_String_pa_PrintArg_struct _T26;
      _T26.tag = 0;
      _T26.f1 = Cyc_Lexing_lexeme(lexbuf);
      _T19 = _T26;
    }{ struct Cyc_String_pa_PrintArg_struct _T26 = _T19;
      void * _T27[1];
      _T27[0] = &_T26;
      _T1A = _check_null(Cyc_slurp_out);
      _T1B = _tag_fat("%s",sizeof(char),3U);
      _T1C = _tag_fat(_T27,sizeof(void *),1);
      Cyc_fprintf(_T1A,_T1B,_T1C);
    }return 1;
  case 8: 
    { struct Cyc_String_pa_PrintArg_struct _T26;
      _T26.tag = 0;
      _T26.f1 = Cyc_Lexing_lexeme(lexbuf);
      _T1D = _T26;
    }{ struct Cyc_String_pa_PrintArg_struct _T26 = _T1D;
      void * _T27[1];
      _T27[0] = &_T26;
      _T1E = _check_null(Cyc_slurp_out);
      _T1F = _tag_fat("%s",sizeof(char),3U);
      _T20 = _tag_fat(_T27,sizeof(void *),1);
      Cyc_fprintf(_T1E,_T1F,_T20);
    }return 1;
  default: 
    _T21 = lexbuf;
    _T22 = _T21->refill_buff;
    _T22(lexbuf);
    _T23 = Cyc_slurp_string_rec(lexbuf,lexstate);
    return _T23;
  }
  { struct Cyc_Lexing_Error_exn_struct * _T26 = _cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));
    _T26->tag = Cyc_Lexing_Error;
    _T26->f1 = _tag_fat("some action didn't return!",sizeof(char),27U);
    _T24 = (struct Cyc_Lexing_Error_exn_struct *)_T26;
  }_T25 = (void *)_T24;
  _throw(_T25);
}
int Cyc_slurp_string(struct Cyc_Lexing_lexbuf * lexbuf) {
  int _T0;
  _T0 = Cyc_slurp_string_rec(lexbuf,6);
  return _T0;
}
int Cyc_asmtok_rec(struct Cyc_Lexing_lexbuf * lexbuf,int lexstate) {
  int _T0;
  int _T1;
  int _T2;
  int _T3;
  struct Cyc_Lexing_lexbuf * _T4;
  void (* _T5)(struct Cyc_Lexing_lexbuf *);
  int _T6;
  struct Cyc_Lexing_Error_exn_struct * _T7;
  void * _T8;
  lexstate = Cyc_lex_engine(lexstate,lexbuf);
  _T0 = lexstate;
  _T1 = (int)_T0;
  switch (_T1) {
  case 0: 
    return 0;
  case 1: 
    if (Cyc_parens_to_match != 1) { goto _TL2F;
    }
    return 0;
    _TL2F: Cyc_parens_to_match = Cyc_parens_to_match + -1;
    return 1;
  case 2: 
    Cyc_parens_to_match = Cyc_parens_to_match + 1;
    return 1;
  case 3: 
    _TL31: _T2 = Cyc_asm_string(lexbuf);
    if (_T2) { goto _TL32;
    }else { goto _TL33;
    }
    _TL32: goto _TL31;
    _TL33: return 1;
  case 4: 
    _TL34: _T3 = Cyc_asm_comment(lexbuf);
    if (_T3) { goto _TL35;
    }else { goto _TL36;
    }
    _TL35: goto _TL34;
    _TL36: return 1;
  case 5: 
    return 1;
  case 6: 
    return 1;
  default: 
    _T4 = lexbuf;
    _T5 = _T4->refill_buff;
    _T5(lexbuf);
    _T6 = Cyc_asmtok_rec(lexbuf,lexstate);
    return _T6;
  }
  { struct Cyc_Lexing_Error_exn_struct * _T9 = _cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));
    _T9->tag = Cyc_Lexing_Error;
    _T9->f1 = _tag_fat("some action didn't return!",sizeof(char),27U);
    _T7 = (struct Cyc_Lexing_Error_exn_struct *)_T9;
  }_T8 = (void *)_T7;
  _throw(_T8);
}
int Cyc_asmtok(struct Cyc_Lexing_lexbuf * lexbuf) {
  int _T0;
  _T0 = Cyc_asmtok_rec(lexbuf,7);
  return _T0;
}
int Cyc_asm_string_rec(struct Cyc_Lexing_lexbuf * lexbuf,int lexstate) {
  int _T0;
  int _T1;
  struct _fat_ptr _T2;
  struct _fat_ptr _T3;
  struct _fat_ptr _T4;
  struct _fat_ptr _T5;
  struct Cyc_Lexing_lexbuf * _T6;
  void (* _T7)(struct Cyc_Lexing_lexbuf *);
  int _T8;
  struct Cyc_Lexing_Error_exn_struct * _T9;
  void * _TA;
  lexstate = Cyc_lex_engine(lexstate,lexbuf);
  _T0 = lexstate;
  _T1 = (int)_T0;
  switch (_T1) {
  case 0: 
    _T2 = _tag_fat("Warning: unclosed string\n",sizeof(char),26U);
    _T3 = _tag_fat(0U,sizeof(void *),0);
    Cyc_log(_T2,_T3);
    return 0;
  case 1: 
    return 0;
  case 2: 
    _T4 = _tag_fat("Warning: unclosed string\n",sizeof(char),26U);
    _T5 = _tag_fat(0U,sizeof(void *),0);
    Cyc_log(_T4,_T5);
    return 1;
  case 3: 
    return 1;
  case 4: 
    return 1;
  case 5: 
    return 1;
  case 6: 
    return 1;
  case 7: 
    return 1;
  case 8: 
    return 1;
  default: 
    _T6 = lexbuf;
    _T7 = _T6->refill_buff;
    _T7(lexbuf);
    _T8 = Cyc_asm_string_rec(lexbuf,lexstate);
    return _T8;
  }
  { struct Cyc_Lexing_Error_exn_struct * _TB = _cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));
    _TB->tag = Cyc_Lexing_Error;
    _TB->f1 = _tag_fat("some action didn't return!",sizeof(char),27U);
    _T9 = (struct Cyc_Lexing_Error_exn_struct *)_TB;
  }_TA = (void *)_T9;
  _throw(_TA);
}
int Cyc_asm_string(struct Cyc_Lexing_lexbuf * lexbuf) {
  int _T0;
  _T0 = Cyc_asm_string_rec(lexbuf,8);
  return _T0;
}
int Cyc_asm_comment_rec(struct Cyc_Lexing_lexbuf * lexbuf,int lexstate) {
  int _T0;
  int _T1;
  struct _fat_ptr _T2;
  struct _fat_ptr _T3;
  struct Cyc_Lexing_lexbuf * _T4;
  void (* _T5)(struct Cyc_Lexing_lexbuf *);
  int _T6;
  struct Cyc_Lexing_Error_exn_struct * _T7;
  void * _T8;
  lexstate = Cyc_lex_engine(lexstate,lexbuf);
  _T0 = lexstate;
  _T1 = (int)_T0;
  switch (_T1) {
  case 0: 
    _T2 = _tag_fat("Warning: unclosed comment\n",sizeof(char),27U);
    _T3 = _tag_fat(0U,sizeof(void *),0);
    Cyc_log(_T2,_T3);
    return 0;
  case 1: 
    return 0;
  case 2: 
    return 1;
  default: 
    _T4 = lexbuf;
    _T5 = _T4->refill_buff;
    _T5(lexbuf);
    _T6 = Cyc_asm_comment_rec(lexbuf,lexstate);
    return _T6;
  }
  { struct Cyc_Lexing_Error_exn_struct * _T9 = _cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));
    _T9->tag = Cyc_Lexing_Error;
    _T9->f1 = _tag_fat("some action didn't return!",sizeof(char),27U);
    _T7 = (struct Cyc_Lexing_Error_exn_struct *)_T9;
  }_T8 = (void *)_T7;
  _throw(_T8);
}
int Cyc_asm_comment(struct Cyc_Lexing_lexbuf * lexbuf) {
  int _T0;
  _T0 = Cyc_asm_comment_rec(lexbuf,9);
  return _T0;
}
struct _tuple16 * Cyc_suck_line_rec(struct Cyc_Lexing_lexbuf * lexbuf,int lexstate) {
  int _T0;
  int _T1;
  struct _tuple16 * _T2;
  struct _tuple16 * _T3;
  struct Cyc_Lexing_lexbuf * _T4;
  void (* _T5)(struct Cyc_Lexing_lexbuf *);
  struct _tuple16 * _T6;
  struct Cyc_Lexing_Error_exn_struct * _T7;
  void * _T8;
  lexstate = Cyc_lex_engine(lexstate,lexbuf);
  _T0 = lexstate;
  _T1 = (int)_T0;
  switch (_T1) {
  case 0: 
    Cyc_current_line = _tag_fat("#define ",sizeof(char),9U);
    Cyc_suck_macroname(lexbuf);
    { struct _tuple16 * _T9 = _cycalloc(sizeof(struct _tuple16));
      _T9->f0 = Cyc_current_line;
      _T9->f1 = _check_null(Cyc_current_source);
      _T2 = (struct _tuple16 *)_T9;
    }return _T2;
  case 1: 
    _T3 = Cyc_suck_line(lexbuf);
    return _T3;
  case 2: 
    return 0;
  default: 
    _T4 = lexbuf;
    _T5 = _T4->refill_buff;
    _T5(lexbuf);
    _T6 = Cyc_suck_line_rec(lexbuf,lexstate);
    return _T6;
  }
  { struct Cyc_Lexing_Error_exn_struct * _T9 = _cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));
    _T9->tag = Cyc_Lexing_Error;
    _T9->f1 = _tag_fat("some action didn't return!",sizeof(char),27U);
    _T7 = (struct Cyc_Lexing_Error_exn_struct *)_T9;
  }_T8 = (void *)_T7;
  _throw(_T8);
}
struct _tuple16 * Cyc_suck_line(struct Cyc_Lexing_lexbuf * lexbuf) {
  struct _tuple16 * _T0;
  _T0 = Cyc_suck_line_rec(lexbuf,10);
  return _T0;
}
int Cyc_suck_macroname_rec(struct Cyc_Lexing_lexbuf * lexbuf,int lexstate) {
  struct _fat_ptr * _T0;
  struct _fat_ptr _T1;
  struct _fat_ptr _T2;
  struct _fat_ptr * _T3;
  struct _fat_ptr _T4;
  int _T5;
  struct Cyc_Lexing_lexbuf * _T6;
  void (* _T7)(struct Cyc_Lexing_lexbuf *);
  int _T8;
  struct Cyc_Lexing_Error_exn_struct * _T9;
  void * _TA;
  lexstate = Cyc_lex_engine(lexstate,lexbuf);
  if (lexstate != 0) { goto _TL3A;
  }
  { struct _fat_ptr * _TB = _cycalloc(sizeof(struct _fat_ptr));
    _T1 = Cyc_Lexing_lexeme(lexbuf);
    *_TB = _T1;
    _T0 = (struct _fat_ptr *)_TB;
  }Cyc_current_source = _T0;
  _T2 = Cyc_current_line;
  _T3 = Cyc_current_source;
  _T4 = *_T3;
  Cyc_current_line = Cyc_strconcat(_T2,_T4);
  _T5 = Cyc_suck_restofline(lexbuf);
  return _T5;
  _TL3A: _T6 = lexbuf;
  _T7 = _T6->refill_buff;
  _T7(lexbuf);
  _T8 = Cyc_suck_macroname_rec(lexbuf,lexstate);
  return _T8;
  { struct Cyc_Lexing_Error_exn_struct * _TB = _cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));
    _TB->tag = Cyc_Lexing_Error;
    _TB->f1 = _tag_fat("some action didn't return!",sizeof(char),27U);
    _T9 = (struct Cyc_Lexing_Error_exn_struct *)_TB;
  }_TA = (void *)_T9;
  _throw(_TA);
}
int Cyc_suck_macroname(struct Cyc_Lexing_lexbuf * lexbuf) {
  int _T0;
  _T0 = Cyc_suck_macroname_rec(lexbuf,11);
  return _T0;
}
int Cyc_suck_restofline_rec(struct Cyc_Lexing_lexbuf * lexbuf,int lexstate) {
  struct _fat_ptr _T0;
  struct _fat_ptr _T1;
  struct Cyc_Lexing_lexbuf * _T2;
  void (* _T3)(struct Cyc_Lexing_lexbuf *);
  int _T4;
  struct Cyc_Lexing_Error_exn_struct * _T5;
  void * _T6;
  lexstate = Cyc_lex_engine(lexstate,lexbuf);
  if (lexstate != 0) { goto _TL3C;
  }
  _T0 = Cyc_current_line;
  _T1 = Cyc_Lexing_lexeme(lexbuf);
  Cyc_current_line = Cyc_strconcat(_T0,_T1);
  return 0;
  _TL3C: _T2 = lexbuf;
  _T3 = _T2->refill_buff;
  _T3(lexbuf);
  _T4 = Cyc_suck_restofline_rec(lexbuf,lexstate);
  return _T4;
  { struct Cyc_Lexing_Error_exn_struct * _T7 = _cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));
    _T7->tag = Cyc_Lexing_Error;
    _T7->f1 = _tag_fat("some action didn't return!",sizeof(char),27U);
    _T5 = (struct Cyc_Lexing_Error_exn_struct *)_T7;
  }_T6 = (void *)_T5;
  _throw(_T6);
}
int Cyc_suck_restofline(struct Cyc_Lexing_lexbuf * lexbuf) {
  int _T0;
  _T0 = Cyc_suck_restofline_rec(lexbuf,12);
  return _T0;
}
struct _tuple19 * Cyc_spec_rec(struct Cyc_Lexing_lexbuf * lexbuf,int lexstate) {
  int _T0;
  int _T1;
  struct _tuple19 * _T2;
  struct _fat_ptr _T3;
  int _T4;
  int _T5;
  int _T6;
  int _T7;
  unsigned long _T8;
  struct _fat_ptr _T9;
  int _TA;
  struct _tuple19 * _TB;
  struct _tuple19 * _TC;
  struct Cyc_Int_pa_PrintArg_struct _TD;
  char _TE;
  int _TF;
  struct Cyc___cycFILE * _T10;
  struct _fat_ptr _T11;
  struct _fat_ptr _T12;
  struct Cyc_Lexing_lexbuf * _T13;
  void (* _T14)(struct Cyc_Lexing_lexbuf *);
  struct _tuple19 * _T15;
  struct Cyc_Lexing_Error_exn_struct * _T16;
  void * _T17;
  lexstate = Cyc_lex_engine(lexstate,lexbuf);
  _T0 = lexstate;
  _T1 = (int)_T0;
  switch (_T1) {
  case 0: 
    _T2 = Cyc_spec(lexbuf);
    return _T2;
  case 1: 
    _T3 = Cyc_Lexing_lexeme(lexbuf);
    _T4 = Cyc_Lexing_lexeme_end(lexbuf);
    _T5 = Cyc_Lexing_lexeme_start(lexbuf);
    _T6 = _T4 - _T5;
    _T7 = _T6 - 1;
    _T8 = (unsigned long)_T7;
    _T9 = Cyc_substring(_T3,0,_T8);
    Cyc_current_headerfile = _T9;
    Cyc_current_symbols = 0;
    Cyc_current_user_defs = 0;
    Cyc_current_omit_symbols = 0;
    Cyc_current_cstubs = 0;
    Cyc_current_cycstubs = 0;
    Cyc_current_hstubs = 0;
    Cyc_current_cpp = 0;
    _TL3F: _TA = Cyc_commands(lexbuf);
    if (_TA) { goto _TL40;
    }else { goto _TL41;
    }
    _TL40: goto _TL3F;
    _TL41: Cyc_current_hstubs = Cyc_List_imp_rev(Cyc_current_hstubs);
    Cyc_current_cstubs = Cyc_List_imp_rev(Cyc_current_cstubs);
    Cyc_current_cycstubs = Cyc_List_imp_rev(Cyc_current_cycstubs);
    Cyc_current_cpp = Cyc_List_imp_rev(Cyc_current_cpp);
    { struct _tuple19 * _T18 = _cycalloc(sizeof(struct _tuple19));
      _T18->f0 = Cyc_current_headerfile;
      _T18->f1 = Cyc_current_symbols;
      _T18->f2 = Cyc_current_user_defs;
      _T18->f3 = Cyc_current_omit_symbols;
      _T18->f4 = Cyc_current_hstubs;
      _T18->f5 = Cyc_current_cstubs;
      _T18->f6 = Cyc_current_cycstubs;
      _T18->f7 = Cyc_current_cpp;
      _TB = (struct _tuple19 *)_T18;
    }return _TB;
  case 2: 
    _TC = Cyc_spec(lexbuf);
    return _TC;
  case 3: 
    return 0;
  case 4: 
    { struct Cyc_Int_pa_PrintArg_struct _T18;
      _T18.tag = 1;
      _TE = Cyc_Lexing_lexeme_char(lexbuf,0);
      _TF = (int)_TE;
      _T18.f1 = (unsigned long)_TF;
      _TD = _T18;
    }{ struct Cyc_Int_pa_PrintArg_struct _T18 = _TD;
      void * _T19[1];
      _T19[0] = &_T18;
      _T10 = Cyc_stderr;
      _T11 = _tag_fat("Error in .cys file: expected header file name, found '%c' instead\n",
		      sizeof(char),67U);
      _T12 = _tag_fat(_T19,sizeof(void *),1);
      Cyc_fprintf(_T10,_T11,_T12);
    }return 0;
  default: 
    _T13 = lexbuf;
    _T14 = _T13->refill_buff;
    _T14(lexbuf);
    _T15 = Cyc_spec_rec(lexbuf,lexstate);
    return _T15;
  }
  { struct Cyc_Lexing_Error_exn_struct * _T18 = _cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));
    _T18->tag = Cyc_Lexing_Error;
    _T18->f1 = _tag_fat("some action didn't return!",sizeof(char),27U);
    _T16 = (struct Cyc_Lexing_Error_exn_struct *)_T18;
  }_T17 = (void *)_T16;
  _throw(_T17);
}
struct _tuple19 * Cyc_spec(struct Cyc_Lexing_lexbuf * lexbuf) {
  struct _tuple19 * _T0;
  _T0 = Cyc_spec_rec(lexbuf,13);
  return _T0;
}
int Cyc_commands_rec(struct Cyc_Lexing_lexbuf * lexbuf,int lexstate) {
  int _T0;
  int _T1;
  int _T2;
  int _T3;
  struct Cyc___cycFILE * _T4;
  struct _fat_ptr _T5;
  struct _fat_ptr _T6;
  int _T7;
  struct _tuple17 * _T8;
  struct _fat_ptr _T9;
  struct _tuple17 * _TA;
  struct Cyc_Buffer_t * _TB;
  struct _fat_ptr _TC;
  struct Cyc_List_List * _TD;
  struct _fat_ptr * _TE;
  struct _fat_ptr _TF;
  unsigned long _T10;
  int _T11;
  struct _fat_ptr _T12;
  unsigned char * _T13;
  char * _T14;
  char _T15;
  int _T16;
  int _T17;
  struct _fat_ptr * _T18;
  struct _fat_ptr _T19;
  unsigned char * _T1A;
  char * _T1B;
  char _T1C;
  int _T1D;
  int _T1E;
  struct _fat_ptr * _T1F;
  struct _fat_ptr _T20;
  struct _fat_ptr _T21;
  unsigned char * _T22;
  struct _fat_ptr _T23;
  unsigned char * _T24;
  int _T25;
  int _T26;
  unsigned long _T27;
  int _T28;
  struct _tuple17 * _T29;
  struct _fat_ptr _T2A;
  struct _tuple17 * _T2B;
  struct Cyc_Buffer_t * _T2C;
  struct _fat_ptr _T2D;
  struct Cyc_List_List * _T2E;
  int _T2F;
  struct _tuple17 * _T30;
  struct _fat_ptr _T31;
  struct _tuple17 * _T32;
  struct Cyc_Buffer_t * _T33;
  struct _fat_ptr _T34;
  struct Cyc_List_List * _T35;
  struct _fat_ptr * _T36;
  struct _fat_ptr _T37;
  unsigned long _T38;
  int _T39;
  struct _fat_ptr _T3A;
  unsigned char * _T3B;
  char * _T3C;
  char _T3D;
  int _T3E;
  int _T3F;
  struct _fat_ptr * _T40;
  struct _fat_ptr _T41;
  unsigned char * _T42;
  char * _T43;
  char _T44;
  int _T45;
  int _T46;
  struct _fat_ptr * _T47;
  struct _fat_ptr _T48;
  struct _fat_ptr _T49;
  unsigned char * _T4A;
  struct _fat_ptr _T4B;
  unsigned char * _T4C;
  int _T4D;
  int _T4E;
  unsigned long _T4F;
  int _T50;
  struct _tuple17 * _T51;
  struct _fat_ptr _T52;
  struct _tuple17 * _T53;
  struct Cyc_Buffer_t * _T54;
  struct _fat_ptr _T55;
  struct Cyc_List_List * _T56;
  int _T57;
  struct _tuple17 * _T58;
  struct _fat_ptr _T59;
  struct _tuple17 * _T5A;
  struct Cyc_Buffer_t * _T5B;
  struct _fat_ptr _T5C;
  struct Cyc_List_List * _T5D;
  struct _fat_ptr * _T5E;
  struct _fat_ptr _T5F;
  unsigned long _T60;
  int _T61;
  struct _fat_ptr _T62;
  unsigned char * _T63;
  char * _T64;
  char _T65;
  int _T66;
  int _T67;
  struct _fat_ptr * _T68;
  struct _fat_ptr _T69;
  unsigned char * _T6A;
  char * _T6B;
  char _T6C;
  int _T6D;
  int _T6E;
  struct _fat_ptr * _T6F;
  struct _fat_ptr _T70;
  struct _fat_ptr _T71;
  unsigned char * _T72;
  struct _fat_ptr _T73;
  unsigned char * _T74;
  int _T75;
  int _T76;
  unsigned long _T77;
  int _T78;
  struct _tuple17 * _T79;
  struct _fat_ptr _T7A;
  struct _tuple17 * _T7B;
  struct Cyc_Buffer_t * _T7C;
  struct _fat_ptr _T7D;
  struct Cyc_List_List * _T7E;
  int _T7F;
  struct _fat_ptr * _T80;
  struct Cyc_Buffer_t * _T81;
  struct _fat_ptr _T82;
  struct Cyc_List_List * _T83;
  struct Cyc_Int_pa_PrintArg_struct _T84;
  char _T85;
  int _T86;
  struct Cyc___cycFILE * _T87;
  struct _fat_ptr _T88;
  struct _fat_ptr _T89;
  struct Cyc_Lexing_lexbuf * _T8A;
  void (* _T8B)(struct Cyc_Lexing_lexbuf *);
  int _T8C;
  struct Cyc_Lexing_Error_exn_struct * _T8D;
  void * _T8E;
  lexstate = Cyc_lex_engine(lexstate,lexbuf);
  _T0 = lexstate;
  _T1 = (int)_T0;
  switch (_T1) {
  case 0: 
    return 0;
  case 1: 
    return 0;
  case 2: 
    Cyc_snarfed_symbols = 0;
    _TL43: _T2 = Cyc_snarfsymbols(lexbuf);
    if (_T2) { goto _TL44;
    }else { goto _TL45;
    }
    _TL44: goto _TL43;
    _TL45: Cyc_current_symbols = Cyc_List_append(Cyc_snarfed_symbols,Cyc_current_symbols);
    return 1;
  case 3: 
    Cyc_snarfed_symbols = 0;
    { struct Cyc_List_List * tmp_user_defs = Cyc_current_user_defs;
      _TL46: _T3 = Cyc_snarfsymbols(lexbuf);
      if (_T3) { goto _TL47;
      }else { goto _TL48;
      }
      _TL47: goto _TL46;
      _TL48: if (tmp_user_defs == Cyc_current_user_defs) { goto _TL49;
      }
      _T4 = Cyc_stderr;
      _T5 = _tag_fat("Error in .cys file: got optional definition in omitsymbols\n",
		     sizeof(char),60U);
      _T6 = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T4,_T5,_T6);
      return 0;
      _TL49: Cyc_current_omit_symbols = Cyc_List_append(Cyc_snarfed_symbols,
							Cyc_current_omit_symbols);
      return 1;
    }
  case 4: 
    Cyc_braces_to_match = 1;
    Cyc_specbuf = Cyc_Buffer_create(255U);
    _TL4B: _T7 = Cyc_block(lexbuf);
    if (_T7) { goto _TL4C;
    }else { goto _TL4D;
    }
    _TL4C: goto _TL4B;
    _TL4D: { struct _tuple17 * x;
      x = _cycalloc(sizeof(struct _tuple17));
      _T8 = x;
      _T9 = _tag_fat(0,0,0);
      _T8->f0 = _T9;
      _TA = x;
      _TB = _check_null(Cyc_specbuf);
      _TC = Cyc_Buffer_contents(_TB);
      _TA->f1 = _TC;
      { struct Cyc_List_List * _T8F = _cycalloc(sizeof(struct Cyc_List_List));
	_T8F->hd = x;
	_T8F->tl = Cyc_current_hstubs;
	_TD = (struct Cyc_List_List *)_T8F;
      }Cyc_current_hstubs = _TD;
      return 1;
    }
  case 5: 
    { struct _fat_ptr s = Cyc_Lexing_lexeme(lexbuf);
      _TE = &s;
      _TF = _tag_fat("hstub",sizeof(char),6U);
      _T10 = Cyc_strlen(_TF);
      _T11 = (int)_T10;
      _fat_ptr_inplace_plus(_TE,sizeof(char),_T11);
      _TL4E: _T12 = s;
      _T13 = _check_fat_subscript(_T12,sizeof(char),0U);
      _T14 = (char *)_T13;
      _T15 = *_T14;
      _T16 = (int)_T15;
      _T17 = isspace(_T16);
      if (_T17) { goto _TL4F;
      }else { goto _TL50;
      }
      _TL4F: _T18 = &s;
      _fat_ptr_inplace_plus(_T18,sizeof(char),1);
      goto _TL4E;
      _TL50: { struct _fat_ptr t = s;
	_TL51: _T19 = t;
	_T1A = _check_fat_subscript(_T19,sizeof(char),0U);
	_T1B = (char *)_T1A;
	_T1C = *_T1B;
	_T1D = (int)_T1C;
	_T1E = isspace(_T1D);
	if (_T1E) { goto _TL53;
	}else { goto _TL52;
	}
	_TL52: _T1F = &t;
	_fat_ptr_inplace_plus(_T1F,sizeof(char),1);
	goto _TL51;
	_TL53: _T20 = s;
	_T21 = t;
	_T22 = _T21.curr;
	_T23 = s;
	_T24 = _T23.curr;
	_T25 = _T22 - _T24;
	_T26 = _T25 / sizeof(char);
	_T27 = (unsigned long)_T26;
	{ struct _fat_ptr symbol = Cyc_substring(_T20,0,_T27);
	  Cyc_braces_to_match = 1;
	  Cyc_specbuf = Cyc_Buffer_create(255U);
	  _TL54: _T28 = Cyc_block(lexbuf);
	  if (_T28) { goto _TL55;
	  }else { goto _TL56;
	  }
	  _TL55: goto _TL54;
	  _TL56: { struct _tuple17 * x;
	    x = _cycalloc(sizeof(struct _tuple17));
	    _T29 = x;
	    _T2A = symbol;
	    _T29->f0 = _T2A;
	    _T2B = x;
	    _T2C = _check_null(Cyc_specbuf);
	    _T2D = Cyc_Buffer_contents(_T2C);
	    _T2B->f1 = _T2D;
	    { struct Cyc_List_List * _T8F = _cycalloc(sizeof(struct Cyc_List_List));
	      _T8F->hd = x;
	      _T8F->tl = Cyc_current_hstubs;
	      _T2E = (struct Cyc_List_List *)_T8F;
	    }Cyc_current_hstubs = _T2E;
	    return 1;
	  }
	}
      }
    }
  case 6: 
    Cyc_braces_to_match = 1;
    Cyc_specbuf = Cyc_Buffer_create(255U);
    _TL57: _T2F = Cyc_block(lexbuf);
    if (_T2F) { goto _TL58;
    }else { goto _TL59;
    }
    _TL58: goto _TL57;
    _TL59: { struct _tuple17 * x;
      x = _cycalloc(sizeof(struct _tuple17));
      _T30 = x;
      _T31 = _tag_fat(0,0,0);
      _T30->f0 = _T31;
      _T32 = x;
      _T33 = _check_null(Cyc_specbuf);
      _T34 = Cyc_Buffer_contents(_T33);
      _T32->f1 = _T34;
      { struct Cyc_List_List * _T8F = _cycalloc(sizeof(struct Cyc_List_List));
	_T8F->hd = x;
	_T8F->tl = Cyc_current_cstubs;
	_T35 = (struct Cyc_List_List *)_T8F;
      }Cyc_current_cstubs = _T35;
      return 1;
    }
  case 7: 
    { struct _fat_ptr s = Cyc_Lexing_lexeme(lexbuf);
      _T36 = &s;
      _T37 = _tag_fat("cstub",sizeof(char),6U);
      _T38 = Cyc_strlen(_T37);
      _T39 = (int)_T38;
      _fat_ptr_inplace_plus(_T36,sizeof(char),_T39);
      _TL5A: _T3A = s;
      _T3B = _check_fat_subscript(_T3A,sizeof(char),0U);
      _T3C = (char *)_T3B;
      _T3D = *_T3C;
      _T3E = (int)_T3D;
      _T3F = isspace(_T3E);
      if (_T3F) { goto _TL5B;
      }else { goto _TL5C;
      }
      _TL5B: _T40 = &s;
      _fat_ptr_inplace_plus(_T40,sizeof(char),1);
      goto _TL5A;
      _TL5C: { struct _fat_ptr t = s;
	_TL5D: _T41 = t;
	_T42 = _check_fat_subscript(_T41,sizeof(char),0U);
	_T43 = (char *)_T42;
	_T44 = *_T43;
	_T45 = (int)_T44;
	_T46 = isspace(_T45);
	if (_T46) { goto _TL5F;
	}else { goto _TL5E;
	}
	_TL5E: _T47 = &t;
	_fat_ptr_inplace_plus(_T47,sizeof(char),1);
	goto _TL5D;
	_TL5F: _T48 = s;
	_T49 = t;
	_T4A = _T49.curr;
	_T4B = s;
	_T4C = _T4B.curr;
	_T4D = _T4A - _T4C;
	_T4E = _T4D / sizeof(char);
	_T4F = (unsigned long)_T4E;
	{ struct _fat_ptr symbol = Cyc_substring(_T48,0,_T4F);
	  Cyc_braces_to_match = 1;
	  Cyc_specbuf = Cyc_Buffer_create(255U);
	  _TL60: _T50 = Cyc_block(lexbuf);
	  if (_T50) { goto _TL61;
	  }else { goto _TL62;
	  }
	  _TL61: goto _TL60;
	  _TL62: { struct _tuple17 * x;
	    x = _cycalloc(sizeof(struct _tuple17));
	    _T51 = x;
	    _T52 = symbol;
	    _T51->f0 = _T52;
	    _T53 = x;
	    _T54 = _check_null(Cyc_specbuf);
	    _T55 = Cyc_Buffer_contents(_T54);
	    _T53->f1 = _T55;
	    { struct Cyc_List_List * _T8F = _cycalloc(sizeof(struct Cyc_List_List));
	      _T8F->hd = x;
	      _T8F->tl = Cyc_current_cstubs;
	      _T56 = (struct Cyc_List_List *)_T8F;
	    }Cyc_current_cstubs = _T56;
	    return 1;
	  }
	}
      }
    }
  case 8: 
    Cyc_braces_to_match = 1;
    Cyc_specbuf = Cyc_Buffer_create(255U);
    _TL63: _T57 = Cyc_block(lexbuf);
    if (_T57) { goto _TL64;
    }else { goto _TL65;
    }
    _TL64: goto _TL63;
    _TL65: { struct _tuple17 * x;
      x = _cycalloc(sizeof(struct _tuple17));
      _T58 = x;
      _T59 = _tag_fat(0,0,0);
      _T58->f0 = _T59;
      _T5A = x;
      _T5B = _check_null(Cyc_specbuf);
      _T5C = Cyc_Buffer_contents(_T5B);
      _T5A->f1 = _T5C;
      { struct Cyc_List_List * _T8F = _cycalloc(sizeof(struct Cyc_List_List));
	_T8F->hd = x;
	_T8F->tl = Cyc_current_cycstubs;
	_T5D = (struct Cyc_List_List *)_T8F;
      }Cyc_current_cycstubs = _T5D;
      return 1;
    }
  case 9: 
    { struct _fat_ptr s = Cyc_Lexing_lexeme(lexbuf);
      _T5E = &s;
      _T5F = _tag_fat("cycstub",sizeof(char),8U);
      _T60 = Cyc_strlen(_T5F);
      _T61 = (int)_T60;
      _fat_ptr_inplace_plus(_T5E,sizeof(char),_T61);
      _TL66: _T62 = s;
      _T63 = _check_fat_subscript(_T62,sizeof(char),0U);
      _T64 = (char *)_T63;
      _T65 = *_T64;
      _T66 = (int)_T65;
      _T67 = isspace(_T66);
      if (_T67) { goto _TL67;
      }else { goto _TL68;
      }
      _TL67: _T68 = &s;
      _fat_ptr_inplace_plus(_T68,sizeof(char),1);
      goto _TL66;
      _TL68: { struct _fat_ptr t = s;
	_TL69: _T69 = t;
	_T6A = _check_fat_subscript(_T69,sizeof(char),0U);
	_T6B = (char *)_T6A;
	_T6C = *_T6B;
	_T6D = (int)_T6C;
	_T6E = isspace(_T6D);
	if (_T6E) { goto _TL6B;
	}else { goto _TL6A;
	}
	_TL6A: _T6F = &t;
	_fat_ptr_inplace_plus(_T6F,sizeof(char),1);
	goto _TL69;
	_TL6B: _T70 = s;
	_T71 = t;
	_T72 = _T71.curr;
	_T73 = s;
	_T74 = _T73.curr;
	_T75 = _T72 - _T74;
	_T76 = _T75 / sizeof(char);
	_T77 = (unsigned long)_T76;
	{ struct _fat_ptr symbol = Cyc_substring(_T70,0,_T77);
	  Cyc_braces_to_match = 1;
	  Cyc_specbuf = Cyc_Buffer_create(255U);
	  _TL6C: _T78 = Cyc_block(lexbuf);
	  if (_T78) { goto _TL6D;
	  }else { goto _TL6E;
	  }
	  _TL6D: goto _TL6C;
	  _TL6E: { struct _tuple17 * x;
	    x = _cycalloc(sizeof(struct _tuple17));
	    _T79 = x;
	    _T7A = symbol;
	    _T79->f0 = _T7A;
	    _T7B = x;
	    _T7C = _check_null(Cyc_specbuf);
	    _T7D = Cyc_Buffer_contents(_T7C);
	    _T7B->f1 = _T7D;
	    { struct Cyc_List_List * _T8F = _cycalloc(sizeof(struct Cyc_List_List));
	      _T8F->hd = x;
	      _T8F->tl = Cyc_current_cycstubs;
	      _T7E = (struct Cyc_List_List *)_T8F;
	    }Cyc_current_cycstubs = _T7E;
	    return 1;
	  }
	}
      }
    }
  case 10: 
    Cyc_braces_to_match = 1;
    Cyc_specbuf = Cyc_Buffer_create(255U);
    _TL6F: _T7F = Cyc_block(lexbuf);
    if (_T7F) { goto _TL70;
    }else { goto _TL71;
    }
    _TL70: goto _TL6F;
    _TL71: { struct _fat_ptr * x;
      x = _cycalloc(sizeof(struct _fat_ptr));
      _T80 = x;
      _T81 = _check_null(Cyc_specbuf);
      _T82 = Cyc_Buffer_contents(_T81);
      *_T80 = _T82;
      { struct Cyc_List_List * _T8F = _cycalloc(sizeof(struct Cyc_List_List));
	_T8F->hd = x;
	_T8F->tl = Cyc_current_cpp;
	_T83 = (struct Cyc_List_List *)_T8F;
      }Cyc_current_cpp = _T83;
      return 1;
    }
  case 11: 
    return 1;
  case 12: 
    return 1;
  case 13: 
    { struct Cyc_Int_pa_PrintArg_struct _T8F;
      _T8F.tag = 1;
      _T85 = Cyc_Lexing_lexeme_char(lexbuf,0);
      _T86 = (int)_T85;
      _T8F.f1 = (unsigned long)_T86;
      _T84 = _T8F;
    }{ struct Cyc_Int_pa_PrintArg_struct _T8F = _T84;
      void * _T90[1];
      _T90[0] = &_T8F;
      _T87 = Cyc_stderr;
      _T88 = _tag_fat("Error in .cys file: expected command, found '%c' instead\n",
		      sizeof(char),58U);
      _T89 = _tag_fat(_T90,sizeof(void *),1);
      Cyc_fprintf(_T87,_T88,_T89);
    }return 0;
  default: 
    _T8A = lexbuf;
    _T8B = _T8A->refill_buff;
    _T8B(lexbuf);
    _T8C = Cyc_commands_rec(lexbuf,lexstate);
    return _T8C;
  }
  { struct Cyc_Lexing_Error_exn_struct * _T8F = _cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));
    _T8F->tag = Cyc_Lexing_Error;
    _T8F->f1 = _tag_fat("some action didn't return!",sizeof(char),27U);
    _T8D = (struct Cyc_Lexing_Error_exn_struct *)_T8F;
  }_T8E = (void *)_T8D;
  _throw(_T8E);
}
int Cyc_commands(struct Cyc_Lexing_lexbuf * lexbuf) {
  int _T0;
  _T0 = Cyc_commands_rec(lexbuf,14);
  return _T0;
}
int Cyc_snarfsymbols_rec(struct Cyc_Lexing_lexbuf * lexbuf,int lexstate) {
  int _T0;
  int _T1;
  struct Cyc_List_List * _T2;
  struct _fat_ptr * _T3;
  struct _fat_ptr _T4;
  struct _fat_ptr _T5;
  unsigned char * _T6;
  char * _T7;
  char _T8;
  int _T9;
  int _TA;
  struct _fat_ptr * _TB;
  struct _fat_ptr _TC;
  struct _fat_ptr _TD;
  unsigned char * _TE;
  struct _fat_ptr _TF;
  unsigned char * _T10;
  int _T11;
  int _T12;
  unsigned long _T13;
  int _T14;
  struct _tuple18 * _T15;
  struct _fat_ptr * _T16;
  struct _tuple18 * _T17;
  struct _fat_ptr * _T18;
  struct Cyc_Buffer_t * _T19;
  struct _fat_ptr _T1A;
  struct Cyc_List_List * _T1B;
  struct _fat_ptr * _T1C;
  struct _fat_ptr _T1D;
  struct Cyc_List_List * _T1E;
  struct Cyc___cycFILE * _T1F;
  struct _fat_ptr _T20;
  struct _fat_ptr _T21;
  struct Cyc_Int_pa_PrintArg_struct _T22;
  char _T23;
  int _T24;
  struct Cyc___cycFILE * _T25;
  struct _fat_ptr _T26;
  struct _fat_ptr _T27;
  struct Cyc_Lexing_lexbuf * _T28;
  void (* _T29)(struct Cyc_Lexing_lexbuf *);
  int _T2A;
  struct Cyc_Lexing_Error_exn_struct * _T2B;
  void * _T2C;
  lexstate = Cyc_lex_engine(lexstate,lexbuf);
  _T0 = lexstate;
  _T1 = (int)_T0;
  switch (_T1) {
  case 0: 
    { struct Cyc_List_List * _T2D = _cycalloc(sizeof(struct Cyc_List_List));
      { struct _fat_ptr * _T2E = _cycalloc(sizeof(struct _fat_ptr));
	_T4 = Cyc_Lexing_lexeme(lexbuf);
	*_T2E = _T4;
	_T3 = (struct _fat_ptr *)_T2E;
      }_T2D->hd = _T3;
      _T2D->tl = Cyc_snarfed_symbols;
      _T2 = (struct Cyc_List_List *)_T2D;
    }Cyc_snarfed_symbols = _T2;
    return 1;
  case 1: 
    { struct _fat_ptr s = Cyc_Lexing_lexeme(lexbuf);
      struct _fat_ptr t = s;
      _TL73: _T5 = t;
      _T6 = _check_fat_subscript(_T5,sizeof(char),0U);
      _T7 = (char *)_T6;
      _T8 = *_T7;
      _T9 = (int)_T8;
      _TA = isspace(_T9);
      if (_TA) { goto _TL75;
      }else { goto _TL74;
      }
      _TL74: _TB = &t;
      _fat_ptr_inplace_plus(_TB,sizeof(char),1);
      goto _TL73;
      _TL75: _TC = s;
      _TD = t;
      _TE = _TD.curr;
      _TF = s;
      _T10 = _TF.curr;
      _T11 = _TE - _T10;
      _T12 = _T11 / sizeof(char);
      _T13 = (unsigned long)_T12;
      Cyc_current_symbol = Cyc_substring(_TC,0,_T13);
      Cyc_rename_current_symbol = 1;
      Cyc_braces_to_match = 1;
      Cyc_specbuf = Cyc_Buffer_create(255U);
      _TL76: _T14 = Cyc_block(lexbuf);
      if (_T14) { goto _TL77;
      }else { goto _TL78;
      }
      _TL77: goto _TL76;
      _TL78: Cyc_rename_current_symbol = 0;
      { struct _tuple18 * user_def;
	user_def = _cycalloc(sizeof(struct _tuple18));
	_T15 = user_def;
	{ struct _fat_ptr * _T2D = _cycalloc(sizeof(struct _fat_ptr));
	  *_T2D = Cyc_current_symbol;
	  _T16 = (struct _fat_ptr *)_T2D;
	}_T15->f0 = _T16;
	_T17 = user_def;
	{ struct _fat_ptr * _T2D = _cycalloc(sizeof(struct _fat_ptr));
	  _T19 = _check_null(Cyc_specbuf);
	  _T1A = Cyc_Buffer_contents(_T19);
	  *_T2D = _T1A;
	  _T18 = (struct _fat_ptr *)_T2D;
	}_T17->f1 = _T18;
	{ struct Cyc_List_List * _T2D = _cycalloc(sizeof(struct Cyc_List_List));
	  { struct _fat_ptr * _T2E = _cycalloc(sizeof(struct _fat_ptr));
	    _T1D = Cyc_current_symbol;
	    *_T2E = _T1D;
	    _T1C = (struct _fat_ptr *)_T2E;
	  }_T2D->hd = _T1C;
	  _T2D->tl = Cyc_snarfed_symbols;
	  _T1B = (struct Cyc_List_List *)_T2D;
	}Cyc_snarfed_symbols = _T1B;
	{ struct Cyc_List_List * _T2D = _cycalloc(sizeof(struct Cyc_List_List));
	  _T2D->hd = user_def;
	  _T2D->tl = Cyc_current_user_defs;
	  _T1E = (struct Cyc_List_List *)_T2D;
	}Cyc_current_user_defs = _T1E;
	return 1;
      }
    }
  case 2: 
    return 1;
  case 3: 
    return 0;
  case 4: 
    _T1F = Cyc_stderr;
    _T20 = _tag_fat("Error in .cys file: unexpected end-of-file\n",sizeof(char),
		    44U);
    _T21 = _tag_fat(0U,sizeof(void *),0);
    Cyc_fprintf(_T1F,_T20,_T21);
    return 0;
  case 5: 
    { struct Cyc_Int_pa_PrintArg_struct _T2D;
      _T2D.tag = 1;
      _T23 = Cyc_Lexing_lexeme_char(lexbuf,0);
      _T24 = (int)_T23;
      _T2D.f1 = (unsigned long)_T24;
      _T22 = _T2D;
    }{ struct Cyc_Int_pa_PrintArg_struct _T2D = _T22;
      void * _T2E[1];
      _T2E[0] = &_T2D;
      _T25 = Cyc_stderr;
      _T26 = _tag_fat("Error in .cys file: expected symbol, found '%c' instead\n",
		      sizeof(char),57U);
      _T27 = _tag_fat(_T2E,sizeof(void *),1);
      Cyc_fprintf(_T25,_T26,_T27);
    }return 0;
  default: 
    _T28 = lexbuf;
    _T29 = _T28->refill_buff;
    _T29(lexbuf);
    _T2A = Cyc_snarfsymbols_rec(lexbuf,lexstate);
    return _T2A;
  }
  { struct Cyc_Lexing_Error_exn_struct * _T2D = _cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));
    _T2D->tag = Cyc_Lexing_Error;
    _T2D->f1 = _tag_fat("some action didn't return!",sizeof(char),27U);
    _T2B = (struct Cyc_Lexing_Error_exn_struct *)_T2D;
  }_T2C = (void *)_T2B;
  _throw(_T2C);
}
int Cyc_snarfsymbols(struct Cyc_Lexing_lexbuf * lexbuf) {
  int _T0;
  _T0 = Cyc_snarfsymbols_rec(lexbuf,15);
  return _T0;
}
int Cyc_block_rec(struct Cyc_Lexing_lexbuf * lexbuf,int lexstate) {
  int _T0;
  int _T1;
  struct _fat_ptr _T2;
  struct _fat_ptr _T3;
  struct Cyc_Buffer_t * _T4;
  struct Cyc_Buffer_t * _T5;
  struct Cyc_Buffer_t * _T6;
  int _T7;
  struct Cyc_Buffer_t * _T8;
  struct _fat_ptr _T9;
  int _TA;
  struct Cyc_Buffer_t * _TB;
  struct _fat_ptr _TC;
  struct _fat_ptr _TD;
  long _TE;
  int _TF;
  struct Cyc_Buffer_t * _T10;
  struct _fat_ptr * _T11;
  struct _fat_ptr * _T12;
  struct _fat_ptr _T13;
  struct Cyc_Buffer_t * _T14;
  struct _fat_ptr _T15;
  struct Cyc_Buffer_t * _T16;
  char _T17;
  struct Cyc_Lexing_lexbuf * _T18;
  void (* _T19)(struct Cyc_Lexing_lexbuf *);
  int _T1A;
  struct Cyc_Lexing_Error_exn_struct * _T1B;
  void * _T1C;
  lexstate = Cyc_lex_engine(lexstate,lexbuf);
  _T0 = lexstate;
  _T1 = (int)_T0;
  switch (_T1) {
  case 0: 
    _T2 = _tag_fat("Warning: unclosed brace\n",sizeof(char),25U);
    _T3 = _tag_fat(0U,sizeof(void *),0);
    Cyc_log(_T2,_T3);
    return 0;
  case 1: 
    if (Cyc_braces_to_match != 1) { goto _TL7A;
    }
    return 0;
    _TL7A: Cyc_braces_to_match = Cyc_braces_to_match + -1;
    _T4 = _check_null(Cyc_specbuf);
    Cyc_Buffer_add_char(_T4,'}');
    return 1;
  case 2: 
    Cyc_braces_to_match = Cyc_braces_to_match + 1;
    _T5 = _check_null(Cyc_specbuf);
    Cyc_Buffer_add_char(_T5,'{');
    return 1;
  case 3: 
    _T6 = _check_null(Cyc_specbuf);
    Cyc_Buffer_add_char(_T6,'"');
    _TL7C: _T7 = Cyc_block_string(lexbuf);
    if (_T7) { goto _TL7D;
    }else { goto _TL7E;
    }
    _TL7D: goto _TL7C;
    _TL7E: return 1;
  case 4: 
    _T8 = _check_null(Cyc_specbuf);
    _T9 = _tag_fat("/*",sizeof(char),3U);
    Cyc_Buffer_add_string(_T8,_T9);
    _TL7F: _TA = Cyc_block_comment(lexbuf);
    if (_TA) { goto _TL80;
    }else { goto _TL81;
    }
    _TL80: goto _TL7F;
    _TL81: return 1;
  case 5: 
    _TB = _check_null(Cyc_specbuf);
    _TC = Cyc_Lexing_lexeme(lexbuf);
    Cyc_Buffer_add_string(_TB,_TC);
    return 1;
  case 6: 
    _TD = Cyc_Lexing_lexeme(lexbuf);
    { struct _fat_ptr symbol = _TD;
      _TE = Cyc_rename_current_symbol;
      if (! _TE) { goto _TL82;
      }
      _TF = Cyc_strcmp(symbol,Cyc_current_symbol);
      if (_TF) { goto _TL82;
      }else { goto _TL84;
      }
      _TL84: _T10 = _check_null(Cyc_specbuf);
      { struct _fat_ptr * _T1D = _cycalloc(sizeof(struct _fat_ptr));
	*_T1D = symbol;
	_T11 = (struct _fat_ptr *)_T1D;
      }_T12 = Cyc_add_user_prefix(_T11);
      _T13 = *_T12;
      Cyc_Buffer_add_string(_T10,_T13);
      goto _TL83;
      _TL82: _T14 = _check_null(Cyc_specbuf);
      _T15 = symbol;
      Cyc_Buffer_add_string(_T14,_T15);
      _TL83: return 1;
    }
  case 7: 
    _T16 = _check_null(Cyc_specbuf);
    _T17 = Cyc_Lexing_lexeme_char(lexbuf,0);
    Cyc_Buffer_add_char(_T16,_T17);
    return 1;
  default: 
    _T18 = lexbuf;
    _T19 = _T18->refill_buff;
    _T19(lexbuf);
    _T1A = Cyc_block_rec(lexbuf,lexstate);
    return _T1A;
  }
  { struct Cyc_Lexing_Error_exn_struct * _T1D = _cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));
    _T1D->tag = Cyc_Lexing_Error;
    _T1D->f1 = _tag_fat("some action didn't return!",sizeof(char),27U);
    _T1B = (struct Cyc_Lexing_Error_exn_struct *)_T1D;
  }_T1C = (void *)_T1B;
  _throw(_T1C);
}
int Cyc_block(struct Cyc_Lexing_lexbuf * lexbuf) {
  int _T0;
  _T0 = Cyc_block_rec(lexbuf,16);
  return _T0;
}
int Cyc_block_string_rec(struct Cyc_Lexing_lexbuf * lexbuf,int lexstate) {
  int _T0;
  int _T1;
  struct _fat_ptr _T2;
  struct _fat_ptr _T3;
  struct Cyc_Buffer_t * _T4;
  struct _fat_ptr _T5;
  struct _fat_ptr _T6;
  struct Cyc_Buffer_t * _T7;
  struct _fat_ptr _T8;
  struct Cyc_Buffer_t * _T9;
  struct _fat_ptr _TA;
  struct Cyc_Buffer_t * _TB;
  struct _fat_ptr _TC;
  struct Cyc_Buffer_t * _TD;
  struct _fat_ptr _TE;
  struct Cyc_Buffer_t * _TF;
  struct _fat_ptr _T10;
  struct Cyc_Buffer_t * _T11;
  struct _fat_ptr _T12;
  struct Cyc_Buffer_t * _T13;
  struct _fat_ptr _T14;
  struct Cyc_Lexing_lexbuf * _T15;
  void (* _T16)(struct Cyc_Lexing_lexbuf *);
  int _T17;
  struct Cyc_Lexing_Error_exn_struct * _T18;
  void * _T19;
  lexstate = Cyc_lex_engine(lexstate,lexbuf);
  _T0 = lexstate;
  _T1 = (int)_T0;
  switch (_T1) {
  case 0: 
    _T2 = _tag_fat("Warning: unclosed string\n",sizeof(char),26U);
    _T3 = _tag_fat(0U,sizeof(void *),0);
    Cyc_log(_T2,_T3);
    return 0;
  case 1: 
    _T4 = _check_null(Cyc_specbuf);
    Cyc_Buffer_add_char(_T4,'"');
    return 0;
  case 2: 
    _T5 = _tag_fat("Warning: unclosed string\n",sizeof(char),26U);
    _T6 = _tag_fat(0U,sizeof(void *),0);
    Cyc_log(_T5,_T6);
    _T7 = _check_null(Cyc_specbuf);
    _T8 = Cyc_Lexing_lexeme(lexbuf);
    Cyc_Buffer_add_string(_T7,_T8);
    return 1;
  case 3: 
    _T9 = _check_null(Cyc_specbuf);
    _TA = Cyc_Lexing_lexeme(lexbuf);
    Cyc_Buffer_add_string(_T9,_TA);
    return 1;
  case 4: 
    _TB = _check_null(Cyc_specbuf);
    _TC = Cyc_Lexing_lexeme(lexbuf);
    Cyc_Buffer_add_string(_TB,_TC);
    return 1;
  case 5: 
    _TD = _check_null(Cyc_specbuf);
    _TE = Cyc_Lexing_lexeme(lexbuf);
    Cyc_Buffer_add_string(_TD,_TE);
    return 1;
  case 6: 
    _TF = _check_null(Cyc_specbuf);
    _T10 = Cyc_Lexing_lexeme(lexbuf);
    Cyc_Buffer_add_string(_TF,_T10);
    return 1;
  case 7: 
    _T11 = _check_null(Cyc_specbuf);
    _T12 = Cyc_Lexing_lexeme(lexbuf);
    Cyc_Buffer_add_string(_T11,_T12);
    return 1;
  case 8: 
    _T13 = _check_null(Cyc_specbuf);
    _T14 = Cyc_Lexing_lexeme(lexbuf);
    Cyc_Buffer_add_string(_T13,_T14);
    return 1;
  default: 
    _T15 = lexbuf;
    _T16 = _T15->refill_buff;
    _T16(lexbuf);
    _T17 = Cyc_block_string_rec(lexbuf,lexstate);
    return _T17;
  }
  { struct Cyc_Lexing_Error_exn_struct * _T1A = _cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));
    _T1A->tag = Cyc_Lexing_Error;
    _T1A->f1 = _tag_fat("some action didn't return!",sizeof(char),27U);
    _T18 = (struct Cyc_Lexing_Error_exn_struct *)_T1A;
  }_T19 = (void *)_T18;
  _throw(_T19);
}
int Cyc_block_string(struct Cyc_Lexing_lexbuf * lexbuf) {
  int _T0;
  _T0 = Cyc_block_string_rec(lexbuf,17);
  return _T0;
}
int Cyc_block_comment_rec(struct Cyc_Lexing_lexbuf * lexbuf,int lexstate) {
  int _T0;
  int _T1;
  struct _fat_ptr _T2;
  struct _fat_ptr _T3;
  struct Cyc_Buffer_t * _T4;
  struct _fat_ptr _T5;
  struct Cyc_Buffer_t * _T6;
  struct _fat_ptr _T7;
  struct Cyc_Lexing_lexbuf * _T8;
  void (* _T9)(struct Cyc_Lexing_lexbuf *);
  int _TA;
  struct Cyc_Lexing_Error_exn_struct * _TB;
  void * _TC;
  lexstate = Cyc_lex_engine(lexstate,lexbuf);
  _T0 = lexstate;
  _T1 = (int)_T0;
  switch (_T1) {
  case 0: 
    _T2 = _tag_fat("Warning: unclosed comment\n",sizeof(char),27U);
    _T3 = _tag_fat(0U,sizeof(void *),0);
    Cyc_log(_T2,_T3);
    return 0;
  case 1: 
    _T4 = _check_null(Cyc_specbuf);
    _T5 = _tag_fat("*/",sizeof(char),3U);
    Cyc_Buffer_add_string(_T4,_T5);
    return 0;
  case 2: 
    _T6 = _check_null(Cyc_specbuf);
    _T7 = Cyc_Lexing_lexeme(lexbuf);
    Cyc_Buffer_add_string(_T6,_T7);
    return 1;
  default: 
    _T8 = lexbuf;
    _T9 = _T8->refill_buff;
    _T9(lexbuf);
    _TA = Cyc_block_comment_rec(lexbuf,lexstate);
    return _TA;
  }
  { struct Cyc_Lexing_Error_exn_struct * _TD = _cycalloc(sizeof(struct Cyc_Lexing_Error_exn_struct));
    _TD->tag = Cyc_Lexing_Error;
    _TD->f1 = _tag_fat("some action didn't return!",sizeof(char),27U);
    _TB = (struct Cyc_Lexing_Error_exn_struct *)_TD;
  }_TC = (void *)_TB;
  _throw(_TC);
}
int Cyc_block_comment(struct Cyc_Lexing_lexbuf * lexbuf) {
  int _T0;
  _T0 = Cyc_block_comment_rec(lexbuf,18);
  return _T0;
}
extern void Cyc_scan_type(void *,struct Cyc_Hashtable_Table *);
 struct _tuple20 {
  struct Cyc_List_List * f0;
  struct Cyc_Absyn_Exp * f1;
};
void Cyc_scan_exp(struct Cyc_Absyn_Exp * e,struct Cyc_Hashtable_Table * dep) {
  struct Cyc_Absyn_Exp * _T0;
  int * _T1;
  unsigned int _T2;
  void * _T3;
  struct _tuple1 * _T4;
  struct _tuple1 _T5;
  struct Cyc_List_List * _T6;
  void * _T7;
  struct Cyc_Absyn_Exp * _T8;
  struct Cyc_Hashtable_Table * _T9;
  struct Cyc_List_List * _TA;
  struct Cyc_List_List * _TB;
  void * _TC;
  struct Cyc_Absyn_Exp * _TD;
  struct Cyc_Hashtable_Table * _TE;
  struct Cyc_List_List * _TF;
  void * _T10;
  struct Cyc_Absyn_MallocInfo _T11;
  struct Cyc_Absyn_MallocInfo _T12;
  struct Cyc_Absyn_MallocInfo _T13;
  struct Cyc_Absyn_MallocInfo _T14;
  struct Cyc_Absyn_MallocInfo _T15;
  void * * _T16;
  void * _T17;
  struct Cyc_Hashtable_Table * _T18;
  void * _T19;
  void * _T1A;
  void * _T1B;
  struct Cyc_List_List * _T1C;
  struct Cyc_List_List * _T1D;
  void * _T1E;
  struct Cyc_List_List * _T1F;
  struct Cyc___cycFILE * _T20;
  struct _fat_ptr _T21;
  struct _fat_ptr _T22;
  struct Cyc___cycFILE * _T23;
  struct _fat_ptr _T24;
  struct _fat_ptr _T25;
  struct Cyc___cycFILE * _T26;
  struct _fat_ptr _T27;
  struct _fat_ptr _T28;
  struct Cyc___cycFILE * _T29;
  struct _fat_ptr _T2A;
  struct _fat_ptr _T2B;
  struct Cyc___cycFILE * _T2C;
  struct _fat_ptr _T2D;
  struct _fat_ptr _T2E;
  struct Cyc___cycFILE * _T2F;
  struct _fat_ptr _T30;
  struct _fat_ptr _T31;
  struct Cyc___cycFILE * _T32;
  struct _fat_ptr _T33;
  struct _fat_ptr _T34;
  struct Cyc___cycFILE * _T35;
  struct _fat_ptr _T36;
  struct _fat_ptr _T37;
  struct Cyc___cycFILE * _T38;
  struct _fat_ptr _T39;
  struct _fat_ptr _T3A;
  struct Cyc___cycFILE * _T3B;
  struct _fat_ptr _T3C;
  struct _fat_ptr _T3D;
  struct Cyc___cycFILE * _T3E;
  struct _fat_ptr _T3F;
  struct _fat_ptr _T40;
  struct Cyc___cycFILE * _T41;
  struct _fat_ptr _T42;
  struct _fat_ptr _T43;
  struct Cyc___cycFILE * _T44;
  struct _fat_ptr _T45;
  struct _fat_ptr _T46;
  struct Cyc___cycFILE * _T47;
  struct _fat_ptr _T48;
  struct _fat_ptr _T49;
  struct Cyc___cycFILE * _T4A;
  struct _fat_ptr _T4B;
  struct _fat_ptr _T4C;
  struct Cyc___cycFILE * _T4D;
  struct _fat_ptr _T4E;
  struct _fat_ptr _T4F;
  struct Cyc___cycFILE * _T50;
  struct _fat_ptr _T51;
  struct _fat_ptr _T52;
  struct Cyc___cycFILE * _T53;
  struct _fat_ptr _T54;
  struct _fat_ptr _T55;
  _T0 = _check_null(e);
  { void * _T56 = _T0->r;
    struct _fat_ptr * _T57;
    void * * _T58;
    enum Cyc_Absyn_MallocKind _T59;
    struct Cyc_List_List * _T5A;
    struct Cyc_Absyn_Exp * _T5B;
    struct Cyc_Absyn_Exp * _T5C;
    void * _T5D;
    _T1 = (int *)_T56;
    _T2 = *_T1;
    switch (_T2) {
    case 1: 
      { struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct * _T5E = (struct Cyc_Absyn_Var_e_Absyn_Raw_exp_struct *)_T56;
	_T3 = _T5E->f1;
	_T5D = (void *)_T3;
      }{ void * b = _T5D;
	_T4 = Cyc_Absyn_binding2qvar(b);
	_T5 = *_T4;
	{ struct _fat_ptr * v = _T5.f1;
	  Cyc_add_target(v);
	  return;
	}
      }
    case 3: 
      { struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct * _T5E = (struct Cyc_Absyn_Primop_e_Absyn_Raw_exp_struct *)_T56;
	_T5D = _T5E->f2;
      }{ struct Cyc_List_List * x = _T5D;
	_TL8B: if (x != 0) { goto _TL89;
	}else { goto _TL8A;
	}
	_TL89: _T6 = x;
	_T7 = _T6->hd;
	_T8 = (struct Cyc_Absyn_Exp *)_T7;
	_T9 = dep;
	Cyc_scan_exp(_T8,_T9);
	_TA = x;
	x = _TA->tl;
	goto _TL8B;
	_TL8A: return;
      }
    case 23: 
      { struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct * _T5E = (struct Cyc_Absyn_Subscript_e_Absyn_Raw_exp_struct *)_T56;
	_T5D = _T5E->f1;
	_T5C = _T5E->f2;
      }{ struct Cyc_Absyn_Exp * e1 = _T5D;
	struct Cyc_Absyn_Exp * e2 = _T5C;
	_T5D = e1;
	_T5C = e2;
	goto _LL8;
      }
    case 9: 
      { struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct * _T5E = (struct Cyc_Absyn_SeqExp_e_Absyn_Raw_exp_struct *)_T56;
	_T5D = _T5E->f1;
	_T5C = _T5E->f2;
      }_LL8: { struct Cyc_Absyn_Exp * e1 = _T5D;
	struct Cyc_Absyn_Exp * e2 = _T5C;
	_T5D = e1;
	_T5C = e2;
	goto _LLA;
      }
    case 4: 
      { struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct * _T5E = (struct Cyc_Absyn_AssignOp_e_Absyn_Raw_exp_struct *)_T56;
	_T5D = _T5E->f1;
	_T5C = _T5E->f3;
      }_LLA: { struct Cyc_Absyn_Exp * e1 = _T5D;
	struct Cyc_Absyn_Exp * e2 = _T5C;
	Cyc_scan_exp(e1,dep);
	Cyc_scan_exp(e2,dep);
	return;
      }
    case 40: 
      { struct Cyc_Absyn_Extension_e_Absyn_Raw_exp_struct * _T5E = (struct Cyc_Absyn_Extension_e_Absyn_Raw_exp_struct *)_T56;
	_T5D = _T5E->f1;
      }{ struct Cyc_Absyn_Exp * e1 = _T5D;
	_T5D = e1;
	goto _LLE;
      }
    case 20: 
      { struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct * _T5E = (struct Cyc_Absyn_Deref_e_Absyn_Raw_exp_struct *)_T56;
	_T5D = _T5E->f1;
      }_LLE: { struct Cyc_Absyn_Exp * e1 = _T5D;
	_T5D = e1;
	goto _LL10;
      }
    case 18: 
      { struct Cyc_Absyn_Sizeofexp_e_Absyn_Raw_exp_struct * _T5E = (struct Cyc_Absyn_Sizeofexp_e_Absyn_Raw_exp_struct *)_T56;
	_T5D = _T5E->f1;
      }_LL10: { struct Cyc_Absyn_Exp * e1 = _T5D;
	_T5D = e1;
	goto _LL12;
      }
    case 15: 
      { struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct * _T5E = (struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct *)_T56;
	_T5D = _T5E->f1;
      }_LL12: { struct Cyc_Absyn_Exp * e1 = _T5D;
	_T5D = e1;
	goto _LL14;
      }
    case 5: 
      { struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct * _T5E = (struct Cyc_Absyn_Increment_e_Absyn_Raw_exp_struct *)_T56;
	_T5D = _T5E->f1;
      }_LL14: { struct Cyc_Absyn_Exp * e1 = _T5D;
	Cyc_scan_exp(e1,dep);
	return;
      }
    case 6: 
      { struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct * _T5E = (struct Cyc_Absyn_Conditional_e_Absyn_Raw_exp_struct *)_T56;
	_T5D = _T5E->f1;
	_T5C = _T5E->f2;
	_T5B = _T5E->f3;
      }{ struct Cyc_Absyn_Exp * e1 = _T5D;
	struct Cyc_Absyn_Exp * e2 = _T5C;
	struct Cyc_Absyn_Exp * e3 = _T5B;
	Cyc_scan_exp(e1,dep);
	Cyc_scan_exp(e2,dep);
	Cyc_scan_exp(e3,dep);
	return;
      }
    case 7: 
      { struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct * _T5E = (struct Cyc_Absyn_And_e_Absyn_Raw_exp_struct *)_T56;
	_T5D = _T5E->f1;
	_T5C = _T5E->f2;
      }{ struct Cyc_Absyn_Exp * e1 = _T5D;
	struct Cyc_Absyn_Exp * e2 = _T5C;
	_T5D = e1;
	_T5C = e2;
	goto _LL1A;
      }
    case 8: 
      { struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct * _T5E = (struct Cyc_Absyn_Or_e_Absyn_Raw_exp_struct *)_T56;
	_T5D = _T5E->f1;
	_T5C = _T5E->f2;
      }_LL1A: { struct Cyc_Absyn_Exp * e1 = _T5D;
	struct Cyc_Absyn_Exp * e2 = _T5C;
	Cyc_scan_exp(e1,dep);
	Cyc_scan_exp(e2,dep);
	return;
      }
    case 10: 
      { struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct * _T5E = (struct Cyc_Absyn_FnCall_e_Absyn_Raw_exp_struct *)_T56;
	_T5D = _T5E->f1;
	_T5A = _T5E->f2;
      }{ struct Cyc_Absyn_Exp * e1 = _T5D;
	struct Cyc_List_List * x = _T5A;
	Cyc_scan_exp(e1,dep);
	_TL8F: if (x != 0) { goto _TL8D;
	}else { goto _TL8E;
	}
	_TL8D: _TB = x;
	_TC = _TB->hd;
	_TD = (struct Cyc_Absyn_Exp *)_TC;
	_TE = dep;
	Cyc_scan_exp(_TD,_TE);
	_TF = x;
	x = _TF->tl;
	goto _TL8F;
	_TL8E: return;
      }
    case 14: 
      { struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct * _T5E = (struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct *)_T56;
	_T10 = _T5E->f1;
	_T5D = (void *)_T10;
	_T5C = _T5E->f2;
      }{ void * t1 = _T5D;
	struct Cyc_Absyn_Exp * e1 = _T5C;
	Cyc_scan_type(t1,dep);
	Cyc_scan_exp(e1,dep);
	return;
      }
    case 33: 
      { struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct * _T5E = (struct Cyc_Absyn_Malloc_e_Absyn_Raw_exp_struct *)_T56;
	_T11 = _T5E->f1;
	_T59 = _T11.mknd;
	_T12 = _T5E->f1;
	_T5D = _T12.rgn;
	_T13 = _T5E->f1;
	_T5C = _T13.aqual;
	_T14 = _T5E->f1;
	_T58 = _T14.elt_type;
	_T15 = _T5E->f1;
	_T5B = _T15.num_elts;
      }{ enum Cyc_Absyn_MallocKind mknd = _T59;
	struct Cyc_Absyn_Exp * ropt = _T5D;
	struct Cyc_Absyn_Exp * aqopt = _T5C;
	void * * topt = _T58;
	struct Cyc_Absyn_Exp * e = _T5B;
	if (ropt == 0) { goto _TL90;
	}
	Cyc_scan_exp(ropt,dep);
	goto _TL91;
	_TL90: _TL91: if (aqopt == 0) { goto _TL92;
	}
	Cyc_scan_exp(aqopt,dep);
	goto _TL93;
	_TL92: _TL93: if (topt == 0) { goto _TL94;
	}
	_T16 = topt;
	_T17 = *_T16;
	_T18 = dep;
	Cyc_scan_type(_T17,_T18);
	goto _TL95;
	_TL94: _TL95: Cyc_scan_exp(e,dep);
	return;
      }
    case 37: 
      { struct Cyc_Absyn_Tagcheck_e_Absyn_Raw_exp_struct * _T5E = (struct Cyc_Absyn_Tagcheck_e_Absyn_Raw_exp_struct *)_T56;
	_T5D = _T5E->f1;
      }{ struct Cyc_Absyn_Exp * e = _T5D;
	Cyc_scan_exp(e,dep);
	return;
      }
    case 38: 
      { struct Cyc_Absyn_Valueof_e_Absyn_Raw_exp_struct * _T5E = (struct Cyc_Absyn_Valueof_e_Absyn_Raw_exp_struct *)_T56;
	_T19 = _T5E->f1;
	_T5D = (void *)_T19;
      }{ void * t1 = _T5D;
	_T5D = t1;
	goto _LL26;
      }
    case 17: 
      { struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct * _T5E = (struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct *)_T56;
	_T1A = _T5E->f1;
	_T5D = (void *)_T1A;
      }_LL26: { void * t1 = _T5D;
	Cyc_scan_type(t1,dep);
	return;
      }
    case 21: 
      { struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct * _T5E = (struct Cyc_Absyn_AggrMember_e_Absyn_Raw_exp_struct *)_T56;
	_T5D = _T5E->f1;
	_T57 = _T5E->f2;
      }{ struct Cyc_Absyn_Exp * e1 = _T5D;
	struct _fat_ptr * fn = _T57;
	_T5D = e1;
	_T57 = fn;
	goto _LL2A;
      }
    case 22: 
      { struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct * _T5E = (struct Cyc_Absyn_AggrArrow_e_Absyn_Raw_exp_struct *)_T56;
	_T5D = _T5E->f1;
	_T57 = _T5E->f2;
      }_LL2A: { struct Cyc_Absyn_Exp * e1 = _T5D;
	struct _fat_ptr * fn = _T57;
	Cyc_scan_exp(e1,dep);
	Cyc_add_target(fn);
	return;
      }
    case 19: 
      { struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct * _T5E = (struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct *)_T56;
	_T1B = _T5E->f1;
	_T5D = (void *)_T1B;
	_T5A = _T5E->f2;
      }{ void * t1 = _T5D;
	struct Cyc_List_List * f = _T5A;
	Cyc_scan_type(t1,dep);
	_T1C = _check_null(f);
	{ void * _T5E = _T1C->hd;
	  struct _fat_ptr * _T5F;
	  { struct Cyc_Absyn_StructField_Absyn_OffsetofField_struct * _T60 = (struct Cyc_Absyn_StructField_Absyn_OffsetofField_struct *)_T5E;
	    _T5F = _T60->f1;
	  }{ struct _fat_ptr * fn = _T5F;
	    Cyc_add_target(fn);
	    goto _LL57;
	  }_LL57: ;
	}return;
      }
    case 0: 
      return;
    case 35: 
      { struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct * _T5E = (struct Cyc_Absyn_UnresolvedMem_e_Absyn_Raw_exp_struct *)_T56;
	_T5A = _T5E->f2;
      }{ struct Cyc_List_List * x = _T5A;
	_TL99: if (x != 0) { goto _TL97;
	}else { goto _TL98;
	}
	_TL97: _T1D = x;
	_T1E = _T1D->hd;
	{ struct _tuple20 * _T5E = (struct _tuple20 *)_T1E;
	  struct Cyc_Absyn_Exp * _T5F;
	  { struct _tuple20 _T60 = *_T5E;
	    _T5F = _T60.f1;
	  }{ struct Cyc_Absyn_Exp * e1 = _T5F;
	    Cyc_scan_exp(e1,dep);
	  }
	}_T1F = x;
	x = _T1F->tl;
	goto _TL99;
	_TL98: return;
      }
    case 39: 
      return;
    case 2: 
      _T20 = Cyc_stderr;
      _T21 = _tag_fat("Error: unexpected Pragma_e\n",sizeof(char),28U);
      _T22 = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T20,_T21,_T22);
      exit(1);
      return;
    case 34: 
      _T23 = Cyc_stderr;
      _T24 = _tag_fat("Error: unexpected Swap_e\n",sizeof(char),26U);
      _T25 = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T23,_T24,_T25);
      exit(1);
      return;
    case 36: 
      _T26 = Cyc_stderr;
      _T27 = _tag_fat("Error: unexpected Stmt_e\n",sizeof(char),26U);
      _T28 = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T26,_T27,_T28);
      exit(1);
      return;
    case 41: 
      _T29 = Cyc_stderr;
      _T2A = _tag_fat("Error: unexpected Assert_e\n",sizeof(char),28U);
      _T2B = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T29,_T2A,_T2B);
      exit(1);
      return;
    case 42: 
      _T2C = Cyc_stderr;
      _T2D = _tag_fat("Error: unexpected Assert_false_e\n",sizeof(char),34U);
      _T2E = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T2C,_T2D,_T2E);
      exit(1);
      return;
    case 11: 
      _T2F = Cyc_stderr;
      _T30 = _tag_fat("Error: unexpected Throw_e\n",sizeof(char),27U);
      _T31 = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T2F,_T30,_T31);
      exit(1);
      return;
    case 12: 
      _T32 = Cyc_stderr;
      _T33 = _tag_fat("Error: unexpected NoInstantiate_e\n",sizeof(char),
		      35U);
      _T34 = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T32,_T33,_T34);
      exit(1);
      return;
    case 13: 
      _T35 = Cyc_stderr;
      _T36 = _tag_fat("Error: unexpected Instantiate_e\n",sizeof(char),33U);
      _T37 = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T35,_T36,_T37);
      exit(1);
      return;
    case 16: 
      _T38 = Cyc_stderr;
      _T39 = _tag_fat("Error: unexpected New_e\n",sizeof(char),25U);
      _T3A = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T38,_T39,_T3A);
      exit(1);
      return;
    case 24: 
      _T3B = Cyc_stderr;
      _T3C = _tag_fat("Error: unexpected CompoundLit_e\n",sizeof(char),33U);
      _T3D = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T3B,_T3C,_T3D);
      exit(1);
      return;
    case 25: 
      _T3E = Cyc_stderr;
      _T3F = _tag_fat("Error: unexpected Array_e\n",sizeof(char),27U);
      _T40 = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T3E,_T3F,_T40);
      exit(1);
      return;
    case 26: 
      _T41 = Cyc_stderr;
      _T42 = _tag_fat("Error: unexpected Comprehension_e\n",sizeof(char),
		      35U);
      _T43 = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T41,_T42,_T43);
      exit(1);
      return;
    case 27: 
      _T44 = Cyc_stderr;
      _T45 = _tag_fat("Error: unexpected ComprehensionNoinit_e\n",sizeof(char),
		      41U);
      _T46 = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T44,_T45,_T46);
      exit(1);
      return;
    case 28: 
      _T47 = Cyc_stderr;
      _T48 = _tag_fat("Error: unexpected Aggregate_e\n",sizeof(char),31U);
      _T49 = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T47,_T48,_T49);
      exit(1);
      return;
    case 29: 
      _T4A = Cyc_stderr;
      _T4B = _tag_fat("Error: unexpected AnonStruct_e\n",sizeof(char),32U);
      _T4C = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T4A,_T4B,_T4C);
      exit(1);
      return;
    case 30: 
      _T4D = Cyc_stderr;
      _T4E = _tag_fat("Error: unexpected Datatype_e\n",sizeof(char),30U);
      _T4F = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T4D,_T4E,_T4F);
      exit(1);
      return;
    case 31: 
      _T50 = Cyc_stderr;
      _T51 = _tag_fat("Error: unexpected Enum_e\n",sizeof(char),26U);
      _T52 = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T50,_T51,_T52);
      exit(1);
      return;
    default: 
      _T53 = Cyc_stderr;
      _T54 = _tag_fat("Error: unexpected AnonEnum_e\n",sizeof(char),30U);
      _T55 = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T53,_T54,_T55);
      exit(1);
      return;
    }
    ;
  }
}
void Cyc_scan_exp_opt(struct Cyc_Absyn_Exp * eo,struct Cyc_Hashtable_Table * dep) {
  struct Cyc_Absyn_Exp * _T0;
  unsigned int _T1;
  _T0 = eo;
  _T1 = (unsigned int)_T0;
  if (! _T1) { goto _TL9A;
  }
  Cyc_scan_exp(eo,dep);
  goto _TL9B;
  _TL9A: _TL9B: return;
}
extern void Cyc_scan_decl(struct Cyc_Absyn_Decl *,struct Cyc_Hashtable_Table *);
void Cyc_scan_type(void * t,struct Cyc_Hashtable_Table * dep) {
  void * _T0;
  int * _T1;
  unsigned int _T2;
  void * _T3;
  void * _T4;
  void * _T5;
  int * _T6;
  unsigned int _T7;
  void * _T8;
  struct _tuple1 * _T9;
  void * _TA;
  struct _tuple1 * _TB;
  struct Cyc_String_pa_PrintArg_struct _TC;
  struct Cyc___cycFILE * _TD;
  struct _fat_ptr _TE;
  struct _fat_ptr _TF;
  void * _T10;
  struct Cyc_Absyn_PtrInfo _T11;
  void * _T12;
  struct Cyc_Hashtable_Table * _T13;
  void * _T14;
  struct Cyc_Absyn_ArrayInfo _T15;
  struct Cyc_Absyn_ArrayInfo _T16;
  struct Cyc_Absyn_ArrayInfo _T17;
  void * _T18;
  void * _T19;
  struct Cyc_Absyn_FnInfo _T1A;
  void * _T1B;
  struct Cyc_Hashtable_Table * _T1C;
  struct Cyc_Absyn_FnInfo _T1D;
  struct Cyc_List_List * _T1E;
  void * _T1F;
  struct Cyc_List_List * _T20;
  struct Cyc_Absyn_FnInfo _T21;
  struct Cyc_Absyn_VarargInfo * _T22;
  struct Cyc_Absyn_FnInfo _T23;
  struct Cyc_Absyn_VarargInfo * _T24;
  void * _T25;
  struct Cyc_Hashtable_Table * _T26;
  void * _T27;
  struct Cyc_List_List * _T28;
  void * _T29;
  struct Cyc_Absyn_Aggrfield * _T2A;
  void * _T2B;
  struct Cyc_Hashtable_Table * _T2C;
  struct Cyc_List_List * _T2D;
  void * _T2E;
  struct Cyc_Absyn_Aggrfield * _T2F;
  struct Cyc_Absyn_Exp * _T30;
  struct Cyc_Hashtable_Table * _T31;
  struct Cyc_List_List * _T32;
  void * _T33;
  struct _tuple1 * _T34;
  void * _T35;
  struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct * _T36;
  struct Cyc_Absyn_TypeDecl * _T37;
  struct Cyc_Absyn_TypeDecl * _T38;
  void * _T39;
  int * _T3A;
  unsigned int _T3B;
  void * _T3C;
  struct Cyc_Absyn_TypeDecl * _T3D;
  void * _T3E;
  struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct * _T3F;
  void * _T40;
  struct Cyc_Absyn_Decl * _T41;
  struct Cyc_Hashtable_Table * _T42;
  struct Cyc_Absyn_Aggrdecl * _T43;
  void * _T44;
  struct Cyc_Absyn_TypeDecl * _T45;
  void * _T46;
  struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct * _T47;
  void * _T48;
  struct Cyc_Absyn_Decl * _T49;
  struct Cyc_Hashtable_Table * _T4A;
  struct Cyc_Absyn_Enumdecl * _T4B;
  void * _T4C;
  struct Cyc_Absyn_TypeDecl * _T4D;
  void * _T4E;
  struct Cyc___cycFILE * _T4F;
  struct _fat_ptr _T50;
  struct _fat_ptr _T51;
  struct Cyc___cycFILE * _T52;
  struct _fat_ptr _T53;
  struct _fat_ptr _T54;
  struct Cyc___cycFILE * _T55;
  struct _fat_ptr _T56;
  struct _fat_ptr _T57;
  struct Cyc___cycFILE * _T58;
  struct _fat_ptr _T59;
  struct _fat_ptr _T5A;
  struct Cyc___cycFILE * _T5B;
  struct _fat_ptr _T5C;
  struct _fat_ptr _T5D;
  struct Cyc___cycFILE * _T5E;
  struct _fat_ptr _T5F;
  struct _fat_ptr _T60;
  struct Cyc_Absyn_Datatypedecl * _T61;
  struct Cyc_Absyn_Enumdecl * _T62;
  struct Cyc_Absyn_Aggrdecl * _T63;
  struct _fat_ptr * _T64;
  struct Cyc_List_List * _T65;
  struct Cyc_Absyn_FnInfo _T66;
  struct Cyc_Absyn_Exp * _T67;
  struct Cyc_Absyn_PtrInfo _T68;
  void * _T69;
  void * _T6A;
  _T0 = t;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  switch (_T2) {
  case 0: 
    _T3 = t;
    { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T6B = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T3;
      _T4 = _T6B->f1;
      _T6A = (void *)_T4;
      _T69 = _T6B->f2;
    }{ void * c = _T6A;
      struct Cyc_List_List * ts = _T69;
      struct _fat_ptr * _T6B;
      union Cyc_Absyn_AggrInfo _T6C;
      _T5 = c;
      _T6 = (int *)_T5;
      _T7 = *_T6;
      switch (_T7) {
      case 0: 
	goto _LL23;
      case 1: 
	_LL23: goto _LL25;
      case 21: 
	_LL25: goto _LL27;
      case 2: 
	_LL27: goto _LL29;
      case 3: 
	_LL29: goto _LL2B;
      case 20: 
	_LL2B: return;
      case 24: 
	_T8 = c;
	{ struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct * _T6D = (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct *)_T8;
	  _T6C = _T6D->f1;
	}{ union Cyc_Absyn_AggrInfo info = _T6C;
	  struct _tuple12 _T6D = Cyc_Absyn_aggr_kinded_name(info);
	  struct _fat_ptr * _T6E;
	  _T9 = _T6D.f1;
	  { struct _tuple1 _T6F = *_T9;
	    _T6E = _T6F.f1;
	  }{ struct _fat_ptr * v = _T6E;
	    _T6B = v;
	    goto _LL2F;
	  }
	}
      case 19: 
	_TA = c;
	{ struct Cyc_Absyn_EnumCon_Absyn_TyCon_struct * _T6D = (struct Cyc_Absyn_EnumCon_Absyn_TyCon_struct *)_TA;
	  _TB = _T6D->f1;
	  { struct _tuple1 _T6E = *_TB;
	    _T6B = _T6E.f1;
	  }
	}_LL2F: { struct _fat_ptr * v = _T6B;
	  Cyc_add_target(v);
	  return;
	}
      case 22: 
	goto _LL33;
      case 23: 
	_LL33: goto _LL35;
      case 4: 
	_LL35: goto _LL37;
      case 6: 
	_LL37: goto _LL39;
      case 7: 
	_LL39: goto _LL3B;
      case 8: 
	_LL3B: goto _LL3D;
      case 9: 
	_LL3D: goto _LL3F;
      case 10: 
	_LL3F: goto _LL41;
      case 5: 
	_LL41: goto _LL43;
      case 11: 
	_LL43: goto _LL45;
      case 12: 
	_LL45: goto _LL47;
      case 13: 
	_LL47: goto _LL49;
      case 14: 
	_LL49: goto _LL4B;
      case 15: 
	_LL4B: goto _LL4D;
      case 16: 
	_LL4D: goto _LL4F;
      case 18: 
	_LL4F: goto _LL51;
      default: 
	_LL51: { struct Cyc_String_pa_PrintArg_struct _T6D;
	  _T6D.tag = 0;
	  _T6D.f1 = Cyc_Absynpp_typ2string(t);
	  _TC = _T6D;
	}{ struct Cyc_String_pa_PrintArg_struct _T6D = _TC;
	  void * _T6E[1];
	  _T6E[0] = &_T6D;
	  _TD = Cyc_stderr;
	  _TE = _tag_fat("Error: unexpected %s\n",sizeof(char),22U);
	  _TF = _tag_fat(_T6E,sizeof(void *),1);
	  Cyc_fprintf(_TD,_TE,_TF);
	}exit(1);
	return;
      }
      ;
    }
  case 4: 
    _T10 = t;
    { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T6B = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T10;
      _T68 = _T6B->f1;
    }{ struct Cyc_Absyn_PtrInfo x = _T68;
      _T11 = x;
      _T12 = _T11.elt_type;
      _T13 = dep;
      Cyc_scan_type(_T12,_T13);
      return;
    }
  case 5: 
    _T14 = t;
    { struct Cyc_Absyn_ArrayType_Absyn_Type_struct * _T6B = (struct Cyc_Absyn_ArrayType_Absyn_Type_struct *)_T14;
      _T15 = _T6B->f1;
      _T6A = _T15.elt_type;
      _T16 = _T6B->f1;
      _T67 = _T16.num_elts;
      _T17 = _T6B->f1;
      _T69 = _T17.zero_term;
    }{ void * t = _T6A;
      struct Cyc_Absyn_Exp * sz = _T67;
      void * zt = _T69;
      Cyc_scan_type(t,dep);
      Cyc_scan_exp_opt(sz,dep);
      return;
    }
  case 11: 
    _T18 = t;
    { struct Cyc_Absyn_TypeofType_Absyn_Type_struct * _T6B = (struct Cyc_Absyn_TypeofType_Absyn_Type_struct *)_T18;
      _T67 = _T6B->f1;
    }{ struct Cyc_Absyn_Exp * e = _T67;
      Cyc_scan_exp(e,dep);
      return;
    }
  case 6: 
    _T19 = t;
    { struct Cyc_Absyn_FnType_Absyn_Type_struct * _T6B = (struct Cyc_Absyn_FnType_Absyn_Type_struct *)_T19;
      _T66 = _T6B->f1;
    }{ struct Cyc_Absyn_FnInfo x = _T66;
      _T1A = x;
      _T1B = _T1A.ret_type;
      _T1C = dep;
      Cyc_scan_type(_T1B,_T1C);
      _T1D = x;
      { struct Cyc_List_List * a = _T1D.args;
	_TLA1: if (a != 0) { goto _TL9F;
	}else { goto _TLA0;
	}
	_TL9F: _T1E = a;
	_T1F = _T1E->hd;
	{ struct _tuple9 * _T6B = (struct _tuple9 *)_T1F;
	  void * _T6C;
	  { struct _tuple9 _T6D = *_T6B;
	    _T6C = _T6D.f2;
	  }{ void * argt = _T6C;
	    Cyc_scan_type(argt,dep);
	  }
	}_T20 = a;
	a = _T20->tl;
	goto _TLA1;
	_TLA0: ;
      }_T21 = x;
      _T22 = _T21.cyc_varargs;
      if (_T22 == 0) { goto _TLA2;
      }
      _T23 = x;
      _T24 = _T23.cyc_varargs;
      _T25 = _T24->type;
      _T26 = dep;
      Cyc_scan_type(_T25,_T26);
      goto _TLA3;
      _TLA2: _TLA3: return;
    }
  case 7: 
    _T27 = t;
    { struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct * _T6B = (struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct *)_T27;
      _T65 = _T6B->f3;
    }{ struct Cyc_List_List * sfs = _T65;
      _TLA7: if (sfs != 0) { goto _TLA5;
      }else { goto _TLA6;
      }
      _TLA5: _T28 = sfs;
      _T29 = _T28->hd;
      _T2A = (struct Cyc_Absyn_Aggrfield *)_T29;
      _T2B = _T2A->type;
      _T2C = dep;
      Cyc_scan_type(_T2B,_T2C);
      _T2D = sfs;
      _T2E = _T2D->hd;
      _T2F = (struct Cyc_Absyn_Aggrfield *)_T2E;
      _T30 = _T2F->width;
      _T31 = dep;
      Cyc_scan_exp_opt(_T30,_T31);
      _T32 = sfs;
      sfs = _T32->tl;
      goto _TLA7;
      _TLA6: return;
    }
  case 8: 
    _T33 = t;
    { struct Cyc_Absyn_TypedefType_Absyn_Type_struct * _T6B = (struct Cyc_Absyn_TypedefType_Absyn_Type_struct *)_T33;
      _T34 = _T6B->f1;
      { struct _tuple1 _T6C = *_T34;
	_T64 = _T6C.f1;
      }
    }{ struct _fat_ptr * v = _T64;
      Cyc_add_target(v);
      return;
    }
  case 10: 
    _T35 = t;
    _T36 = (struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct *)_T35;
    _T37 = _T36->f1;
    _T38 = (struct Cyc_Absyn_TypeDecl *)_T37;
    _T39 = _T38->r;
    _T3A = (int *)_T39;
    _T3B = *_T3A;
    switch (_T3B) {
    case 0: 
      _T3C = t;
      { struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct * _T6B = (struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct *)_T3C;
	_T3D = _T6B->f1;
	{ struct Cyc_Absyn_TypeDecl _T6C = *_T3D;
	  _T3E = _T6C.r;
	  { struct Cyc_Absyn_Aggr_td_Absyn_Raw_typedecl_struct * _T6D = (struct Cyc_Absyn_Aggr_td_Absyn_Raw_typedecl_struct *)_T3E;
	    _T63 = _T6D->f1;
	  }
	}
      }{ struct Cyc_Absyn_Aggrdecl * x = _T63;
	{ struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct * _T6B = _cycalloc(sizeof(struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct));
	  _T6B->tag = 5;
	  _T6B->f1 = x;
	  _T3F = (struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct *)_T6B;
	}_T40 = (void *)_T3F;
	_T41 = Cyc_Absyn_new_decl(_T40,0U);
	_T42 = dep;
	Cyc_scan_decl(_T41,_T42);
	_T43 = x;
	{ struct _tuple1 * _T6B = _T43->name;
	  struct _fat_ptr * _T6C;
	  { struct _tuple1 _T6D = *_T6B;
	    _T6C = _T6D.f1;
	  }{ struct _fat_ptr * n = _T6C;
	    Cyc_add_target(n);
	    return;
	  }
	}
      }
    case 1: 
      _T44 = t;
      { struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct * _T6B = (struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct *)_T44;
	_T45 = _T6B->f1;
	{ struct Cyc_Absyn_TypeDecl _T6C = *_T45;
	  _T46 = _T6C.r;
	  { struct Cyc_Absyn_Enum_td_Absyn_Raw_typedecl_struct * _T6D = (struct Cyc_Absyn_Enum_td_Absyn_Raw_typedecl_struct *)_T46;
	    _T62 = _T6D->f1;
	  }
	}
      }{ struct Cyc_Absyn_Enumdecl * x = _T62;
	{ struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct * _T6B = _cycalloc(sizeof(struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct));
	  _T6B->tag = 7;
	  _T6B->f1 = x;
	  _T47 = (struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct *)_T6B;
	}_T48 = (void *)_T47;
	_T49 = Cyc_Absyn_new_decl(_T48,0U);
	_T4A = dep;
	Cyc_scan_decl(_T49,_T4A);
	_T4B = x;
	{ struct _tuple1 * _T6B = _T4B->name;
	  struct _fat_ptr * _T6C;
	  { struct _tuple1 _T6D = *_T6B;
	    _T6C = _T6D.f1;
	  }{ struct _fat_ptr * n = _T6C;
	    Cyc_add_target(n);
	    return;
	  }
	}
      }
    default: 
      _T4C = t;
      { struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct * _T6B = (struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct *)_T4C;
	_T4D = _T6B->f1;
	{ struct Cyc_Absyn_TypeDecl _T6C = *_T4D;
	  _T4E = _T6C.r;
	  { struct Cyc_Absyn_Datatype_td_Absyn_Raw_typedecl_struct * _T6D = (struct Cyc_Absyn_Datatype_td_Absyn_Raw_typedecl_struct *)_T4E;
	    _T61 = _T6D->f1;
	  }
	}
      }{ struct Cyc_Absyn_Datatypedecl * dd = _T61;
	_T4F = Cyc_stderr;
	_T50 = _tag_fat("Error: unexpected Datatype declaration\n",sizeof(char),
			40U);
	_T51 = _tag_fat(0U,sizeof(void *),0);
	Cyc_fprintf(_T4F,_T50,_T51);
	exit(1);
	return;
      }
    }
    ;
  case 12: 
    _T52 = Cyc_stderr;
    _T53 = _tag_fat("Error: unexpected @subset type\n",sizeof(char),32U);
    _T54 = _tag_fat(0U,sizeof(void *),0);
    Cyc_fprintf(_T52,_T53,_T54);
    exit(1);
    return;
  case 3: 
    _T55 = Cyc_stderr;
    _T56 = _tag_fat("Error: unexpected Cvar\n",sizeof(char),24U);
    _T57 = _tag_fat(0U,sizeof(void *),0);
    Cyc_fprintf(_T55,_T56,_T57);
    exit(1);
    return;
  case 1: 
    _T58 = Cyc_stderr;
    _T59 = _tag_fat("Error: unexpected Evar\n",sizeof(char),24U);
    _T5A = _tag_fat(0U,sizeof(void *),0);
    Cyc_fprintf(_T58,_T59,_T5A);
    exit(1);
    return;
  case 2: 
    _T5B = Cyc_stderr;
    _T5C = _tag_fat("Error: unexpected VarType\n",sizeof(char),27U);
    _T5D = _tag_fat(0U,sizeof(void *),0);
    Cyc_fprintf(_T5B,_T5C,_T5D);
    exit(1);
    return;
  default: 
    _T5E = Cyc_stderr;
    _T5F = _tag_fat("Error: unexpected valueof_t\n",sizeof(char),29U);
    _T60 = _tag_fat(0U,sizeof(void *),0);
    Cyc_fprintf(_T5E,_T5F,_T60);
    exit(1);
    return;
  }
  ;
}
void Cyc_scan_decl(struct Cyc_Absyn_Decl * d,struct Cyc_Hashtable_Table * dep) {
  struct Cyc_Set_Set * * _T0;
  struct Cyc_Set_Set * (* _T1)(int (*)(struct _fat_ptr *,struct _fat_ptr *));
  struct Cyc_Set_Set * (* _T2)(int (*)(void *,void *));
  int (* _T3)(struct _fat_ptr *,struct _fat_ptr *);
  struct Cyc_Absyn_Decl * _T4;
  int * _T5;
  unsigned int _T6;
  struct Cyc_Absyn_Vardecl * _T7;
  struct Cyc_Absyn_Vardecl * _T8;
  void * _T9;
  struct Cyc_Hashtable_Table * _TA;
  struct Cyc_Absyn_Vardecl * _TB;
  struct Cyc_Absyn_Exp * _TC;
  struct Cyc_Hashtable_Table * _TD;
  struct Cyc_Absyn_Fndecl * _TE;
  struct Cyc_Absyn_Fndecl * _TF;
  struct Cyc_Absyn_FnInfo _T10;
  void * _T11;
  struct Cyc_Hashtable_Table * _T12;
  struct Cyc_Absyn_Fndecl * _T13;
  struct Cyc_Absyn_FnInfo _T14;
  struct Cyc_List_List * _T15;
  void * _T16;
  struct Cyc_List_List * _T17;
  struct Cyc_Absyn_Fndecl * _T18;
  struct Cyc_Absyn_FnInfo _T19;
  struct Cyc_Absyn_VarargInfo * _T1A;
  struct Cyc_Absyn_Fndecl * _T1B;
  struct Cyc_Absyn_FnInfo _T1C;
  struct Cyc_Absyn_VarargInfo * _T1D;
  void * _T1E;
  struct Cyc_Hashtable_Table * _T1F;
  struct Cyc_Absyn_Fndecl * _T20;
  long _T21;
  struct Cyc_String_pa_PrintArg_struct _T22;
  struct _fat_ptr * _T23;
  struct _fat_ptr _T24;
  struct _fat_ptr _T25;
  struct Cyc_Absyn_Aggrdecl * _T26;
  struct Cyc_Absyn_Aggrdecl * _T27;
  struct Cyc_Absyn_AggrdeclImpl * _T28;
  unsigned int _T29;
  struct Cyc_Absyn_Aggrdecl * _T2A;
  struct Cyc_Absyn_AggrdeclImpl * _T2B;
  struct Cyc_List_List * _T2C;
  void * _T2D;
  struct Cyc_Absyn_Aggrfield * _T2E;
  void * _T2F;
  struct Cyc_Hashtable_Table * _T30;
  struct Cyc_Absyn_Aggrfield * _T31;
  struct Cyc_Absyn_Exp * _T32;
  struct Cyc_Hashtable_Table * _T33;
  struct Cyc_List_List * _T34;
  struct Cyc_Absyn_Aggrdecl * _T35;
  struct Cyc_Absyn_AggrdeclImpl * _T36;
  struct Cyc_Absyn_AggrdeclImpl * _T37;
  struct Cyc_List_List * _T38;
  struct Cyc_Absyn_Enumdecl * _T39;
  struct Cyc_Absyn_Enumdecl * _T3A;
  struct Cyc_Core_Opt * _T3B;
  unsigned int _T3C;
  struct Cyc_Absyn_Enumdecl * _T3D;
  struct Cyc_Core_Opt * _T3E;
  void * _T3F;
  struct Cyc_List_List * _T40;
  void * _T41;
  struct Cyc_Absyn_Enumfield * _T42;
  struct Cyc_Absyn_Exp * _T43;
  struct Cyc_Hashtable_Table * _T44;
  struct Cyc_List_List * _T45;
  struct Cyc_Absyn_Enumdecl * _T46;
  struct Cyc_Core_Opt * _T47;
  struct Cyc_Core_Opt * _T48;
  void * _T49;
  struct Cyc_List_List * _T4A;
  struct Cyc_Absyn_Typedefdecl * _T4B;
  struct Cyc_Absyn_Typedefdecl * _T4C;
  void * _T4D;
  unsigned int _T4E;
  struct Cyc_Absyn_Typedefdecl * _T4F;
  void * _T50;
  struct Cyc_Hashtable_Table * _T51;
  struct Cyc___cycFILE * _T52;
  struct _fat_ptr _T53;
  struct _fat_ptr _T54;
  struct Cyc___cycFILE * _T55;
  struct _fat_ptr _T56;
  struct _fat_ptr _T57;
  struct Cyc___cycFILE * _T58;
  struct _fat_ptr _T59;
  struct _fat_ptr _T5A;
  struct Cyc___cycFILE * _T5B;
  struct _fat_ptr _T5C;
  struct _fat_ptr _T5D;
  struct Cyc___cycFILE * _T5E;
  struct _fat_ptr _T5F;
  struct _fat_ptr _T60;
  struct Cyc___cycFILE * _T61;
  struct _fat_ptr _T62;
  struct _fat_ptr _T63;
  struct Cyc___cycFILE * _T64;
  struct _fat_ptr _T65;
  struct _fat_ptr _T66;
  struct Cyc___cycFILE * _T67;
  struct _fat_ptr _T68;
  struct _fat_ptr _T69;
  struct Cyc___cycFILE * _T6A;
  struct _fat_ptr _T6B;
  struct _fat_ptr _T6C;
  struct Cyc___cycFILE * _T6D;
  struct _fat_ptr _T6E;
  struct _fat_ptr _T6F;
  struct Cyc___cycFILE * _T70;
  struct _fat_ptr _T71;
  struct _fat_ptr _T72;
  struct Cyc___cycFILE * _T73;
  struct _fat_ptr _T74;
  struct _fat_ptr _T75;
  struct _handler_cons * _T76;
  int _T77;
  struct Cyc_Set_Set * (* _T78)(struct Cyc_Hashtable_Table *,struct _fat_ptr *);
  void * (* _T79)(struct Cyc_Hashtable_Table *,void *);
  void * _T7A;
  struct Cyc_Core_Not_found_exn_struct * _T7B;
  char * _T7C;
  char * _T7D;
  struct Cyc_Set_Set * (* _T7E)(int (*)(struct _fat_ptr *,struct _fat_ptr *));
  struct Cyc_Set_Set * (* _T7F)(int (*)(void *,void *));
  int (* _T80)(struct _fat_ptr *,struct _fat_ptr *);
  struct Cyc_Set_Set * * _T81;
  struct Cyc_Set_Set * _T82;
  struct Cyc_Set_Set * _T83;
  void (* _T84)(struct Cyc_Hashtable_Table *,struct _fat_ptr *,struct Cyc_Set_Set *);
  void (* _T85)(struct Cyc_Hashtable_Table *,void *,void *);
  struct Cyc_Set_Set * * saved_targets = Cyc_current_targets;
  struct _fat_ptr * saved_source = Cyc_current_source;
  { struct Cyc_Set_Set * * _T86 = _cycalloc(sizeof(struct Cyc_Set_Set *));
    _T2 = Cyc_Set_empty;
    { struct Cyc_Set_Set * (* _T87)(int (*)(struct _fat_ptr *,struct _fat_ptr *)) = (struct Cyc_Set_Set * (*)(int (*)(struct _fat_ptr *,
														      struct _fat_ptr *)))_T2;
      _T1 = _T87;
    }_T3 = Cyc_strptrcmp;
    *_T86 = _T1(_T3);
    _T0 = (struct Cyc_Set_Set * *)_T86;
  }Cyc_current_targets = _T0;
  _T4 = d;
  { void * _T86 = _T4->r;
    struct Cyc_Absyn_Typedefdecl * _T87;
    struct Cyc_Absyn_Enumdecl * _T88;
    struct Cyc_Absyn_Aggrdecl * _T89;
    struct Cyc_Absyn_Fndecl * _T8A;
    struct Cyc_Absyn_Vardecl * _T8B;
    _T5 = (int *)_T86;
    _T6 = *_T5;
    switch (_T6) {
    case 0: 
      { struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T8C = (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct *)_T86;
	_T8B = _T8C->f1;
      }{ struct Cyc_Absyn_Vardecl * x = _T8B;
	_T7 = x;
	{ struct _tuple1 * _T8C = _T7->name;
	  struct _fat_ptr * _T8D;
	  { struct _tuple1 _T8E = *_T8C;
	    _T8D = _T8E.f1;
	  }{ struct _fat_ptr * v = _T8D;
	    Cyc_current_source = v;
	    _T8 = x;
	    _T9 = _T8->type;
	    _TA = dep;
	    Cyc_scan_type(_T9,_TA);
	    _TB = x;
	    _TC = _TB->initializer;
	    _TD = dep;
	    Cyc_scan_exp_opt(_TC,_TD);
	    goto _LL0;
	  }
	}
      }
    case 1: 
      { struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct * _T8C = (struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct *)_T86;
	_T8A = _T8C->f1;
      }{ struct Cyc_Absyn_Fndecl * x = _T8A;
	_TE = x;
	{ struct _tuple1 * _T8C = _TE->name;
	  struct _fat_ptr * _T8D;
	  { struct _tuple1 _T8E = *_T8C;
	    _T8D = _T8E.f1;
	  }{ struct _fat_ptr * v = _T8D;
	    Cyc_current_source = v;
	    _TF = x;
	    _T10 = _TF->i;
	    _T11 = _T10.ret_type;
	    _T12 = dep;
	    Cyc_scan_type(_T11,_T12);
	    _T13 = x;
	    _T14 = _T13->i;
	    { struct Cyc_List_List * a = _T14.args;
	      _TLAD: if (a != 0) { goto _TLAB;
	      }else { goto _TLAC;
	      }
	      _TLAB: _T15 = a;
	      _T16 = _T15->hd;
	      { struct _tuple9 * _T8E = (struct _tuple9 *)_T16;
		void * _T8F;
		{ struct _tuple9 _T90 = *_T8E;
		  _T8F = _T90.f2;
		}{ void * t1 = _T8F;
		  Cyc_scan_type(t1,dep);
		}
	      }_T17 = a;
	      a = _T17->tl;
	      goto _TLAD;
	      _TLAC: ;
	    }_T18 = x;
	    _T19 = _T18->i;
	    _T1A = _T19.cyc_varargs;
	    if (_T1A == 0) { goto _TLAE;
	    }
	    _T1B = x;
	    _T1C = _T1B->i;
	    _T1D = _T1C.cyc_varargs;
	    _T1E = _T1D->type;
	    _T1F = dep;
	    Cyc_scan_type(_T1E,_T1F);
	    goto _TLAF;
	    _TLAE: _TLAF: _T20 = x;
	    _T21 = _T20->is_inline;
	    if (! _T21) { goto _TLB0;
	    }
	    { struct Cyc_String_pa_PrintArg_struct _T8E;
	      _T8E.tag = 0;
	      _T23 = v;
	      _T8E.f1 = *_T23;
	      _T22 = _T8E;
	    }{ struct Cyc_String_pa_PrintArg_struct _T8E = _T22;
	      void * _T8F[1];
	      _T8F[0] = &_T8E;
	      _T24 = _tag_fat("Warning: ignoring inline function %s\n",sizeof(char),
			      38U);
	      _T25 = _tag_fat(_T8F,sizeof(void *),1);
	      Cyc_log(_T24,_T25);
	    }goto _TLB1;
	    _TLB0: _TLB1: goto _LL0;
	  }
	}
      }
    case 5: 
      { struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct * _T8C = (struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct *)_T86;
	_T89 = _T8C->f1;
      }{ struct Cyc_Absyn_Aggrdecl * x = _T89;
	_T26 = x;
	{ struct _tuple1 * _T8C = _T26->name;
	  struct _fat_ptr * _T8D;
	  { struct _tuple1 _T8E = *_T8C;
	    _T8D = _T8E.f1;
	  }{ struct _fat_ptr * v = _T8D;
	    Cyc_current_source = v;
	    _T27 = x;
	    _T28 = _T27->impl;
	    _T29 = (unsigned int)_T28;
	    if (! _T29) { goto _TLB2;
	    }
	    _T2A = x;
	    _T2B = _T2A->impl;
	    { struct Cyc_List_List * fs = _T2B->fields;
	      _TLB7: if (fs != 0) { goto _TLB5;
	      }else { goto _TLB6;
	      }
	      _TLB5: _T2C = fs;
	      _T2D = _T2C->hd;
	      { struct Cyc_Absyn_Aggrfield * f = (struct Cyc_Absyn_Aggrfield *)_T2D;
		_T2E = f;
		_T2F = _T2E->type;
		_T30 = dep;
		Cyc_scan_type(_T2F,_T30);
		_T31 = f;
		_T32 = _T31->width;
		_T33 = dep;
		Cyc_scan_exp_opt(_T32,_T33);
	      }_T34 = fs;
	      fs = _T34->tl;
	      goto _TLB7;
	      _TLB6: ;
	    }_T35 = x;
	    _T36 = _T35->impl;
	    _T37 = _check_null(_T36);
	    { struct Cyc_List_List * fs = _T37->fields;
	      _TLBB: if (fs != 0) { goto _TLB9;
	      }else { goto _TLBA;
	      }
	      _TLB9: _T38 = fs;
	      fs = _T38->tl;
	      goto _TLBB;
	      _TLBA: ;
	    }goto _TLB3;
	    _TLB2: _TLB3: goto _LL0;
	  }
	}
      }
    case 7: 
      { struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct * _T8C = (struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct *)_T86;
	_T88 = _T8C->f1;
      }{ struct Cyc_Absyn_Enumdecl * x = _T88;
	_T39 = x;
	{ struct _tuple1 * _T8C = _T39->name;
	  struct _fat_ptr * _T8D;
	  { struct _tuple1 _T8E = *_T8C;
	    _T8D = _T8E.f1;
	  }{ struct _fat_ptr * v = _T8D;
	    Cyc_current_source = v;
	    _T3A = x;
	    _T3B = _T3A->fields;
	    _T3C = (unsigned int)_T3B;
	    if (! _T3C) { goto _TLBC;
	    }
	    _T3D = x;
	    _T3E = _T3D->fields;
	    _T3F = _T3E->v;
	    { struct Cyc_List_List * fs = (struct Cyc_List_List *)_T3F;
	      _TLC1: if (fs != 0) { goto _TLBF;
	      }else { goto _TLC0;
	      }
	      _TLBF: _T40 = fs;
	      _T41 = _T40->hd;
	      { struct Cyc_Absyn_Enumfield * f = (struct Cyc_Absyn_Enumfield *)_T41;
		_T42 = f;
		_T43 = _T42->tag;
		_T44 = dep;
		Cyc_scan_exp_opt(_T43,_T44);
	      }_T45 = fs;
	      fs = _T45->tl;
	      goto _TLC1;
	      _TLC0: ;
	    }_T46 = x;
	    _T47 = _T46->fields;
	    _T48 = _check_null(_T47);
	    _T49 = _T48->v;
	    { struct Cyc_List_List * fs = (struct Cyc_List_List *)_T49;
	      _TLC5: if (fs != 0) { goto _TLC3;
	      }else { goto _TLC4;
	      }
	      _TLC3: _T4A = fs;
	      fs = _T4A->tl;
	      goto _TLC5;
	      _TLC4: ;
	    }goto _TLBD;
	    _TLBC: _TLBD: goto _LL0;
	  }
	}
      }
    case 8: 
      { struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct * _T8C = (struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct *)_T86;
	_T87 = _T8C->f1;
      }{ struct Cyc_Absyn_Typedefdecl * x = _T87;
	_T4B = x;
	{ struct _tuple1 * _T8C = _T4B->name;
	  struct _fat_ptr * _T8D;
	  { struct _tuple1 _T8E = *_T8C;
	    _T8D = _T8E.f1;
	  }{ struct _fat_ptr * v = _T8D;
	    Cyc_current_source = v;
	    _T4C = x;
	    _T4D = _T4C->defn;
	    _T4E = (unsigned int)_T4D;
	    if (! _T4E) { goto _TLC6;
	    }
	    _T4F = x;
	    _T50 = _T4F->defn;
	    _T51 = dep;
	    Cyc_scan_type(_T50,_T51);
	    goto _TLC7;
	    _TLC6: _TLC7: goto _LL0;
	  }
	}
      }
    case 4: 
      _T52 = Cyc_stderr;
      _T53 = _tag_fat("Error: unexpected region declaration",sizeof(char),
		      37U);
      _T54 = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T52,_T53,_T54);
      exit(1);
    case 13: 
      _T55 = Cyc_stderr;
      _T56 = _tag_fat("Error: unexpected __cyclone_port_on__",sizeof(char),
		      38U);
      _T57 = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T55,_T56,_T57);
      exit(1);
    case 14: 
      _T58 = Cyc_stderr;
      _T59 = _tag_fat("Error: unexpected __cyclone_port_off__",sizeof(char),
		      39U);
      _T5A = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T58,_T59,_T5A);
      exit(1);
    case 15: 
      _T5B = Cyc_stderr;
      _T5C = _tag_fat("Error: unexpected __tempest_on__",sizeof(char),33U);
      _T5D = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T5B,_T5C,_T5D);
      exit(1);
    case 16: 
      _T5E = Cyc_stderr;
      _T5F = _tag_fat("Error: unexpected __tempest_off__",sizeof(char),34U);
      _T60 = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T5E,_T5F,_T60);
      exit(1);
    case 2: 
      _T61 = Cyc_stderr;
      _T62 = _tag_fat("Error: unexpected let declaration\n",sizeof(char),
		      35U);
      _T63 = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T61,_T62,_T63);
      exit(1);
    case 6: 
      _T64 = Cyc_stderr;
      _T65 = _tag_fat("Error: unexpected datatype declaration\n",sizeof(char),
		      40U);
      _T66 = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T64,_T65,_T66);
      exit(1);
    case 3: 
      _T67 = Cyc_stderr;
      _T68 = _tag_fat("Error: unexpected let declaration\n",sizeof(char),
		      35U);
      _T69 = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T67,_T68,_T69);
      exit(1);
    case 9: 
      _T6A = Cyc_stderr;
      _T6B = _tag_fat("Error: unexpected namespace declaration\n",sizeof(char),
		      41U);
      _T6C = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T6A,_T6B,_T6C);
      exit(1);
    case 10: 
      _T6D = Cyc_stderr;
      _T6E = _tag_fat("Error: unexpected using declaration\n",sizeof(char),
		      37U);
      _T6F = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T6D,_T6E,_T6F);
      exit(1);
    case 11: 
      _T70 = Cyc_stderr;
      _T71 = _tag_fat("Error: unexpected extern \"C\" declaration\n",sizeof(char),
		      42U);
      _T72 = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T70,_T71,_T72);
      exit(1);
    default: 
      _T73 = Cyc_stderr;
      _T74 = _tag_fat("Error: unexpected extern \"C include\" declaration\n",
		      sizeof(char),50U);
      _T75 = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T73,_T74,_T75);
      exit(1);
    }
    _LL0: ;
  }{ struct Cyc_Set_Set * old;
    struct _fat_ptr * name = _check_null(Cyc_current_source);
    { struct _handler_cons _T86;
      _T76 = &_T86;
      _push_handler(_T76);
      { int _T87 = 0;
	_T77 = setjmp(_T86.handler);
	if (! _T77) { goto _TLC8;
	}
	_T87 = 1;
	goto _TLC9;
	_TLC8: _TLC9: if (_T87) { goto _TLCA;
	}else { goto _TLCC;
	}
	_TLCC: _T79 = Cyc_Hashtable_lookup;
	{ struct Cyc_Set_Set * (* _T88)(struct Cyc_Hashtable_Table *,struct _fat_ptr *) = (struct Cyc_Set_Set * (*)(struct Cyc_Hashtable_Table *,
														    struct _fat_ptr *))_T79;
	  _T78 = _T88;
	}old = _T78(dep,name);
	_pop_handler();
	goto _TLCB;
	_TLCA: _T7A = Cyc_Core_get_exn_thrown();
	{ void * _T88 = (void *)_T7A;
	  void * _T89;
	  _T7B = (struct Cyc_Core_Not_found_exn_struct *)_T88;
	  _T7C = _T7B->tag;
	  _T7D = Cyc_Core_Not_found;
	  if (_T7C != _T7D) { goto _TLCD;
	  }
	  _T7F = Cyc_Set_empty;
	  { struct Cyc_Set_Set * (* _T8A)(int (*)(struct _fat_ptr *,struct _fat_ptr *)) = (struct Cyc_Set_Set * (*)(int (*)(struct _fat_ptr *,
															    struct _fat_ptr *)))_T7F;
	    _T7E = _T8A;
	  }_T80 = Cyc_strptrcmp;
	  old = _T7E(_T80);
	  goto _LL35;
	  _TLCD: _T89 = _T88;
	  { void * exn = _T89;
	    _rethrow(exn);
	  }_LL35: ;
	}_TLCB: ;
      }
    }_T81 = _check_null(Cyc_current_targets);
    _T82 = *_T81;
    _T83 = old;
    { struct Cyc_Set_Set * targets = Cyc_Set_union_two(_T82,_T83);
      _T85 = Cyc_Hashtable_insert;
      { void (* _T86)(struct Cyc_Hashtable_Table *,struct _fat_ptr *,struct Cyc_Set_Set *) = (void (*)(struct Cyc_Hashtable_Table *,
												       struct _fat_ptr *,
												       struct Cyc_Set_Set *))_T85;
	_T84 = _T86;
      }_T84(dep,name,targets);
      Cyc_current_targets = saved_targets;
      Cyc_current_source = saved_source;
    }
  }
}
struct Cyc_Hashtable_Table * Cyc_new_deps() {
  struct Cyc_Hashtable_Table * (* _T0)(int,int (*)(struct _fat_ptr *,struct _fat_ptr *),
				       int (*)(struct _fat_ptr *));
  struct Cyc_Hashtable_Table * (* _T1)(int,int (*)(void *,void *),int (*)(void *));
  int (* _T2)(struct _fat_ptr *,struct _fat_ptr *);
  int (* _T3)(struct _fat_ptr *);
  struct Cyc_Hashtable_Table * _T4;
  _T1 = Cyc_Hashtable_create;
  { struct Cyc_Hashtable_Table * (* _T5)(int,int (*)(struct _fat_ptr *,struct _fat_ptr *),
					 int (*)(struct _fat_ptr *)) = (struct Cyc_Hashtable_Table * (*)(int,
													 int (*)(struct _fat_ptr *,
														 struct _fat_ptr *),
													 int (*)(struct _fat_ptr *)))_T1;
    _T0 = _T5;
  }_T2 = Cyc_strptrcmp;
  _T3 = Cyc_Hashtable_hash_stringptr;
  _T4 = _T0(107,_T2,_T3);
  return _T4;
}
struct Cyc_Set_Set * Cyc_find(struct Cyc_Hashtable_Table * t,struct _fat_ptr * x) {
  struct _handler_cons * _T0;
  int _T1;
  struct Cyc_Set_Set * (* _T2)(struct Cyc_Hashtable_Table *,struct _fat_ptr *);
  void * (* _T3)(struct Cyc_Hashtable_Table *,void *);
  void * _T4;
  struct Cyc_Core_Not_found_exn_struct * _T5;
  char * _T6;
  char * _T7;
  struct Cyc_Set_Set * (* _T8)(int (*)(struct _fat_ptr *,struct _fat_ptr *));
  struct Cyc_Set_Set * (* _T9)(int (*)(void *,void *));
  int (* _TA)(struct _fat_ptr *,struct _fat_ptr *);
  struct Cyc_Set_Set * _TB;
  struct _handler_cons _TC;
  _T0 = &_TC;
  _push_handler(_T0);
  { int _TD = 0;
    _T1 = setjmp(_TC.handler);
    if (! _T1) { goto _TLCF;
    }
    _TD = 1;
    goto _TLD0;
    _TLCF: _TLD0: if (_TD) { goto _TLD1;
    }else { goto _TLD3;
    }
    _TLD3: _T3 = Cyc_Hashtable_lookup;
    { struct Cyc_Set_Set * (* _TE)(struct Cyc_Hashtable_Table *,struct _fat_ptr *) = (struct Cyc_Set_Set * (*)(struct Cyc_Hashtable_Table *,
													       struct _fat_ptr *))_T3;
      _T2 = _TE;
    }{ struct Cyc_Set_Set * _TE = _T2(t,x);
      _npop_handler(0);
      return _TE;
    }_pop_handler();
    goto _TLD2;
    _TLD1: _T4 = Cyc_Core_get_exn_thrown();
    { void * _TE = (void *)_T4;
      void * _TF;
      _T5 = (struct Cyc_Core_Not_found_exn_struct *)_TE;
      _T6 = _T5->tag;
      _T7 = Cyc_Core_Not_found;
      if (_T6 != _T7) { goto _TLD4;
      }
      _T9 = Cyc_Set_empty;
      { struct Cyc_Set_Set * (* _T10)(int (*)(struct _fat_ptr *,struct _fat_ptr *)) = (struct Cyc_Set_Set * (*)(int (*)(struct _fat_ptr *,
															struct _fat_ptr *)))_T9;
	_T8 = _T10;
      }_TA = Cyc_strptrcmp;
      _TB = _T8(_TA);
      return _TB;
      _TLD4: _TF = _TE;
      { void * exn = _TF;
	_rethrow(exn);
      };
    }_TLD2: ;
  }
}
struct Cyc_Set_Set * Cyc_reachable(struct Cyc_List_List * init,struct Cyc_Hashtable_Table * t) {
  struct Cyc_Set_Set * (* _T0)(int (*)(struct _fat_ptr *,struct _fat_ptr *));
  struct Cyc_Set_Set * (* _T1)(int (*)(void *,void *));
  int (* _T2)(struct _fat_ptr *,struct _fat_ptr *);
  struct Cyc_Set_Set * (* _T3)(struct Cyc_Set_Set *,struct _fat_ptr *);
  struct Cyc_Set_Set * (* _T4)(struct Cyc_Set_Set *,void *);
  struct Cyc_Set_Set * _T5;
  struct Cyc_List_List * _T6;
  void * _T7;
  struct _fat_ptr * _T8;
  struct Cyc_List_List * _T9;
  struct _fat_ptr * _TA;
  int _TB;
  long (* _TC)(struct Cyc_Iter_Iter,struct _fat_ptr * *);
  long (* _TD)(struct Cyc_Iter_Iter,void *);
  struct Cyc_Iter_Iter _TE;
  struct _fat_ptr * * _TF;
  long _T10;
  struct Cyc_Set_Set * _T11;
  struct Cyc_Set_Set * _T12;
  struct Cyc_Set_Set * _T13;
  _T1 = Cyc_Set_empty;
  { struct Cyc_Set_Set * (* _T14)(int (*)(struct _fat_ptr *,struct _fat_ptr *)) = (struct Cyc_Set_Set * (*)(int (*)(struct _fat_ptr *,
														    struct _fat_ptr *)))_T1;
    _T0 = _T14;
  }_T2 = Cyc_strptrcmp;
  { struct Cyc_Set_Set * emptyset = _T0(_T2);
    struct Cyc_Set_Set * curr;
    curr = emptyset;
    _TLD9: if (init != 0) { goto _TLD7;
    }else { goto _TLD8;
    }
    _TLD7: _T4 = Cyc_Set_insert;
    { struct Cyc_Set_Set * (* _T14)(struct Cyc_Set_Set *,struct _fat_ptr *) = (struct Cyc_Set_Set * (*)(struct Cyc_Set_Set *,
													struct _fat_ptr *))_T4;
      _T3 = _T14;
    }_T5 = curr;
    _T6 = init;
    _T7 = _T6->hd;
    _T8 = (struct _fat_ptr *)_T7;
    curr = _T3(_T5,_T8);
    _T9 = init;
    init = _T9->tl;
    goto _TLD9;
    _TLD8: { struct Cyc_Set_Set * delta = curr;
      struct _fat_ptr * sptr;
      sptr = _cycalloc(sizeof(struct _fat_ptr));
      _TA = sptr;
      *_TA = _tag_fat("",sizeof(char),1U);
      _TLDA: _TB = Cyc_Set_cardinality(delta);
      if (_TB > 0) { goto _TLDB;
      }else { goto _TLDC;
      }
      _TLDB: { struct Cyc_Set_Set * next = emptyset;
	struct Cyc_Iter_Iter iter = Cyc_Set_make_iter(Cyc_Core_heap_region,
						      delta);
	_TLDD: _TD = Cyc_Iter_next;
	{ long (* _T14)(struct Cyc_Iter_Iter,struct _fat_ptr * *) = (long (*)(struct Cyc_Iter_Iter,
									      struct _fat_ptr * *))_TD;
	  _TC = _T14;
	}_TE = iter;
	_TF = &sptr;
	_T10 = _TC(_TE,_TF);
	if (_T10) { goto _TLDE;
	}else { goto _TLDF;
	}
	_TLDE: _T11 = next;
	_T12 = Cyc_find(t,sptr);
	next = Cyc_Set_union_two(_T11,_T12);
	goto _TLDD;
	_TLDF: delta = Cyc_Set_diff(next,curr);
	curr = Cyc_Set_union_two(curr,delta);
      }goto _TLDA;
      _TLDC: _T13 = curr;
      return _T13;
    }
  }
}
int Cyc_force_directory(struct _fat_ptr d) {
  struct _fat_ptr _T0;
  unsigned char * _T1;
  const char * _T2;
  struct _fat_ptr _T3;
  int _T4;
  int _T5;
  struct _fat_ptr _T6;
  unsigned char * _T7;
  unsigned char * _T8;
  const char * _T9;
  int _TA;
  int _TB;
  struct Cyc_String_pa_PrintArg_struct _TC;
  struct Cyc___cycFILE * _TD;
  struct _fat_ptr _TE;
  struct _fat_ptr _TF;
  _T0 = d;
  _T1 = _untag_fat_ptr_check_bound(_T0,sizeof(char),1U);
  _T2 = (const char *)_T1;
  _T3 = _tag_fat(0U,sizeof(unsigned short),0);
  { int fd = Cyc_open(_T2,0,_T3);
    _T4 = fd;
    _T5 = - 1;
    if (_T4 != _T5) { goto _TLE0;
    }
    _T6 = d;
    _T7 = _untag_fat_ptr(_T6,sizeof(char),1U);
    _T8 = _check_null(_T7);
    _T9 = (const char *)_T8;
    _TA = mkdir(_T9,448);
    _TB = - 1;
    if (_TA != _TB) { goto _TLE2;
    }
    { struct Cyc_String_pa_PrintArg_struct _T10;
      _T10.tag = 0;
      _T10.f1 = d;
      _TC = _T10;
    }{ struct Cyc_String_pa_PrintArg_struct _T10 = _TC;
      void * _T11[1];
      _T11[0] = &_T10;
      _TD = Cyc_stderr;
      _TE = _tag_fat("Error: could not create directory %s\n",sizeof(char),
		     38U);
      _TF = _tag_fat(_T11,sizeof(void *),1);
      Cyc_fprintf(_TD,_TE,_TF);
    }return 1;
    _TLE2: goto _TLE1;
    _TLE0: close(fd);
    _TLE1: return 0;
  }
}
int Cyc_force_directory_prefixes(struct _fat_ptr file) {
  unsigned long _T0;
  struct Cyc_List_List * _T1;
  struct _fat_ptr * _T2;
  struct _fat_ptr _T3;
  struct Cyc_List_List * _T4;
  void * _T5;
  struct _fat_ptr * _T6;
  struct _fat_ptr _T7;
  int _T8;
  struct Cyc_List_List * _T9;
  struct _fat_ptr curr = Cyc_strdup(file);
  struct Cyc_List_List * x = 0;
  _TLE4: if (1) { goto _TLE5;
  }else { goto _TLE6;
  }
  _TLE5: curr = Cyc_Filename_dirname(curr);
  _T0 = Cyc_strlen(curr);
  if (_T0 != 0U) { goto _TLE7;
  }
  goto _TLE6;
  _TLE7: { struct Cyc_List_List * _TA = _cycalloc(sizeof(struct Cyc_List_List));
    { struct _fat_ptr * _TB = _cycalloc(sizeof(struct _fat_ptr));
      _T3 = curr;
      *_TB = _T3;
      _T2 = (struct _fat_ptr *)_TB;
    }_TA->hd = _T2;
    _TA->tl = x;
    _T1 = (struct Cyc_List_List *)_TA;
  }x = _T1;
  goto _TLE4;
  _TLE6: _TLEC: if (x != 0) { goto _TLEA;
  }else { goto _TLEB;
  }
  _TLEA: _T4 = x;
  _T5 = _T4->hd;
  _T6 = (struct _fat_ptr *)_T5;
  _T7 = *_T6;
  _T8 = Cyc_force_directory(_T7);
  if (! _T8) { goto _TLED;
  }
  return 1;
  _TLED: _T9 = x;
  x = _T9->tl;
  goto _TLEC;
  _TLEB: return 0;
}
char Cyc_NO_SUPPORT[11U] = "NO_SUPPORT";
 struct Cyc_NO_SUPPORT_exn_struct {
  char * tag;
  struct _fat_ptr f1;
};
static long Cyc_is_other_special(char c) {
  char _T0;
  int _T1;
  _T0 = c;
  _T1 = (int)_T0;
  switch (_T1) {
  case 92: 
    goto _LL4;
  case 34: 
    _LL4: goto _LL6;
  case 59: 
    _LL6: goto _LL8;
  case 38: 
    _LL8: goto _LLA;
  case 40: 
    _LLA: goto _LLC;
  case 41: 
    _LLC: goto _LLE;
  case 124: 
    _LLE: goto _LL10;
  case 94: 
    _LL10: goto _LL12;
  case 60: 
    _LL12: goto _LL14;
  case 62: 
    _LL14: goto _LL16;
  case 10: 
    _LL16: goto _LL18;
  case 9: 
    _LL18: return 1;
  default: 
    return 0;
  }
  ;
}
static struct _fat_ptr Cyc_sh_escape_string(struct _fat_ptr s) {
  int _T0;
  unsigned long _T1;
  unsigned long _T2;
  struct _fat_ptr _T3;
  unsigned char * _T4;
  const char * _T5;
  const char * _T6;
  int _T7;
  char _T8;
  int _T9;
  long _TA;
  struct _fat_ptr _TB;
  struct Cyc_List_List * _TC;
  struct _fat_ptr * _TD;
  struct _fat_ptr * _TE;
  struct _fat_ptr _TF;
  struct _fat_ptr * _T10;
  struct _fat_ptr _T11;
  struct _fat_ptr _T12;
  unsigned long _T13;
  int _T14;
  unsigned long _T15;
  unsigned long _T16;
  int _T17;
  unsigned long _T18;
  struct _fat_ptr _T19;
  unsigned long _T1A;
  char * _T1B;
  unsigned int _T1C;
  unsigned int _T1D;
  int _T1E;
  unsigned long _T1F;
  unsigned long _T20;
  struct _fat_ptr _T21;
  unsigned char * _T22;
  const char * _T23;
  int _T24;
  char _T25;
  int _T26;
  long _T27;
  struct _fat_ptr _T28;
  int _T29;
  int _T2A;
  unsigned char * _T2B;
  char * _T2C;
  unsigned int _T2D;
  unsigned char * _T2E;
  char * _T2F;
  struct _fat_ptr _T30;
  int _T31;
  int _T32;
  unsigned char * _T33;
  char * _T34;
  unsigned int _T35;
  unsigned char * _T36;
  char * _T37;
  struct _fat_ptr _T38;
  unsigned long len = Cyc_strlen(s);
  int single_quotes = 0;
  int other_special = 0;
  { int i = 0;
    _TLF3: _T0 = i;
    _T1 = (unsigned long)_T0;
    _T2 = len;
    if (_T1 < _T2) { goto _TLF1;
    }else { goto _TLF2;
    }
    _TLF1: _T3 = s;
    _T4 = _T3.curr;
    _T5 = (const char *)_T4;
    _T6 = _check_null(_T5);
    _T7 = i;
    { char c = _T6[_T7];
      _T8 = c;
      _T9 = (int)_T8;
      if (_T9 != 39) { goto _TLF4;
      }
      single_quotes = single_quotes + 1;
      goto _TLF5;
      _TLF4: _TA = Cyc_is_other_special(c);
      if (! _TA) { goto _TLF6;
      }
      other_special = other_special + 1;
      goto _TLF7;
      _TLF6: _TLF7: _TLF5: ;
    }i = i + 1;
    goto _TLF3;
    _TLF2: ;
  }if (single_quotes != 0) { goto _TLF8;
  }
  if (other_special != 0) { goto _TLF8;
  }
  _TB = s;
  return _TB;
  _TLF8: if (single_quotes != 0) { goto _TLFA;
  }
  { struct _fat_ptr * _T39[3];
    { struct _fat_ptr * _T3A = _cycalloc(sizeof(struct _fat_ptr));
      *_T3A = _tag_fat("'",sizeof(char),2U);
      _TD = (struct _fat_ptr *)_T3A;
    }_T39[0] = _TD;
    { struct _fat_ptr * _T3A = _cycalloc(sizeof(struct _fat_ptr));
      _TF = s;
      *_T3A = _TF;
      _TE = (struct _fat_ptr *)_T3A;
    }_T39[1] = _TE;
    { struct _fat_ptr * _T3A = _cycalloc(sizeof(struct _fat_ptr));
      *_T3A = _tag_fat("'",sizeof(char),2U);
      _T10 = (struct _fat_ptr *)_T3A;
    }_T39[2] = _T10;
    _T11 = _tag_fat(_T39,sizeof(struct _fat_ptr *),3);
    _TC = Cyc_List_list(_T11);
  }_T12 = Cyc_strconcat_l(_TC);
  return _T12;
  _TLFA: _T13 = len;
  _T14 = single_quotes;
  _T15 = (unsigned long)_T14;
  _T16 = _T13 + _T15;
  _T17 = other_special;
  _T18 = (unsigned long)_T17;
  { unsigned long len2 = _T16 + _T18;
    _T1A = len2 + 1U;
    { unsigned int _T39 = _T1A + 1U;
      _T1C = _check_times(_T39,sizeof(char));
      { char * _T3A = _cycalloc_atomic(_T1C);
	{ unsigned int _T3B = _T39;
	  unsigned int i;
	  i = 0;
	  _TLFF: if (i < _T3B) { goto _TLFD;
	  }else { goto _TLFE;
	  }
	  _TLFD: _T1D = i;
	  _T3A[_T1D] = '\000';
	  i = i + 1;
	  goto _TLFF;
	  _TLFE: _T3A[_T3B] = 0;
	}_T1B = (char *)_T3A;
      }_T19 = _tag_fat(_T1B,sizeof(char),_T39);
    }{ struct _fat_ptr s2 = _T19;
      int i = 0;
      int j = 0;
      _TL103: _T1E = i;
      _T1F = (unsigned long)_T1E;
      _T20 = len;
      if (_T1F < _T20) { goto _TL101;
      }else { goto _TL102;
      }
      _TL101: _T21 = s;
      _T22 = _T21.curr;
      _T23 = (const char *)_T22;
      _T24 = i;
      { char c = _T23[_T24];
	_T25 = c;
	_T26 = (int)_T25;
	if (_T26 == 39) { goto _TL106;
	}else { goto _TL107;
	}
	_TL107: _T27 = Cyc_is_other_special(c);
	if (_T27) { goto _TL106;
	}else { goto _TL104;
	}
	_TL106: _T28 = s2;
	_T29 = j;
	j = _T29 + 1;
	_T2A = _T29;
	{ struct _fat_ptr _T39 = _fat_ptr_plus(_T28,sizeof(char),_T2A);
	  _T2B = _T39.curr;
	  _T2C = (char *)_T2B;
	  { char _T3A = *_T2C;
	    char _T3B = '\\';
	    _T2D = _get_fat_size(_T39,sizeof(char));
	    if (_T2D != 1U) { goto _TL108;
	    }
	    if (_T3A != 0) { goto _TL108;
	    }
	    if (_T3B == 0) { goto _TL108;
	    }
	    _throw_arraybounds();
	    goto _TL109;
	    _TL108: _TL109: _T2E = _T39.curr;
	    _T2F = (char *)_T2E;
	    *_T2F = _T3B;
	  }
	}goto _TL105;
	_TL104: _TL105: _T30 = s2;
	_T31 = j;
	j = _T31 + 1;
	_T32 = _T31;
	{ struct _fat_ptr _T39 = _fat_ptr_plus(_T30,sizeof(char),_T32);
	  _T33 = _T39.curr;
	  _T34 = (char *)_T33;
	  { char _T3A = *_T34;
	    char _T3B = c;
	    _T35 = _get_fat_size(_T39,sizeof(char));
	    if (_T35 != 1U) { goto _TL10A;
	    }
	    if (_T3A != 0) { goto _TL10A;
	    }
	    if (_T3B == 0) { goto _TL10A;
	    }
	    _throw_arraybounds();
	    goto _TL10B;
	    _TL10A: _TL10B: _T36 = _T39.curr;
	    _T37 = (char *)_T36;
	    *_T37 = _T3B;
	  }
	}
      }i = i + 1;
      goto _TL103;
      _TL102: _T38 = s2;
      return _T38;
    }
  }
}
static struct _fat_ptr * Cyc_sh_escape_stringptr(struct _fat_ptr * sp) {
  struct _fat_ptr * _T0;
  struct _fat_ptr * _T1;
  struct _fat_ptr _T2;
  { struct _fat_ptr * _T3 = _cycalloc(sizeof(struct _fat_ptr));
    _T1 = sp;
    _T2 = *_T1;
    *_T3 = Cyc_sh_escape_string(_T2);
    _T0 = (struct _fat_ptr *)_T3;
  }return _T0;
}
int Cyc_process_file(const char * filename,struct Cyc_List_List * start_symbols,
		     struct Cyc_List_List * user_defs,struct Cyc_List_List * omit_symbols,
		     struct Cyc_List_List * hstubs,struct Cyc_List_List * cstubs,
		     struct Cyc_List_List * cycstubs,struct Cyc_List_List * cpp_insert) {
  struct Cyc_Set_Set * * _T0;
  unsigned int _T1;
  long (* _T2)(struct Cyc_Set_Set *,struct _fat_ptr *);
  long (* _T3)(struct Cyc_Set_Set *,void *);
  struct Cyc_Set_Set * * _T4;
  struct Cyc_Set_Set * _T5;
  struct _fat_ptr * _T6;
  struct _fat_ptr _T7;
  void * _T8;
  void * _T9;
  unsigned int _TA;
  long _TB;
  struct Cyc_String_pa_PrintArg_struct _TC;
  struct _fat_ptr _TD;
  void * _TE;
  void * _TF;
  unsigned int _T10;
  struct Cyc___cycFILE * _T11;
  struct _fat_ptr _T12;
  struct _fat_ptr _T13;
  struct Cyc_String_pa_PrintArg_struct _T14;
  struct _fat_ptr _T15;
  void * _T16;
  void * _T17;
  unsigned int _T18;
  struct _fat_ptr _T19;
  struct _fat_ptr _T1A;
  struct _fat_ptr _T1B;
  void * _T1C;
  void * _T1D;
  unsigned int _T1E;
  struct _fat_ptr _T1F;
  void * _T20;
  void * _T21;
  unsigned int _T22;
  struct _fat_ptr _T23;
  struct _fat_ptr _T24;
  struct _fat_ptr _T25;
  unsigned char * _T26;
  unsigned char * _T27;
  struct _fat_ptr _T28;
  struct _fat_ptr _T29;
  unsigned int _T2A;
  struct _fat_ptr _T2B;
  struct Cyc_String_pa_PrintArg_struct _T2C;
  struct _fat_ptr _T2D;
  struct _fat_ptr _T2E;
  struct _fat_ptr _T2F;
  struct _fat_ptr _T30;
  struct Cyc_String_pa_PrintArg_struct _T31;
  struct _fat_ptr _T32;
  struct _fat_ptr _T33;
  unsigned char * _T34;
  unsigned char * _T35;
  struct _fat_ptr _T36;
  struct _fat_ptr _T37;
  unsigned int _T38;
  struct _fat_ptr _T39;
  struct Cyc_String_pa_PrintArg_struct _T3A;
  struct _fat_ptr _T3B;
  struct _fat_ptr _T3C;
  struct _fat_ptr _T3D;
  struct _fat_ptr _T3E;
  struct Cyc_String_pa_PrintArg_struct _T3F;
  struct _fat_ptr _T40;
  struct _fat_ptr _T41;
  unsigned char * _T42;
  unsigned char * _T43;
  struct _fat_ptr _T44;
  struct _fat_ptr _T45;
  unsigned int _T46;
  struct _fat_ptr _T47;
  struct Cyc_String_pa_PrintArg_struct _T48;
  struct _fat_ptr _T49;
  struct _fat_ptr _T4A;
  struct _fat_ptr _T4B;
  struct _fat_ptr _T4C;
  struct Cyc_String_pa_PrintArg_struct _T4D;
  struct _fat_ptr _T4E;
  struct _fat_ptr _T4F;
  unsigned char * _T50;
  unsigned char * _T51;
  struct _handler_cons * _T52;
  int _T53;
  struct _fat_ptr _T54;
  void * _T55;
  void * _T56;
  unsigned int _T57;
  int _T58;
  struct Cyc___cycFILE * _T59;
  unsigned int _T5A;
  struct Cyc_String_pa_PrintArg_struct _T5B;
  struct _fat_ptr _T5C;
  void * _T5D;
  void * _T5E;
  unsigned int _T5F;
  struct Cyc___cycFILE * _T60;
  struct _fat_ptr _T61;
  struct _fat_ptr _T62;
  long _T63;
  struct Cyc_String_pa_PrintArg_struct _T64;
  struct _fat_ptr _T65;
  void * _T66;
  void * _T67;
  unsigned int _T68;
  struct Cyc___cycFILE * _T69;
  struct _fat_ptr _T6A;
  struct _fat_ptr _T6B;
  struct Cyc_List_List * _T6C;
  void * _T6D;
  struct _fat_ptr * _T6E;
  struct _fat_ptr _T6F;
  unsigned char * _T70;
  unsigned char * _T71;
  const char * _T72;
  struct Cyc___cycFILE * _T73;
  struct Cyc_List_List * _T74;
  struct Cyc_String_pa_PrintArg_struct _T75;
  struct _fat_ptr _T76;
  void * _T77;
  void * _T78;
  unsigned int _T79;
  struct Cyc___cycFILE * _T7A;
  struct _fat_ptr _T7B;
  struct _fat_ptr _T7C;
  struct Cyc_List_List * _T7D;
  struct _fat_ptr * _T7E;
  struct _fat_ptr _T7F;
  struct Cyc_List_List * (* _T80)(struct _fat_ptr * (*)(struct _fat_ptr *),
				  struct Cyc_List_List *);
  struct Cyc_List_List * (* _T81)(void * (*)(void *),struct Cyc_List_List *);
  struct Cyc_List_List * _T82;
  struct _fat_ptr _T83;
  struct _fat_ptr _T84;
  struct Cyc_String_pa_PrintArg_struct _T85;
  struct Cyc_String_pa_PrintArg_struct _T86;
  struct Cyc_String_pa_PrintArg_struct _T87;
  struct _fat_ptr _T88;
  void * _T89;
  void * _T8A;
  unsigned int _T8B;
  struct Cyc_String_pa_PrintArg_struct _T8C;
  struct _fat_ptr _T8D;
  void * _T8E;
  void * _T8F;
  unsigned int _T90;
  struct Cyc_String_pa_PrintArg_struct _T91;
  long _T92;
  struct _fat_ptr _T93;
  struct _fat_ptr _T94;
  unsigned char * _T95;
  unsigned char * _T96;
  long _T97;
  struct Cyc_String_pa_PrintArg_struct _T98;
  struct _fat_ptr _T99;
  void * _T9A;
  void * _T9B;
  unsigned int _T9C;
  struct Cyc___cycFILE * _T9D;
  struct _fat_ptr _T9E;
  struct _fat_ptr _T9F;
  int _TA0;
  struct _fat_ptr _TA1;
  struct Cyc_String_pa_PrintArg_struct _TA2;
  struct Cyc_String_pa_PrintArg_struct _TA3;
  struct Cyc_String_pa_PrintArg_struct _TA4;
  struct _fat_ptr _TA5;
  void * _TA6;
  void * _TA7;
  unsigned int _TA8;
  struct Cyc_String_pa_PrintArg_struct _TA9;
  struct _fat_ptr _TAA;
  void * _TAB;
  void * _TAC;
  unsigned int _TAD;
  struct Cyc_String_pa_PrintArg_struct _TAE;
  long _TAF;
  struct _fat_ptr _TB0;
  struct _fat_ptr _TB1;
  unsigned char * _TB2;
  unsigned char * _TB3;
  long _TB4;
  struct Cyc_String_pa_PrintArg_struct _TB5;
  struct _fat_ptr _TB6;
  void * _TB7;
  void * _TB8;
  unsigned int _TB9;
  struct Cyc___cycFILE * _TBA;
  struct _fat_ptr _TBB;
  struct _fat_ptr _TBC;
  struct Cyc___cycFILE * _TBD;
  unsigned int _TBE;
  struct Cyc_NO_SUPPORT_exn_struct * _TBF;
  struct _fat_ptr _TC0;
  struct Cyc_String_pa_PrintArg_struct _TC1;
  struct _fat_ptr _TC2;
  void * _TC3;
  void * _TC4;
  unsigned int _TC5;
  struct _fat_ptr _TC6;
  struct _fat_ptr _TC7;
  void * _TC8;
  long _TC9;
  struct Cyc___cycFILE * _TCA;
  struct _fat_ptr _TCB;
  struct _fat_ptr _TCC;
  struct _tuple15 * _TCD;
  void (* _TCE)(struct Cyc_Hashtable_Table *,struct _fat_ptr *,struct Cyc_Set_Set *);
  void (* _TCF)(struct Cyc_Hashtable_Table *,void *,void *);
  long _TD0;
  struct Cyc___cycFILE * _TD1;
  struct _fat_ptr _TD2;
  struct _fat_ptr _TD3;
  struct Cyc___cycFILE * _TD4;
  unsigned int _TD5;
  struct Cyc_NO_SUPPORT_exn_struct * _TD6;
  struct _fat_ptr _TD7;
  struct Cyc_String_pa_PrintArg_struct _TD8;
  struct _fat_ptr _TD9;
  void * _TDA;
  void * _TDB;
  unsigned int _TDC;
  struct _fat_ptr _TDD;
  struct _fat_ptr _TDE;
  void * _TDF;
  long _TE0;
  struct Cyc___cycFILE * _TE1;
  struct _fat_ptr _TE2;
  struct _fat_ptr _TE3;
  struct Cyc___cycFILE * _TE4;
  unsigned int _TE5;
  int _TE6;
  long _TE7;
  struct Cyc___cycFILE * _TE8;
  struct _fat_ptr _TE9;
  struct _fat_ptr _TEA;
  struct Cyc_List_List * _TEB;
  void * _TEC;
  struct Cyc_String_pa_PrintArg_struct _TED;
  struct _fat_ptr * _TEE;
  struct Cyc___cycFILE * _TEF;
  struct _fat_ptr _TF0;
  struct _fat_ptr _TF1;
  struct Cyc_List_List * _TF2;
  struct Cyc___cycFILE * _TF3;
  struct Cyc___cycFILE * _TF4;
  unsigned int _TF5;
  long _TF6;
  struct Cyc___cycFILE * _TF7;
  struct _fat_ptr _TF8;
  struct _fat_ptr _TF9;
  struct _fat_ptr _TFA;
  void * _TFB;
  void * _TFC;
  unsigned int _TFD;
  struct _handler_cons * _TFE;
  int _TFF;
  long _T100;
  struct Cyc___cycFILE * _T101;
  struct _fat_ptr _T102;
  struct _fat_ptr _T103;
  void * _T104;
  long _T105;
  struct Cyc___cycFILE * _T106;
  struct _fat_ptr _T107;
  struct _fat_ptr _T108;
  struct Cyc_List_List * _T109;
  void * _T10A;
  struct Cyc_Absyn_Decl * _T10B;
  struct Cyc_Hashtable_Table * _T10C;
  struct Cyc_List_List * _T10D;
  struct Cyc_List_List * (* _T10E)(struct _fat_ptr * (*)(struct _fat_ptr *),
				   struct Cyc_List_List *);
  struct Cyc_List_List * (* _T10F)(void * (*)(void *),struct Cyc_List_List *);
  struct _tuple0 _T110;
  struct Cyc_List_List * _T111;
  struct Cyc_List_List * _T112;
  struct Cyc_Hashtable_Table * _T113;
  struct Cyc_Set_Set * (* _T114)(int (*)(struct _fat_ptr *,struct _fat_ptr *));
  struct Cyc_Set_Set * (* _T115)(int (*)(void *,void *));
  int (* _T116)(struct _fat_ptr *,struct _fat_ptr *);
  struct Cyc_List_List * _T117;
  void * _T118;
  struct Cyc_Absyn_Decl * _T119;
  int * _T11A;
  unsigned int _T11B;
  struct Cyc_Absyn_Vardecl * _T11C;
  struct Cyc_Set_Set * (* _T11D)(struct Cyc_Set_Set *,struct _fat_ptr *);
  struct Cyc_Set_Set * (* _T11E)(struct Cyc_Set_Set *,void *);
  long (* _T11F)(int (*)(struct _fat_ptr *,struct _fat_ptr *),struct Cyc_List_List *,
		 struct _fat_ptr *);
  long (* _T120)(int (*)(void *,void *),struct Cyc_List_List *,void *);
  int (* _T121)(struct _fat_ptr *,struct _fat_ptr *);
  struct Cyc_List_List * _T122;
  struct _fat_ptr * _T123;
  long _T124;
  struct Cyc_Absyn_Fndecl * _T125;
  struct Cyc_Set_Set * (* _T126)(struct Cyc_Set_Set *,struct _fat_ptr *);
  struct Cyc_Set_Set * (* _T127)(struct Cyc_Set_Set *,void *);
  long (* _T128)(int (*)(struct _fat_ptr *,struct _fat_ptr *),struct Cyc_List_List *,
		 struct _fat_ptr *);
  long (* _T129)(int (*)(void *,void *),struct Cyc_List_List *,void *);
  int (* _T12A)(struct _fat_ptr *,struct _fat_ptr *);
  struct Cyc_List_List * _T12B;
  struct _fat_ptr * _T12C;
  long _T12D;
  struct Cyc_Absyn_Aggrdecl * _T12E;
  struct Cyc_Absyn_Enumdecl * _T12F;
  long (* _T130)(struct Cyc_Set_Set *,struct _fat_ptr *);
  long (* _T131)(struct Cyc_Set_Set *,void *);
  long _T132;
  struct Cyc_List_List * _T133;
  struct Cyc_Absyn_Enumdecl * _T134;
  struct Cyc_Core_Opt * _T135;
  unsigned int _T136;
  struct Cyc_Absyn_Enumdecl * _T137;
  struct Cyc_Core_Opt * _T138;
  void * _T139;
  struct Cyc_List_List * _T13A;
  void * _T13B;
  struct Cyc_Absyn_Enumfield * _T13C;
  long (* _T13D)(struct Cyc_Set_Set *,struct _fat_ptr *);
  long (* _T13E)(struct Cyc_Set_Set *,void *);
  long _T13F;
  struct Cyc_List_List * _T140;
  struct Cyc_List_List * _T141;
  struct Cyc_Absyn_Typedefdecl * _T142;
  long (* _T143)(struct Cyc_Set_Set *,struct _fat_ptr *);
  long (* _T144)(struct Cyc_Set_Set *,void *);
  long _T145;
  struct _fat_ptr * _T146;
  struct _fat_ptr _T147;
  struct _fat_ptr _T148;
  unsigned long _T149;
  int _T14A;
  struct Cyc_List_List * _T14B;
  struct Cyc_List_List * _T14C;
  struct Cyc_List_List * _T14D;
  long _T14E;
  struct Cyc___cycFILE * _T14F;
  unsigned int _T150;
  struct _fat_ptr _T151;
  struct Cyc_String_pa_PrintArg_struct _T152;
  struct _fat_ptr _T153;
  void * _T154;
  void * _T155;
  unsigned int _T156;
  struct _fat_ptr _T157;
  struct _fat_ptr _T158;
  int _T159;
  unsigned int _T15A;
  struct _fat_ptr _T15B;
  unsigned int _T15C;
  struct _fat_ptr _T15D;
  unsigned char * _T15E;
  char * _T15F;
  char * _T160;
  int _T161;
  char _T162;
  int _T163;
  struct _fat_ptr _T164;
  unsigned char * _T165;
  char * _T166;
  int _T167;
  char _T168;
  int _T169;
  struct _fat_ptr _T16A;
  int _T16B;
  unsigned char * _T16C;
  char * _T16D;
  unsigned int _T16E;
  unsigned char * _T16F;
  char * _T170;
  struct _fat_ptr _T171;
  unsigned char * _T172;
  char * _T173;
  int _T174;
  char _T175;
  int _T176;
  struct _fat_ptr _T177;
  unsigned char * _T178;
  char * _T179;
  int _T17A;
  char _T17B;
  int _T17C;
  struct _fat_ptr _T17D;
  int _T17E;
  unsigned char * _T17F;
  char * _T180;
  struct _fat_ptr _T181;
  unsigned char * _T182;
  char * _T183;
  int _T184;
  char _T185;
  int _T186;
  int _T187;
  unsigned int _T188;
  unsigned char * _T189;
  char * _T18A;
  long _T18B;
  struct Cyc___cycFILE * _T18C;
  struct _fat_ptr _T18D;
  struct _fat_ptr _T18E;
  struct Cyc_String_pa_PrintArg_struct _T18F;
  struct Cyc_String_pa_PrintArg_struct _T190;
  struct Cyc___cycFILE * _T191;
  struct _fat_ptr _T192;
  struct _fat_ptr _T193;
  struct Cyc_List_List * _T194;
  void * _T195;
  struct Cyc_Absyn_Decl * _T196;
  int * _T197;
  unsigned int _T198;
  struct Cyc_Absyn_Vardecl * _T199;
  struct Cyc_Absyn_Fndecl * _T19A;
  long _T19B;
  struct Cyc_Absyn_Fndecl * _T19C;
  struct Cyc_Absyn_Aggrdecl * _T19D;
  struct Cyc_Absyn_Enumdecl * _T19E;
  struct Cyc_Absyn_Typedefdecl * _T19F;
  struct _fat_ptr * _T1A0;
  unsigned int _T1A1;
  long _T1A2;
  long (* _T1A3)(struct Cyc_Set_Set *,struct _fat_ptr *);
  long (* _T1A4)(struct Cyc_Set_Set *,void *);
  struct Cyc_Set_Set * _T1A5;
  struct _fat_ptr * _T1A6;
  long _T1A7;
  struct Cyc_Core_Impossible_exn_struct * _T1A8;
  void * _T1A9;
  struct Cyc_Absyn_Decl * _T1AA;
  int * _T1AB;
  unsigned int _T1AC;
  struct Cyc_NO_SUPPORT_exn_struct * _T1AD;
  void * _T1AE;
  struct Cyc_List_List * _T1AF;
  struct Cyc_List_List * _T1B0;
  struct Cyc_List_List * _T1B1;
  struct Cyc_List_List * _T1B2;
  struct _handler_cons * _T1B3;
  int _T1B4;
  struct Cyc_Tcenv_Tenv * _T1B5;
  struct Cyc_List_List * _T1B6;
  void * _T1B7;
  struct Cyc_NO_SUPPORT_exn_struct * _T1B8;
  void * _T1B9;
  struct _tuple0 _T1BA;
  struct Cyc_List_List * _T1BB;
  void * _T1BC;
  struct Cyc_List_List * _T1BD;
  void * _T1BE;
  struct _fat_ptr * _T1BF;
  unsigned int _T1C0;
  struct Cyc_Absynpp_Params * _T1C1;
  struct Cyc_Absynpp_Params * _T1C2;
  struct _fat_ptr * _T1C3;
  unsigned int _T1C4;
  struct Cyc_Absyn_Decl * _T1C5;
  int * _T1C6;
  unsigned int _T1C7;
  struct _fat_ptr _T1C8;
  struct Cyc_String_pa_PrintArg_struct _T1C9;
  struct _fat_ptr * _T1CA;
  struct Cyc_String_pa_PrintArg_struct _T1CB;
  struct _fat_ptr _T1CC;
  struct _fat_ptr _T1CD;
  struct Cyc_String_pa_PrintArg_struct _T1CE;
  struct Cyc___cycFILE * _T1CF;
  struct _fat_ptr _T1D0;
  struct _fat_ptr _T1D1;
  struct Cyc_String_pa_PrintArg_struct _T1D2;
  struct Cyc___cycFILE * _T1D3;
  struct _fat_ptr _T1D4;
  struct _fat_ptr _T1D5;
  struct Cyc_List_List * _T1D6;
  struct _fat_ptr _T1D7;
  struct Cyc___cycFILE * _T1D8;
  struct Cyc___cycFILE * _T1D9;
  struct _fat_ptr _T1DA;
  struct _fat_ptr _T1DB;
  struct Cyc_List_List * _T1DC;
  struct _fat_ptr _T1DD;
  struct Cyc___cycFILE * _T1DE;
  struct Cyc_List_List * _T1DF;
  struct Cyc_List_List * _T1E0;
  struct Cyc___cycFILE * _T1E1;
  unsigned int _T1E2;
  struct Cyc_NO_SUPPORT_exn_struct * _T1E3;
  struct _fat_ptr _T1E4;
  struct Cyc_String_pa_PrintArg_struct _T1E5;
  struct _fat_ptr _T1E6;
  void * _T1E7;
  void * _T1E8;
  unsigned int _T1E9;
  struct _fat_ptr _T1EA;
  struct _fat_ptr _T1EB;
  void * _T1EC;
  struct _tuple16 * _T1ED;
  long (* _T1EE)(struct Cyc_Set_Set *,struct _fat_ptr *);
  long (* _T1EF)(struct Cyc_Set_Set *,void *);
  long _T1F0;
  struct Cyc_String_pa_PrintArg_struct _T1F1;
  struct _fat_ptr * _T1F2;
  struct Cyc___cycFILE * _T1F3;
  struct _fat_ptr _T1F4;
  struct _fat_ptr _T1F5;
  struct Cyc_String_pa_PrintArg_struct _T1F6;
  struct Cyc___cycFILE * _T1F7;
  struct _fat_ptr _T1F8;
  struct _fat_ptr _T1F9;
  struct Cyc___cycFILE * _T1FA;
  struct _fat_ptr _T1FB;
  struct _fat_ptr _T1FC;
  struct Cyc_List_List * _T1FD;
  void * _T1FE;
  struct _fat_ptr _T1FF;
  unsigned char * _T200;
  char * _T201;
  struct _fat_ptr _T202;
  unsigned char * _T203;
  char * _T204;
  struct _fat_ptr _T205;
  unsigned char * _T206;
  const char * _T207;
  struct Cyc___cycFILE * _T208;
  long (* _T209)(struct Cyc_Set_Set *,struct _fat_ptr *);
  long (* _T20A)(struct Cyc_Set_Set *,void *);
  struct Cyc_Set_Set * _T20B;
  struct _fat_ptr * _T20C;
  long _T20D;
  struct _fat_ptr _T20E;
  unsigned char * _T20F;
  const char * _T210;
  struct Cyc___cycFILE * _T211;
  struct Cyc_String_pa_PrintArg_struct _T212;
  struct _fat_ptr _T213;
  struct _fat_ptr _T214;
  long _T215;
  struct _fat_ptr * (* _T216)(struct Cyc_Set_Set *);
  void * (* _T217)(struct Cyc_Set_Set *);
  struct Cyc_Set_Set * (* _T218)(struct Cyc_Set_Set *,struct _fat_ptr *);
  struct Cyc_Set_Set * (* _T219)(struct Cyc_Set_Set *,void *);
  struct Cyc_String_pa_PrintArg_struct _T21A;
  struct _fat_ptr * _T21B;
  struct _fat_ptr _T21C;
  struct _fat_ptr _T21D;
  struct _fat_ptr _T21E;
  struct _fat_ptr _T21F;
  struct Cyc_String_pa_PrintArg_struct _T220;
  struct _fat_ptr _T221;
  struct _fat_ptr _T222;
  struct Cyc_List_List * _T223;
  struct Cyc___cycFILE * _T224;
  struct _fat_ptr _T225;
  struct _fat_ptr _T226;
  long _T227;
  struct Cyc___cycFILE * _T228;
  struct _fat_ptr _T229;
  struct _fat_ptr _T22A;
  long _T22B;
  struct Cyc_List_List * _T22C;
  void * _T22D;
  struct _fat_ptr _T22E;
  unsigned char * _T22F;
  char * _T230;
  struct _fat_ptr _T231;
  unsigned char * _T232;
  char * _T233;
  long (* _T234)(struct Cyc_Set_Set *,struct _fat_ptr *);
  long (* _T235)(struct Cyc_Set_Set *,void *);
  struct Cyc_Set_Set * _T236;
  struct _fat_ptr * _T237;
  long _T238;
  struct _fat_ptr _T239;
  unsigned char * _T23A;
  const char * _T23B;
  struct Cyc___cycFILE * _T23C;
  struct Cyc_List_List * _T23D;
  struct Cyc_String_pa_PrintArg_struct _T23E;
  struct _fat_ptr _T23F;
  void * _T240;
  void * _T241;
  unsigned int _T242;
  struct Cyc___cycFILE * _T243;
  struct _fat_ptr _T244;
  struct _fat_ptr _T245;
  struct Cyc_List_List * _T246;
  void * _T247;
  struct _fat_ptr _T248;
  unsigned char * _T249;
  char * _T24A;
  struct _fat_ptr _T24B;
  unsigned char * _T24C;
  char * _T24D;
  long (* _T24E)(struct Cyc_Set_Set *,struct _fat_ptr *);
  long (* _T24F)(struct Cyc_Set_Set *,void *);
  struct Cyc_Set_Set * _T250;
  struct _fat_ptr * _T251;
  long _T252;
  struct _fat_ptr _T253;
  unsigned char * _T254;
  const char * _T255;
  struct Cyc___cycFILE * _T256;
  struct Cyc_List_List * _T257;
  struct Cyc___cycFILE * _T258;
  struct _fat_ptr _T259;
  struct _fat_ptr _T25A;
  void * _T25B;
  struct Cyc_Core_Impossible_exn_struct * _T25C;
  char * _T25D;
  char * _T25E;
  struct Cyc_String_pa_PrintArg_struct _T25F;
  struct _fat_ptr _T260;
  struct _fat_ptr _T261;
  struct Cyc_Dict_Absent_exn_struct * _T262;
  char * _T263;
  char * _T264;
  struct _fat_ptr _T265;
  struct _fat_ptr _T266;
  struct Cyc_Core_Failure_exn_struct * _T267;
  char * _T268;
  char * _T269;
  struct Cyc_String_pa_PrintArg_struct _T26A;
  struct _fat_ptr _T26B;
  struct _fat_ptr _T26C;
  struct Cyc_Core_Invalid_argument_exn_struct * _T26D;
  char * _T26E;
  char * _T26F;
  struct Cyc_String_pa_PrintArg_struct _T270;
  struct _fat_ptr _T271;
  struct _fat_ptr _T272;
  struct Cyc_Core_Not_found_exn_struct * _T273;
  char * _T274;
  char * _T275;
  struct _fat_ptr _T276;
  struct _fat_ptr _T277;
  struct Cyc_NO_SUPPORT_exn_struct * _T278;
  char * _T279;
  char * _T27A;
  struct Cyc_String_pa_PrintArg_struct _T27B;
  struct _fat_ptr _T27C;
  struct _fat_ptr _T27D;
  struct Cyc_Lexing_Error_exn_struct * _T27E;
  char * _T27F;
  char * _T280;
  struct Cyc_String_pa_PrintArg_struct _T281;
  struct _fat_ptr _T282;
  struct _fat_ptr _T283;
  struct _fat_ptr _T284;
  struct _fat_ptr _T285;
  struct Cyc___cycFILE * _T286;
  unsigned int _T287;
  struct Cyc_String_pa_PrintArg_struct _T288;
  struct _fat_ptr _T289;
  void * _T28A;
  void * _T28B;
  unsigned int _T28C;
  struct Cyc___cycFILE * _T28D;
  struct _fat_ptr _T28E;
  struct _fat_ptr _T28F;
  struct Cyc_String_pa_PrintArg_struct _T290;
  struct _fat_ptr _T291;
  void * _T292;
  void * _T293;
  unsigned int _T294;
  struct Cyc___cycFILE * _T295;
  struct _fat_ptr _T296;
  struct _fat_ptr _T297;
  struct _fat_ptr _T298;
  struct _fat_ptr _T299;
  struct Cyc___cycFILE * maybe;
  struct Cyc___cycFILE * in_file;
  struct Cyc___cycFILE * out_file;
  int errorcode = 0;
  _T0 = Cyc_headers_to_do;
  _T1 = (unsigned int)_T0;
  if (! _T1) { goto _TL10C;
  }
  _T3 = Cyc_Set_member;
  { long (* _T29A)(struct Cyc_Set_Set *,struct _fat_ptr *) = (long (*)(struct Cyc_Set_Set *,
								       struct _fat_ptr *))_T3;
    _T2 = _T29A;
  }_T4 = Cyc_headers_to_do;
  _T5 = *_T4;
  { struct _fat_ptr * _T29A = _cycalloc(sizeof(struct _fat_ptr));
    { const char * _T29B = filename;
      _T8 = (void *)_T29B;
      _T9 = (void *)_T29B;
      _TA = _get_zero_arr_size_char(_T9,1U);
      _T7 = _tag_fat(_T8,sizeof(char),_TA);
    }*_T29A = _T7;
    _T6 = (struct _fat_ptr *)_T29A;
  }_TB = _T2(_T5,_T6);
  if (_TB) { goto _TL10C;
  }else { goto _TL10E;
  }
  _TL10E: return 0;
  _TL10C: { struct Cyc_String_pa_PrintArg_struct _T29A;
    _T29A.tag = 0;
    { const char * _T29B = filename;
      _TE = (void *)_T29B;
      _TF = (void *)_T29B;
      _T10 = _get_zero_arr_size_char(_TF,1U);
      _TD = _tag_fat(_TE,sizeof(char),_T10);
    }_T29A.f1 = _TD;
    _TC = _T29A;
  }{ struct Cyc_String_pa_PrintArg_struct _T29A = _TC;
    void * _T29B[1];
    _T29B[0] = &_T29A;
    _T11 = Cyc_stderr;
    _T12 = _tag_fat("********************************* %s...\n",sizeof(char),
		    41U);
    _T13 = _tag_fat(_T29B,sizeof(void *),1);
    Cyc_fprintf(_T11,_T12,_T13);
  }{ struct Cyc_String_pa_PrintArg_struct _T29A;
    _T29A.tag = 0;
    { const char * _T29B = filename;
      _T16 = (void *)_T29B;
      _T17 = (void *)_T29B;
      _T18 = _get_zero_arr_size_char(_T17,1U);
      _T15 = _tag_fat(_T16,sizeof(char),_T18);
    }_T29A.f1 = _T15;
    _T14 = _T29A;
  }{ struct Cyc_String_pa_PrintArg_struct _T29A = _T14;
    void * _T29B[1];
    _T29B[0] = &_T29A;
    _T19 = _tag_fat("\n%s:\n",sizeof(char),6U);
    _T1A = _tag_fat(_T29B,sizeof(void *),1);
    Cyc_log(_T19,_T1A);
  }{ const char * _T29A = filename;
    _T1C = (void *)_T29A;
    _T1D = (void *)_T29A;
    _T1E = _get_zero_arr_size_char(_T1D,1U);
    _T1B = _tag_fat(_T1C,sizeof(char),_T1E);
  }{ struct _fat_ptr basename = Cyc_Filename_basename(_T1B);
    { const char * _T29A = filename;
      _T20 = (void *)_T29A;
      _T21 = (void *)_T29A;
      _T22 = _get_zero_arr_size_char(_T21,1U);
      _T1F = _tag_fat(_T20,sizeof(char),_T22);
    }{ struct _fat_ptr dirname = Cyc_Filename_dirname(_T1F);
      struct _fat_ptr choppedname = Cyc_Filename_chop_extension(basename);
      _T23 = choppedname;
      _T24 = _tag_fat(".iA",sizeof(char),4U);
      _T25 = Cyc_strconcat(_T23,_T24);
      _T26 = _untag_fat_ptr_check_bound(_T25,sizeof(char),1U);
      _T27 = _check_null(_T26);
      { const char * cppinfile = (const char *)_T27;
	_T29 = dirname;
	_T2A = _get_fat_size(_T29,sizeof(char));
	if (_T2A != 0U) { goto _TL10F;
	}
	{ struct Cyc_String_pa_PrintArg_struct _T29A;
	  _T29A.tag = 0;
	  _T29A.f1 = choppedname;
	  _T2C = _T29A;
	}{ struct Cyc_String_pa_PrintArg_struct _T29A = _T2C;
	  void * _T29B[1];
	  _T29B[0] = &_T29A;
	  _T2D = _tag_fat("%s.iB",sizeof(char),6U);
	  _T2E = _tag_fat(_T29B,sizeof(void *),1);
	  _T2B = Cyc_aprintf(_T2D,_T2E);
	}_T28 = _T2B;
	goto _TL110;
	_TL10F: _T2F = dirname;
	{ struct Cyc_String_pa_PrintArg_struct _T29A;
	  _T29A.tag = 0;
	  _T29A.f1 = choppedname;
	  _T31 = _T29A;
	}{ struct Cyc_String_pa_PrintArg_struct _T29A = _T31;
	  void * _T29B[1];
	  _T29B[0] = &_T29A;
	  _T32 = _tag_fat("%s.iB",sizeof(char),6U);
	  _T33 = _tag_fat(_T29B,sizeof(void *),1);
	  _T30 = Cyc_aprintf(_T32,_T33);
	}_T28 = Cyc_Filename_concat(_T2F,_T30);
	_TL110: _T34 = _untag_fat_ptr_check_bound(_T28,sizeof(char),1U);
	_T35 = _check_null(_T34);
	{ const char * macrosfile = (const char *)_T35;
	  _T37 = dirname;
	  _T38 = _get_fat_size(_T37,sizeof(char));
	  if (_T38 != 0U) { goto _TL111;
	  }
	  { struct Cyc_String_pa_PrintArg_struct _T29A;
	    _T29A.tag = 0;
	    _T29A.f1 = choppedname;
	    _T3A = _T29A;
	  }{ struct Cyc_String_pa_PrintArg_struct _T29A = _T3A;
	    void * _T29B[1];
	    _T29B[0] = &_T29A;
	    _T3B = _tag_fat("%s.iC",sizeof(char),6U);
	    _T3C = _tag_fat(_T29B,sizeof(void *),1);
	    _T39 = Cyc_aprintf(_T3B,_T3C);
	  }_T36 = _T39;
	  goto _TL112;
	  _TL111: _T3D = dirname;
	  { struct Cyc_String_pa_PrintArg_struct _T29A;
	    _T29A.tag = 0;
	    _T29A.f1 = choppedname;
	    _T3F = _T29A;
	  }{ struct Cyc_String_pa_PrintArg_struct _T29A = _T3F;
	    void * _T29B[1];
	    _T29B[0] = &_T29A;
	    _T40 = _tag_fat("%s.iC",sizeof(char),6U);
	    _T41 = _tag_fat(_T29B,sizeof(void *),1);
	    _T3E = Cyc_aprintf(_T40,_T41);
	  }_T36 = Cyc_Filename_concat(_T3D,_T3E);
	  _TL112: _T42 = _untag_fat_ptr_check_bound(_T36,sizeof(char),1U);
	  _T43 = _check_null(_T42);
	  { const char * declsfile = (const char *)_T43;
	    _T45 = dirname;
	    _T46 = _get_fat_size(_T45,sizeof(char));
	    if (_T46 != 0U) { goto _TL113;
	    }
	    { struct Cyc_String_pa_PrintArg_struct _T29A;
	      _T29A.tag = 0;
	      _T29A.f1 = choppedname;
	      _T48 = _T29A;
	    }{ struct Cyc_String_pa_PrintArg_struct _T29A = _T48;
	      void * _T29B[1];
	      _T29B[0] = &_T29A;
	      _T49 = _tag_fat("%s.iD",sizeof(char),6U);
	      _T4A = _tag_fat(_T29B,sizeof(void *),1);
	      _T47 = Cyc_aprintf(_T49,_T4A);
	    }_T44 = _T47;
	    goto _TL114;
	    _TL113: _T4B = dirname;
	    { struct Cyc_String_pa_PrintArg_struct _T29A;
	      _T29A.tag = 0;
	      _T29A.f1 = choppedname;
	      _T4D = _T29A;
	    }{ struct Cyc_String_pa_PrintArg_struct _T29A = _T4D;
	      void * _T29B[1];
	      _T29B[0] = &_T29A;
	      _T4E = _tag_fat("%s.iD",sizeof(char),6U);
	      _T4F = _tag_fat(_T29B,sizeof(void *),1);
	      _T4C = Cyc_aprintf(_T4E,_T4F);
	    }_T44 = Cyc_Filename_concat(_T4B,_T4C);
	    _TL114: _T50 = _untag_fat_ptr_check_bound(_T44,sizeof(char),1U);
	    _T51 = _check_null(_T50);
	    { const char * filtereddeclsfile = (const char *)_T51;
	      { struct _handler_cons _T29A;
		_T52 = &_T29A;
		_push_handler(_T52);
		{ int _T29B = 0;
		  _T53 = setjmp(_T29A.handler);
		  if (! _T53) { goto _TL115;
		  }
		  _T29B = 1;
		  goto _TL116;
		  _TL115: _TL116: if (_T29B) { goto _TL117;
		  }else { goto _TL119;
		  }
		  _TL119: { const char * _T29C = filename;
		    _T55 = (void *)_T29C;
		    _T56 = (void *)_T29C;
		    _T57 = _get_zero_arr_size_char(_T56,1U);
		    _T54 = _tag_fat(_T55,sizeof(char),_T57);
		  }_T58 = Cyc_force_directory_prefixes(_T54);
		  if (! _T58) { goto _TL11A;
		  }
		  { int _T29C = 1;
		    _npop_handler(0);
		    return _T29C;
		  }_TL11A: maybe = Cyc_fopen(cppinfile,"w");
		  _T59 = maybe;
		  _T5A = (unsigned int)_T59;
		  if (_T5A) { goto _TL11C;
		  }else { goto _TL11E;
		  }
		  _TL11E: { struct Cyc_String_pa_PrintArg_struct _T29C;
		    _T29C.tag = 0;
		    { const char * _T29D = cppinfile;
		      _T5D = (void *)_T29D;
		      _T5E = (void *)_T29D;
		      _T5F = _get_zero_arr_size_char(_T5E,1U);
		      _T5C = _tag_fat(_T5D,sizeof(char),_T5F);
		    }_T29C.f1 = _T5C;
		    _T5B = _T29C;
		  }{ struct Cyc_String_pa_PrintArg_struct _T29C = _T5B;
		    void * _T29D[1];
		    _T29D[0] = &_T29C;
		    _T60 = Cyc_stderr;
		    _T61 = _tag_fat("Error: could not create file %s\n",sizeof(char),
				    33U);
		    _T62 = _tag_fat(_T29D,sizeof(void *),1);
		    Cyc_fprintf(_T60,_T61,_T62);
		  }{ int _T29C = 1;
		    _npop_handler(0);
		    return _T29C;
		  }_TL11C: _T63 = Cyc_verbose;
		  if (! _T63) { goto _TL11F;
		  }
		  { struct Cyc_String_pa_PrintArg_struct _T29C;
		    _T29C.tag = 0;
		    { const char * _T29D = cppinfile;
		      _T66 = (void *)_T29D;
		      _T67 = (void *)_T29D;
		      _T68 = _get_zero_arr_size_char(_T67,1U);
		      _T65 = _tag_fat(_T66,sizeof(char),_T68);
		    }_T29C.f1 = _T65;
		    _T64 = _T29C;
		  }{ struct Cyc_String_pa_PrintArg_struct _T29C = _T64;
		    void * _T29D[1];
		    _T29D[0] = &_T29C;
		    _T69 = Cyc_stderr;
		    _T6A = _tag_fat("Creating %s\n",sizeof(char),13U);
		    _T6B = _tag_fat(_T29D,sizeof(void *),1);
		    Cyc_fprintf(_T69,_T6A,_T6B);
		  }goto _TL120;
		  _TL11F: _TL120: out_file = maybe;
		  { struct Cyc_List_List * l = cpp_insert;
		    _TL124: if (l != 0) { goto _TL122;
		    }else { goto _TL123;
		    }
		    _TL122: _T6C = l;
		    _T6D = _T6C->hd;
		    _T6E = (struct _fat_ptr *)_T6D;
		    _T6F = *_T6E;
		    _T70 = _untag_fat_ptr_check_bound(_T6F,sizeof(char),1U);
		    _T71 = _check_null(_T70);
		    _T72 = (const char *)_T71;
		    _T73 = out_file;
		    Cyc_fputs(_T72,_T73);
		    _T74 = l;
		    l = _T74->tl;
		    goto _TL124;
		    _TL123: ;
		  }{ struct Cyc_String_pa_PrintArg_struct _T29C;
		    _T29C.tag = 0;
		    { const char * _T29D = filename;
		      _T77 = (void *)_T29D;
		      _T78 = (void *)_T29D;
		      _T79 = _get_zero_arr_size_char(_T78,1U);
		      _T76 = _tag_fat(_T77,sizeof(char),_T79);
		    }_T29C.f1 = _T76;
		    _T75 = _T29C;
		  }{ struct Cyc_String_pa_PrintArg_struct _T29C = _T75;
		    void * _T29D[1];
		    _T29D[0] = &_T29C;
		    _T7A = out_file;
		    _T7B = _tag_fat("#include <%s>\n",sizeof(char),15U);
		    _T7C = _tag_fat(_T29D,sizeof(void *),1);
		    Cyc_fprintf(_T7A,_T7B,_T7C);
		  }Cyc_fclose(out_file);
		  { struct Cyc_List_List * _T29C = _cycalloc(sizeof(struct Cyc_List_List));
		    { struct _fat_ptr * _T29D = _cycalloc(sizeof(struct _fat_ptr));
		      _T7F = _tag_fat("",sizeof(char),1U);
		      *_T29D = _T7F;
		      _T7E = (struct _fat_ptr *)_T29D;
		    }_T29C->hd = _T7E;
		    _T81 = Cyc_List_map;
		    { struct Cyc_List_List * (* _T29D)(struct _fat_ptr * (*)(struct _fat_ptr *),
						       struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct _fat_ptr * (*)(struct _fat_ptr *),
													     struct Cyc_List_List *))_T81;
		      _T80 = _T29D;
		    }_T82 = Cyc_List_rev(Cyc_cppargs);
		    _T29C->tl = _T80(Cyc_sh_escape_stringptr,_T82);
		    _T7D = (struct Cyc_List_List *)_T29C;
		  }_T83 = _tag_fat(" ",sizeof(char),2U);
		  { struct _fat_ptr cppargs_string = Cyc_str_sepstr(_T7D,
								    _T83);
		    { struct Cyc_String_pa_PrintArg_struct _T29C;
		      _T29C.tag = 0;
		      _T29C.f1 = Cyc_cyclone_cc;
		      _T85 = _T29C;
		    }{ struct Cyc_String_pa_PrintArg_struct _T29C = _T85;
		      { struct Cyc_String_pa_PrintArg_struct _T29D;
			_T29D.tag = 0;
			_T29D.f1 = cppargs_string;
			_T86 = _T29D;
		      }{ struct Cyc_String_pa_PrintArg_struct _T29D = _T86;
			{ struct Cyc_String_pa_PrintArg_struct _T29E;
			  _T29E.tag = 0;
			  { const char * _T29F = macrosfile;
			    _T89 = (void *)_T29F;
			    _T8A = (void *)_T29F;
			    _T8B = _get_zero_arr_size_char(_T8A,1U);
			    _T88 = _tag_fat(_T89,sizeof(char),_T8B);
			  }_T29E.f1 = _T88;
			  _T87 = _T29E;
			}{ struct Cyc_String_pa_PrintArg_struct _T29E = _T87;
			  { struct Cyc_String_pa_PrintArg_struct _T29F;
			    _T29F.tag = 0;
			    { const char * _T2A0 = cppinfile;
			      _T8E = (void *)_T2A0;
			      _T8F = (void *)_T2A0;
			      _T90 = _get_zero_arr_size_char(_T8F,1U);
			      _T8D = _tag_fat(_T8E,sizeof(char),_T90);
			    }_T29F.f1 = _T8D;
			    _T8C = _T29F;
			  }{ struct Cyc_String_pa_PrintArg_struct _T29F = _T8C;
			    { struct Cyc_String_pa_PrintArg_struct _T2A0;
			      _T2A0.tag = 0;
			      _T92 = Cyc_verbose;
			      if (! _T92) { goto _TL125;
			      }
			      _T2A0.f1 = _tag_fat("",sizeof(char),1U);
			      goto _TL126;
			      _TL125: _T2A0.f1 = _tag_fat("-w",sizeof(char),
							  3U);
			      _TL126: _T91 = _T2A0;
			    }{ struct Cyc_String_pa_PrintArg_struct _T2A0 = _T91;
			      void * _T2A1[5];
			      _T2A1[0] = &_T29C;
			      _T2A1[1] = &_T29D;
			      _T2A1[2] = &_T29E;
			      _T2A1[3] = &_T29F;
			      _T2A1[4] = &_T2A0;
			      _T93 = _tag_fat("%s %s -E -dM -o %s -x c %s %s",
					      sizeof(char),30U);
			      _T94 = _tag_fat(_T2A1,sizeof(void *),5);
			      _T84 = Cyc_aprintf(_T93,_T94);
			    }
			  }
			}
		      }
		    }_T95 = _untag_fat_ptr_check_bound(_T84,sizeof(char),
						       1U);
		    _T96 = _check_null(_T95);
		    { char * cmd = (char *)_T96;
		      _T97 = Cyc_verbose;
		      if (! _T97) { goto _TL127;
		      }
		      { struct Cyc_String_pa_PrintArg_struct _T29C;
			_T29C.tag = 0;
			{ char * _T29D = cmd;
			  _T9A = (void *)_T29D;
			  _T9B = (void *)_T29D;
			  _T9C = _get_zero_arr_size_char(_T9B,1U);
			  _T99 = _tag_fat(_T9A,sizeof(char),_T9C);
			}_T29C.f1 = _T99;
			_T98 = _T29C;
		      }{ struct Cyc_String_pa_PrintArg_struct _T29C = _T98;
			void * _T29D[1];
			_T29D[0] = &_T29C;
			_T9D = Cyc_stderr;
			_T9E = _tag_fat("%s\n",sizeof(char),4U);
			_T9F = _tag_fat(_T29D,sizeof(void *),1);
			Cyc_fprintf(_T9D,_T9E,_T9F);
		      }goto _TL128;
		      _TL127: _TL128: _TA0 = system(cmd);
		      if (_TA0) { goto _TL129;
		      }else { goto _TL12B;
		      }
		      _TL12B: { struct Cyc_String_pa_PrintArg_struct _T29C;
			_T29C.tag = 0;
			_T29C.f1 = Cyc_cyclone_cc;
			_TA2 = _T29C;
		      }{ struct Cyc_String_pa_PrintArg_struct _T29C = _TA2;
			{ struct Cyc_String_pa_PrintArg_struct _T29D;
			  _T29D.tag = 0;
			  _T29D.f1 = cppargs_string;
			  _TA3 = _T29D;
			}{ struct Cyc_String_pa_PrintArg_struct _T29D = _TA3;
			  { struct Cyc_String_pa_PrintArg_struct _T29E;
			    _T29E.tag = 0;
			    { const char * _T29F = declsfile;
			      _TA6 = (void *)_T29F;
			      _TA7 = (void *)_T29F;
			      _TA8 = _get_zero_arr_size_char(_TA7,1U);
			      _TA5 = _tag_fat(_TA6,sizeof(char),_TA8);
			    }_T29E.f1 = _TA5;
			    _TA4 = _T29E;
			  }{ struct Cyc_String_pa_PrintArg_struct _T29E = _TA4;
			    { struct Cyc_String_pa_PrintArg_struct _T29F;
			      _T29F.tag = 0;
			      { const char * _T2A0 = cppinfile;
				_TAB = (void *)_T2A0;
				_TAC = (void *)_T2A0;
				_TAD = _get_zero_arr_size_char(_TAC,1U);
				_TAA = _tag_fat(_TAB,sizeof(char),_TAD);
			      }_T29F.f1 = _TAA;
			      _TA9 = _T29F;
			    }{ struct Cyc_String_pa_PrintArg_struct _T29F = _TA9;
			      { struct Cyc_String_pa_PrintArg_struct _T2A0;
				_T2A0.tag = 0;
				_TAF = Cyc_verbose;
				if (! _TAF) { goto _TL12C;
				}
				_T2A0.f1 = _tag_fat("",sizeof(char),1U);
				goto _TL12D;
				_TL12C: _T2A0.f1 = _tag_fat("-w",sizeof(char),
							    3U);
				_TL12D: _TAE = _T2A0;
			      }{ struct Cyc_String_pa_PrintArg_struct _T2A0 = _TAE;
				void * _T2A1[5];
				_T2A1[0] = &_T29C;
				_T2A1[1] = &_T29D;
				_T2A1[2] = &_T29E;
				_T2A1[3] = &_T29F;
				_T2A1[4] = &_T2A0;
				_TB0 = _tag_fat("%s %s -E -o %s -x c %s %s",
						sizeof(char),26U);
				_TB1 = _tag_fat(_T2A1,sizeof(void *),5);
				_TA1 = Cyc_aprintf(_TB0,_TB1);
			      }
			    }
			  }
			}
		      }_TB2 = _untag_fat_ptr_check_bound(_TA1,sizeof(char),
							 1U);
		      _TB3 = _check_null(_TB2);
		      cmd = (char *)_TB3;
		      _TB4 = Cyc_verbose;
		      if (! _TB4) { goto _TL12E;
		      }
		      { struct Cyc_String_pa_PrintArg_struct _T29C;
			_T29C.tag = 0;
			{ char * _T29D = cmd;
			  _TB7 = (void *)_T29D;
			  _TB8 = (void *)_T29D;
			  _TB9 = _get_zero_arr_size_char(_TB8,1U);
			  _TB6 = _tag_fat(_TB7,sizeof(char),_TB9);
			}_T29C.f1 = _TB6;
			_TB5 = _T29C;
		      }{ struct Cyc_String_pa_PrintArg_struct _T29C = _TB5;
			void * _T29D[1];
			_T29D[0] = &_T29C;
			_TBA = Cyc_stderr;
			_TBB = _tag_fat("%s\n",sizeof(char),4U);
			_TBC = _tag_fat(_T29D,sizeof(void *),1);
			Cyc_fprintf(_TBA,_TBB,_TBC);
		      }goto _TL12F;
		      _TL12E: _TL12F: system(cmd);
		      goto _TL12A;
		      _TL129: _TL12A: { struct Cyc_Hashtable_Table * t = Cyc_new_deps();
			maybe = Cyc_fopen(macrosfile,"r");
			_TBD = maybe;
			_TBE = (unsigned int)_TBD;
			if (_TBE) { goto _TL130;
			}else { goto _TL132;
			}
			_TL132: { struct Cyc_NO_SUPPORT_exn_struct * _T29C = _cycalloc(sizeof(struct Cyc_NO_SUPPORT_exn_struct));
			  _T29C->tag = Cyc_NO_SUPPORT;
			  { struct Cyc_String_pa_PrintArg_struct _T29D;
			    _T29D.tag = 0;
			    { const char * _T29E = macrosfile;
			      _TC3 = (void *)_T29E;
			      _TC4 = (void *)_T29E;
			      _TC5 = _get_zero_arr_size_char(_TC4,1U);
			      _TC2 = _tag_fat(_TC3,sizeof(char),_TC5);
			    }_T29D.f1 = _TC2;
			    _TC1 = _T29D;
			  }{ struct Cyc_String_pa_PrintArg_struct _T29D = _TC1;
			    void * _T29E[1];
			    _T29E[0] = &_T29D;
			    _TC6 = _tag_fat("can't open macrosfile %s",sizeof(char),
					    25U);
			    _TC7 = _tag_fat(_T29E,sizeof(void *),1);
			    _TC0 = Cyc_aprintf(_TC6,_TC7);
			  }_T29C->f1 = _TC0;
			  _TBF = (struct Cyc_NO_SUPPORT_exn_struct *)_T29C;
			}_TC8 = (void *)_TBF;
			_throw(_TC8);
			goto _TL131;
			_TL130: _TL131: _TC9 = Cyc_verbose;
			if (! _TC9) { goto _TL133;
			}
			_TCA = Cyc_stderr;
			_TCB = _tag_fat("Getting macros...",sizeof(char),
					18U);
			_TCC = _tag_fat(0U,sizeof(void *),0);
			Cyc_fprintf(_TCA,_TCB,_TCC);
			goto _TL134;
			_TL133: _TL134: in_file = maybe;
			{ struct Cyc_Lexing_lexbuf * l = Cyc_Lexing_from_file(in_file);
			  struct _tuple15 * entry;
			  int i = 0;
			  _TL135: entry = Cyc_line(l);
			  _TCD = entry;
			  if (_TCD != 0) { goto _TL136;
			  }else { goto _TL137;
			  }
			  _TL136: { struct _tuple15 * _T29C = entry;
			    struct Cyc_Set_Set * _T29D;
			    struct _fat_ptr * _T29E;
			    { struct _tuple15 _T29F = *_T29C;
			      _T29E = _T29F.f0;
			      _T29D = _T29F.f1;
			    }{ struct _fat_ptr * name = _T29E;
			      struct Cyc_Set_Set * uses = _T29D;
			      _TCF = Cyc_Hashtable_insert;
			      { void (* _T29F)(struct Cyc_Hashtable_Table *,
					       struct _fat_ptr *,struct Cyc_Set_Set *) = (void (*)(struct Cyc_Hashtable_Table *,
												   struct _fat_ptr *,
												   struct Cyc_Set_Set *))_TCF;
				_TCE = _T29F;
			      }_TCE(t,name,uses);
			    }
			  }goto _TL135;
			  _TL137: Cyc_fclose(in_file);
			  _TD0 = Cyc_verbose;
			  if (! _TD0) { goto _TL138;
			  }
			  _TD1 = Cyc_stderr;
			  _TD2 = _tag_fat("done.\n",sizeof(char),7U);
			  _TD3 = _tag_fat(0U,sizeof(void *),0);
			  Cyc_fprintf(_TD1,_TD2,_TD3);
			  goto _TL139;
			  _TL138: _TL139: maybe = Cyc_fopen(declsfile,"r");
			  _TD4 = maybe;
			  _TD5 = (unsigned int)_TD4;
			  if (_TD5) { goto _TL13A;
			  }else { goto _TL13C;
			  }
			  _TL13C: { struct Cyc_NO_SUPPORT_exn_struct * _T29C = _cycalloc(sizeof(struct Cyc_NO_SUPPORT_exn_struct));
			    _T29C->tag = Cyc_NO_SUPPORT;
			    { struct Cyc_String_pa_PrintArg_struct _T29D;
			      _T29D.tag = 0;
			      { const char * _T29E = declsfile;
				_TDA = (void *)_T29E;
				_TDB = (void *)_T29E;
				_TDC = _get_zero_arr_size_char(_TDB,1U);
				_TD9 = _tag_fat(_TDA,sizeof(char),_TDC);
			      }_T29D.f1 = _TD9;
			      _TD8 = _T29D;
			    }{ struct Cyc_String_pa_PrintArg_struct _T29D = _TD8;
			      void * _T29E[1];
			      _T29E[0] = &_T29D;
			      _TDD = _tag_fat("can't open declsfile %s",sizeof(char),
					      24U);
			      _TDE = _tag_fat(_T29E,sizeof(void *),1);
			      _TD7 = Cyc_aprintf(_TDD,_TDE);
			    }_T29C->f1 = _TD7;
			    _TD6 = (struct Cyc_NO_SUPPORT_exn_struct *)_T29C;
			  }_TDF = (void *)_TD6;
			  _throw(_TDF);
			  goto _TL13B;
			  _TL13A: _TL13B: _TE0 = Cyc_verbose;
			  if (! _TE0) { goto _TL13D;
			  }
			  _TE1 = Cyc_stderr;
			  _TE2 = _tag_fat("Extracting declarations...",sizeof(char),
					  27U);
			  _TE3 = _tag_fat(0U,sizeof(void *),0);
			  Cyc_fprintf(_TE1,_TE2,_TE3);
			  goto _TL13E;
			  _TL13D: _TL13E: in_file = maybe;
			  l = Cyc_Lexing_from_file(in_file);
			  Cyc_slurp_out = Cyc_fopen(filtereddeclsfile,"w");
			  _TE4 = Cyc_slurp_out;
			  _TE5 = (unsigned int)_TE4;
			  if (_TE5) { goto _TL13F;
			  }else { goto _TL141;
			  }
			  _TL141: { int _T29C = 1;
			    _npop_handler(0);
			    return _T29C;
			  }_TL13F: _TL142: _TE6 = Cyc_slurp(l);
			  if (_TE6) { goto _TL143;
			  }else { goto _TL144;
			  }
			  _TL143: goto _TL142;
			  _TL144: _TE7 = Cyc_verbose;
			  if (! _TE7) { goto _TL145;
			  }
			  _TE8 = Cyc_stderr;
			  _TE9 = _tag_fat("done.\n",sizeof(char),7U);
			  _TEA = _tag_fat(0U,sizeof(void *),0);
			  Cyc_fprintf(_TE8,_TE9,_TEA);
			  goto _TL146;
			  _TL145: _TL146: { struct Cyc_List_List * x = user_defs;
			    _TL147: if (x != 0) { goto _TL148;
			    }else { goto _TL149;
			    }
			    _TL148: _TEB = x;
			    _TEC = _TEB->hd;
			    { struct _tuple18 * _T29C = (struct _tuple18 *)_TEC;
			      struct _fat_ptr * _T29D;
			      { struct _tuple18 _T29E = *_T29C;
				_T29D = _T29E.f1;
			      }{ struct _fat_ptr * s = _T29D;
				{ struct Cyc_String_pa_PrintArg_struct _T29E;
				  _T29E.tag = 0;
				  _TEE = s;
				  _T29E.f1 = *_TEE;
				  _TED = _T29E;
				}{ struct Cyc_String_pa_PrintArg_struct _T29E = _TED;
				  void * _T29F[1];
				  _T29F[0] = &_T29E;
				  _TEF = _check_null(Cyc_slurp_out);
				  _TF0 = _tag_fat("%s",sizeof(char),3U);
				  _TF1 = _tag_fat(_T29F,sizeof(void *),1);
				  Cyc_fprintf(_TEF,_TF0,_TF1);
				}_TF2 = x;
				x = _TF2->tl;
			      }
			    }goto _TL147;
			    _TL149: Cyc_fclose(in_file);
			    _TF3 = _check_null(Cyc_slurp_out);
			    Cyc_fclose(_TF3);
			    maybe = Cyc_fopen(filtereddeclsfile,"r");
			    _TF4 = maybe;
			    _TF5 = (unsigned int)_TF4;
			    if (_TF5) { goto _TL14A;
			    }else { goto _TL14C;
			    }
			    _TL14C: { int _T29C = 1;
			      _npop_handler(0);
			      return _T29C;
			    }_TL14A: _TF6 = Cyc_verbose;
			    if (! _TF6) { goto _TL14D;
			    }
			    _TF7 = Cyc_stderr;
			    _TF8 = _tag_fat("Parsing declarations...",sizeof(char),
					    24U);
			    _TF9 = _tag_fat(0U,sizeof(void *),0);
			    Cyc_fprintf(_TF7,_TF8,_TF9);
			    goto _TL14E;
			    _TL14D: _TL14E: in_file = maybe;
			    { const char * _T29C = filtereddeclsfile;
			      _TFB = (void *)_T29C;
			      _TFC = (void *)_T29C;
			      _TFD = _get_zero_arr_size_char(_TFC,1U);
			      _TFA = _tag_fat(_TFB,sizeof(char),_TFD);
			    }Cyc_Warn_reset(_TFA);
			    Cyc_Lex_lex_init(0);
			    Cyc_Warn_print_warnings = Cyc_verbose;
			    { struct Cyc_List_List * decls = 0;
			      { struct _handler_cons _T29C;
				_TFE = &_T29C;
				_push_handler(_TFE);
				{ int _T29D = 0;
				  _TFF = setjmp(_T29C.handler);
				  if (! _TFF) { goto _TL14F;
				  }
				  _T29D = 1;
				  goto _TL150;
				  _TL14F: _TL150: if (_T29D) { goto _TL151;
				  }else { goto _TL153;
				  }
				  _TL153: decls = Cyc_Parse_parse_file(in_file);
				  Cyc_Warn_print_warnings = 1;
				  Cyc_Lex_lex_init(0);
				  Cyc_fclose(in_file);
				  _T100 = Cyc_verbose;
				  if (! _T100) { goto _TL154;
				  }
				  _T101 = Cyc_stderr;
				  _T102 = _tag_fat("done.\n",sizeof(char),
						   7U);
				  _T103 = _tag_fat(0U,sizeof(void *),0);
				  Cyc_fprintf(_T101,_T102,_T103);
				  goto _TL155;
				  _TL154: _TL155: _pop_handler();
				  goto _TL152;
				  _TL151: _T104 = Cyc_Core_get_exn_thrown();
				  { void * _T29E = (void *)_T104;
				    void * _T29F;
				    _T29F = _T29E;
				    { void * x = _T29F;
				      Cyc_Warn_print_warnings = 1;
				      Cyc_Lex_lex_init(0);
				      Cyc_fclose(in_file);
				      _T105 = Cyc_verbose;
				      if (! _T105) { goto _TL156;
				      }
				      _T106 = Cyc_stderr;
				      _T107 = _tag_fat("exception thrown.\n",
						       sizeof(char),19U);
				      _T108 = _tag_fat(0U,sizeof(void *),
						       0);
				      Cyc_fprintf(_T106,_T107,_T108);
				      goto _TL157;
				      _TL156: _TL157: Cyc_Core_rethrow(x);
				      goto _LL6;
				    }_LL6: ;
				  }_TL152: ;
				}
			      }{ struct Cyc_List_List * d = decls;
				_TL15B: if (d != 0) { goto _TL159;
				}else { goto _TL15A;
				}
				_TL159: _T109 = d;
				_T10A = _T109->hd;
				_T10B = (struct Cyc_Absyn_Decl *)_T10A;
				_T10C = t;
				Cyc_scan_decl(_T10B,_T10C);
				_T10D = d;
				d = _T10D->tl;
				goto _TL15B;
				_TL15A: ;
			      }_T10F = Cyc_List_map;
			      { struct Cyc_List_List * (* _T29C)(struct _fat_ptr * (*)(struct _fat_ptr *),
								 struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct _fat_ptr * (*)(struct _fat_ptr *),
														       struct Cyc_List_List *))_T10F;
				_T10E = _T29C;
			      }_T110 = Cyc_List_split(user_defs);
			      _T111 = _T110.f0;
			      { struct Cyc_List_List * user_symbols = _T10E(Cyc_add_user_prefix,
									    _T111);
				_T112 = Cyc_List_append(start_symbols,user_symbols);
				_T113 = t;
				{ struct Cyc_Set_Set * reachable_set = Cyc_reachable(_T112,
										     _T113);
				  struct Cyc_List_List * reachable_decls = 0;
				  struct Cyc_List_List * user_decls = 0;
				  _T115 = Cyc_Set_empty;
				  { struct Cyc_Set_Set * (* _T29C)(int (*)(struct _fat_ptr *,
									   struct _fat_ptr *)) = (struct Cyc_Set_Set * (*)(int (*)(struct _fat_ptr *,
																   struct _fat_ptr *)))_T115;
				    _T114 = _T29C;
				  }_T116 = Cyc_strptrcmp;
				  { struct Cyc_Set_Set * defined_symbols = _T114(_T116);
				    { struct Cyc_List_List * d = decls;
				      _TL15F: if (d != 0) { goto _TL15D;
				      }else { goto _TL15E;
				      }
				      _TL15D: _T117 = d;
				      _T118 = _T117->hd;
				      { struct Cyc_Absyn_Decl * decl = (struct Cyc_Absyn_Decl *)_T118;
					struct _fat_ptr * name;
					_T119 = decl;
					{ void * _T29C = _T119->r;
					  struct Cyc_Absyn_Typedefdecl * _T29D;
					  struct Cyc_Absyn_Enumdecl * _T29E;
					  struct Cyc_Absyn_Aggrdecl * _T29F;
					  struct Cyc_Absyn_Fndecl * _T2A0;
					  struct Cyc_Absyn_Vardecl * _T2A1;
					  _T11A = (int *)_T29C;
					  _T11B = *_T11A;
					  switch (_T11B) {
					  case 0: 
					    { struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T2A2 = (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct *)_T29C;
					      _T2A1 = _T2A2->f1;
					    }{ struct Cyc_Absyn_Vardecl * x = _T2A1;
					      _T11C = x;
					      { struct _tuple1 * _T2A2 = _T11C->name;
						struct _fat_ptr * _T2A3;
						{ struct _tuple1 _T2A4 = *_T2A2;
						  _T2A3 = _T2A4.f1;
						}{ struct _fat_ptr * v = _T2A3;
						  _T11E = Cyc_Set_insert;
						  { struct Cyc_Set_Set * (* _T2A4)(struct Cyc_Set_Set *,
										   struct _fat_ptr *) = (struct Cyc_Set_Set * (*)(struct Cyc_Set_Set *,
																  struct _fat_ptr *))_T11E;
						    _T11D = _T2A4;
						  }defined_symbols = _T11D(defined_symbols,
									   v);
						  _T120 = Cyc_List_mem;
						  { long (* _T2A4)(int (*)(struct _fat_ptr *,
									   struct _fat_ptr *),
								   struct Cyc_List_List *,
								   struct _fat_ptr *) = (long (*)(int (*)(struct _fat_ptr *,
													  struct _fat_ptr *),
												  struct Cyc_List_List *,
												  struct _fat_ptr *))_T120;
						    _T11F = _T2A4;
						  }_T121 = Cyc_strptrcmp;
						  _T122 = omit_symbols;
						  _T123 = v;
						  _T124 = _T11F(_T121,_T122,
								_T123);
						  if (! _T124) { goto _TL161;
						  }
						  name = 0;
						  goto _TL162;
						  _TL161: name = v;
						  _TL162: goto _LL9;
						}
					      }
					    }
					  case 1: 
					    { struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct * _T2A2 = (struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct *)_T29C;
					      _T2A0 = _T2A2->f1;
					    }{ struct Cyc_Absyn_Fndecl * x = _T2A0;
					      _T125 = x;
					      { struct _tuple1 * _T2A2 = _T125->name;
						struct _fat_ptr * _T2A3;
						{ struct _tuple1 _T2A4 = *_T2A2;
						  _T2A3 = _T2A4.f1;
						}{ struct _fat_ptr * v = _T2A3;
						  _T127 = Cyc_Set_insert;
						  { struct Cyc_Set_Set * (* _T2A4)(struct Cyc_Set_Set *,
										   struct _fat_ptr *) = (struct Cyc_Set_Set * (*)(struct Cyc_Set_Set *,
																  struct _fat_ptr *))_T127;
						    _T126 = _T2A4;
						  }defined_symbols = _T126(defined_symbols,
									   v);
						  _T129 = Cyc_List_mem;
						  { long (* _T2A4)(int (*)(struct _fat_ptr *,
									   struct _fat_ptr *),
								   struct Cyc_List_List *,
								   struct _fat_ptr *) = (long (*)(int (*)(struct _fat_ptr *,
													  struct _fat_ptr *),
												  struct Cyc_List_List *,
												  struct _fat_ptr *))_T129;
						    _T128 = _T2A4;
						  }_T12A = Cyc_strptrcmp;
						  _T12B = omit_symbols;
						  _T12C = v;
						  _T12D = _T128(_T12A,_T12B,
								_T12C);
						  if (! _T12D) { goto _TL163;
						  }
						  name = 0;
						  goto _TL164;
						  _TL163: name = v;
						  _TL164: goto _LL9;
						}
					      }
					    }
					  case 5: 
					    { struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct * _T2A2 = (struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct *)_T29C;
					      _T29F = _T2A2->f1;
					    }{ struct Cyc_Absyn_Aggrdecl * x = _T29F;
					      _T12E = x;
					      { struct _tuple1 * _T2A2 = _T12E->name;
						struct _fat_ptr * _T2A3;
						{ struct _tuple1 _T2A4 = *_T2A2;
						  _T2A3 = _T2A4.f1;
						}{ struct _fat_ptr * v = _T2A3;
						  name = v;
						  goto _LL9;
						}
					      }
					    }
					  case 7: 
					    { struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct * _T2A2 = (struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct *)_T29C;
					      _T29E = _T2A2->f1;
					    }{ struct Cyc_Absyn_Enumdecl * x = _T29E;
					      _T12F = x;
					      { struct _tuple1 * _T2A2 = _T12F->name;
						struct _fat_ptr * _T2A3;
						{ struct _tuple1 _T2A4 = *_T2A2;
						  _T2A3 = _T2A4.f1;
						}{ struct _fat_ptr * v = _T2A3;
						  name = v;
						  if (name == 0) { goto _TL165;
						  }
						  _T131 = Cyc_Set_member;
						  { long (* _T2A4)(struct Cyc_Set_Set *,
								   struct _fat_ptr *) = (long (*)(struct Cyc_Set_Set *,
												  struct _fat_ptr *))_T131;
						    _T130 = _T2A4;
						  }_T132 = _T130(reachable_set,
								 name);
						  if (! _T132) { goto _TL165;
						  }
						  { struct Cyc_List_List * _T2A4 = _cycalloc(sizeof(struct Cyc_List_List));
						    _T2A4->hd = decl;
						    _T2A4->tl = reachable_decls;
						    _T133 = (struct Cyc_List_List *)_T2A4;
						  }reachable_decls = _T133;
						  goto _TL166;
						  _TL165: _T134 = x;
						  _T135 = _T134->fields;
						  _T136 = (unsigned int)_T135;
						  if (! _T136) { goto _TL167;
						  }
						  _T137 = x;
						  _T138 = _T137->fields;
						  _T139 = _T138->v;
						  { struct Cyc_List_List * fs = (struct Cyc_List_List *)_T139;
						    _TL16C: if (fs != 0) { goto _TL16A;
						    }else { goto _TL16B;
						    }
						    _TL16A: _T13A = fs;
						    _T13B = _T13A->hd;
						    { struct Cyc_Absyn_Enumfield * f = (struct Cyc_Absyn_Enumfield *)_T13B;
						      _T13C = f;
						      { struct _tuple1 * _T2A4 = _T13C->name;
							struct _fat_ptr * _T2A5;
							{ struct _tuple1 _T2A6 = *_T2A4;
							  _T2A5 = _T2A6.f1;
							}{ struct _fat_ptr * v = _T2A5;
							  _T13E = Cyc_Set_member;
							  { long (* _T2A6)(struct Cyc_Set_Set *,
									   struct _fat_ptr *) = (long (*)(struct Cyc_Set_Set *,
													  struct _fat_ptr *))_T13E;
							    _T13D = _T2A6;
							  }_T13F = _T13D(reachable_set,
									 v);
							  if (! _T13F) { goto _TL16D;
							  }
							  { struct Cyc_List_List * _T2A6 = _cycalloc(sizeof(struct Cyc_List_List));
							    _T2A6->hd = decl;
							    _T2A6->tl = reachable_decls;
							    _T140 = (struct Cyc_List_List *)_T2A6;
							  }reachable_decls = _T140;
							  goto _TL16B;
							  _TL16D: ;
							}
						      }
						    }_T141 = fs;
						    fs = _T141->tl;
						    goto _TL16C;
						    _TL16B: ;
						  }goto _TL168;
						  _TL167: _TL168: _TL166: name = 0;
						  goto _LL9;
						}
					      }
					    }
					  case 8: 
					    { struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct * _T2A2 = (struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct *)_T29C;
					      _T29D = _T2A2->f1;
					    }{ struct Cyc_Absyn_Typedefdecl * x = _T29D;
					      _T142 = x;
					      { struct _tuple1 * _T2A2 = _T142->name;
						struct _fat_ptr * _T2A3;
						{ struct _tuple1 _T2A4 = *_T2A2;
						  _T2A3 = _T2A4.f1;
						}{ struct _fat_ptr * v = _T2A3;
						  name = v;
						  goto _LL9;
						}
					      }
					    }
					  case 13: 
					    goto _LL17;
					  case 14: 
					    _LL17: goto _LL19;
					  case 15: 
					    _LL19: goto _LL1B;
					  case 16: 
					    _LL1B: goto _LL1D;
					  case 2: 
					    _LL1D: goto _LL1F;
					  case 6: 
					    _LL1F: goto _LL21;
					  case 3: 
					    _LL21: goto _LL23;
					  case 9: 
					    _LL23: goto _LL25;
					  case 10: 
					    _LL25: goto _LL27;
					  case 11: 
					    _LL27: goto _LL29;
					  case 12: 
					    _LL29: goto _LL2B;
					  default: 
					    _LL2B: name = 0;
					    goto _LL9;
					  }
					  _LL9: ;
					}if (name == 0) { goto _TL16F;
					}
					_T144 = Cyc_Set_member;
					{ long (* _T29C)(struct Cyc_Set_Set *,
							 struct _fat_ptr *) = (long (*)(struct Cyc_Set_Set *,
											struct _fat_ptr *))_T144;
					  _T143 = _T29C;
					}_T145 = _T143(reachable_set,name);
					if (! _T145) { goto _TL16F;
					}
					_T146 = name;
					_T147 = *_T146;
					_T148 = Cyc_user_prefix;
					_T149 = Cyc_strlen(Cyc_user_prefix);
					_T14A = Cyc_strncmp(_T147,_T148,_T149);
					if (_T14A == 0) { goto _TL171;
					}
					{ struct Cyc_List_List * _T29C = _cycalloc(sizeof(struct Cyc_List_List));
					  _T29C->hd = decl;
					  _T29C->tl = reachable_decls;
					  _T14B = (struct Cyc_List_List *)_T29C;
					}reachable_decls = _T14B;
					goto _TL172;
					_TL171: Cyc_rename_decl(decl);
					{ struct Cyc_List_List * _T29C = _cycalloc(sizeof(struct Cyc_List_List));
					  _T29C->hd = decl;
					  _T29C->tl = user_decls;
					  _T14C = (struct Cyc_List_List *)_T29C;
					}user_decls = _T14C;
					_TL172: goto _TL170;
					_TL16F: _TL170: ;
				      }_T14D = d;
				      d = _T14D->tl;
				      goto _TL15F;
				      _TL15E: ;
				    }_T14E = Cyc_do_setjmp;
				    if (_T14E) { goto _TL173;
				    }else { goto _TL175;
				    }
				    _TL175: maybe = Cyc_fopen(filename,"w");
				    _T14F = maybe;
				    _T150 = (unsigned int)_T14F;
				    if (_T150) { goto _TL176;
				    }else { goto _TL178;
				    }
				    _TL178: { int _T29C = 1;
				      _npop_handler(0);
				      return _T29C;
				    }_TL176: out_file = maybe;
				    goto _TL174;
				    _TL173: out_file = Cyc_stdout;
				    _TL174: { struct Cyc_String_pa_PrintArg_struct _T29C;
				      _T29C.tag = 0;
				      { const char * _T29D = filename;
					_T154 = (void *)_T29D;
					_T155 = (void *)_T29D;
					_T156 = _get_zero_arr_size_char(_T155,
									1U);
					_T153 = _tag_fat(_T154,sizeof(char),
							 _T156);
				      }_T29C.f1 = _T153;
				      _T152 = _T29C;
				    }{ struct Cyc_String_pa_PrintArg_struct _T29C = _T152;
				      void * _T29D[1];
				      _T29D[0] = &_T29C;
				      _T157 = _tag_fat("_%s_",sizeof(char),
						       5U);
				      _T158 = _tag_fat(_T29D,sizeof(void *),
						       1);
				      _T151 = Cyc_aprintf(_T157,_T158);
				    }{ struct _fat_ptr ifdefmacro = _T151;
				      { int j = 0;
					_TL17C: _T159 = j;
					_T15A = (unsigned int)_T159;
					_T15B = ifdefmacro;
					_T15C = _get_fat_size(_T15B,sizeof(char));
					if (_T15A < _T15C) { goto _TL17A;
					}else { goto _TL17B;
					}
					_TL17A: _T15D = ifdefmacro;
					_T15E = _T15D.curr;
					_T15F = (char *)_T15E;
					_T160 = _check_null(_T15F);
					_T161 = j;
					_T162 = _T160[_T161];
					_T163 = (int)_T162;
					if (_T163 == 46) { goto _TL17F;
					}else { goto _TL180;
					}
					_TL180: _T164 = ifdefmacro;
					_T165 = _T164.curr;
					_T166 = (char *)_T165;
					_T167 = j;
					_T168 = _T166[_T167];
					_T169 = (int)_T168;
					if (_T169 == 47) { goto _TL17F;
					}else { goto _TL17D;
					}
					_TL17F: _T16A = ifdefmacro;
					_T16B = j;
					{ struct _fat_ptr _T29C = _fat_ptr_plus(_T16A,
										sizeof(char),
										_T16B);
					  _T16C = _T29C.curr;
					  _T16D = (char *)_T16C;
					  { char _T29D = *_T16D;
					    char _T29E = '_';
					    _T16E = _get_fat_size(_T29C,sizeof(char));
					    if (_T16E != 1U) { goto _TL181;
					    }
					    if (_T29D != 0) { goto _TL181;
					    }
					    if (_T29E == 0) { goto _TL181;
					    }
					    _throw_arraybounds();
					    goto _TL182;
					    _TL181: _TL182: _T16F = _T29C.curr;
					    _T170 = (char *)_T16F;
					    *_T170 = _T29E;
					  }
					}goto _TL17E;
					_TL17D: _T171 = ifdefmacro;
					_T172 = _T171.curr;
					_T173 = (char *)_T172;
					_T174 = j;
					_T175 = _T173[_T174];
					_T176 = (int)_T175;
					if (_T176 == 95) { goto _TL183;
					}
					_T177 = ifdefmacro;
					_T178 = _T177.curr;
					_T179 = (char *)_T178;
					_T17A = j;
					_T17B = _T179[_T17A];
					_T17C = (int)_T17B;
					if (_T17C == 47) { goto _TL183;
					}
					_T17D = ifdefmacro;
					_T17E = j;
					{ struct _fat_ptr _T29C = _fat_ptr_plus(_T17D,
										sizeof(char),
										_T17E);
					  _T17F = _T29C.curr;
					  _T180 = (char *)_T17F;
					  { char _T29D = *_T180;
					    _T181 = ifdefmacro;
					    _T182 = _T181.curr;
					    _T183 = (char *)_T182;
					    _T184 = j;
					    _T185 = _T183[_T184];
					    _T186 = (int)_T185;
					    _T187 = toupper(_T186);
					    { char _T29E = (char)_T187;
					      _T188 = _get_fat_size(_T29C,
								    sizeof(char));
					      if (_T188 != 1U) { goto _TL185;
					      }
					      if (_T29D != 0) { goto _TL185;
					      }
					      if (_T29E == 0) { goto _TL185;
					      }
					      _throw_arraybounds();
					      goto _TL186;
					      _TL185: _TL186: _T189 = _T29C.curr;
					      _T18A = (char *)_T189;
					      *_T18A = _T29E;
					    }
					  }
					}goto _TL184;
					_TL183: _TL184: _TL17E: j = j + 1;
					goto _TL17C;
					_TL17B: ;
				      }_T18B = Cyc_do_setjmp;
				      if (_T18B) { goto _TL187;
				      }else { goto _TL189;
				      }
				      _TL189: _T18C = out_file;
				      _T18D = _tag_fat("__noinference__{\n",
						       sizeof(char),18U);
				      _T18E = _tag_fat(0U,sizeof(void *),
						       0);
				      Cyc_fprintf(_T18C,_T18D,_T18E);
				      goto _TL188;
				      _TL187: _TL188: { struct Cyc_String_pa_PrintArg_struct _T29C;
					_T29C.tag = 0;
					_T29C.f1 = ifdefmacro;
					_T18F = _T29C;
				      }{ struct Cyc_String_pa_PrintArg_struct _T29C = _T18F;
					{ struct Cyc_String_pa_PrintArg_struct _T29D;
					  _T29D.tag = 0;
					  _T29D.f1 = ifdefmacro;
					  _T190 = _T29D;
					}{ struct Cyc_String_pa_PrintArg_struct _T29D = _T190;
					  void * _T29E[2];
					  _T29E[0] = &_T29C;
					  _T29E[1] = &_T29D;
					  _T191 = out_file;
					  _T192 = _tag_fat("#ifndef %s\n#define %s\n",
							   sizeof(char),23U);
					  _T193 = _tag_fat(_T29E,sizeof(void *),
							   2);
					  Cyc_fprintf(_T191,_T192,_T193);
					}
				      }{ struct Cyc_List_List * print_decls = 0;
					struct Cyc_List_List * names = 0;
					{ struct Cyc_List_List * d = reachable_decls;
					  _TL18D: if (d != 0) { goto _TL18B;
					  }else { goto _TL18C;
					  }
					  _TL18B: _T194 = d;
					  _T195 = _T194->hd;
					  { struct Cyc_Absyn_Decl * decl = (struct Cyc_Absyn_Decl *)_T195;
					    long anon_enum = 0;
					    struct _fat_ptr * name;
					    _T196 = decl;
					    { void * _T29C = _T196->r;
					      struct Cyc_Absyn_Typedefdecl * _T29D;
					      struct Cyc_Absyn_Enumdecl * _T29E;
					      struct Cyc_Absyn_Aggrdecl * _T29F;
					      struct Cyc_Absyn_Fndecl * _T2A0;
					      struct Cyc_Absyn_Vardecl * _T2A1;
					      _T197 = (int *)_T29C;
					      _T198 = *_T197;
					      switch (_T198) {
					      case 0: 
						{ struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct * _T2A2 = (struct Cyc_Absyn_Var_d_Absyn_Raw_decl_struct *)_T29C;
						  _T2A1 = _T2A2->f1;
						}{ struct Cyc_Absyn_Vardecl * x = _T2A1;
						  _T199 = x;
						  { struct _tuple1 * _T2A2 = _T199->name;
						    struct _fat_ptr * _T2A3;
						    { struct _tuple1 _T2A4 = *_T2A2;
						      _T2A3 = _T2A4.f1;
						    }{ struct _fat_ptr * v = _T2A3;
						      name = v;
						      goto _LL3E;
						    }
						  }
						}
					      case 1: 
						{ struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct * _T2A2 = (struct Cyc_Absyn_Fn_d_Absyn_Raw_decl_struct *)_T29C;
						  _T2A0 = _T2A2->f1;
						}{ struct Cyc_Absyn_Fndecl * x = _T2A0;
						  _T19A = x;
						  _T19B = _T19A->is_inline;
						  if (! _T19B) { goto _TL18F;
						  }
						  name = 0;
						  goto _LL3E;
						  _TL18F: _T19C = x;
						  { struct _tuple1 * _T2A2 = _T19C->name;
						    struct _fat_ptr * _T2A3;
						    { struct _tuple1 _T2A4 = *_T2A2;
						      _T2A3 = _T2A4.f1;
						    }{ struct _fat_ptr * v = _T2A3;
						      name = v;
						      goto _LL3E;
						    }
						  }
						}
					      case 5: 
						{ struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct * _T2A2 = (struct Cyc_Absyn_Aggr_d_Absyn_Raw_decl_struct *)_T29C;
						  _T29F = _T2A2->f1;
						}{ struct Cyc_Absyn_Aggrdecl * x = _T29F;
						  _T19D = x;
						  { struct _tuple1 * _T2A2 = _T19D->name;
						    struct _fat_ptr * _T2A3;
						    { struct _tuple1 _T2A4 = *_T2A2;
						      _T2A3 = _T2A4.f1;
						    }{ struct _fat_ptr * v = _T2A3;
						      name = v;
						      goto _LL3E;
						    }
						  }
						}
					      case 7: 
						{ struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct * _T2A2 = (struct Cyc_Absyn_Enum_d_Absyn_Raw_decl_struct *)_T29C;
						  _T29E = _T2A2->f1;
						}{ struct Cyc_Absyn_Enumdecl * x = _T29E;
						  _T19E = x;
						  { struct _tuple1 * _T2A2 = _T19E->name;
						    struct _fat_ptr * _T2A3;
						    { struct _tuple1 _T2A4 = *_T2A2;
						      _T2A3 = _T2A4.f1;
						    }{ struct _fat_ptr * v = _T2A3;
						      name = v;
						      goto _LL3E;
						    }
						  }
						}
					      case 8: 
						{ struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct * _T2A2 = (struct Cyc_Absyn_Typedef_d_Absyn_Raw_decl_struct *)_T29C;
						  _T29D = _T2A2->f1;
						}{ struct Cyc_Absyn_Typedefdecl * x = _T29D;
						  _T19F = x;
						  { struct _tuple1 * _T2A2 = _T19F->name;
						    struct _fat_ptr * _T2A3;
						    { struct _tuple1 _T2A4 = *_T2A2;
						      _T2A3 = _T2A4.f1;
						    }{ struct _fat_ptr * v = _T2A3;
						      name = v;
						      goto _LL3E;
						    }
						  }
						}
					      case 4: 
						goto _LL4C;
					      case 13: 
						_LL4C: goto _LL4E;
					      case 14: 
						_LL4E: goto _LL50;
					      case 15: 
						_LL50: goto _LL52;
					      case 16: 
						_LL52: goto _LL54;
					      case 2: 
						_LL54: goto _LL56;
					      case 6: 
						_LL56: goto _LL58;
					      case 3: 
						_LL58: goto _LL5A;
					      case 9: 
						_LL5A: goto _LL5C;
					      case 10: 
						_LL5C: goto _LL5E;
					      case 11: 
						_LL5E: goto _LL60;
					      default: 
						_LL60: name = 0;
						goto _LL3E;
					      }
					      _LL3E: ;
					    }_T1A0 = name;
					    _T1A1 = (unsigned int)_T1A0;
					    if (_T1A1) { goto _TL191;
					    }else { goto _TL193;
					    }
					    _TL193: _T1A2 = anon_enum;
					    if (_T1A2) { goto _TL191;
					    }else { goto _TL194;
					    }
					    _TL194: goto _TL18A;
					    _TL191: _T1A4 = Cyc_Set_member;
					    { long (* _T29C)(struct Cyc_Set_Set *,
							     struct _fat_ptr *) = (long (*)(struct Cyc_Set_Set *,
											    struct _fat_ptr *))_T1A4;
					      _T1A3 = _T29C;
					    }_T1A5 = reachable_set;
					    _T1A6 = Cyc_add_user_prefix(name);
					    _T1A7 = _T1A3(_T1A5,_T1A6);
					    if (! _T1A7) { goto _TL195;
					    }
					    { struct Cyc_Absyn_Decl * user_decl = Cyc_Absyn_lookup_decl(user_decls,
													name);
					      if (user_decl != 0) { goto _TL197;
					      }
					      { struct Cyc_Core_Impossible_exn_struct * _T29C = _cycalloc(sizeof(struct Cyc_Core_Impossible_exn_struct));
						_T29C->tag = Cyc_Core_Impossible;
						_T29C->f1 = _tag_fat("Internal Error: bad user-def name",
								     sizeof(char),
								     34U);
						_T1A8 = (struct Cyc_Core_Impossible_exn_struct *)_T29C;
					      }_T1A9 = (void *)_T1A8;
					      _throw(_T1A9);
					      goto _TL198;
					      _TL197: _T1AA = user_decl;
					      { void * _T29C = _T1AA->r;
						_T1AB = (int *)_T29C;
						_T1AC = *_T1AB;
						switch (_T1AC) {
						case 0: 
						  goto _LL74;
						case 1: 
						  _LL74: { struct Cyc_NO_SUPPORT_exn_struct * _T29D = _cycalloc(sizeof(struct Cyc_NO_SUPPORT_exn_struct));
						    _T29D->tag = Cyc_NO_SUPPORT;
						    _T29D->f1 = _tag_fat("user defintions for function or variable decls",
									 sizeof(char),
									 47U);
						    _T1AD = (struct Cyc_NO_SUPPORT_exn_struct *)_T29D;
						  }_T1AE = (void *)_T1AD;
						  _throw(_T1AE);
						default: 
						  goto _LL70;
						}
						_LL70: ;
					      }_TL198: { struct Cyc_List_List * _T29C = _cycalloc(sizeof(struct Cyc_List_List));
						_T29C->hd = decl;
						_T29C->tl = print_decls;
						_T1AF = (struct Cyc_List_List *)_T29C;
					      }print_decls = _T1AF;
					    }goto _TL196;
					    _TL195: { struct Cyc_List_List * _T29C = _cycalloc(sizeof(struct Cyc_List_List));
					      _T29C->hd = decl;
					      _T29C->tl = print_decls;
					      _T1B0 = (struct Cyc_List_List *)_T29C;
					    }print_decls = _T1B0;
					    _TL196: { struct Cyc_List_List * _T29C = _cycalloc(sizeof(struct Cyc_List_List));
					      _T29C->hd = name;
					      _T29C->tl = names;
					      _T1B1 = (struct Cyc_List_List *)_T29C;
					    }names = _T1B1;
					  }_TL18A: _T1B2 = d;
					  d = _T1B2->tl;
					  goto _TL18D;
					  _TL18C: ;
					}{ struct _handler_cons _T29C;
					  _T1B3 = &_T29C;
					  _push_handler(_T1B3);
					  { int _T29D = 0;
					    _T1B4 = setjmp(_T29C.handler);
					    if (! _T1B4) { goto _TL19A;
					    }
					    _T29D = 1;
					    goto _TL19B;
					    _TL19A: _TL19B: if (_T29D) { goto _TL19C;
					    }else { goto _TL19E;
					    }
					    _TL19E: Cyc_Binding_resolve_all(print_decls);
					    _T1B5 = Cyc_Tcenv_tc_init();
					    _T1B6 = print_decls;
					    Cyc_Tc_tc(_T1B5,1,_T1B6);
					    _pop_handler();
					    goto _TL19D;
					    _TL19C: _T1B7 = Cyc_Core_get_exn_thrown();
					    { void * _T29E = (void *)_T1B7;
					      { struct Cyc_NO_SUPPORT_exn_struct * _T29F = _cycalloc(sizeof(struct Cyc_NO_SUPPORT_exn_struct));
						_T29F->tag = Cyc_NO_SUPPORT;
						_T29F->f1 = _tag_fat("can't typecheck acquired declarations",
								     sizeof(char),
								     38U);
						_T1B8 = (struct Cyc_NO_SUPPORT_exn_struct *)_T29F;
					      }_T1B9 = (void *)_T1B8;
					      _throw(_T1B9);
					      ;
					    }_TL19D: ;
					  }
					}{ struct _tuple0 _T29C;
					  _T29C.f0 = print_decls;
					  _T29C.f1 = names;
					  _T1BA = _T29C;
					}{ struct _tuple0 _T29C = _T1BA;
					  struct Cyc_List_List * _T29D;
					  struct Cyc_List_List * _T29E;
					  _T29E = _T29C.f0;
					  _T29D = _T29C.f1;
					  { struct Cyc_List_List * d = _T29E;
					    struct Cyc_List_List * n = _T29D;
					    _TL1A2: if (d != 0) { goto _TL1A3;
					    }else { goto _TL1A1;
					    }
					    _TL1A3: if (n != 0) { goto _TL1A0;
					    }else { goto _TL1A1;
					    }
					    _TL1A0: _T1BB = d;
					    _T1BC = _T1BB->hd;
					    { struct Cyc_Absyn_Decl * decl = (struct Cyc_Absyn_Decl *)_T1BC;
					      _T1BD = n;
					      _T1BE = _T1BD->hd;
					      { struct _fat_ptr * name = (struct _fat_ptr *)_T1BE;
						long anon_enum = 0;
						_T1BF = name;
						_T1C0 = (unsigned int)_T1BF;
						if (_T1C0) { goto _TL1A4;
						}else { goto _TL1A6;
						}
						_TL1A6: anon_enum = 1;
						goto _TL1A5;
						_TL1A4: _TL1A5: _T1C1 = &Cyc_Absynpp_cyc_params_r;
						_T1C2 = (struct Cyc_Absynpp_Params *)_T1C1;
						Cyc_Absynpp_set_params(_T1C2);
						_T1C3 = name;
						_T1C4 = (unsigned int)_T1C3;
						if (! _T1C4) { goto _TL1A7;
						}
						{ enum Cyc_name_kind kind;
						  _T1C5 = decl;
						  { void * _T29F = _T1C5->r;
						    _T1C6 = (int *)_T29F;
						    _T1C7 = *_T1C6;
						    switch (_T1C7) {
						    case 5: 
						      goto _LL81;
						    case 6: 
						      _LL81: goto _LL83;
						    case 7: 
						      _LL83: kind = 0U;
						      goto _LL7D;
						    default: 
						      kind = 1U;
						      goto _LL7D;
						    }
						    _LL7D: ;
						  }{ struct Cyc_String_pa_PrintArg_struct _T29F;
						    _T29F.tag = 0;
						    _T1CA = name;
						    _T29F.f1 = *_T1CA;
						    _T1C9 = _T29F;
						  }{ struct Cyc_String_pa_PrintArg_struct _T29F = _T1C9;
						    { struct Cyc_String_pa_PrintArg_struct _T2A0;
						      _T2A0.tag = 0;
						      _T2A0.f1 = Cyc_nk2str(kind);
						      _T1CB = _T2A0;
						    }{ struct Cyc_String_pa_PrintArg_struct _T2A0 = _T1CB;
						      void * _T2A1[2];
						      _T2A1[0] = &_T29F;
						      _T2A1[1] = &_T2A0;
						      _T1CC = _tag_fat("_%s_%sdef_",
								       sizeof(char),
								       11U);
						      _T1CD = _tag_fat(_T2A1,
								       sizeof(void *),
								       2);
						      _T1C8 = Cyc_aprintf(_T1CC,
									  _T1CD);
						    }
						  }ifdefmacro = _T1C8;
						  { struct Cyc_String_pa_PrintArg_struct _T29F;
						    _T29F.tag = 0;
						    _T29F.f1 = ifdefmacro;
						    _T1CE = _T29F;
						  }{ struct Cyc_String_pa_PrintArg_struct _T29F = _T1CE;
						    void * _T2A0[1];
						    _T2A0[0] = &_T29F;
						    _T1CF = out_file;
						    _T1D0 = _tag_fat("#ifndef %s\n",
								     sizeof(char),
								     12U);
						    _T1D1 = _tag_fat(_T2A0,
								     sizeof(void *),
								     1);
						    Cyc_fprintf(_T1CF,_T1D0,
								_T1D1);
						  }{ struct Cyc_String_pa_PrintArg_struct _T29F;
						    _T29F.tag = 0;
						    _T29F.f1 = ifdefmacro;
						    _T1D2 = _T29F;
						  }{ struct Cyc_String_pa_PrintArg_struct _T29F = _T1D2;
						    void * _T2A0[1];
						    _T2A0[0] = &_T29F;
						    _T1D3 = out_file;
						    _T1D4 = _tag_fat("#define %s\n",
								     sizeof(char),
								     12U);
						    _T1D5 = _tag_fat(_T2A0,
								     sizeof(void *),
								     1);
						    Cyc_fprintf(_T1D3,_T1D4,
								_T1D5);
						  }{ struct Cyc_Absyn_Decl * _T29F[1];
						    _T29F[0] = decl;
						    _T1D7 = _tag_fat(_T29F,
								     sizeof(struct Cyc_Absyn_Decl *),
								     1);
						    _T1D6 = Cyc_List_list(_T1D7);
						  }_T1D8 = out_file;
						  Cyc_Absynpp_decllist2file(_T1D6,
									    _T1D8);
						  _T1D9 = out_file;
						  _T1DA = _tag_fat("#endif\n",
								   sizeof(char),
								   8U);
						  _T1DB = _tag_fat(0U,sizeof(void *),
								   0);
						  Cyc_fprintf(_T1D9,_T1DA,
							      _T1DB);
						}goto _TL1A8;
						_TL1A7: { struct Cyc_Absyn_Decl * _T29F[1];
						  _T29F[0] = decl;
						  _T1DD = _tag_fat(_T29F,
								   sizeof(struct Cyc_Absyn_Decl *),
								   1);
						  _T1DC = Cyc_List_list(_T1DD);
						}_T1DE = out_file;
						Cyc_Absynpp_decllist2file(_T1DC,
									  _T1DE);
						_TL1A8: ;
					      }
					    }_T1DF = d;
					    d = _T1DF->tl;
					    _T1E0 = n;
					    n = _T1E0->tl;
					    goto _TL1A2;
					    _TL1A1: ;
					  }
					}maybe = Cyc_fopen(macrosfile,"r");
					_T1E1 = maybe;
					_T1E2 = (unsigned int)_T1E1;
					if (_T1E2) { goto _TL1AA;
					}else { goto _TL1AC;
					}
					_TL1AC: { struct Cyc_NO_SUPPORT_exn_struct * _T29C = _cycalloc(sizeof(struct Cyc_NO_SUPPORT_exn_struct));
					  _T29C->tag = Cyc_NO_SUPPORT;
					  { struct Cyc_String_pa_PrintArg_struct _T29D;
					    _T29D.tag = 0;
					    { const char * _T29E = macrosfile;
					      _T1E7 = (void *)_T29E;
					      _T1E8 = (void *)_T29E;
					      _T1E9 = _get_zero_arr_size_char(_T1E8,
									      1U);
					      _T1E6 = _tag_fat(_T1E7,sizeof(char),
							       _T1E9);
					    }_T29D.f1 = _T1E6;
					    _T1E5 = _T29D;
					  }{ struct Cyc_String_pa_PrintArg_struct _T29D = _T1E5;
					    void * _T29E[1];
					    _T29E[0] = &_T29D;
					    _T1EA = _tag_fat("can't open macrosfile %s",
							     sizeof(char),
							     25U);
					    _T1EB = _tag_fat(_T29E,sizeof(void *),
							     1);
					    _T1E4 = Cyc_aprintf(_T1EA,_T1EB);
					  }_T29C->f1 = _T1E4;
					  _T1E3 = (struct Cyc_NO_SUPPORT_exn_struct *)_T29C;
					}_T1EC = (void *)_T1E3;
					_throw(_T1EC);
					goto _TL1AB;
					_TL1AA: _TL1AB: in_file = maybe;
					l = Cyc_Lexing_from_file(in_file);
					{ struct _tuple16 * entry2;
					  _TL1AD: entry2 = Cyc_suck_line(l);
					  _T1ED = entry2;
					  if (_T1ED != 0) { goto _TL1AE;
					  }else { goto _TL1AF;
					  }
					  _TL1AE: { struct _tuple16 * _T29C = entry2;
					    struct _fat_ptr * _T29D;
					    struct _fat_ptr _T29E;
					    { struct _tuple16 _T29F = *_T29C;
					      _T29E = _T29F.f0;
					      _T29D = _T29F.f1;
					    }{ struct _fat_ptr line = _T29E;
					      struct _fat_ptr * name = _T29D;
					      _T1EF = Cyc_Set_member;
					      { long (* _T29F)(struct Cyc_Set_Set *,
							       struct _fat_ptr *) = (long (*)(struct Cyc_Set_Set *,
											      struct _fat_ptr *))_T1EF;
						_T1EE = _T29F;
					      }_T1F0 = _T1EE(reachable_set,
							     name);
					      if (! _T1F0) { goto _TL1B0;
					      }
					      { struct Cyc_String_pa_PrintArg_struct _T29F;
						_T29F.tag = 0;
						_T1F2 = name;
						_T29F.f1 = *_T1F2;
						_T1F1 = _T29F;
					      }{ struct Cyc_String_pa_PrintArg_struct _T29F = _T1F1;
						void * _T2A0[1];
						_T2A0[0] = &_T29F;
						_T1F3 = out_file;
						_T1F4 = _tag_fat("#ifndef %s\n",
								 sizeof(char),
								 12U);
						_T1F5 = _tag_fat(_T2A0,sizeof(void *),
								 1);
						Cyc_fprintf(_T1F3,_T1F4,_T1F5);
					      }{ struct Cyc_String_pa_PrintArg_struct _T29F;
						_T29F.tag = 0;
						_T29F.f1 = line;
						_T1F6 = _T29F;
					      }{ struct Cyc_String_pa_PrintArg_struct _T29F = _T1F6;
						void * _T2A0[1];
						_T2A0[0] = &_T29F;
						_T1F7 = out_file;
						_T1F8 = _tag_fat("%s\n",sizeof(char),
								 4U);
						_T1F9 = _tag_fat(_T2A0,sizeof(void *),
								 1);
						Cyc_fprintf(_T1F7,_T1F8,_T1F9);
					      }_T1FA = out_file;
					      _T1FB = _tag_fat("#endif\n",
							       sizeof(char),
							       8U);
					      _T1FC = _tag_fat(0U,sizeof(void *),
							       0);
					      Cyc_fprintf(_T1FA,_T1FB,_T1FC);
					      goto _TL1B1;
					      _TL1B0: _TL1B1: ;
					    }
					  }goto _TL1AD;
					  _TL1AF: Cyc_fclose(in_file);
					  if (hstubs == 0) { goto _TL1B2;
					  }
					  { struct Cyc_List_List * x = hstubs;
					    _TL1B7: if (x != 0) { goto _TL1B5;
					    }else { goto _TL1B6;
					    }
					    _TL1B5: _T1FD = x;
					    _T1FE = _T1FD->hd;
					    { struct _tuple17 * _T29C = (struct _tuple17 *)_T1FE;
					      struct _fat_ptr _T29D;
					      struct _fat_ptr _T29E;
					      { struct _tuple17 _T29F = *_T29C;
						_T29E = _T29F.f0;
						_T29D = _T29F.f1;
					      }{ struct _fat_ptr symbol = _T29E;
						struct _fat_ptr text = _T29D;
						_T1FF = text;
						_T200 = _T1FF.curr;
						_T201 = (char *)_T200;
						if (_T201 == 0) { goto _TL1B8;
						}
						_T202 = symbol;
						_T203 = _T202.curr;
						_T204 = (char *)_T203;
						if (_T204 != 0) { goto _TL1BA;
						}
						_T205 = text;
						_T206 = _untag_fat_ptr_check_bound(_T205,
										   sizeof(char),
										   1U);
						_T207 = (const char *)_T206;
						_T208 = out_file;
						Cyc_fputs(_T207,_T208);
						goto _TL1BB;
						_TL1BA: _T20A = Cyc_Set_member;
						{ long (* _T29F)(struct Cyc_Set_Set *,
								 struct _fat_ptr *) = (long (*)(struct Cyc_Set_Set *,
												struct _fat_ptr *))_T20A;
						  _T209 = _T29F;
						}_T20B = defined_symbols;
						{ struct _fat_ptr * _T29F = _cycalloc(sizeof(struct _fat_ptr));
						  *_T29F = symbol;
						  _T20C = (struct _fat_ptr *)_T29F;
						}_T20D = _T209(_T20B,_T20C);
						if (! _T20D) { goto _TL1BC;
						}
						_T20E = text;
						_T20F = _untag_fat_ptr_check_bound(_T20E,
										   sizeof(char),
										   1U);
						_T210 = (const char *)_T20F;
						_T211 = out_file;
						Cyc_fputs(_T210,_T211);
						goto _TL1BD;
						_TL1BC: { struct Cyc_String_pa_PrintArg_struct _T29F;
						  _T29F.tag = 0;
						  _T29F.f1 = symbol;
						  _T212 = _T29F;
						}{ struct Cyc_String_pa_PrintArg_struct _T29F = _T212;
						  void * _T2A0[1];
						  _T2A0[0] = &_T29F;
						  _T213 = _tag_fat("%s is not supported on this platform\n",
								   sizeof(char),
								   38U);
						  _T214 = _tag_fat(_T2A0,
								   sizeof(void *),
								   1);
						  Cyc_log(_T213,_T214);
						}{ struct Cyc_Set_Set * x = defined_symbols;
						  _TL1C1: _T215 = Cyc_Set_is_empty(x);
						  if (_T215) { goto _TL1C0;
						  }else { goto _TL1BF;
						  }
						  _TL1BF: _T217 = Cyc_Set_choose;
						  { struct _fat_ptr * (* _T29F)(struct Cyc_Set_Set *) = (struct _fat_ptr * (*)(struct Cyc_Set_Set *))_T217;
						    _T216 = _T29F;
						  }{ struct _fat_ptr * y = _T216(x);
						    _T219 = Cyc_Set_delete;
						    { struct Cyc_Set_Set * (* _T29F)(struct Cyc_Set_Set *,
										     struct _fat_ptr *) = (struct Cyc_Set_Set * (*)(struct Cyc_Set_Set *,
																    struct _fat_ptr *))_T219;
						      _T218 = _T29F;
						    }x = _T218(x,y);
						    { struct Cyc_String_pa_PrintArg_struct _T29F;
						      _T29F.tag = 0;
						      _T21B = y;
						      _T29F.f1 = *_T21B;
						      _T21A = _T29F;
						    }{ struct Cyc_String_pa_PrintArg_struct _T29F = _T21A;
						      void * _T2A0[1];
						      _T2A0[0] = &_T29F;
						      _T21C = _tag_fat("+%s",
								       sizeof(char),
								       4U);
						      _T21D = _tag_fat(_T2A0,
								       sizeof(void *),
								       1);
						      Cyc_log(_T21C,_T21D);
						    }_T21E = _tag_fat("\n",
								      sizeof(char),
								      2U);
						    _T21F = _tag_fat(0U,sizeof(void *),
								     0);
						    Cyc_log(_T21E,_T21F);
						  }goto _TL1C1;
						  _TL1C0: ;
						}_TL1BD: _TL1BB: goto _TL1B9;
						_TL1B8: { struct Cyc_String_pa_PrintArg_struct _T29F;
						  _T29F.tag = 0;
						  _T29F.f1 = symbol;
						  _T220 = _T29F;
						}{ struct Cyc_String_pa_PrintArg_struct _T29F = _T220;
						  void * _T2A0[1];
						  _T2A0[0] = &_T29F;
						  _T221 = _tag_fat("Null text for %s, will not be supported on this platform\n",
								   sizeof(char),
								   58U);
						  _T222 = _tag_fat(_T2A0,
								   sizeof(void *),
								   1);
						  Cyc_log(_T221,_T222);
						}_TL1B9: ;
					      }
					    }_T223 = x;
					    x = _T223->tl;
					    goto _TL1B7;
					    _TL1B6: ;
					  }goto _TL1B3;
					  _TL1B2: _TL1B3: _T224 = out_file;
					  _T225 = _tag_fat("#endif\n",sizeof(char),
							   8U);
					  _T226 = _tag_fat(0U,sizeof(void *),
							   0);
					  Cyc_fprintf(_T224,_T225,_T226);
					  _T227 = Cyc_do_setjmp;
					  if (_T227) { goto _TL1C2;
					  }else { goto _TL1C4;
					  }
					  _TL1C4: _T228 = out_file;
					  _T229 = _tag_fat("}\n",sizeof(char),
							   3U);
					  _T22A = _tag_fat(0U,sizeof(void *),
							   0);
					  Cyc_fprintf(_T228,_T229,_T22A);
					  goto _TL1C3;
					  _TL1C2: _TL1C3: _T22B = Cyc_do_setjmp;
					  if (! _T22B) { goto _TL1C5;
					  }
					  { int _T29C = 0;
					    _npop_handler(0);
					    return _T29C;
					  }_TL1C5: Cyc_fclose(out_file);
					  if (cstubs == 0) { goto _TL1C7;
					  }
					  out_file = _check_null(Cyc_cstubs_file);
					  { struct Cyc_List_List * x = cstubs;
					    _TL1CC: if (x != 0) { goto _TL1CA;
					    }else { goto _TL1CB;
					    }
					    _TL1CA: _T22C = x;
					    _T22D = _T22C->hd;
					    { struct _tuple17 * _T29C = (struct _tuple17 *)_T22D;
					      struct _fat_ptr _T29D;
					      struct _fat_ptr _T29E;
					      { struct _tuple17 _T29F = *_T29C;
						_T29E = _T29F.f0;
						_T29D = _T29F.f1;
					      }{ struct _fat_ptr symbol = _T29E;
						struct _fat_ptr text = _T29D;
						_T22E = text;
						_T22F = _T22E.curr;
						_T230 = (char *)_T22F;
						if (_T230 == 0) { goto _TL1CD;
						}
						_T231 = symbol;
						_T232 = _T231.curr;
						_T233 = (char *)_T232;
						if (_T233 == 0) { goto _TL1CF;
						}else { goto _TL1D0;
						}
						_TL1D0: _T235 = Cyc_Set_member;
						{ long (* _T29F)(struct Cyc_Set_Set *,
								 struct _fat_ptr *) = (long (*)(struct Cyc_Set_Set *,
												struct _fat_ptr *))_T235;
						  _T234 = _T29F;
						}_T236 = defined_symbols;
						{ struct _fat_ptr * _T29F = _cycalloc(sizeof(struct _fat_ptr));
						  *_T29F = symbol;
						  _T237 = (struct _fat_ptr *)_T29F;
						}_T238 = _T234(_T236,_T237);
						if (_T238) { goto _TL1CF;
						}else { goto _TL1CD;
						}
						_TL1CF: _T239 = text;
						_T23A = _untag_fat_ptr_check_bound(_T239,
										   sizeof(char),
										   1U);
						_T23B = (const char *)_T23A;
						_T23C = out_file;
						Cyc_fputs(_T23B,_T23C);
						goto _TL1CE;
						_TL1CD: _TL1CE: ;
					      }
					    }_T23D = x;
					    x = _T23D->tl;
					    goto _TL1CC;
					    _TL1CB: ;
					  }goto _TL1C8;
					  _TL1C7: _TL1C8: out_file = _check_null(Cyc_cycstubs_file);
					  if (cycstubs == 0) { goto _TL1D1;
					  }
					  { struct Cyc_String_pa_PrintArg_struct _T29C;
					    _T29C.tag = 0;
					    { const char * _T29D = filename;
					      _T240 = (void *)_T29D;
					      _T241 = (void *)_T29D;
					      _T242 = _get_zero_arr_size_char(_T241,
									      1U);
					      _T23F = _tag_fat(_T240,sizeof(char),
							       _T242);
					    }_T29C.f1 = _T23F;
					    _T23E = _T29C;
					  }{ struct Cyc_String_pa_PrintArg_struct _T29C = _T23E;
					    void * _T29D[1];
					    _T29D[0] = &_T29C;
					    _T243 = out_file;
					    _T244 = _tag_fat("#include \"%s\"\n\n",
							     sizeof(char),
							     16U);
					    _T245 = _tag_fat(_T29D,sizeof(void *),
							     1);
					    Cyc_fprintf(_T243,_T244,_T245);
					  }out_file = _check_null(Cyc_cycstubs_file);
					  { struct Cyc_List_List * x = cycstubs;
					    _TL1D6: if (x != 0) { goto _TL1D4;
					    }else { goto _TL1D5;
					    }
					    _TL1D4: _T246 = x;
					    _T247 = _T246->hd;
					    { struct _tuple17 * _T29C = (struct _tuple17 *)_T247;
					      struct _fat_ptr _T29D;
					      struct _fat_ptr _T29E;
					      { struct _tuple17 _T29F = *_T29C;
						_T29E = _T29F.f0;
						_T29D = _T29F.f1;
					      }{ struct _fat_ptr symbol = _T29E;
						struct _fat_ptr text = _T29D;
						_T248 = text;
						_T249 = _T248.curr;
						_T24A = (char *)_T249;
						if (_T24A == 0) { goto _TL1D7;
						}
						_T24B = symbol;
						_T24C = _T24B.curr;
						_T24D = (char *)_T24C;
						if (_T24D == 0) { goto _TL1D9;
						}else { goto _TL1DA;
						}
						_TL1DA: _T24F = Cyc_Set_member;
						{ long (* _T29F)(struct Cyc_Set_Set *,
								 struct _fat_ptr *) = (long (*)(struct Cyc_Set_Set *,
												struct _fat_ptr *))_T24F;
						  _T24E = _T29F;
						}_T250 = defined_symbols;
						{ struct _fat_ptr * _T29F = _cycalloc(sizeof(struct _fat_ptr));
						  *_T29F = symbol;
						  _T251 = (struct _fat_ptr *)_T29F;
						}_T252 = _T24E(_T250,_T251);
						if (_T252) { goto _TL1D9;
						}else { goto _TL1D7;
						}
						_TL1D9: _T253 = text;
						_T254 = _untag_fat_ptr_check_bound(_T253,
										   sizeof(char),
										   1U);
						_T255 = (const char *)_T254;
						_T256 = out_file;
						Cyc_fputs(_T255,_T256);
						goto _TL1D8;
						_TL1D7: _TL1D8: ;
					      }
					    }_T257 = x;
					    x = _T257->tl;
					    goto _TL1D6;
					    _TL1D5: ;
					  }_T258 = out_file;
					  _T259 = _tag_fat("\n",sizeof(char),
							   2U);
					  _T25A = _tag_fat(0U,sizeof(void *),
							   0);
					  Cyc_fprintf(_T258,_T259,_T25A);
					  goto _TL1D2;
					  _TL1D1: _TL1D2: { int _T29C = 0;
					    _npop_handler(0);
					    return _T29C;
					  }
					}
				      }
				    }
				  }
				}
			      }
			    }
			  }
			}
		      }
		    }
		  }_pop_handler();
		  goto _TL118;
		  _TL117: _T25B = Cyc_Core_get_exn_thrown();
		  { void * _T29C = (void *)_T25B;
		    void * _T29D;
		    struct _fat_ptr _T29E;
		    _T25C = (struct Cyc_Core_Impossible_exn_struct *)_T29C;
		    _T25D = _T25C->tag;
		    _T25E = Cyc_Core_Impossible;
		    if (_T25D != _T25E) { goto _TL1DB;
		    }
		    { struct Cyc_Core_Impossible_exn_struct * _T29F = (struct Cyc_Core_Impossible_exn_struct *)_T29C;
		      _T29E = _T29F->f1;
		    }{ struct _fat_ptr s = _T29E;
		      { struct Cyc_String_pa_PrintArg_struct _T29F;
			_T29F.tag = 0;
			_T29F.f1 = s;
			_T25F = _T29F;
		      }{ struct Cyc_String_pa_PrintArg_struct _T29F = _T25F;
			void * _T2A0[1];
			_T2A0[0] = &_T29F;
			_T260 = _tag_fat("Got Core::Impossible(%s)\n",sizeof(char),
					 26U);
			_T261 = _tag_fat(_T2A0,sizeof(void *),1);
			Cyc_log(_T260,_T261);
		      }goto _LL92;
		    }_TL1DB: _T262 = (struct Cyc_Dict_Absent_exn_struct *)_T29C;
		    _T263 = _T262->tag;
		    _T264 = Cyc_Dict_Absent;
		    if (_T263 != _T264) { goto _TL1DD;
		    }
		    _T265 = _tag_fat("Got Dict::Absent\n",sizeof(char),18U);
		    _T266 = _tag_fat(0U,sizeof(void *),0);
		    Cyc_log(_T265,_T266);
		    goto _LL92;
		    _TL1DD: _T267 = (struct Cyc_Core_Failure_exn_struct *)_T29C;
		    _T268 = _T267->tag;
		    _T269 = Cyc_Core_Failure;
		    if (_T268 != _T269) { goto _TL1DF;
		    }
		    { struct Cyc_Core_Failure_exn_struct * _T29F = (struct Cyc_Core_Failure_exn_struct *)_T29C;
		      _T29E = _T29F->f1;
		    }{ struct _fat_ptr s = _T29E;
		      { struct Cyc_String_pa_PrintArg_struct _T29F;
			_T29F.tag = 0;
			_T29F.f1 = s;
			_T26A = _T29F;
		      }{ struct Cyc_String_pa_PrintArg_struct _T29F = _T26A;
			void * _T2A0[1];
			_T2A0[0] = &_T29F;
			_T26B = _tag_fat("Got Core::Failure(%s)\n",sizeof(char),
					 23U);
			_T26C = _tag_fat(_T2A0,sizeof(void *),1);
			Cyc_log(_T26B,_T26C);
		      }goto _LL92;
		    }_TL1DF: _T26D = (struct Cyc_Core_Invalid_argument_exn_struct *)_T29C;
		    _T26E = _T26D->tag;
		    _T26F = Cyc_Core_Invalid_argument;
		    if (_T26E != _T26F) { goto _TL1E1;
		    }
		    { struct Cyc_Core_Invalid_argument_exn_struct * _T29F = (struct Cyc_Core_Invalid_argument_exn_struct *)_T29C;
		      _T29E = _T29F->f1;
		    }{ struct _fat_ptr s = _T29E;
		      { struct Cyc_String_pa_PrintArg_struct _T29F;
			_T29F.tag = 0;
			_T29F.f1 = s;
			_T270 = _T29F;
		      }{ struct Cyc_String_pa_PrintArg_struct _T29F = _T270;
			void * _T2A0[1];
			_T2A0[0] = &_T29F;
			_T271 = _tag_fat("Got Invalid_argument(%s)\n",sizeof(char),
					 26U);
			_T272 = _tag_fat(_T2A0,sizeof(void *),1);
			Cyc_log(_T271,_T272);
		      }goto _LL92;
		    }_TL1E1: _T273 = (struct Cyc_Core_Not_found_exn_struct *)_T29C;
		    _T274 = _T273->tag;
		    _T275 = Cyc_Core_Not_found;
		    if (_T274 != _T275) { goto _TL1E3;
		    }
		    _T276 = _tag_fat("Got Not_found\n",sizeof(char),15U);
		    _T277 = _tag_fat(0U,sizeof(void *),0);
		    Cyc_log(_T276,_T277);
		    goto _LL92;
		    _TL1E3: _T278 = (struct Cyc_NO_SUPPORT_exn_struct *)_T29C;
		    _T279 = _T278->tag;
		    _T27A = Cyc_NO_SUPPORT;
		    if (_T279 != _T27A) { goto _TL1E5;
		    }
		    { struct Cyc_NO_SUPPORT_exn_struct * _T29F = (struct Cyc_NO_SUPPORT_exn_struct *)_T29C;
		      _T29E = _T29F->f1;
		    }{ struct _fat_ptr s = _T29E;
		      { struct Cyc_String_pa_PrintArg_struct _T29F;
			_T29F.tag = 0;
			_T29F.f1 = s;
			_T27B = _T29F;
		      }{ struct Cyc_String_pa_PrintArg_struct _T29F = _T27B;
			void * _T2A0[1];
			_T2A0[0] = &_T29F;
			_T27C = _tag_fat("No support because %s\n",sizeof(char),
					 23U);
			_T27D = _tag_fat(_T2A0,sizeof(void *),1);
			Cyc_log(_T27C,_T27D);
		      }goto _LL92;
		    }_TL1E5: _T27E = (struct Cyc_Lexing_Error_exn_struct *)_T29C;
		    _T27F = _T27E->tag;
		    _T280 = Cyc_Lexing_Error;
		    if (_T27F != _T280) { goto _TL1E7;
		    }
		    { struct Cyc_Lexing_Error_exn_struct * _T29F = (struct Cyc_Lexing_Error_exn_struct *)_T29C;
		      _T29E = _T29F->f1;
		    }{ struct _fat_ptr s = _T29E;
		      { struct Cyc_String_pa_PrintArg_struct _T29F;
			_T29F.tag = 0;
			_T29F.f1 = s;
			_T281 = _T29F;
		      }{ struct Cyc_String_pa_PrintArg_struct _T29F = _T281;
			void * _T2A0[1];
			_T2A0[0] = &_T29F;
			_T282 = _tag_fat("Got a lexing error %s\n",sizeof(char),
					 23U);
			_T283 = _tag_fat(_T2A0,sizeof(void *),1);
			Cyc_log(_T282,_T283);
		      }goto _LL92;
		    }_TL1E7: _T29D = _T29C;
		    { void * x = _T29D;
		      _T284 = _tag_fat("Got unknown exception\n",sizeof(char),
				       23U);
		      _T285 = _tag_fat(0U,sizeof(void *),0);
		      Cyc_log(_T284,_T285);
		      Cyc_Core_rethrow(x);
		    }_LL92: ;
		  }_TL118: ;
		}
	      }maybe = Cyc_fopen(filename,"w");
	      _T286 = maybe;
	      _T287 = (unsigned int)_T286;
	      if (_T287) { goto _TL1E9;
	      }else { goto _TL1EB;
	      }
	      _TL1EB: { struct Cyc_String_pa_PrintArg_struct _T29A;
		_T29A.tag = 0;
		{ const char * _T29B = filename;
		  _T28A = (void *)_T29B;
		  _T28B = (void *)_T29B;
		  _T28C = _get_zero_arr_size_char(_T28B,1U);
		  _T289 = _tag_fat(_T28A,sizeof(char),_T28C);
		}_T29A.f1 = _T289;
		_T288 = _T29A;
	      }{ struct Cyc_String_pa_PrintArg_struct _T29A = _T288;
		void * _T29B[1];
		_T29B[0] = &_T29A;
		_T28D = Cyc_stderr;
		_T28E = _tag_fat("Error: could not create file %s\n",sizeof(char),
				 33U);
		_T28F = _tag_fat(_T29B,sizeof(void *),1);
		Cyc_fprintf(_T28D,_T28E,_T28F);
	      }return 1;
	      _TL1E9: out_file = maybe;
	      { struct Cyc_String_pa_PrintArg_struct _T29A;
		_T29A.tag = 0;
		{ const char * _T29B = filename;
		  _T292 = (void *)_T29B;
		  _T293 = (void *)_T29B;
		  _T294 = _get_zero_arr_size_char(_T293,1U);
		  _T291 = _tag_fat(_T292,sizeof(char),_T294);
		}_T29A.f1 = _T291;
		_T290 = _T29A;
	      }{ struct Cyc_String_pa_PrintArg_struct _T29A = _T290;
		void * _T29B[1];
		_T29B[0] = &_T29A;
		_T295 = out_file;
		_T296 = _tag_fat("#error -- %s is not supported on this platform\n",
				 sizeof(char),48U);
		_T297 = _tag_fat(_T29B,sizeof(void *),1);
		Cyc_fprintf(_T295,_T296,_T297);
	      }Cyc_fclose(out_file);
	      _T298 = _tag_fat("Not supported on this platform\n",sizeof(char),
			       32U);
	      _T299 = _tag_fat(0U,sizeof(void *),0);
	      Cyc_log(_T298,_T299);
	      return 0;
	    }
	  }
	}
      }
    }
  }
}
int Cyc_process_specfile(const char * file,const char * dir) {
  long _T0;
  struct Cyc_String_pa_PrintArg_struct _T1;
  struct _fat_ptr _T2;
  void * _T3;
  void * _T4;
  unsigned int _T5;
  struct Cyc___cycFILE * _T6;
  struct _fat_ptr _T7;
  struct _fat_ptr _T8;
  struct Cyc___cycFILE * _T9;
  unsigned int _TA;
  struct Cyc_String_pa_PrintArg_struct _TB;
  struct _fat_ptr _TC;
  void * _TD;
  void * _TE;
  unsigned int _TF;
  struct Cyc___cycFILE * _T10;
  struct _fat_ptr _T11;
  struct _fat_ptr _T12;
  char * _T13;
  char * _T14;
  unsigned int _T15;
  unsigned int _T16;
  struct _fat_ptr _T17;
  struct _fat_ptr _T18;
  unsigned int _T19;
  int _T1A;
  struct Cyc_String_pa_PrintArg_struct _T1B;
  struct _fat_ptr _T1C;
  void * _T1D;
  void * _T1E;
  unsigned int _T1F;
  struct Cyc___cycFILE * _T20;
  struct _fat_ptr _T21;
  struct _fat_ptr _T22;
  struct _tuple19 * _T23;
  struct _fat_ptr _T24;
  unsigned char * _T25;
  unsigned char * _T26;
  const char * _T27;
  struct Cyc_List_List * _T28;
  struct Cyc_List_List * _T29;
  struct Cyc_List_List * _T2A;
  struct Cyc_List_List * _T2B;
  struct Cyc_List_List * _T2C;
  struct Cyc_List_List * _T2D;
  struct Cyc_List_List * _T2E;
  int _T2F;
  struct _fat_ptr _T30;
  unsigned char * _T31;
  unsigned char * _T32;
  char * _T33;
  int _T34;
  struct Cyc_String_pa_PrintArg_struct _T35;
  struct Cyc___cycFILE * _T36;
  struct _fat_ptr _T37;
  struct _fat_ptr _T38;
  _T0 = Cyc_verbose;
  if (! _T0) { goto _TL1EC;
  }
  { struct Cyc_String_pa_PrintArg_struct _T39;
    _T39.tag = 0;
    { const char * _T3A = file;
      _T3 = (void *)_T3A;
      _T4 = (void *)_T3A;
      _T5 = _get_zero_arr_size_char(_T4,1U);
      _T2 = _tag_fat(_T3,sizeof(char),_T5);
    }_T39.f1 = _T2;
    _T1 = _T39;
  }{ struct Cyc_String_pa_PrintArg_struct _T39 = _T1;
    void * _T3A[1];
    _T3A[0] = &_T39;
    _T6 = Cyc_stderr;
    _T7 = _tag_fat("Processing %s\n",sizeof(char),15U);
    _T8 = _tag_fat(_T3A,sizeof(void *),1);
    Cyc_fprintf(_T6,_T7,_T8);
  }goto _TL1ED;
  _TL1EC: _TL1ED: { struct Cyc___cycFILE * maybe = Cyc_fopen(file,"r");
    _T9 = maybe;
    _TA = (unsigned int)_T9;
    if (_TA) { goto _TL1EE;
    }else { goto _TL1F0;
    }
    _TL1F0: { struct Cyc_String_pa_PrintArg_struct _T39;
      _T39.tag = 0;
      { const char * _T3A = file;
	_TD = (void *)_T3A;
	_TE = (void *)_T3A;
	_TF = _get_zero_arr_size_char(_TE,1U);
	_TC = _tag_fat(_TD,sizeof(char),_TF);
      }_T39.f1 = _TC;
      _TB = _T39;
    }{ struct Cyc_String_pa_PrintArg_struct _T39 = _TB;
      void * _T3A[1];
      _T3A[0] = &_T39;
      _T10 = Cyc_stderr;
      _T11 = _tag_fat("Error: could not open %s\n",sizeof(char),26U);
      _T12 = _tag_fat(_T3A,sizeof(void *),1);
      Cyc_fprintf(_T10,_T11,_T12);
    }return 1;
    _TL1EE: { struct Cyc___cycFILE * in_file = maybe;
      { unsigned int _T39 = 1024U + 1U;
	_T15 = _check_times(_T39,sizeof(char));
	{ char * _T3A = _cycalloc_atomic(_T15);
	  { unsigned int _T3B = _T39;
	    unsigned int i;
	    i = 0;
	    _TL1F4: if (i < _T3B) { goto _TL1F2;
	    }else { goto _TL1F3;
	    }
	    _TL1F2: _T16 = i;
	    _T3A[_T16] = '\000';
	    i = i + 1;
	    goto _TL1F4;
	    _TL1F3: _T3A[_T3B] = 0;
	  }_T14 = (char *)_T3A;
	}_T13 = _T14;
      }{ struct _fat_ptr buf = _tag_fat(_T13,sizeof(char),1025U);
	_T17 = buf;
	_T18 = buf;
	_T19 = _get_fat_size(_T18,sizeof(char));
	{ struct _fat_ptr cwd = Cyc_getcwd(_T17,_T19);
	  _T1A = chdir(dir);
	  if (! _T1A) { goto _TL1F5;
	  }
	  { struct Cyc_String_pa_PrintArg_struct _T39;
	    _T39.tag = 0;
	    { const char * _T3A = dir;
	      _T1D = (void *)_T3A;
	      _T1E = (void *)_T3A;
	      _T1F = _get_zero_arr_size_char(_T1E,1U);
	      _T1C = _tag_fat(_T1D,sizeof(char),_T1F);
	    }_T39.f1 = _T1C;
	    _T1B = _T39;
	  }{ struct Cyc_String_pa_PrintArg_struct _T39 = _T1B;
	    void * _T3A[1];
	    _T3A[0] = &_T39;
	    _T20 = Cyc_stderr;
	    _T21 = _tag_fat("Error: can't change directory to %s\n",sizeof(char),
			    37U);
	    _T22 = _tag_fat(_T3A,sizeof(void *),1);
	    Cyc_fprintf(_T20,_T21,_T22);
	  }return 1;
	  _TL1F5: { struct Cyc_Lexing_lexbuf * l = Cyc_Lexing_from_file(in_file);
	    struct _tuple19 * entry;
	    _TL1F7: entry = Cyc_spec(l);
	    _T23 = entry;
	    if (_T23 != 0) { goto _TL1F8;
	    }else { goto _TL1F9;
	    }
	    _TL1F8: { struct _tuple19 * _T39 = entry;
	      struct Cyc_List_List * _T3A;
	      struct Cyc_List_List * _T3B;
	      struct Cyc_List_List * _T3C;
	      struct Cyc_List_List * _T3D;
	      struct Cyc_List_List * _T3E;
	      struct Cyc_List_List * _T3F;
	      struct Cyc_List_List * _T40;
	      struct _fat_ptr _T41;
	      { struct _tuple19 _T42 = *_T39;
		_T41 = _T42.f0;
		_T40 = _T42.f1;
		_T3F = _T42.f2;
		_T3E = _T42.f3;
		_T3D = _T42.f4;
		_T3C = _T42.f5;
		_T3B = _T42.f6;
		_T3A = _T42.f7;
	      }{ struct _fat_ptr headerfile = _T41;
		struct Cyc_List_List * start_symbols = _T40;
		struct Cyc_List_List * user_defs = _T3F;
		struct Cyc_List_List * omit_symbols = _T3E;
		struct Cyc_List_List * hstubs = _T3D;
		struct Cyc_List_List * cstubs = _T3C;
		struct Cyc_List_List * cycstubs = _T3B;
		struct Cyc_List_List * cpp_insert = _T3A;
		_T24 = headerfile;
		_T25 = _untag_fat_ptr(_T24,sizeof(char),1U);
		_T26 = _check_null(_T25);
		_T27 = (const char *)_T26;
		_T28 = start_symbols;
		_T29 = user_defs;
		_T2A = omit_symbols;
		_T2B = hstubs;
		_T2C = cstubs;
		_T2D = cycstubs;
		_T2E = cpp_insert;
		_T2F = Cyc_process_file(_T27,_T28,_T29,_T2A,_T2B,_T2C,_T2D,
					_T2E);
		if (! _T2F) { goto _TL1FA;
		}
		return 1;
		_TL1FA: ;
	      }
	    }goto _TL1F7;
	    _TL1F9: Cyc_fclose(in_file);
	    _T30 = cwd;
	    _T31 = _untag_fat_ptr(_T30,sizeof(char),1U);
	    _T32 = _check_null(_T31);
	    _T33 = (char *)_T32;
	    _T34 = chdir(_T33);
	    if (! _T34) { goto _TL1FC;
	    }
	    { struct Cyc_String_pa_PrintArg_struct _T39;
	      _T39.tag = 0;
	      _T39.f1 = cwd;
	      _T35 = _T39;
	    }{ struct Cyc_String_pa_PrintArg_struct _T39 = _T35;
	      void * _T3A[1];
	      _T3A[0] = &_T39;
	      _T36 = Cyc_stderr;
	      _T37 = _tag_fat("Error: could not change directory to %s\n",
			      sizeof(char),41U);
	      _T38 = _tag_fat(_T3A,sizeof(void *),1);
	      Cyc_fprintf(_T36,_T37,_T38);
	    }return 1;
	    _TL1FC: return 0;
	  }
	}
      }
    }
  }
}
int Cyc_process_setjmp(const char * dir) {
  char * _T0;
  char * _T1;
  unsigned int _T2;
  unsigned int _T3;
  struct _fat_ptr _T4;
  struct _fat_ptr _T5;
  unsigned int _T6;
  int _T7;
  struct Cyc_String_pa_PrintArg_struct _T8;
  struct _fat_ptr _T9;
  void * _TA;
  void * _TB;
  unsigned int _TC;
  struct Cyc___cycFILE * _TD;
  struct _fat_ptr _TE;
  struct _fat_ptr _TF;
  struct Cyc_List_List * _T10;
  struct _fat_ptr * _T11;
  struct _fat_ptr _T12;
  struct Cyc_List_List * _T13;
  struct _tuple17 * _T14;
  struct _fat_ptr _T15;
  int _T16;
  struct _fat_ptr _T17;
  unsigned char * _T18;
  unsigned char * _T19;
  char * _T1A;
  int _T1B;
  struct Cyc_String_pa_PrintArg_struct _T1C;
  struct Cyc___cycFILE * _T1D;
  struct _fat_ptr _T1E;
  struct _fat_ptr _T1F;
  { unsigned int _T20 = 1024U + 1U;
    _T2 = _check_times(_T20,sizeof(char));
    { char * _T21 = _cycalloc_atomic(_T2);
      { unsigned int _T22 = _T20;
	unsigned int i;
	i = 0;
	_TL201: if (i < _T22) { goto _TL1FF;
	}else { goto _TL200;
	}
	_TL1FF: _T3 = i;
	_T21[_T3] = '\000';
	i = i + 1;
	goto _TL201;
	_TL200: _T21[_T22] = 0;
      }_T1 = (char *)_T21;
    }_T0 = _T1;
  }{ struct _fat_ptr buf = _tag_fat(_T0,sizeof(char),1025U);
    _T4 = buf;
    _T5 = buf;
    _T6 = _get_fat_size(_T5,sizeof(char));
    { struct _fat_ptr cwd = Cyc_getcwd(_T4,_T6);
      _T7 = chdir(dir);
      if (! _T7) { goto _TL202;
      }
      { struct Cyc_String_pa_PrintArg_struct _T20;
	_T20.tag = 0;
	{ const char * _T21 = dir;
	  _TA = (void *)_T21;
	  _TB = (void *)_T21;
	  _TC = _get_zero_arr_size_char(_TB,1U);
	  _T9 = _tag_fat(_TA,sizeof(char),_TC);
	}_T20.f1 = _T9;
	_T8 = _T20;
      }{ struct Cyc_String_pa_PrintArg_struct _T20 = _T8;
	void * _T21[1];
	_T21[0] = &_T20;
	_TD = Cyc_stderr;
	_TE = _tag_fat("Error: can't change directory to %s\n",sizeof(char),
		       37U);
	_TF = _tag_fat(_T21,sizeof(void *),1);
	Cyc_fprintf(_TD,_TE,_TF);
      }return 1;
      _TL202: { struct _fat_ptr * _T20[1];
	{ struct _fat_ptr * _T21 = _cycalloc(sizeof(struct _fat_ptr));
	  *_T21 = _tag_fat("jmp_buf",sizeof(char),8U);
	  _T11 = (struct _fat_ptr *)_T21;
	}_T20[0] = _T11;
	_T12 = _tag_fat(_T20,sizeof(struct _fat_ptr *),1);
	_T10 = Cyc_List_list(_T12);
      }{ struct _tuple17 * _T20[1];
	{ struct _tuple17 * _T21 = _cycalloc(sizeof(struct _tuple17));
	  _T21->f0 = _tag_fat("setjmp",sizeof(char),7U);
	  _T21->f1 = _tag_fat("extern int setjmp(jmp_buf);\n",sizeof(char),
			      29U);
	  _T14 = (struct _tuple17 *)_T21;
	}_T20[0] = _T14;
	_T15 = _tag_fat(_T20,sizeof(struct _tuple17 *),1);
	_T13 = Cyc_List_list(_T15);
      }_T16 = Cyc_process_file("setjmp.h",_T10,0,0,_T13,0,0,0);
      if (! _T16) { goto _TL204;
      }
      return 1;
      _TL204: _T17 = cwd;
      _T18 = _untag_fat_ptr(_T17,sizeof(char),1U);
      _T19 = _check_null(_T18);
      _T1A = (char *)_T19;
      _T1B = chdir(_T1A);
      if (! _T1B) { goto _TL206;
      }
      { struct Cyc_String_pa_PrintArg_struct _T20;
	_T20.tag = 0;
	_T20.f1 = cwd;
	_T1C = _T20;
      }{ struct Cyc_String_pa_PrintArg_struct _T20 = _T1C;
	void * _T21[1];
	_T21[0] = &_T20;
	_T1D = Cyc_stderr;
	_T1E = _tag_fat("Error: could not change directory to %s\n",sizeof(char),
			41U);
	_T1F = _tag_fat(_T21,sizeof(void *),1);
	Cyc_fprintf(_T1D,_T1E,_T1F);
      }return 1;
      _TL206: return 0;
    }
  }
}
static char _TmpG2[13U] = "BUILDLIB.OUT";
static struct _fat_ptr Cyc_output_dir = {(unsigned char *)_TmpG2,(unsigned char *)_TmpG2,
					 (unsigned char *)_TmpG2 + 13U};
static void Cyc_set_output_dir(struct _fat_ptr s) {
  Cyc_output_dir = s;
}
static void Cyc_set_compiler(struct _fat_ptr s) {
  Cyc_cyclone_cc = s;
}
static struct Cyc_List_List * Cyc_spec_files = 0;
static void Cyc_add_spec_file(struct _fat_ptr s) {
  struct Cyc_List_List * _T0;
  struct _fat_ptr _T1;
  unsigned char * _T2;
  unsigned char * _T3;
  { struct Cyc_List_List * _T4 = _cycalloc(sizeof(struct Cyc_List_List));
    _T1 = s;
    _T2 = _untag_fat_ptr_check_bound(_T1,sizeof(char),1U);
    _T3 = _check_null(_T2);
    _T4->hd = (const char *)_T3;
    _T4->tl = Cyc_spec_files;
    _T0 = (struct Cyc_List_List *)_T4;
  }Cyc_spec_files = _T0;
}
static long Cyc_no_other(struct _fat_ptr s) {
  return 0;
}
static void Cyc_add_cpparg(struct _fat_ptr s) {
  struct Cyc_List_List * _T0;
  struct _fat_ptr * _T1;
  { struct Cyc_List_List * _T2 = _cycalloc(sizeof(struct Cyc_List_List));
    { struct _fat_ptr * _T3 = _cycalloc(sizeof(struct _fat_ptr));
      *_T3 = s;
      _T1 = (struct _fat_ptr *)_T3;
    }_T2->hd = _T1;
    _T2->tl = Cyc_cppargs;
    _T0 = (struct Cyc_List_List *)_T2;
  }Cyc_cppargs = _T0;
}
static long Cyc_badparse = 0;
static void Cyc_unsupported_option(struct _fat_ptr s) {
  struct Cyc_String_pa_PrintArg_struct _T0;
  struct Cyc___cycFILE * _T1;
  struct _fat_ptr _T2;
  struct _fat_ptr _T3;
  { struct Cyc_String_pa_PrintArg_struct _T4;
    _T4.tag = 0;
    _T4.f1 = s;
    _T0 = _T4;
  }{ struct Cyc_String_pa_PrintArg_struct _T4 = _T0;
    void * _T5[1];
    _T5[0] = &_T4;
    _T1 = Cyc_stderr;
    _T2 = _tag_fat("Unsupported option %s\n",sizeof(char),23U);
    _T3 = _tag_fat(_T5,sizeof(void *),1);
    Cyc_fprintf(_T1,_T2,_T3);
  }Cyc_badparse = 1;
}
static void Cyc_set_header(struct _fat_ptr s) {
  struct Cyc_Set_Set * * _T0;
  unsigned int _T1;
  struct Cyc_Set_Set * * _T2;
  struct Cyc_Set_Set * (* _T3)(int (*)(struct _fat_ptr *,struct _fat_ptr *));
  struct Cyc_Set_Set * (* _T4)(int (*)(void *,void *));
  int (* _T5)(struct _fat_ptr *,struct _fat_ptr *);
  struct Cyc_Set_Set * * _T6;
  struct Cyc_Set_Set * (* _T7)(struct Cyc_Set_Set *,struct _fat_ptr *);
  struct Cyc_Set_Set * (* _T8)(struct Cyc_Set_Set *,void *);
  struct Cyc_Set_Set * * _T9;
  struct Cyc_Set_Set * _TA;
  struct _fat_ptr * _TB;
  _T0 = Cyc_headers_to_do;
  _T1 = (unsigned int)_T0;
  if (_T1) { goto _TL208;
  }else { goto _TL20A;
  }
  _TL20A: { struct Cyc_Set_Set * * _TC = _cycalloc(sizeof(struct Cyc_Set_Set *));
    _T4 = Cyc_Set_empty;
    { struct Cyc_Set_Set * (* _TD)(int (*)(struct _fat_ptr *,struct _fat_ptr *)) = (struct Cyc_Set_Set * (*)(int (*)(struct _fat_ptr *,
														     struct _fat_ptr *)))_T4;
      _T3 = _TD;
    }_T5 = Cyc_strptrcmp;
    *_TC = _T3(_T5);
    _T2 = (struct Cyc_Set_Set * *)_TC;
  }Cyc_headers_to_do = _T2;
  goto _TL209;
  _TL208: _TL209: _T6 = _check_null(Cyc_headers_to_do);
  _T8 = Cyc_Set_insert;
  { struct Cyc_Set_Set * (* _TC)(struct Cyc_Set_Set *,struct _fat_ptr *) = (struct Cyc_Set_Set * (*)(struct Cyc_Set_Set *,
												     struct _fat_ptr *))_T8;
    _T7 = _TC;
  }_T9 = Cyc_headers_to_do;
  _TA = *_T9;
  { struct _fat_ptr * _TC = _cycalloc(sizeof(struct _fat_ptr));
    *_TC = s;
    _TB = (struct _fat_ptr *)_TC;
  }*_T6 = _T7(_TA,_TB);
}
extern void GC_blacklist_warn_clear();
 struct _tuple21 {
  struct _fat_ptr f0;
  long f1;
  struct _fat_ptr f2;
  void * f3;
  struct _fat_ptr f4;
};
int Cyc_main(int argc,struct _fat_ptr argv) {
  struct Cyc_List_List * _T0;
  struct _tuple21 * _T1;
  struct Cyc_Arg_String_spec_Arg_Spec_struct * _T2;
  struct _tuple21 * _T3;
  struct Cyc_Arg_String_spec_Arg_Spec_struct * _T4;
  void (* _T5)(struct _fat_ptr);
  struct _tuple21 * _T6;
  struct Cyc_Arg_Set_spec_Arg_Spec_struct * _T7;
  struct _tuple21 * _T8;
  struct Cyc_Arg_String_spec_Arg_Spec_struct * _T9;
  struct _tuple21 * _TA;
  struct Cyc_Arg_Set_spec_Arg_Spec_struct * _TB;
  struct _tuple21 * _TC;
  struct Cyc_Arg_Flag_spec_Arg_Spec_struct * _TD;
  struct _fat_ptr _TE;
  struct Cyc_List_List * _TF;
  struct _fat_ptr _T10;
  struct _fat_ptr _T11;
  long _T12;
  long _T13;
  long _T14;
  struct Cyc_List_List * _T15;
  struct _fat_ptr _T16;
  int _T17;
  int _T18;
  struct Cyc_String_pa_PrintArg_struct _T19;
  struct Cyc___cycFILE * _T1A;
  struct _fat_ptr _T1B;
  struct _fat_ptr _T1C;
  long _T1D;
  struct Cyc_String_pa_PrintArg_struct _T1E;
  struct Cyc___cycFILE * _T1F;
  struct _fat_ptr _T20;
  struct _fat_ptr _T21;
  struct _fat_ptr _T22;
  struct _fat_ptr _T23;
  struct _fat_ptr _T24;
  unsigned char * _T25;
  const char * _T26;
  struct Cyc___cycFILE * _T27;
  unsigned int _T28;
  struct Cyc_String_pa_PrintArg_struct _T29;
  struct Cyc___cycFILE * _T2A;
  struct _fat_ptr _T2B;
  struct _fat_ptr _T2C;
  long _T2D;
  struct _fat_ptr _T2E;
  struct _fat_ptr _T2F;
  struct _fat_ptr _T30;
  unsigned char * _T31;
  const char * _T32;
  struct Cyc___cycFILE * _T33;
  unsigned int _T34;
  struct Cyc_String_pa_PrintArg_struct _T35;
  struct Cyc___cycFILE * _T36;
  struct _fat_ptr _T37;
  struct _fat_ptr _T38;
  struct _fat_ptr _T39;
  struct _fat_ptr _T3A;
  struct _fat_ptr _T3B;
  unsigned char * _T3C;
  const char * _T3D;
  struct Cyc___cycFILE * _T3E;
  unsigned int _T3F;
  struct Cyc_String_pa_PrintArg_struct _T40;
  struct Cyc___cycFILE * _T41;
  struct _fat_ptr _T42;
  struct _fat_ptr _T43;
  struct Cyc___cycFILE * _T44;
  struct _fat_ptr _T45;
  struct _fat_ptr _T46;
  struct _fat_ptr _T47;
  unsigned char * _T48;
  long _T49;
  int _T4A;
  struct Cyc_List_List * _T4B;
  void * _T4C;
  const char * _T4D;
  const char * _T4E;
  int _T4F;
  struct Cyc___cycFILE * _T50;
  struct _fat_ptr _T51;
  struct _fat_ptr _T52;
  struct Cyc_List_List * _T53;
  long _T54;
  GC_blacklist_warn_clear();
  { struct _tuple21 * _T55[6];
    { struct _tuple21 * _T56 = _cycalloc(sizeof(struct _tuple21));
      _T56->f0 = _tag_fat("-d",sizeof(char),3U);
      _T56->f1 = 0;
      _T56->f2 = _tag_fat(" <file>",sizeof(char),8U);
      { struct Cyc_Arg_String_spec_Arg_Spec_struct * _T57 = _cycalloc(sizeof(struct Cyc_Arg_String_spec_Arg_Spec_struct));
	_T57->tag = 5;
	_T57->f1 = Cyc_set_output_dir;
	_T2 = (struct Cyc_Arg_String_spec_Arg_Spec_struct *)_T57;
      }_T56->f3 = (void *)_T2;
      _T56->f4 = _tag_fat("Set the output directory to <file>",sizeof(char),
			  35U);
      _T1 = (struct _tuple21 *)_T56;
    }_T55[0] = _T1;
    { struct _tuple21 * _T56 = _cycalloc(sizeof(struct _tuple21));
      _T56->f0 = _tag_fat("-cc",sizeof(char),4U);
      _T56->f1 = 0;
      _T56->f2 = _tag_fat(" <compiler>",sizeof(char),12U);
      { struct Cyc_Arg_String_spec_Arg_Spec_struct * _T57 = _cycalloc(sizeof(struct Cyc_Arg_String_spec_Arg_Spec_struct));
	_T57->tag = 5;
	_T5 = &Cyc_set_compiler;
	_T57->f1 = (void (*)(struct _fat_ptr))_T5;
	_T4 = (struct Cyc_Arg_String_spec_Arg_Spec_struct *)_T57;
      }_T56->f3 = (void *)_T4;
      _T56->f4 = _tag_fat("Use this compiler instead of 'gcc'.",sizeof(char),
			  36U);
      _T3 = (struct _tuple21 *)_T56;
    }_T55[1] = _T3;
    { struct _tuple21 * _T56 = _cycalloc(sizeof(struct _tuple21));
      _T56->f0 = _tag_fat("-setjmp",sizeof(char),8U);
      _T56->f1 = 0;
      _T56->f2 = _tag_fat("",sizeof(char),1U);
      { struct Cyc_Arg_Set_spec_Arg_Spec_struct * _T57 = _cycalloc(sizeof(struct Cyc_Arg_Set_spec_Arg_Spec_struct));
	_T57->tag = 3;
	_T57->f1 = &Cyc_do_setjmp;
	_T7 = (struct Cyc_Arg_Set_spec_Arg_Spec_struct *)_T57;
      }_T56->f3 = (void *)_T7;
      _T56->f4 = _tag_fat("Produce the jmp_buf and setjmp declarations on the standard output, for use by the Cyclone compiler special file cyc_setjmp.h.  Cannot be used with specfiles.",
			  sizeof(char),159U);
      _T6 = (struct _tuple21 *)_T56;
    }_T55[2] = _T6;
    { struct _tuple21 * _T56 = _cycalloc(sizeof(struct _tuple21));
      _T56->f0 = _tag_fat("-h",sizeof(char),3U);
      _T56->f1 = 0;
      _T56->f2 = _tag_fat(" <header>",sizeof(char),10U);
      { struct Cyc_Arg_String_spec_Arg_Spec_struct * _T57 = _cycalloc(sizeof(struct Cyc_Arg_String_spec_Arg_Spec_struct));
	_T57->tag = 5;
	_T57->f1 = Cyc_set_header;
	_T9 = (struct Cyc_Arg_String_spec_Arg_Spec_struct *)_T57;
      }_T56->f3 = (void *)_T9;
      _T56->f4 = _tag_fat("Produce this header, and other -h headers only",
			  sizeof(char),47U);
      _T8 = (struct _tuple21 *)_T56;
    }_T55[3] = _T8;
    { struct _tuple21 * _T56 = _cycalloc(sizeof(struct _tuple21));
      _T56->f0 = _tag_fat("-v",sizeof(char),3U);
      _T56->f1 = 0;
      _T56->f2 = _tag_fat("",sizeof(char),1U);
      { struct Cyc_Arg_Set_spec_Arg_Spec_struct * _T57 = _cycalloc(sizeof(struct Cyc_Arg_Set_spec_Arg_Spec_struct));
	_T57->tag = 3;
	_T57->f1 = &Cyc_verbose;
	_TB = (struct Cyc_Arg_Set_spec_Arg_Spec_struct *)_T57;
      }_T56->f3 = (void *)_TB;
      _T56->f4 = _tag_fat("Verbose operation",sizeof(char),18U);
      _TA = (struct _tuple21 *)_T56;
    }_T55[4] = _TA;
    { struct _tuple21 * _T56 = _cycalloc(sizeof(struct _tuple21));
      _T56->f0 = _tag_fat("-",sizeof(char),2U);
      _T56->f1 = 1;
      _T56->f2 = _tag_fat("",sizeof(char),1U);
      { struct Cyc_Arg_Flag_spec_Arg_Spec_struct * _T57 = _cycalloc(sizeof(struct Cyc_Arg_Flag_spec_Arg_Spec_struct));
	_T57->tag = 1;
	_T57->f1 = Cyc_add_cpparg;
	_TD = (struct Cyc_Arg_Flag_spec_Arg_Spec_struct *)_T57;
      }_T56->f3 = (void *)_TD;
      _T56->f4 = _tag_fat("",sizeof(char),1U);
      _TC = (struct _tuple21 *)_T56;
    }_T55[5] = _TC;
    _TE = _tag_fat(_T55,sizeof(struct _tuple21 *),6);
    _T0 = Cyc_List_list(_TE);
  }{ struct Cyc_List_List * options = _T0;
    Cyc_Arg_current = 0;
    _TF = options;
    _T10 = _tag_fat("Options:",sizeof(char),9U);
    _T11 = argv;
    Cyc_Arg_parse(_TF,Cyc_add_spec_file,Cyc_no_other,_T10,_T11);
    _T12 = Cyc_badparse;
    if (_T12) { goto _TL20D;
    }else { goto _TL20F;
    }
    _TL20F: _T13 = Cyc_do_setjmp;
    if (_T13) { goto _TL20E;
    }else { goto _TL210;
    }
    _TL210: if (Cyc_spec_files == 0) { goto _TL20D;
    }else { goto _TL20E;
    }
    _TL20E: _T14 = Cyc_do_setjmp;
    if (_T14) { goto _TL211;
    }else { goto _TL20B;
    }
    _TL211: if (Cyc_spec_files != 0) { goto _TL20D;
    }else { goto _TL20B;
    }
    _TL20D: _T15 = options;
    _T16 = _tag_fat("Usage: buildlib [options] specfile1 specfile2 ...\nOptions:",
		    sizeof(char),59U);
    Cyc_Arg_usage(_T15,_T16);
    return 1;
    _TL20B: _T17 = Cyc_force_directory_prefixes(Cyc_output_dir);
    if (_T17) { goto _TL214;
    }else { goto _TL215;
    }
    _TL215: _T18 = Cyc_force_directory(Cyc_output_dir);
    if (_T18) { goto _TL214;
    }else { goto _TL212;
    }
    _TL214: { struct Cyc_String_pa_PrintArg_struct _T55;
      _T55.tag = 0;
      _T55.f1 = Cyc_output_dir;
      _T19 = _T55;
    }{ struct Cyc_String_pa_PrintArg_struct _T55 = _T19;
      void * _T56[1];
      _T56[0] = &_T55;
      _T1A = Cyc_stderr;
      _T1B = _tag_fat("Error: could not create directory %s\n",sizeof(char),
		      38U);
      _T1C = _tag_fat(_T56,sizeof(void *),1);
      Cyc_fprintf(_T1A,_T1B,_T1C);
    }return 1;
    _TL212: _T1D = Cyc_verbose;
    if (! _T1D) { goto _TL216;
    }
    { struct Cyc_String_pa_PrintArg_struct _T55;
      _T55.tag = 0;
      _T55.f1 = Cyc_output_dir;
      _T1E = _T55;
    }{ struct Cyc_String_pa_PrintArg_struct _T55 = _T1E;
      void * _T56[1];
      _T56[0] = &_T55;
      _T1F = Cyc_stderr;
      _T20 = _tag_fat("Output directory is %s\n",sizeof(char),24U);
      _T21 = _tag_fat(_T56,sizeof(void *),1);
      Cyc_fprintf(_T1F,_T20,_T21);
    }goto _TL217;
    _TL216: _TL217: _T22 = Cyc_output_dir;
    _T23 = _tag_fat("BUILDLIB.LOG",sizeof(char),13U);
    _T24 = Cyc_Filename_concat(_T22,_T23);
    _T25 = _untag_fat_ptr(_T24,sizeof(char),1U);
    _T26 = (const char *)_T25;
    Cyc_log_file = Cyc_fopen(_T26,"w");
    _T27 = Cyc_log_file;
    _T28 = (unsigned int)_T27;
    if (_T28) { goto _TL218;
    }else { goto _TL21A;
    }
    _TL21A: { struct Cyc_String_pa_PrintArg_struct _T55;
      _T55.tag = 0;
      _T55.f1 = Cyc_output_dir;
      _T29 = _T55;
    }{ struct Cyc_String_pa_PrintArg_struct _T55 = _T29;
      void * _T56[1];
      _T56[0] = &_T55;
      _T2A = Cyc_stderr;
      _T2B = _tag_fat("Error: could not create log file in directory %s\n",
		      sizeof(char),50U);
      _T2C = _tag_fat(_T56,sizeof(void *),1);
      Cyc_fprintf(_T2A,_T2B,_T2C);
    }return 1;
    _TL218: _T2D = Cyc_do_setjmp;
    if (_T2D) { goto _TL21B;
    }else { goto _TL21D;
    }
    _TL21D: _T2E = Cyc_output_dir;
    _T2F = _tag_fat("cstubs.c",sizeof(char),9U);
    _T30 = Cyc_Filename_concat(_T2E,_T2F);
    _T31 = _untag_fat_ptr(_T30,sizeof(char),1U);
    _T32 = (const char *)_T31;
    Cyc_cstubs_file = Cyc_fopen(_T32,"w");
    _T33 = Cyc_cstubs_file;
    _T34 = (unsigned int)_T33;
    if (_T34) { goto _TL21E;
    }else { goto _TL220;
    }
    _TL220: { struct Cyc_String_pa_PrintArg_struct _T55;
      _T55.tag = 0;
      _T55.f1 = Cyc_output_dir;
      _T35 = _T55;
    }{ struct Cyc_String_pa_PrintArg_struct _T55 = _T35;
      void * _T56[1];
      _T56[0] = &_T55;
      _T36 = Cyc_stderr;
      _T37 = _tag_fat("Error: could not create cstubs.c in directory %s\n",
		      sizeof(char),50U);
      _T38 = _tag_fat(_T56,sizeof(void *),1);
      Cyc_fprintf(_T36,_T37,_T38);
    }return 1;
    _TL21E: _T39 = Cyc_output_dir;
    _T3A = _tag_fat("cycstubs.cyc",sizeof(char),13U);
    _T3B = Cyc_Filename_concat(_T39,_T3A);
    _T3C = _untag_fat_ptr(_T3B,sizeof(char),1U);
    _T3D = (const char *)_T3C;
    Cyc_cycstubs_file = Cyc_fopen(_T3D,"w");
    _T3E = Cyc_cycstubs_file;
    _T3F = (unsigned int)_T3E;
    if (_T3F) { goto _TL221;
    }else { goto _TL223;
    }
    _TL223: { struct Cyc_String_pa_PrintArg_struct _T55;
      _T55.tag = 0;
      _T55.f1 = Cyc_output_dir;
      _T40 = _T55;
    }{ struct Cyc_String_pa_PrintArg_struct _T55 = _T40;
      void * _T56[1];
      _T56[0] = &_T55;
      _T41 = Cyc_stderr;
      _T42 = _tag_fat("Error: could not create cycstubs.c in directory %s\n",
		      sizeof(char),52U);
      _T43 = _tag_fat(_T56,sizeof(void *),1);
      Cyc_fprintf(_T41,_T42,_T43);
    }return 1;
    _TL221: _T44 = Cyc_cycstubs_file;
    _T45 = _tag_fat("#include \"cyclone/library/std/core.h\"\nusing Core;\n\n",
		    sizeof(char),52U);
    _T46 = _tag_fat(0U,sizeof(void *),0);
    Cyc_fprintf(_T44,_T45,_T46);
    goto _TL21C;
    _TL21B: _TL21C: _T47 = Cyc_output_dir;
    _T48 = _untag_fat_ptr(_T47,sizeof(char),1U);
    { const char * outdir = (const char *)_T48;
      _T49 = Cyc_do_setjmp;
      if (! _T49) { goto _TL224;
      }
      _T4A = Cyc_process_setjmp(outdir);
      if (! _T4A) { goto _TL224;
      }
      return 1;
      _TL224: _TL229: if (Cyc_spec_files != 0) { goto _TL227;
      }else { goto _TL228;
      }
      _TL227: _T4B = Cyc_spec_files;
      _T4C = _T4B->hd;
      _T4D = (const char *)_T4C;
      _T4E = outdir;
      _T4F = Cyc_process_specfile(_T4D,_T4E);
      if (! _T4F) { goto _TL22A;
      }
      _T50 = Cyc_stderr;
      _T51 = _tag_fat("FATAL ERROR -- QUIT!\n",sizeof(char),22U);
      _T52 = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T50,_T51,_T52);
      exit(1);
      goto _TL22B;
      _TL22A: _TL22B: _T53 = Cyc_spec_files;
      Cyc_spec_files = _T53->tl;
      goto _TL229;
      _TL228: Cyc_fclose(Cyc_log_file);
      _T54 = Cyc_do_setjmp;
      if (_T54) { goto _TL22C;
      }else { goto _TL22E;
      }
      _TL22E: Cyc_fclose(Cyc_cstubs_file);
      Cyc_fclose(Cyc_cycstubs_file);
      goto _TL22D;
      _TL22C: _TL22D: return 0;
    }
  }
}
