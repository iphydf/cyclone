#include <cyc_include.h>
 struct Cyc_Core_Opt {
  void * v;
};
 struct _tuple0 {
  void * f0;
  void * f1;
};
void * Cyc_Core_fst(struct _tuple0 *);
void * Cyc_Core_identity(void *);
extern char Cyc_Core_Not_found[10U];
 struct Cyc_Core_Not_found_exn_struct {
  char * tag;
};
 struct Cyc_List_List {
  void * hd;
  struct Cyc_List_List * tl;
};
extern struct Cyc_List_List * Cyc_List_list(struct _fat_ptr);
extern int Cyc_List_length(struct Cyc_List_List *);
extern struct Cyc_List_List * Cyc_List_map(void * (*)(void *),struct Cyc_List_List *);
extern struct Cyc_List_List * Cyc_List_map_c(void * (*)(void *,void *),void *,
					     struct Cyc_List_List *);
extern struct Cyc_List_List * Cyc_List_imp_rev(struct Cyc_List_List *);
extern struct Cyc_List_List * Cyc_List_imp_append(struct Cyc_List_List *,
						  struct Cyc_List_List *);
extern void * Cyc_List_nth(struct Cyc_List_List *,int);
extern long Cyc_List_exists(long (*)(void *),struct Cyc_List_List *);
extern long Cyc_List_exists_c(long (*)(void *,void *),void *,struct Cyc_List_List *);
extern long Cyc_List_mem(int (*)(void *,void *),struct Cyc_List_List *,void *);
extern void * Cyc_List_assoc_cmp(int (*)(void *,void *),struct Cyc_List_List *,
				 void *);
extern struct Cyc_List_List * Cyc_List_filter(long (*)(void *),struct Cyc_List_List *);
extern int Cyc_strcmp(struct _fat_ptr,struct _fat_ptr);
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
enum Cyc_Absyn_AliasHint {
  Cyc_Absyn_UniqueHint = 0U,
  Cyc_Absyn_RefcntHint = 1U,
  Cyc_Absyn_RestrictedHint = 2U,
  Cyc_Absyn_NoHint = 3U
};
enum Cyc_Absyn_KindQual {
  Cyc_Absyn_AnyKind = 0U,
  Cyc_Absyn_MemKind = 1U,
  Cyc_Absyn_BoxKind = 2U,
  Cyc_Absyn_EffKind = 3U,
  Cyc_Absyn_IntKind = 4U,
  Cyc_Absyn_BoolKind = 5U,
  Cyc_Absyn_PtrBndKind = 6U,
  Cyc_Absyn_AqualKind = 7U
};
 struct Cyc_Absyn_Kind {
  enum Cyc_Absyn_KindQual kind;
  enum Cyc_Absyn_AliasHint aliashint;
};
 struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct {
  int tag;
  struct Cyc_Absyn_Kind * f1;
};
 struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct {
  int tag;
  struct Cyc_Core_Opt * f1;
};
 struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct {
  int tag;
  struct Cyc_Core_Opt * f1;
  struct Cyc_Absyn_Kind * f2;
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
 struct Cyc_Absyn_UnknownDatatypeInfo {
  struct _tuple1 * name;
  long is_extensible;
};
 struct _union_DatatypeInfo_UnknownDatatype {
  int tag;
  struct Cyc_Absyn_UnknownDatatypeInfo val;
};
 struct _union_DatatypeInfo_KnownDatatype {
  int tag;
  struct Cyc_Absyn_Datatypedecl * * val;
};
 union Cyc_Absyn_DatatypeInfo {
  struct _union_DatatypeInfo_UnknownDatatype UnknownDatatype;
  struct _union_DatatypeInfo_KnownDatatype KnownDatatype;
};
union Cyc_Absyn_DatatypeInfo Cyc_Absyn_KnownDatatype(struct Cyc_Absyn_Datatypedecl * *);
 struct Cyc_Absyn_UnknownDatatypeFieldInfo {
  struct _tuple1 * datatype_name;
  struct _tuple1 * field_name;
  long is_extensible;
};
 struct _union_DatatypeFieldInfo_UnknownDatatypefield {
  int tag;
  struct Cyc_Absyn_UnknownDatatypeFieldInfo val;
};
 struct _tuple2 {
  struct Cyc_Absyn_Datatypedecl * f0;
  struct Cyc_Absyn_Datatypefield * f1;
};
 struct _union_DatatypeFieldInfo_KnownDatatypefield {
  int tag;
  struct _tuple2 val;
};
 union Cyc_Absyn_DatatypeFieldInfo {
  struct _union_DatatypeFieldInfo_UnknownDatatypefield UnknownDatatypefield;
  struct _union_DatatypeFieldInfo_KnownDatatypefield KnownDatatypefield;
};
union Cyc_Absyn_DatatypeFieldInfo Cyc_Absyn_KnownDatatypefield(struct Cyc_Absyn_Datatypedecl *,
							       struct Cyc_Absyn_Datatypefield *);
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
union Cyc_Absyn_AggrInfo Cyc_Absyn_KnownAggr(struct Cyc_Absyn_Aggrdecl * *);
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
 struct Cyc_Absyn_AnonEnumCon_Absyn_TyCon_struct {
  int tag;
  struct Cyc_List_List * f1;
};
 struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct {
  int tag;
  union Cyc_Absyn_DatatypeInfo f1;
};
 struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct {
  int tag;
  union Cyc_Absyn_DatatypeFieldInfo f1;
};
 struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct {
  int tag;
  union Cyc_Absyn_AggrInfo f1;
};
 struct Cyc_Absyn_SingleConstraint_Absyn_EffConstraint_struct {
  int tag;
  void * f1;
};
 struct Cyc_Absyn_DisjointConstraint_Absyn_EffConstraint_struct {
  int tag;
  void * f1;
  void * f2;
};
 struct Cyc_Absyn_SubsetConstraint_Absyn_EffConstraint_struct {
  int tag;
  void * f1;
  void * f2;
};
 struct Cyc_Absyn_AppType_Absyn_Type_struct {
  int tag;
  void * f1;
  struct Cyc_List_List * f2;
};
 struct Cyc_Absyn_Evar_Absyn_Type_struct {
  int tag;
  struct Cyc_Core_Opt * f1;
  void * f2;
  int f3;
  struct Cyc_Core_Opt * f4;
};
 struct Cyc_Absyn_VarType_Absyn_Type_struct {
  int tag;
  struct Cyc_Absyn_Tvar * f1;
};
 struct Cyc_Absyn_Cvar_Absyn_Type_struct {
  int tag;
  struct Cyc_Core_Opt * f1;
  void * f2;
  int f3;
  void * f4;
  const char * f5;
  const char * f6;
  long f7;
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
 struct Cyc_Absyn_ValueofType_Absyn_Type_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
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
 struct Cyc_Absyn_SubsetType_Absyn_Type_struct {
  int tag;
  struct Cyc_Absyn_Vardecl * f1;
  struct Cyc_Absyn_Exp * f2;
  struct Cyc_AssnDef_ExistAssnFn * f3;
};
enum Cyc_Absyn_Format_Type {
  Cyc_Absyn_Printf_ft = 0U,
  Cyc_Absyn_Scanf_ft = 1U
};
 struct Cyc_Absyn_Format_att_Absyn_Attribute_struct {
  int tag;
  enum Cyc_Absyn_Format_Type f1;
  int f2;
  int f3;
};
enum Cyc_Absyn_Coercion {
  Cyc_Absyn_Unknown_coercion = 0U,
  Cyc_Absyn_No_coercion = 1U,
  Cyc_Absyn_Null_to_NonNull = 2U,
  Cyc_Absyn_Subset_coercion = 3U,
  Cyc_Absyn_Other_coercion = 4U
};
 struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct {
  int tag;
  void * f1;
  struct Cyc_Absyn_Exp * f2;
  long f3;
  enum Cyc_Absyn_Coercion f4;
};
 struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct {
  int tag;
  void * f1;
};
 struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct {
  int tag;
  void * f1;
  struct Cyc_List_List * f2;
};
 struct _tuple9 {
  struct _fat_ptr * f0;
  struct Cyc_Absyn_Tqual f1;
  void * f2;
};
 struct Cyc_Absyn_Valueof_e_Absyn_Raw_exp_struct {
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
 struct Cyc_Absyn_Datatypefield {
  struct _tuple1 * name;
  struct Cyc_List_List * typs;
  unsigned int loc;
  enum Cyc_Absyn_Scope sc;
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
int Cyc_Absyn_qvar_cmp(struct _tuple1 *,struct _tuple1 *);
int Cyc_Absyn_tvar_cmp(struct Cyc_Absyn_Tvar *,struct Cyc_Absyn_Tvar *);
void * Cyc_Absyn_compress(void *);
long Cyc_Absyn_type2bool(long,void *);
void * Cyc_Absyn_new_evar(struct Cyc_Core_Opt *,struct Cyc_Core_Opt *);
extern void * Cyc_Absyn_heap_rgn_type;
extern void * Cyc_Absyn_al_qual_type;
extern void * Cyc_Absyn_un_qual_type;
extern void * Cyc_Absyn_rc_qual_type;
extern void * Cyc_Absyn_rtd_qual_type;
extern void * Cyc_Absyn_true_type;
extern void * Cyc_Absyn_false_type;
extern void * Cyc_Absyn_void_type;
extern void * Cyc_Absyn_var_type(struct Cyc_Absyn_Tvar *);
extern void * Cyc_Absyn_aqual_var_type(void *,void *);
extern void * Cyc_Absyn_join_eff(struct Cyc_List_List *);
extern void * Cyc_Absyn_regionsof_eff(void *);
struct _tuple1 * Cyc_Absyn_datatype_print_arg_qvar();
struct _tuple1 * Cyc_Absyn_datatype_scanf_arg_qvar();
void * Cyc_Absyn_bounds_one();
void * Cyc_Absyn_fatconst();
void * Cyc_Absyn_thinconst();
void * Cyc_Absyn_aqualsof_type(void *);
struct Cyc_Absyn_Exp * Cyc_Absyn_uint_exp(unsigned int,unsigned int);
void Cyc_Absyn_visit_exp(long (*)(void *,struct Cyc_Absyn_Exp *),long (*)(void *,
									  struct Cyc_Absyn_Stmt *),
			 void *,struct Cyc_Absyn_Exp *);
long Cyc_Atts_fntype_att(void *);
void Cyc_Atts_check_field_atts(unsigned int,struct _fat_ptr *,struct Cyc_List_List *);
void * Cyc_BansheeIf_equality_constraint(void *,void *);
long Cyc_BansheeIf_add_constraint(unsigned int,void *);
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
struct Cyc_Tcenv_Fenv * Cyc_Tcenv_bogus_fenv(void *,struct Cyc_List_List *);
struct Cyc_Absyn_Aggrdecl * * Cyc_Tcenv_lookup_aggrdecl(struct Cyc_Tcenv_Tenv *,
							unsigned int,struct _tuple1 *);
struct Cyc_Absyn_Datatypedecl * * Cyc_Tcenv_lookup_datatypedecl(struct Cyc_Tcenv_Tenv *,
								unsigned int,
								struct _tuple1 *);
struct Cyc_Absyn_Enumdecl * * Cyc_Tcenv_lookup_enumdecl(struct Cyc_Tcenv_Tenv *,
							unsigned int,struct _tuple1 *);
struct Cyc_Absyn_Typedefdecl * Cyc_Tcenv_lookup_typedefdecl(struct Cyc_Tcenv_Tenv *,
							    unsigned int,
							    struct _tuple1 *);
struct Cyc_Tcenv_Tenv * Cyc_Tcenv_allow_valueof(struct Cyc_Tcenv_Tenv *);
struct Cyc_List_List * Cyc_Tcenv_lookup_type_vars(struct Cyc_Tcenv_Tenv *);
struct Cyc_List_List * Cyc_Tcenv_curr_aquals_bounds(struct Cyc_Tcenv_Tenv *);
extern struct _fat_ptr Cyc_CurRgn_curr_rgn_name;
long Cyc_CurRgn_is_curr_rgn(struct Cyc_Absyn_Tvar *);
long Cyc_CurRgn_is_not_curr_rgn(struct Cyc_Absyn_Tvar *);
 struct _tuple14 {
  unsigned int f0;
  long f1;
};
extern struct _tuple14 Cyc_Evexp_eval_const_uint_exp(struct Cyc_Absyn_Exp *);
extern struct Cyc_Absyn_Kind Cyc_Kinds_ak;
extern struct Cyc_Absyn_Kind Cyc_Kinds_bk;
extern struct Cyc_Absyn_Kind Cyc_Kinds_mk;
extern struct Cyc_Absyn_Kind Cyc_Kinds_ek;
extern struct Cyc_Absyn_Kind Cyc_Kinds_ik;
extern struct Cyc_Absyn_Kind Cyc_Kinds_boolk;
extern struct Cyc_Absyn_Kind Cyc_Kinds_ptrbk;
extern struct Cyc_Absyn_Kind Cyc_Kinds_aqk;
extern struct Cyc_Core_Opt Cyc_Kinds_aqko;
struct Cyc_Core_Opt * Cyc_Kinds_kind_to_opt(struct Cyc_Absyn_Kind *);
struct Cyc_Absyn_Kind * Cyc_Kinds_tvar_kind(struct Cyc_Absyn_Tvar *,struct Cyc_Absyn_Kind *);
struct Cyc_Core_Opt Cyc_Kinds_tvar_kind_opt(struct Cyc_Absyn_Tvar *);
void * Cyc_Kinds_compress_kb(void *);
long Cyc_Kinds_kind_leq(struct Cyc_Absyn_Kind *,struct Cyc_Absyn_Kind *);
long Cyc_Kinds_kind_eq(struct Cyc_Absyn_Kind *,struct Cyc_Absyn_Kind *);
struct Cyc_Core_Opt * Cyc_Kinds_kind_to_bound_opt(struct Cyc_Absyn_Kind *);
long Cyc_Kinds_constrain_kinds(void *,void *);
void Cyc_Tc_tcAggrdecl(struct Cyc_Tcenv_Tenv *,unsigned int,struct Cyc_Absyn_Aggrdecl *);
void Cyc_Tc_tcDatatypedecl(struct Cyc_Tcenv_Tenv *,unsigned int,struct Cyc_Absyn_Datatypedecl *);
void Cyc_Tc_tcEnumdecl(struct Cyc_Tcenv_Tenv *,unsigned int,struct Cyc_Absyn_Enumdecl *);
void * Cyc_Tcexp_tcExp(struct Cyc_Tcenv_Tenv *,void * *,struct Cyc_Absyn_Exp *);
long Cyc_Tcutil_is_char_type(void *);
long Cyc_Tcutil_is_function_type(void *);
long Cyc_Tcutil_is_array_type(void *);
void * Cyc_Tcutil_pointer_elt_type(void *);
struct Cyc_Absyn_Exp * Cyc_Tcutil_get_bounds_exp(void *,void *);
struct Cyc_Absyn_Exp * Cyc_Tcutil_get_bounds_exp(void *,void *);
long Cyc_Tcutil_is_integral(struct Cyc_Absyn_Exp *);
void * Cyc_Tcutil_copy_type(void *);
struct Cyc_Absyn_Kind * Cyc_Tcutil_type_kind(void *);
long Cyc_Tcutil_coerce_uint_type(struct Cyc_Absyn_Exp *);
int Cyc_Tcutil_typecmp(void *,void *);
void * Cyc_Tcutil_substitute(struct Cyc_List_List *,void *);
void * Cyc_Tcutil_fndecl2type(struct Cyc_Absyn_Fndecl *);
void Cyc_Tcutil_check_bitfield(unsigned int,void *,struct Cyc_Absyn_Exp *,
			       struct _fat_ptr *);
void Cyc_Tcutil_check_unique_vars(struct Cyc_List_List *,unsigned int,struct _fat_ptr);
void Cyc_Tcutil_check_unique_tvars(unsigned int,struct Cyc_List_List *);
void * Cyc_Tcutil_normalize_effect(void *);
struct Cyc_Absyn_Tvar * Cyc_Tcutil_new_tvar(void *);
int Cyc_Tcutil_new_tvar_id();
long Cyc_Tcutil_is_const_exp(struct Cyc_Absyn_Exp *);
long Cyc_Tcutil_extract_const_from_typedef(unsigned int,long,void *);
void Cyc_Tcutil_check_no_qual(unsigned int,void *);
void * Cyc_Tcutil_promote_array(void *,void *,void *,long);
long Cyc_Tcutil_force_type2bool(long,void *);
long Cyc_Tcutil_admits_zero(void *);
int Cyc_Tcutil_fast_tvar_cmp(struct Cyc_Absyn_Tvar *,struct Cyc_Absyn_Tvar *);
void * Cyc_Tcutil_lookup_aquals_opt(struct Cyc_List_List *,void *);
 struct _tuple15 {
  struct Cyc_Absyn_Tvar * f0;
  long f1;
};
struct _tuple15 * Cyc_Tcutil_tvar_bool_pair(long,struct Cyc_Absyn_Tvar *);
long Cyc_Tcutil_type_in_effect(long,void *,void *);
long Cyc_Tcutil_is_cvar_type(void *);
void * Cyc_Tcutil_ptrbnd_cvar_equivalent(void *);
long Cyc_Unify_unify(void *,void *);
struct Cyc_Set_Set;
extern struct Cyc_Absyn_Vardecl * Cyc_AssnDef_memory;
extern struct Cyc_Absyn_Vardecl * Cyc_AssnDef_pre_memory;
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
extern struct Cyc_AssnDef_ExistAssnFn * Cyc_AssnDef_assnmap2existassnfn(struct Cyc_AssnDef_AssnMap,
									struct Cyc_List_List *);
extern struct Cyc_AssnDef_AssnMap Cyc_AssnDef_true_assnmap();
extern struct Cyc_AssnDef_AssnMap Cyc_Vcgen_clause2assn(struct Cyc_Absyn_Exp *);
void * Cyc_Warn_impos_loc(unsigned int,struct _fat_ptr,struct _fat_ptr);
 struct Cyc_Warn_String_Warn_Warg_struct {
  int tag;
  struct _fat_ptr f1;
};
 struct Cyc_Warn_Qvar_Warn_Warg_struct {
  int tag;
  struct _tuple1 * f1;
};
 struct Cyc_Warn_Typ_Warn_Warg_struct {
  int tag;
  void * f1;
};
 struct Cyc_Warn_TypOpt_Warn_Warg_struct {
  int tag;
  void * f1;
};
 struct Cyc_Warn_Tvar_Warn_Warg_struct {
  int tag;
  struct Cyc_Absyn_Tvar * f1;
};
 struct Cyc_Warn_KindBound_Warn_Warg_struct {
  int tag;
  void * f1;
};
 struct Cyc_Warn_Kind_Warn_Warg_struct {
  int tag;
  struct Cyc_Absyn_Kind * f1;
};
 struct Cyc_Warn_Attribute_Warn_Warg_struct {
  int tag;
  void * f1;
};
void Cyc_Warn_err2(unsigned int,struct _fat_ptr);
void Cyc_Warn_warn2(unsigned int,struct _fat_ptr);
void * Cyc_Warn_impos2(struct _fat_ptr);
 struct Cyc_Tctyp_CVTEnv {
  unsigned int loc;
  struct Cyc_Tcenv_Tenv * te;
  struct Cyc_List_List * kind_env;
  long fn_result;
  long def_aliasable;
  long inst_type_evar;
  long generalize_evars;
  long allow_aqual_bounds;
  struct Cyc_List_List * free_vars;
  struct Cyc_List_List * free_evars;
  struct Cyc_List_List * free_qualvars;
};
static struct Cyc_Tctyp_CVTEnv Cyc_Tctyp_i_check_type(struct Cyc_Tctyp_CVTEnv,
						      struct Cyc_Absyn_Kind *,
						      void *,long,long);
 struct _tuple16 {
  void * f0;
  long f1;
};
static struct Cyc_List_List * Cyc_Tctyp_add_free_evar(struct Cyc_List_List * es,
						      void * e,long b) {
  int * _T0;
  int _T1;
  struct Cyc_List_List * _T2;
  void * _T3;
  long * _T4;
  int * _T5;
  int _T6;
  long _T7;
  long * _T8;
  long _T9;
  long * _TA;
  struct Cyc_List_List * _TB;
  struct Cyc_List_List * _TC;
  struct Cyc_List_List * _TD;
  struct _tuple16 * _TE;
  struct Cyc_List_List * _TF;
  void * _T10 = Cyc_Absyn_compress(e);
  int _T11;
  _T0 = (int *)_T10;
  _T1 = *_T0;
  if (_T1 != 1) { goto _TL0;
  }
  { struct Cyc_Absyn_Evar_Absyn_Type_struct * _T12 = (struct Cyc_Absyn_Evar_Absyn_Type_struct *)_T10;
    _T11 = _T12->f3;
  }{ int i = _T11;
    { struct Cyc_List_List * es2 = es;
      _TL5: if (es2 != 0) { goto _TL3;
      }else { goto _TL4;
      }
      _TL3: _T2 = es2;
      _T3 = _T2->hd;
      { struct _tuple16 * _T12 = (struct _tuple16 *)_T3;
	void * _T13;
	void * _T14;
	{ struct _tuple16 _T15 = *_T12;
	  _T14 = _T15.f0;
	  _T4 = &_T12->f1;
	  _T13 = (long *)_T4;
	}{ void * t = _T14;
	  long * b2 = (long *)_T13;
	  void * _T15 = Cyc_Absyn_compress(t);
	  int _T16;
	  _T5 = (int *)_T15;
	  _T6 = *_T5;
	  if (_T6 != 1) { goto _TL6;
	  }
	  { struct Cyc_Absyn_Evar_Absyn_Type_struct * _T17 = (struct Cyc_Absyn_Evar_Absyn_Type_struct *)_T15;
	    _T16 = _T17->f3;
	  }{ int j = _T16;
	    if (i != j) { goto _TL8;
	    }
	    _T7 = b;
	    _T8 = b2;
	    _T9 = *_T8;
	    if (_T7 == _T9) { goto _TLA;
	    }
	    _TA = b2;
	    *_TA = 1;
	    goto _TLB;
	    _TLA: _TLB: _TB = es;
	    return _TB;
	    _TL8: goto _LL8;
	  }_TL6: goto _LL8;
	  _LL8: ;
	}
      }_TC = es2;
      es2 = _TC->tl;
      goto _TL5;
      _TL4: ;
    }{ struct Cyc_List_List * _T12 = _cycalloc(sizeof(struct Cyc_List_List));
      { struct _tuple16 * _T13 = _cycalloc(sizeof(struct _tuple16));
	_T13->f0 = e;
	_T13->f1 = b;
	_TE = (struct _tuple16 *)_T13;
      }_T12->hd = _TE;
      _T12->tl = es;
      _TD = (struct Cyc_List_List *)_T12;
    }return _TD;
  }_TL0: _TF = es;
  return _TF;
  ;
}
static struct Cyc_List_List * Cyc_Tctyp_add_bound_tvar(struct Cyc_List_List * tvs,
						       struct Cyc_Absyn_Tvar * tv) {
  struct Cyc_Absyn_Tvar * _T0;
  int _T1;
  int _T2;
  struct Cyc_Warn_String_Warn_Warg_struct _T3;
  struct Cyc_Warn_Tvar_Warn_Warg_struct _T4;
  struct Cyc_Warn_String_Warn_Warg_struct _T5;
  int (* _T6)(struct _fat_ptr);
  void * (* _T7)(struct _fat_ptr);
  struct _fat_ptr _T8;
  struct Cyc_List_List * _T9;
  _T0 = tv;
  _T1 = _T0->identity;
  _T2 = - 1;
  if (_T1 != _T2) { goto _TLC;
  }
  { struct Cyc_Warn_String_Warn_Warg_struct _TA;
    _TA.tag = 0;
    _TA.f1 = _tag_fat("bound tvar id for ",sizeof(char),19U);
    _T3 = _TA;
  }{ struct Cyc_Warn_String_Warn_Warg_struct _TA = _T3;
    { struct Cyc_Warn_Tvar_Warn_Warg_struct _TB;
      _TB.tag = 7;
      _TB.f1 = tv;
      _T4 = _TB;
    }{ struct Cyc_Warn_Tvar_Warn_Warg_struct _TB = _T4;
      { struct Cyc_Warn_String_Warn_Warg_struct _TC;
	_TC.tag = 0;
	_TC.f1 = _tag_fat(" is NULL",sizeof(char),9U);
	_T5 = _TC;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _TC = _T5;
	void * _TD[3];
	_TD[0] = &_TA;
	_TD[1] = &_TB;
	_TD[2] = &_TC;
	_T7 = Cyc_Warn_impos2;
	{ int (* _TE)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T7;
	  _T6 = _TE;
	}_T8 = _tag_fat(_TD,sizeof(void *),3);
	_T6(_T8);
      }
    }
  }goto _TLD;
  _TLC: _TLD: { struct Cyc_List_List * _TA = _cycalloc(sizeof(struct Cyc_List_List));
    _TA->hd = tv;
    _TA->tl = tvs;
    _T9 = (struct Cyc_List_List *)_TA;
  }return _T9;
}
static struct Cyc_List_List * Cyc_Tctyp_remove_bound_tvars(struct Cyc_List_List * tvs,
							   struct Cyc_List_List * btvs,
							   struct Cyc_Absyn_Tvar * (* get)(void *)) {
  struct Cyc_List_List * _T0;
  void * _T1;
  struct Cyc_Absyn_Tvar * _T2;
  int _T3;
  struct Cyc_List_List * _T4;
  void * _T5;
  struct Cyc_Absyn_Tvar * _T6;
  int _T7;
  struct Cyc_List_List * _T8;
  struct Cyc_List_List * _T9;
  struct Cyc_List_List * _TA;
  struct Cyc_List_List * _TB;
  struct Cyc_List_List * _TC;
  struct Cyc_List_List * r = 0;
  _TL11: if (tvs != 0) { goto _TLF;
  }else { goto _TL10;
  }
  _TLF: { struct Cyc_List_List * b = btvs;
    _TL15: if (b != 0) { goto _TL13;
    }else { goto _TL14;
    }
    _TL13: _T0 = tvs;
    _T1 = _T0->hd;
    _T2 = get(_T1);
    _T3 = _T2->identity;
    _T4 = b;
    _T5 = _T4->hd;
    _T6 = (struct Cyc_Absyn_Tvar *)_T5;
    _T7 = _T6->identity;
    if (_T3 != _T7) { goto _TL16;
    }
    goto _TL14;
    _TL16: _T8 = b;
    b = _T8->tl;
    goto _TL15;
    _TL14: if (b != 0) { goto _TL18;
    }
    { struct Cyc_List_List * _TD = _cycalloc(sizeof(struct Cyc_List_List));
      _TA = tvs;
      _TD->hd = _TA->hd;
      _TD->tl = r;
      _T9 = (struct Cyc_List_List *)_TD;
    }r = _T9;
    goto _TL19;
    _TL18: _TL19: ;
  }_TB = tvs;
  tvs = _TB->tl;
  goto _TL11;
  _TL10: r = Cyc_List_imp_rev(r);
  _TC = r;
  return _TC;
}
static void Cyc_Tctyp_check_free_evars(struct Cyc_List_List * free_evars,
				       void * in_typ,unsigned int loc) {
  struct Cyc_List_List * _T0;
  void * _T1;
  struct _tuple16 * _T2;
  struct _tuple16 _T3;
  int * _T4;
  int _T5;
  struct Cyc_Absyn_Kind * _T6;
  enum Cyc_Absyn_KindQual _T7;
  int _T8;
  struct Cyc_Warn_String_Warn_Warg_struct _T9;
  struct Cyc_Warn_Typ_Warn_Warg_struct _TA;
  struct Cyc_Warn_String_Warn_Warg_struct _TB;
  struct Cyc_Warn_Typ_Warn_Warg_struct _TC;
  unsigned int _TD;
  struct _fat_ptr _TE;
  long _TF;
  struct Cyc_Warn_String_Warn_Warg_struct _T10;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T11;
  struct Cyc_Warn_String_Warn_Warg_struct _T12;
  struct Cyc_Warn_String_Warn_Warg_struct _T13;
  struct Cyc_Warn_String_Warn_Warg_struct _T14;
  int (* _T15)(struct _fat_ptr);
  void * (* _T16)(struct _fat_ptr);
  struct _fat_ptr _T17;
  struct Cyc_List_List * _T18;
  _TL1D: if (free_evars != 0) { goto _TL1B;
  }else { goto _TL1C;
  }
  _TL1B: _T0 = free_evars;
  _T1 = _T0->hd;
  _T2 = (struct _tuple16 *)_T1;
  _T3 = *_T2;
  { void * e = _T3.f0;
    { void * _T19 = Cyc_Absyn_compress(e);
      _T4 = (int *)_T19;
      _T5 = *_T4;
      if (_T5 != 1) { goto _TL1E;
      }
      goto _LL0;
      _TL1E: goto _TL1A;
      _LL0: ;
    }{ void * t;
      struct _fat_ptr s;
      { struct Cyc_Absyn_Kind * _T19 = Cyc_Tcutil_type_kind(e);
	_T6 = (struct Cyc_Absyn_Kind *)_T19;
	_T7 = _T6->kind;
	_T8 = (int)_T7;
	switch (_T8) {
	case Cyc_Absyn_EffKind: 
	  t = Cyc_Absyn_heap_rgn_type;
	  s = _tag_fat("{`H}",sizeof(char),5U);
	  goto _LL5;
	case Cyc_Absyn_BoolKind: 
	  t = Cyc_Absyn_false_type;
	  s = _tag_fat("@false",sizeof(char),7U);
	  goto _LL5;
	case Cyc_Absyn_PtrBndKind: 
	  t = Cyc_Absyn_bounds_one();
	  s = _tag_fat("bounds_one",sizeof(char),11U);
	  goto _LL5;
	case Cyc_Absyn_AqualKind: 
	  t = Cyc_Absyn_al_qual_type;
	  s = _tag_fat("aliasable",sizeof(char),10U);
	  goto _LL5;
	default: 
	  { struct Cyc_Warn_String_Warn_Warg_struct _T1A;
	    _T1A.tag = 0;
	    _T1A.f1 = _tag_fat("hidden type variable ",sizeof(char),22U);
	    _T9 = _T1A;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T1A = _T9;
	    { struct Cyc_Warn_Typ_Warn_Warg_struct _T1B;
	      _T1B.tag = 2;
	      _T1B.f1 = e;
	      _TA = _T1B;
	    }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T1B = _TA;
	      { struct Cyc_Warn_String_Warn_Warg_struct _T1C;
		_T1C.tag = 0;
		_T1C.f1 = _tag_fat(" isn't abstracted in type ",sizeof(char),
				   27U);
		_TB = _T1C;
	      }{ struct Cyc_Warn_String_Warn_Warg_struct _T1C = _TB;
		{ struct Cyc_Warn_Typ_Warn_Warg_struct _T1D;
		  _T1D.tag = 2;
		  _T1D.f1 = in_typ;
		  _TC = _T1D;
		}{ struct Cyc_Warn_Typ_Warn_Warg_struct _T1D = _TC;
		  void * _T1E[4];
		  _T1E[0] = &_T1A;
		  _T1E[1] = &_T1B;
		  _T1E[2] = &_T1C;
		  _T1E[3] = &_T1D;
		  _TD = loc;
		  _TE = _tag_fat(_T1E,sizeof(void *),4);
		  Cyc_Warn_err2(_TD,_TE);
		}
	      }
	    }
	  }return;
	}
	_LL5: ;
      }_TF = Cyc_Unify_unify(e,t);
      if (_TF) { goto _TL21;
      }else { goto _TL23;
      }
      _TL23: { struct Cyc_Warn_String_Warn_Warg_struct _T19;
	_T19.tag = 0;
	_T19.f1 = _tag_fat("can't unify evar ",sizeof(char),18U);
	_T10 = _T19;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T19 = _T10;
	{ struct Cyc_Warn_Typ_Warn_Warg_struct _T1A;
	  _T1A.tag = 2;
	  _T1A.f1 = e;
	  _T11 = _T1A;
	}{ struct Cyc_Warn_Typ_Warn_Warg_struct _T1A = _T11;
	  { struct Cyc_Warn_String_Warn_Warg_struct _T1B;
	    _T1B.tag = 0;
	    _T1B.f1 = _tag_fat(" with ",sizeof(char),7U);
	    _T12 = _T1B;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T1B = _T12;
	    { struct Cyc_Warn_String_Warn_Warg_struct _T1C;
	      _T1C.tag = 0;
	      _T1C.f1 = s;
	      _T13 = _T1C;
	    }{ struct Cyc_Warn_String_Warn_Warg_struct _T1C = _T13;
	      { struct Cyc_Warn_String_Warn_Warg_struct _T1D;
		_T1D.tag = 0;
		_T1D.f1 = _tag_fat("!",sizeof(char),2U);
		_T14 = _T1D;
	      }{ struct Cyc_Warn_String_Warn_Warg_struct _T1D = _T14;
		void * _T1E[5];
		_T1E[0] = &_T19;
		_T1E[1] = &_T1A;
		_T1E[2] = &_T1B;
		_T1E[3] = &_T1C;
		_T1E[4] = &_T1D;
		_T16 = Cyc_Warn_impos2;
		{ int (* _T1F)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T16;
		  _T15 = _T1F;
		}_T17 = _tag_fat(_T1E,sizeof(void *),5);
		_T15(_T17);
	      }
	    }
	  }
	}
      }goto _TL22;
      _TL21: _TL22: ;
    }
  }_TL1A: _T18 = free_evars;
  free_evars = _T18->tl;
  goto _TL1D;
  _TL1C: ;
}
static struct Cyc_List_List * Cyc_Tctyp_add_free_tvar(unsigned int loc,struct Cyc_List_List * tvs,
						      struct Cyc_Absyn_Tvar * tv,
						      long allow_aqual_bounds) {
  struct Cyc_List_List * _T0;
  void * _T1;
  struct Cyc_Absyn_Tvar * _T2;
  struct _fat_ptr * _T3;
  struct Cyc_Absyn_Tvar * _T4;
  struct _fat_ptr * _T5;
  int _T6;
  struct Cyc_List_List * _T7;
  void * _T8;
  struct Cyc_Absyn_Tvar * _T9;
  struct Cyc_Absyn_Tvar * _TA;
  long _TB;
  struct Cyc_Warn_String_Warn_Warg_struct _TC;
  struct Cyc_Warn_Tvar_Warn_Warg_struct _TD;
  struct Cyc_Warn_String_Warn_Warg_struct _TE;
  struct Cyc_Warn_KindBound_Warn_Warg_struct _TF;
  struct Cyc_Warn_String_Warn_Warg_struct _T10;
  struct Cyc_Warn_KindBound_Warn_Warg_struct _T11;
  unsigned int _T12;
  struct _fat_ptr _T13;
  struct Cyc_Absyn_Tvar * _T14;
  void * _T15;
  long _T16;
  struct Cyc_Warn_String_Warn_Warg_struct _T17;
  struct Cyc_Warn_Tvar_Warn_Warg_struct _T18;
  struct Cyc_Warn_String_Warn_Warg_struct _T19;
  unsigned int _T1A;
  struct _fat_ptr _T1B;
  struct Cyc_List_List * _T1C;
  void * _T1D;
  struct Cyc_Absyn_Tvar * _T1E;
  void * _T1F;
  struct Cyc_List_List * _T20;
  void * _T21;
  struct Cyc_Absyn_Tvar * _T22;
  struct Cyc_Absyn_Tvar * _T23;
  struct Cyc_Absyn_Tvar * _T24;
  void * _T25;
  struct Cyc_Absyn_Tvar * _T26;
  void * _T27;
  struct Cyc_List_List * _T28;
  void * _T29;
  struct Cyc_Absyn_Tvar * _T2A;
  void * _T2B;
  int _T2C;
  struct Cyc_Warn_String_Warn_Warg_struct _T2D;
  struct Cyc_Warn_Tvar_Warn_Warg_struct _T2E;
  struct Cyc_Warn_String_Warn_Warg_struct _T2F;
  struct Cyc_Warn_TypOpt_Warn_Warg_struct _T30;
  struct Cyc_Absyn_Tvar * _T31;
  struct Cyc_Warn_String_Warn_Warg_struct _T32;
  struct Cyc_Warn_TypOpt_Warn_Warg_struct _T33;
  struct Cyc_List_List * _T34;
  void * _T35;
  struct Cyc_Absyn_Tvar * _T36;
  unsigned int _T37;
  struct _fat_ptr _T38;
  struct Cyc_Absyn_Tvar * _T39;
  int _T3A;
  int _T3B;
  struct Cyc_Absyn_Tvar * _T3C;
  struct Cyc_List_List * _T3D;
  void * _T3E;
  struct Cyc_Absyn_Tvar * _T3F;
  struct Cyc_Absyn_Tvar * _T40;
  int _T41;
  struct Cyc_List_List * _T42;
  void * _T43;
  struct Cyc_Absyn_Tvar * _T44;
  int _T45;
  struct Cyc_Warn_String_Warn_Warg_struct _T46;
  int (* _T47)(struct _fat_ptr);
  void * (* _T48)(struct _fat_ptr);
  struct _fat_ptr _T49;
  struct Cyc_List_List * _T4A;
  struct Cyc_List_List * _T4B;
  struct Cyc_Absyn_Tvar * _T4C;
  struct Cyc_List_List * _T4D;
  { struct Cyc_List_List * tvs2 = tvs;
    _TL27: if (tvs2 != 0) { goto _TL25;
    }else { goto _TL26;
    }
    _TL25: _T0 = tvs2;
    _T1 = _T0->hd;
    _T2 = (struct Cyc_Absyn_Tvar *)_T1;
    _T3 = _T2->name;
    _T4 = tv;
    _T5 = _T4->name;
    _T6 = Cyc_strptrcmp(_T3,_T5);
    if (_T6 != 0) { goto _TL28;
    }
    _T7 = tvs2;
    _T8 = _T7->hd;
    _T9 = (struct Cyc_Absyn_Tvar *)_T8;
    { void * k1 = _T9->kind;
      _TA = tv;
      { void * k2 = _TA->kind;
	_TB = Cyc_Kinds_constrain_kinds(k1,k2);
	if (_TB) { goto _TL2A;
	}else { goto _TL2C;
	}
	_TL2C: { struct Cyc_Warn_String_Warn_Warg_struct _T4E;
	  _T4E.tag = 0;
	  _T4E.f1 = _tag_fat("type variable ",sizeof(char),15U);
	  _TC = _T4E;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T4E = _TC;
	  { struct Cyc_Warn_Tvar_Warn_Warg_struct _T4F;
	    _T4F.tag = 7;
	    _T4F.f1 = tv;
	    _TD = _T4F;
	  }{ struct Cyc_Warn_Tvar_Warn_Warg_struct _T4F = _TD;
	    { struct Cyc_Warn_String_Warn_Warg_struct _T50;
	      _T50.tag = 0;
	      _T50.f1 = _tag_fat(" used with inconsistent kinds ",sizeof(char),
				 31U);
	      _TE = _T50;
	    }{ struct Cyc_Warn_String_Warn_Warg_struct _T50 = _TE;
	      { struct Cyc_Warn_KindBound_Warn_Warg_struct _T51;
		_T51.tag = 8;
		_T51.f1 = k1;
		_TF = _T51;
	      }{ struct Cyc_Warn_KindBound_Warn_Warg_struct _T51 = _TF;
		{ struct Cyc_Warn_String_Warn_Warg_struct _T52;
		  _T52.tag = 0;
		  _T52.f1 = _tag_fat(" and ",sizeof(char),6U);
		  _T10 = _T52;
		}{ struct Cyc_Warn_String_Warn_Warg_struct _T52 = _T10;
		  { struct Cyc_Warn_KindBound_Warn_Warg_struct _T53;
		    _T53.tag = 8;
		    _T53.f1 = k2;
		    _T11 = _T53;
		  }{ struct Cyc_Warn_KindBound_Warn_Warg_struct _T53 = _T11;
		    void * _T54[6];
		    _T54[0] = &_T4E;
		    _T54[1] = &_T4F;
		    _T54[2] = &_T50;
		    _T54[3] = &_T51;
		    _T54[4] = &_T52;
		    _T54[5] = &_T53;
		    _T12 = loc;
		    _T13 = _tag_fat(_T54,sizeof(void *),6);
		    Cyc_Warn_err2(_T12,_T13);
		  }
		}
	      }
	    }
	  }
	}goto _TL2B;
	_TL2A: _TL2B: _T14 = tv;
	_T15 = _T14->aquals_bound;
	if (_T15 == 0) { goto _TL2D;
	}
	_T16 = allow_aqual_bounds;
	if (_T16) { goto _TL2D;
	}else { goto _TL2F;
	}
	_TL2F: { struct Cyc_Warn_String_Warn_Warg_struct _T4E;
	  _T4E.tag = 0;
	  _T4E.f1 = _tag_fat("alias bound appears on type variable ",sizeof(char),
			     38U);
	  _T17 = _T4E;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T4E = _T17;
	  { struct Cyc_Warn_Tvar_Warn_Warg_struct _T4F;
	    _T4F.tag = 7;
	    _T4F.f1 = tv;
	    _T18 = _T4F;
	  }{ struct Cyc_Warn_Tvar_Warn_Warg_struct _T4F = _T18;
	    { struct Cyc_Warn_String_Warn_Warg_struct _T50;
	      _T50.tag = 0;
	      _T50.f1 = _tag_fat(" which is not in a function declaration or aggregate field",
				 sizeof(char),59U);
	      _T19 = _T50;
	    }{ struct Cyc_Warn_String_Warn_Warg_struct _T50 = _T19;
	      void * _T51[3];
	      _T51[0] = &_T4E;
	      _T51[1] = &_T4F;
	      _T51[2] = &_T50;
	      _T1A = loc;
	      _T1B = _tag_fat(_T51,sizeof(void *),3);
	      Cyc_Warn_err2(_T1A,_T1B);
	    }
	  }
	}goto _TL2E;
	_TL2D: _TL2E: _T1C = tvs2;
	_T1D = _T1C->hd;
	_T1E = (struct Cyc_Absyn_Tvar *)_T1D;
	_T1F = _T1E->aquals_bound;
	if (_T1F != 0) { goto _TL30;
	}
	_T20 = tvs2;
	_T21 = _T20->hd;
	_T22 = (struct Cyc_Absyn_Tvar *)_T21;
	_T23 = tv;
	_T22->aquals_bound = _T23->aquals_bound;
	goto _TL31;
	_TL30: _T24 = tv;
	_T25 = _T24->aquals_bound;
	if (_T25 == 0) { goto _TL32;
	}
	_T26 = tv;
	_T27 = _T26->aquals_bound;
	_T28 = tvs2;
	_T29 = _T28->hd;
	_T2A = (struct Cyc_Absyn_Tvar *)_T29;
	_T2B = _T2A->aquals_bound;
	_T2C = Cyc_Tcutil_typecmp(_T27,_T2B);
	if (! _T2C) { goto _TL32;
	}
	{ struct Cyc_Warn_String_Warn_Warg_struct _T4E;
	  _T4E.tag = 0;
	  _T4E.f1 = _tag_fat("type variable ",sizeof(char),15U);
	  _T2D = _T4E;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T4E = _T2D;
	  { struct Cyc_Warn_Tvar_Warn_Warg_struct _T4F;
	    _T4F.tag = 7;
	    _T4F.f1 = tv;
	    _T2E = _T4F;
	  }{ struct Cyc_Warn_Tvar_Warn_Warg_struct _T4F = _T2E;
	    { struct Cyc_Warn_String_Warn_Warg_struct _T50;
	      _T50.tag = 0;
	      _T50.f1 = _tag_fat(" used with inconsistent alias qualifier bounds ",
				 sizeof(char),48U);
	      _T2F = _T50;
	    }{ struct Cyc_Warn_String_Warn_Warg_struct _T50 = _T2F;
	      { struct Cyc_Warn_TypOpt_Warn_Warg_struct _T51;
		_T51.tag = 3;
		_T31 = tv;
		_T51.f1 = _T31->aquals_bound;
		_T30 = _T51;
	      }{ struct Cyc_Warn_TypOpt_Warn_Warg_struct _T51 = _T30;
		{ struct Cyc_Warn_String_Warn_Warg_struct _T52;
		  _T52.tag = 0;
		  _T52.f1 = _tag_fat(" and ",sizeof(char),6U);
		  _T32 = _T52;
		}{ struct Cyc_Warn_String_Warn_Warg_struct _T52 = _T32;
		  { struct Cyc_Warn_TypOpt_Warn_Warg_struct _T53;
		    _T53.tag = 3;
		    _T34 = tvs2;
		    _T35 = _T34->hd;
		    _T36 = (struct Cyc_Absyn_Tvar *)_T35;
		    _T53.f1 = _T36->aquals_bound;
		    _T33 = _T53;
		  }{ struct Cyc_Warn_TypOpt_Warn_Warg_struct _T53 = _T33;
		    void * _T54[6];
		    _T54[0] = &_T4E;
		    _T54[1] = &_T4F;
		    _T54[2] = &_T50;
		    _T54[3] = &_T51;
		    _T54[4] = &_T52;
		    _T54[5] = &_T53;
		    _T37 = loc;
		    _T38 = _tag_fat(_T54,sizeof(void *),6);
		    Cyc_Warn_err2(_T37,_T38);
		  }
		}
	      }
	    }
	  }
	}goto _TL33;
	_TL32: _TL33: _TL31: _T39 = tv;
	_T3A = _T39->identity;
	_T3B = - 1;
	if (_T3A != _T3B) { goto _TL34;
	}
	_T3C = tv;
	_T3D = tvs2;
	_T3E = _T3D->hd;
	_T3F = (struct Cyc_Absyn_Tvar *)_T3E;
	_T3C->identity = _T3F->identity;
	goto _TL35;
	_TL34: _T40 = tv;
	_T41 = _T40->identity;
	_T42 = tvs2;
	_T43 = _T42->hd;
	_T44 = (struct Cyc_Absyn_Tvar *)_T43;
	_T45 = _T44->identity;
	if (_T41 == _T45) { goto _TL36;
	}
	{ struct Cyc_Warn_String_Warn_Warg_struct _T4E;
	  _T4E.tag = 0;
	  _T4E.f1 = _tag_fat("same type variable has different identity!",
			     sizeof(char),43U);
	  _T46 = _T4E;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T4E = _T46;
	  void * _T4F[1];
	  _T4F[0] = &_T4E;
	  _T48 = Cyc_Warn_impos2;
	  { int (* _T50)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T48;
	    _T47 = _T50;
	  }_T49 = _tag_fat(_T4F,sizeof(void *),1);
	  _T47(_T49);
	}goto _TL37;
	_TL36: _TL37: _TL35: _T4A = tvs;
	return _T4A;
      }
    }_TL28: _T4B = tvs2;
    tvs2 = _T4B->tl;
    goto _TL27;
    _TL26: ;
  }_T4C = tv;
  _T4C->identity = Cyc_Tcutil_new_tvar_id();
  { struct Cyc_List_List * _T4E = _cycalloc(sizeof(struct Cyc_List_List));
    _T4E->hd = tv;
    _T4E->tl = tvs;
    _T4D = (struct Cyc_List_List *)_T4E;
  }return _T4D;
}
static long Cyc_Tctyp_cmp_fqv(struct _tuple16 * te1,struct _tuple16 * te2) {
  struct _tuple16 * _T0;
  struct _tuple16 _T1;
  struct _tuple16 * _T2;
  struct _tuple16 _T3;
  int _T4;
  int _T5;
  _T0 = te1;
  _T1 = *_T0;
  { void * t1 = _T1.f0;
    _T2 = te2;
    _T3 = *_T2;
    { void * t2 = _T3.f0;
      _T4 = Cyc_Tcutil_typecmp(t1,t2);
      _T5 = _T4 == 0;
      return _T5;
    }
  }
}
static struct Cyc_List_List * Cyc_Tctyp_fast_add_free_tvar(struct Cyc_List_List * tvs,
							   struct Cyc_Absyn_Tvar * tv) {
  struct Cyc_Absyn_Tvar * _T0;
  int _T1;
  int _T2;
  struct Cyc_Warn_String_Warn_Warg_struct _T3;
  int (* _T4)(struct _fat_ptr);
  void * (* _T5)(struct _fat_ptr);
  struct _fat_ptr _T6;
  struct Cyc_List_List * _T7;
  void * _T8;
  struct Cyc_Absyn_Tvar * _T9;
  int _TA;
  int _TB;
  struct Cyc_Warn_String_Warn_Warg_struct _TC;
  int (* _TD)(struct _fat_ptr);
  void * (* _TE)(struct _fat_ptr);
  struct _fat_ptr _TF;
  struct Cyc_Absyn_Tvar * _T10;
  int _T11;
  struct Cyc_Absyn_Tvar * _T12;
  int _T13;
  struct Cyc_List_List * _T14;
  struct Cyc_List_List * _T15;
  struct Cyc_List_List * _T16;
  _T0 = tv;
  _T1 = _T0->identity;
  _T2 = - 1;
  if (_T1 != _T2) { goto _TL38;
  }
  { struct Cyc_Warn_String_Warn_Warg_struct _T17;
    _T17.tag = 0;
    _T17.f1 = _tag_fat("fast_add_free_tvar: bad identity in tv",sizeof(char),
		       39U);
    _T3 = _T17;
  }{ struct Cyc_Warn_String_Warn_Warg_struct _T17 = _T3;
    void * _T18[1];
    _T18[0] = &_T17;
    _T5 = Cyc_Warn_impos2;
    { int (* _T19)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T5;
      _T4 = _T19;
    }_T6 = _tag_fat(_T18,sizeof(void *),1);
    _T4(_T6);
  }goto _TL39;
  _TL38: _TL39: { struct Cyc_List_List * tvs2 = tvs;
    _TL3D: if (tvs2 != 0) { goto _TL3B;
    }else { goto _TL3C;
    }
    _TL3B: _T7 = tvs2;
    _T8 = _T7->hd;
    { struct Cyc_Absyn_Tvar * tv2 = (struct Cyc_Absyn_Tvar *)_T8;
      _T9 = tv2;
      _TA = _T9->identity;
      _TB = - 1;
      if (_TA != _TB) { goto _TL3E;
      }
      { struct Cyc_Warn_String_Warn_Warg_struct _T17;
	_T17.tag = 0;
	_T17.f1 = _tag_fat("fast_add_free_tvar: bad identity in tvs2",sizeof(char),
			   41U);
	_TC = _T17;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T17 = _TC;
	void * _T18[1];
	_T18[0] = &_T17;
	_TE = Cyc_Warn_impos2;
	{ int (* _T19)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_TE;
	  _TD = _T19;
	}_TF = _tag_fat(_T18,sizeof(void *),1);
	_TD(_TF);
      }goto _TL3F;
      _TL3E: _TL3F: _T10 = tv2;
      _T11 = _T10->identity;
      _T12 = tv;
      _T13 = _T12->identity;
      if (_T11 != _T13) { goto _TL40;
      }
      _T14 = tvs;
      return _T14;
      _TL40: ;
    }_T15 = tvs2;
    tvs2 = _T15->tl;
    goto _TL3D;
    _TL3C: ;
  }{ struct Cyc_List_List * _T17 = _cycalloc(sizeof(struct Cyc_List_List));
    _T17->hd = tv;
    _T17->tl = tvs;
    _T16 = (struct Cyc_List_List *)_T17;
  }return _T16;
}
static struct Cyc_List_List * Cyc_Tctyp_fast_add_free_tvar_bool(struct Cyc_List_List * tvs,
								struct Cyc_Absyn_Tvar * tv,
								long b) {
  struct Cyc_Absyn_Tvar * _T0;
  int _T1;
  int _T2;
  struct Cyc_Warn_String_Warn_Warg_struct _T3;
  int (* _T4)(struct _fat_ptr);
  void * (* _T5)(struct _fat_ptr);
  struct _fat_ptr _T6;
  struct Cyc_List_List * _T7;
  void * _T8;
  long * _T9;
  struct Cyc_Absyn_Tvar * _TA;
  int _TB;
  int _TC;
  struct Cyc_Warn_String_Warn_Warg_struct _TD;
  int (* _TE)(struct _fat_ptr);
  void * (* _TF)(struct _fat_ptr);
  struct _fat_ptr _T10;
  struct Cyc_Absyn_Tvar * _T11;
  int _T12;
  struct Cyc_Absyn_Tvar * _T13;
  int _T14;
  long * _T15;
  int _T16;
  long * _T17;
  long _T18;
  struct Cyc_List_List * _T19;
  struct Cyc_List_List * _T1A;
  struct Cyc_List_List * _T1B;
  struct _tuple15 * _T1C;
  _T0 = tv;
  _T1 = _T0->identity;
  _T2 = - 1;
  if (_T1 != _T2) { goto _TL42;
  }
  { struct Cyc_Warn_String_Warn_Warg_struct _T1D;
    _T1D.tag = 0;
    _T1D.f1 = _tag_fat("fast_add_free_tvar_bool: bad identity in tv",sizeof(char),
		       44U);
    _T3 = _T1D;
  }{ struct Cyc_Warn_String_Warn_Warg_struct _T1D = _T3;
    void * _T1E[1];
    _T1E[0] = &_T1D;
    _T5 = Cyc_Warn_impos2;
    { int (* _T1F)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T5;
      _T4 = _T1F;
    }_T6 = _tag_fat(_T1E,sizeof(void *),1);
    _T4(_T6);
  }goto _TL43;
  _TL42: _TL43: { struct Cyc_List_List * tvs2 = tvs;
    _TL47: if (tvs2 != 0) { goto _TL45;
    }else { goto _TL46;
    }
    _TL45: _T7 = tvs2;
    _T8 = _T7->hd;
    { struct _tuple15 * _T1D = (struct _tuple15 *)_T8;
      void * _T1E;
      struct Cyc_Absyn_Tvar * _T1F;
      { struct _tuple15 _T20 = *_T1D;
	_T1F = _T20.f0;
	_T9 = &_T1D->f1;
	_T1E = (long *)_T9;
      }{ struct Cyc_Absyn_Tvar * tv2 = _T1F;
	long * b2 = (long *)_T1E;
	_TA = tv2;
	_TB = _TA->identity;
	_TC = - 1;
	if (_TB != _TC) { goto _TL48;
	}
	{ struct Cyc_Warn_String_Warn_Warg_struct _T20;
	  _T20.tag = 0;
	  _T20.f1 = _tag_fat("fast_add_free_tvar_bool: bad identity in tvs2",
			     sizeof(char),46U);
	  _TD = _T20;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T20 = _TD;
	  void * _T21[1];
	  _T21[0] = &_T20;
	  _TF = Cyc_Warn_impos2;
	  { int (* _T22)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_TF;
	    _TE = _T22;
	  }_T10 = _tag_fat(_T21,sizeof(void *),1);
	  _TE(_T10);
	}goto _TL49;
	_TL48: _TL49: _T11 = tv2;
	_T12 = _T11->identity;
	_T13 = tv;
	_T14 = _T13->identity;
	if (_T12 != _T14) { goto _TL4A;
	}
	_T15 = b2;
	_T17 = b2;
	_T18 = *_T17;
	if (! _T18) { goto _TL4C;
	}
	_T16 = 1;
	goto _TL4D;
	_TL4C: _T16 = b;
	_TL4D: *_T15 = _T16;
	_T19 = tvs;
	return _T19;
	_TL4A: ;
      }
    }_T1A = tvs2;
    tvs2 = _T1A->tl;
    goto _TL47;
    _TL46: ;
  }{ struct Cyc_List_List * _T1D = _cycalloc(sizeof(struct Cyc_List_List));
    { struct _tuple15 * _T1E = _cycalloc(sizeof(struct _tuple15));
      _T1E->f0 = tv;
      _T1E->f1 = b;
      _T1C = (struct _tuple15 *)_T1E;
    }_T1D->hd = _T1C;
    _T1D->tl = tvs;
    _T1B = (struct Cyc_List_List *)_T1D;
  }return _T1B;
}
static long Cyc_Tctyp_check_type_visit_f1(struct Cyc_Tctyp_CVTEnv * env,struct Cyc_Absyn_Exp * e) {
  struct Cyc_Tctyp_CVTEnv * _T0;
  struct Cyc_Absyn_Exp * _T1;
  struct Cyc_Absyn_Exp * _T2;
  int * _T3;
  unsigned int _T4;
  void * _T5;
  struct Cyc_Tctyp_CVTEnv * _T6;
  struct Cyc_Tctyp_CVTEnv * _T7;
  struct Cyc_Tctyp_CVTEnv _T8;
  struct Cyc_Absyn_Kind * _T9;
  struct Cyc_Absyn_Kind * _TA;
  void * _TB;
  void * _TC;
  void * _TD;
  struct Cyc_Tctyp_CVTEnv * _TE;
  struct Cyc_Tctyp_CVTEnv * _TF;
  struct Cyc_Tctyp_CVTEnv _T10;
  struct Cyc_Absyn_Kind * _T11;
  struct Cyc_Absyn_Kind * _T12;
  void * _T13;
  void * _T14;
  struct Cyc_Tctyp_CVTEnv * _T15;
  struct Cyc_Tctyp_CVTEnv * _T16;
  struct Cyc_Tctyp_CVTEnv _T17;
  struct Cyc_Absyn_Kind * _T18;
  struct Cyc_Absyn_Kind * _T19;
  void * _T1A;
  _T0 = env;
  _T1 = e;
  _T0->loc = _T1->loc;
  _T2 = e;
  { void * _T1B = _T2->r;
    void * _T1C;
    _T3 = (int *)_T1B;
    _T4 = *_T3;
    switch (_T4) {
    case 14: 
      { struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct * _T1D = (struct Cyc_Absyn_Cast_e_Absyn_Raw_exp_struct *)_T1B;
	_T5 = _T1D->f1;
	_T1C = (void *)_T5;
      }{ void * t = _T1C;
	_T6 = env;
	_T7 = env;
	_T8 = *_T7;
	_T9 = &Cyc_Kinds_ak;
	_TA = (struct Cyc_Absyn_Kind *)_T9;
	_TB = t;
	*_T6 = Cyc_Tctyp_i_check_type(_T8,_TA,_TB,1,0);
	goto _LL0;
      }
    case 19: 
      { struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct * _T1D = (struct Cyc_Absyn_Offsetof_e_Absyn_Raw_exp_struct *)_T1B;
	_TC = _T1D->f1;
	_T1C = (void *)_TC;
      }{ void * t = _T1C;
	_T1C = t;
	goto _LL6;
      }
    case 17: 
      { struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct * _T1D = (struct Cyc_Absyn_Sizeoftype_e_Absyn_Raw_exp_struct *)_T1B;
	_TD = _T1D->f1;
	_T1C = (void *)_TD;
      }_LL6: { void * t = _T1C;
	_TE = env;
	_TF = env;
	_T10 = *_TF;
	_T11 = &Cyc_Kinds_ak;
	_T12 = (struct Cyc_Absyn_Kind *)_T11;
	_T13 = t;
	*_TE = Cyc_Tctyp_i_check_type(_T10,_T12,_T13,1,0);
	goto _LL0;
      }
    case 38: 
      { struct Cyc_Absyn_Valueof_e_Absyn_Raw_exp_struct * _T1D = (struct Cyc_Absyn_Valueof_e_Absyn_Raw_exp_struct *)_T1B;
	_T14 = _T1D->f1;
	_T1C = (void *)_T14;
      }{ void * t = _T1C;
	_T15 = env;
	_T16 = env;
	_T17 = *_T16;
	_T18 = &Cyc_Kinds_ik;
	_T19 = (struct Cyc_Absyn_Kind *)_T18;
	_T1A = t;
	*_T15 = Cyc_Tctyp_i_check_type(_T17,_T19,_T1A,1,0);
	goto _LL0;
      }
    default: 
      goto _LL0;
    }
    _LL0: ;
  }return 1;
}
static long Cyc_Tctyp_check_type_visit_f2(struct Cyc_Tctyp_CVTEnv * env,struct Cyc_Absyn_Stmt * s) {
  int (* _T0)(unsigned int,struct _fat_ptr,struct _fat_ptr);
  void * (* _T1)(unsigned int,struct _fat_ptr,struct _fat_ptr);
  struct Cyc_Absyn_Stmt * _T2;
  unsigned int _T3;
  struct _fat_ptr _T4;
  struct _fat_ptr _T5;
  _T1 = Cyc_Warn_impos_loc;
  { int (* _T6)(unsigned int,struct _fat_ptr,struct _fat_ptr) = (int (*)(unsigned int,
									 struct _fat_ptr,
									 struct _fat_ptr))_T1;
    _T0 = _T6;
  }_T2 = s;
  _T3 = _T2->loc;
  _T4 = _tag_fat("statement inside expression inside type",sizeof(char),40U);
  _T5 = _tag_fat(0U,sizeof(void *),0);
  _T0(_T3,_T4,_T5);
}
static struct Cyc_Tctyp_CVTEnv Cyc_Tctyp_i_check_type_level_exp(struct Cyc_Absyn_Exp * e,
								struct Cyc_Tctyp_CVTEnv env) {
  void (* _T0)(long (*)(struct Cyc_Tctyp_CVTEnv *,struct Cyc_Absyn_Exp *),
	       long (*)(struct Cyc_Tctyp_CVTEnv *,struct Cyc_Absyn_Stmt *),
	       struct Cyc_Tctyp_CVTEnv *,struct Cyc_Absyn_Exp *);
  void (* _T1)(long (*)(void *,struct Cyc_Absyn_Exp *),long (*)(void *,struct Cyc_Absyn_Stmt *),
	       void *,struct Cyc_Absyn_Exp *);
  struct Cyc_Tctyp_CVTEnv * _T2;
  struct Cyc_Tctyp_CVTEnv * _T3;
  struct Cyc_Absyn_Exp * _T4;
  struct Cyc_Tctyp_CVTEnv _T5;
  _T1 = Cyc_Absyn_visit_exp;
  { void (* _T6)(long (*)(struct Cyc_Tctyp_CVTEnv *,struct Cyc_Absyn_Exp *),
		 long (*)(struct Cyc_Tctyp_CVTEnv *,struct Cyc_Absyn_Stmt *),
		 struct Cyc_Tctyp_CVTEnv *,struct Cyc_Absyn_Exp *) = (void (*)(long (*)(struct Cyc_Tctyp_CVTEnv *,
											struct Cyc_Absyn_Exp *),
									       long (*)(struct Cyc_Tctyp_CVTEnv *,
											struct Cyc_Absyn_Stmt *),
									       struct Cyc_Tctyp_CVTEnv *,
									       struct Cyc_Absyn_Exp *))_T1;
    _T0 = _T6;
  }_T2 = &env;
  _T3 = (struct Cyc_Tctyp_CVTEnv *)_T2;
  _T4 = e;
  _T0(Cyc_Tctyp_check_type_visit_f1,Cyc_Tctyp_check_type_visit_f2,_T3,_T4);
  _T5 = env;
  return _T5;
}
static struct Cyc_Tctyp_CVTEnv Cyc_Tctyp_check_type_inst(struct Cyc_Tctyp_CVTEnv env,
							 struct Cyc_List_List * * targsp,
							 struct Cyc_List_List * tvs,
							 struct Cyc_Absyn_Kind * expected_kind,
							 long allow_abs_aggr,
							 struct _tuple1 * typname,
							 struct Cyc_Absyn_Typedefdecl * td) {
  struct Cyc_List_List * * _T0;
  struct Cyc_Tctyp_CVTEnv _T1;
  struct Cyc_Tctyp_CVTEnv _T2;
  struct Cyc_List_List * _T3;
  struct Cyc_List_List * _T4;
  void * _T5;
  struct _tuple0 _T6;
  struct Cyc_Absyn_Tvar * _T7;
  void * _T8;
  void * _T9;
  int * _TA;
  unsigned int _TB;
  void * _TC;
  int * _TD;
  int _TE;
  void * _TF;
  struct Cyc_Tctyp_CVTEnv _T10;
  unsigned int _T11;
  struct Cyc_Tctyp_CVTEnv _T12;
  struct Cyc_List_List * _T13;
  struct Cyc_Absyn_Tvar * _T14;
  struct Cyc_Tctyp_CVTEnv _T15;
  long _T16;
  struct Cyc_Tctyp_CVTEnv _T17;
  struct Cyc_List_List * _T18;
  struct Cyc_Absyn_Tvar * _T19;
  void * _T1A;
  struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct * _T1B;
  struct Cyc_Absyn_Kind * _T1C;
  struct Cyc_Absyn_Kind * _T1D;
  enum Cyc_Absyn_KindQual _T1E;
  void * _T1F;
  int * _T20;
  int _T21;
  void * _T22;
  struct Cyc_List_List * _T23;
  void * _T24;
  struct Cyc_Tctyp_CVTEnv _T25;
  struct Cyc_Absyn_Kind * _T26;
  struct Cyc_Absyn_Kind * _T27;
  struct Cyc_List_List * _T28;
  void * _T29;
  long _T2A;
  struct Cyc_Absyn_Tvar * _T2B;
  struct Cyc_Absyn_Kind * _T2C;
  struct Cyc_Absyn_Kind * _T2D;
  struct Cyc_Tctyp_CVTEnv _T2E;
  unsigned int _T2F;
  void * _T30;
  struct Cyc_List_List * _T31;
  struct Cyc_List_List * _T32;
  struct Cyc_Warn_String_Warn_Warg_struct _T33;
  struct Cyc_Warn_Qvar_Warn_Warg_struct _T34;
  struct Cyc_Tctyp_CVTEnv _T35;
  unsigned int _T36;
  struct _fat_ptr _T37;
  struct Cyc_List_List * _T38;
  struct Cyc_List_List * _T39;
  void * _T3A;
  struct Cyc_Absyn_Tvar * _T3B;
  struct Cyc_Absyn_Kind * _T3C;
  struct Cyc_Absyn_Kind * _T3D;
  struct Cyc_List_List * _T3E;
  struct Cyc_List_List * * _T3F;
  struct Cyc_List_List * * _T40;
  struct Cyc_List_List * _T41;
  struct Cyc_List_List * _T42;
  struct Cyc_Tctyp_CVTEnv _T43;
  _T0 = targsp;
  { struct Cyc_List_List * targs = *_T0;
    _T1 = env;
    { long old_inst_evar = _T1.inst_type_evar;
      _T2 = env;
      env.inst_type_evar = _T2.generalize_evars;
      _TL52: if (targs != 0) { goto _TL53;
      }else { goto _TL51;
      }
      _TL53: if (tvs != 0) { goto _TL50;
      }else { goto _TL51;
      }
      _TL50: _T3 = targs;
      { void * t = _T3->hd;
	_T4 = tvs;
	_T5 = _T4->hd;
	{ struct Cyc_Absyn_Tvar * tv = (struct Cyc_Absyn_Tvar *)_T5;
	  { struct _tuple0 _T44;
	    _T7 = tv;
	    _T8 = _T7->kind;
	    _T44.f0 = Cyc_Kinds_compress_kb(_T8);
	    _T44.f1 = t;
	    _T6 = _T44;
	  }{ struct _tuple0 _T44 = _T6;
	    struct Cyc_Absyn_Tvar * _T45;
	    _T9 = _T44.f0;
	    _TA = (int *)_T9;
	    _TB = *_TA;
	    switch (_TB) {
	    case 1: 
	      _TC = _T44.f1;
	      _TD = (int *)_TC;
	      _TE = *_TD;
	      if (_TE != 2) { goto _TL55;
	      }
	      _TF = _T44.f1;
	      { struct Cyc_Absyn_VarType_Absyn_Type_struct * _T46 = (struct Cyc_Absyn_VarType_Absyn_Type_struct *)_TF;
		_T45 = _T46->f1;
	      }{ struct Cyc_Absyn_Tvar * tv2 = _T45;
		_T10 = env;
		_T11 = _T10.loc;
		_T12 = env;
		_T13 = _T12.kind_env;
		_T14 = tv2;
		_T15 = env;
		_T16 = _T15.allow_aqual_bounds;
		env.kind_env = Cyc_Tctyp_add_free_tvar(_T11,_T13,_T14,_T16);
		_T17 = env;
		_T18 = _T17.free_vars;
		_T19 = tv2;
		env.free_vars = Cyc_Tctyp_fast_add_free_tvar_bool(_T18,_T19,
								  1);
		goto _TL4F;
	      }_TL55: goto _LL5;
	    case 0: 
	      _T1A = _T44.f0;
	      _T1B = (struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct *)_T1A;
	      _T1C = _T1B->f1;
	      _T1D = (struct Cyc_Absyn_Kind *)_T1C;
	      _T1E = _T1D->kind;
	      if (_T1E != Cyc_Absyn_AqualKind) { goto _TL57;
	      }
	      _T1F = _T44.f1;
	      _T20 = (int *)_T1F;
	      _T21 = *_T20;
	      if (_T21 != 2) { goto _TL59;
	      }
	      _T22 = _T44.f1;
	      { struct Cyc_Absyn_VarType_Absyn_Type_struct * _T46 = (struct Cyc_Absyn_VarType_Absyn_Type_struct *)_T22;
		_T45 = _T46->f1;
	      }{ struct Cyc_Absyn_Tvar * tv2 = _T45;
		_T23 = targs;
		_T24 = Cyc_Absyn_aqual_var_type(t,Cyc_Absyn_al_qual_type);
		_T23->hd = (void *)_T24;
		_T25 = env;
		_T26 = &Cyc_Kinds_aqk;
		_T27 = (struct Cyc_Absyn_Kind *)_T26;
		_T28 = targs;
		_T29 = _T28->hd;
		_T2A = allow_abs_aggr;
		env = Cyc_Tctyp_i_check_type(_T25,_T27,_T29,1,_T2A);
		goto _TL4F;
	      }_TL59: goto _LL5;
	      _TL57: goto _LL5;
	    default: 
	      _LL5: goto _LL0;
	    }
	    _LL0: ;
	  }_T2B = tv;
	  _T2C = &Cyc_Kinds_bk;
	  _T2D = (struct Cyc_Absyn_Kind *)_T2C;
	  { struct Cyc_Absyn_Kind * k = Cyc_Kinds_tvar_kind(_T2B,_T2D);
	    env = Cyc_Tctyp_i_check_type(env,k,t,1,allow_abs_aggr);
	    _T2E = env;
	    _T2F = _T2E.loc;
	    _T30 = t;
	    Cyc_Tcutil_check_no_qual(_T2F,_T30);
	  }
	}
      }_TL4F: _T31 = targs;
      targs = _T31->tl;
      _T32 = tvs;
      tvs = _T32->tl;
      goto _TL52;
      _TL51: if (targs == 0) { goto _TL5B;
      }
      { struct Cyc_Warn_String_Warn_Warg_struct _T44;
	_T44.tag = 0;
	_T44.f1 = _tag_fat("too many type arguments for ",sizeof(char),29U);
	_T33 = _T44;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T44 = _T33;
	{ struct Cyc_Warn_Qvar_Warn_Warg_struct _T45;
	  _T45.tag = 1;
	  _T45.f1 = typname;
	  _T34 = _T45;
	}{ struct Cyc_Warn_Qvar_Warn_Warg_struct _T45 = _T34;
	  void * _T46[2];
	  _T46[0] = &_T44;
	  _T46[1] = &_T45;
	  _T35 = env;
	  _T36 = _T35.loc;
	  _T37 = _tag_fat(_T46,sizeof(void *),2);
	  Cyc_Warn_err2(_T36,_T37);
	}
      }goto _TL5C;
      _TL5B: _TL5C: { struct Cyc_List_List * hidden_ts = 0;
	_TL60: if (tvs != 0) { goto _TL5E;
	}else { goto _TL5F;
	}
	_TL5E: { void * e = Cyc_Absyn_new_evar(0,0);
	  { struct Cyc_List_List * _T44 = _cycalloc(sizeof(struct Cyc_List_List));
	    _T44->hd = e;
	    _T44->tl = hidden_ts;
	    _T38 = (struct Cyc_List_List *)_T44;
	  }hidden_ts = _T38;
	  _T39 = tvs;
	  _T3A = _T39->hd;
	  _T3B = (struct Cyc_Absyn_Tvar *)_T3A;
	  _T3C = &Cyc_Kinds_bk;
	  _T3D = (struct Cyc_Absyn_Kind *)_T3C;
	  { struct Cyc_Absyn_Kind * k = Cyc_Kinds_tvar_kind(_T3B,_T3D);
	    env = Cyc_Tctyp_i_check_type(env,k,e,1,allow_abs_aggr);
	  }
	}_T3E = tvs;
	tvs = _T3E->tl;
	goto _TL60;
	_TL5F: _T3F = targsp;
	_T40 = targsp;
	_T41 = *_T40;
	_T42 = Cyc_List_imp_rev(hidden_ts);
	*_T3F = Cyc_List_imp_append(_T41,_T42);
	env.inst_type_evar = old_inst_evar;
	_T43 = env;
	return _T43;
      }
    }
  }
}
 struct _tuple17 {
  struct Cyc_Tctyp_CVTEnv f0;
  struct Cyc_AssnDef_AssnMap f1;
};
static struct _tuple17 Cyc_Tctyp_check_clause(struct Cyc_Tctyp_CVTEnv env,
					      struct _fat_ptr clause_name,
					      struct Cyc_Absyn_Exp * clause) {
  struct _tuple17 _T0;
  struct Cyc_Tctyp_CVTEnv _T1;
  struct Cyc_Tcenv_Tenv * _T2;
  struct Cyc_Absyn_Exp * _T3;
  long _T4;
  struct Cyc_Warn_String_Warn_Warg_struct _T5;
  struct Cyc_Warn_String_Warn_Warg_struct _T6;
  struct Cyc_Warn_TypOpt_Warn_Warg_struct _T7;
  struct Cyc_Absyn_Exp * _T8;
  struct Cyc_Warn_String_Warn_Warg_struct _T9;
  struct Cyc_Tctyp_CVTEnv _TA;
  unsigned int _TB;
  struct _fat_ptr _TC;
  struct _tuple17 _TD;
  if (clause != 0) { goto _TL61;
  }
  { struct _tuple17 _TE;
    _TE.f0 = env;
    _TE.f1 = Cyc_AssnDef_true_assnmap();
    _T0 = _TE;
  }return _T0;
  _TL61: _T1 = env;
  _T2 = _T1.te;
  _T3 = clause;
  Cyc_Tcexp_tcExp(_T2,0,_T3);
  _T4 = Cyc_Tcutil_is_integral(clause);
  if (_T4) { goto _TL63;
  }else { goto _TL65;
  }
  _TL65: { struct Cyc_Warn_String_Warn_Warg_struct _TE;
    _TE.tag = 0;
    _TE.f1 = clause_name;
    _T5 = _TE;
  }{ struct Cyc_Warn_String_Warn_Warg_struct _TE = _T5;
    { struct Cyc_Warn_String_Warn_Warg_struct _TF;
      _TF.tag = 0;
      _TF.f1 = _tag_fat(" clause has type ",sizeof(char),18U);
      _T6 = _TF;
    }{ struct Cyc_Warn_String_Warn_Warg_struct _TF = _T6;
      { struct Cyc_Warn_TypOpt_Warn_Warg_struct _T10;
	_T10.tag = 3;
	_T8 = clause;
	_T10.f1 = _T8->topt;
	_T7 = _T10;
      }{ struct Cyc_Warn_TypOpt_Warn_Warg_struct _T10 = _T7;
	{ struct Cyc_Warn_String_Warn_Warg_struct _T11;
	  _T11.tag = 0;
	  _T11.f1 = _tag_fat(" instead of integral type",sizeof(char),26U);
	  _T9 = _T11;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T11 = _T9;
	  void * _T12[4];
	  _T12[0] = &_TE;
	  _T12[1] = &_TF;
	  _T12[2] = &_T10;
	  _T12[3] = &_T11;
	  _TA = env;
	  _TB = _TA.loc;
	  _TC = _tag_fat(_T12,sizeof(void *),4);
	  Cyc_Warn_err2(_TB,_TC);
	}
      }
    }
  }goto _TL64;
  _TL63: _TL64: env = Cyc_Tctyp_i_check_type_level_exp(clause,env);
  { struct Cyc_AssnDef_AssnMap assnmap = Cyc_Vcgen_clause2assn(clause);
    { struct _tuple17 _TE;
      _TE.f0 = env;
      _TE.f1 = assnmap;
      _TD = _TE;
    }return _TD;
  }
}
static struct Cyc_Tctyp_CVTEnv Cyc_Tctyp_i_check_aggr(struct Cyc_Tctyp_CVTEnv env,
						      struct Cyc_Absyn_Kind * expected_kind,
						      union Cyc_Absyn_AggrInfo * info,
						      struct Cyc_List_List * * targs,
						      long allow_abs_aggr) {
  struct Cyc_Tctyp_CVTEnv _T0;
  struct Cyc_Tctyp_CVTEnv _T1;
  union Cyc_Absyn_AggrInfo * _T2;
  struct _union_AggrInfo_UnknownAggr _T3;
  unsigned int _T4;
  struct _union_AggrInfo_UnknownAggr _T5;
  struct _tuple3 _T6;
  struct _union_AggrInfo_UnknownAggr _T7;
  struct _tuple3 _T8;
  struct _union_AggrInfo_UnknownAggr _T9;
  struct _tuple3 _TA;
  struct _handler_cons * _TB;
  int _TC;
  struct Cyc_Absyn_Aggrdecl * * _TD;
  struct Cyc_Absyn_Aggrdecl * _TE;
  enum Cyc_Absyn_AggrKind _TF;
  int _T10;
  enum Cyc_Absyn_AggrKind _T11;
  int _T12;
  struct Cyc_Absyn_Aggrdecl * _T13;
  enum Cyc_Absyn_AggrKind _T14;
  int _T15;
  struct Cyc_Warn_String_Warn_Warg_struct _T16;
  struct Cyc_Warn_Qvar_Warn_Warg_struct _T17;
  struct Cyc_Warn_String_Warn_Warg_struct _T18;
  struct Cyc_Warn_Qvar_Warn_Warg_struct _T19;
  unsigned int _T1A;
  struct _fat_ptr _T1B;
  struct Cyc_Warn_String_Warn_Warg_struct _T1C;
  struct Cyc_Warn_Qvar_Warn_Warg_struct _T1D;
  struct Cyc_Warn_String_Warn_Warg_struct _T1E;
  struct Cyc_Warn_Qvar_Warn_Warg_struct _T1F;
  unsigned int _T20;
  struct _fat_ptr _T21;
  struct Cyc_Core_Opt * _T22;
  unsigned int _T23;
  struct Cyc_Core_Opt * _T24;
  void * _T25;
  long _T26;
  struct Cyc_Absyn_Aggrdecl * _T27;
  struct Cyc_Absyn_AggrdeclImpl * _T28;
  unsigned int _T29;
  struct Cyc_Absyn_Aggrdecl * _T2A;
  struct Cyc_Absyn_AggrdeclImpl * _T2B;
  long _T2C;
  struct Cyc_Warn_String_Warn_Warg_struct _T2D;
  struct Cyc_Warn_Qvar_Warn_Warg_struct _T2E;
  unsigned int _T2F;
  struct _fat_ptr _T30;
  union Cyc_Absyn_AggrInfo * _T31;
  void * _T32;
  struct Cyc_Dict_Absent_exn_struct * _T33;
  char * _T34;
  char * _T35;
  struct Cyc_Tcenv_Tenv * _T36;
  unsigned int _T37;
  struct Cyc_Absyn_Aggrdecl * _T38;
  union Cyc_Absyn_AggrInfo * _T39;
  struct Cyc_List_List * * _T3A;
  struct Cyc_List_List * _T3B;
  struct Cyc_Warn_String_Warn_Warg_struct _T3C;
  struct Cyc_Warn_Qvar_Warn_Warg_struct _T3D;
  struct Cyc_Warn_String_Warn_Warg_struct _T3E;
  unsigned int _T3F;
  struct _fat_ptr _T40;
  struct Cyc_Tctyp_CVTEnv _T41;
  struct Cyc_Absyn_Aggrdecl * * _T42;
  struct _union_AggrInfo_KnownAggr _T43;
  struct Cyc_Absyn_Aggrdecl * * _T44;
  struct Cyc_Tctyp_CVTEnv _T45;
  struct Cyc_List_List * * _T46;
  struct Cyc_Absyn_Aggrdecl * _T47;
  struct Cyc_List_List * _T48;
  struct Cyc_Absyn_Kind * _T49;
  long _T4A;
  struct Cyc_Absyn_Aggrdecl * _T4B;
  struct _tuple1 * _T4C;
  long _T4D;
  struct Cyc_Absyn_Aggrdecl * _T4E;
  struct Cyc_Absyn_AggrdeclImpl * _T4F;
  struct Cyc_Absyn_Kind * _T50;
  struct Cyc_Absyn_Kind * _T51;
  struct Cyc_Absyn_Kind * _T52;
  long _T53;
  struct Cyc_Absyn_Aggrdecl * _T54;
  struct Cyc_Tctyp_CVTEnv _T55;
  struct Cyc_Tcenv_Tenv * _T56;
  unsigned int _T57;
  _T0 = env;
  _T57 = _T0.loc;
  _T1 = env;
  _T56 = _T1.te;
  { unsigned int loc = _T57;
    struct Cyc_Tcenv_Tenv * te = _T56;
    _T2 = info;
    { union Cyc_Absyn_AggrInfo _T58 = *_T2;
      struct Cyc_Absyn_Aggrdecl * _T59;
      struct Cyc_Core_Opt * _T5A;
      struct _tuple1 * _T5B;
      enum Cyc_Absyn_AggrKind _T5C;
      _T3 = _T58.UnknownAggr;
      _T4 = _T3.tag;
      if (_T4 != 1) { goto _TL66;
      }
      _T5 = _T58.UnknownAggr;
      _T6 = _T5.val;
      _T5C = _T6.f0;
      _T7 = _T58.UnknownAggr;
      _T8 = _T7.val;
      _T5B = _T8.f1;
      _T9 = _T58.UnknownAggr;
      _TA = _T9.val;
      _T5A = _TA.f2;
      { enum Cyc_Absyn_AggrKind k = _T5C;
	struct _tuple1 * n = _T5B;
	struct Cyc_Core_Opt * tgd = _T5A;
	struct Cyc_Absyn_Aggrdecl * * adp;
	{ struct _handler_cons _T5D;
	  _TB = &_T5D;
	  _push_handler(_TB);
	  { int _T5E = 0;
	    _TC = setjmp(_T5D.handler);
	    if (! _TC) { goto _TL68;
	    }
	    _T5E = 1;
	    goto _TL69;
	    _TL68: _TL69: if (_T5E) { goto _TL6A;
	    }else { goto _TL6C;
	    }
	    _TL6C: adp = Cyc_Tcenv_lookup_aggrdecl(te,loc,n);
	    _TD = adp;
	    { struct Cyc_Absyn_Aggrdecl * ad = *_TD;
	      _TE = ad;
	      _TF = _TE->kind;
	      _T10 = (int)_TF;
	      _T11 = k;
	      _T12 = (int)_T11;
	      if (_T10 == _T12) { goto _TL6D;
	      }
	      _T13 = ad;
	      _T14 = _T13->kind;
	      _T15 = (int)_T14;
	      if (_T15 != 0) { goto _TL6F;
	      }
	      { struct Cyc_Warn_String_Warn_Warg_struct _T5F;
		_T5F.tag = 0;
		_T5F.f1 = _tag_fat("expecting struct ",sizeof(char),18U);
		_T16 = _T5F;
	      }{ struct Cyc_Warn_String_Warn_Warg_struct _T5F = _T16;
		{ struct Cyc_Warn_Qvar_Warn_Warg_struct _T60;
		  _T60.tag = 1;
		  _T60.f1 = n;
		  _T17 = _T60;
		}{ struct Cyc_Warn_Qvar_Warn_Warg_struct _T60 = _T17;
		  { struct Cyc_Warn_String_Warn_Warg_struct _T61;
		    _T61.tag = 0;
		    _T61.f1 = _tag_fat("instead of union ",sizeof(char),18U);
		    _T18 = _T61;
		  }{ struct Cyc_Warn_String_Warn_Warg_struct _T61 = _T18;
		    { struct Cyc_Warn_Qvar_Warn_Warg_struct _T62;
		      _T62.tag = 1;
		      _T62.f1 = n;
		      _T19 = _T62;
		    }{ struct Cyc_Warn_Qvar_Warn_Warg_struct _T62 = _T19;
		      void * _T63[4];
		      _T63[0] = &_T5F;
		      _T63[1] = &_T60;
		      _T63[2] = &_T61;
		      _T63[3] = &_T62;
		      _T1A = loc;
		      _T1B = _tag_fat(_T63,sizeof(void *),4);
		      Cyc_Warn_err2(_T1A,_T1B);
		    }
		  }
		}
	      }goto _TL70;
	      _TL6F: { struct Cyc_Warn_String_Warn_Warg_struct _T5F;
		_T5F.tag = 0;
		_T5F.f1 = _tag_fat("expecting union ",sizeof(char),17U);
		_T1C = _T5F;
	      }{ struct Cyc_Warn_String_Warn_Warg_struct _T5F = _T1C;
		{ struct Cyc_Warn_Qvar_Warn_Warg_struct _T60;
		  _T60.tag = 1;
		  _T60.f1 = n;
		  _T1D = _T60;
		}{ struct Cyc_Warn_Qvar_Warn_Warg_struct _T60 = _T1D;
		  { struct Cyc_Warn_String_Warn_Warg_struct _T61;
		    _T61.tag = 0;
		    _T61.f1 = _tag_fat("instead of struct ",sizeof(char),
				       19U);
		    _T1E = _T61;
		  }{ struct Cyc_Warn_String_Warn_Warg_struct _T61 = _T1E;
		    { struct Cyc_Warn_Qvar_Warn_Warg_struct _T62;
		      _T62.tag = 1;
		      _T62.f1 = n;
		      _T1F = _T62;
		    }{ struct Cyc_Warn_Qvar_Warn_Warg_struct _T62 = _T1F;
		      void * _T63[4];
		      _T63[0] = &_T5F;
		      _T63[1] = &_T60;
		      _T63[2] = &_T61;
		      _T63[3] = &_T62;
		      _T20 = loc;
		      _T21 = _tag_fat(_T63,sizeof(void *),4);
		      Cyc_Warn_err2(_T20,_T21);
		    }
		  }
		}
	      }_TL70: goto _TL6E;
	      _TL6D: _TL6E: _T22 = tgd;
	      _T23 = (unsigned int)_T22;
	      if (! _T23) { goto _TL71;
	      }
	      _T24 = tgd;
	      _T25 = _T24->v;
	      _T26 = (long)_T25;
	      if (! _T26) { goto _TL71;
	      }
	      _T27 = ad;
	      _T28 = _T27->impl;
	      _T29 = (unsigned int)_T28;
	      if (_T29) { goto _TL74;
	      }else { goto _TL73;
	      }
	      _TL74: _T2A = ad;
	      _T2B = _T2A->impl;
	      _T2C = _T2B->tagged;
	      if (_T2C) { goto _TL71;
	      }else { goto _TL73;
	      }
	      _TL73: { struct Cyc_Warn_String_Warn_Warg_struct _T5F;
		_T5F.tag = 0;
		_T5F.f1 = _tag_fat("@tagged qualfiers don't agree on union ",
				   sizeof(char),40U);
		_T2D = _T5F;
	      }{ struct Cyc_Warn_String_Warn_Warg_struct _T5F = _T2D;
		{ struct Cyc_Warn_Qvar_Warn_Warg_struct _T60;
		  _T60.tag = 1;
		  _T60.f1 = n;
		  _T2E = _T60;
		}{ struct Cyc_Warn_Qvar_Warn_Warg_struct _T60 = _T2E;
		  void * _T61[2];
		  _T61[0] = &_T5F;
		  _T61[1] = &_T60;
		  _T2F = loc;
		  _T30 = _tag_fat(_T61,sizeof(void *),2);
		  Cyc_Warn_err2(_T2F,_T30);
		}
	      }goto _TL72;
	      _TL71: _TL72: _T31 = info;
	      *_T31 = Cyc_Absyn_KnownAggr(adp);
	    }_pop_handler();
	    goto _TL6B;
	    _TL6A: _T32 = Cyc_Core_get_exn_thrown();
	    { void * _T5F = (void *)_T32;
	      void * _T60;
	      _T33 = (struct Cyc_Dict_Absent_exn_struct *)_T5F;
	      _T34 = _T33->tag;
	      _T35 = Cyc_Dict_Absent;
	      if (_T34 != _T35) { goto _TL75;
	      }
	      _T36 = te;
	      _T37 = loc;
	      { struct Cyc_Absyn_Aggrdecl * _T61 = _cycalloc(sizeof(struct Cyc_Absyn_Aggrdecl));
		_T61->kind = k;
		_T61->sc = 3U;
		_T61->name = n;
		_T61->tvs = 0;
		_T61->impl = 0;
		_T61->attributes = 0;
		_T61->expected_mem_kind = 0;
		_T38 = (struct Cyc_Absyn_Aggrdecl *)_T61;
	      }Cyc_Tc_tcAggrdecl(_T36,_T37,_T38);
	      adp = Cyc_Tcenv_lookup_aggrdecl(te,loc,n);
	      _T39 = info;
	      *_T39 = Cyc_Absyn_KnownAggr(adp);
	      _T3A = targs;
	      _T3B = *_T3A;
	      if (_T3B == 0) { goto _TL77;
	      }
	      { struct Cyc_Warn_String_Warn_Warg_struct _T61;
		_T61.tag = 0;
		_T61.f1 = _tag_fat("declare parameterized type ",sizeof(char),
				   28U);
		_T3C = _T61;
	      }{ struct Cyc_Warn_String_Warn_Warg_struct _T61 = _T3C;
		{ struct Cyc_Warn_Qvar_Warn_Warg_struct _T62;
		  _T62.tag = 1;
		  _T62.f1 = n;
		  _T3D = _T62;
		}{ struct Cyc_Warn_Qvar_Warn_Warg_struct _T62 = _T3D;
		  { struct Cyc_Warn_String_Warn_Warg_struct _T63;
		    _T63.tag = 0;
		    _T63.f1 = _tag_fat(" before using",sizeof(char),14U);
		    _T3E = _T63;
		  }{ struct Cyc_Warn_String_Warn_Warg_struct _T63 = _T3E;
		    void * _T64[3];
		    _T64[0] = &_T61;
		    _T64[1] = &_T62;
		    _T64[2] = &_T63;
		    _T3F = loc;
		    _T40 = _tag_fat(_T64,sizeof(void *),3);
		    Cyc_Warn_err2(_T3F,_T40);
		  }
		}
	      }_T41 = env;
	      return _T41;
	      _TL77: goto _LL8;
	      _TL75: _T60 = _T5F;
	      { void * exn = _T60;
		_rethrow(exn);
	      }_LL8: ;
	    }_TL6B: ;
	  }
	}_T42 = adp;
	_T59 = *_T42;
	goto _LL7;
      }_TL66: _T43 = _T58.KnownAggr;
      _T44 = _T43.val;
      { struct Cyc_Absyn_Aggrdecl * _T5D = *_T44;
	_T59 = _T5D;
      }_LL7: { struct Cyc_Absyn_Aggrdecl * ad = _T59;
	_T45 = env;
	_T46 = targs;
	_T47 = ad;
	_T48 = _T47->tvs;
	_T49 = expected_kind;
	_T4A = allow_abs_aggr;
	_T4B = ad;
	_T4C = _T4B->name;
	env = Cyc_Tctyp_check_type_inst(_T45,_T46,_T48,_T49,_T4A,_T4C,0);
	_T4D = allow_abs_aggr;
	if (! _T4D) { goto _TL79;
	}
	_T4E = ad;
	_T4F = _T4E->impl;
	if (_T4F != 0) { goto _TL79;
	}
	_T50 = &Cyc_Kinds_ak;
	_T51 = (struct Cyc_Absyn_Kind *)_T50;
	_T52 = expected_kind;
	_T53 = Cyc_Kinds_kind_leq(_T51,_T52);
	if (_T53) { goto _TL79;
	}else { goto _TL7B;
	}
	_TL7B: _T54 = ad;
	_T54->expected_mem_kind = 1;
	goto _TL7A;
	_TL79: _TL7A: _T55 = env;
	return _T55;
      };
    }
  }
}
static struct Cyc_Tctyp_CVTEnv Cyc_Tctyp_i_check_datatype(struct Cyc_Tctyp_CVTEnv env,
							  struct Cyc_Absyn_Kind * expected_kind,
							  union Cyc_Absyn_DatatypeInfo * info,
							  struct Cyc_List_List * * targsp,
							  long allow_abs_aggr) {
  struct Cyc_Tctyp_CVTEnv _T0;
  struct Cyc_Tctyp_CVTEnv _T1;
  struct Cyc_List_List * * _T2;
  union Cyc_Absyn_DatatypeInfo * _T3;
  struct _union_DatatypeInfo_UnknownDatatype _T4;
  unsigned int _T5;
  struct _union_DatatypeInfo_UnknownDatatype _T6;
  struct Cyc_Absyn_UnknownDatatypeInfo _T7;
  struct _union_DatatypeInfo_UnknownDatatype _T8;
  struct Cyc_Absyn_UnknownDatatypeInfo _T9;
  struct _handler_cons * _TA;
  int _TB;
  void * _TC;
  struct Cyc_Dict_Absent_exn_struct * _TD;
  char * _TE;
  char * _TF;
  struct Cyc_Tcenv_Tenv * _T10;
  unsigned int _T11;
  struct Cyc_Absyn_Datatypedecl * _T12;
  struct Cyc_Warn_String_Warn_Warg_struct _T13;
  struct Cyc_Warn_Qvar_Warn_Warg_struct _T14;
  struct Cyc_Warn_String_Warn_Warg_struct _T15;
  unsigned int _T16;
  struct _fat_ptr _T17;
  struct Cyc_Tctyp_CVTEnv _T18;
  long _T19;
  struct Cyc_Absyn_Datatypedecl * * _T1A;
  struct Cyc_Absyn_Datatypedecl * _T1B;
  long _T1C;
  struct Cyc_Warn_String_Warn_Warg_struct _T1D;
  struct Cyc_Warn_Qvar_Warn_Warg_struct _T1E;
  struct Cyc_Warn_String_Warn_Warg_struct _T1F;
  unsigned int _T20;
  struct _fat_ptr _T21;
  union Cyc_Absyn_DatatypeInfo * _T22;
  struct Cyc_Absyn_Datatypedecl * * _T23;
  struct _union_DatatypeInfo_KnownDatatype _T24;
  struct Cyc_Absyn_Datatypedecl * * _T25;
  struct Cyc_Tctyp_CVTEnv _T26;
  struct Cyc_List_List * * _T27;
  struct Cyc_Absyn_Datatypedecl * _T28;
  struct Cyc_List_List * _T29;
  struct Cyc_Absyn_Kind * _T2A;
  long _T2B;
  struct Cyc_Absyn_Datatypedecl * _T2C;
  struct _tuple1 * _T2D;
  struct Cyc_Tctyp_CVTEnv _T2E;
  struct Cyc_Tcenv_Tenv * _T2F;
  unsigned int _T30;
  _T0 = env;
  _T30 = _T0.loc;
  _T1 = env;
  _T2F = _T1.te;
  { unsigned int loc = _T30;
    struct Cyc_Tcenv_Tenv * te = _T2F;
    _T2 = targsp;
    { struct Cyc_List_List * targs = *_T2;
      _T3 = info;
      { union Cyc_Absyn_DatatypeInfo _T31 = *_T3;
	struct Cyc_Absyn_Datatypedecl * _T32;
	long _T33;
	struct _tuple1 * _T34;
	_T4 = _T31.UnknownDatatype;
	_T5 = _T4.tag;
	if (_T5 != 1) { goto _TL7C;
	}
	_T6 = _T31.UnknownDatatype;
	_T7 = _T6.val;
	_T34 = _T7.name;
	_T8 = _T31.UnknownDatatype;
	_T9 = _T8.val;
	_T33 = _T9.is_extensible;
	{ struct _tuple1 * n = _T34;
	  long is_x = _T33;
	  struct Cyc_Absyn_Datatypedecl * * tudp;
	  { struct _handler_cons _T35;
	    _TA = &_T35;
	    _push_handler(_TA);
	    { int _T36 = 0;
	      _TB = setjmp(_T35.handler);
	      if (! _TB) { goto _TL7E;
	      }
	      _T36 = 1;
	      goto _TL7F;
	      _TL7E: _TL7F: if (_T36) { goto _TL80;
	      }else { goto _TL82;
	      }
	      _TL82: tudp = Cyc_Tcenv_lookup_datatypedecl(te,loc,n);
	      _pop_handler();
	      goto _TL81;
	      _TL80: _TC = Cyc_Core_get_exn_thrown();
	      { void * _T37 = (void *)_TC;
		void * _T38;
		_TD = (struct Cyc_Dict_Absent_exn_struct *)_T37;
		_TE = _TD->tag;
		_TF = Cyc_Dict_Absent;
		if (_TE != _TF) { goto _TL83;
		}
		_T10 = te;
		_T11 = loc;
		{ struct Cyc_Absyn_Datatypedecl * _T39 = _cycalloc(sizeof(struct Cyc_Absyn_Datatypedecl));
		  _T39->sc = 3U;
		  _T39->name = n;
		  _T39->tvs = 0;
		  _T39->fields = 0;
		  _T39->is_extensible = is_x;
		  _T12 = (struct Cyc_Absyn_Datatypedecl *)_T39;
		}Cyc_Tc_tcDatatypedecl(_T10,_T11,_T12);
		tudp = Cyc_Tcenv_lookup_datatypedecl(te,loc,n);
		if (targs == 0) { goto _TL85;
		}
		{ struct Cyc_Warn_String_Warn_Warg_struct _T39;
		  _T39.tag = 0;
		  _T39.f1 = _tag_fat("declare parameterized datatype ",sizeof(char),
				     32U);
		  _T13 = _T39;
		}{ struct Cyc_Warn_String_Warn_Warg_struct _T39 = _T13;
		  { struct Cyc_Warn_Qvar_Warn_Warg_struct _T3A;
		    _T3A.tag = 1;
		    _T3A.f1 = n;
		    _T14 = _T3A;
		  }{ struct Cyc_Warn_Qvar_Warn_Warg_struct _T3A = _T14;
		    { struct Cyc_Warn_String_Warn_Warg_struct _T3B;
		      _T3B.tag = 0;
		      _T3B.f1 = _tag_fat(" before using",sizeof(char),14U);
		      _T15 = _T3B;
		    }{ struct Cyc_Warn_String_Warn_Warg_struct _T3B = _T15;
		      void * _T3C[3];
		      _T3C[0] = &_T39;
		      _T3C[1] = &_T3A;
		      _T3C[2] = &_T3B;
		      _T16 = loc;
		      _T17 = _tag_fat(_T3C,sizeof(void *),3);
		      Cyc_Warn_err2(_T16,_T17);
		    }
		  }
		}_T18 = env;
		return _T18;
		_TL85: goto _LL8;
		_TL83: _T38 = _T37;
		{ void * exn = _T38;
		  _rethrow(exn);
		}_LL8: ;
	      }_TL81: ;
	    }
	  }_T19 = is_x;
	  if (! _T19) { goto _TL87;
	  }
	  _T1A = tudp;
	  _T1B = *_T1A;
	  _T1C = _T1B->is_extensible;
	  if (_T1C) { goto _TL87;
	  }else { goto _TL89;
	  }
	  _TL89: { struct Cyc_Warn_String_Warn_Warg_struct _T35;
	    _T35.tag = 0;
	    _T35.f1 = _tag_fat("datatype ",sizeof(char),10U);
	    _T1D = _T35;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T35 = _T1D;
	    { struct Cyc_Warn_Qvar_Warn_Warg_struct _T36;
	      _T36.tag = 1;
	      _T36.f1 = n;
	      _T1E = _T36;
	    }{ struct Cyc_Warn_Qvar_Warn_Warg_struct _T36 = _T1E;
	      { struct Cyc_Warn_String_Warn_Warg_struct _T37;
		_T37.tag = 0;
		_T37.f1 = _tag_fat(" was not declared @extensible",sizeof(char),
				   30U);
		_T1F = _T37;
	      }{ struct Cyc_Warn_String_Warn_Warg_struct _T37 = _T1F;
		void * _T38[3];
		_T38[0] = &_T35;
		_T38[1] = &_T36;
		_T38[2] = &_T37;
		_T20 = loc;
		_T21 = _tag_fat(_T38,sizeof(void *),3);
		Cyc_Warn_err2(_T20,_T21);
	      }
	    }
	  }goto _TL88;
	  _TL87: _TL88: _T22 = info;
	  *_T22 = Cyc_Absyn_KnownDatatype(tudp);
	  _T23 = tudp;
	  _T32 = *_T23;
	  goto _LL7;
	}_TL7C: _T24 = _T31.KnownDatatype;
	_T25 = _T24.val;
	{ struct Cyc_Absyn_Datatypedecl * _T35 = *_T25;
	  _T32 = _T35;
	}_LL7: { struct Cyc_Absyn_Datatypedecl * tud = _T32;
	  _T26 = env;
	  _T27 = targsp;
	  _T28 = tud;
	  _T29 = _T28->tvs;
	  _T2A = expected_kind;
	  _T2B = allow_abs_aggr;
	  _T2C = tud;
	  _T2D = _T2C->name;
	  _T2E = Cyc_Tctyp_check_type_inst(_T26,_T27,_T29,_T2A,_T2B,_T2D,
					   0);
	  return _T2E;
	};
      }
    }
  }
}
static struct Cyc_Tctyp_CVTEnv Cyc_Tctyp_i_check_datatype_field(struct Cyc_Tctyp_CVTEnv env,
								struct Cyc_Absyn_Kind * expected_kind,
								union Cyc_Absyn_DatatypeFieldInfo * info,
								struct Cyc_List_List * * targsp,
								long allow_abs_aggr) {
  union Cyc_Absyn_DatatypeFieldInfo * _T0;
  struct _union_DatatypeFieldInfo_UnknownDatatypefield _T1;
  unsigned int _T2;
  struct _union_DatatypeFieldInfo_UnknownDatatypefield _T3;
  struct Cyc_Absyn_UnknownDatatypeFieldInfo _T4;
  struct _union_DatatypeFieldInfo_UnknownDatatypefield _T5;
  struct Cyc_Absyn_UnknownDatatypeFieldInfo _T6;
  struct _union_DatatypeFieldInfo_UnknownDatatypefield _T7;
  struct Cyc_Absyn_UnknownDatatypeFieldInfo _T8;
  struct Cyc_Tctyp_CVTEnv _T9;
  struct Cyc_Tcenv_Tenv * _TA;
  struct Cyc_Tctyp_CVTEnv _TB;
  unsigned int _TC;
  struct _tuple1 * _TD;
  struct Cyc_Absyn_Datatypedecl * * _TE;
  struct Cyc_Absyn_Datatypedecl * _TF;
  struct Cyc_Core_Opt * _T10;
  struct Cyc_Core_Opt * _T11;
  void * _T12;
  struct Cyc_Warn_String_Warn_Warg_struct _T13;
  int (* _T14)(struct _fat_ptr);
  void * (* _T15)(struct _fat_ptr);
  struct _fat_ptr _T16;
  struct Cyc_List_List * _T17;
  void * _T18;
  struct Cyc_Absyn_Datatypefield * _T19;
  struct _tuple1 * _T1A;
  struct _tuple1 * _T1B;
  int _T1C;
  struct Cyc_List_List * _T1D;
  void * _T1E;
  struct Cyc_List_List * _T1F;
  union Cyc_Absyn_DatatypeFieldInfo * _T20;
  struct _union_DatatypeFieldInfo_KnownDatatypefield _T21;
  struct _tuple2 _T22;
  struct _union_DatatypeFieldInfo_KnownDatatypefield _T23;
  struct _tuple2 _T24;
  struct Cyc_Tctyp_CVTEnv _T25;
  struct Cyc_List_List * * _T26;
  struct Cyc_Absyn_Datatypedecl * _T27;
  struct Cyc_List_List * _T28;
  struct Cyc_Absyn_Kind * _T29;
  long _T2A;
  struct Cyc_Absyn_Datatypefield * _T2B;
  struct _tuple1 * _T2C;
  struct Cyc_Tctyp_CVTEnv _T2D;
  _T0 = info;
  { union Cyc_Absyn_DatatypeFieldInfo _T2E = *_T0;
    struct Cyc_Absyn_Datatypefield * _T2F;
    struct Cyc_Absyn_Datatypedecl * _T30;
    long _T31;
    struct _tuple1 * _T32;
    struct _tuple1 * _T33;
    _T1 = _T2E.UnknownDatatypefield;
    _T2 = _T1.tag;
    if (_T2 != 1) { goto _TL8A;
    }
    _T3 = _T2E.UnknownDatatypefield;
    _T4 = _T3.val;
    _T33 = _T4.datatype_name;
    _T5 = _T2E.UnknownDatatypefield;
    _T6 = _T5.val;
    _T32 = _T6.field_name;
    _T7 = _T2E.UnknownDatatypefield;
    _T8 = _T7.val;
    _T31 = _T8.is_extensible;
    { struct _tuple1 * tname = _T33;
      struct _tuple1 * fname = _T32;
      long is_x = _T31;
      _T9 = env;
      _TA = _T9.te;
      _TB = env;
      _TC = _TB.loc;
      _TD = tname;
      _TE = Cyc_Tcenv_lookup_datatypedecl(_TA,_TC,_TD);
      { struct Cyc_Absyn_Datatypedecl * tud = *_TE;
	struct Cyc_Absyn_Datatypefield * tuf;
	_TF = tud;
	_T10 = _TF->fields;
	_T11 = _check_null(_T10);
	_T12 = _T11->v;
	{ struct Cyc_List_List * fs = (struct Cyc_List_List *)_T12;
	  _TL8F: if (1) { goto _TL8D;
	  }else { goto _TL8E;
	  }
	  _TL8D: if (fs != 0) { goto _TL90;
	  }
	  { struct Cyc_Warn_String_Warn_Warg_struct _T34;
	    _T34.tag = 0;
	    _T34.f1 = _tag_fat("Tcutil found a bad datatypefield",sizeof(char),
			       33U);
	    _T13 = _T34;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T34 = _T13;
	    void * _T35[1];
	    _T35[0] = &_T34;
	    _T15 = Cyc_Warn_impos2;
	    { int (* _T36)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T15;
	      _T14 = _T36;
	    }_T16 = _tag_fat(_T35,sizeof(void *),1);
	    _T14(_T16);
	  }goto _TL91;
	  _TL90: _TL91: _T17 = fs;
	  _T18 = _T17->hd;
	  _T19 = (struct Cyc_Absyn_Datatypefield *)_T18;
	  _T1A = _T19->name;
	  _T1B = fname;
	  _T1C = Cyc_Absyn_qvar_cmp(_T1A,_T1B);
	  if (_T1C != 0) { goto _TL92;
	  }
	  _T1D = fs;
	  _T1E = _T1D->hd;
	  tuf = (struct Cyc_Absyn_Datatypefield *)_T1E;
	  goto _TL8E;
	  _TL92: _T1F = fs;
	  fs = _T1F->tl;
	  goto _TL8F;
	  _TL8E: ;
	}_T20 = info;
	*_T20 = Cyc_Absyn_KnownDatatypefield(tud,tuf);
	_T30 = tud;
	_T2F = tuf;
	goto _LL4;
      }
    }_TL8A: _T21 = _T2E.KnownDatatypefield;
    _T22 = _T21.val;
    _T30 = _T22.f0;
    _T23 = _T2E.KnownDatatypefield;
    _T24 = _T23.val;
    _T2F = _T24.f1;
    _LL4: { struct Cyc_Absyn_Datatypedecl * tud = _T30;
      struct Cyc_Absyn_Datatypefield * tuf = _T2F;
      _T25 = env;
      _T26 = targsp;
      _T27 = tud;
      _T28 = _T27->tvs;
      _T29 = expected_kind;
      _T2A = allow_abs_aggr;
      _T2B = tuf;
      _T2C = _T2B->name;
      _T2D = Cyc_Tctyp_check_type_inst(_T25,_T26,_T28,_T29,_T2A,_T2C,0);
      return _T2D;
    };
  }
}
static struct Cyc_Tctyp_CVTEnv Cyc_Tctyp_i_check_unary_app(struct Cyc_Tctyp_CVTEnv env,
							   struct Cyc_Absyn_Kind * k,
							   struct Cyc_List_List * ts,
							   long put_in_effect,
							   struct _fat_ptr s) {
  int _T0;
  struct Cyc_Warn_String_Warn_Warg_struct _T1;
  struct Cyc_Warn_String_Warn_Warg_struct _T2;
  int (* _T3)(struct _fat_ptr);
  void * (* _T4)(struct _fat_ptr);
  struct _fat_ptr _T5;
  struct Cyc_Tctyp_CVTEnv _T6;
  struct Cyc_Absyn_Kind * _T7;
  struct Cyc_List_List * _T8;
  void * _T9;
  long _TA;
  struct Cyc_Tctyp_CVTEnv _TB;
  _T0 = Cyc_List_length(ts);
  if (_T0 == 1) { goto _TL94;
  }
  { struct Cyc_Warn_String_Warn_Warg_struct _TC;
    _TC.tag = 0;
    _TC.f1 = s;
    _T1 = _TC;
  }{ struct Cyc_Warn_String_Warn_Warg_struct _TC = _T1;
    { struct Cyc_Warn_String_Warn_Warg_struct _TD;
      _TD.tag = 0;
      _TD.f1 = _tag_fat(" has wrong number of arguments",sizeof(char),31U);
      _T2 = _TD;
    }{ struct Cyc_Warn_String_Warn_Warg_struct _TD = _T2;
      void * _TE[2];
      _TE[0] = &_TC;
      _TE[1] = &_TD;
      _T4 = Cyc_Warn_impos2;
      { int (* _TF)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T4;
	_T3 = _TF;
      }_T5 = _tag_fat(_TE,sizeof(void *),2);
      _T3(_T5);
    }
  }goto _TL95;
  _TL94: _TL95: _T6 = env;
  _T7 = k;
  _T8 = _check_null(ts);
  _T9 = _T8->hd;
  _TA = put_in_effect;
  _TB = Cyc_Tctyp_i_check_type(_T6,_T7,_T9,_TA,1);
  return _TB;
}
static struct Cyc_Tctyp_CVTEnv Cyc_Tctyp_i_check_type_app(struct Cyc_Tctyp_CVTEnv env,
							  struct Cyc_Absyn_Kind * expected_kind,
							  void * c,struct Cyc_List_List * * targsp,
							  long put_in_effect,
							  long allow_abs_aggr,
							  void * apptype) {
  struct Cyc_Tctyp_CVTEnv _T0;
  struct Cyc_Tctyp_CVTEnv _T1;
  struct Cyc_List_List * * _T2;
  void * _T3;
  int * _T4;
  unsigned int _T5;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T6;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T7;
  struct Cyc_Warn_String_Warn_Warg_struct _T8;
  int (* _T9)(struct _fat_ptr);
  void * (* _TA)(struct _fat_ptr);
  struct _fat_ptr _TB;
  struct Cyc_Tctyp_CVTEnv _TC;
  struct Cyc_Warn_Typ_Warn_Warg_struct _TD;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _TE;
  struct Cyc_Warn_String_Warn_Warg_struct _TF;
  int (* _T10)(struct _fat_ptr);
  void * (* _T11)(struct _fat_ptr);
  struct _fat_ptr _T12;
  struct Cyc_Absyn_Kind * _T13;
  struct Cyc_Absyn_Kind * _T14;
  struct Cyc_Absyn_Kind * _T15;
  struct Cyc_Warn_String_Warn_Warg_struct _T16;
  struct Cyc_Warn_Kind_Warn_Warg_struct _T17;
  struct Cyc_Warn_String_Warn_Warg_struct _T18;
  unsigned int _T19;
  struct _fat_ptr _T1A;
  struct Cyc_Tctyp_CVTEnv _T1B;
  struct Cyc_List_List * _T1C;
  struct Cyc_List_List * _T1D;
  struct Cyc_Warn_String_Warn_Warg_struct _T1E;
  int (* _T1F)(struct _fat_ptr);
  void * (* _T20)(struct _fat_ptr);
  struct _fat_ptr _T21;
  struct Cyc_Tctyp_CVTEnv _T22;
  struct Cyc_Absyn_Kind * _T23;
  struct Cyc_Absyn_Kind * _T24;
  struct Cyc_List_List * _T25;
  void * _T26;
  struct Cyc_Tctyp_CVTEnv _T27;
  int _T28;
  struct Cyc_Warn_String_Warn_Warg_struct _T29;
  int (* _T2A)(struct _fat_ptr);
  void * (* _T2B)(struct _fat_ptr);
  struct _fat_ptr _T2C;
  struct Cyc_Tctyp_CVTEnv _T2D;
  struct Cyc_Absyn_Kind * _T2E;
  struct Cyc_Absyn_Kind * _T2F;
  struct Cyc_List_List * _T30;
  void * _T31;
  struct Cyc_Tctyp_CVTEnv _T32;
  struct Cyc_Tcenv_Tenv * _T33;
  struct Cyc_List_List * _T34;
  struct Cyc_List_List * _T35;
  void * _T36;
  void * _T37;
  unsigned int _T38;
  struct Cyc_List_List * _T39;
  struct Cyc_List_List * _T3A;
  struct Cyc_List_List * _T3B;
  void * _T3C;
  struct Cyc_Tctyp_CVTEnv _T3D;
  struct Cyc_Absyn_Kind * _T3E;
  struct Cyc_Absyn_Kind * _T3F;
  struct Cyc_List_List * _T40;
  struct Cyc_List_List * _T41;
  struct Cyc_List_List * _T42;
  void * _T43;
  struct Cyc_List_List * _T44;
  struct _tuple16 * _T45;
  struct Cyc_Tctyp_CVTEnv _T46;
  struct Cyc_Tctyp_CVTEnv _T47;
  struct Cyc_Tctyp_CVTEnv _T48;
  struct Cyc_Absyn_Kind * _T49;
  struct Cyc_Absyn_Kind * _T4A;
  struct Cyc_List_List * _T4B;
  void * _T4C;
  struct Cyc_List_List * _T4D;
  struct Cyc_Tctyp_CVTEnv _T4E;
  struct Cyc_Tctyp_CVTEnv _T4F;
  struct Cyc_Absyn_Kind * _T50;
  struct Cyc_Absyn_Kind * _T51;
  struct Cyc_List_List * _T52;
  void * _T53;
  struct Cyc_List_List * _T54;
  struct Cyc_Tctyp_CVTEnv _T55;
  void * _T56;
  void * _T57;
  struct Cyc_Absyn_EnumCon_Absyn_TyCon_struct * _T58;
  struct Cyc_Absyn_Enumdecl * * _T59;
  struct Cyc_Warn_String_Warn_Warg_struct _T5A;
  int (* _T5B)(struct _fat_ptr);
  void * (* _T5C)(struct _fat_ptr);
  struct _fat_ptr _T5D;
  struct Cyc_Absyn_Enumdecl * * _T5E;
  struct Cyc_Absyn_Enumdecl * _T5F;
  struct Cyc_Absyn_Enumdecl * * _T60;
  struct Cyc_Absyn_Enumdecl * _T61;
  struct Cyc_Core_Opt * _T62;
  struct _handler_cons * _T63;
  int _T64;
  struct Cyc_Absyn_Enumdecl * * _T65;
  struct Cyc_Absyn_Enumdecl * * _T66;
  void * _T67;
  struct Cyc_Dict_Absent_exn_struct * _T68;
  char * _T69;
  char * _T6A;
  struct Cyc_Tcenv_Tenv * _T6B;
  unsigned int _T6C;
  struct Cyc_Absyn_Enumdecl * _T6D;
  struct Cyc_Absyn_Enumdecl * * _T6E;
  struct Cyc_Absyn_Enumdecl * * _T6F;
  struct Cyc_Tctyp_CVTEnv _T70;
  void * _T71;
  struct Cyc_Warn_String_Warn_Warg_struct _T72;
  int (* _T73)(struct _fat_ptr);
  void * (* _T74)(struct _fat_ptr);
  struct _fat_ptr _T75;
  struct Cyc_List_List * _T76;
  void * _T77;
  long (* _T78)(int (*)(struct _fat_ptr *,struct _fat_ptr *),struct Cyc_List_List *,
		struct _fat_ptr *);
  long (* _T79)(int (*)(void *,void *),struct Cyc_List_List *,void *);
  int (* _T7A)(struct _fat_ptr *,struct _fat_ptr *);
  struct Cyc_List_List * _T7B;
  struct Cyc_Absyn_Enumfield * _T7C;
  struct _tuple1 * _T7D;
  struct _tuple1 _T7E;
  struct _fat_ptr * _T7F;
  long _T80;
  struct Cyc_Warn_String_Warn_Warg_struct _T81;
  struct Cyc_Warn_Qvar_Warn_Warg_struct _T82;
  struct Cyc_Absyn_Enumfield * _T83;
  struct Cyc_Absyn_Enumfield * _T84;
  unsigned int _T85;
  struct _fat_ptr _T86;
  struct Cyc_List_List * _T87;
  struct Cyc_Absyn_Enumfield * _T88;
  struct _tuple1 * _T89;
  struct _tuple1 _T8A;
  struct Cyc_Absyn_Enumfield * _T8B;
  struct Cyc_Absyn_Exp * _T8C;
  struct Cyc_Absyn_Enumfield * _T8D;
  unsigned int _T8E;
  struct Cyc_Absyn_Enumfield * _T8F;
  unsigned int _T90;
  struct Cyc_Absyn_Enumfield * _T91;
  struct Cyc_Absyn_Exp * _T92;
  long _T93;
  struct Cyc_Warn_String_Warn_Warg_struct _T94;
  struct Cyc_Warn_Qvar_Warn_Warg_struct _T95;
  struct Cyc_Absyn_Enumfield * _T96;
  struct Cyc_Warn_String_Warn_Warg_struct _T97;
  unsigned int _T98;
  struct _fat_ptr _T99;
  struct Cyc_Absyn_Enumfield * _T9A;
  struct Cyc_Absyn_Exp * _T9B;
  struct _tuple14 _T9C;
  unsigned int _T9D;
  struct Cyc_List_List * _T9E;
  struct Cyc_Tctyp_CVTEnv _T9F;
  struct Cyc_Tctyp_CVTEnv _TA0;
  struct Cyc_Absyn_Kind * _TA1;
  struct Cyc_Absyn_Kind * _TA2;
  struct Cyc_List_List * _TA3;
  struct _fat_ptr _TA4;
  struct Cyc_Tctyp_CVTEnv _TA5;
  struct Cyc_Tctyp_CVTEnv _TA6;
  struct Cyc_Absyn_Kind * _TA7;
  struct Cyc_Absyn_Kind * _TA8;
  struct Cyc_List_List * _TA9;
  struct _fat_ptr _TAA;
  struct Cyc_Tctyp_CVTEnv _TAB;
  struct Cyc_Tctyp_CVTEnv _TAC;
  struct Cyc_Absyn_Kind * _TAD;
  struct Cyc_Absyn_Kind * _TAE;
  struct Cyc_List_List * _TAF;
  struct _fat_ptr _TB0;
  struct Cyc_Tctyp_CVTEnv _TB1;
  struct Cyc_Tctyp_CVTEnv _TB2;
  struct Cyc_Absyn_Kind * _TB3;
  struct Cyc_Absyn_Kind * _TB4;
  struct Cyc_List_List * _TB5;
  struct _fat_ptr _TB6;
  struct Cyc_Tctyp_CVTEnv _TB7;
  struct Cyc_Tctyp_CVTEnv _TB8;
  struct Cyc_Absyn_Kind * _TB9;
  struct Cyc_Absyn_Kind * _TBA;
  struct Cyc_List_List * _TBB;
  struct _fat_ptr _TBC;
  struct Cyc_Tctyp_CVTEnv _TBD;
  void * _TBE;
  void * _TBF;
  struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct * _TC0;
  union Cyc_Absyn_AggrInfo * _TC1;
  struct Cyc_Tctyp_CVTEnv _TC2;
  void * _TC3;
  void * _TC4;
  struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct * _TC5;
  union Cyc_Absyn_DatatypeInfo * _TC6;
  struct Cyc_Tctyp_CVTEnv _TC7;
  void * _TC8;
  void * _TC9;
  struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct * _TCA;
  union Cyc_Absyn_DatatypeFieldInfo * _TCB;
  struct Cyc_Tctyp_CVTEnv _TCC;
  struct Cyc_Tcenv_Tenv * _TCD;
  unsigned int _TCE;
  _T0 = env;
  _TCE = _T0.loc;
  _T1 = env;
  _TCD = _T1.te;
  { unsigned int loc = _TCE;
    struct Cyc_Tcenv_Tenv * te = _TCD;
    _T2 = targsp;
    { struct Cyc_List_List * ts = *_T2;
      void * _TCF;
      void * _TD0;
      _T3 = c;
      _T4 = (int *)_T3;
      _T5 = *_T4;
      switch (_T5) {
      case 1: 
	goto _LL7;
      case 2: 
	_LL7: goto _LL9;
      case 0: 
	_LL9: goto _LLB;
      case 8: 
	_LLB: goto _LLD;
      case 7: 
	_LLD: goto _LLF;
      case 6: 
	_LLF: goto _LL11;
      case 12: 
	_LL11: goto _LL13;
      case 11: 
	_LL13: goto _LL15;
      case 14: 
	_LL15: goto _LL17;
      case 21: 
	_LL17: if (ts == 0) { goto _TL97;
	}
	{ struct Cyc_Warn_Typ_Warn_Warg_struct _TD1;
	  _TD1.tag = 2;
	  { struct Cyc_Absyn_AppType_Absyn_Type_struct * _TD2 = _cycalloc(sizeof(struct Cyc_Absyn_AppType_Absyn_Type_struct));
	    _TD2->tag = 0;
	    _TD2->f1 = c;
	    _TD2->f2 = ts;
	    _T7 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TD2;
	  }_TD1.f1 = (void *)_T7;
	  _T6 = _TD1;
	}{ struct Cyc_Warn_Typ_Warn_Warg_struct _TD1 = _T6;
	  { struct Cyc_Warn_String_Warn_Warg_struct _TD2;
	    _TD2.tag = 0;
	    _TD2.f1 = _tag_fat(" applied to argument(s)",sizeof(char),24U);
	    _T8 = _TD2;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _TD2 = _T8;
	    void * _TD3[2];
	    _TD3[0] = &_TD1;
	    _TD3[1] = &_TD2;
	    _TA = Cyc_Warn_impos2;
	    { int (* _TD4)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_TA;
	      _T9 = _TD4;
	    }_TB = _tag_fat(_TD3,sizeof(void *),2);
	    _T9(_TB);
	  }
	}goto _TL98;
	_TL97: _TL98: _TC = env;
	return _TC;
      case 16: 
	if (ts == 0) { goto _TL99;
	}
	{ struct Cyc_Warn_Typ_Warn_Warg_struct _TD1;
	  _TD1.tag = 2;
	  { struct Cyc_Absyn_AppType_Absyn_Type_struct * _TD2 = _cycalloc(sizeof(struct Cyc_Absyn_AppType_Absyn_Type_struct));
	    _TD2->tag = 0;
	    _TD2->f1 = c;
	    _TD2->f2 = ts;
	    _TE = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TD2;
	  }_TD1.f1 = (void *)_TE;
	  _TD = _TD1;
	}{ struct Cyc_Warn_Typ_Warn_Warg_struct _TD1 = _TD;
	  { struct Cyc_Warn_String_Warn_Warg_struct _TD2;
	    _TD2.tag = 0;
	    _TD2.f1 = _tag_fat(" applied to argument(s)",sizeof(char),24U);
	    _TF = _TD2;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _TD2 = _TF;
	    void * _TD3[2];
	    _TD3[0] = &_TD1;
	    _TD3[1] = &_TD2;
	    _T11 = Cyc_Warn_impos2;
	    { int (* _TD4)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T11;
	      _T10 = _TD4;
	    }_T12 = _tag_fat(_TD3,sizeof(void *),2);
	    _T10(_T12);
	  }
	}goto _TL9A;
	_TL99: _TL9A: _T13 = expected_kind;
	_T14 = &Cyc_Kinds_aqk;
	_T15 = (struct Cyc_Absyn_Kind *)_T14;
	if (_T13 == _T15) { goto _TL9B;
	}
	{ struct Cyc_Warn_String_Warn_Warg_struct _TD1;
	  _TD1.tag = 0;
	  _TD1.f1 = _tag_fat("Kind Q used where kind ",sizeof(char),24U);
	  _T16 = _TD1;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _TD1 = _T16;
	  { struct Cyc_Warn_Kind_Warn_Warg_struct _TD2;
	    _TD2.tag = 9;
	    _TD2.f1 = expected_kind;
	    _T17 = _TD2;
	  }{ struct Cyc_Warn_Kind_Warn_Warg_struct _TD2 = _T17;
	    { struct Cyc_Warn_String_Warn_Warg_struct _TD3;
	      _TD3.tag = 0;
	      _TD3.f1 = _tag_fat(" was expected",sizeof(char),14U);
	      _T18 = _TD3;
	    }{ struct Cyc_Warn_String_Warn_Warg_struct _TD3 = _T18;
	      void * _TD4[3];
	      _TD4[0] = &_TD1;
	      _TD4[1] = &_TD2;
	      _TD4[2] = &_TD3;
	      _T19 = loc;
	      _T1A = _tag_fat(_TD4,sizeof(void *),3);
	      Cyc_Warn_err2(_T19,_T1A);
	    }
	  }
	}goto _TL9C;
	_TL9B: _TL9C: _T1B = env;
	return _T1B;
      case 15: 
	if (ts == 0) { goto _TL9F;
	}else { goto _TLA0;
	}
	_TLA0: _T1C = ts;
	_T1D = _T1C->tl;
	if (_T1D != 0) { goto _TL9F;
	}else { goto _TL9D;
	}
	_TL9F: { struct Cyc_Warn_String_Warn_Warg_struct _TD1;
	  _TD1.tag = 0;
	  _TD1.f1 = _tag_fat("aquals expects a single argument",sizeof(char),
			     33U);
	  _T1E = _TD1;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _TD1 = _T1E;
	  void * _TD2[1];
	  _TD2[0] = &_TD1;
	  _T20 = Cyc_Warn_impos2;
	  { int (* _TD3)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T20;
	    _T1F = _TD3;
	  }_T21 = _tag_fat(_TD2,sizeof(void *),1);
	  _T1F(_T21);
	}goto _TL9E;
	_TL9D: _TL9E: _T22 = env;
	_T23 = &Cyc_Kinds_ak;
	_T24 = (struct Cyc_Absyn_Kind *)_T23;
	_T25 = ts;
	_T26 = _T25->hd;
	_T27 = Cyc_Tctyp_i_check_type(_T22,_T24,_T26,0,0);
	return _T27;
      case 17: 
	_T28 = Cyc_List_length(ts);
	if (_T28 == 2) { goto _TLA1;
	}
	{ struct Cyc_Warn_String_Warn_Warg_struct _TD1;
	  _TD1.tag = 0;
	  _TD1.f1 = _tag_fat("aquals expects two arguments",sizeof(char),
			     29U);
	  _T29 = _TD1;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _TD1 = _T29;
	  void * _TD2[1];
	  _TD2[0] = &_TD1;
	  _T2B = Cyc_Warn_impos2;
	  { int (* _TD3)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T2B;
	    _T2A = _TD3;
	  }_T2C = _tag_fat(_TD2,sizeof(void *),1);
	  _T2A(_T2C);
	}goto _TLA2;
	_TLA1: _TLA2: _T2D = env;
	_T2E = &Cyc_Kinds_aqk;
	_T2F = (struct Cyc_Absyn_Kind *)_T2E;
	_T30 = _check_null(ts);
	_T31 = _T30->hd;
	env = Cyc_Tctyp_i_check_type(_T2D,_T2F,_T31,0,0);
	_T32 = env;
	_T33 = _T32.te;
	_T34 = Cyc_Tcenv_curr_aquals_bounds(_T33);
	_T35 = ts;
	_T36 = _T35->hd;
	{ void * ctx_bnd = Cyc_Tcutil_lookup_aquals_opt(_T34,_T36);
	  _T37 = ctx_bnd;
	  _T38 = (unsigned int)_T37;
	  if (! _T38) { goto _TLA3;
	  }
	  _T39 = ts;
	  _T3A = _T39->tl;
	  _T3B = _check_null(_T3A);
	  _T3C = ctx_bnd;
	  _T3B->hd = (void *)_T3C;
	  goto _TLA4;
	  _TLA3: _T3D = env;
	  _T3E = &Cyc_Kinds_aqk;
	  _T3F = (struct Cyc_Absyn_Kind *)_T3E;
	  _T40 = ts;
	  _T41 = _T40->tl;
	  _T42 = _check_null(_T41);
	  _T43 = _T42->hd;
	  env = Cyc_Tctyp_i_check_type(_T3D,_T3F,_T43,0,0);
	  _TLA4: { struct Cyc_List_List * _TD1 = _cycalloc(sizeof(struct Cyc_List_List));
	    { struct _tuple16 * _TD2 = _cycalloc(sizeof(struct _tuple16));
	      _TD2->f0 = apptype;
	      _TD2->f1 = 0;
	      _T45 = (struct _tuple16 *)_TD2;
	    }_TD1->hd = _T45;
	    _T46 = env;
	    _TD1->tl = _T46.free_qualvars;
	    _T44 = (struct Cyc_List_List *)_TD1;
	  }env.free_qualvars = _T44;
	  _T47 = env;
	  return _T47;
	}
      case 3: 
	_TLA8: if (ts != 0) { goto _TLA6;
	}else { goto _TLA7;
	}
	_TLA6: _T48 = env;
	_T49 = &Cyc_Kinds_mk;
	_T4A = (struct Cyc_Absyn_Kind *)_T49;
	_T4B = ts;
	_T4C = _T4B->hd;
	env = Cyc_Tctyp_i_check_type(_T48,_T4A,_T4C,1,1);
	_T4D = ts;
	ts = _T4D->tl;
	goto _TLA8;
	_TLA7: _T4E = env;
	return _T4E;
      case 9: 
	_TLAC: if (ts != 0) { goto _TLAA;
	}else { goto _TLAB;
	}
	_TLAA: _T4F = env;
	_T50 = &Cyc_Kinds_ek;
	_T51 = (struct Cyc_Absyn_Kind *)_T50;
	_T52 = ts;
	_T53 = _T52->hd;
	env = Cyc_Tctyp_i_check_type(_T4F,_T51,_T53,1,1);
	_T54 = ts;
	ts = _T54->tl;
	goto _TLAC;
	_TLAB: _T55 = env;
	return _T55;
      case 19: 
	_T56 = c;
	{ struct Cyc_Absyn_EnumCon_Absyn_TyCon_struct * _TD1 = (struct Cyc_Absyn_EnumCon_Absyn_TyCon_struct *)_T56;
	  _TD0 = _TD1->f1;
	  _T57 = c;
	  _T58 = (struct Cyc_Absyn_EnumCon_Absyn_TyCon_struct *)_T57;
	  _T59 = &_T58->f2;
	  _TCF = (struct Cyc_Absyn_Enumdecl * *)_T59;
	}{ struct _tuple1 * n = _TD0;
	  struct Cyc_Absyn_Enumdecl * * edp = (struct Cyc_Absyn_Enumdecl * *)_TCF;
	  if (ts == 0) { goto _TLAD;
	  }
	  { struct Cyc_Warn_String_Warn_Warg_struct _TD1;
	    _TD1.tag = 0;
	    _TD1.f1 = _tag_fat("enum applied to argument(s)",sizeof(char),
			       28U);
	    _T5A = _TD1;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _TD1 = _T5A;
	    void * _TD2[1];
	    _TD2[0] = &_TD1;
	    _T5C = Cyc_Warn_impos2;
	    { int (* _TD3)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T5C;
	      _T5B = _TD3;
	    }_T5D = _tag_fat(_TD2,sizeof(void *),1);
	    _T5B(_T5D);
	  }goto _TLAE;
	  _TLAD: _TLAE: _T5E = edp;
	  _T5F = *_T5E;
	  if (_T5F == 0) { goto _TLB1;
	  }else { goto _TLB2;
	  }
	  _TLB2: _T60 = edp;
	  _T61 = *_T60;
	  _T62 = _T61->fields;
	  if (_T62 == 0) { goto _TLB1;
	  }else { goto _TLAF;
	  }
	  _TLB1: { struct _handler_cons _TD1;
	    _T63 = &_TD1;
	    _push_handler(_T63);
	    { int _TD2 = 0;
	      _T64 = setjmp(_TD1.handler);
	      if (! _T64) { goto _TLB3;
	      }
	      _TD2 = 1;
	      goto _TLB4;
	      _TLB3: _TLB4: if (_TD2) { goto _TLB5;
	      }else { goto _TLB7;
	      }
	      _TLB7: _T65 = edp;
	      _T66 = Cyc_Tcenv_lookup_enumdecl(te,loc,n);
	      *_T65 = *_T66;
	      _pop_handler();
	      goto _TLB6;
	      _TLB5: _T67 = Cyc_Core_get_exn_thrown();
	      { void * _TD3 = (void *)_T67;
		void * _TD4;
		_T68 = (struct Cyc_Dict_Absent_exn_struct *)_TD3;
		_T69 = _T68->tag;
		_T6A = Cyc_Dict_Absent;
		if (_T69 != _T6A) { goto _TLB8;
		}
		_T6B = te;
		_T6C = loc;
		{ struct Cyc_Absyn_Enumdecl * _TD5 = _cycalloc(sizeof(struct Cyc_Absyn_Enumdecl));
		  _TD5->sc = 3U;
		  _TD5->name = n;
		  _TD5->fields = 0;
		  _T6D = (struct Cyc_Absyn_Enumdecl *)_TD5;
		}Cyc_Tc_tcEnumdecl(_T6B,_T6C,_T6D);
		_T6E = edp;
		_T6F = Cyc_Tcenv_lookup_enumdecl(te,loc,n);
		*_T6E = *_T6F;
		goto _LL36;
		_TLB8: _TD4 = _TD3;
		{ void * exn = _TD4;
		  _rethrow(exn);
		}_LL36: ;
	      }_TLB6: ;
	    }
	  }goto _TLB0;
	  _TLAF: _TLB0: _T70 = env;
	  return _T70;
	}
      case 20: 
	_T71 = c;
	{ struct Cyc_Absyn_AnonEnumCon_Absyn_TyCon_struct * _TD1 = (struct Cyc_Absyn_AnonEnumCon_Absyn_TyCon_struct *)_T71;
	  _TD0 = _TD1->f1;
	}{ struct Cyc_List_List * fs = _TD0;
	  if (ts == 0) { goto _TLBA;
	  }
	  { struct Cyc_Warn_String_Warn_Warg_struct _TD1;
	    _TD1.tag = 0;
	    _TD1.f1 = _tag_fat("enum applied to argument(s)",sizeof(char),
			       28U);
	    _T72 = _TD1;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _TD1 = _T72;
	    void * _TD2[1];
	    _TD2[0] = &_TD1;
	    _T74 = Cyc_Warn_impos2;
	    { int (* _TD3)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T74;
	      _T73 = _TD3;
	    }_T75 = _tag_fat(_TD2,sizeof(void *),1);
	    _T73(_T75);
	  }goto _TLBB;
	  _TLBA: _TLBB: { struct Cyc_List_List * prev_fields = 0;
	    unsigned int tag_count = 0U;
	    _TLBF: if (fs != 0) { goto _TLBD;
	    }else { goto _TLBE;
	    }
	    _TLBD: _T76 = fs;
	    _T77 = _T76->hd;
	    { struct Cyc_Absyn_Enumfield * f = (struct Cyc_Absyn_Enumfield *)_T77;
	      _T79 = Cyc_List_mem;
	      { long (* _TD1)(int (*)(struct _fat_ptr *,struct _fat_ptr *),
			      struct Cyc_List_List *,struct _fat_ptr *) = (long (*)(int (*)(struct _fat_ptr *,
											    struct _fat_ptr *),
										    struct Cyc_List_List *,
										    struct _fat_ptr *))_T79;
		_T78 = _TD1;
	      }_T7A = Cyc_strptrcmp;
	      _T7B = prev_fields;
	      _T7C = f;
	      _T7D = _T7C->name;
	      _T7E = *_T7D;
	      _T7F = _T7E.f1;
	      _T80 = _T78(_T7A,_T7B,_T7F);
	      if (! _T80) { goto _TLC0;
	      }
	      { struct Cyc_Warn_String_Warn_Warg_struct _TD1;
		_TD1.tag = 0;
		_TD1.f1 = _tag_fat("duplicate enum field name ",sizeof(char),
				   27U);
		_T81 = _TD1;
	      }{ struct Cyc_Warn_String_Warn_Warg_struct _TD1 = _T81;
		{ struct Cyc_Warn_Qvar_Warn_Warg_struct _TD2;
		  _TD2.tag = 1;
		  _T83 = f;
		  _TD2.f1 = _T83->name;
		  _T82 = _TD2;
		}{ struct Cyc_Warn_Qvar_Warn_Warg_struct _TD2 = _T82;
		  void * _TD3[2];
		  _TD3[0] = &_TD1;
		  _TD3[1] = &_TD2;
		  _T84 = f;
		  _T85 = _T84->loc;
		  _T86 = _tag_fat(_TD3,sizeof(void *),2);
		  Cyc_Warn_err2(_T85,_T86);
		}
	      }goto _TLC1;
	      _TLC0: { struct Cyc_List_List * _TD1 = _cycalloc(sizeof(struct Cyc_List_List));
		_T88 = f;
		_T89 = _T88->name;
		_T8A = *_T89;
		_TD1->hd = _T8A.f1;
		_TD1->tl = prev_fields;
		_T87 = (struct Cyc_List_List *)_TD1;
	      }prev_fields = _T87;
	      _TLC1: _T8B = f;
	      _T8C = _T8B->tag;
	      if (_T8C != 0) { goto _TLC2;
	      }
	      _T8D = f;
	      _T8E = tag_count;
	      _T8F = f;
	      _T90 = _T8F->loc;
	      _T8D->tag = Cyc_Absyn_uint_exp(_T8E,_T90);
	      goto _TLC3;
	      _TLC2: _T91 = f;
	      _T92 = _T91->tag;
	      _T93 = Cyc_Tcutil_is_const_exp(_T92);
	      if (_T93) { goto _TLC4;
	      }else { goto _TLC6;
	      }
	      _TLC6: { struct Cyc_Warn_String_Warn_Warg_struct _TD1;
		_TD1.tag = 0;
		_TD1.f1 = _tag_fat("enum field ",sizeof(char),12U);
		_T94 = _TD1;
	      }{ struct Cyc_Warn_String_Warn_Warg_struct _TD1 = _T94;
		{ struct Cyc_Warn_Qvar_Warn_Warg_struct _TD2;
		  _TD2.tag = 1;
		  _T96 = f;
		  _TD2.f1 = _T96->name;
		  _T95 = _TD2;
		}{ struct Cyc_Warn_Qvar_Warn_Warg_struct _TD2 = _T95;
		  { struct Cyc_Warn_String_Warn_Warg_struct _TD3;
		    _TD3.tag = 0;
		    _TD3.f1 = _tag_fat(": expression is not constant",sizeof(char),
				       29U);
		    _T97 = _TD3;
		  }{ struct Cyc_Warn_String_Warn_Warg_struct _TD3 = _T97;
		    void * _TD4[3];
		    _TD4[0] = &_TD1;
		    _TD4[1] = &_TD2;
		    _TD4[2] = &_TD3;
		    _T98 = loc;
		    _T99 = _tag_fat(_TD4,sizeof(void *),3);
		    Cyc_Warn_err2(_T98,_T99);
		  }
		}
	      }goto _TLC5;
	      _TLC4: _TLC5: _TLC3: _T9A = f;
	      _T9B = _T9A->tag;
	      _T9C = Cyc_Evexp_eval_const_uint_exp(_T9B);
	      _T9D = _T9C.f0;
	      tag_count = 1U + _T9D;
	    }_T9E = fs;
	    fs = _T9E->tl;
	    goto _TLBF;
	    _TLBE: _T9F = env;
	    return _T9F;
	  }
	}
      case 10: 
	_TA0 = env;
	_TA1 = &Cyc_Kinds_ak;
	_TA2 = (struct Cyc_Absyn_Kind *)_TA1;
	_TA3 = ts;
	_TA4 = _tag_fat("regions",sizeof(char),8U);
	_TA5 = Cyc_Tctyp_i_check_unary_app(_TA0,_TA2,_TA3,1,_TA4);
	return _TA5;
      case 4: 
	_TA6 = env;
	_TA7 = &Cyc_Kinds_ek;
	_TA8 = (struct Cyc_Absyn_Kind *)_TA7;
	_TA9 = ts;
	_TAA = _tag_fat("region_t",sizeof(char),9U);
	_TAB = Cyc_Tctyp_i_check_unary_app(_TA6,_TA8,_TA9,1,_TAA);
	return _TAB;
      case 18: 
	_TAC = env;
	_TAD = &Cyc_Kinds_aqk;
	_TAE = (struct Cyc_Absyn_Kind *)_TAD;
	_TAF = ts;
	_TB0 = _tag_fat("aqual_t",sizeof(char),8U);
	_TB1 = Cyc_Tctyp_i_check_unary_app(_TAC,_TAE,_TAF,1,_TB0);
	return _TB1;
      case 5: 
	_TB2 = env;
	_TB3 = &Cyc_Kinds_ik;
	_TB4 = (struct Cyc_Absyn_Kind *)_TB3;
	_TB5 = ts;
	_TB6 = _tag_fat("tag_t",sizeof(char),6U);
	_TB7 = Cyc_Tctyp_i_check_unary_app(_TB2,_TB4,_TB5,0,_TB6);
	return _TB7;
      case 13: 
	_TB8 = env;
	_TB9 = &Cyc_Kinds_ik;
	_TBA = (struct Cyc_Absyn_Kind *)_TB9;
	_TBB = ts;
	_TBC = _tag_fat("@thin",sizeof(char),6U);
	_TBD = Cyc_Tctyp_i_check_unary_app(_TB8,_TBA,_TBB,0,_TBC);
	return _TBD;
      case 24: 
	_TBE = c;
	{ struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct * _TD1 = (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct *)_TBE;
	  _TBF = c;
	  _TC0 = (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct *)_TBF;
	  _TC1 = &_TC0->f1;
	  _TD0 = (union Cyc_Absyn_AggrInfo *)_TC1;
	}{ union Cyc_Absyn_AggrInfo * info = _TD0;
	  _TC2 = Cyc_Tctyp_i_check_aggr(env,expected_kind,info,targsp,allow_abs_aggr);
	  return _TC2;
	}
      case 22: 
	_TC3 = c;
	{ struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct * _TD1 = (struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct *)_TC3;
	  _TC4 = c;
	  _TC5 = (struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct *)_TC4;
	  _TC6 = &_TC5->f1;
	  _TD0 = (union Cyc_Absyn_DatatypeInfo *)_TC6;
	}{ union Cyc_Absyn_DatatypeInfo * info = _TD0;
	  _TC7 = Cyc_Tctyp_i_check_datatype(env,expected_kind,info,targsp,
					    allow_abs_aggr);
	  return _TC7;
	}
      default: 
	_TC8 = c;
	{ struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct * _TD1 = (struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct *)_TC8;
	  _TC9 = c;
	  _TCA = (struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct *)_TC9;
	  _TCB = &_TCA->f1;
	  _TD0 = (union Cyc_Absyn_DatatypeFieldInfo *)_TCB;
	}{ union Cyc_Absyn_DatatypeFieldInfo * info = (union Cyc_Absyn_DatatypeFieldInfo *)_TD0;
	  _TCC = Cyc_Tctyp_i_check_datatype_field(env,expected_kind,info,
						  targsp,allow_abs_aggr);
	  return _TCC;
	}
      }
      ;
    }
  }
}
static int Cyc_Tctyp_bnd_qual_cmp(void * tvt1,void * tvt2) {
  struct _tuple0 _T0;
  void * _T1;
  int * _T2;
  unsigned int _T3;
  void * _T4;
  int * _T5;
  unsigned int _T6;
  void * _T7;
  void * _T8;
  int _T9;
  void * _TA;
  int * _TB;
  unsigned int _TC;
  void * _TD;
  void * _TE;
  int _TF;
  struct Cyc_Core_Opt * _T10;
  void * _T11;
  struct Cyc_Absyn_Kind * _T12;
  struct Cyc_Core_Opt * _T13;
  void * _T14;
  struct Cyc_Absyn_Kind * _T15;
  long _T16;
  void * _T17;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T18;
  void * _T19;
  int * _T1A;
  int _T1B;
  void * _T1C;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T1D;
  struct Cyc_List_List * _T1E;
  void * _T1F;
  int * _T20;
  unsigned int _T21;
  void * _T22;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T23;
  void * _T24;
  int * _T25;
  int _T26;
  void * _T27;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T28;
  struct Cyc_List_List * _T29;
  void * _T2A;
  struct Cyc_List_List * _T2B;
  void * _T2C;
  void * _T2D;
  struct Cyc_List_List * _T2E;
  void * _T2F;
  int _T30;
  void * _T31;
  int * _T32;
  unsigned int _T33;
  void * _T34;
  int * _T35;
  unsigned int _T36;
  struct Cyc_Warn_String_Warn_Warg_struct _T37;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T38;
  struct Cyc_Warn_String_Warn_Warg_struct _T39;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T3A;
  int (* _T3B)(struct _fat_ptr);
  void * (* _T3C)(struct _fat_ptr);
  struct _fat_ptr _T3D;
  { struct _tuple0 _T3E;
    _T3E.f0 = Cyc_Absyn_compress(tvt1);
    _T3E.f1 = Cyc_Absyn_compress(tvt2);
    _T0 = _T3E;
  }{ struct _tuple0 _T3E = _T0;
    int _T3F;
    int _T40;
    void * _T41;
    void * _T42;
    _T1 = _T3E.f0;
    _T2 = (int *)_T1;
    _T3 = *_T2;
    switch (_T3) {
    case 2: 
      _T4 = _T3E.f1;
      _T5 = (int *)_T4;
      _T6 = *_T5;
      switch (_T6) {
      case 2: 
	_T7 = _T3E.f0;
	{ struct Cyc_Absyn_VarType_Absyn_Type_struct * _T43 = (struct Cyc_Absyn_VarType_Absyn_Type_struct *)_T7;
	  _T42 = _T43->f1;
	}_T8 = _T3E.f1;
	{ struct Cyc_Absyn_VarType_Absyn_Type_struct * _T43 = (struct Cyc_Absyn_VarType_Absyn_Type_struct *)_T8;
	  _T41 = _T43->f1;
	}{ struct Cyc_Absyn_Tvar * tv1 = _T42;
	  struct Cyc_Absyn_Tvar * tv2 = _T41;
	  _T9 = Cyc_Absyn_tvar_cmp(tv1,tv2);
	  return _T9;
	}
      case 1: 
	goto _LLA;
      case 0: 
	_LL10: goto _LL12;
      default: 
	goto _LL13;
      }
      ;
    case 1: 
      _TA = _T3E.f1;
      _TB = (int *)_TA;
      _TC = *_TB;
      switch (_TC) {
      case 1: 
	_TD = _T3E.f0;
	{ struct Cyc_Absyn_Evar_Absyn_Type_struct * _T43 = (struct Cyc_Absyn_Evar_Absyn_Type_struct *)_TD;
	  _T42 = _T43->f1;
	  _T40 = _T43->f3;
	}_TE = _T3E.f1;
	{ struct Cyc_Absyn_Evar_Absyn_Type_struct * _T43 = (struct Cyc_Absyn_Evar_Absyn_Type_struct *)_TE;
	  _T41 = _T43->f1;
	  _T3F = _T43->f3;
	}{ struct Cyc_Core_Opt * k1 = _T42;
	  int i1 = _T40;
	  struct Cyc_Core_Opt * k2 = _T41;
	  int i2 = _T3F;
	  if (i1 != i2) { goto _TLCA;
	  }
	  _T10 = _check_null(k1);
	  _T11 = _T10->v;
	  _T12 = (struct Cyc_Absyn_Kind *)_T11;
	  _T13 = _check_null(k2);
	  _T14 = _T13->v;
	  _T15 = (struct Cyc_Absyn_Kind *)_T14;
	  _T16 = Cyc_Kinds_kind_eq(_T12,_T15);
	  if (! _T16) { goto _TLCA;
	  }
	  _TF = 0;
	  goto _TLCB;
	  _TLCA: _TF = 1;
	  _TLCB: return _TF;
	}
      case 2: 
	_LLA: goto _LLC;
      case 0: 
	_LLC: goto _LLE;
      default: 
	goto _LL13;
      }
      ;
    case 0: 
      _T17 = _T3E.f0;
      _T18 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T17;
      _T19 = _T18->f1;
      _T1A = (int *)_T19;
      _T1B = *_T1A;
      if (_T1B != 15) { goto _TLCC;
      }
      _T1C = _T3E.f0;
      _T1D = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T1C;
      _T1E = _T1D->f2;
      if (_T1E == 0) { goto _TLCE;
      }
      _T1F = _T3E.f1;
      _T20 = (int *)_T1F;
      _T21 = *_T20;
      switch (_T21) {
      case 0: 
	_T22 = _T3E.f1;
	_T23 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T22;
	_T24 = _T23->f1;
	_T25 = (int *)_T24;
	_T26 = *_T25;
	if (_T26 != 15) { goto _TLD1;
	}
	_T27 = _T3E.f1;
	_T28 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T27;
	_T29 = _T28->f2;
	if (_T29 == 0) { goto _TLD3;
	}
	_T2A = _T3E.f0;
	{ struct Cyc_Absyn_AppType_Absyn_Type_struct * _T43 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T2A;
	  _T2B = _T43->f2;
	  { struct Cyc_List_List _T44 = *_T2B;
	    _T2C = _T44.hd;
	    _T42 = (void *)_T2C;
	  }
	}_T2D = _T3E.f1;
	{ struct Cyc_Absyn_AppType_Absyn_Type_struct * _T43 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T2D;
	  _T2E = _T43->f2;
	  { struct Cyc_List_List _T44 = *_T2E;
	    _T2F = _T44.hd;
	    _T41 = (void *)_T2F;
	  }
	}{ void * tv11 = _T42;
	  void * tv21 = _T41;
	  _T30 = Cyc_Tctyp_bnd_qual_cmp(tv11,tv21);
	  return _T30;
	}_TLD3: goto _LL13;
	_TLD1: goto _LL13;
      case 1: 
	goto _LLD;
      case 2: 
	goto _LL11;
      default: 
	goto _LL13;
      }
      goto _TLCF;
      _TLCE: _T31 = _T3E.f1;
      _T32 = (int *)_T31;
      _T33 = *_T32;
      switch (_T33) {
      case 1: 
	goto _LLD;
      case 2: 
	goto _LL11;
      default: 
	goto _LL13;
      }
      _TLCF: goto _TLCD;
      _TLCC: _T34 = _T3E.f1;
      _T35 = (int *)_T34;
      _T36 = *_T35;
      switch (_T36) {
      case 1: 
	_LLD: _LLE: goto _LL10;
      case 2: 
	_LL11: _LL12: return 1;
      default: 
	goto _LL13;
      }
      _TLCD: ;
    default: 
      _LL13: { struct Cyc_Warn_String_Warn_Warg_struct _T43;
	_T43.tag = 0;
	_T43.f1 = _tag_fat("Expect only tvars, evars or aquals in qualifier bounds: ",
			   sizeof(char),57U);
	_T37 = _T43;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T43 = _T37;
	{ struct Cyc_Warn_Typ_Warn_Warg_struct _T44;
	  _T44.tag = 2;
	  _T44.f1 = tvt1;
	  _T38 = _T44;
	}{ struct Cyc_Warn_Typ_Warn_Warg_struct _T44 = _T38;
	  { struct Cyc_Warn_String_Warn_Warg_struct _T45;
	    _T45.tag = 0;
	    _T45.f1 = _tag_fat(",",sizeof(char),2U);
	    _T39 = _T45;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T45 = _T39;
	    { struct Cyc_Warn_Typ_Warn_Warg_struct _T46;
	      _T46.tag = 2;
	      _T46.f1 = tvt2;
	      _T3A = _T46;
	    }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T46 = _T3A;
	      void * _T47[4];
	      _T47[0] = &_T43;
	      _T47[1] = &_T44;
	      _T47[2] = &_T45;
	      _T47[3] = &_T46;
	      _T3C = Cyc_Warn_impos2;
	      { int (* _T48)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T3C;
		_T3B = _T48;
	      }_T3D = _tag_fat(_T47,sizeof(void *),4);
	      _T3B(_T3D);
	    }
	  }
	}
      }
    }
    ;
  }
}
static long Cyc_Tctyp_aqualvar_unconstrained(struct _tuple16 * t) {
  struct _tuple16 * _T0;
  struct _tuple16 _T1;
  void * _T2;
  int * _T3;
  int _T4;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T5;
  void * _T6;
  int * _T7;
  unsigned int _T8;
  struct Cyc_Warn_String_Warn_Warg_struct _T9;
  struct Cyc_Warn_Typ_Warn_Warg_struct _TA;
  struct _tuple16 * _TB;
  struct _tuple16 _TC;
  int (* _TD)(struct _fat_ptr);
  void * (* _TE)(struct _fat_ptr);
  struct _fat_ptr _TF;
  _T0 = t;
  _T1 = *_T0;
  _T2 = _T1.f0;
  { void * _T10 = Cyc_Absyn_compress(_T2);
    _T3 = (int *)_T10;
    _T4 = *_T3;
    if (_T4 != 0) { goto _TLD7;
    }
    _T5 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T10;
    _T6 = _T5->f1;
    _T7 = (int *)_T6;
    _T8 = *_T7;
    switch (_T8) {
    case 16: 
      return 0;
    case 17: 
      return 1;
    default: 
      goto _LL5;
    }
    goto _TLD8;
    _TLD7: _LL5: { struct Cyc_Warn_String_Warn_Warg_struct _T11;
      _T11.tag = 0;
      _T11.f1 = _tag_fat("Expect only Aqual types -- got ",sizeof(char),32U);
      _T9 = _T11;
    }{ struct Cyc_Warn_String_Warn_Warg_struct _T11 = _T9;
      { struct Cyc_Warn_Typ_Warn_Warg_struct _T12;
	_T12.tag = 2;
	_TB = t;
	_TC = *_TB;
	_T12.f1 = _TC.f0;
	_TA = _T12;
      }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T12 = _TA;
	void * _T13[2];
	_T13[0] = &_T11;
	_T13[1] = &_T12;
	_TE = Cyc_Warn_impos2;
	{ int (* _T14)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_TE;
	  _TD = _T14;
	}_TF = _tag_fat(_T13,sizeof(void *),2);
	_TD(_TF);
      }
    }_TLD8: ;
  }
}
static int Cyc_Tctyp_aqualsof_var_bnd(void * bndv,void * var) {
  void * _T0;
  int * _T1;
  int _T2;
  void * _T3;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T4;
  void * _T5;
  int * _T6;
  int _T7;
  void * _T8;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T9;
  struct Cyc_List_List * _TA;
  void * _TB;
  struct Cyc_List_List * _TC;
  void * _TD;
  int _TE;
  void * _TF;
  _T0 = bndv;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  if (_T2 != 0) { goto _TLDA;
  }
  _T3 = bndv;
  _T4 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T3;
  _T5 = _T4->f1;
  _T6 = (int *)_T5;
  _T7 = *_T6;
  if (_T7 != 15) { goto _TLDC;
  }
  _T8 = bndv;
  _T9 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T8;
  _TA = _T9->f2;
  if (_TA == 0) { goto _TLDE;
  }
  _TB = bndv;
  { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T10 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TB;
    _TC = _T10->f2;
    { struct Cyc_List_List _T11 = *_TC;
      _TD = _T11.hd;
      _TF = (void *)_TD;
    }
  }{ void * vv = _TF;
    _TE = Cyc_Tcutil_typecmp(var,vv);
    return _TE;
  }_TLDE: goto _LL3;
  _TLDC: goto _LL3;
  _TLDA: _LL3: return 1;
  ;
}
static void Cyc_Tctyp_constrain_vars(unsigned int loc,struct Cyc_Tctyp_CVTEnv env,
				     struct Cyc_List_List * vars,struct Cyc_List_List * * qb,
				     void * def,long make_ex_aliasable) {
  struct Cyc_List_List * _T0;
  void * _T1;
  long _T2;
  void * _T3;
  int * _T4;
  unsigned int _T5;
  void * _T6;
  struct Cyc_Absyn_Tvar * _T7;
  void * _T8;
  struct Cyc_Absyn_Tvar * _T9;
  struct Cyc_Absyn_Kind * _TA;
  struct Cyc_Core_Opt _TB;
  void * _TC;
  struct Cyc_Absyn_Kind * _TD;
  unsigned int _TE;
  struct Cyc_Core_Opt _TF;
  void * _T10;
  struct Cyc_Absyn_Kind * _T11;
  void * _T12;
  struct Cyc_Absyn_Evar_Absyn_Type_struct * _T13;
  struct Cyc_Core_Opt * _T14;
  void * _T15;
  struct Cyc_Core_Opt * _T16;
  void * _T17;
  struct Cyc_Absyn_Kind * _T18;
  enum Cyc_Absyn_KindQual _T19;
  int _T1A;
  struct Cyc_Absyn_Kind * _T1B;
  enum Cyc_Absyn_KindQual _T1C;
  int _T1D;
  struct Cyc_Absyn_Kind * _T1E;
  enum Cyc_Absyn_KindQual _T1F;
  int _T20;
  struct _handler_cons * _T21;
  int _T22;
  struct Cyc_List_List * * _T23;
  struct Cyc_List_List * _T24;
  void * _T25;
  long _T26;
  int _T27;
  struct Cyc_Warn_String_Warn_Warg_struct _T28;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T29;
  unsigned int _T2A;
  struct _fat_ptr _T2B;
  void * _T2C;
  struct Cyc_Core_Not_found_exn_struct * _T2D;
  char * _T2E;
  char * _T2F;
  long _T30;
  long _T31;
  struct Cyc_List_List * * _T32;
  struct Cyc_List_List * _T33;
  struct _tuple0 * _T34;
  struct Cyc_List_List * * _T35;
  struct Cyc_List_List * * _T36;
  struct Cyc_List_List * _T37;
  struct _tuple0 * _T38;
  struct Cyc_List_List * * _T39;
  struct Cyc_Absyn_Kind * _T3A;
  enum Cyc_Absyn_KindQual _T3B;
  int _T3C;
  struct _handler_cons * _T3D;
  int _T3E;
  struct Cyc_List_List * * _T3F;
  struct Cyc_List_List * _T40;
  void * _T41;
  long _T42;
  int _T43;
  struct Cyc_Warn_String_Warn_Warg_struct _T44;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T45;
  unsigned int _T46;
  struct _fat_ptr _T47;
  void * _T48;
  struct Cyc_Core_Not_found_exn_struct * _T49;
  char * _T4A;
  char * _T4B;
  long _T4C;
  long _T4D;
  struct Cyc_List_List * * _T4E;
  struct Cyc_List_List * _T4F;
  struct _tuple0 * _T50;
  struct Cyc_List_List * * _T51;
  struct Cyc_List_List * * _T52;
  struct Cyc_List_List * _T53;
  struct _tuple0 * _T54;
  struct Cyc_List_List * * _T55;
  void * _T56;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T57;
  void * _T58;
  int * _T59;
  int _T5A;
  void * _T5B;
  struct Cyc_List_List * _T5C;
  void * _T5D;
  int * _T5E;
  int _T5F;
  void * _T60;
  struct Cyc_Absyn_Tvar * _T61;
  void * _T62;
  unsigned int _T63;
  struct Cyc_Absyn_Tvar * _T64;
  struct _handler_cons * _T65;
  int _T66;
  struct Cyc_List_List * * _T67;
  struct Cyc_List_List * _T68;
  void * _T69;
  long _T6A;
  int _T6B;
  struct Cyc_Warn_String_Warn_Warg_struct _T6C;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T6D;
  unsigned int _T6E;
  struct _fat_ptr _T6F;
  struct Cyc_List_List * _T70;
  struct Cyc_List_List * _T71;
  struct Cyc_List_List * _T72;
  void * _T73;
  void * _T74;
  struct Cyc_Core_Not_found_exn_struct * _T75;
  char * _T76;
  char * _T77;
  int * _T78;
  unsigned int _T79;
  long _T7A;
  long _T7B;
  struct Cyc_List_List * * _T7C;
  struct Cyc_List_List * _T7D;
  struct _tuple0 * _T7E;
  struct Cyc_List_List * * _T7F;
  struct Cyc_List_List * _T80;
  struct Cyc_List_List * _T81;
  void * _T82;
  struct Cyc_List_List * * _T83;
  struct Cyc_List_List * _T84;
  struct _tuple0 * _T85;
  struct Cyc_List_List * * _T86;
  struct Cyc_List_List * _T87;
  struct Cyc_List_List * _T88;
  struct Cyc_List_List * _T89;
  void * _T8A;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T8B;
  void * _T8C;
  int * _T8D;
  int _T8E;
  struct Cyc_Warn_String_Warn_Warg_struct _T8F;
  int (* _T90)(struct _fat_ptr);
  void * (* _T91)(struct _fat_ptr);
  struct _fat_ptr _T92;
  struct Cyc_Warn_String_Warn_Warg_struct _T93;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T94;
  int (* _T95)(struct _fat_ptr);
  void * (* _T96)(struct _fat_ptr);
  struct _fat_ptr _T97;
  struct Cyc_List_List * _T98;
  _TLE3: if (vars != 0) { goto _TLE1;
  }else { goto _TLE2;
  }
  _TLE1: _T0 = vars;
  _T1 = _T0->hd;
  { struct _tuple16 * _T99 = (struct _tuple16 *)_T1;
    long _T9A;
    void * _T9B;
    { struct _tuple16 _T9C = *_T99;
      _T9B = _T9C.f0;
      _T9A = _T9C.f1;
    }{ void * v = _T9B;
      long existential = _T9A;
      _T2 = make_ex_aliasable;
      if (_T2) { goto _TLE4;
      }else { goto _TLE6;
      }
      _TLE6: existential = 0;
      goto _TLE5;
      _TLE4: _TLE5: { void * adef = def;
	long explicit_bound_set = 0;
	struct Cyc_List_List * _T9C;
	struct Cyc_Absyn_Kind * _T9D;
	struct Cyc_Absyn_Tvar * _T9E;
	_T3 = v;
	_T4 = (int *)_T3;
	_T5 = *_T4;
	switch (_T5) {
	case 2: 
	  _T6 = v;
	  { struct Cyc_Absyn_VarType_Absyn_Type_struct * _T9F = (struct Cyc_Absyn_VarType_Absyn_Type_struct *)_T6;
	    _T9E = _T9F->f1;
	  }{ struct Cyc_Absyn_Tvar * tv = _T9E;
	    _T7 = tv;
	    _T8 = _T7->aquals_bound;
	    if (_T8 == 0) { goto _TLE8;
	    }
	    _T9 = tv;
	    adef = _T9->aquals_bound;
	    explicit_bound_set = 1;
	    goto _TLE9;
	    _TLE8: _TLE9: { struct Cyc_Core_Opt ko = Cyc_Kinds_tvar_kind_opt(tv);
	      _TB = ko;
	      _TC = _TB.v;
	      _TD = (struct Cyc_Absyn_Kind *)_TC;
	      _TE = (unsigned int)_TD;
	      if (! _TE) { goto _TLEA;
	      }
	      _TF = ko;
	      _T10 = _TF.v;
	      _TA = (struct Cyc_Absyn_Kind *)_T10;
	      goto _TLEB;
	      _TLEA: _T11 = &Cyc_Kinds_ek;
	      _TA = (struct Cyc_Absyn_Kind *)_T11;
	      _TLEB: _T9D = _TA;
	      goto _LL7;
	    }
	  }
	case 1: 
	  _T12 = v;
	  _T13 = (struct Cyc_Absyn_Evar_Absyn_Type_struct *)_T12;
	  _T14 = _T13->f1;
	  if (_T14 == 0) { goto _TLEC;
	  }
	  _T15 = v;
	  { struct Cyc_Absyn_Evar_Absyn_Type_struct * _T9F = (struct Cyc_Absyn_Evar_Absyn_Type_struct *)_T15;
	    _T16 = _T9F->f1;
	    { struct Cyc_Core_Opt _TA0 = *_T16;
	      _T17 = _TA0.v;
	      _T9D = (struct Cyc_Absyn_Kind *)_T17;
	    }
	  }_LL7: { struct Cyc_Absyn_Kind * k = _T9D;
	    _T18 = k;
	    _T19 = _T18->kind;
	    _T1A = (int)_T19;
	    if (_T1A == 2) { goto _TLF0;
	    }else { goto _TLF2;
	    }
	    _TLF2: _T1B = k;
	    _T1C = _T1B->kind;
	    _T1D = (int)_T1C;
	    if (_T1D == 0) { goto _TLF0;
	    }else { goto _TLF1;
	    }
	    _TLF1: _T1E = k;
	    _T1F = _T1E->kind;
	    _T20 = (int)_T1F;
	    if (_T20 == 1) { goto _TLF0;
	    }else { goto _TLEE;
	    }
	    _TLF0: { struct _handler_cons _T9F;
	      _T21 = &_T9F;
	      _push_handler(_T21);
	      { int _TA0 = 0;
		_T22 = setjmp(_T9F.handler);
		if (! _T22) { goto _TLF3;
		}
		_TA0 = 1;
		goto _TLF4;
		_TLF3: _TLF4: if (_TA0) { goto _TLF5;
		}else { goto _TLF7;
		}
		_TLF7: _T23 = qb;
		_T24 = *_T23;
		_T25 = v;
		{ void * xbnd = Cyc_List_assoc_cmp(Cyc_Tctyp_aqualsof_var_bnd,
						   _T24,_T25);
		  _T26 = explicit_bound_set;
		  if (! _T26) { goto _TLF8;
		  }
		  _T27 = Cyc_Tcutil_typecmp(adef,xbnd);
		  if (! _T27) { goto _TLF8;
		  }
		  { struct Cyc_Warn_String_Warn_Warg_struct _TA1;
		    _TA1.tag = 0;
		    _TA1.f1 = _tag_fat("Inconsistent aqual bounds on type ",
				       sizeof(char),35U);
		    _T28 = _TA1;
		  }{ struct Cyc_Warn_String_Warn_Warg_struct _TA1 = _T28;
		    { struct Cyc_Warn_Typ_Warn_Warg_struct _TA2;
		      _TA2.tag = 2;
		      _TA2.f1 = v;
		      _T29 = _TA2;
		    }{ struct Cyc_Warn_Typ_Warn_Warg_struct _TA2 = _T29;
		      void * _TA3[2];
		      _TA3[0] = &_TA1;
		      _TA3[1] = &_TA2;
		      _T2A = loc;
		      _T2B = _tag_fat(_TA3,sizeof(void *),2);
		      Cyc_Warn_warn2(_T2A,_T2B);
		    }
		  }goto _TLF9;
		  _TLF8: _TLF9: ;
		}_pop_handler();
		goto _TLF6;
		_TLF5: _T2C = Cyc_Core_get_exn_thrown();
		{ void * _TA1 = (void *)_T2C;
		  void * _TA2;
		  _T2D = (struct Cyc_Core_Not_found_exn_struct *)_TA1;
		  _T2E = _T2D->tag;
		  _T2F = Cyc_Core_Not_found;
		  if (_T2E != _T2F) { goto _TLFA;
		  }
		  { void * aqt = Cyc_Absyn_aqualsof_type(v);
		    _T30 = existential;
		    if (! _T30) { goto _TLFC;
		    }
		    _T31 = explicit_bound_set;
		    if (_T31) { goto _TLFC;
		    }else { goto _TLFE;
		    }
		    _TLFE: _T32 = qb;
		    { struct Cyc_List_List * _TA3 = _cycalloc(sizeof(struct Cyc_List_List));
		      { struct _tuple0 * _TA4 = _cycalloc(sizeof(struct _tuple0));
			_TA4->f0 = aqt;
			_TA4->f1 = Cyc_Absyn_al_qual_type;
			_T34 = (struct _tuple0 *)_TA4;
		      }_TA3->hd = _T34;
		      _T35 = qb;
		      _TA3->tl = *_T35;
		      _T33 = (struct Cyc_List_List *)_TA3;
		    }*_T32 = _T33;
		    goto _TLFD;
		    _TLFC: _T36 = qb;
		    { struct Cyc_List_List * _TA3 = _cycalloc(sizeof(struct Cyc_List_List));
		      { struct _tuple0 * _TA4 = _cycalloc(sizeof(struct _tuple0));
			_TA4->f0 = aqt;
			_TA4->f1 = adef;
			_T38 = (struct _tuple0 *)_TA4;
		      }_TA3->hd = _T38;
		      _T39 = qb;
		      _TA3->tl = *_T39;
		      _T37 = (struct Cyc_List_List *)_TA3;
		    }*_T36 = _T37;
		    _TLFD: goto _LLC;
		  }_TLFA: _TA2 = _TA1;
		  { void * exn = _TA2;
		    _rethrow(exn);
		  }_LLC: ;
		}_TLF6: ;
	      }
	    }goto _TLEF;
	    _TLEE: _T3A = k;
	    _T3B = _T3A->kind;
	    _T3C = (int)_T3B;
	    if (_T3C != 7) { goto _TLFF;
	    }
	    { struct _handler_cons _T9F;
	      _T3D = &_T9F;
	      _push_handler(_T3D);
	      { int _TA0 = 0;
		_T3E = setjmp(_T9F.handler);
		if (! _T3E) { goto _TL101;
		}
		_TA0 = 1;
		goto _TL102;
		_TL101: _TL102: if (_TA0) { goto _TL103;
		}else { goto _TL105;
		}
		_TL105: _T3F = qb;
		_T40 = *_T3F;
		_T41 = v;
		{ void * xbnd = Cyc_List_assoc_cmp(Cyc_Tctyp_bnd_qual_cmp,
						   _T40,_T41);
		  _T42 = explicit_bound_set;
		  if (! _T42) { goto _TL106;
		  }
		  _T43 = Cyc_Tcutil_typecmp(adef,xbnd);
		  if (! _T43) { goto _TL106;
		  }
		  { struct Cyc_Warn_String_Warn_Warg_struct _TA1;
		    _TA1.tag = 0;
		    _TA1.f1 = _tag_fat("Inconsistent aqual bounds on type ",
				       sizeof(char),35U);
		    _T44 = _TA1;
		  }{ struct Cyc_Warn_String_Warn_Warg_struct _TA1 = _T44;
		    { struct Cyc_Warn_Typ_Warn_Warg_struct _TA2;
		      _TA2.tag = 2;
		      _TA2.f1 = v;
		      _T45 = _TA2;
		    }{ struct Cyc_Warn_Typ_Warn_Warg_struct _TA2 = _T45;
		      void * _TA3[2];
		      _TA3[0] = &_TA1;
		      _TA3[1] = &_TA2;
		      _T46 = loc;
		      _T47 = _tag_fat(_TA3,sizeof(void *),2);
		      Cyc_Warn_warn2(_T46,_T47);
		    }
		  }goto _TL107;
		  _TL106: _TL107: ;
		}_pop_handler();
		goto _TL104;
		_TL103: _T48 = Cyc_Core_get_exn_thrown();
		{ void * _TA1 = (void *)_T48;
		  void * _TA2;
		  _T49 = (struct Cyc_Core_Not_found_exn_struct *)_TA1;
		  _T4A = _T49->tag;
		  _T4B = Cyc_Core_Not_found;
		  if (_T4A != _T4B) { goto _TL108;
		  }
		  _T4C = existential;
		  if (! _T4C) { goto _TL10A;
		  }
		  _T4D = explicit_bound_set;
		  if (_T4D) { goto _TL10A;
		  }else { goto _TL10C;
		  }
		  _TL10C: _T4E = qb;
		  { struct Cyc_List_List * _TA3 = _cycalloc(sizeof(struct Cyc_List_List));
		    { struct _tuple0 * _TA4 = _cycalloc(sizeof(struct _tuple0));
		      _TA4->f0 = v;
		      _TA4->f1 = Cyc_Absyn_al_qual_type;
		      _T50 = (struct _tuple0 *)_TA4;
		    }_TA3->hd = _T50;
		    _T51 = qb;
		    _TA3->tl = *_T51;
		    _T4F = (struct Cyc_List_List *)_TA3;
		  }*_T4E = _T4F;
		  goto _TL10B;
		  _TL10A: _T52 = qb;
		  { struct Cyc_List_List * _TA3 = _cycalloc(sizeof(struct Cyc_List_List));
		    { struct _tuple0 * _TA4 = _cycalloc(sizeof(struct _tuple0));
		      _TA4->f0 = v;
		      _TA4->f1 = adef;
		      _T54 = (struct _tuple0 *)_TA4;
		    }_TA3->hd = _T54;
		    _T55 = qb;
		    _TA3->tl = *_T55;
		    _T53 = (struct Cyc_List_List *)_TA3;
		  }*_T52 = _T53;
		  _TL10B: goto _LL11;
		  _TL108: _TA2 = _TA1;
		  { void * exn = _TA2;
		    _rethrow(exn);
		  }_LL11: ;
		}_TL104: ;
	      }
	    }goto _TL100;
	    _TLFF: _TL100: _TLEF: goto _LL3;
	  }_TLEC: goto _LLA;
	case 0: 
	  _T56 = v;
	  _T57 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T56;
	  _T58 = _T57->f1;
	  _T59 = (int *)_T58;
	  _T5A = *_T59;
	  if (_T5A != 17) { goto _TL10D;
	  }
	  _T5B = v;
	  { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T9F = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T5B;
	    _T9C = _T9F->f2;
	  }{ struct Cyc_List_List * tv_bnd = _T9C;
	    _T5C = _check_null(tv_bnd);
	    { void * tv = _T5C->hd;
	      { struct Cyc_Absyn_Tvar * _T9F;
		_T5D = tv;
		_T5E = (int *)_T5D;
		_T5F = *_T5E;
		if (_T5F != 2) { goto _TL10F;
		}
		_T60 = tv;
		{ struct Cyc_Absyn_VarType_Absyn_Type_struct * _TA0 = (struct Cyc_Absyn_VarType_Absyn_Type_struct *)_T60;
		  _T9F = _TA0->f1;
		}{ struct Cyc_Absyn_Tvar * tv = _T9F;
		  _T61 = tv;
		  _T62 = _T61->aquals_bound;
		  _T63 = (unsigned int)_T62;
		  if (! _T63) { goto _TL111;
		  }
		  _T64 = tv;
		  adef = _T64->aquals_bound;
		  explicit_bound_set = 1;
		  goto _TL112;
		  _TL111: _TL112: goto _LL16;
		}_TL10F: goto _LL16;
		_LL16: ;
	      }{ struct _handler_cons _T9F;
		_T65 = &_T9F;
		_push_handler(_T65);
		{ int _TA0 = 0;
		  _T66 = setjmp(_T9F.handler);
		  if (! _T66) { goto _TL113;
		  }
		  _TA0 = 1;
		  goto _TL114;
		  _TL113: _TL114: if (_TA0) { goto _TL115;
		  }else { goto _TL117;
		  }
		  _TL117: _T67 = qb;
		  _T68 = *_T67;
		  _T69 = tv;
		  { void * x_bnd = Cyc_List_assoc_cmp(Cyc_Tctyp_bnd_qual_cmp,
						      _T68,_T69);
		    _T6A = explicit_bound_set;
		    if (! _T6A) { goto _TL118;
		    }
		    _T6B = Cyc_Tcutil_typecmp(x_bnd,adef);
		    if (! _T6B) { goto _TL118;
		    }
		    { struct Cyc_Warn_String_Warn_Warg_struct _TA1;
		      _TA1.tag = 0;
		      _TA1.f1 = _tag_fat("Inconsistent aqual bounds on type ",
					 sizeof(char),35U);
		      _T6C = _TA1;
		    }{ struct Cyc_Warn_String_Warn_Warg_struct _TA1 = _T6C;
		      { struct Cyc_Warn_Typ_Warn_Warg_struct _TA2;
			_TA2.tag = 2;
			_TA2.f1 = v;
			_T6D = _TA2;
		      }{ struct Cyc_Warn_Typ_Warn_Warg_struct _TA2 = _T6D;
			void * _TA3[2];
			_TA3[0] = &_TA1;
			_TA3[1] = &_TA2;
			_T6E = loc;
			_T6F = _tag_fat(_TA3,sizeof(void *),2);
			Cyc_Warn_warn2(_T6E,_T6F);
		      }
		    }goto _TL119;
		    _TL118: _TL119: _T70 = tv_bnd;
		    _T71 = _T70->tl;
		    _T72 = _check_null(_T71);
		    _T73 = x_bnd;
		    _T72->hd = (void *)_T73;
		  }_pop_handler();
		  goto _TL116;
		  _TL115: _T74 = Cyc_Core_get_exn_thrown();
		  { void * _TA1 = (void *)_T74;
		    void * _TA2;
		    _T75 = (struct Cyc_Core_Not_found_exn_struct *)_TA1;
		    _T76 = _T75->tag;
		    _T77 = Cyc_Core_Not_found;
		    if (_T76 != _T77) { goto _TL11A;
		    }
		    { void * _TA3 = Cyc_Absyn_compress(tv);
		      _T78 = (int *)_TA3;
		      _T79 = *_T78;
		      switch (_T79) {
		      case 1: 
			goto _LL24;
		      case 2: 
			_LL24: _T7A = existential;
			if (! _T7A) { goto _TL11D;
			}
			_T7B = explicit_bound_set;
			if (_T7B) { goto _TL11D;
			}else { goto _TL11F;
			}
			_TL11F: _T7C = qb;
			{ struct Cyc_List_List * _TA4 = _cycalloc(sizeof(struct Cyc_List_List));
			  { struct _tuple0 * _TA5 = _cycalloc(sizeof(struct _tuple0));
			    _TA5->f0 = tv;
			    _TA5->f1 = Cyc_Absyn_al_qual_type;
			    _T7E = (struct _tuple0 *)_TA5;
			  }_TA4->hd = _T7E;
			  _T7F = qb;
			  _TA4->tl = *_T7F;
			  _T7D = (struct Cyc_List_List *)_TA4;
			}*_T7C = _T7D;
			_T80 = tv_bnd;
			_T81 = _T80->tl;
			_T82 = Cyc_Absyn_al_qual_type;
			_T81->hd = (void *)_T82;
			goto _TL11E;
			_TL11D: _T83 = qb;
			{ struct Cyc_List_List * _TA4 = _cycalloc(sizeof(struct Cyc_List_List));
			  { struct _tuple0 * _TA5 = _cycalloc(sizeof(struct _tuple0));
			    _TA5->f0 = tv;
			    _TA5->f1 = adef;
			    _T85 = (struct _tuple0 *)_TA5;
			  }_TA4->hd = _T85;
			  _T86 = qb;
			  _TA4->tl = *_T86;
			  _T84 = (struct Cyc_List_List *)_TA4;
			}*_T83 = _T84;
			_T87 = tv_bnd;
			_T88 = _T87->tl;
			_T89 = _check_null(_T88);
			_T8A = adef;
			_T89->hd = (void *)_T8A;
			_TL11E: goto _LL20;
		      case 0: 
			_T8B = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TA3;
			_T8C = _T8B->f1;
			_T8D = (int *)_T8C;
			_T8E = *_T8D;
			if (_T8E != 15) { goto _TL120;
			}
			{ struct Cyc_Warn_String_Warn_Warg_struct _TA4;
			  _TA4.tag = 0;
			  _TA4.f1 = _tag_fat("aquals bounds must be present",
					     sizeof(char),30U);
			  _T8F = _TA4;
			}{ struct Cyc_Warn_String_Warn_Warg_struct _TA4 = _T8F;
			  void * _TA5[1];
			  _TA5[0] = &_TA4;
			  _T91 = Cyc_Warn_impos2;
			  { int (* _TA6)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T91;
			    _T90 = _TA6;
			  }_T92 = _tag_fat(_TA5,sizeof(void *),1);
			  _T90(_T92);
			}goto _TL121;
			_TL120: goto _LL27;
			_TL121: ;
		      default: 
			_LL27: goto _LL20;
		      }
		      _LL20: ;
		    }goto _LL1B;
		    _TL11A: _TA2 = _TA1;
		    { void * exn = _TA2;
		      _rethrow(exn);
		    }_LL1B: ;
		  }_TL116: ;
		}
	      }goto _LL3;
	    }
	  }_TL10D: goto _LLA;
	default: 
	  _LLA: { struct Cyc_Warn_String_Warn_Warg_struct _T9F;
	    _T9F.tag = 0;
	    _T9F.f1 = _tag_fat("Expect only tvars, evars and aqual_vars -- got ",
			       sizeof(char),48U);
	    _T93 = _T9F;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T9F = _T93;
	    { struct Cyc_Warn_Typ_Warn_Warg_struct _TA0;
	      _TA0.tag = 2;
	      _TA0.f1 = v;
	      _T94 = _TA0;
	    }{ struct Cyc_Warn_Typ_Warn_Warg_struct _TA0 = _T94;
	      void * _TA1[2];
	      _TA1[0] = &_T9F;
	      _TA1[1] = &_TA0;
	      _T96 = Cyc_Warn_impos2;
	      { int (* _TA2)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T96;
		_T95 = _TA2;
	      }_T97 = _tag_fat(_TA1,sizeof(void *),2);
	      _T95(_T97);
	    }
	  }goto _LL3;
	}
	_LL3: ;
      }
    }
  }_T98 = vars;
  vars = _T98->tl;
  goto _TLE3;
  _TLE2: ;
}
static struct _tuple16 * Cyc_Tctyp_tvar2type(struct _tuple15 * in) {
  struct _tuple15 * _T0;
  struct _tuple16 * _T1;
  long _T2;
  struct Cyc_Absyn_Tvar * _T3;
  _T0 = in;
  { struct _tuple15 _T4 = *_T0;
    _T3 = _T4.f0;
    _T2 = _T4.f1;
  }{ struct Cyc_Absyn_Tvar * tv = _T3;
    long b = _T2;
    void * t = Cyc_Absyn_var_type(tv);
    { struct _tuple16 * _T4 = _cycalloc(sizeof(struct _tuple16));
      _T4->f0 = t;
      _T4->f1 = b;
      _T1 = (struct _tuple16 *)_T4;
    }return _T1;
  }
}
static long Cyc_Tctyp_evar_unconstrained(struct _tuple16 * evb) {
  struct _tuple16 * _T0;
  struct _tuple16 _T1;
  void * _T2;
  int * _T3;
  int _T4;
  _T0 = evb;
  _T1 = *_T0;
  _T2 = _T1.f0;
  { void * _T5 = Cyc_Absyn_compress(_T2);
    _T3 = (int *)_T5;
    _T4 = *_T3;
    if (_T4 != 1) { goto _TL122;
    }
    return 1;
    _TL122: return 0;
    ;
  }
}
static void Cyc_Tctyp_update_qualifier_bounds(unsigned int loc,struct Cyc_Tctyp_CVTEnv env,
					      struct Cyc_List_List * flagged_tvars,
					      struct Cyc_List_List * * qb,
					      void * def) {
  struct Cyc_Tctyp_CVTEnv _T0;
  struct Cyc_Tctyp_CVTEnv _T1;
  unsigned int _T2;
  struct Cyc_Tctyp_CVTEnv _T3;
  struct Cyc_List_List * (* _T4)(struct _tuple16 * (*)(struct _tuple15 *),
				 struct Cyc_List_List *);
  struct Cyc_List_List * (* _T5)(void * (*)(void *),struct Cyc_List_List *);
  struct Cyc_List_List * _T6;
  struct Cyc_List_List * _T7;
  struct Cyc_List_List * * _T8;
  void * _T9;
  unsigned int _TA;
  struct Cyc_Tctyp_CVTEnv _TB;
  struct Cyc_List_List * (* _TC)(struct _tuple16 * (*)(struct _tuple15 *),
				 struct Cyc_List_List *);
  struct Cyc_List_List * (* _TD)(void * (*)(void *),struct Cyc_List_List *);
  struct Cyc_Tctyp_CVTEnv _TE;
  struct Cyc_List_List * _TF;
  struct Cyc_List_List * _T10;
  struct Cyc_List_List * * _T11;
  void * _T12;
  unsigned int _T13;
  struct Cyc_Tctyp_CVTEnv _T14;
  struct Cyc_List_List * (* _T15)(long (*)(struct _tuple16 *),struct Cyc_List_List *);
  struct Cyc_List_List * (* _T16)(long (*)(void *),struct Cyc_List_List *);
  struct Cyc_List_List * _T17;
  struct Cyc_List_List * _T18;
  struct Cyc_List_List * * _T19;
  void * _T1A;
  unsigned int _T1B;
  struct Cyc_Tctyp_CVTEnv _T1C;
  struct Cyc_List_List * (* _T1D)(long (*)(struct _tuple16 *),struct Cyc_List_List *);
  struct Cyc_List_List * (* _T1E)(long (*)(void *),struct Cyc_List_List *);
  struct Cyc_List_List * _T1F;
  struct Cyc_List_List * _T20;
  struct Cyc_List_List * * _T21;
  void * _T22;
  _T0 = env;
  { struct Cyc_List_List * freeqvs = _T0.free_qualvars;
    _T1 = env;
    { struct Cyc_List_List * freeevs = _T1.free_evars;
      _T2 = loc;
      _T3 = env;
      _T5 = Cyc_List_map;
      { struct Cyc_List_List * (* _T23)(struct _tuple16 * (*)(struct _tuple15 *),
					struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct _tuple16 * (*)(struct _tuple15 *),
											      struct Cyc_List_List *))_T5;
	_T4 = _T23;
      }_T6 = flagged_tvars;
      _T7 = _T4(Cyc_Tctyp_tvar2type,_T6);
      _T8 = qb;
      _T9 = def;
      Cyc_Tctyp_constrain_vars(_T2,_T3,_T7,_T8,_T9,1);
      _TA = loc;
      _TB = env;
      _TD = Cyc_List_map;
      { struct Cyc_List_List * (* _T23)(struct _tuple16 * (*)(struct _tuple15 *),
					struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct _tuple16 * (*)(struct _tuple15 *),
											      struct Cyc_List_List *))_TD;
	_TC = _T23;
      }_TE = env;
      _TF = _TE.free_vars;
      _T10 = _TC(Cyc_Tctyp_tvar2type,_TF);
      _T11 = qb;
      _T12 = def;
      Cyc_Tctyp_constrain_vars(_TA,_TB,_T10,_T11,_T12,0);
      _T13 = loc;
      _T14 = env;
      _T16 = Cyc_List_filter;
      { struct Cyc_List_List * (* _T23)(long (*)(struct _tuple16 *),struct Cyc_List_List *) = (struct Cyc_List_List * (*)(long (*)(struct _tuple16 *),
															  struct Cyc_List_List *))_T16;
	_T15 = _T23;
      }_T17 = freeevs;
      _T18 = _T15(Cyc_Tctyp_evar_unconstrained,_T17);
      _T19 = qb;
      _T1A = def;
      Cyc_Tctyp_constrain_vars(_T13,_T14,_T18,_T19,_T1A,0);
      _T1B = loc;
      _T1C = env;
      _T1E = Cyc_List_filter;
      { struct Cyc_List_List * (* _T23)(long (*)(struct _tuple16 *),struct Cyc_List_List *) = (struct Cyc_List_List * (*)(long (*)(struct _tuple16 *),
															  struct Cyc_List_List *))_T1E;
	_T1D = _T23;
      }_T1F = freeqvs;
      _T20 = _T1D(Cyc_Tctyp_aqualvar_unconstrained,_T1F);
      _T21 = qb;
      _T22 = def;
      Cyc_Tctyp_constrain_vars(_T1B,_T1C,_T20,_T21,_T22,0);
    }
  }
}
static long Cyc_Tctyp_ok_as_assn_exp(long * ok,struct Cyc_Absyn_Exp * e) {
  struct Cyc_Absyn_Exp * _T0;
  int * _T1;
  unsigned int _T2;
  long * _T3;
  long * _T4;
  long _T5;
  _T0 = e;
  { void * _T6 = _T0->r;
    _T1 = (int *)_T6;
    _T2 = *_T1;
    switch (_T2) {
    case 4: 
      goto _LL4;
    case 5: 
      _LL4: goto _LL6;
    case 10: 
      _LL6: goto _LL8;
    case 11: 
      _LL8: goto _LLA;
    case 16: 
      _LLA: goto _LLC;
    case 20: 
      _LLC: goto _LLE;
    case 22: 
      _LLE: goto _LL10;
    case 23: 
      _LL10: goto _LL12;
    case 33: 
      _LL12: goto _LL14;
    case 34: 
      _LL14: goto _LL16;
    case 39: 
      _LL16: _T3 = ok;
      *_T3 = 0;
      return 0;
    default: 
      _T4 = ok;
      _T5 = *_T4;
      return _T5;
    }
    ;
  }
}
static long Cyc_Tctyp_ok_as_assn_stmt(long * ok,struct Cyc_Absyn_Stmt * s) {
  long * _T0;
  _T0 = ok;
  *_T0 = 0;
  return 0;
}
static long Cyc_Tctyp_ok_as_assn(struct Cyc_Absyn_Exp * e) {
  void (* _T0)(long (*)(long *,struct Cyc_Absyn_Exp *),long (*)(long *,struct Cyc_Absyn_Stmt *),
	       long *,struct Cyc_Absyn_Exp *);
  void (* _T1)(long (*)(void *,struct Cyc_Absyn_Exp *),long (*)(void *,struct Cyc_Absyn_Stmt *),
	       void *,struct Cyc_Absyn_Exp *);
  long * _T2;
  struct Cyc_Absyn_Exp * _T3;
  long _T4;
  long ok = 1;
  _T1 = Cyc_Absyn_visit_exp;
  { void (* _T5)(long (*)(long *,struct Cyc_Absyn_Exp *),long (*)(long *,
								  struct Cyc_Absyn_Stmt *),
		 long *,struct Cyc_Absyn_Exp *) = (void (*)(long (*)(long *,
								     struct Cyc_Absyn_Exp *),
							    long (*)(long *,
								     struct Cyc_Absyn_Stmt *),
							    long *,struct Cyc_Absyn_Exp *))_T1;
    _T0 = _T5;
  }_T2 = &ok;
  _T3 = e;
  _T0(Cyc_Tctyp_ok_as_assn_exp,Cyc_Tctyp_ok_as_assn_stmt,_T2,_T3);
  _T4 = ok;
  return _T4;
}
static void Cyc_Tctyp_check_constrain_ptrbnd(unsigned int loc,void * t,struct Cyc_Absyn_Kind * expected_kind) {
  struct Cyc_Absyn_Kind * _T0;
  enum Cyc_Absyn_KindQual _T1;
  int _T2;
  int * _T3;
  int _T4;
  struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T5;
  void * * _T6;
  void * * _T7;
  void * _T8;
  long _T9;
  unsigned int _TA;
  void * * _TB;
  void * _TC;
  void * _TD;
  void * _TE;
  long _TF;
  struct Cyc_Warn_String_Warn_Warg_struct _T10;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T11;
  struct Cyc_Warn_String_Warn_Warg_struct _T12;
  struct Cyc_Warn_Kind_Warn_Warg_struct _T13;
  struct Cyc_Warn_String_Warn_Warg_struct _T14;
  struct Cyc_Warn_Kind_Warn_Warg_struct _T15;
  unsigned int _T16;
  struct _fat_ptr _T17;
  void * * _T18;
  void * _T19;
  void * _T1A;
  void * _T1B;
  _T0 = expected_kind;
  _T1 = _T0->kind;
  _T2 = (int)_T1;
  if (_T2 != 2) { goto _TL125;
  }
  { void * _T1C = Cyc_Absyn_compress(t);
    void * _T1D;
    _T3 = (int *)_T1C;
    _T4 = *_T3;
    if (_T4 != 4) { goto _TL127;
    }
    { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T1E = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T1C;
      _T5 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T1C;
      _T6 = &((_T5->f1).ptr_atts).bounds;
      _T1D = (void * *)_T6;
    }{ void * * b = (void * *)_T1D;
      _T7 = b;
      _T8 = *_T7;
      _T9 = Cyc_Tcutil_is_cvar_type(_T8);
      if (! _T9) { goto _TL129;
      }
      _TA = loc;
      _TB = b;
      _TC = *_TB;
      _TD = Cyc_Absyn_thinconst();
      _TE = Cyc_BansheeIf_equality_constraint(_TC,_TD);
      _TF = Cyc_BansheeIf_add_constraint(_TA,_TE);
      if (_TF) { goto _TL12B;
      }else { goto _TL12D;
      }
      _TL12D: { struct Cyc_Warn_String_Warn_Warg_struct _T1E;
	_T1E.tag = 0;
	_T1E.f1 = _tag_fat("type ",sizeof(char),6U);
	_T10 = _T1E;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T1E = _T10;
	{ struct Cyc_Warn_Typ_Warn_Warg_struct _T1F;
	  _T1F.tag = 2;
	  _T1F.f1 = t;
	  _T11 = _T1F;
	}{ struct Cyc_Warn_Typ_Warn_Warg_struct _T1F = _T11;
	  { struct Cyc_Warn_String_Warn_Warg_struct _T20;
	    _T20.tag = 0;
	    _T20.f1 = _tag_fat(" has kind ",sizeof(char),11U);
	    _T12 = _T20;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T20 = _T12;
	    { struct Cyc_Warn_Kind_Warn_Warg_struct _T21;
	      _T21.tag = 9;
	      _T21.f1 = Cyc_Tcutil_type_kind(t);
	      _T13 = _T21;
	    }{ struct Cyc_Warn_Kind_Warn_Warg_struct _T21 = _T13;
	      { struct Cyc_Warn_String_Warn_Warg_struct _T22;
		_T22.tag = 0;
		_T22.f1 = _tag_fat(" but as used here needs kind ",sizeof(char),
				   30U);
		_T14 = _T22;
	      }{ struct Cyc_Warn_String_Warn_Warg_struct _T22 = _T14;
		{ struct Cyc_Warn_Kind_Warn_Warg_struct _T23;
		  _T23.tag = 9;
		  _T23.f1 = expected_kind;
		  _T15 = _T23;
		}{ struct Cyc_Warn_Kind_Warn_Warg_struct _T23 = _T15;
		  void * _T24[6];
		  _T24[0] = &_T1E;
		  _T24[1] = &_T1F;
		  _T24[2] = &_T20;
		  _T24[3] = &_T21;
		  _T24[4] = &_T22;
		  _T24[5] = &_T23;
		  _T16 = loc;
		  _T17 = _tag_fat(_T24,sizeof(void *),6);
		  Cyc_Warn_err2(_T16,_T17);
		}
	      }
	    }
	  }
	}
      }goto _TL12C;
      _TL12B: _T18 = b;
      _T19 = *_T18;
      _T1A = Cyc_Absyn_compress(_T19);
      _T1B = Cyc_Absyn_bounds_one();
      if (_T1A != _T1B) { goto _TL12E;
      }
      goto _TL12F;
      _TL12E: _throw_assert();
      _TL12F: _TL12C: goto _TL12A;
      _TL129: _TL12A: goto _LL0;
    }_TL127: goto _LL0;
    _LL0: ;
  }goto _TL126;
  _TL125: _TL126: ;
}
 struct _tuple18 {
  enum Cyc_Absyn_Format_Type f0;
  void * f1;
};
 struct _tuple19 {
  struct Cyc_Absyn_Tvar * f0;
  void * f1;
};
static struct Cyc_Tctyp_CVTEnv Cyc_Tctyp_i_check_type(struct Cyc_Tctyp_CVTEnv env,
						      struct Cyc_Absyn_Kind * expected_kind,
						      void * t,long put_in_effect,
						      long allow_abs_aggr) {
  struct Cyc_Tctyp_CVTEnv _T0;
  struct Cyc_Tctyp_CVTEnv _T1;
  int * _T2;
  unsigned int _T3;
  void * _T4;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T5;
  struct Cyc_List_List * * _T6;
  struct Cyc_Absyn_Cvar_Absyn_Type_struct * _T7;
  struct Cyc_Core_Opt * * _T8;
  struct Cyc_Warn_String_Warn_Warg_struct _T9;
  struct Cyc_Warn_Typ_Warn_Warg_struct _TA;
  unsigned int _TB;
  struct _fat_ptr _TC;
  struct Cyc_Core_Opt * * _TD;
  struct Cyc_Core_Opt * _TE;
  struct Cyc_Absyn_Kind * _TF;
  struct Cyc_Core_Opt * * _T10;
  struct Cyc_Core_Opt * _T11;
  void * _T12;
  struct Cyc_Absyn_Kind * _T13;
  long _T14;
  struct Cyc_Core_Opt * * _T15;
  struct Cyc_Core_Opt * _T16;
  struct Cyc_Core_Opt * _T17;
  void * _T18;
  struct Cyc_Absyn_Kind * _T19;
  struct Cyc_Absyn_Kind * _T1A;
  long _T1B;
  struct Cyc_Core_Opt * * _T1C;
  struct Cyc_Absyn_Evar_Absyn_Type_struct * _T1D;
  struct Cyc_Core_Opt * * _T1E;
  struct Cyc_Absyn_Evar_Absyn_Type_struct * _T1F;
  void * * _T20;
  struct Cyc_Core_Opt * * _T21;
  struct Cyc_Core_Opt * _T22;
  struct Cyc_Absyn_Kind * _T23;
  struct Cyc_Core_Opt * * _T24;
  struct Cyc_Core_Opt * _T25;
  void * _T26;
  struct Cyc_Absyn_Kind * _T27;
  long _T28;
  struct Cyc_Core_Opt * * _T29;
  struct Cyc_Core_Opt * _T2A;
  struct Cyc_Core_Opt * _T2B;
  void * _T2C;
  struct Cyc_Absyn_Kind * _T2D;
  struct Cyc_Absyn_Kind * _T2E;
  long _T2F;
  struct Cyc_Core_Opt * * _T30;
  struct Cyc_Tctyp_CVTEnv _T31;
  long _T32;
  struct Cyc_Tctyp_CVTEnv _T33;
  long _T34;
  struct Cyc_Absyn_Kind * _T35;
  enum Cyc_Absyn_KindQual _T36;
  int _T37;
  struct Cyc_Tcenv_Tenv * _T38;
  long _T39;
  void * * _T3A;
  struct Cyc_Absyn_Kind * _T3B;
  enum Cyc_Absyn_KindQual _T3C;
  int _T3D;
  struct Cyc_Tcenv_Tenv * _T3E;
  long _T3F;
  void * * _T40;
  struct Cyc_Tctyp_CVTEnv _T41;
  long _T42;
  struct Cyc_Absyn_Kind * _T43;
  enum Cyc_Absyn_KindQual _T44;
  int _T45;
  struct Cyc_Tcenv_Tenv * _T46;
  long _T47;
  void * * _T48;
  struct Cyc_Tctyp_CVTEnv _T49;
  long _T4A;
  struct Cyc_Absyn_Kind * _T4B;
  enum Cyc_Absyn_KindQual _T4C;
  int _T4D;
  struct Cyc_Absyn_Kind * _T4E;
  enum Cyc_Absyn_KindQual _T4F;
  int _T50;
  struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct * _T51;
  void * _T52;
  void * * _T53;
  struct Cyc_Tctyp_CVTEnv _T54;
  struct Cyc_List_List * _T55;
  void * _T56;
  long _T57;
  struct Cyc_Absyn_Tvar * _T58;
  void * _T59;
  int * _T5A;
  int _T5B;
  struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct * _T5C;
  struct Cyc_Core_Opt * * _T5D;
  struct Cyc_Core_Opt * * _T5E;
  struct Cyc_Core_Opt * _T5F;
  struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct * _T60;
  unsigned int _T61;
  struct Cyc_Tctyp_CVTEnv _T62;
  struct Cyc_List_List * _T63;
  struct Cyc_Absyn_Tvar * _T64;
  struct Cyc_Tctyp_CVTEnv _T65;
  long _T66;
  struct Cyc_Tctyp_CVTEnv _T67;
  struct Cyc_List_List * _T68;
  struct Cyc_Absyn_Tvar * _T69;
  long _T6A;
  struct Cyc_Absyn_Tvar * _T6B;
  void * _T6C;
  int * _T6D;
  int _T6E;
  struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct * _T6F;
  struct Cyc_Core_Opt * * _T70;
  long _T71;
  struct Cyc_Core_Opt * * _T72;
  struct Cyc_Core_Opt * _T73;
  struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct * _T74;
  struct Cyc_Absyn_TypeDecl * _T75;
  struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct * _T76;
  void * * * _T77;
  void * _T78;
  void * _T79;
  int * _T7A;
  unsigned int _T7B;
  void * _T7C;
  struct Cyc_Tctyp_CVTEnv _T7D;
  struct Cyc_Tcenv_Tenv * _T7E;
  long _T7F;
  struct Cyc_Absyn_Aggrdecl * _T80;
  void * _T81;
  struct Cyc_Tctyp_CVTEnv _T82;
  struct Cyc_Tcenv_Tenv * _T83;
  long _T84;
  struct Cyc_Absyn_Enumdecl * _T85;
  void * _T86;
  void * * * _T87;
  void * * _T88;
  struct Cyc_Tctyp_CVTEnv _T89;
  struct Cyc_Absyn_PtrInfo _T8A;
  struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T8B;
  struct Cyc_Absyn_Tqual * _T8C;
  struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T8D;
  void * * _T8E;
  struct Cyc_Absyn_PtrInfo _T8F;
  struct Cyc_Absyn_PtrAtts _T90;
  struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T91;
  void * * _T92;
  struct Cyc_Absyn_PtrInfo _T93;
  struct Cyc_Absyn_PtrAtts _T94;
  struct Cyc_Absyn_PtrInfo _T95;
  struct Cyc_Absyn_PtrAtts _T96;
  struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T97;
  void * * _T98;
  void * * _T99;
  void * * _T9A;
  int * _T9B;
  int _T9C;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T9D;
  void * _T9E;
  int * _T9F;
  unsigned int _TA0;
  void * * _TA1;
  void * * _TA2;
  void * _TA3;
  void * * _TA4;
  void * _TA5;
  void * * _TA6;
  int * _TA7;
  int _TA8;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _TA9;
  void * _TAA;
  int * _TAB;
  int _TAC;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _TAD;
  struct Cyc_List_List * _TAE;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _TAF;
  struct Cyc_List_List * _TB0;
  struct Cyc_List_List * _TB1;
  void * _TB2;
  int * _TB3;
  int _TB4;
  struct Cyc_List_List * _TB5;
  struct Cyc_Warn_String_Warn_Warg_struct _TB6;
  unsigned int _TB7;
  struct _fat_ptr _TB8;
  void * * _TB9;
  struct Cyc_Tctyp_CVTEnv _TBA;
  struct Cyc_Absyn_Kind * _TBB;
  struct Cyc_Absyn_Kind * _TBC;
  void * _TBD;
  struct Cyc_Tctyp_CVTEnv _TBE;
  struct Cyc_Absyn_Kind * _TBF;
  struct Cyc_Absyn_Kind * _TC0;
  void * * _TC1;
  void * _TC2;
  struct Cyc_Tctyp_CVTEnv _TC3;
  struct Cyc_Absyn_Kind * _TC4;
  struct Cyc_Absyn_Kind * _TC5;
  void * _TC6;
  struct Cyc_Tctyp_CVTEnv _TC7;
  struct Cyc_Absyn_Kind * _TC8;
  struct Cyc_Absyn_Kind * _TC9;
  void * _TCA;
  struct Cyc_Tctyp_CVTEnv _TCB;
  struct Cyc_Absyn_Kind * _TCC;
  struct Cyc_Absyn_Kind * _TCD;
  void * * _TCE;
  void * _TCF;
  long _TD0;
  struct Cyc_Tctyp_CVTEnv _TD1;
  struct Cyc_Absyn_Kind * _TD2;
  struct Cyc_Absyn_Kind * _TD3;
  void * _TD4;
  void * * _TD5;
  int * _TD6;
  int _TD7;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _TD8;
  void * _TD9;
  int * _TDA;
  int _TDB;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _TDC;
  struct Cyc_List_List * _TDD;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _TDE;
  struct Cyc_List_List * _TDF;
  struct Cyc_List_List * _TE0;
  void * _TE1;
  int * _TE2;
  int _TE3;
  struct Cyc_List_List * _TE4;
  struct Cyc_Tctyp_CVTEnv _TE5;
  long _TE6;
  void * * _TE7;
  struct Cyc_List_List * _TE8;
  void * _TE9;
  struct Cyc_Tctyp_CVTEnv _TEA;
  struct Cyc_Absyn_Kind * _TEB;
  struct Cyc_Absyn_Kind * _TEC;
  void * * _TED;
  void * _TEE;
  struct Cyc_Absyn_Tqual * _TEF;
  struct Cyc_Tctyp_CVTEnv _TF0;
  unsigned int _TF1;
  struct Cyc_Absyn_Tqual * _TF2;
  long _TF3;
  void * _TF4;
  void * _TF5;
  void * _TF6;
  long _TF7;
  long _TF8;
  long _TF9;
  struct Cyc_Warn_String_Warn_Warg_struct _TFA;
  struct Cyc_Warn_Typ_Warn_Warg_struct _TFB;
  struct Cyc_Warn_String_Warn_Warg_struct _TFC;
  unsigned int _TFD;
  struct _fat_ptr _TFE;
  void * * _TFF;
  void * _T100;
  long _T101;
  void * _T102;
  void * * _T103;
  void * _T104;
  long _T105;
  long _T106;
  struct Cyc_Warn_String_Warn_Warg_struct _T107;
  unsigned int _T108;
  struct _fat_ptr _T109;
  struct Cyc_Tcenv_Tenv * _T10A;
  struct Cyc_Absyn_Exp * _T10B;
  long _T10C;
  struct Cyc_Warn_String_Warn_Warg_struct _T10D;
  unsigned int _T10E;
  struct _fat_ptr _T10F;
  struct Cyc_Tcenv_Tenv * _T110;
  struct Cyc_Absyn_Exp * _T111;
  struct Cyc_Absyn_ArrayInfo _T112;
  struct Cyc_Absyn_ArrayType_Absyn_Type_struct * _T113;
  struct Cyc_Absyn_Tqual * _T114;
  struct Cyc_Absyn_ArrayType_Absyn_Type_struct * _T115;
  struct Cyc_Absyn_Exp * * _T116;
  struct Cyc_Absyn_ArrayInfo _T117;
  struct Cyc_Absyn_ArrayInfo _T118;
  struct Cyc_Absyn_Exp * * _T119;
  struct Cyc_Tctyp_CVTEnv _T11A;
  struct Cyc_Absyn_Kind * _T11B;
  struct Cyc_Absyn_Kind * _T11C;
  void * _T11D;
  long _T11E;
  struct Cyc_Absyn_Tqual * _T11F;
  unsigned int _T120;
  struct Cyc_Absyn_Tqual * _T121;
  long _T122;
  void * _T123;
  long _T124;
  long _T125;
  struct Cyc_Warn_String_Warn_Warg_struct _T126;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T127;
  struct Cyc_Warn_String_Warn_Warg_struct _T128;
  unsigned int _T129;
  struct _fat_ptr _T12A;
  long _T12B;
  struct Cyc_Warn_String_Warn_Warg_struct _T12C;
  unsigned int _T12D;
  struct _fat_ptr _T12E;
  struct Cyc_Absyn_Exp * * _T12F;
  struct Cyc_Tcenv_Tenv * _T130;
  struct Cyc_Absyn_Exp * _T131;
  long _T132;
  struct Cyc_Warn_String_Warn_Warg_struct _T133;
  unsigned int _T134;
  struct _fat_ptr _T135;
  long _T136;
  long _T137;
  struct Cyc_Warn_String_Warn_Warg_struct _T138;
  unsigned int _T139;
  struct _fat_ptr _T13A;
  struct Cyc_Absyn_FnType_Absyn_Type_struct * _T13B;
  struct Cyc_List_List * * _T13C;
  struct Cyc_Absyn_FnType_Absyn_Type_struct * _T13D;
  void * * _T13E;
  struct Cyc_Absyn_FnType_Absyn_Type_struct * _T13F;
  struct Cyc_Absyn_Tqual * _T140;
  struct Cyc_Absyn_FnInfo _T141;
  struct Cyc_Absyn_FnInfo _T142;
  struct Cyc_Absyn_FnInfo _T143;
  struct Cyc_Absyn_FnInfo _T144;
  struct Cyc_Absyn_FnType_Absyn_Type_struct * _T145;
  struct Cyc_List_List * * _T146;
  struct Cyc_Absyn_FnInfo _T147;
  struct Cyc_Absyn_FnInfo _T148;
  struct Cyc_Absyn_FnType_Absyn_Type_struct * _T149;
  struct Cyc_AssnDef_ExistAssnFn * * _T14A;
  struct Cyc_Absyn_FnInfo _T14B;
  struct Cyc_Absyn_FnType_Absyn_Type_struct * _T14C;
  struct Cyc_AssnDef_ExistAssnFn * * _T14D;
  struct Cyc_Absyn_FnInfo _T14E;
  struct Cyc_Absyn_FnType_Absyn_Type_struct * _T14F;
  struct Cyc_AssnDef_ExistAssnFn * * _T150;
  struct Cyc_Absyn_FnInfo _T151;
  struct Cyc_Absyn_FnType_Absyn_Type_struct * _T152;
  struct Cyc_AssnDef_ExistAssnFn * * _T153;
  struct Cyc_Absyn_FnInfo _T154;
  struct Cyc_Absyn_FnInfo _T155;
  struct Cyc_Absyn_FnInfo _T156;
  struct Cyc_List_List * _T157;
  int * _T158;
  unsigned int _T159;
  struct Cyc_List_List * _T15A;
  void * _T15B;
  long _T15C;
  struct Cyc_Warn_String_Warn_Warg_struct _T15D;
  struct Cyc_Warn_Attribute_Warn_Warg_struct _T15E;
  struct Cyc_List_List * _T15F;
  unsigned int _T160;
  struct _fat_ptr _T161;
  struct Cyc_List_List * _T162;
  int _T163;
  int _T164;
  int _T165;
  struct Cyc_Warn_String_Warn_Warg_struct _T166;
  unsigned int _T167;
  struct _fat_ptr _T168;
  struct Cyc_Warn_String_Warn_Warg_struct _T169;
  unsigned int _T16A;
  struct _fat_ptr _T16B;
  unsigned int _T16C;
  struct Cyc_List_List * * _T16D;
  struct Cyc_List_List * _T16E;
  struct Cyc_List_List * * _T16F;
  struct Cyc_List_List * _T170;
  void * _T171;
  struct Cyc_Absyn_Tvar * _T172;
  struct Cyc_Tctyp_CVTEnv _T173;
  struct Cyc_List_List * _T174;
  struct Cyc_List_List * _T175;
  void * _T176;
  struct Cyc_Absyn_Tvar * _T177;
  struct Cyc_List_List * _T178;
  void * _T179;
  struct Cyc_Absyn_Tvar * _T17A;
  void * _T17B;
  int * _T17C;
  int _T17D;
  struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct * _T17E;
  struct Cyc_Absyn_Kind * _T17F;
  struct Cyc_Absyn_Kind * _T180;
  enum Cyc_Absyn_KindQual _T181;
  struct Cyc_Warn_String_Warn_Warg_struct _T182;
  struct Cyc_Warn_Tvar_Warn_Warg_struct _T183;
  struct Cyc_List_List * _T184;
  void * _T185;
  unsigned int _T186;
  struct _fat_ptr _T187;
  struct Cyc_List_List * _T188;
  struct Cyc_Tctyp_CVTEnv _T189;
  struct Cyc_Tctyp_CVTEnv _T18A;
  struct Cyc_Tctyp_CVTEnv _T18B;
  struct Cyc_Tctyp_CVTEnv _T18C;
  struct Cyc_Absyn_Kind * _T18D;
  struct Cyc_Absyn_Kind * _T18E;
  void * _T18F;
  struct Cyc_Absyn_Tqual * _T190;
  unsigned int _T191;
  struct Cyc_Absyn_Tqual * _T192;
  long _T193;
  void * _T194;
  struct Cyc_List_List * _T195;
  void * _T196;
  struct _tuple9 * _T197;
  struct _tuple9 _T198;
  struct Cyc_Tctyp_CVTEnv _T199;
  struct Cyc_Absyn_Kind * _T19A;
  struct Cyc_Absyn_Kind * _T19B;
  void * _T19C;
  unsigned int _T19D;
  struct _tuple9 * _T19E;
  struct _tuple9 _T19F;
  struct Cyc_Absyn_Tqual _T1A0;
  long _T1A1;
  void * _T1A2;
  struct _tuple9 * _T1A3;
  long _T1A4;
  struct Cyc_Tctyp_CVTEnv _T1A5;
  struct Cyc_Absyn_Kind * _T1A6;
  struct Cyc_Absyn_Kind * _T1A7;
  void * _T1A8;
  struct Cyc_Core_Opt * _T1A9;
  struct Cyc_Core_Opt * _T1AA;
  void * _T1AB;
  void * _T1AC;
  struct Cyc_Tctyp_CVTEnv _T1AD;
  struct Cyc_Absyn_Kind * _T1AE;
  struct Cyc_Absyn_Kind * _T1AF;
  void * _T1B0;
  struct _tuple9 * _T1B1;
  struct Cyc_List_List * _T1B2;
  long _T1B3;
  struct Cyc_Warn_String_Warn_Warg_struct _T1B4;
  int (* _T1B5)(struct _fat_ptr);
  void * (* _T1B6)(struct _fat_ptr);
  struct _fat_ptr _T1B7;
  struct Cyc_Absyn_VarargInfo * _T1B8;
  struct Cyc_Tctyp_CVTEnv _T1B9;
  struct Cyc_Absyn_Kind * _T1BA;
  struct Cyc_Absyn_Kind * _T1BB;
  void * _T1BC;
  struct Cyc_Absyn_VarargInfo * _T1BD;
  unsigned int _T1BE;
  struct Cyc_Absyn_VarargInfo * _T1BF;
  struct Cyc_Absyn_Tqual _T1C0;
  long _T1C1;
  void * _T1C2;
  long _T1C3;
  int * _T1C4;
  int _T1C5;
  struct Cyc_Absyn_PtrInfo _T1C6;
  struct Cyc_Absyn_PtrInfo _T1C7;
  struct Cyc_Absyn_PtrAtts _T1C8;
  struct Cyc_Absyn_PtrInfo _T1C9;
  struct Cyc_Absyn_PtrAtts _T1CA;
  int * _T1CB;
  int _T1CC;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T1CD;
  void * _T1CE;
  int * _T1CF;
  int _T1D0;
  long _T1D1;
  struct Cyc_Warn_String_Warn_Warg_struct _T1D2;
  unsigned int _T1D3;
  struct _fat_ptr _T1D4;
  void * _T1D5;
  void * _T1D6;
  long _T1D7;
  long _T1D8;
  unsigned int _T1D9;
  void * _T1DA;
  void * _T1DB;
  void * _T1DC;
  long _T1DD;
  struct Cyc_Warn_String_Warn_Warg_struct _T1DE;
  unsigned int _T1DF;
  struct _fat_ptr _T1E0;
  struct Cyc_Warn_String_Warn_Warg_struct _T1E1;
  unsigned int _T1E2;
  struct _fat_ptr _T1E3;
  struct Cyc_Warn_String_Warn_Warg_struct _T1E4;
  unsigned int _T1E5;
  struct _fat_ptr _T1E6;
  long _T1E7;
  long _T1E8;
  int _T1E9;
  int _T1EA;
  struct Cyc_Warn_String_Warn_Warg_struct _T1EB;
  unsigned int _T1EC;
  struct _fat_ptr _T1ED;
  struct _tuple9 * (* _T1EE)(struct Cyc_List_List *,int);
  void * (* _T1EF)(struct Cyc_List_List *,int);
  struct Cyc_List_List * _T1F0;
  int _T1F1;
  struct _tuple9 * _T1F2;
  int * _T1F3;
  int _T1F4;
  struct Cyc_Absyn_PtrInfo _T1F5;
  struct Cyc_Absyn_PtrInfo _T1F6;
  struct Cyc_Absyn_PtrAtts _T1F7;
  long _T1F8;
  struct Cyc_Warn_String_Warn_Warg_struct _T1F9;
  unsigned int _T1FA;
  struct _fat_ptr _T1FB;
  long _T1FC;
  void * _T1FD;
  void * _T1FE;
  long _T1FF;
  struct Cyc_Warn_String_Warn_Warg_struct _T200;
  unsigned int _T201;
  struct _fat_ptr _T202;
  long _T203;
  struct Cyc_Warn_String_Warn_Warg_struct _T204;
  unsigned int _T205;
  struct _fat_ptr _T206;
  long _T207;
  unsigned int _T208;
  void * _T209;
  void * _T20A;
  void * _T20B;
  long _T20C;
  struct Cyc_Warn_String_Warn_Warg_struct _T20D;
  unsigned int _T20E;
  struct _fat_ptr _T20F;
  unsigned int _T210;
  void * _T211;
  void * _T212;
  void * _T213;
  long _T214;
  struct Cyc_Warn_String_Warn_Warg_struct _T215;
  unsigned int _T216;
  struct _fat_ptr _T217;
  struct Cyc_Warn_String_Warn_Warg_struct _T218;
  unsigned int _T219;
  struct _fat_ptr _T21A;
  long _T21B;
  struct _tuple18 _T21C;
  struct Cyc_Absyn_VarargInfo * _T21D;
  void * _T21E;
  void * _T21F;
  enum Cyc_Absyn_Format_Type _T220;
  int _T221;
  void * _T222;
  int * _T223;
  int _T224;
  void * _T225;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T226;
  void * _T227;
  int * _T228;
  int _T229;
  void * _T22A;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T22B;
  void * _T22C;
  struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct * _T22D;
  union Cyc_Absyn_DatatypeInfo _T22E;
  struct _union_DatatypeInfo_KnownDatatype _T22F;
  unsigned int _T230;
  void * _T231;
  void * _T232;
  union Cyc_Absyn_DatatypeInfo _T233;
  struct _union_DatatypeInfo_KnownDatatype _T234;
  struct Cyc_Absyn_Datatypedecl * * _T235;
  struct Cyc_Absyn_Datatypedecl * _T236;
  struct _tuple1 * _T237;
  struct _tuple1 * _T238;
  int _T239;
  void * _T23A;
  int * _T23B;
  int _T23C;
  void * _T23D;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T23E;
  void * _T23F;
  int * _T240;
  int _T241;
  void * _T242;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T243;
  void * _T244;
  struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct * _T245;
  union Cyc_Absyn_DatatypeInfo _T246;
  struct _union_DatatypeInfo_KnownDatatype _T247;
  unsigned int _T248;
  void * _T249;
  void * _T24A;
  union Cyc_Absyn_DatatypeInfo _T24B;
  struct _union_DatatypeInfo_KnownDatatype _T24C;
  struct Cyc_Absyn_Datatypedecl * * _T24D;
  struct Cyc_Absyn_Datatypedecl * _T24E;
  struct _tuple1 * _T24F;
  struct _tuple1 * _T250;
  int _T251;
  long _T252;
  struct Cyc_Warn_String_Warn_Warg_struct _T253;
  unsigned int _T254;
  struct _fat_ptr _T255;
  struct Cyc_List_List * * _T256;
  struct Cyc_List_List * _T257;
  void * _T258;
  struct Cyc_Tctyp_CVTEnv _T259;
  struct Cyc_Absyn_Kind * _T25A;
  struct Cyc_Absyn_Kind * _T25B;
  void * _T25C;
  struct Cyc_Tctyp_CVTEnv _T25D;
  struct Cyc_Absyn_Kind * _T25E;
  struct Cyc_Absyn_Kind * _T25F;
  void * _T260;
  struct Cyc_List_List * _T261;
  struct Cyc_List_List * _T262;
  int * _T263;
  unsigned int _T264;
  void * _T265;
  struct Cyc_Tctyp_CVTEnv _T266;
  struct Cyc_Absyn_Kind * _T267;
  struct Cyc_Absyn_Kind * _T268;
  void * _T269;
  void * _T26A;
  void * _T26B;
  void * _T26C;
  void * _T26D;
  struct Cyc_Tctyp_CVTEnv _T26E;
  struct Cyc_Absyn_Kind * _T26F;
  struct Cyc_Absyn_Kind * _T270;
  void * _T271;
  struct Cyc_Tctyp_CVTEnv _T272;
  struct Cyc_Absyn_Kind * _T273;
  struct Cyc_Absyn_Kind * _T274;
  void * _T275;
  struct Cyc_List_List * _T276;
  struct Cyc_Tctyp_CVTEnv _T277;
  struct Cyc_Tcenv_Tenv * _T278;
  struct Cyc_Tcenv_Tenv * _T279;
  struct Cyc_Tcenv_Tenv * _T27A;
  struct Cyc_Tcenv_Tenv * _T27B;
  struct Cyc_Tcenv_Tenv * _T27C;
  struct Cyc_Tcenv_Tenv * _T27D;
  struct Cyc_Tcenv_Tenv * _T27E;
  struct Cyc_List_List * _T27F;
  struct Cyc_List_List * _T280;
  long _T281;
  struct Cyc_Absyn_VarargInfo * _T282;
  unsigned int _T283;
  struct Cyc_Warn_String_Warn_Warg_struct _T284;
  unsigned int _T285;
  struct _fat_ptr _T286;
  struct Cyc_Tctyp_CVTEnv _T287;
  struct _fat_ptr _T288;
  struct Cyc_Absyn_Exp * _T289;
  struct Cyc_AssnDef_ExistAssnFn * * _T28A;
  struct Cyc_Tctyp_CVTEnv _T28B;
  struct _fat_ptr _T28C;
  struct Cyc_Absyn_Exp * _T28D;
  struct Cyc_AssnDef_ExistAssnFn * * _T28E;
  struct Cyc_List_List * _T28F;
  struct Cyc_List_List * _T290;
  struct Cyc_List_List * _T291;
  struct Cyc_Tctyp_CVTEnv _T292;
  struct _fat_ptr _T293;
  struct Cyc_Absyn_Exp * _T294;
  struct Cyc_AssnDef_ExistAssnFn * * _T295;
  struct Cyc_AssnDef_AssnMap _T296;
  struct Cyc_List_List * _T297;
  struct Cyc_Tctyp_CVTEnv _T298;
  struct _fat_ptr _T299;
  struct Cyc_Absyn_Exp * _T29A;
  struct Cyc_AssnDef_ExistAssnFn * * _T29B;
  void * * _T29C;
  void * _T29D;
  struct Cyc_Tctyp_CVTEnv _T29E;
  struct Cyc_Absyn_Kind * _T29F;
  struct Cyc_Absyn_Kind * _T2A0;
  void * * _T2A1;
  void * _T2A2;
  void * _T2A3;
  void * * _T2A4;
  void * _T2A5;
  long _T2A6;
  void * * _T2A7;
  struct Cyc_List_List * _T2A8;
  void * * _T2A9;
  struct _fat_ptr _T2AA;
  void * _T2AB;
  struct Cyc_List_List * _T2AC;
  struct Cyc_List_List * _T2AD;
  struct Cyc_Tctyp_CVTEnv _T2AE;
  struct Cyc_List_List * _T2AF;
  void * _T2B0;
  struct _tuple15 * _T2B1;
  long _T2B2;
  struct Cyc_Absyn_Tvar * _T2B3;
  void * _T2B4;
  int * _T2B5;
  unsigned int _T2B6;
  struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct * _T2B7;
  struct Cyc_Absyn_Kind * _T2B8;
  struct Cyc_Absyn_Kind * _T2B9;
  enum Cyc_Absyn_KindQual _T2BA;
  int _T2BB;
  struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct * _T2BC;
  struct Cyc_Core_Opt * * _T2BD;
  struct Cyc_Core_Opt * * _T2BE;
  struct Cyc_Absyn_Kind * _T2BF;
  struct Cyc_Absyn_Kind * _T2C0;
  struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct * _T2C1;
  struct Cyc_Absyn_Kind * _T2C2;
  struct Cyc_Absyn_Kind * _T2C3;
  enum Cyc_Absyn_KindQual _T2C4;
  int _T2C5;
  struct Cyc_List_List * _T2C6;
  struct Cyc_List_List * _T2C7;
  void * _T2C8;
  struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct * _T2C9;
  struct Cyc_Core_Opt * * _T2CA;
  struct Cyc_Core_Opt * * _T2CB;
  struct Cyc_Core_Opt * _T2CC;
  struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct * _T2CD;
  struct Cyc_Absyn_Kind * _T2CE;
  struct Cyc_List_List * _T2CF;
  struct Cyc_Tctyp_CVTEnv _T2D0;
  struct Cyc_List_List * _T2D1;
  void * _T2D2;
  struct _tuple16 * _T2D3;
  long _T2D4;
  struct Cyc_Absyn_Kind * _T2D5;
  enum Cyc_Absyn_KindQual _T2D6;
  int _T2D7;
  struct Cyc_List_List * _T2D8;
  struct Cyc_List_List * _T2D9;
  struct Cyc_List_List * _T2DA;
  void * * _T2DB;
  struct Cyc_List_List * * _T2DC;
  struct Cyc_List_List * _T2DD;
  struct Cyc_List_List * * _T2DE;
  struct Cyc_List_List * _T2DF;
  void * _T2E0;
  struct Cyc_Absyn_Tvar * _T2E1;
  void * _T2E2;
  int * _T2E3;
  unsigned int _T2E4;
  struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct * _T2E5;
  struct Cyc_Core_Opt * * _T2E6;
  struct Cyc_Warn_String_Warn_Warg_struct _T2E7;
  struct Cyc_Warn_Tvar_Warn_Warg_struct _T2E8;
  struct Cyc_List_List * _T2E9;
  void * _T2EA;
  struct Cyc_Warn_String_Warn_Warg_struct _T2EB;
  unsigned int _T2EC;
  struct _fat_ptr _T2ED;
  struct Cyc_Core_Opt * * _T2EE;
  struct Cyc_Absyn_Kind * _T2EF;
  struct Cyc_Absyn_Kind * _T2F0;
  struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct * _T2F1;
  struct Cyc_Core_Opt * * _T2F2;
  struct Cyc_Absyn_Kind * _T2F3;
  struct Cyc_Absyn_Kind * _T2F4;
  enum Cyc_Absyn_KindQual _T2F5;
  int _T2F6;
  struct Cyc_Core_Opt * * _T2F7;
  struct Cyc_Absyn_Kind * _T2F8;
  struct Cyc_Absyn_Kind * _T2F9;
  struct Cyc_Core_Opt * * _T2FA;
  struct Cyc_Absyn_Kind * _T2FB;
  struct Cyc_Absyn_Kind * _T2FC;
  struct Cyc_Core_Opt * * _T2FD;
  struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct * _T2FE;
  struct Cyc_Absyn_Kind * _T2FF;
  struct Cyc_Absyn_Kind * _T300;
  enum Cyc_Absyn_KindQual _T301;
  struct Cyc_Warn_String_Warn_Warg_struct _T302;
  unsigned int _T303;
  struct _fat_ptr _T304;
  struct Cyc_List_List * _T305;
  struct Cyc_List_List * (* _T306)(struct Cyc_List_List *,struct Cyc_List_List *,
				   struct Cyc_Absyn_Tvar * (*)(struct Cyc_Absyn_Tvar *));
  struct Cyc_Tctyp_CVTEnv _T307;
  struct Cyc_List_List * _T308;
  struct Cyc_List_List * * _T309;
  struct Cyc_List_List * _T30A;
  struct Cyc_Absyn_Tvar * (* _T30B)(struct Cyc_Absyn_Tvar *);
  void * (* _T30C)(void *);
  struct Cyc_List_List * (* _T30D)(struct Cyc_List_List *,struct Cyc_List_List *,
				   struct Cyc_Absyn_Tvar * (*)(struct _tuple15 *));
  struct Cyc_Tctyp_CVTEnv _T30E;
  struct Cyc_List_List * _T30F;
  struct Cyc_List_List * * _T310;
  struct Cyc_List_List * _T311;
  struct Cyc_Absyn_Tvar * (* _T312)(struct _tuple15 *);
  void * (* _T313)(struct _tuple0 *);
  struct Cyc_Tctyp_CVTEnv _T314;
  struct Cyc_List_List * _T315;
  void * _T316;
  struct _tuple15 * _T317;
  struct Cyc_Tctyp_CVTEnv _T318;
  struct Cyc_List_List * _T319;
  struct Cyc_Absyn_Tvar * _T31A;
  long _T31B;
  struct Cyc_List_List * _T31C;
  struct Cyc_Tctyp_CVTEnv _T31D;
  struct Cyc_List_List * _T31E;
  void * _T31F;
  struct _tuple16 * _T320;
  struct Cyc_Tctyp_CVTEnv _T321;
  struct Cyc_List_List * _T322;
  void * _T323;
  long _T324;
  struct Cyc_List_List * _T325;
  struct Cyc_Tctyp_CVTEnv _T326;
  struct Cyc_List_List * _T327;
  unsigned int _T328;
  struct Cyc_Tctyp_CVTEnv _T329;
  long (* _T32A)(long (*)(struct _tuple16 *,struct _tuple16 *),struct _tuple16 *,
		 struct Cyc_List_List *);
  long (* _T32B)(long (*)(void *,void *),void *,struct Cyc_List_List *);
  struct Cyc_List_List * _T32C;
  void * _T32D;
  struct _tuple16 * _T32E;
  struct Cyc_Tctyp_CVTEnv _T32F;
  struct Cyc_List_List * _T330;
  long _T331;
  struct Cyc_List_List * _T332;
  struct Cyc_List_List * _T333;
  void * _T334;
  struct Cyc_Tctyp_CVTEnv _T335;
  struct Cyc_List_List * _T336;
  struct Cyc_Tctyp_CVTEnv _T337;
  struct Cyc_List_List * _T338;
  void * _T339;
  struct Cyc_Absyn_Tqual * _T33A;
  long (* _T33B)(int (*)(struct _fat_ptr *,struct _fat_ptr *),struct Cyc_List_List *,
		 struct _fat_ptr *);
  long (* _T33C)(int (*)(void *,void *),struct Cyc_List_List *,void *);
  int (* _T33D)(struct _fat_ptr *,struct _fat_ptr *);
  struct Cyc_List_List * _T33E;
  struct _fat_ptr * _T33F;
  long _T340;
  struct Cyc_Warn_String_Warn_Warg_struct _T341;
  struct Cyc_Warn_String_Warn_Warg_struct _T342;
  struct _fat_ptr * _T343;
  unsigned int _T344;
  struct _fat_ptr _T345;
  struct _fat_ptr * _T346;
  struct _fat_ptr _T347;
  struct _fat_ptr _T348;
  int _T349;
  struct Cyc_List_List * _T34A;
  struct Cyc_Tctyp_CVTEnv _T34B;
  struct Cyc_Absyn_Kind * _T34C;
  struct Cyc_Absyn_Kind * _T34D;
  void * _T34E;
  struct Cyc_Absyn_Tqual * _T34F;
  unsigned int _T350;
  struct Cyc_Absyn_Tqual * _T351;
  long _T352;
  void * _T353;
  enum Cyc_Absyn_AggrKind _T354;
  int _T355;
  struct Cyc_Warn_String_Warn_Warg_struct _T356;
  unsigned int _T357;
  struct _fat_ptr _T358;
  struct Cyc_Tcenv_Tenv * _T359;
  struct Cyc_Absyn_Exp * _T35A;
  long _T35B;
  struct Cyc_Warn_String_Warn_Warg_struct _T35C;
  struct Cyc_Warn_TypOpt_Warn_Warg_struct _T35D;
  struct Cyc_Absyn_Exp * _T35E;
  struct Cyc_Warn_String_Warn_Warg_struct _T35F;
  unsigned int _T360;
  struct _fat_ptr _T361;
  struct Cyc_List_List * _T362;
  struct Cyc_Absyn_SubsetType_Absyn_Type_struct * _T363;
  struct Cyc_AssnDef_ExistAssnFn * * _T364;
  struct Cyc_Tctyp_CVTEnv _T365;
  struct Cyc_Absyn_Kind * _T366;
  struct Cyc_Absyn_Vardecl * _T367;
  void * _T368;
  long _T369;
  long _T36A;
  struct Cyc_List_List * _T36B;
  struct _tuple9 * _T36C;
  struct Cyc_Absyn_Vardecl * _T36D;
  struct _tuple1 * _T36E;
  struct Cyc_Absyn_Vardecl * _T36F;
  struct Cyc_Absyn_Vardecl * _T370;
  struct Cyc_List_List * _T371;
  struct Cyc_Tctyp_CVTEnv _T372;
  struct Cyc_Tcenv_Tenv * _T373;
  struct Cyc_Tcenv_Tenv * _T374;
  struct Cyc_Tcenv_Tenv * _T375;
  struct Cyc_Tcenv_Tenv * _T376;
  struct Cyc_Tcenv_Tenv * _T377;
  struct Cyc_Tcenv_Tenv * _T378;
  struct Cyc_Tcenv_Tenv * _T379;
  struct Cyc_List_List * _T37A;
  struct Cyc_List_List * _T37B;
  long _T37C;
  struct Cyc_Warn_String_Warn_Warg_struct _T37D;
  struct Cyc_Absyn_Exp * _T37E;
  unsigned int _T37F;
  struct _fat_ptr _T380;
  struct Cyc_Tctyp_CVTEnv _T381;
  struct _fat_ptr _T382;
  struct Cyc_Absyn_Exp * _T383;
  struct Cyc_AssnDef_ExistAssnFn * * _T384;
  struct Cyc_Absyn_TypedefType_Absyn_Type_struct * _T385;
  struct Cyc_List_List * * _T386;
  struct Cyc_Absyn_TypedefType_Absyn_Type_struct * _T387;
  struct Cyc_Absyn_Typedefdecl * * _T388;
  struct Cyc_Absyn_TypedefType_Absyn_Type_struct * _T389;
  void * * _T38A;
  struct _handler_cons * _T38B;
  int _T38C;
  void * _T38D;
  struct Cyc_Dict_Absent_exn_struct * _T38E;
  char * _T38F;
  char * _T390;
  struct Cyc_Warn_String_Warn_Warg_struct _T391;
  struct Cyc_Warn_Qvar_Warn_Warg_struct _T392;
  unsigned int _T393;
  struct _fat_ptr _T394;
  struct Cyc_Tctyp_CVTEnv _T395;
  struct Cyc_Absyn_Typedefdecl * * _T396;
  struct Cyc_Tctyp_CVTEnv _T397;
  struct Cyc_List_List * * _T398;
  struct Cyc_Absyn_Typedefdecl * _T399;
  struct Cyc_List_List * _T39A;
  struct Cyc_Absyn_Kind * _T39B;
  long _T39C;
  struct _tuple1 * _T39D;
  struct Cyc_Absyn_Typedefdecl * _T39E;
  struct Cyc_Absyn_Typedefdecl * _T39F;
  void * _T3A0;
  unsigned int _T3A1;
  struct Cyc_Absyn_Typedefdecl * _T3A2;
  void * _T3A3;
  struct Cyc_Absyn_Kind * _T3A4;
  struct Cyc_Absyn_Typedefdecl * _T3A5;
  struct Cyc_List_List * * _T3A6;
  struct Cyc_List_List * _T3A7;
  struct _tuple19 * _T3A8;
  struct Cyc_List_List * _T3A9;
  void * _T3AA;
  struct Cyc_List_List * _T3AB;
  struct Cyc_List_List * _T3AC;
  struct Cyc_List_List * _T3AD;
  void * * _T3AE;
  struct Cyc_List_List * _T3AF;
  struct Cyc_Absyn_Typedefdecl * _T3B0;
  void * _T3B1;
  void * _T3B2;
  struct Cyc_Absyn_Kind * _T3B3;
  struct Cyc_Absyn_Kind * _T3B4;
  long _T3B5;
  struct Cyc_Warn_String_Warn_Warg_struct _T3B6;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T3B7;
  struct Cyc_Warn_String_Warn_Warg_struct _T3B8;
  struct Cyc_Warn_Kind_Warn_Warg_struct _T3B9;
  struct Cyc_Warn_String_Warn_Warg_struct _T3BA;
  struct Cyc_Warn_Kind_Warn_Warg_struct _T3BB;
  unsigned int _T3BC;
  struct _fat_ptr _T3BD;
  struct Cyc_Tctyp_CVTEnv _T3BE;
  struct Cyc_Tcenv_Tenv * _T3BF;
  unsigned int _T3C0;
  _T0 = env;
  _T3C0 = _T0.loc;
  _T1 = env;
  _T3BF = _T1.te;
  { unsigned int loc = _T3C0;
    struct Cyc_Tcenv_Tenv * te = _T3BF;
    { void * _T3C1 = Cyc_Absyn_compress(t);
      struct _tuple1 * _T3C2;
      enum Cyc_Absyn_AggrKind _T3C3;
      struct Cyc_List_List * _T3C4;
      struct Cyc_List_List * _T3C5;
      struct Cyc_Absyn_Vardecl * _T3C6;
      void * _T3C7;
      struct Cyc_Absyn_Exp * _T3C8;
      struct Cyc_Absyn_Exp * _T3C9;
      struct Cyc_Absyn_Exp * _T3CA;
      struct Cyc_Absyn_Exp * _T3CB;
      struct Cyc_List_List * _T3CC;
      struct Cyc_Absyn_VarargInfo * _T3CD;
      long _T3CE;
      struct Cyc_List_List * _T3CF;
      unsigned int _T3D0;
      void * _T3D1;
      void * _T3D2;
      void * _T3D3;
      void * _T3D4;
      void * _T3D5;
      void * _T3D6;
      const char * _T3D7;
      void * _T3D8;
      void * _T3D9;
      _T2 = (int *)_T3C1;
      _T3 = *_T2;
      switch (_T3) {
      case 0: 
	{ struct Cyc_Absyn_AppType_Absyn_Type_struct * _T3DA = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T3C1;
	  _T4 = _T3DA->f1;
	  _T3D9 = (void *)_T4;
	  _T5 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T3C1;
	  _T6 = &_T5->f2;
	  _T3D8 = (struct Cyc_List_List * *)_T6;
	}{ void * c = _T3D9;
	  struct Cyc_List_List * * targsp = _T3D8;
	  env = Cyc_Tctyp_i_check_type_app(env,expected_kind,c,targsp,put_in_effect,
					   allow_abs_aggr,t);
	  goto _LL3;
	}
      case 3: 
	{ struct Cyc_Absyn_Cvar_Absyn_Type_struct * _T3DA = (struct Cyc_Absyn_Cvar_Absyn_Type_struct *)_T3C1;
	  _T7 = (struct Cyc_Absyn_Cvar_Absyn_Type_struct *)_T3C1;
	  _T8 = &_T7->f1;
	  _T3D9 = (struct Cyc_Core_Opt * *)_T8;
	  _T3D7 = _T3DA->f5;
	}{ struct Cyc_Core_Opt * * k = _T3D9;
	  const char * name = _T3D7;
	  if (name != 0) { goto _TL131;
	  }
	  { struct Cyc_Warn_String_Warn_Warg_struct _T3DA;
	    _T3DA.tag = 0;
	    _T3DA.f1 = _tag_fat("Unnamed Cvar ",sizeof(char),14U);
	    _T9 = _T3DA;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T3DA = _T9;
	    { struct Cyc_Warn_Typ_Warn_Warg_struct _T3DB;
	      _T3DB.tag = 2;
	      _T3DB.f1 = t;
	      _TA = _T3DB;
	    }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T3DB = _TA;
	      void * _T3DC[2];
	      _T3DC[0] = &_T3DA;
	      _T3DC[1] = &_T3DB;
	      _TB = loc;
	      _TC = _tag_fat(_T3DC,sizeof(void *),2);
	      Cyc_Warn_err2(_TB,_TC);
	    }
	  }goto _TL132;
	  _TL131: _TL132: _TD = k;
	  _TE = *_TD;
	  if (_TE == 0) { goto _TL135;
	  }else { goto _TL136;
	  }
	  _TL136: _TF = expected_kind;
	  _T10 = k;
	  _T11 = *_T10;
	  _T12 = _T11->v;
	  _T13 = (struct Cyc_Absyn_Kind *)_T12;
	  _T14 = Cyc_Kinds_kind_leq(_TF,_T13);
	  if (_T14) { goto _TL137;
	  }else { goto _TL133;
	  }
	  _TL137: _T15 = k;
	  _T16 = *_T15;
	  _T17 = _check_null(_T16);
	  _T18 = _T17->v;
	  _T19 = (struct Cyc_Absyn_Kind *)_T18;
	  _T1A = expected_kind;
	  _T1B = Cyc_Kinds_kind_leq(_T19,_T1A);
	  if (_T1B) { goto _TL133;
	  }else { goto _TL135;
	  }
	  _TL135: _T1C = k;
	  *_T1C = Cyc_Kinds_kind_to_opt(expected_kind);
	  goto _TL134;
	  _TL133: _TL134: goto _LL3;
	}
      case 1: 
	{ struct Cyc_Absyn_Evar_Absyn_Type_struct * _T3DA = (struct Cyc_Absyn_Evar_Absyn_Type_struct *)_T3C1;
	  _T1D = (struct Cyc_Absyn_Evar_Absyn_Type_struct *)_T3C1;
	  _T1E = &_T1D->f1;
	  _T3D9 = (struct Cyc_Core_Opt * *)_T1E;
	  _T1F = (struct Cyc_Absyn_Evar_Absyn_Type_struct *)_T3C1;
	  _T20 = &_T1F->f2;
	  _T3D8 = (void * *)_T20;
	}{ struct Cyc_Core_Opt * * k = _T3D9;
	  void * * ref = _T3D8;
	  _T21 = k;
	  _T22 = *_T21;
	  if (_T22 == 0) { goto _TL13A;
	  }else { goto _TL13B;
	  }
	  _TL13B: _T23 = expected_kind;
	  _T24 = k;
	  _T25 = *_T24;
	  _T26 = _T25->v;
	  _T27 = (struct Cyc_Absyn_Kind *)_T26;
	  _T28 = Cyc_Kinds_kind_leq(_T23,_T27);
	  if (_T28) { goto _TL13C;
	  }else { goto _TL138;
	  }
	  _TL13C: _T29 = k;
	  _T2A = *_T29;
	  _T2B = _check_null(_T2A);
	  _T2C = _T2B->v;
	  _T2D = (struct Cyc_Absyn_Kind *)_T2C;
	  _T2E = expected_kind;
	  _T2F = Cyc_Kinds_kind_leq(_T2D,_T2E);
	  if (_T2F) { goto _TL138;
	  }else { goto _TL13A;
	  }
	  _TL13A: _T30 = k;
	  *_T30 = Cyc_Kinds_kind_to_opt(expected_kind);
	  goto _TL139;
	  _TL138: _TL139: _T31 = env;
	  _T32 = _T31.fn_result;
	  if (! _T32) { goto _TL13D;
	  }
	  _T33 = env;
	  _T34 = _T33.generalize_evars;
	  if (! _T34) { goto _TL13D;
	  }
	  _T35 = expected_kind;
	  _T36 = _T35->kind;
	  _T37 = (int)_T36;
	  if (_T37 != 3) { goto _TL13F;
	  }
	  _T38 = te;
	  _T39 = _T38->tempest_generalize;
	  if (_T39) { goto _TL13F;
	  }else { goto _TL141;
	  }
	  _TL141: _T3A = ref;
	  *_T3A = Cyc_Absyn_heap_rgn_type;
	  goto _LL3;
	  _TL13F: _T3B = expected_kind;
	  _T3C = _T3B->kind;
	  _T3D = (int)_T3C;
	  if (_T3D != 7) { goto _TL142;
	  }
	  _T3E = te;
	  _T3F = _T3E->tempest_generalize;
	  if (_T3F) { goto _TL142;
	  }else { goto _TL144;
	  }
	  _TL144: _T40 = ref;
	  *_T40 = Cyc_Absyn_al_qual_type;
	  goto _LL3;
	  _TL142: goto _TL13E;
	  _TL13D: _TL13E: _T41 = env;
	  _T42 = _T41.inst_type_evar;
	  if (! _T42) { goto _TL145;
	  }
	  _T43 = expected_kind;
	  _T44 = _T43->kind;
	  _T45 = (int)_T44;
	  if (_T45 != 7) { goto _TL145;
	  }
	  _T46 = te;
	  _T47 = _T46->tempest_generalize;
	  if (_T47) { goto _TL145;
	  }else { goto _TL147;
	  }
	  _TL147: _T48 = ref;
	  *_T48 = Cyc_Absyn_al_qual_type;
	  goto _LL3;
	  _TL145: _T49 = env;
	  _T4A = _T49.generalize_evars;
	  if (! _T4A) { goto _TL148;
	  }
	  _T4B = expected_kind;
	  _T4C = _T4B->kind;
	  _T4D = (int)_T4C;
	  if (_T4D == 5) { goto _TL148;
	  }
	  _T4E = expected_kind;
	  _T4F = _T4E->kind;
	  _T50 = (int)_T4F;
	  if (_T50 == 6) { goto _TL148;
	  }
	  { struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct * _T3DA = _cycalloc(sizeof(struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct));
	    _T3DA->tag = 2;
	    _T3DA->f1 = 0;
	    _T3DA->f2 = expected_kind;
	    _T51 = (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct *)_T3DA;
	  }_T52 = (void *)_T51;
	  { struct Cyc_Absyn_Tvar * v = Cyc_Tcutil_new_tvar(_T52);
	    _T53 = ref;
	    *_T53 = Cyc_Absyn_var_type(v);
	    _T3D9 = v;
	    goto _LLB;
	  }_TL148: _T54 = env;
	  _T55 = _T54.free_evars;
	  _T56 = t;
	  _T57 = put_in_effect;
	  env.free_evars = Cyc_Tctyp_add_free_evar(_T55,_T56,_T57);
	  goto _LL3;
	}
      case 2: 
	{ struct Cyc_Absyn_VarType_Absyn_Type_struct * _T3DA = (struct Cyc_Absyn_VarType_Absyn_Type_struct *)_T3C1;
	  _T3D9 = _T3DA->f1;
	}_LLB: { struct Cyc_Absyn_Tvar * v = _T3D9;
	  _T58 = v;
	  _T59 = _T58->kind;
	  { void * _T3DA = Cyc_Kinds_compress_kb(_T59);
	    void * _T3DB;
	    _T5A = (int *)_T3DA;
	    _T5B = *_T5A;
	    if (_T5B != 1) { goto _TL14A;
	    }
	    { struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct * _T3DC = (struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct *)_T3DA;
	      _T5C = (struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct *)_T3DA;
	      _T5D = &_T5C->f1;
	      _T3DB = (struct Cyc_Core_Opt * *)_T5D;
	    }{ struct Cyc_Core_Opt * * f = (struct Cyc_Core_Opt * *)_T3DB;
	      _T5E = f;
	      { struct Cyc_Core_Opt * _T3DC = _cycalloc(sizeof(struct Cyc_Core_Opt));
		{ struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct * _T3DD = _cycalloc(sizeof(struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct));
		  _T3DD->tag = 2;
		  _T3DD->f1 = 0;
		  _T3DD->f2 = expected_kind;
		  _T60 = (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct *)_T3DD;
		}_T3DC->v = (void *)_T60;
		_T5F = (struct Cyc_Core_Opt *)_T3DC;
	      }*_T5E = _T5F;
	      goto _LL1E;
	    }_TL14A: goto _LL1E;
	    _LL1E: ;
	  }_T61 = loc;
	  _T62 = env;
	  _T63 = _T62.kind_env;
	  _T64 = v;
	  _T65 = env;
	  _T66 = _T65.allow_aqual_bounds;
	  env.kind_env = Cyc_Tctyp_add_free_tvar(_T61,_T63,_T64,_T66);
	  _T67 = env;
	  _T68 = _T67.free_vars;
	  _T69 = v;
	  _T6A = put_in_effect;
	  env.free_vars = Cyc_Tctyp_fast_add_free_tvar_bool(_T68,_T69,_T6A);
	  _T6B = v;
	  _T6C = _T6B->kind;
	  { void * _T3DA = Cyc_Kinds_compress_kb(_T6C);
	    struct Cyc_Absyn_Kind * _T3DB;
	    void * _T3DC;
	    _T6D = (int *)_T3DA;
	    _T6E = *_T6D;
	    if (_T6E != 2) { goto _TL14C;
	    }
	    { struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct * _T3DD = (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct *)_T3DA;
	      _T6F = (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct *)_T3DA;
	      _T70 = &_T6F->f1;
	      _T3DC = (struct Cyc_Core_Opt * *)_T70;
	      _T3DB = _T3DD->f2;
	    }{ struct Cyc_Core_Opt * * f = (struct Cyc_Core_Opt * *)_T3DC;
	      struct Cyc_Absyn_Kind * k = _T3DB;
	      _T71 = Cyc_Kinds_kind_leq(expected_kind,k);
	      if (! _T71) { goto _TL14E;
	      }
	      _T72 = f;
	      { struct Cyc_Core_Opt * _T3DD = _cycalloc(sizeof(struct Cyc_Core_Opt));
		{ struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct * _T3DE = _cycalloc(sizeof(struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct));
		  _T3DE->tag = 2;
		  _T3DE->f1 = 0;
		  _T3DE->f2 = expected_kind;
		  _T74 = (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct *)_T3DE;
		}_T3DD->v = (void *)_T74;
		_T73 = (struct Cyc_Core_Opt *)_T3DD;
	      }*_T72 = _T73;
	      goto _TL14F;
	      _TL14E: _TL14F: goto _LL23;
	    }_TL14C: goto _LL23;
	    _LL23: ;
	  }goto _LL3;
	}
      case 10: 
	{ struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct * _T3DA = (struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct *)_T3C1;
	  _T75 = _T3DA->f1;
	  { struct Cyc_Absyn_TypeDecl _T3DB = *_T75;
	    _T3D9 = _T3DB.r;
	  }_T76 = (struct Cyc_Absyn_TypeDeclType_Absyn_Type_struct *)_T3C1;
	  _T77 = &_T76->f2;
	  _T3D8 = (void * * *)_T77;
	}{ void * td = _T3D9;
	  void * * * topt = _T3D8;
	  _T78 = Cyc_Absyn_compress(t);
	  { void * new_typ = Cyc_Tcutil_copy_type(_T78);
	    { struct Cyc_Absyn_Datatypedecl * _T3DA;
	      struct Cyc_Absyn_Enumdecl * _T3DB;
	      struct Cyc_Absyn_Aggrdecl * _T3DC;
	      _T79 = td;
	      _T7A = (int *)_T79;
	      _T7B = *_T7A;
	      switch (_T7B) {
	      case 0: 
		_T7C = td;
		{ struct Cyc_Absyn_Aggr_td_Absyn_Raw_typedecl_struct * _T3DD = (struct Cyc_Absyn_Aggr_td_Absyn_Raw_typedecl_struct *)_T7C;
		  _T3DC = _T3DD->f1;
		}{ struct Cyc_Absyn_Aggrdecl * ad = _T3DC;
		  _T7D = env;
		  _T7E = _T7D.te;
		  _T7F = _T7E->in_extern_c_include;
		  if (! _T7F) { goto _TL151;
		  }
		  _T80 = ad;
		  _T80->sc = 4U;
		  goto _TL152;
		  _TL151: _TL152: Cyc_Tc_tcAggrdecl(te,loc,ad);
		  goto _LL28;
		}
	      case 1: 
		_T81 = td;
		{ struct Cyc_Absyn_Enum_td_Absyn_Raw_typedecl_struct * _T3DD = (struct Cyc_Absyn_Enum_td_Absyn_Raw_typedecl_struct *)_T81;
		  _T3DB = _T3DD->f1;
		}{ struct Cyc_Absyn_Enumdecl * ed = _T3DB;
		  _T82 = env;
		  _T83 = _T82.te;
		  _T84 = _T83->in_extern_c_include;
		  if (! _T84) { goto _TL153;
		  }
		  _T85 = ed;
		  _T85->sc = 4U;
		  goto _TL154;
		  _TL153: _TL154: Cyc_Tc_tcEnumdecl(te,loc,ed);
		  goto _LL28;
		}
	      default: 
		_T86 = td;
		{ struct Cyc_Absyn_Datatype_td_Absyn_Raw_typedecl_struct * _T3DD = (struct Cyc_Absyn_Datatype_td_Absyn_Raw_typedecl_struct *)_T86;
		  _T3DA = _T3DD->f1;
		}{ struct Cyc_Absyn_Datatypedecl * dd = _T3DA;
		  Cyc_Tc_tcDatatypedecl(te,loc,dd);
		  goto _LL28;
		}
	      }
	      _LL28: ;
	    }_T87 = topt;
	    { void * * _T3DA = _cycalloc(sizeof(void *));
	      *_T3DA = new_typ;
	      _T88 = (void * *)_T3DA;
	    }*_T87 = _T88;
	    _T89 = Cyc_Tctyp_i_check_type(env,expected_kind,new_typ,put_in_effect,
					  allow_abs_aggr);
	    return _T89;
	  }
	}
      case 4: 
	{ struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T3DA = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T3C1;
	  _T8A = _T3DA->f1;
	  _T3D9 = _T8A.elt_type;
	  _T8B = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T3C1;
	  _T8C = &(_T8B->f1).elt_tq;
	  _T3D8 = (struct Cyc_Absyn_Tqual *)_T8C;
	  _T8D = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T3C1;
	  _T8E = &((_T8D->f1).ptr_atts).eff;
	  _T3D6 = (void * *)_T8E;
	  _T8F = _T3DA->f1;
	  _T90 = _T8F.ptr_atts;
	  _T3D5 = _T90.nullable;
	  _T91 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T3C1;
	  _T92 = &((_T91->f1).ptr_atts).bounds;
	  _T3D4 = (void * *)_T92;
	  _T93 = _T3DA->f1;
	  _T94 = _T93.ptr_atts;
	  _T3D3 = _T94.zero_term;
	  _T95 = _T3DA->f1;
	  _T96 = _T95.ptr_atts;
	  _T3D2 = _T96.autoreleased;
	  _T97 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T3C1;
	  _T98 = &((_T97->f1).ptr_atts).aqual;
	  _T3D1 = (void * *)_T98;
	}{ void * t1 = _T3D9;
	  struct Cyc_Absyn_Tqual * tqp = _T3D8;
	  void * * eff_type = _T3D6;
	  void * nullable = _T3D5;
	  void * * b = _T3D4;
	  void * zt = _T3D3;
	  void * rel = _T3D2;
	  void * * aq = _T3D1;
	  _T99 = aq;
	  { void * override_aq = *_T99;
	    _T9A = eff_type;
	    { void * _T3DA = *_T9A;
	      _T9B = (int *)_T3DA;
	      _T9C = *_T9B;
	      if (_T9C != 0) { goto _TL155;
	      }
	      _T9D = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T3DA;
	      _T9E = _T9D->f1;
	      _T9F = (int *)_T9E;
	      _TA0 = *_T9F;
	      switch (_TA0) {
	      case 7: 
		_TA1 = eff_type;
		*_TA1 = Cyc_Absyn_heap_rgn_type;
		override_aq = Cyc_Absyn_un_qual_type;
		goto _LL2F;
	      case 8: 
		_TA2 = eff_type;
		*_TA2 = Cyc_Absyn_heap_rgn_type;
		override_aq = Cyc_Absyn_rc_qual_type;
		goto _LL2F;
	      default: 
		goto _LL34;
	      }
	      goto _TL156;
	      _TL155: _LL34: goto _LL2F;
	      _TL156: _LL2F: ;
	    }_TA3 = override_aq;
	    _TA4 = aq;
	    _TA5 = *_TA4;
	    if (_TA3 == _TA5) { goto _TL158;
	    }
	    _TA6 = aq;
	    { void * _T3DA = *_TA6;
	      struct Cyc_List_List * _T3DB;
	      _TA7 = (int *)_T3DA;
	      _TA8 = *_TA7;
	      if (_TA8 != 0) { goto _TL15A;
	      }
	      _TA9 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T3DA;
	      _TAA = _TA9->f1;
	      _TAB = (int *)_TAA;
	      _TAC = *_TAB;
	      if (_TAC != 17) { goto _TL15C;
	      }
	      _TAD = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T3DA;
	      _TAE = _TAD->f2;
	      if (_TAE == 0) { goto _TL15E;
	      }
	      _TAF = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T3DA;
	      _TB0 = _TAF->f2;
	      _TB1 = (struct Cyc_List_List *)_TB0;
	      _TB2 = _TB1->hd;
	      _TB3 = (int *)_TB2;
	      _TB4 = *_TB3;
	      if (_TB4 != 1) { goto _TL160;
	      }
	      { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T3DC = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T3DA;
		_TB5 = _T3DC->f2;
		{ struct Cyc_List_List _T3DD = *_TB5;
		  _T3DB = _T3DD.tl;
		}
	      }{ struct Cyc_List_List * bnd = _T3DB;
		goto _LL36;
	      }_TL160: goto _LL39;
	      _TL15E: goto _LL39;
	      _TL15C: goto _LL39;
	      _TL15A: _LL39: { struct Cyc_Warn_String_Warn_Warg_struct _T3DC;
		_T3DC.tag = 0;
		_T3DC.f1 = _tag_fat("`U and `RC shorthands override explicit aqual",
				    sizeof(char),46U);
		_TB6 = _T3DC;
	      }{ struct Cyc_Warn_String_Warn_Warg_struct _T3DC = _TB6;
		void * _T3DD[1];
		_T3DD[0] = &_T3DC;
		_TB7 = loc;
		_TB8 = _tag_fat(_T3DD,sizeof(void *),1);
		Cyc_Warn_warn2(_TB7,_TB8);
	      }_LL36: ;
	    }_TB9 = aq;
	    *_TB9 = override_aq;
	    goto _TL159;
	    _TL158: _TL159: Cyc_Tctyp_check_constrain_ptrbnd(loc,t,expected_kind);
	    _TBA = env;
	    _TBB = &Cyc_Kinds_ak;
	    _TBC = (struct Cyc_Absyn_Kind *)_TBB;
	    _TBD = t1;
	    env = Cyc_Tctyp_i_check_type(_TBA,_TBC,_TBD,1,1);
	    _TBE = env;
	    _TBF = &Cyc_Kinds_ek;
	    _TC0 = (struct Cyc_Absyn_Kind *)_TBF;
	    _TC1 = eff_type;
	    _TC2 = *_TC1;
	    env = Cyc_Tctyp_i_check_type(_TBE,_TC0,_TC2,1,1);
	    _TC3 = env;
	    _TC4 = &Cyc_Kinds_boolk;
	    _TC5 = (struct Cyc_Absyn_Kind *)_TC4;
	    _TC6 = zt;
	    env = Cyc_Tctyp_i_check_type(_TC3,_TC5,_TC6,0,1);
	    _TC7 = env;
	    _TC8 = &Cyc_Kinds_boolk;
	    _TC9 = (struct Cyc_Absyn_Kind *)_TC8;
	    _TCA = nullable;
	    env = Cyc_Tctyp_i_check_type(_TC7,_TC9,_TCA,0,1);
	    _TCB = env;
	    _TCC = &Cyc_Kinds_ptrbk;
	    _TCD = (struct Cyc_Absyn_Kind *)_TCC;
	    _TCE = b;
	    _TCF = *_TCE;
	    _TD0 = allow_abs_aggr;
	    env = Cyc_Tctyp_i_check_type(_TCB,_TCD,_TCF,0,_TD0);
	    _TD1 = env;
	    _TD2 = &Cyc_Kinds_boolk;
	    _TD3 = (struct Cyc_Absyn_Kind *)_TD2;
	    _TD4 = rel;
	    env = Cyc_Tctyp_i_check_type(_TD1,_TD3,_TD4,0,1);
	    _TD5 = aq;
	    { void * _T3DA = *_TD5;
	      struct Cyc_List_List * _T3DB;
	      _TD6 = (int *)_T3DA;
	      _TD7 = *_TD6;
	      if (_TD7 != 0) { goto _TL162;
	      }
	      _TD8 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T3DA;
	      _TD9 = _TD8->f1;
	      _TDA = (int *)_TD9;
	      _TDB = *_TDA;
	      if (_TDB != 17) { goto _TL164;
	      }
	      _TDC = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T3DA;
	      _TDD = _TDC->f2;
	      if (_TDD == 0) { goto _TL166;
	      }
	      _TDE = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T3DA;
	      _TDF = _TDE->f2;
	      _TE0 = (struct Cyc_List_List *)_TDF;
	      _TE1 = _TE0->hd;
	      _TE2 = (int *)_TE1;
	      _TE3 = *_TE2;
	      if (_TE3 != 1) { goto _TL168;
	      }
	      { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T3DC = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T3DA;
		_TE4 = _T3DC->f2;
		{ struct Cyc_List_List _T3DD = *_TE4;
		  _T3DB = _T3DD.tl;
		}
	      }{ struct Cyc_List_List * bnd = _T3DB;
		_TE5 = env;
		_TE6 = _TE5.def_aliasable;
		if (! _TE6) { goto _TL16A;
		}
		_TE7 = aq;
		*_TE7 = Cyc_Absyn_al_qual_type;
		goto _TL16B;
		_TL16A: _TE8 = bnd;
		_TE9 = Cyc_Absyn_rtd_qual_type;
		_TE8->hd = (void *)_TE9;
		_TL16B: goto _LL3B;
	      }_TL168: goto _LL3E;
	      _TL166: goto _LL3E;
	      _TL164: goto _LL3E;
	      _TL162: _LL3E: goto _LL3B;
	      _LL3B: ;
	    }_TEA = env;
	    _TEB = &Cyc_Kinds_aqk;
	    _TEC = (struct Cyc_Absyn_Kind *)_TEB;
	    _TED = aq;
	    _TEE = *_TED;
	    env = Cyc_Tctyp_i_check_type(_TEA,_TEC,_TEE,0,1);
	    _TEF = tqp;
	    _TF0 = env;
	    _TF1 = _TF0.loc;
	    _TF2 = tqp;
	    _TF3 = _TF2->print_const;
	    _TF4 = t1;
	    _TEF->real_const = Cyc_Tcutil_extract_const_from_typedef(_TF1,
								     _TF3,
								     _TF4);
	    _TF5 = zt;
	    _TF7 = Cyc_Tcutil_is_char_type(t1);
	    if (! _TF7) { goto _TL16C;
	    }
	    _TF6 = Cyc_Absyn_true_type;
	    goto _TL16D;
	    _TL16C: _TF6 = Cyc_Absyn_false_type;
	    _TL16D: Cyc_Unify_unify(_TF5,_TF6);
	    { long is_zero_terminated = Cyc_Absyn_type2bool(0,zt);
	      _TF8 = is_zero_terminated;
	      if (! _TF8) { goto _TL16E;
	      }
	      _TF9 = Cyc_Tcutil_admits_zero(t1);
	      if (_TF9) { goto _TL16E;
	      }else { goto _TL170;
	      }
	      _TL170: { struct Cyc_Warn_String_Warn_Warg_struct _T3DA;
		_T3DA.tag = 0;
		_T3DA.f1 = _tag_fat("cannot have a pointer to zero-terminated ",
				    sizeof(char),42U);
		_TFA = _T3DA;
	      }{ struct Cyc_Warn_String_Warn_Warg_struct _T3DA = _TFA;
		{ struct Cyc_Warn_Typ_Warn_Warg_struct _T3DB;
		  _T3DB.tag = 2;
		  _T3DB.f1 = t1;
		  _TFB = _T3DB;
		}{ struct Cyc_Warn_Typ_Warn_Warg_struct _T3DB = _TFB;
		  { struct Cyc_Warn_String_Warn_Warg_struct _T3DC;
		    _T3DC.tag = 0;
		    _T3DC.f1 = _tag_fat(" elements",sizeof(char),10U);
		    _TFC = _T3DC;
		  }{ struct Cyc_Warn_String_Warn_Warg_struct _T3DC = _TFC;
		    void * _T3DD[3];
		    _T3DD[0] = &_T3DA;
		    _T3DD[1] = &_T3DB;
		    _T3DD[2] = &_T3DC;
		    _TFD = loc;
		    _TFE = _tag_fat(_T3DD,sizeof(void *),3);
		    Cyc_Warn_err2(_TFD,_TFE);
		  }
		}
	      }goto _TL16F;
	      _TL16E: _TL16F: _TFF = b;
	      _T100 = *_TFF;
	      _T101 = Cyc_Tcutil_is_cvar_type(_T100);
	      if (_T101) { goto _TL171;
	      }else { goto _TL173;
	      }
	      _TL173: _T102 = Cyc_Absyn_bounds_one();
	      _T103 = b;
	      _T104 = *_T103;
	      { struct Cyc_Absyn_Exp * e = Cyc_Tcutil_get_bounds_exp(_T102,
								     _T104);
		if (e == 0) { goto _TL174;
		}
		{ struct _tuple14 _T3DA = Cyc_Evexp_eval_const_uint_exp(e);
		  long _T3DB;
		  unsigned int _T3DC;
		  _T3DC = _T3DA.f0;
		  _T3DB = _T3DA.f1;
		  { unsigned int sz = _T3DC;
		    long known = _T3DB;
		    _T105 = is_zero_terminated;
		    if (! _T105) { goto _TL176;
		    }
		    _T106 = known;
		    if (_T106) { goto _TL179;
		    }else { goto _TL178;
		    }
		    _TL179: if (sz < 1U) { goto _TL178;
		    }else { goto _TL176;
		    }
		    _TL178: { struct Cyc_Warn_String_Warn_Warg_struct _T3DD;
		      _T3DD.tag = 0;
		      _T3DD.f1 = _tag_fat("zero-terminated pointer cannot point to empty sequence",
					  sizeof(char),55U);
		      _T107 = _T3DD;
		    }{ struct Cyc_Warn_String_Warn_Warg_struct _T3DD = _T107;
		      void * _T3DE[1];
		      _T3DE[0] = &_T3DD;
		      _T108 = loc;
		      _T109 = _tag_fat(_T3DE,sizeof(void *),1);
		      Cyc_Warn_err2(_T108,_T109);
		    }goto _TL177;
		    _TL176: _TL177: ;
		  }
		}goto _TL175;
		_TL174: _TL175: ;
	      }goto _TL172;
	      _TL171: _TL172: goto _LL3;
	    }
	  }
	}
      case 9: 
	{ struct Cyc_Absyn_ValueofType_Absyn_Type_struct * _T3DA = (struct Cyc_Absyn_ValueofType_Absyn_Type_struct *)_T3C1;
	  _T3D9 = _T3DA->f1;
	}{ struct Cyc_Absyn_Exp * e = _T3D9;
	  _T10A = Cyc_Tcenv_allow_valueof(te);
	  _T10B = e;
	  Cyc_Tcexp_tcExp(_T10A,0,_T10B);
	  _T10C = Cyc_Tcutil_coerce_uint_type(e);
	  if (_T10C) { goto _TL17A;
	  }else { goto _TL17C;
	  }
	  _TL17C: { struct Cyc_Warn_String_Warn_Warg_struct _T3DA;
	    _T3DA.tag = 0;
	    _T3DA.f1 = _tag_fat("valueof_t requires an int expression",sizeof(char),
				37U);
	    _T10D = _T3DA;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T3DA = _T10D;
	    void * _T3DB[1];
	    _T3DB[0] = &_T3DA;
	    _T10E = loc;
	    _T10F = _tag_fat(_T3DB,sizeof(void *),1);
	    Cyc_Warn_err2(_T10E,_T10F);
	  }goto _TL17B;
	  _TL17A: _TL17B: env = Cyc_Tctyp_i_check_type_level_exp(e,env);
	  goto _LL3;
	}
      case 11: 
	{ struct Cyc_Absyn_TypeofType_Absyn_Type_struct * _T3DA = (struct Cyc_Absyn_TypeofType_Absyn_Type_struct *)_T3C1;
	  _T3D9 = _T3DA->f1;
	}{ struct Cyc_Absyn_Exp * e = _T3D9;
	  _T110 = Cyc_Tcenv_allow_valueof(te);
	  _T111 = e;
	  Cyc_Tcexp_tcExp(_T110,0,_T111);
	  goto _LL3;
	}
      case 5: 
	{ struct Cyc_Absyn_ArrayType_Absyn_Type_struct * _T3DA = (struct Cyc_Absyn_ArrayType_Absyn_Type_struct *)_T3C1;
	  _T112 = _T3DA->f1;
	  _T3D9 = _T112.elt_type;
	  _T113 = (struct Cyc_Absyn_ArrayType_Absyn_Type_struct *)_T3C1;
	  _T114 = &(_T113->f1).tq;
	  _T3D8 = (struct Cyc_Absyn_Tqual *)_T114;
	  _T115 = (struct Cyc_Absyn_ArrayType_Absyn_Type_struct *)_T3C1;
	  _T116 = &(_T115->f1).num_elts;
	  _T3D6 = (struct Cyc_Absyn_Exp * *)_T116;
	  _T117 = _T3DA->f1;
	  _T3D5 = _T117.zero_term;
	  _T118 = _T3DA->f1;
	  _T3D0 = _T118.zt_loc;
	}{ void * t1 = _T3D9;
	  struct Cyc_Absyn_Tqual * tqp = _T3D8;
	  struct Cyc_Absyn_Exp * * eptr = _T3D6;
	  void * zt = _T3D5;
	  unsigned int ztl = _T3D0;
	  _T119 = eptr;
	  { struct Cyc_Absyn_Exp * e = *_T119;
	    _T11A = env;
	    _T11B = &Cyc_Kinds_mk;
	    _T11C = (struct Cyc_Absyn_Kind *)_T11B;
	    _T11D = t1;
	    _T11E = allow_abs_aggr;
	    env = Cyc_Tctyp_i_check_type(_T11A,_T11C,_T11D,1,_T11E);
	    _T11F = tqp;
	    _T120 = loc;
	    _T121 = tqp;
	    _T122 = _T121->print_const;
	    _T123 = t1;
	    _T11F->real_const = Cyc_Tcutil_extract_const_from_typedef(_T120,
								      _T122,
								      _T123);
	    { long is_zero_terminated = Cyc_Tcutil_force_type2bool(0,zt);
	      _T124 = is_zero_terminated;
	      if (! _T124) { goto _TL17D;
	      }
	      _T125 = Cyc_Tcutil_admits_zero(t1);
	      if (_T125) { goto _TL17F;
	      }else { goto _TL181;
	      }
	      _TL181: { struct Cyc_Warn_String_Warn_Warg_struct _T3DA;
		_T3DA.tag = 0;
		_T3DA.f1 = _tag_fat("cannot have a zero-terminated array of ",
				    sizeof(char),40U);
		_T126 = _T3DA;
	      }{ struct Cyc_Warn_String_Warn_Warg_struct _T3DA = _T126;
		{ struct Cyc_Warn_Typ_Warn_Warg_struct _T3DB;
		  _T3DB.tag = 2;
		  _T3DB.f1 = t1;
		  _T127 = _T3DB;
		}{ struct Cyc_Warn_Typ_Warn_Warg_struct _T3DB = _T127;
		  { struct Cyc_Warn_String_Warn_Warg_struct _T3DC;
		    _T3DC.tag = 0;
		    _T3DC.f1 = _tag_fat(" elements",sizeof(char),10U);
		    _T128 = _T3DC;
		  }{ struct Cyc_Warn_String_Warn_Warg_struct _T3DC = _T128;
		    void * _T3DD[3];
		    _T3DD[0] = &_T3DA;
		    _T3DD[1] = &_T3DB;
		    _T3DD[2] = &_T3DC;
		    _T129 = loc;
		    _T12A = _tag_fat(_T3DD,sizeof(void *),3);
		    Cyc_Warn_err2(_T129,_T12A);
		  }
		}
	      }goto _TL180;
	      _TL17F: _TL180: goto _TL17E;
	      _TL17D: _TL17E: if (e != 0) { goto _TL182;
	      }
	      _T12B = is_zero_terminated;
	      if (_T12B) { goto _TL184;
	      }else { goto _TL186;
	      }
	      _TL186: { struct Cyc_Warn_String_Warn_Warg_struct _T3DA;
		_T3DA.tag = 0;
		_T3DA.f1 = _tag_fat("array bound defaults to 1 here",sizeof(char),
				    31U);
		_T12C = _T3DA;
	      }{ struct Cyc_Warn_String_Warn_Warg_struct _T3DA = _T12C;
		void * _T3DB[1];
		_T3DB[0] = &_T3DA;
		_T12D = loc;
		_T12E = _tag_fat(_T3DB,sizeof(void *),1);
		Cyc_Warn_warn2(_T12D,_T12E);
	      }goto _TL185;
	      _TL184: _TL185: _T12F = eptr;
	      e = Cyc_Absyn_uint_exp(1U,0U);
	      *_T12F = e;
	      goto _TL183;
	      _TL182: _TL183: _T130 = Cyc_Tcenv_allow_valueof(te);
	      _T131 = e;
	      Cyc_Tcexp_tcExp(_T130,0,_T131);
	      _T132 = Cyc_Tcutil_coerce_uint_type(e);
	      if (_T132) { goto _TL187;
	      }else { goto _TL189;
	      }
	      _TL189: { struct Cyc_Warn_String_Warn_Warg_struct _T3DA;
		_T3DA.tag = 0;
		_T3DA.f1 = _tag_fat("array bounds expression is not an unsigned int",
				    sizeof(char),47U);
		_T133 = _T3DA;
	      }{ struct Cyc_Warn_String_Warn_Warg_struct _T3DA = _T133;
		void * _T3DB[1];
		_T3DB[0] = &_T3DA;
		_T134 = loc;
		_T135 = _tag_fat(_T3DB,sizeof(void *),1);
		Cyc_Warn_err2(_T134,_T135);
	      }goto _TL188;
	      _TL187: _TL188: env = Cyc_Tctyp_i_check_type_level_exp(e,env);
	      { struct _tuple14 _T3DA = Cyc_Evexp_eval_const_uint_exp(e);
		long _T3DB;
		unsigned int _T3DC;
		_T3DC = _T3DA.f0;
		_T3DB = _T3DA.f1;
		{ unsigned int sz = _T3DC;
		  long known = _T3DB;
		  _T136 = is_zero_terminated;
		  if (! _T136) { goto _TL18A;
		  }
		  _T137 = known;
		  if (! _T137) { goto _TL18A;
		  }
		  if (sz >= 1U) { goto _TL18A;
		  }
		  { struct Cyc_Warn_String_Warn_Warg_struct _T3DD;
		    _T3DD.tag = 0;
		    _T3DD.f1 = _tag_fat("zero terminated array cannot have zero elements",
					sizeof(char),48U);
		    _T138 = _T3DD;
		  }{ struct Cyc_Warn_String_Warn_Warg_struct _T3DD = _T138;
		    void * _T3DE[1];
		    _T3DE[0] = &_T3DD;
		    _T139 = loc;
		    _T13A = _tag_fat(_T3DE,sizeof(void *),1);
		    Cyc_Warn_warn2(_T139,_T13A);
		  }goto _TL18B;
		  _TL18A: _TL18B: goto _LL3;
		}
	      }
	    }
	  }
	}
      case 6: 
	{ struct Cyc_Absyn_FnType_Absyn_Type_struct * _T3DA = (struct Cyc_Absyn_FnType_Absyn_Type_struct *)_T3C1;
	  _T13B = (struct Cyc_Absyn_FnType_Absyn_Type_struct *)_T3C1;
	  _T13C = &(_T13B->f1).tvars;
	  _T3D9 = (struct Cyc_List_List * *)_T13C;
	  _T13D = (struct Cyc_Absyn_FnType_Absyn_Type_struct *)_T3C1;
	  _T13E = &(_T13D->f1).effect;
	  _T3D8 = (void * *)_T13E;
	  _T13F = (struct Cyc_Absyn_FnType_Absyn_Type_struct *)_T3C1;
	  _T140 = &(_T13F->f1).ret_tqual;
	  _T3D6 = (struct Cyc_Absyn_Tqual *)_T140;
	  _T141 = _T3DA->f1;
	  _T3D5 = _T141.ret_type;
	  _T142 = _T3DA->f1;
	  _T3CF = _T142.args;
	  _T143 = _T3DA->f1;
	  _T3CE = _T143.c_varargs;
	  _T144 = _T3DA->f1;
	  _T3CD = _T144.cyc_varargs;
	  _T145 = (struct Cyc_Absyn_FnType_Absyn_Type_struct *)_T3C1;
	  _T146 = &(_T145->f1).qual_bnd;
	  _T3D4 = (struct Cyc_List_List * *)_T146;
	  _T147 = _T3DA->f1;
	  _T3CC = _T147.attributes;
	  _T148 = _T3DA->f1;
	  _T3CB = _T148.checks_clause;
	  _T149 = (struct Cyc_Absyn_FnType_Absyn_Type_struct *)_T3C1;
	  _T14A = &(_T149->f1).checks_assn;
	  _T3D3 = (struct Cyc_AssnDef_ExistAssnFn * *)_T14A;
	  _T14B = _T3DA->f1;
	  _T3CA = _T14B.requires_clause;
	  _T14C = (struct Cyc_Absyn_FnType_Absyn_Type_struct *)_T3C1;
	  _T14D = &(_T14C->f1).requires_assn;
	  _T3D2 = (struct Cyc_AssnDef_ExistAssnFn * *)_T14D;
	  _T14E = _T3DA->f1;
	  _T3C9 = _T14E.ensures_clause;
	  _T14F = (struct Cyc_Absyn_FnType_Absyn_Type_struct *)_T3C1;
	  _T150 = &(_T14F->f1).ensures_assn;
	  _T3D1 = (struct Cyc_AssnDef_ExistAssnFn * *)_T150;
	  _T151 = _T3DA->f1;
	  _T3C8 = _T151.throws_clause;
	  _T152 = (struct Cyc_Absyn_FnType_Absyn_Type_struct *)_T3C1;
	  _T153 = &(_T152->f1).throws_assn;
	  _T3C7 = (struct Cyc_AssnDef_ExistAssnFn * *)_T153;
	  _T154 = _T3DA->f1;
	  _T3C6 = _T154.return_value;
	  _T155 = _T3DA->f1;
	  _T3C5 = _T155.arg_vardecls;
	  _T156 = _T3DA->f1;
	  _T3C4 = _T156.effconstr;
	}{ struct Cyc_List_List * * btvs = _T3D9;
	  void * * eff = _T3D8;
	  struct Cyc_Absyn_Tqual * rtq = _T3D6;
	  void * tr = _T3D5;
	  struct Cyc_List_List * args = _T3CF;
	  long c_vararg = _T3CE;
	  struct Cyc_Absyn_VarargInfo * cyc_vararg = _T3CD;
	  struct Cyc_List_List * * qb = (struct Cyc_List_List * *)_T3D4;
	  struct Cyc_List_List * atts = _T3CC;
	  struct Cyc_Absyn_Exp * chk = _T3CB;
	  struct Cyc_AssnDef_ExistAssnFn * * chk_relns = (struct Cyc_AssnDef_ExistAssnFn * *)_T3D3;
	  struct Cyc_Absyn_Exp * req = _T3CA;
	  struct Cyc_AssnDef_ExistAssnFn * * req_relns = (struct Cyc_AssnDef_ExistAssnFn * *)_T3D2;
	  struct Cyc_Absyn_Exp * ens = _T3C9;
	  struct Cyc_AssnDef_ExistAssnFn * * ens_relns = (struct Cyc_AssnDef_ExistAssnFn * *)_T3D1;
	  struct Cyc_Absyn_Exp * thrws = _T3C8;
	  struct Cyc_AssnDef_ExistAssnFn * * thrws_relns = (struct Cyc_AssnDef_ExistAssnFn * *)_T3C7;
	  struct Cyc_Absyn_Vardecl * return_vd = _T3C6;
	  struct Cyc_List_List * arg_vds = _T3C5;
	  struct Cyc_List_List * effc = _T3C4;
	  int num_formats = 0;
	  int is_cdecl = 0;
	  int is_stdcall = 0;
	  int is_fastcall = 0;
	  enum Cyc_Absyn_Format_Type ft = 0U;
	  int fmt_desc_arg = - 1;
	  int fmt_arg_start = - 1;
	  _TL18F: if (atts != 0) { goto _TL18D;
	  }else { goto _TL18E;
	  }
	  _TL18D: _T157 = atts;
	  { void * _T3DA = _T157->hd;
	    int _T3DB;
	    int _T3DC;
	    enum Cyc_Absyn_Format_Type _T3DD;
	    _T158 = (int *)_T3DA;
	    _T159 = *_T158;
	    switch (_T159) {
	    case 1: 
	      is_stdcall = 1;
	      goto _LL46;
	    case 2: 
	      is_cdecl = 1;
	      goto _LL46;
	    case 3: 
	      is_fastcall = 1;
	      goto _LL46;
	    case 20: 
	      { struct Cyc_Absyn_Format_att_Absyn_Attribute_struct * _T3DE = (struct Cyc_Absyn_Format_att_Absyn_Attribute_struct *)_T3DA;
		_T3DD = _T3DE->f1;
		_T3DC = _T3DE->f2;
		_T3DB = _T3DE->f3;
	      }{ enum Cyc_Absyn_Format_Type fmttype = _T3DD;
		int i = _T3DC;
		int j = _T3DB;
		num_formats = num_formats + 1;
		ft = fmttype;
		fmt_desc_arg = i;
		fmt_arg_start = j;
		goto _LL46;
	      }
	    default: 
	      _T15A = atts;
	      _T15B = _T15A->hd;
	      _T15C = Cyc_Atts_fntype_att(_T15B);
	      if (_T15C) { goto _TL191;
	      }else { goto _TL193;
	      }
	      _TL193: { struct Cyc_Warn_String_Warn_Warg_struct _T3DE;
		_T3DE.tag = 0;
		_T3DE.f1 = _tag_fat("bad function type attribute ",sizeof(char),
				    29U);
		_T15D = _T3DE;
	      }{ struct Cyc_Warn_String_Warn_Warg_struct _T3DE = _T15D;
		{ struct Cyc_Warn_Attribute_Warn_Warg_struct _T3DF;
		  _T3DF.tag = 10;
		  _T15F = atts;
		  _T3DF.f1 = _T15F->hd;
		  _T15E = _T3DF;
		}{ struct Cyc_Warn_Attribute_Warn_Warg_struct _T3DF = _T15E;
		  void * _T3E0[2];
		  _T3E0[0] = &_T3DE;
		  _T3E0[1] = &_T3DF;
		  _T160 = loc;
		  _T161 = _tag_fat(_T3E0,sizeof(void *),2);
		  Cyc_Warn_err2(_T160,_T161);
		}
	      }goto _TL192;
	      _TL191: _TL192: ;
	    }
	    _LL46: ;
	  }_T162 = atts;
	  atts = _T162->tl;
	  goto _TL18F;
	  _TL18E: _T163 = is_stdcall + is_cdecl;
	  _T164 = is_fastcall;
	  _T165 = _T163 + _T164;
	  if (_T165 <= 1) { goto _TL194;
	  }
	  { struct Cyc_Warn_String_Warn_Warg_struct _T3DA;
	    _T3DA.tag = 0;
	    _T3DA.f1 = _tag_fat("function can't have multiple calling conventions",
				sizeof(char),49U);
	    _T166 = _T3DA;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T3DA = _T166;
	    void * _T3DB[1];
	    _T3DB[0] = &_T3DA;
	    _T167 = loc;
	    _T168 = _tag_fat(_T3DB,sizeof(void *),1);
	    Cyc_Warn_err2(_T167,_T168);
	  }goto _TL195;
	  _TL194: _TL195: if (num_formats <= 1) { goto _TL196;
	  }
	  { struct Cyc_Warn_String_Warn_Warg_struct _T3DA;
	    _T3DA.tag = 0;
	    _T3DA.f1 = _tag_fat("function can't have multiple format attributes",
				sizeof(char),47U);
	    _T169 = _T3DA;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T3DA = _T169;
	    void * _T3DB[1];
	    _T3DB[0] = &_T3DA;
	    _T16A = loc;
	    _T16B = _tag_fat(_T3DB,sizeof(void *),1);
	    Cyc_Warn_err2(_T16A,_T16B);
	  }goto _TL197;
	  _TL196: _TL197: _T16C = loc;
	  _T16D = btvs;
	  _T16E = *_T16D;
	  Cyc_Tcutil_check_unique_tvars(_T16C,_T16E);
	  _T16F = btvs;
	  { struct Cyc_List_List * b = *_T16F;
	    _TL19B: if (b != 0) { goto _TL199;
	    }else { goto _TL19A;
	    }
	    _TL199: _T170 = b;
	    _T171 = _T170->hd;
	    _T172 = (struct Cyc_Absyn_Tvar *)_T171;
	    _T172->identity = Cyc_Tcutil_new_tvar_id();
	    _T173 = env;
	    _T174 = _T173.kind_env;
	    _T175 = b;
	    _T176 = _T175->hd;
	    _T177 = (struct Cyc_Absyn_Tvar *)_T176;
	    env.kind_env = Cyc_Tctyp_add_bound_tvar(_T174,_T177);
	    _T178 = b;
	    _T179 = _T178->hd;
	    _T17A = (struct Cyc_Absyn_Tvar *)_T179;
	    _T17B = _T17A->kind;
	    { void * _T3DA = Cyc_Kinds_compress_kb(_T17B);
	      _T17C = (int *)_T3DA;
	      _T17D = *_T17C;
	      if (_T17D != 0) { goto _TL19C;
	      }
	      _T17E = (struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct *)_T3DA;
	      _T17F = _T17E->f1;
	      _T180 = (struct Cyc_Absyn_Kind *)_T17F;
	      _T181 = _T180->kind;
	      if (_T181 != Cyc_Absyn_MemKind) { goto _TL19E;
	      }
	      { struct Cyc_Warn_String_Warn_Warg_struct _T3DB;
		_T3DB.tag = 0;
		_T3DB.f1 = _tag_fat("function abstracts Mem type variable ",
				    sizeof(char),38U);
		_T182 = _T3DB;
	      }{ struct Cyc_Warn_String_Warn_Warg_struct _T3DB = _T182;
		{ struct Cyc_Warn_Tvar_Warn_Warg_struct _T3DC;
		  _T3DC.tag = 7;
		  _T184 = b;
		  _T185 = _T184->hd;
		  _T3DC.f1 = (struct Cyc_Absyn_Tvar *)_T185;
		  _T183 = _T3DC;
		}{ struct Cyc_Warn_Tvar_Warn_Warg_struct _T3DC = _T183;
		  void * _T3DD[2];
		  _T3DD[0] = &_T3DB;
		  _T3DD[1] = &_T3DC;
		  _T186 = loc;
		  _T187 = _tag_fat(_T3DD,sizeof(void *),2);
		  Cyc_Warn_err2(_T186,_T187);
		}
	      }goto _LL51;
	      _TL19E: goto _LL54;
	      _TL19C: _LL54: goto _LL51;
	      _LL51: ;
	    }_T188 = b;
	    b = _T188->tl;
	    goto _TL19B;
	    _TL19A: ;
	  }{ struct Cyc_Tctyp_CVTEnv _T3DA;
	    _T3DA.loc = loc;
	    _T3DA.te = te;
	    _T18A = env;
	    _T3DA.kind_env = _T18A.kind_env;
	    _T3DA.fn_result = 1;
	    _T3DA.def_aliasable = 1;
	    _T3DA.inst_type_evar = 0;
	    _T18B = env;
	    _T3DA.generalize_evars = _T18B.generalize_evars;
	    _T3DA.allow_aqual_bounds = 1;
	    _T3DA.free_vars = 0;
	    _T3DA.free_evars = 0;
	    _T3DA.free_qualvars = 0;
	    _T189 = _T3DA;
	  }{ struct Cyc_Tctyp_CVTEnv new_env = _T189;
	    _T18C = new_env;
	    _T18D = &Cyc_Kinds_mk;
	    _T18E = (struct Cyc_Absyn_Kind *)_T18D;
	    _T18F = tr;
	    new_env = Cyc_Tctyp_i_check_type(_T18C,_T18E,_T18F,1,1);
	    _T190 = rtq;
	    _T191 = loc;
	    _T192 = rtq;
	    _T193 = _T192->print_const;
	    _T194 = tr;
	    _T190->real_const = Cyc_Tcutil_extract_const_from_typedef(_T191,
								      _T193,
								      _T194);
	    new_env.fn_result = 0;
	    { struct Cyc_List_List * a = args;
	      _TL1A3: if (a != 0) { goto _TL1A1;
	      }else { goto _TL1A2;
	      }
	      _TL1A1: _T195 = a;
	      _T196 = _T195->hd;
	      { struct _tuple9 * trip = (struct _tuple9 *)_T196;
		_T197 = trip;
		_T198 = *_T197;
		{ void * t = _T198.f2;
		  _T199 = new_env;
		  _T19A = &Cyc_Kinds_mk;
		  _T19B = (struct Cyc_Absyn_Kind *)_T19A;
		  _T19C = t;
		  new_env = Cyc_Tctyp_i_check_type(_T199,_T19B,_T19C,1,1);
		  _T19D = loc;
		  _T19E = trip;
		  _T19F = *_T19E;
		  _T1A0 = _T19F.f1;
		  _T1A1 = _T1A0.print_const;
		  _T1A2 = t;
		  { long ec = Cyc_Tcutil_extract_const_from_typedef(_T19D,
								    _T1A1,
								    _T1A2);
		    _T1A3 = trip;
		    ((*_T1A3).f1).real_const = ec;
		    _T1A4 = Cyc_Tcutil_is_array_type(t);
		    if (! _T1A4) { goto _TL1A4;
		    }
		    { void * ptr_rgn = Cyc_Absyn_new_evar(0,0);
		      _T1A5 = new_env;
		      _T1A6 = &Cyc_Kinds_ek;
		      _T1A7 = (struct Cyc_Absyn_Kind *)_T1A6;
		      _T1A8 = ptr_rgn;
		      new_env = Cyc_Tctyp_i_check_type(_T1A5,_T1A7,_T1A8,
						       1,1);
		      _T1A9 = &Cyc_Kinds_aqko;
		      _T1AA = (struct Cyc_Core_Opt *)_T1A9;
		      _T1AB = Cyc_Absyn_new_evar(_T1AA,0);
		      _T1AC = Cyc_Absyn_al_qual_type;
		      { void * aqt = Cyc_Absyn_aqual_var_type(_T1AB,_T1AC);
			_T1AD = new_env;
			_T1AE = &Cyc_Kinds_aqk;
			_T1AF = (struct Cyc_Absyn_Kind *)_T1AE;
			_T1B0 = aqt;
			new_env = Cyc_Tctyp_i_check_type(_T1AD,_T1AF,_T1B0,
							 1,1);
			_T1B1 = trip;
			(*_T1B1).f2 = Cyc_Tcutil_promote_array(t,ptr_rgn,
							       aqt,0);
		      }
		    }goto _TL1A5;
		    _TL1A4: _TL1A5: ;
		  }
		}
	      }_T1B2 = a;
	      a = _T1B2->tl;
	      goto _TL1A3;
	      _TL1A2: ;
	    }if (cyc_vararg == 0) { goto _TL1A6;
	    }
	    _T1B3 = c_vararg;
	    if (! _T1B3) { goto _TL1A8;
	    }
	    { struct Cyc_Warn_String_Warn_Warg_struct _T3DA;
	      _T3DA.tag = 0;
	      _T3DA.f1 = _tag_fat("both c_vararg and cyc_vararg",sizeof(char),
				  29U);
	      _T1B4 = _T3DA;
	    }{ struct Cyc_Warn_String_Warn_Warg_struct _T3DA = _T1B4;
	      void * _T3DB[1];
	      _T3DB[0] = &_T3DA;
	      _T1B6 = Cyc_Warn_impos2;
	      { int (* _T3DC)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T1B6;
		_T1B5 = _T3DC;
	      }_T1B7 = _tag_fat(_T3DB,sizeof(void *),1);
	      _T1B5(_T1B7);
	    }goto _TL1A9;
	    _TL1A8: _TL1A9: _T1B8 = cyc_vararg;
	    { struct Cyc_Absyn_VarargInfo _T3DA = *_T1B8;
	      long _T3DB;
	      void * _T3DC;
	      _T3DC = _T3DA.type;
	      _T3DB = _T3DA.inject;
	      { void * vt = _T3DC;
		long vi = _T3DB;
		_T1B9 = new_env;
		_T1BA = &Cyc_Kinds_mk;
		_T1BB = (struct Cyc_Absyn_Kind *)_T1BA;
		_T1BC = vt;
		new_env = Cyc_Tctyp_i_check_type(_T1B9,_T1BB,_T1BC,1,1);
		_T1BD = cyc_vararg;
		_T1BE = loc;
		_T1BF = cyc_vararg;
		_T1C0 = _T1BF->tq;
		_T1C1 = _T1C0.print_const;
		_T1C2 = vt;
		(_T1BD->tq).real_const = Cyc_Tcutil_extract_const_from_typedef(_T1BE,
									       _T1C1,
									       _T1C2);
		_T1C3 = vi;
		if (! _T1C3) { goto _TL1AA;
		}
		{ void * _T3DD = Cyc_Absyn_compress(vt);
		  void * _T3DE;
		  void * _T3DF;
		  void * _T3E0;
		  _T1C4 = (int *)_T3DD;
		  _T1C5 = *_T1C4;
		  if (_T1C5 != 4) { goto _TL1AC;
		  }
		  { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T3E1 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T3DD;
		    _T1C6 = _T3E1->f1;
		    _T3E0 = _T1C6.elt_type;
		    _T1C7 = _T3E1->f1;
		    _T1C8 = _T1C7.ptr_atts;
		    _T3DF = _T1C8.bounds;
		    _T1C9 = _T3E1->f1;
		    _T1CA = _T1C9.ptr_atts;
		    _T3DE = _T1CA.zero_term;
		  }{ void * et = _T3E0;
		    void * bs = _T3DF;
		    void * zt = _T3DE;
		    { void * _T3E1 = Cyc_Absyn_compress(et);
		      _T1CB = (int *)_T3E1;
		      _T1CC = *_T1CB;
		      if (_T1CC != 0) { goto _TL1AE;
		      }
		      _T1CD = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T3E1;
		      _T1CE = _T1CD->f1;
		      _T1CF = (int *)_T1CE;
		      _T1D0 = *_T1CF;
		      if (_T1D0 != 22) { goto _TL1B0;
		      }
		      _T1D1 = Cyc_Tcutil_force_type2bool(0,zt);
		      if (! _T1D1) { goto _TL1B2;
		      }
		      { struct Cyc_Warn_String_Warn_Warg_struct _T3E2;
			_T3E2.tag = 0;
			_T3E2.f1 = _tag_fat("can't inject into a zeroterm pointer",
					    sizeof(char),37U);
			_T1D2 = _T3E2;
		      }{ struct Cyc_Warn_String_Warn_Warg_struct _T3E2 = _T1D2;
			void * _T3E3[1];
			_T3E3[0] = &_T3E2;
			_T1D3 = loc;
			_T1D4 = _tag_fat(_T3E3,sizeof(void *),1);
			Cyc_Warn_err2(_T1D3,_T1D4);
		      }goto _TL1B3;
		      _TL1B2: _TL1B3: _T1D5 = Cyc_Absyn_bounds_one();
		      _T1D6 = bs;
		      _T1D7 = Cyc_Unify_unify(_T1D5,_T1D6);
		      if (_T1D7) { goto _TL1B4;
		      }else { goto _TL1B6;
		      }
		      _TL1B6: _T1D8 = Cyc_Tcutil_is_cvar_type(bs);
		      if (_T1D8) { goto _TL1BA;
		      }else { goto _TL1B9;
		      }
		      _TL1BA: _T1D9 = loc;
		      _T1DA = bs;
		      _T1DB = Cyc_Absyn_thinconst();
		      _T1DC = Cyc_BansheeIf_equality_constraint(_T1DA,_T1DB);
		      _T1DD = Cyc_BansheeIf_add_constraint(_T1D9,_T1DC);
		      if (_T1DD) { goto _TL1B7;
		      }else { goto _TL1B9;
		      }
		      _TL1B9: { struct Cyc_Warn_String_Warn_Warg_struct _T3E2;
			_T3E2.tag = 0;
			_T3E2.f1 = _tag_fat("can't inject into a fat pointer to datatype",
					    sizeof(char),44U);
			_T1DE = _T3E2;
		      }{ struct Cyc_Warn_String_Warn_Warg_struct _T3E2 = _T1DE;
			void * _T3E3[1];
			_T3E3[0] = &_T3E2;
			_T1DF = loc;
			_T1E0 = _tag_fat(_T3E3,sizeof(void *),1);
			Cyc_Warn_err2(_T1DF,_T1E0);
		      }goto _TL1B8;
		      _TL1B7: _TL1B8: goto _TL1B5;
		      _TL1B4: _TL1B5: goto _LL5E;
		      _TL1B0: goto _LL61;
		      _TL1AE: _LL61: { struct Cyc_Warn_String_Warn_Warg_struct _T3E2;
			_T3E2.tag = 0;
			_T3E2.f1 = _tag_fat("can't inject a non-datatype type",
					    sizeof(char),33U);
			_T1E1 = _T3E2;
		      }{ struct Cyc_Warn_String_Warn_Warg_struct _T3E2 = _T1E1;
			void * _T3E3[1];
			_T3E3[0] = &_T3E2;
			_T1E2 = loc;
			_T1E3 = _tag_fat(_T3E3,sizeof(void *),1);
			Cyc_Warn_err2(_T1E2,_T1E3);
		      }goto _LL5E;
		      _LL5E: ;
		    }goto _LL59;
		  }_TL1AC: { struct Cyc_Warn_String_Warn_Warg_struct _T3E1;
		    _T3E1.tag = 0;
		    _T3E1.f1 = _tag_fat("expecting a datatype pointer type",
					sizeof(char),34U);
		    _T1E4 = _T3E1;
		  }{ struct Cyc_Warn_String_Warn_Warg_struct _T3E1 = _T1E4;
		    void * _T3E2[1];
		    _T3E2[0] = &_T3E1;
		    _T1E5 = loc;
		    _T1E6 = _tag_fat(_T3E2,sizeof(void *),1);
		    Cyc_Warn_err2(_T1E5,_T1E6);
		  }goto _LL59;
		  _LL59: ;
		}goto _TL1AB;
		_TL1AA: _TL1AB: ;
	      }
	    }goto _TL1A7;
	    _TL1A6: _TL1A7: if (num_formats <= 0) { goto _TL1BB;
	    }
	    { int num_args = Cyc_List_length(args);
	      if (fmt_desc_arg < 0) { goto _TL1BF;
	      }else { goto _TL1C3;
	      }
	      _TL1C3: if (fmt_desc_arg > num_args) { goto _TL1BF;
	      }else { goto _TL1C2;
	      }
	      _TL1C2: if (fmt_arg_start < 0) { goto _TL1BF;
	      }else { goto _TL1C1;
	      }
	      _TL1C1: if (cyc_vararg == 0) { goto _TL1C5;
	      }else { goto _TL1C0;
	      }
	      _TL1C5: _T1E7 = c_vararg;
	      if (_T1E7) { goto _TL1C0;
	      }else { goto _TL1C4;
	      }
	      _TL1C4: if (fmt_arg_start != 0) { goto _TL1BF;
	      }else { goto _TL1C0;
	      }
	      _TL1C0: if (cyc_vararg != 0) { goto _TL1C6;
	      }else { goto _TL1C7;
	      }
	      _TL1C7: _T1E8 = c_vararg;
	      if (_T1E8) { goto _TL1C6;
	      }else { goto _TL1BD;
	      }
	      _TL1C6: _T1E9 = fmt_arg_start;
	      _T1EA = num_args + 1;
	      if (_T1E9 != _T1EA) { goto _TL1BF;
	      }else { goto _TL1BD;
	      }
	      _TL1BF: { struct Cyc_Warn_String_Warn_Warg_struct _T3DA;
		_T3DA.tag = 0;
		_T3DA.f1 = _tag_fat("bad format descriptor",sizeof(char),
				    22U);
		_T1EB = _T3DA;
	      }{ struct Cyc_Warn_String_Warn_Warg_struct _T3DA = _T1EB;
		void * _T3DB[1];
		_T3DB[0] = &_T3DA;
		_T1EC = loc;
		_T1ED = _tag_fat(_T3DB,sizeof(void *),1);
		Cyc_Warn_err2(_T1EC,_T1ED);
	      }goto _TL1BE;
	      _TL1BD: _T1EF = Cyc_List_nth;
	      { struct _tuple9 * (* _T3DA)(struct Cyc_List_List *,int) = (struct _tuple9 * (*)(struct Cyc_List_List *,
											       int))_T1EF;
		_T1EE = _T3DA;
	      }_T1F0 = args;
	      _T1F1 = fmt_desc_arg - 1;
	      _T1F2 = _T1EE(_T1F0,_T1F1);
	      { struct _tuple9 _T3DA = *_T1F2;
		void * _T3DB;
		_T3DB = _T3DA.f2;
		{ void * t = _T3DB;
		  { void * _T3DC = Cyc_Absyn_compress(t);
		    void * _T3DD;
		    void * _T3DE;
		    _T1F3 = (int *)_T3DC;
		    _T1F4 = *_T1F3;
		    if (_T1F4 != 4) { goto _TL1C8;
		    }
		    { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T3DF = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T3DC;
		      _T1F5 = _T3DF->f1;
		      _T3DE = _T1F5.elt_type;
		      _T1F6 = _T3DF->f1;
		      _T1F7 = _T1F6.ptr_atts;
		      _T3DD = _T1F7.bounds;
		    }{ void * et = _T3DE;
		      void * b = _T3DD;
		      _T1F8 = Cyc_Tcutil_is_char_type(et);
		      if (_T1F8) { goto _TL1CA;
		      }else { goto _TL1CC;
		      }
		      _TL1CC: { struct Cyc_Warn_String_Warn_Warg_struct _T3DF;
			_T3DF.tag = 0;
			_T3DF.f1 = _tag_fat("format descriptor is not a string",
					    sizeof(char),34U);
			_T1F9 = _T3DF;
		      }{ struct Cyc_Warn_String_Warn_Warg_struct _T3DF = _T1F9;
			void * _T3E0[1];
			_T3E0[0] = &_T3DF;
			_T1FA = loc;
			_T1FB = _tag_fat(_T3E0,sizeof(void *),1);
			Cyc_Warn_err2(_T1FA,_T1FB);
		      }goto _TL1CB;
		      _TL1CA: _T1FC = Cyc_Tcutil_is_cvar_type(b);
		      if (_T1FC) { goto _TL1CD;
		      }else { goto _TL1CF;
		      }
		      _TL1CF: _T1FD = Cyc_Absyn_bounds_one();
		      _T1FE = b;
		      { struct Cyc_Absyn_Exp * e = Cyc_Tcutil_get_bounds_exp(_T1FD,
									     _T1FE);
			if (e != 0) { goto _TL1D0;
			}
			_T1FF = c_vararg;
			if (! _T1FF) { goto _TL1D0;
			}
			{ struct Cyc_Warn_String_Warn_Warg_struct _T3DF;
			  _T3DF.tag = 0;
			  _T3DF.f1 = _tag_fat("format descriptor is not a char * type",
					      sizeof(char),39U);
			  _T200 = _T3DF;
			}{ struct Cyc_Warn_String_Warn_Warg_struct _T3DF = _T200;
			  void * _T3E0[1];
			  _T3E0[0] = &_T3DF;
			  _T201 = loc;
			  _T202 = _tag_fat(_T3E0,sizeof(void *),1);
			  Cyc_Warn_err2(_T201,_T202);
			}goto _TL1D1;
			_TL1D0: if (e == 0) { goto _TL1D2;
			}
			_T203 = c_vararg;
			if (_T203) { goto _TL1D2;
			}else { goto _TL1D4;
			}
			_TL1D4: { struct Cyc_Warn_String_Warn_Warg_struct _T3DF;
			  _T3DF.tag = 0;
			  _T3DF.f1 = _tag_fat("format descriptor is not a char ? type",
					      sizeof(char),39U);
			  _T204 = _T3DF;
			}{ struct Cyc_Warn_String_Warn_Warg_struct _T3DF = _T204;
			  void * _T3E0[1];
			  _T3E0[0] = &_T3DF;
			  _T205 = loc;
			  _T206 = _tag_fat(_T3E0,sizeof(void *),1);
			  Cyc_Warn_err2(_T205,_T206);
			}goto _TL1D3;
			_TL1D2: _TL1D3: _TL1D1: ;
		      }goto _TL1CE;
		      _TL1CD: _T207 = c_vararg;
		      if (! _T207) { goto _TL1D5;
		      }
		      _T208 = loc;
		      _T209 = Cyc_Tcutil_ptrbnd_cvar_equivalent(b);
		      _T20A = Cyc_Absyn_thinconst();
		      _T20B = Cyc_BansheeIf_equality_constraint(_T209,_T20A);
		      _T20C = Cyc_BansheeIf_add_constraint(_T208,_T20B);
		      if (_T20C) { goto _TL1D7;
		      }else { goto _TL1D9;
		      }
		      _TL1D9: { struct Cyc_Warn_String_Warn_Warg_struct _T3DF;
			_T3DF.tag = 0;
			_T3DF.f1 = _tag_fat("format descriptor is not a char ? type",
					    sizeof(char),39U);
			_T20D = _T3DF;
		      }{ struct Cyc_Warn_String_Warn_Warg_struct _T3DF = _T20D;
			void * _T3E0[1];
			_T3E0[0] = &_T3DF;
			_T20E = loc;
			_T20F = _tag_fat(_T3E0,sizeof(void *),1);
			Cyc_Warn_err2(_T20E,_T20F);
		      }goto _TL1D8;
		      _TL1D7: _TL1D8: goto _TL1D6;
		      _TL1D5: _T210 = loc;
		      _T211 = Cyc_Tcutil_ptrbnd_cvar_equivalent(b);
		      _T212 = Cyc_Absyn_fatconst();
		      _T213 = Cyc_BansheeIf_equality_constraint(_T211,_T212);
		      _T214 = Cyc_BansheeIf_add_constraint(_T210,_T213);
		      if (_T214) { goto _TL1DA;
		      }else { goto _TL1DC;
		      }
		      _TL1DC: { struct Cyc_Warn_String_Warn_Warg_struct _T3DF;
			_T3DF.tag = 0;
			_T3DF.f1 = _tag_fat("format descriptor is not a char * type",
					    sizeof(char),39U);
			_T215 = _T3DF;
		      }{ struct Cyc_Warn_String_Warn_Warg_struct _T3DF = _T215;
			void * _T3E0[1];
			_T3E0[0] = &_T3DF;
			_T216 = loc;
			_T217 = _tag_fat(_T3E0,sizeof(void *),1);
			Cyc_Warn_err2(_T216,_T217);
		      }goto _TL1DB;
		      _TL1DA: _TL1DB: _TL1D6: _TL1CE: _TL1CB: goto _LL66;
		    }_TL1C8: { struct Cyc_Warn_String_Warn_Warg_struct _T3DF;
		      _T3DF.tag = 0;
		      _T3DF.f1 = _tag_fat("format descriptor is not a string type",
					  sizeof(char),39U);
		      _T218 = _T3DF;
		    }{ struct Cyc_Warn_String_Warn_Warg_struct _T3DF = _T218;
		      void * _T3E0[1];
		      _T3E0[0] = &_T3DF;
		      _T219 = loc;
		      _T21A = _tag_fat(_T3E0,sizeof(void *),1);
		      Cyc_Warn_err2(_T219,_T21A);
		    }goto _LL66;
		    _LL66: ;
		  }if (fmt_arg_start == 0) { goto _TL1DD;
		  }
		  _T21B = c_vararg;
		  if (_T21B) { goto _TL1DD;
		  }else { goto _TL1DF;
		  }
		  _TL1DF: { long problem;
		    { struct _tuple18 _T3DC;
		      _T3DC.f0 = ft;
		      _T21D = cyc_vararg;
		      _T21E = _T21D->type;
		      _T21F = Cyc_Tcutil_pointer_elt_type(_T21E);
		      _T3DC.f1 = Cyc_Absyn_compress(_T21F);
		      _T21C = _T3DC;
		    }{ struct _tuple18 _T3DC = _T21C;
		      struct Cyc_Absyn_Datatypedecl * _T3DD;
		      _T220 = _T3DC.f0;
		      _T221 = (int)_T220;
		      switch (_T221) {
		      case Cyc_Absyn_Printf_ft: 
			_T222 = _T3DC.f1;
			_T223 = (int *)_T222;
			_T224 = *_T223;
			if (_T224 != 0) { goto _TL1E1;
			}
			_T225 = _T3DC.f1;
			_T226 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T225;
			_T227 = _T226->f1;
			_T228 = (int *)_T227;
			_T229 = *_T228;
			if (_T229 != 22) { goto _TL1E3;
			}
			_T22A = _T3DC.f1;
			_T22B = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T22A;
			_T22C = _T22B->f1;
			_T22D = (struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct *)_T22C;
			_T22E = _T22D->f1;
			_T22F = _T22E.KnownDatatype;
			_T230 = _T22F.tag;
			if (_T230 != 2) { goto _TL1E5;
			}
			_T231 = _T3DC.f1;
			{ struct Cyc_Absyn_AppType_Absyn_Type_struct * _T3DE = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T231;
			  _T232 = _T3DE->f1;
			  { struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct * _T3DF = (struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct *)_T232;
			    _T233 = _T3DF->f1;
			    _T234 = _T233.KnownDatatype;
			    _T235 = _T234.val;
			    { struct Cyc_Absyn_Datatypedecl * _T3E0 = *_T235;
			      _T3DD = _T3E0;
			    }
			  }
			}{ struct Cyc_Absyn_Datatypedecl * tud = _T3DD;
			  _T236 = tud;
			  _T237 = _T236->name;
			  _T238 = Cyc_Absyn_datatype_print_arg_qvar();
			  _T239 = Cyc_Absyn_qvar_cmp(_T237,_T238);
			  problem = _T239 != 0;
			  goto _LL6B;
			}_TL1E5: goto _LL70;
			_TL1E3: goto _LL70;
			_TL1E1: goto _LL70;
		      case Cyc_Absyn_Scanf_ft: 
			_T23A = _T3DC.f1;
			_T23B = (int *)_T23A;
			_T23C = *_T23B;
			if (_T23C != 0) { goto _TL1E7;
			}
			_T23D = _T3DC.f1;
			_T23E = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T23D;
			_T23F = _T23E->f1;
			_T240 = (int *)_T23F;
			_T241 = *_T240;
			if (_T241 != 22) { goto _TL1E9;
			}
			_T242 = _T3DC.f1;
			_T243 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T242;
			_T244 = _T243->f1;
			_T245 = (struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct *)_T244;
			_T246 = _T245->f1;
			_T247 = _T246.KnownDatatype;
			_T248 = _T247.tag;
			if (_T248 != 2) { goto _TL1EB;
			}
			_T249 = _T3DC.f1;
			{ struct Cyc_Absyn_AppType_Absyn_Type_struct * _T3DE = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T249;
			  _T24A = _T3DE->f1;
			  { struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct * _T3DF = (struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct *)_T24A;
			    _T24B = _T3DF->f1;
			    _T24C = _T24B.KnownDatatype;
			    _T24D = _T24C.val;
			    { struct Cyc_Absyn_Datatypedecl * _T3E0 = *_T24D;
			      _T3DD = _T3E0;
			    }
			  }
			}{ struct Cyc_Absyn_Datatypedecl * tud = _T3DD;
			  _T24E = tud;
			  _T24F = _T24E->name;
			  _T250 = Cyc_Absyn_datatype_scanf_arg_qvar();
			  _T251 = Cyc_Absyn_qvar_cmp(_T24F,_T250);
			  problem = _T251 != 0;
			  goto _LL6B;
			}_TL1EB: goto _LL70;
			_TL1E9: goto _LL70;
			_TL1E7: goto _LL70;
		      default: 
			_LL70: problem = 1;
			goto _LL6B;
		      }
		      _LL6B: ;
		    }_T252 = problem;
		    if (! _T252) { goto _TL1ED;
		    }
		    { struct Cyc_Warn_String_Warn_Warg_struct _T3DC;
		      _T3DC.tag = 0;
		      _T3DC.f1 = _tag_fat("format attribute and vararg types don't match",
					  sizeof(char),46U);
		      _T253 = _T3DC;
		    }{ struct Cyc_Warn_String_Warn_Warg_struct _T3DC = _T253;
		      void * _T3DD[1];
		      _T3DD[0] = &_T3DC;
		      _T254 = loc;
		      _T255 = _tag_fat(_T3DD,sizeof(void *),1);
		      Cyc_Warn_err2(_T254,_T255);
		    }goto _TL1EE;
		    _TL1ED: _TL1EE: ;
		  }goto _TL1DE;
		  _TL1DD: _TL1DE: ;
		}
	      }_TL1BE: ;
	    }goto _TL1BC;
	    _TL1BB: _TL1BC: _T256 = qb;
	    { struct Cyc_List_List * qbit = *_T256;
	      _TL1F2: if (qbit != 0) { goto _TL1F0;
	      }else { goto _TL1F1;
	      }
	      _TL1F0: _T257 = qbit;
	      _T258 = _T257->hd;
	      { struct _tuple0 * _T3DA = (struct _tuple0 *)_T258;
		void * _T3DB;
		void * _T3DC;
		{ struct _tuple0 _T3DD = *_T3DA;
		  _T3DC = _T3DD.f0;
		  _T3DB = _T3DD.f1;
		}{ void * tv = _T3DC;
		  void * bnd = _T3DB;
		  _T259 = new_env;
		  _T25A = &Cyc_Kinds_aqk;
		  _T25B = (struct Cyc_Absyn_Kind *)_T25A;
		  _T25C = bnd;
		  new_env = Cyc_Tctyp_i_check_type(_T259,_T25B,_T25C,0,0);
		  _T25D = new_env;
		  _T25E = &Cyc_Kinds_aqk;
		  _T25F = (struct Cyc_Absyn_Kind *)_T25E;
		  _T260 = tv;
		  new_env = Cyc_Tctyp_i_check_type(_T25D,_T25F,_T260,0,0);
		}
	      }_T261 = qbit;
	      qbit = _T261->tl;
	      goto _TL1F2;
	      _TL1F1: ;
	    }{ struct Cyc_List_List * ec = effc;
	      _TL1F6: if (ec != 0) { goto _TL1F4;
	      }else { goto _TL1F5;
	      }
	      _TL1F4: _T262 = ec;
	      { void * _T3DA = _T262->hd;
		void * _T3DB;
		void * _T3DC;
		_T263 = (int *)_T3DA;
		_T264 = *_T263;
		switch (_T264) {
		case 0: 
		  { struct Cyc_Absyn_SingleConstraint_Absyn_EffConstraint_struct * _T3DD = (struct Cyc_Absyn_SingleConstraint_Absyn_EffConstraint_struct *)_T3DA;
		    _T265 = _T3DD->f1;
		    _T3DC = (void *)_T265;
		  }{ void * t = _T3DC;
		    _T266 = new_env;
		    _T267 = &Cyc_Kinds_ek;
		    _T268 = (struct Cyc_Absyn_Kind *)_T267;
		    _T269 = t;
		    new_env = Cyc_Tctyp_i_check_type(_T266,_T268,_T269,1,
						     1);
		    goto _LL75;
		  }
		case 1: 
		  { struct Cyc_Absyn_DisjointConstraint_Absyn_EffConstraint_struct * _T3DD = (struct Cyc_Absyn_DisjointConstraint_Absyn_EffConstraint_struct *)_T3DA;
		    _T26A = _T3DD->f1;
		    _T3DC = (void *)_T26A;
		    _T26B = _T3DD->f2;
		    _T3DB = (void *)_T26B;
		  }{ void * t1 = _T3DC;
		    void * t2 = _T3DB;
		    _T3DC = t1;
		    _T3DB = t2;
		    goto _LL7B;
		  }
		default: 
		  { struct Cyc_Absyn_SubsetConstraint_Absyn_EffConstraint_struct * _T3DD = (struct Cyc_Absyn_SubsetConstraint_Absyn_EffConstraint_struct *)_T3DA;
		    _T26C = _T3DD->f1;
		    _T3DC = (void *)_T26C;
		    _T26D = _T3DD->f2;
		    _T3DB = (void *)_T26D;
		  }_LL7B: { void * t1 = _T3DC;
		    void * t2 = _T3DB;
		    _T26E = new_env;
		    _T26F = &Cyc_Kinds_ek;
		    _T270 = (struct Cyc_Absyn_Kind *)_T26F;
		    _T271 = t1;
		    new_env = Cyc_Tctyp_i_check_type(_T26E,_T270,_T271,1,
						     1);
		    _T272 = new_env;
		    _T273 = &Cyc_Kinds_ek;
		    _T274 = (struct Cyc_Absyn_Kind *)_T273;
		    _T275 = t2;
		    new_env = Cyc_Tctyp_i_check_type(_T272,_T274,_T275,1,
						     1);
		    goto _LL75;
		  }
		}
		_LL75: ;
	      }_T276 = ec;
	      ec = _T276->tl;
	      goto _TL1F6;
	      _TL1F5: ;
	    }{ struct Cyc_Tcenv_Fenv * fenv = Cyc_Tcenv_bogus_fenv(tr,args);
	      _T277 = new_env;
	      { struct Cyc_Tcenv_Tenv * old_te = _T277.te;
		{ struct Cyc_Tcenv_Tenv * _T3DA = _cycalloc(sizeof(struct Cyc_Tcenv_Tenv));
		  _T279 = te;
		  _T3DA->ns = _T279->ns;
		  _T27A = te;
		  _T3DA->ae = _T27A->ae;
		  _T3DA->le = fenv;
		  _T3DA->allow_valueof = 1;
		  _T27B = te;
		  _T3DA->in_extern_c_include = _T27B->in_extern_c_include;
		  _T27C = te;
		  _T3DA->in_tempest = _T27C->in_tempest;
		  _T27D = te;
		  _T3DA->tempest_generalize = _T27D->tempest_generalize;
		  _T27E = te;
		  _T3DA->in_extern_c_inc_repeat = _T27E->in_extern_c_inc_repeat;
		  _T278 = (struct Cyc_Tcenv_Tenv *)_T3DA;
		}new_env.te = _T278;
		{ struct Cyc_List_List * vds;
		  vds = _cycalloc(sizeof(struct Cyc_List_List));
		  _T27F = vds;
		  _T27F->hd = Cyc_AssnDef_memory;
		  _T280 = vds;
		  _T280->tl = arg_vds;
		  if (chk == 0) { goto _TL1F8;
		  }
		  _T281 = c_vararg;
		  if (_T281) { goto _TL1FC;
		  }else { goto _TL1FD;
		  }
		  _TL1FD: _T282 = cyc_vararg;
		  _T283 = (unsigned int)_T282;
		  if (_T283) { goto _TL1FC;
		  }else { goto _TL1FA;
		  }
		  _TL1FC: { struct Cyc_Warn_String_Warn_Warg_struct _T3DA;
		    _T3DA.tag = 0;
		    _T3DA.f1 = _tag_fat("we do not yet support @checks on vararg functions",
					sizeof(char),50U);
		    _T284 = _T3DA;
		  }{ struct Cyc_Warn_String_Warn_Warg_struct _T3DA = _T284;
		    void * _T3DB[1];
		    _T3DB[0] = &_T3DA;
		    _T285 = loc;
		    _T286 = _tag_fat(_T3DB,sizeof(void *),1);
		    Cyc_Warn_err2(_T285,_T286);
		  }goto _TL1FB;
		  _TL1FA: _TL1FB: _T287 = new_env;
		  _T288 = _tag_fat("@checks",sizeof(char),8U);
		  _T289 = chk;
		  { struct _tuple17 _T3DA = Cyc_Tctyp_check_clause(_T287,
								   _T288,
								   _T289);
		    struct Cyc_AssnDef_AssnMap _T3DB;
		    struct Cyc_Tctyp_CVTEnv _T3DC;
		    _T3DC = _T3DA.f0;
		    _T3DB = _T3DA.f1;
		    { struct Cyc_Tctyp_CVTEnv nenv = _T3DC;
		      struct Cyc_AssnDef_AssnMap chk_assn = _T3DB;
		      new_env = nenv;
		      _T28A = chk_relns;
		      *_T28A = Cyc_AssnDef_assnmap2existassnfn(chk_assn,vds);
		    }
		  }goto _TL1F9;
		  _TL1F8: _TL1F9: if (req == 0) { goto _TL1FE;
		  }
		  _T28B = new_env;
		  _T28C = _tag_fat("@requires",sizeof(char),10U);
		  _T28D = req;
		  { struct _tuple17 _T3DA = Cyc_Tctyp_check_clause(_T28B,
								   _T28C,
								   _T28D);
		    struct Cyc_AssnDef_AssnMap _T3DB;
		    struct Cyc_Tctyp_CVTEnv _T3DC;
		    _T3DC = _T3DA.f0;
		    _T3DB = _T3DA.f1;
		    { struct Cyc_Tctyp_CVTEnv nenv = _T3DC;
		      struct Cyc_AssnDef_AssnMap req_assn = _T3DB;
		      new_env = nenv;
		      _T28E = req_relns;
		      *_T28E = Cyc_AssnDef_assnmap2existassnfn(req_assn,vds);
		    }
		  }goto _TL1FF;
		  _TL1FE: _TL1FF: { struct Cyc_List_List * vds;
		    vds = _cycalloc(sizeof(struct Cyc_List_List));
		    _T28F = vds;
		    _T28F->hd = Cyc_AssnDef_memory;
		    _T290 = vds;
		    { struct Cyc_List_List * _T3DA = _cycalloc(sizeof(struct Cyc_List_List));
		      _T3DA->hd = Cyc_AssnDef_pre_memory;
		      _T3DA->tl = arg_vds;
		      _T291 = (struct Cyc_List_List *)_T3DA;
		    }_T290->tl = _T291;
		    if (ens == 0) { goto _TL200;
		    }
		    _T292 = new_env;
		    _T293 = _tag_fat("@ensures",sizeof(char),9U);
		    _T294 = ens;
		    { struct _tuple17 _T3DA = Cyc_Tctyp_check_clause(_T292,
								     _T293,
								     _T294);
		      struct Cyc_AssnDef_AssnMap _T3DB;
		      struct Cyc_Tctyp_CVTEnv _T3DC;
		      _T3DC = _T3DA.f0;
		      _T3DB = _T3DA.f1;
		      { struct Cyc_Tctyp_CVTEnv nenv = _T3DC;
			struct Cyc_AssnDef_AssnMap ens_assn = _T3DB;
			new_env = nenv;
			_T295 = ens_relns;
			_T296 = ens_assn;
			{ struct Cyc_List_List * _T3DD = _cycalloc(sizeof(struct Cyc_List_List));
			  _T3DD->hd = return_vd;
			  _T3DD->tl = vds;
			  _T297 = (struct Cyc_List_List *)_T3DD;
			}*_T295 = Cyc_AssnDef_assnmap2existassnfn(_T296,_T297);
		      }
		    }goto _TL201;
		    _TL200: _TL201: if (thrws == 0) { goto _TL202;
		    }
		    _T298 = new_env;
		    _T299 = _tag_fat("@throws",sizeof(char),8U);
		    _T29A = thrws;
		    { struct _tuple17 _T3DA = Cyc_Tctyp_check_clause(_T298,
								     _T299,
								     _T29A);
		      struct Cyc_AssnDef_AssnMap _T3DB;
		      struct Cyc_Tctyp_CVTEnv _T3DC;
		      _T3DC = _T3DA.f0;
		      _T3DB = _T3DA.f1;
		      { struct Cyc_Tctyp_CVTEnv nenv = _T3DC;
			struct Cyc_AssnDef_AssnMap thrws_assn = _T3DB;
			new_env = nenv;
			_T29B = thrws_relns;
			*_T29B = Cyc_AssnDef_assnmap2existassnfn(thrws_assn,
								 vds);
		      }
		    }goto _TL203;
		    _TL202: _TL203: new_env.te = old_te;
		    _T29C = eff;
		    _T29D = *_T29C;
		    if (_T29D == 0) { goto _TL204;
		    }
		    _T29E = new_env;
		    _T29F = &Cyc_Kinds_ek;
		    _T2A0 = (struct Cyc_Absyn_Kind *)_T29F;
		    _T2A1 = eff;
		    _T2A2 = *_T2A1;
		    new_env = Cyc_Tctyp_i_check_type(_T29E,_T2A0,_T2A2,1,
						     1);
		    _T2A3 = Cyc_Absyn_heap_rgn_type;
		    _T2A4 = eff;
		    _T2A5 = *_T2A4;
		    _T2A6 = Cyc_Tcutil_type_in_effect(0,_T2A3,_T2A5);
		    if (_T2A6) { goto _TL206;
		    }else { goto _TL208;
		    }
		    _TL208: _T2A7 = eff;
		    { void * _T3DA[2];
		      _T3DA[0] = Cyc_Absyn_heap_rgn_type;
		      _T2A9 = eff;
		      _T3DA[1] = *_T2A9;
		      _T2AA = _tag_fat(_T3DA,sizeof(void *),2);
		      _T2A8 = Cyc_List_list(_T2AA);
		    }_T2AB = Cyc_Absyn_join_eff(_T2A8);
		    *_T2A7 = Cyc_Tcutil_normalize_effect(_T2AB);
		    goto _TL207;
		    _TL206: _TL207: goto _TL205;
		    _TL204: { struct Cyc_List_List * effect;
		      effect = _cycalloc(sizeof(struct Cyc_List_List));
		      _T2AC = effect;
		      _T2AC->hd = Cyc_Absyn_heap_rgn_type;
		      _T2AD = effect;
		      _T2AD->tl = 0;
		      _T2AE = new_env;
		      { struct Cyc_List_List * tvs = _T2AE.free_vars;
			_TL20C: if (tvs != 0) { goto _TL20A;
			}else { goto _TL20B;
			}
			_TL20A: _T2AF = tvs;
			_T2B0 = _T2AF->hd;
			_T2B1 = (struct _tuple15 *)_T2B0;
			{ struct _tuple15 _T3DA = *_T2B1;
			  long _T3DB;
			  struct Cyc_Absyn_Tvar * _T3DC;
			  _T3DC = _T3DA.f0;
			  _T3DB = _T3DA.f1;
			  { struct Cyc_Absyn_Tvar * tv = _T3DC;
			    long put_in_eff = _T3DB;
			    _T2B2 = put_in_eff;
			    if (_T2B2) { goto _TL20D;
			    }else { goto _TL20F;
			    }
			    _TL20F: goto _TL209;
			    _TL20D: _T2B3 = tv;
			    _T2B4 = _T2B3->kind;
			    { void * _T3DD = Cyc_Kinds_compress_kb(_T2B4);
			      void * _T3DE;
			      _T2B5 = (int *)_T3DD;
			      _T2B6 = *_T2B5;
			      switch (_T2B6) {
			      case 2: 
				_T2B7 = (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct *)_T3DD;
				_T2B8 = _T2B7->f2;
				_T2B9 = (struct Cyc_Absyn_Kind *)_T2B8;
				_T2BA = _T2B9->kind;
				_T2BB = (int)_T2BA;
				switch (_T2BB) {
				case Cyc_Absyn_BoolKind: 
				  goto _LL8F;
				case Cyc_Absyn_PtrBndKind: 
				  _LL8F: goto _LL91;
				case Cyc_Absyn_IntKind: 
				  _LL91: goto _LL93;
				case Cyc_Absyn_AqualKind: 
				  _LL93: goto _LL95;
				case Cyc_Absyn_EffKind: 
				  { struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct * _T3DF = (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct *)_T3DD;
				    _T2BC = (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct *)_T3DD;
				    _T2BD = &_T2BC->f1;
				    _T3DE = (struct Cyc_Core_Opt * *)_T2BD;
				  }{ struct Cyc_Core_Opt * * f = _T3DE;
				    _T2BE = f;
				    _T2BF = &Cyc_Kinds_ek;
				    _T2C0 = (struct Cyc_Absyn_Kind *)_T2BF;
				    *_T2BE = Cyc_Kinds_kind_to_bound_opt(_T2C0);
				    goto _LL9F;
				  }
				default: 
				  goto _LLA2;
				}
				;
			      case 0: 
				_T2C1 = (struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct *)_T3DD;
				_T2C2 = _T2C1->f1;
				_T2C3 = (struct Cyc_Absyn_Kind *)_T2C2;
				_T2C4 = _T2C3->kind;
				_T2C5 = (int)_T2C4;
				switch (_T2C5) {
				case Cyc_Absyn_BoolKind: 
				  _LL95: goto _LL97;
				case Cyc_Absyn_PtrBndKind: 
				  _LL97: goto _LL99;
				case Cyc_Absyn_IntKind: 
				  _LL99: goto _LL9B;
				case Cyc_Absyn_AqualKind: 
				  _LL9B: goto _LL8B;
				case Cyc_Absyn_EffKind: 
				  _LL9F: { struct Cyc_List_List * _T3DF = _cycalloc(sizeof(struct Cyc_List_List));
				    _T3DF->hd = Cyc_Absyn_var_type(tv);
				    _T3DF->tl = effect;
				    _T2C6 = (struct Cyc_List_List *)_T3DF;
				  }effect = _T2C6;
				  goto _LL8B;
				default: 
				  _LLA2: _LLA3: { struct Cyc_List_List * _T3DF = _cycalloc(sizeof(struct Cyc_List_List));
				    _T2C8 = Cyc_Absyn_var_type(tv);
				    _T3DF->hd = Cyc_Absyn_regionsof_eff(_T2C8);
				    _T3DF->tl = effect;
				    _T2C7 = (struct Cyc_List_List *)_T3DF;
				  }effect = _T2C7;
				  goto _LL8B;
				}
				;
			      default: 
				{ struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct * _T3DF = (struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct *)_T3DD;
				  _T2C9 = (struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct *)_T3DD;
				  _T2CA = &_T2C9->f1;
				  _T3DE = (struct Cyc_Core_Opt * *)_T2CA;
				}{ struct Cyc_Core_Opt * * f = (struct Cyc_Core_Opt * *)_T3DE;
				  _T2CB = f;
				  { struct Cyc_Core_Opt * _T3DF = _cycalloc(sizeof(struct Cyc_Core_Opt));
				    { struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct * _T3E0 = _cycalloc(sizeof(struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct));
				      _T3E0->tag = 2;
				      _T3E0->f1 = 0;
				      _T2CE = &Cyc_Kinds_ak;
				      _T3E0->f2 = (struct Cyc_Absyn_Kind *)_T2CE;
				      _T2CD = (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct *)_T3E0;
				    }_T3DF->v = (void *)_T2CD;
				    _T2CC = (struct Cyc_Core_Opt *)_T3DF;
				  }*_T2CB = _T2CC;
				  goto _LLA3;
				}
			      }
			      _LL8B: ;
			    }
			  }
			}_TL209: _T2CF = tvs;
			tvs = _T2CF->tl;
			goto _TL20C;
			_TL20B: ;
		      }_T2D0 = new_env;
		      { struct Cyc_List_List * ts = _T2D0.free_evars;
			_TL216: if (ts != 0) { goto _TL214;
			}else { goto _TL215;
			}
			_TL214: _T2D1 = ts;
			_T2D2 = _T2D1->hd;
			_T2D3 = (struct _tuple16 *)_T2D2;
			{ struct _tuple16 _T3DA = *_T2D3;
			  long _T3DB;
			  void * _T3DC;
			  _T3DC = _T3DA.f0;
			  _T3DB = _T3DA.f1;
			  { void * tv = _T3DC;
			    long put_in_eff = _T3DB;
			    _T2D4 = put_in_eff;
			    if (_T2D4) { goto _TL217;
			    }else { goto _TL219;
			    }
			    _TL219: goto _TL213;
			    _TL217: { struct Cyc_Absyn_Kind * _T3DD = Cyc_Tcutil_type_kind(tv);
			      _T2D5 = (struct Cyc_Absyn_Kind *)_T3DD;
			      _T2D6 = _T2D5->kind;
			      _T2D7 = (int)_T2D6;
			      switch (_T2D7) {
			      case Cyc_Absyn_IntKind: 
				goto _LLAB;
			      case Cyc_Absyn_BoolKind: 
				_LLAB: goto _LLAD;
			      case Cyc_Absyn_PtrBndKind: 
				_LLAD: goto _LLAF;
			      case Cyc_Absyn_AqualKind: 
				_LLAF: goto _LLA7;
			      case Cyc_Absyn_EffKind: 
				{ struct Cyc_List_List * _T3DE = _cycalloc(sizeof(struct Cyc_List_List));
				  _T3DE->hd = tv;
				  _T3DE->tl = effect;
				  _T2D8 = (struct Cyc_List_List *)_T3DE;
				}effect = _T2D8;
				goto _LLA7;
			      default: 
				{ struct Cyc_List_List * _T3DE = _cycalloc(sizeof(struct Cyc_List_List));
				  _T3DE->hd = Cyc_Absyn_regionsof_eff(tv);
				  _T3DE->tl = effect;
				  _T2D9 = (struct Cyc_List_List *)_T3DE;
				}effect = _T2D9;
				goto _LLA7;
			      }
			      _LLA7: ;
			    }
			  }
			}_TL213: _T2DA = ts;
			ts = _T2DA->tl;
			goto _TL216;
			_TL215: ;
		      }_T2DB = eff;
		      *_T2DB = Cyc_Absyn_join_eff(effect);
		    }_TL205: _T2DC = btvs;
		    _T2DD = *_T2DC;
		    if (_T2DD == 0) { goto _TL21B;
		    }
		    _T2DE = btvs;
		    { struct Cyc_List_List * bs = *_T2DE;
		      _TL220: if (bs != 0) { goto _TL21E;
		      }else { goto _TL21F;
		      }
		      _TL21E: _T2DF = bs;
		      _T2E0 = _T2DF->hd;
		      _T2E1 = (struct Cyc_Absyn_Tvar *)_T2E0;
		      _T2E2 = _T2E1->kind;
		      { void * _T3DA = Cyc_Kinds_compress_kb(_T2E2);
			struct Cyc_Absyn_Kind * _T3DB;
			void * _T3DC;
			_T2E3 = (int *)_T3DA;
			_T2E4 = *_T2E3;
			switch (_T2E4) {
			case 1: 
			  { struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct * _T3DD = (struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct *)_T3DA;
			    _T2E5 = (struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct *)_T3DA;
			    _T2E6 = &_T2E5->f1;
			    _T3DC = (struct Cyc_Core_Opt * *)_T2E6;
			  }{ struct Cyc_Core_Opt * * f = _T3DC;
			    { struct Cyc_Warn_String_Warn_Warg_struct _T3DD;
			      _T3DD.tag = 0;
			      _T3DD.f1 = _tag_fat("type variable ",sizeof(char),
						  15U);
			      _T2E7 = _T3DD;
			    }{ struct Cyc_Warn_String_Warn_Warg_struct _T3DD = _T2E7;
			      { struct Cyc_Warn_Tvar_Warn_Warg_struct _T3DE;
				_T3DE.tag = 7;
				_T2E9 = bs;
				_T2EA = _T2E9->hd;
				_T3DE.f1 = (struct Cyc_Absyn_Tvar *)_T2EA;
				_T2E8 = _T3DE;
			      }{ struct Cyc_Warn_Tvar_Warn_Warg_struct _T3DE = _T2E8;
				{ struct Cyc_Warn_String_Warn_Warg_struct _T3DF;
				  _T3DF.tag = 0;
				  _T3DF.f1 = _tag_fat(" unconstrained, assuming boxed",
						      sizeof(char),31U);
				  _T2EB = _T3DF;
				}{ struct Cyc_Warn_String_Warn_Warg_struct _T3DF = _T2EB;
				  void * _T3E0[3];
				  _T3E0[0] = &_T3DD;
				  _T3E0[1] = &_T3DE;
				  _T3E0[2] = &_T3DF;
				  _T2EC = loc;
				  _T2ED = _tag_fat(_T3E0,sizeof(void *),3);
				  Cyc_Warn_warn2(_T2EC,_T2ED);
				}
			      }
			    }_T2EE = f;
			    _T2EF = &Cyc_Kinds_bk;
			    _T2F0 = (struct Cyc_Absyn_Kind *)_T2EF;
			    *_T2EE = Cyc_Kinds_kind_to_bound_opt(_T2F0);
			    goto _LLB4;
			  }
			case 2: 
			  { struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct * _T3DD = (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct *)_T3DA;
			    _T2F1 = (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct *)_T3DA;
			    _T2F2 = &_T2F1->f1;
			    _T3DC = (struct Cyc_Core_Opt * *)_T2F2;
			    _T3DB = _T3DD->f2;
			  }{ struct Cyc_Core_Opt * * f = (struct Cyc_Core_Opt * *)_T3DC;
			    struct Cyc_Absyn_Kind * k = _T3DB;
			    _T2F3 = k;
			    _T2F4 = (struct Cyc_Absyn_Kind *)_T2F3;
			    _T2F5 = _T2F4->kind;
			    _T2F6 = (int)_T2F5;
			    switch (_T2F6) {
			    case Cyc_Absyn_BoxKind: 
			      goto _LLC1;
			    case Cyc_Absyn_MemKind: 
			      _LLC1: goto _LLC3;
			    case Cyc_Absyn_AnyKind: 
			      _LLC3: _T2F7 = f;
			      _T2F8 = &Cyc_Kinds_bk;
			      _T2F9 = (struct Cyc_Absyn_Kind *)_T2F8;
			      *_T2F7 = Cyc_Kinds_kind_to_bound_opt(_T2F9);
			      goto _LLBD;
			    case Cyc_Absyn_EffKind: 
			      _T2FA = f;
			      _T2FB = &Cyc_Kinds_ek;
			      _T2FC = (struct Cyc_Absyn_Kind *)_T2FB;
			      *_T2FA = Cyc_Kinds_kind_to_bound_opt(_T2FC);
			      goto _LLBD;
			    default: 
			      _T2FD = f;
			      *_T2FD = Cyc_Kinds_kind_to_bound_opt(k);
			      goto _LLBD;
			    }
			    _LLBD: goto _LLB4;
			  }
			default: 
			  _T2FE = (struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct *)_T3DA;
			  _T2FF = _T2FE->f1;
			  _T300 = (struct Cyc_Absyn_Kind *)_T2FF;
			  _T301 = _T300->kind;
			  if (_T301 != Cyc_Absyn_MemKind) { goto _TL223;
			  }
			  { struct Cyc_Warn_String_Warn_Warg_struct _T3DD;
			    _T3DD.tag = 0;
			    _T3DD.f1 = _tag_fat("functions can't abstract M types",
						sizeof(char),33U);
			    _T302 = _T3DD;
			  }{ struct Cyc_Warn_String_Warn_Warg_struct _T3DD = _T302;
			    void * _T3DE[1];
			    _T3DE[0] = &_T3DD;
			    _T303 = loc;
			    _T304 = _tag_fat(_T3DE,sizeof(void *),1);
			    Cyc_Warn_err2(_T303,_T304);
			  }goto _LLB4;
			  _TL223: goto _LLB4;
			}
			_LLB4: ;
		      }_T305 = bs;
		      bs = _T305->tl;
		      goto _TL220;
		      _TL21F: ;
		    }goto _TL21C;
		    _TL21B: _TL21C: { struct Cyc_List_List * (* _T3DA)(struct Cyc_List_List *,
								       struct Cyc_List_List *,
								       struct Cyc_Absyn_Tvar * (*)(struct Cyc_Absyn_Tvar *)) = (struct Cyc_List_List * (*)(struct Cyc_List_List *,
																			   struct Cyc_List_List *,
																			   struct Cyc_Absyn_Tvar * (*)(struct Cyc_Absyn_Tvar *)))Cyc_Tctyp_remove_bound_tvars;
		      _T306 = _T3DA;
		    }_T307 = new_env;
		    _T308 = _T307.kind_env;
		    _T309 = btvs;
		    _T30A = *_T309;
		    _T30C = Cyc_Core_identity;
		    { struct Cyc_Absyn_Tvar * (* _T3DA)(struct Cyc_Absyn_Tvar *) = (struct Cyc_Absyn_Tvar * (*)(struct Cyc_Absyn_Tvar *))_T30C;
		      _T30B = _T3DA;
		    }env.kind_env = _T306(_T308,_T30A,_T30B);
		    { struct Cyc_List_List * (* _T3DA)(struct Cyc_List_List *,
						       struct Cyc_List_List *,
						       struct Cyc_Absyn_Tvar * (*)(struct _tuple15 *)) = (struct Cyc_List_List * (*)(struct Cyc_List_List *,
																     struct Cyc_List_List *,
																     struct Cyc_Absyn_Tvar * (*)(struct _tuple15 *)))Cyc_Tctyp_remove_bound_tvars;
		      _T30D = _T3DA;
		    }_T30E = new_env;
		    _T30F = _T30E.free_vars;
		    _T310 = btvs;
		    _T311 = *_T310;
		    _T313 = Cyc_Core_fst;
		    { struct Cyc_Absyn_Tvar * (* _T3DA)(struct _tuple15 *) = (struct Cyc_Absyn_Tvar * (*)(struct _tuple15 *))_T313;
		      _T312 = _T3DA;
		    }new_env.free_vars = _T30D(_T30F,_T311,_T312);
		    _T314 = new_env;
		    { struct Cyc_List_List * tvs = _T314.free_vars;
		      _TL228: if (tvs != 0) { goto _TL226;
		      }else { goto _TL227;
		      }
		      _TL226: _T315 = tvs;
		      _T316 = _T315->hd;
		      _T317 = (struct _tuple15 *)_T316;
		      { struct _tuple15 _T3DA = *_T317;
			long _T3DB;
			struct Cyc_Absyn_Tvar * _T3DC;
			_T3DC = _T3DA.f0;
			_T3DB = _T3DA.f1;
			{ struct Cyc_Absyn_Tvar * t = _T3DC;
			  long b = _T3DB;
			  _T318 = env;
			  _T319 = _T318.free_vars;
			  _T31A = t;
			  _T31B = b;
			  env.free_vars = Cyc_Tctyp_fast_add_free_tvar_bool(_T319,
									    _T31A,
									    _T31B);
			}
		      }_T31C = tvs;
		      tvs = _T31C->tl;
		      goto _TL228;
		      _TL227: ;
		    }_T31D = new_env;
		    { struct Cyc_List_List * evs = _T31D.free_evars;
		      _TL22C: if (evs != 0) { goto _TL22A;
		      }else { goto _TL22B;
		      }
		      _TL22A: _T31E = evs;
		      _T31F = _T31E->hd;
		      _T320 = (struct _tuple16 *)_T31F;
		      { struct _tuple16 _T3DA = *_T320;
			long _T3DB;
			void * _T3DC;
			_T3DC = _T3DA.f0;
			_T3DB = _T3DA.f1;
			{ void * e = _T3DC;
			  long b = _T3DB;
			  _T321 = env;
			  _T322 = _T321.free_evars;
			  _T323 = e;
			  _T324 = b;
			  env.free_evars = Cyc_Tctyp_add_free_evar(_T322,
								   _T323,
								   _T324);
			}
		      }_T325 = evs;
		      evs = _T325->tl;
		      goto _TL22C;
		      _TL22B: ;
		    }_T326 = env;
		    _T327 = _T326.free_qualvars;
		    _T328 = (unsigned int)_T327;
		    if (! _T328) { goto _TL22D;
		    }
		    _T329 = new_env;
		    { struct Cyc_List_List * it = _T329.free_qualvars;
		      _TL232: if (it != 0) { goto _TL230;
		      }else { goto _TL231;
		      }
		      _TL230: _T32B = Cyc_List_exists_c;
		      { long (* _T3DA)(long (*)(struct _tuple16 *,struct _tuple16 *),
				       struct _tuple16 *,struct Cyc_List_List *) = (long (*)(long (*)(struct _tuple16 *,
												      struct _tuple16 *),
											     struct _tuple16 *,
											     struct Cyc_List_List *))_T32B;
			_T32A = _T3DA;
		      }_T32C = it;
		      _T32D = _T32C->hd;
		      _T32E = (struct _tuple16 *)_T32D;
		      _T32F = env;
		      _T330 = _T32F.free_qualvars;
		      _T331 = _T32A(Cyc_Tctyp_cmp_fqv,_T32E,_T330);
		      if (_T331) { goto _TL233;
		      }else { goto _TL235;
		      }
		      _TL235: { struct Cyc_List_List * _T3DA = _cycalloc(sizeof(struct Cyc_List_List));
			_T333 = it;
			_T334 = _T333->hd;
			_T3DA->hd = (struct _tuple16 *)_T334;
			_T335 = env;
			_T3DA->tl = _T335.free_qualvars;
			_T332 = (struct Cyc_List_List *)_T3DA;
		      }env.free_qualvars = _T332;
		      goto _TL234;
		      _TL233: _TL234: _T336 = it;
		      it = _T336->tl;
		      goto _TL232;
		      _TL231: ;
		    }goto _TL22E;
		    _TL22D: _T337 = new_env;
		    env.free_qualvars = _T337.free_qualvars;
		    _TL22E: goto _LL3;
		  }
		}
	      }
	    }
	  }
	}
      case 7: 
	{ struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct * _T3DA = (struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct *)_T3C1;
	  _T3C3 = _T3DA->f1;
	  _T3CE = _T3DA->f2;
	  _T3D9 = _T3DA->f3;
	}{ enum Cyc_Absyn_AggrKind k = _T3C3;
	  long is_tuple = _T3CE;
	  struct Cyc_List_List * fs = _T3D9;
	  struct Cyc_List_List * prev_fields = 0;
	  _TL239: if (fs != 0) { goto _TL237;
	  }else { goto _TL238;
	  }
	  _TL237: _T338 = fs;
	  _T339 = _T338->hd;
	  { struct Cyc_Absyn_Aggrfield * _T3DA = (struct Cyc_Absyn_Aggrfield *)_T339;
	    struct Cyc_Absyn_Exp * _T3DB;
	    struct Cyc_List_List * _T3DC;
	    struct Cyc_Absyn_Exp * _T3DD;
	    void * _T3DE;
	    void * _T3DF;
	    struct _fat_ptr * _T3E0;
	    { struct Cyc_Absyn_Aggrfield _T3E1 = *_T3DA;
	      _T3E0 = _T3E1.name;
	      _T33A = &_T3DA->tq;
	      _T3DF = (struct Cyc_Absyn_Tqual *)_T33A;
	      _T3DE = _T3E1.type;
	      _T3DD = _T3E1.width;
	      _T3DC = _T3E1.attributes;
	      _T3DB = _T3E1.requires_clause;
	    }{ struct _fat_ptr * fn = _T3E0;
	      struct Cyc_Absyn_Tqual * tqp = (struct Cyc_Absyn_Tqual *)_T3DF;
	      void * t = _T3DE;
	      struct Cyc_Absyn_Exp * width = _T3DD;
	      struct Cyc_List_List * atts = _T3DC;
	      struct Cyc_Absyn_Exp * requires_clause = _T3DB;
	      _T33C = Cyc_List_mem;
	      { long (* _T3E1)(int (*)(struct _fat_ptr *,struct _fat_ptr *),
			       struct Cyc_List_List *,struct _fat_ptr *) = (long (*)(int (*)(struct _fat_ptr *,
											     struct _fat_ptr *),
										     struct Cyc_List_List *,
										     struct _fat_ptr *))_T33C;
		_T33B = _T3E1;
	      }_T33D = Cyc_strptrcmp;
	      _T33E = prev_fields;
	      _T33F = fn;
	      _T340 = _T33B(_T33D,_T33E,_T33F);
	      if (! _T340) { goto _TL23A;
	      }
	      { struct Cyc_Warn_String_Warn_Warg_struct _T3E1;
		_T3E1.tag = 0;
		_T3E1.f1 = _tag_fat("duplicate field ",sizeof(char),17U);
		_T341 = _T3E1;
	      }{ struct Cyc_Warn_String_Warn_Warg_struct _T3E1 = _T341;
		{ struct Cyc_Warn_String_Warn_Warg_struct _T3E2;
		  _T3E2.tag = 0;
		  _T343 = fn;
		  _T3E2.f1 = *_T343;
		  _T342 = _T3E2;
		}{ struct Cyc_Warn_String_Warn_Warg_struct _T3E2 = _T342;
		  void * _T3E3[2];
		  _T3E3[0] = &_T3E1;
		  _T3E3[1] = &_T3E2;
		  _T344 = loc;
		  _T345 = _tag_fat(_T3E3,sizeof(void *),2);
		  Cyc_Warn_err2(_T344,_T345);
		}
	      }goto _TL23B;
	      _TL23A: _TL23B: _T346 = fn;
	      _T347 = *_T346;
	      _T348 = _tag_fat("",sizeof(char),1U);
	      _T349 = Cyc_strcmp(_T347,_T348);
	      if (_T349 == 0) { goto _TL23C;
	      }
	      { struct Cyc_List_List * _T3E1 = _cycalloc(sizeof(struct Cyc_List_List));
		_T3E1->hd = fn;
		_T3E1->tl = prev_fields;
		_T34A = (struct Cyc_List_List *)_T3E1;
	      }prev_fields = _T34A;
	      goto _TL23D;
	      _TL23C: _TL23D: _T34B = env;
	      _T34C = &Cyc_Kinds_mk;
	      _T34D = (struct Cyc_Absyn_Kind *)_T34C;
	      _T34E = t;
	      env = Cyc_Tctyp_i_check_type(_T34B,_T34D,_T34E,1,0);
	      _T34F = tqp;
	      _T350 = loc;
	      _T351 = tqp;
	      _T352 = _T351->print_const;
	      _T353 = t;
	      _T34F->real_const = Cyc_Tcutil_extract_const_from_typedef(_T350,
									_T352,
									_T353);
	      Cyc_Tcutil_check_bitfield(loc,t,width,fn);
	      Cyc_Atts_check_field_atts(loc,fn,atts);
	      if (requires_clause == 0) { goto _TL23E;
	      }
	      _T354 = k;
	      _T355 = (int)_T354;
	      if (_T355 == 1) { goto _TL240;
	      }
	      { struct Cyc_Warn_String_Warn_Warg_struct _T3E1;
		_T3E1.tag = 0;
		_T3E1.f1 = _tag_fat("@requires clause is only allowed on union members",
				    sizeof(char),50U);
		_T356 = _T3E1;
	      }{ struct Cyc_Warn_String_Warn_Warg_struct _T3E1 = _T356;
		void * _T3E2[1];
		_T3E2[0] = &_T3E1;
		_T357 = loc;
		_T358 = _tag_fat(_T3E2,sizeof(void *),1);
		Cyc_Warn_err2(_T357,_T358);
	      }goto _TL241;
	      _TL240: _TL241: _T359 = Cyc_Tcenv_allow_valueof(te);
	      _T35A = requires_clause;
	      Cyc_Tcexp_tcExp(_T359,0,_T35A);
	      _T35B = Cyc_Tcutil_is_integral(requires_clause);
	      if (_T35B) { goto _TL242;
	      }else { goto _TL244;
	      }
	      _TL244: { struct Cyc_Warn_String_Warn_Warg_struct _T3E1;
		_T3E1.tag = 0;
		_T3E1.f1 = _tag_fat("@requires clause has type ",sizeof(char),
				    27U);
		_T35C = _T3E1;
	      }{ struct Cyc_Warn_String_Warn_Warg_struct _T3E1 = _T35C;
		{ struct Cyc_Warn_TypOpt_Warn_Warg_struct _T3E2;
		  _T3E2.tag = 3;
		  _T35E = requires_clause;
		  _T3E2.f1 = _T35E->topt;
		  _T35D = _T3E2;
		}{ struct Cyc_Warn_TypOpt_Warn_Warg_struct _T3E2 = _T35D;
		  { struct Cyc_Warn_String_Warn_Warg_struct _T3E3;
		    _T3E3.tag = 0;
		    _T3E3.f1 = _tag_fat(" instead of integral type",sizeof(char),
					26U);
		    _T35F = _T3E3;
		  }{ struct Cyc_Warn_String_Warn_Warg_struct _T3E3 = _T35F;
		    void * _T3E4[3];
		    _T3E4[0] = &_T3E1;
		    _T3E4[1] = &_T3E2;
		    _T3E4[2] = &_T3E3;
		    _T360 = loc;
		    _T361 = _tag_fat(_T3E4,sizeof(void *),3);
		    Cyc_Warn_err2(_T360,_T361);
		  }
		}
	      }goto _TL243;
	      _TL242: _TL243: env = Cyc_Tctyp_i_check_type_level_exp(requires_clause,
								     env);
	      goto _TL23F;
	      _TL23E: _TL23F: ;
	    }
	  }_T362 = fs;
	  fs = _T362->tl;
	  goto _TL239;
	  _TL238: goto _LL3;
	}
      case 12: 
	{ struct Cyc_Absyn_SubsetType_Absyn_Type_struct * _T3DA = (struct Cyc_Absyn_SubsetType_Absyn_Type_struct *)_T3C1;
	  _T3D9 = _T3DA->f1;
	  _T3D8 = _T3DA->f2;
	  _T363 = (struct Cyc_Absyn_SubsetType_Absyn_Type_struct *)_T3C1;
	  _T364 = &_T363->f3;
	  _T3D6 = (struct Cyc_AssnDef_ExistAssnFn * *)_T364;
	}{ struct Cyc_Absyn_Vardecl * vd = _T3D9;
	  struct Cyc_Absyn_Exp * e = _T3D8;
	  struct Cyc_AssnDef_ExistAssnFn * * a = _T3D6;
	  _T365 = env;
	  _T366 = expected_kind;
	  _T367 = vd;
	  _T368 = _T367->type;
	  _T369 = put_in_effect;
	  _T36A = allow_abs_aggr;
	  env = Cyc_Tctyp_i_check_type(_T365,_T366,_T368,_T369,_T36A);
	  { struct Cyc_List_List * args;
	    args = _cycalloc(sizeof(struct Cyc_List_List));
	    _T36B = args;
	    { struct _tuple9 * _T3DA = _cycalloc(sizeof(struct _tuple9));
	      _T36D = vd;
	      _T36E = _T36D->name;
	      _T3DA->f0 = _T36E->f1;
	      _T36F = vd;
	      _T3DA->f1 = _T36F->tq;
	      _T370 = vd;
	      _T3DA->f2 = _T370->type;
	      _T36C = (struct _tuple9 *)_T3DA;
	    }_T36B->hd = _T36C;
	    _T371 = args;
	    _T371->tl = 0;
	    { struct Cyc_Tcenv_Fenv * fenv = Cyc_Tcenv_bogus_fenv(Cyc_Absyn_void_type,
								  args);
	      _T372 = env;
	      { struct Cyc_Tcenv_Tenv * old_te = _T372.te;
		{ struct Cyc_Tcenv_Tenv * _T3DA = _cycalloc(sizeof(struct Cyc_Tcenv_Tenv));
		  _T374 = te;
		  _T3DA->ns = _T374->ns;
		  _T375 = te;
		  _T3DA->ae = _T375->ae;
		  _T3DA->le = fenv;
		  _T3DA->allow_valueof = 1;
		  _T376 = te;
		  _T3DA->in_extern_c_include = _T376->in_extern_c_include;
		  _T377 = te;
		  _T3DA->in_tempest = _T377->in_tempest;
		  _T378 = te;
		  _T3DA->tempest_generalize = _T378->tempest_generalize;
		  _T379 = te;
		  _T3DA->in_extern_c_inc_repeat = _T379->in_extern_c_inc_repeat;
		  _T373 = (struct Cyc_Tcenv_Tenv *)_T3DA;
		}env.te = _T373;
		{ struct Cyc_List_List * vds;
		  vds = _cycalloc(sizeof(struct Cyc_List_List));
		  _T37A = vds;
		  _T37A->hd = vd;
		  _T37B = vds;
		  _T37B->tl = 0;
		  _T37C = Cyc_Tctyp_ok_as_assn(e);
		  if (_T37C) { goto _TL245;
		  }else { goto _TL247;
		  }
		  _TL247: { struct Cyc_Warn_String_Warn_Warg_struct _T3DA;
		    _T3DA.tag = 0;
		    _T3DA.f1 = _tag_fat("@subset predicate is not a valid assertion\n\t[may access memory or throw exception]",
					sizeof(char),83U);
		    _T37D = _T3DA;
		  }{ struct Cyc_Warn_String_Warn_Warg_struct _T3DA = _T37D;
		    void * _T3DB[1];
		    _T3DB[0] = &_T3DA;
		    _T37E = e;
		    _T37F = _T37E->loc;
		    _T380 = _tag_fat(_T3DB,sizeof(void *),1);
		    Cyc_Warn_err2(_T37F,_T380);
		  }goto _TL246;
		  _TL245: _TL246: _T381 = env;
		  _T382 = _tag_fat("@subset",sizeof(char),8U);
		  _T383 = e;
		  { struct _tuple17 _T3DA = Cyc_Tctyp_check_clause(_T381,
								   _T382,
								   _T383);
		    struct Cyc_AssnDef_AssnMap _T3DB;
		    struct Cyc_Tctyp_CVTEnv _T3DC;
		    _T3DC = _T3DA.f0;
		    _T3DB = _T3DA.f1;
		    { struct Cyc_Tctyp_CVTEnv nenv = _T3DC;
		      struct Cyc_AssnDef_AssnMap assn = _T3DB;
		      env = nenv;
		      _T384 = a;
		      *_T384 = Cyc_AssnDef_assnmap2existassnfn(assn,vds);
		      env.te = old_te;
		      goto _LL3;
		    }
		  }
		}
	      }
	    }
	  }
	}
      default: 
	{ struct Cyc_Absyn_TypedefType_Absyn_Type_struct * _T3DA = (struct Cyc_Absyn_TypedefType_Absyn_Type_struct *)_T3C1;
	  _T3C2 = _T3DA->f1;
	  _T385 = (struct Cyc_Absyn_TypedefType_Absyn_Type_struct *)_T3C1;
	  _T386 = &_T385->f2;
	  _T3D9 = (struct Cyc_List_List * *)_T386;
	  _T387 = (struct Cyc_Absyn_TypedefType_Absyn_Type_struct *)_T3C1;
	  _T388 = &_T387->f3;
	  _T3D8 = (struct Cyc_Absyn_Typedefdecl * *)_T388;
	  _T389 = (struct Cyc_Absyn_TypedefType_Absyn_Type_struct *)_T3C1;
	  _T38A = &_T389->f4;
	  _T3D6 = (void * *)_T38A;
	}{ struct _tuple1 * tdn = _T3C2;
	  struct Cyc_List_List * * targs_ref = (struct Cyc_List_List * *)_T3D9;
	  struct Cyc_Absyn_Typedefdecl * * tdopt = (struct Cyc_Absyn_Typedefdecl * *)_T3D8;
	  void * * toptp = (void * *)_T3D6;
	  struct Cyc_Absyn_Typedefdecl * td;
	  { struct _handler_cons _T3DA;
	    _T38B = &_T3DA;
	    _push_handler(_T38B);
	    { int _T3DB = 0;
	      _T38C = setjmp(_T3DA.handler);
	      if (! _T38C) { goto _TL248;
	      }
	      _T3DB = 1;
	      goto _TL249;
	      _TL248: _TL249: if (_T3DB) { goto _TL24A;
	      }else { goto _TL24C;
	      }
	      _TL24C: td = Cyc_Tcenv_lookup_typedefdecl(te,loc,tdn);
	      _pop_handler();
	      goto _TL24B;
	      _TL24A: _T38D = Cyc_Core_get_exn_thrown();
	      { void * _T3DC = (void *)_T38D;
		void * _T3DD;
		_T38E = (struct Cyc_Dict_Absent_exn_struct *)_T3DC;
		_T38F = _T38E->tag;
		_T390 = Cyc_Dict_Absent;
		if (_T38F != _T390) { goto _TL24D;
		}
		{ struct Cyc_Warn_String_Warn_Warg_struct _T3DE;
		  _T3DE.tag = 0;
		  _T3DE.f1 = _tag_fat("unbound typedef name ",sizeof(char),
				      22U);
		  _T391 = _T3DE;
		}{ struct Cyc_Warn_String_Warn_Warg_struct _T3DE = _T391;
		  { struct Cyc_Warn_Qvar_Warn_Warg_struct _T3DF;
		    _T3DF.tag = 1;
		    _T3DF.f1 = tdn;
		    _T392 = _T3DF;
		  }{ struct Cyc_Warn_Qvar_Warn_Warg_struct _T3DF = _T392;
		    void * _T3E0[2];
		    _T3E0[0] = &_T3DE;
		    _T3E0[1] = &_T3DF;
		    _T393 = loc;
		    _T394 = _tag_fat(_T3E0,sizeof(void *),2);
		    Cyc_Warn_err2(_T393,_T394);
		  }
		}_T395 = env;
		return _T395;
		_TL24D: _T3DD = _T3DC;
		{ void * exn = _T3DD;
		  _rethrow(exn);
		};
	      }_TL24B: ;
	    }
	  }_T396 = tdopt;
	  *_T396 = td;
	  _T397 = env;
	  _T398 = targs_ref;
	  _T399 = td;
	  _T39A = _T399->tvs;
	  _T39B = expected_kind;
	  _T39C = allow_abs_aggr;
	  _T39D = tdn;
	  _T39E = td;
	  env = Cyc_Tctyp_check_type_inst(_T397,_T398,_T39A,_T39B,_T39C,_T39D,
					  _T39E);
	  _T39F = td;
	  _T3A0 = _T39F->defn;
	  if (_T3A0 == 0) { goto _TL24F;
	  }
	  _T3A1 = loc;
	  _T3A2 = td;
	  _T3A3 = _T3A2->defn;
	  _T3A4 = expected_kind;
	  Cyc_Tctyp_check_constrain_ptrbnd(_T3A1,_T3A3,_T3A4);
	  { struct Cyc_List_List * inst = 0;
	    _T3A5 = td;
	    { struct Cyc_List_List * tvs = _T3A5->tvs;
	      _T3A6 = targs_ref;
	      { struct Cyc_List_List * ts = *_T3A6;
		_TL254: if (tvs != 0) { goto _TL252;
		}else { goto _TL253;
		}
		_TL252: { struct Cyc_List_List * _T3DA = _cycalloc(sizeof(struct Cyc_List_List));
		  { struct _tuple19 * _T3DB = _cycalloc(sizeof(struct _tuple19));
		    _T3A9 = tvs;
		    _T3AA = _T3A9->hd;
		    _T3DB->f0 = (struct Cyc_Absyn_Tvar *)_T3AA;
		    _T3AB = _check_null(ts);
		    _T3DB->f1 = _T3AB->hd;
		    _T3A8 = (struct _tuple19 *)_T3DB;
		  }_T3DA->hd = _T3A8;
		  _T3DA->tl = inst;
		  _T3A7 = (struct Cyc_List_List *)_T3DA;
		}inst = _T3A7;
		_T3AC = tvs;
		tvs = _T3AC->tl;
		_T3AD = ts;
		ts = _T3AD->tl;
		goto _TL254;
		_TL253: _T3AE = toptp;
		_T3AF = inst;
		_T3B0 = td;
		_T3B1 = _T3B0->defn;
		_T3B2 = _check_null(_T3B1);
		*_T3AE = Cyc_Tcutil_substitute(_T3AF,_T3B2);
	      }
	    }
	  }goto _TL250;
	  _TL24F: _TL250: goto _LL3;
	}
      }
      _LL3: ;
    }_T3B3 = Cyc_Tcutil_type_kind(t);
    _T3B4 = expected_kind;
    _T3B5 = Cyc_Kinds_kind_leq(_T3B3,_T3B4);
    if (_T3B5) { goto _TL255;
    }else { goto _TL257;
    }
    _TL257: { struct Cyc_Warn_String_Warn_Warg_struct _T3C1;
      _T3C1.tag = 0;
      _T3C1.f1 = _tag_fat("type ",sizeof(char),6U);
      _T3B6 = _T3C1;
    }{ struct Cyc_Warn_String_Warn_Warg_struct _T3C1 = _T3B6;
      { struct Cyc_Warn_Typ_Warn_Warg_struct _T3C2;
	_T3C2.tag = 2;
	_T3C2.f1 = t;
	_T3B7 = _T3C2;
      }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T3C2 = _T3B7;
	{ struct Cyc_Warn_String_Warn_Warg_struct _T3C3;
	  _T3C3.tag = 0;
	  _T3C3.f1 = _tag_fat(" has kind ",sizeof(char),11U);
	  _T3B8 = _T3C3;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T3C3 = _T3B8;
	  { struct Cyc_Warn_Kind_Warn_Warg_struct _T3C4;
	    _T3C4.tag = 9;
	    _T3C4.f1 = Cyc_Tcutil_type_kind(t);
	    _T3B9 = _T3C4;
	  }{ struct Cyc_Warn_Kind_Warn_Warg_struct _T3C4 = _T3B9;
	    { struct Cyc_Warn_String_Warn_Warg_struct _T3C5;
	      _T3C5.tag = 0;
	      _T3C5.f1 = _tag_fat(" but as used here needs kind ",sizeof(char),
				  30U);
	      _T3BA = _T3C5;
	    }{ struct Cyc_Warn_String_Warn_Warg_struct _T3C5 = _T3BA;
	      { struct Cyc_Warn_Kind_Warn_Warg_struct _T3C6;
		_T3C6.tag = 9;
		_T3C6.f1 = expected_kind;
		_T3BB = _T3C6;
	      }{ struct Cyc_Warn_Kind_Warn_Warg_struct _T3C6 = _T3BB;
		void * _T3C7[6];
		_T3C7[0] = &_T3C1;
		_T3C7[1] = &_T3C2;
		_T3C7[2] = &_T3C3;
		_T3C7[3] = &_T3C4;
		_T3C7[4] = &_T3C5;
		_T3C7[5] = &_T3C6;
		_T3BC = loc;
		_T3BD = _tag_fat(_T3C7,sizeof(void *),6);
		Cyc_Warn_err2(_T3BC,_T3BD);
	      }
	    }
	  }
	}
      }
    }goto _TL256;
    _TL255: _TL256: _T3BE = env;
    return _T3BE;
  }
}
static struct Cyc_Tctyp_CVTEnv Cyc_Tctyp_check_valid_type(struct Cyc_Tctyp_CVTEnv cvt,
							  struct Cyc_Absyn_Kind * expected_kind,
							  long allow_abs_aggr,
							  void * t) {
  struct Cyc_Tctyp_CVTEnv _T0;
  struct Cyc_Tctyp_CVTEnv _T1;
  struct Cyc_List_List * _T2;
  struct Cyc_List_List * _T3;
  void * _T4;
  struct _tuple15 * _T5;
  struct _tuple15 _T6;
  struct Cyc_Absyn_Tvar * _T7;
  struct Cyc_List_List * _T8;
  struct Cyc_Tctyp_CVTEnv _T9;
  struct Cyc_List_List * _TA;
  void * _TB;
  struct _tuple16 * _TC;
  int * _TD;
  int _TE;
  struct Cyc_Absyn_Evar_Absyn_Type_struct * _TF;
  struct Cyc_Core_Opt * * _T10;
  struct Cyc_Core_Opt * * _T11;
  struct Cyc_Core_Opt * _T12;
  struct Cyc_Core_Opt * * _T13;
  struct Cyc_Core_Opt * _T14;
  struct Cyc_Core_Opt * * _T15;
  struct Cyc_Core_Opt * _T16;
  void * _T17;
  long (* _T18)(int (*)(struct Cyc_Absyn_Tvar *,struct Cyc_Absyn_Tvar *),
		struct Cyc_List_List *,struct Cyc_Absyn_Tvar *);
  long (* _T19)(int (*)(void *,void *),struct Cyc_List_List *,void *);
  int (* _T1A)(struct Cyc_Absyn_Tvar *,struct Cyc_Absyn_Tvar *);
  struct Cyc_List_List * _T1B;
  struct Cyc_List_List * _T1C;
  void * _T1D;
  struct Cyc_Absyn_Tvar * _T1E;
  long _T1F;
  struct Cyc_List_List * _T20;
  struct Cyc_List_List * _T21;
  void * _T22;
  struct Cyc_List_List * _T23;
  struct Cyc_Core_Opt * * _T24;
  struct Cyc_Core_Opt * _T25;
  struct Cyc_List_List * _T26;
  struct Cyc_Tctyp_CVTEnv _T27;
  _T0 = cvt;
  { struct Cyc_List_List * kind_env = _T0.kind_env;
    cvt = Cyc_Tctyp_i_check_type(cvt,expected_kind,t,1,allow_abs_aggr);
    _T1 = cvt;
    { struct Cyc_List_List * vs = _T1.free_vars;
      _TL25B: if (vs != 0) { goto _TL259;
      }else { goto _TL25A;
      }
      _TL259: _T2 = kind_env;
      _T3 = vs;
      _T4 = _T3->hd;
      _T5 = (struct _tuple15 *)_T4;
      _T6 = *_T5;
      _T7 = _T6.f0;
      cvt.kind_env = Cyc_Tctyp_fast_add_free_tvar(_T2,_T7);
      _T8 = vs;
      vs = _T8->tl;
      goto _TL25B;
      _TL25A: ;
    }_T9 = cvt;
    { struct Cyc_List_List * evs = _T9.free_evars;
      _TL25F: if (evs != 0) { goto _TL25D;
      }else { goto _TL25E;
      }
      _TL25D: _TA = evs;
      _TB = _TA->hd;
      _TC = (struct _tuple16 *)_TB;
      { struct _tuple16 _T28 = *_TC;
	void * _T29;
	_T29 = _T28.f0;
	{ void * e = _T29;
	  void * _T2A = Cyc_Absyn_compress(e);
	  void * _T2B;
	  _TD = (int *)_T2A;
	  _TE = *_TD;
	  if (_TE != 1) { goto _TL260;
	  }
	  { struct Cyc_Absyn_Evar_Absyn_Type_struct * _T2C = (struct Cyc_Absyn_Evar_Absyn_Type_struct *)_T2A;
	    _TF = (struct Cyc_Absyn_Evar_Absyn_Type_struct *)_T2A;
	    _T10 = &_TF->f4;
	    _T2B = (struct Cyc_Core_Opt * *)_T10;
	  }{ struct Cyc_Core_Opt * * s = (struct Cyc_Core_Opt * *)_T2B;
	    _T11 = s;
	    _T12 = *_T11;
	    if (_T12 != 0) { goto _TL262;
	    }
	    _T13 = s;
	    { struct Cyc_Core_Opt * _T2C = _cycalloc(sizeof(struct Cyc_Core_Opt));
	      _T2C->v = kind_env;
	      _T14 = (struct Cyc_Core_Opt *)_T2C;
	    }*_T13 = _T14;
	    goto _TL263;
	    _TL262: { struct Cyc_List_List * result = 0;
	      _T15 = s;
	      _T16 = *_T15;
	      _T17 = _T16->v;
	      { struct Cyc_List_List * tvs = (struct Cyc_List_List *)_T17;
		_TL267: if (tvs != 0) { goto _TL265;
		}else { goto _TL266;
		}
		_TL265: _T19 = Cyc_List_mem;
		{ long (* _T2C)(int (*)(struct Cyc_Absyn_Tvar *,struct Cyc_Absyn_Tvar *),
				struct Cyc_List_List *,struct Cyc_Absyn_Tvar *) = (long (*)(int (*)(struct Cyc_Absyn_Tvar *,
												    struct Cyc_Absyn_Tvar *),
											    struct Cyc_List_List *,
											    struct Cyc_Absyn_Tvar *))_T19;
		  _T18 = _T2C;
		}_T1A = Cyc_Tcutil_fast_tvar_cmp;
		_T1B = kind_env;
		_T1C = tvs;
		_T1D = _T1C->hd;
		_T1E = (struct Cyc_Absyn_Tvar *)_T1D;
		_T1F = _T18(_T1A,_T1B,_T1E);
		if (! _T1F) { goto _TL268;
		}
		{ struct Cyc_List_List * _T2C = _cycalloc(sizeof(struct Cyc_List_List));
		  _T21 = tvs;
		  _T22 = _T21->hd;
		  _T2C->hd = (struct Cyc_Absyn_Tvar *)_T22;
		  _T2C->tl = result;
		  _T20 = (struct Cyc_List_List *)_T2C;
		}result = _T20;
		goto _TL269;
		_TL268: _TL269: _T23 = tvs;
		tvs = _T23->tl;
		goto _TL267;
		_TL266: ;
	      }_T24 = s;
	      { struct Cyc_Core_Opt * _T2C = _cycalloc(sizeof(struct Cyc_Core_Opt));
		_T2C->v = result;
		_T25 = (struct Cyc_Core_Opt *)_T2C;
	      }*_T24 = _T25;
	    }_TL263: goto _LL3;
	  }_TL260: goto _LL3;
	  _LL3: ;
	}
      }_T26 = evs;
      evs = _T26->tl;
      goto _TL25F;
      _TL25E: ;
    }_T27 = cvt;
    return _T27;
  }
}
void Cyc_Tctyp_check_valid_toplevel_type(unsigned int loc,struct Cyc_Tcenv_Tenv * te,
					 void * t) {
  int _T0;
  long _T1;
  int _T2;
  struct Cyc_Tcenv_Tenv * _T3;
  long _T4;
  struct Cyc_Tcenv_Tenv * _T5;
  struct Cyc_Absyn_Kind * _T6;
  long _T7;
  struct Cyc_Absyn_Kind * _T8;
  struct Cyc_Absyn_Kind * _T9;
  struct Cyc_Tctyp_CVTEnv _TA;
  struct Cyc_Absyn_Kind * _TB;
  void * _TC;
  struct Cyc_List_List * (* _TD)(struct Cyc_Absyn_Tvar * (*)(struct _tuple15 *),
				 struct Cyc_List_List *);
  struct Cyc_List_List * (* _TE)(void * (*)(void *),struct Cyc_List_List *);
  struct Cyc_Absyn_Tvar * (* _TF)(struct _tuple15 *);
  void * (* _T10)(struct _tuple0 *);
  struct Cyc_Tctyp_CVTEnv _T11;
  struct Cyc_List_List * _T12;
  struct Cyc_Tctyp_CVTEnv _T13;
  struct Cyc_Tctyp_CVTEnv _T14;
  struct Cyc_List_List * _T15;
  unsigned int _T16;
  struct Cyc_List_List * _T17;
  void * _T18;
  struct Cyc_Absyn_Tvar * _T19;
  struct Cyc_List_List * _T1A;
  void * _T1B;
  struct Cyc_Absyn_Tvar * _T1C;
  int _T1D;
  struct Cyc_List_List * _T1E;
  struct Cyc_List_List * _T1F;
  struct Cyc_List_List * _T20;
  void * _T21;
  struct Cyc_List_List * _T22;
  struct Cyc_List_List * _T23;
  void * _T24;
  struct Cyc_Absyn_Tvar * _T25;
  void * _T26;
  int * _T27;
  unsigned int _T28;
  struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct * _T29;
  struct Cyc_Core_Opt * * _T2A;
  struct Cyc_Core_Opt * * _T2B;
  struct Cyc_Absyn_Kind * _T2C;
  struct Cyc_Absyn_Kind * _T2D;
  struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct * _T2E;
  struct Cyc_Core_Opt * * _T2F;
  struct Cyc_Absyn_Kind * _T30;
  struct Cyc_Absyn_Kind * _T31;
  enum Cyc_Absyn_KindQual _T32;
  int _T33;
  struct Cyc_Core_Opt * * _T34;
  struct Cyc_Absyn_Kind * _T35;
  struct Cyc_Absyn_Kind * _T36;
  struct Cyc_Core_Opt * * _T37;
  struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct * _T38;
  struct Cyc_Absyn_Kind * _T39;
  struct Cyc_Absyn_Kind * _T3A;
  enum Cyc_Absyn_KindQual _T3B;
  struct Cyc_Absyn_Kind * _T3C;
  struct Cyc_Warn_String_Warn_Warg_struct _T3D;
  struct Cyc_Warn_Tvar_Warn_Warg_struct _T3E;
  struct Cyc_List_List * _T3F;
  void * _T40;
  struct Cyc_Warn_String_Warn_Warg_struct _T41;
  struct Cyc_Warn_Kind_Warn_Warg_struct _T42;
  struct Cyc_Absyn_Kind * _T43;
  unsigned int _T44;
  struct _fat_ptr _T45;
  struct Cyc_List_List * _T46;
  int * _T47;
  int _T48;
  struct Cyc_Absyn_FnType_Absyn_Type_struct * _T49;
  struct Cyc_List_List * * _T4A;
  struct Cyc_Absyn_FnType_Absyn_Type_struct * _T4B;
  struct Cyc_List_List * * _T4C;
  unsigned int _T4D;
  struct Cyc_Tctyp_CVTEnv _T4E;
  struct Cyc_List_List * (* _T4F)(struct _tuple15 * (*)(long,struct Cyc_Absyn_Tvar *),
				  long,struct Cyc_List_List *);
  struct Cyc_List_List * (* _T50)(void * (*)(void *,void *),void *,struct Cyc_List_List *);
  struct _tuple15 * (* _T51)(long,struct Cyc_Absyn_Tvar *);
  struct Cyc_List_List * * _T52;
  struct Cyc_List_List * _T53;
  struct Cyc_List_List * _T54;
  struct Cyc_List_List * * _T55;
  void * _T56;
  struct Cyc_List_List * * _T57;
  struct Cyc_List_List * _T58;
  struct Cyc_List_List * * _T59;
  struct Cyc_List_List * (* _T5A)(long (*)(struct Cyc_Absyn_Tvar *),struct Cyc_List_List *);
  struct Cyc_List_List * (* _T5B)(long (*)(void *),struct Cyc_List_List *);
  long (* _T5C)(struct Cyc_Absyn_Tvar *);
  struct Cyc_List_List * _T5D;
  struct Cyc_Warn_String_Warn_Warg_struct _T5E;
  struct Cyc_Warn_Tvar_Warn_Warg_struct _T5F;
  struct Cyc_List_List * _T60;
  void * _T61;
  struct Cyc_Warn_String_Warn_Warg_struct _T62;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T63;
  unsigned int _T64;
  struct _fat_ptr _T65;
  long _T66;
  struct Cyc_Tcenv_Tenv * _T67;
  long _T68;
  int * _T69;
  int _T6A;
  struct Cyc_Absyn_FnInfo _T6B;
  long (* _T6C)(long (*)(struct Cyc_Absyn_Tvar *),struct Cyc_List_List *);
  long (* _T6D)(long (*)(void *),struct Cyc_List_List *);
  long (* _T6E)(struct Cyc_Absyn_Tvar *);
  struct Cyc_List_List * _T6F;
  long _T70;
  struct Cyc_Warn_String_Warn_Warg_struct _T71;
  struct Cyc_Warn_String_Warn_Warg_struct _T72;
  struct Cyc_Warn_String_Warn_Warg_struct _T73;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T74;
  unsigned int _T75;
  struct _fat_ptr _T76;
  _T1 = Cyc_Tcutil_is_function_type(t);
  if (! _T1) { goto _TL26A;
  }
  _T3 = te;
  _T4 = _T3->in_tempest;
  if (_T4) { goto _TL26C;
  }else { goto _TL26E;
  }
  _TL26E: _T2 = 1;
  goto _TL26D;
  _TL26C: _T5 = te;
  _T2 = _T5->tempest_generalize;
  _TL26D: _T0 = _T2;
  goto _TL26B;
  _TL26A: _T0 = 0;
  _TL26B: { long generalize_evars = _T0;
    _T7 = Cyc_Tcutil_is_function_type(t);
    if (! _T7) { goto _TL26F;
    }
    _T8 = &Cyc_Kinds_ak;
    _T6 = (struct Cyc_Absyn_Kind *)_T8;
    goto _TL270;
    _TL26F: _T9 = &Cyc_Kinds_mk;
    _T6 = (struct Cyc_Absyn_Kind *)_T9;
    _TL270: { struct Cyc_Absyn_Kind * expected_kind = _T6;
      struct Cyc_List_List * te_vars = Cyc_Tcenv_lookup_type_vars(te);
      { struct Cyc_Tctyp_CVTEnv _T77;
	_T77.loc = loc;
	_T77.te = te;
	_T77.kind_env = te_vars;
	_T77.fn_result = 0;
	_T77.def_aliasable = 0;
	_T77.inst_type_evar = 0;
	_T77.generalize_evars = generalize_evars;
	_T77.allow_aqual_bounds = 1;
	_T77.free_vars = 0;
	_T77.free_evars = 0;
	_T77.free_qualvars = 0;
	_TA = _T77;
      }_TB = expected_kind;
      _TC = t;
      { struct Cyc_Tctyp_CVTEnv cvt = Cyc_Tctyp_check_valid_type(_TA,_TB,
								 1,_TC);
	_TE = Cyc_List_map;
	{ struct Cyc_List_List * (* _T77)(struct Cyc_Absyn_Tvar * (*)(struct _tuple15 *),
					  struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_Absyn_Tvar * (*)(struct _tuple15 *),
												struct Cyc_List_List *))_TE;
	  _TD = _T77;
	}_T10 = Cyc_Core_fst;
	{ struct Cyc_Absyn_Tvar * (* _T77)(struct _tuple15 *) = (struct Cyc_Absyn_Tvar * (*)(struct _tuple15 *))_T10;
	  _TF = _T77;
	}_T11 = cvt;
	_T12 = _T11.free_vars;
	{ struct Cyc_List_List * free_tvars = _TD(_TF,_T12);
	  _T13 = cvt;
	  { struct Cyc_List_List * free_evars = _T13.free_evars;
	    _T14 = cvt;
	    { struct Cyc_List_List * free_qualvars = _T14.free_qualvars;
	      if (te_vars == 0) { goto _TL271;
	      }
	      { struct Cyc_List_List * res = 0;
		{ struct Cyc_List_List * fs = free_tvars;
		  _TL276: _T15 = fs;
		  _T16 = (unsigned int)_T15;
		  if (_T16) { goto _TL274;
		  }else { goto _TL275;
		  }
		  _TL274: { struct Cyc_List_List * ts = te_vars;
		    _TL27A: if (ts != 0) { goto _TL278;
		    }else { goto _TL279;
		    }
		    _TL278: _T17 = fs;
		    _T18 = _T17->hd;
		    _T19 = (struct Cyc_Absyn_Tvar *)_T18;
		    _T1A = ts;
		    _T1B = _T1A->hd;
		    _T1C = (struct Cyc_Absyn_Tvar *)_T1B;
		    _T1D = Cyc_Absyn_tvar_cmp(_T19,_T1C);
		    if (_T1D != 0) { goto _TL27B;
		    }
		    goto _TL279;
		    _TL27B: _T1E = ts;
		    ts = _T1E->tl;
		    goto _TL27A;
		    _TL279: if (ts != 0) { goto _TL27D;
		    }
		    { struct Cyc_List_List * _T77 = _cycalloc(sizeof(struct Cyc_List_List));
		      _T20 = fs;
		      _T21 = _T20->hd;
		      _T77->hd = (struct Cyc_Absyn_Tvar *)_T21;
		      _T77->tl = res;
		      _T1F = (struct Cyc_List_List *)_T77;
		    }res = _T1F;
		    goto _TL27E;
		    _TL27D: _TL27E: ;
		  }_T22 = fs;
		  fs = _T22->tl;
		  goto _TL276;
		  _TL275: ;
		}free_tvars = Cyc_List_imp_rev(res);
	      }goto _TL272;
	      _TL271: _TL272: { struct Cyc_List_List * x = free_tvars;
		_TL282: if (x != 0) { goto _TL280;
		}else { goto _TL281;
		}
		_TL280: _T23 = x;
		_T24 = _T23->hd;
		_T25 = (struct Cyc_Absyn_Tvar *)_T24;
		_T26 = _T25->kind;
		{ void * _T77 = Cyc_Kinds_compress_kb(_T26);
		  enum Cyc_Absyn_AliasHint _T78;
		  struct Cyc_Absyn_Kind * _T79;
		  void * _T7A;
		  _T27 = (int *)_T77;
		  _T28 = *_T27;
		  switch (_T28) {
		  case 1: 
		    { struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct * _T7B = (struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct *)_T77;
		      _T29 = (struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct *)_T77;
		      _T2A = &_T29->f1;
		      _T7A = (struct Cyc_Core_Opt * *)_T2A;
		    }{ struct Cyc_Core_Opt * * f = _T7A;
		      _T2B = f;
		      _T2C = &Cyc_Kinds_bk;
		      _T2D = (struct Cyc_Absyn_Kind *)_T2C;
		      *_T2B = Cyc_Kinds_kind_to_bound_opt(_T2D);
		      goto _LL0;
		    }
		  case 2: 
		    { struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct * _T7B = (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct *)_T77;
		      _T2E = (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct *)_T77;
		      _T2F = &_T2E->f1;
		      _T7A = (struct Cyc_Core_Opt * *)_T2F;
		      _T79 = _T7B->f2;
		    }{ struct Cyc_Core_Opt * * f = (struct Cyc_Core_Opt * *)_T7A;
		      struct Cyc_Absyn_Kind * k = _T79;
		      _T30 = k;
		      _T31 = (struct Cyc_Absyn_Kind *)_T30;
		      _T32 = _T31->kind;
		      _T33 = (int)_T32;
		      switch (_T33) {
		      case Cyc_Absyn_BoxKind: 
			goto _LLD;
		      case Cyc_Absyn_MemKind: 
			_LLD: _T34 = f;
			_T35 = &Cyc_Kinds_bk;
			_T36 = (struct Cyc_Absyn_Kind *)_T35;
			*_T34 = Cyc_Kinds_kind_to_bound_opt(_T36);
			goto _LL9;
		      default: 
			_T37 = f;
			*_T37 = Cyc_Kinds_kind_to_bound_opt(k);
			goto _LL9;
		      }
		      _LL9: goto _LL0;
		    }
		  default: 
		    _T38 = (struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct *)_T77;
		    _T39 = _T38->f1;
		    _T3A = (struct Cyc_Absyn_Kind *)_T39;
		    _T3B = _T3A->kind;
		    if (_T3B != Cyc_Absyn_MemKind) { goto _TL285;
		    }
		    { struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct * _T7B = (struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct *)_T77;
		      _T3C = _T7B->f1;
		      { struct Cyc_Absyn_Kind _T7C = *_T3C;
			_T78 = _T7C.aliashint;
		      }
		    }{ enum Cyc_Absyn_AliasHint a = _T78;
		      { struct Cyc_Warn_String_Warn_Warg_struct _T7B;
			_T7B.tag = 0;
			_T7B.f1 = _tag_fat("type variable ",sizeof(char),
					   15U);
			_T3D = _T7B;
		      }{ struct Cyc_Warn_String_Warn_Warg_struct _T7B = _T3D;
			{ struct Cyc_Warn_Tvar_Warn_Warg_struct _T7C;
			  _T7C.tag = 7;
			  _T3F = x;
			  _T40 = _T3F->hd;
			  _T7C.f1 = (struct Cyc_Absyn_Tvar *)_T40;
			  _T3E = _T7C;
			}{ struct Cyc_Warn_Tvar_Warn_Warg_struct _T7C = _T3E;
			  { struct Cyc_Warn_String_Warn_Warg_struct _T7D;
			    _T7D.tag = 0;
			    _T7D.f1 = _tag_fat(" cannot have kind ",sizeof(char),
					       19U);
			    _T41 = _T7D;
			  }{ struct Cyc_Warn_String_Warn_Warg_struct _T7D = _T41;
			    { struct Cyc_Warn_Kind_Warn_Warg_struct _T7E;
			      _T7E.tag = 9;
			      { struct Cyc_Absyn_Kind * _T7F = _cycalloc(sizeof(struct Cyc_Absyn_Kind));
				_T7F->kind = 1U;
				_T7F->aliashint = a;
				_T43 = (struct Cyc_Absyn_Kind *)_T7F;
			      }_T7E.f1 = _T43;
			      _T42 = _T7E;
			    }{ struct Cyc_Warn_Kind_Warn_Warg_struct _T7E = _T42;
			      void * _T7F[4];
			      _T7F[0] = &_T7B;
			      _T7F[1] = &_T7C;
			      _T7F[2] = &_T7D;
			      _T7F[3] = &_T7E;
			      _T44 = loc;
			      _T45 = _tag_fat(_T7F,sizeof(void *),4);
			      Cyc_Warn_err2(_T44,_T45);
			    }
			  }
			}
		      }goto _LL0;
		    }_TL285: goto _LL0;
		  }
		  _LL0: ;
		}_T46 = x;
		x = _T46->tl;
		goto _TL282;
		_TL281: ;
	      }if (free_tvars != 0) { goto _TL289;
	      }else { goto _TL28B;
	      }
	      _TL28B: if (free_evars != 0) { goto _TL289;
	      }else { goto _TL28A;
	      }
	      _TL28A: if (free_qualvars != 0) { goto _TL289;
	      }else { goto _TL287;
	      }
	      _TL289: { void * _T77 = Cyc_Absyn_compress(t);
		void * _T78;
		void * _T79;
		_T47 = (int *)_T77;
		_T48 = *_T47;
		if (_T48 != 6) { goto _TL28C;
		}
		{ struct Cyc_Absyn_FnType_Absyn_Type_struct * _T7A = (struct Cyc_Absyn_FnType_Absyn_Type_struct *)_T77;
		  _T49 = (struct Cyc_Absyn_FnType_Absyn_Type_struct *)_T77;
		  _T4A = &(_T49->f1).tvars;
		  _T79 = (struct Cyc_List_List * *)_T4A;
		  _T4B = (struct Cyc_Absyn_FnType_Absyn_Type_struct *)_T77;
		  _T4C = &(_T4B->f1).qual_bnd;
		  _T78 = (struct Cyc_List_List * *)_T4C;
		}{ struct Cyc_List_List * * btvs = (struct Cyc_List_List * *)_T79;
		  struct Cyc_List_List * * qb = (struct Cyc_List_List * *)_T78;
		  _T4D = loc;
		  _T4E = cvt;
		  _T50 = Cyc_List_map_c;
		  { struct Cyc_List_List * (* _T7A)(struct _tuple15 * (*)(long,
									  struct Cyc_Absyn_Tvar *),
						    long,struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct _tuple15 * (*)(long,
																     struct Cyc_Absyn_Tvar *),
													       long,
													       struct Cyc_List_List *))_T50;
		    _T4F = _T7A;
		  }_T51 = Cyc_Tcutil_tvar_bool_pair;
		  _T52 = btvs;
		  _T53 = *_T52;
		  _T54 = _T4F(_T51,0,_T53);
		  _T55 = qb;
		  _T56 = Cyc_Absyn_al_qual_type;
		  Cyc_Tctyp_update_qualifier_bounds(_T4D,_T4E,_T54,_T55,_T56);
		  _T57 = btvs;
		  _T58 = *_T57;
		  if (_T58 != 0) { goto _TL28E;
		  }
		  _T59 = btvs;
		  _T5B = Cyc_List_filter;
		  { struct Cyc_List_List * (* _T7A)(long (*)(struct Cyc_Absyn_Tvar *),
						    struct Cyc_List_List *) = (struct Cyc_List_List * (*)(long (*)(struct Cyc_Absyn_Tvar *),
													  struct Cyc_List_List *))_T5B;
		    _T5A = _T7A;
		  }_T5C = Cyc_CurRgn_is_not_curr_rgn;
		  _T5D = free_tvars;
		  *_T59 = _T5A(_T5C,_T5D);
		  free_tvars = 0;
		  goto _TL28F;
		  _TL28E: _TL28F: goto _LL10;
		}_TL28C: goto _LL10;
		_LL10: ;
	      }if (free_tvars == 0) { goto _TL290;
	      }
	      { struct Cyc_Warn_String_Warn_Warg_struct _T77;
		_T77.tag = 0;
		_T77.f1 = _tag_fat("unbound type variable ",sizeof(char),
				   23U);
		_T5E = _T77;
	      }{ struct Cyc_Warn_String_Warn_Warg_struct _T77 = _T5E;
		{ struct Cyc_Warn_Tvar_Warn_Warg_struct _T78;
		  _T78.tag = 7;
		  _T60 = free_tvars;
		  _T61 = _T60->hd;
		  _T78.f1 = (struct Cyc_Absyn_Tvar *)_T61;
		  _T5F = _T78;
		}{ struct Cyc_Warn_Tvar_Warn_Warg_struct _T78 = _T5F;
		  { struct Cyc_Warn_String_Warn_Warg_struct _T79;
		    _T79.tag = 0;
		    _T79.f1 = _tag_fat(" when checking ",sizeof(char),16U);
		    _T62 = _T79;
		  }{ struct Cyc_Warn_String_Warn_Warg_struct _T79 = _T62;
		    { struct Cyc_Warn_Typ_Warn_Warg_struct _T7A;
		      _T7A.tag = 2;
		      _T7A.f1 = t;
		      _T63 = _T7A;
		    }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T7A = _T63;
		      void * _T7B[4];
		      _T7B[0] = &_T77;
		      _T7B[1] = &_T78;
		      _T7B[2] = &_T79;
		      _T7B[3] = &_T7A;
		      _T64 = loc;
		      _T65 = _tag_fat(_T7B,sizeof(void *),4);
		      Cyc_Warn_err2(_T64,_T65);
		    }
		  }
		}
	      }goto _TL291;
	      _TL290: _TL291: _T66 = Cyc_Tcutil_is_function_type(t);
	      if (_T66) { goto _TL295;
	      }else { goto _TL294;
	      }
	      _TL295: _T67 = te;
	      _T68 = _T67->in_tempest;
	      if (_T68) { goto _TL292;
	      }else { goto _TL294;
	      }
	      _TL294: Cyc_Tctyp_check_free_evars(free_evars,t,loc);
	      goto _TL293;
	      _TL292: _TL293: goto _TL288;
	      _TL287: _TL288: { void * _T77 = Cyc_Absyn_compress(t);
		struct Cyc_List_List * _T78;
		_T69 = (int *)_T77;
		_T6A = *_T69;
		if (_T6A != 6) { goto _TL296;
		}
		{ struct Cyc_Absyn_FnType_Absyn_Type_struct * _T79 = (struct Cyc_Absyn_FnType_Absyn_Type_struct *)_T77;
		  _T6B = _T79->f1;
		  _T78 = _T6B.tvars;
		}{ struct Cyc_List_List * btvs = _T78;
		  _T6D = Cyc_List_exists;
		  { long (* _T79)(long (*)(struct Cyc_Absyn_Tvar *),struct Cyc_List_List *) = (long (*)(long (*)(struct Cyc_Absyn_Tvar *),
													struct Cyc_List_List *))_T6D;
		    _T6C = _T79;
		  }_T6E = Cyc_CurRgn_is_curr_rgn;
		  _T6F = btvs;
		  _T70 = _T6C(_T6E,_T6F);
		  if (! _T70) { goto _TL298;
		  }
		  { struct Cyc_Warn_String_Warn_Warg_struct _T79;
		    _T79.tag = 0;
		    _T79.f1 = _tag_fat("cannot abstract current region ",
				       sizeof(char),32U);
		    _T71 = _T79;
		  }{ struct Cyc_Warn_String_Warn_Warg_struct _T79 = _T71;
		    { struct Cyc_Warn_String_Warn_Warg_struct _T7A;
		      _T7A.tag = 0;
		      _T7A.f1 = Cyc_CurRgn_curr_rgn_name;
		      _T72 = _T7A;
		    }{ struct Cyc_Warn_String_Warn_Warg_struct _T7A = _T72;
		      { struct Cyc_Warn_String_Warn_Warg_struct _T7B;
			_T7B.tag = 0;
			_T7B.f1 = _tag_fat(" in ",sizeof(char),5U);
			_T73 = _T7B;
		      }{ struct Cyc_Warn_String_Warn_Warg_struct _T7B = _T73;
			{ struct Cyc_Warn_Typ_Warn_Warg_struct _T7C;
			  _T7C.tag = 2;
			  _T7C.f1 = t;
			  _T74 = _T7C;
			}{ struct Cyc_Warn_Typ_Warn_Warg_struct _T7C = _T74;
			  void * _T7D[4];
			  _T7D[0] = &_T79;
			  _T7D[1] = &_T7A;
			  _T7D[2] = &_T7B;
			  _T7D[3] = &_T7C;
			  _T75 = loc;
			  _T76 = _tag_fat(_T7D,sizeof(void *),4);
			  Cyc_Warn_err2(_T75,_T76);
			}
		      }
		    }
		  }goto _TL299;
		  _TL298: _TL299: goto _LL15;
		}_TL296: goto _LL15;
		_LL15: ;
	      }
	    }
	  }
	}
      }
    }
  }
}
void Cyc_Tctyp_check_fndecl_valid_type(unsigned int loc,struct Cyc_Tcenv_Tenv * te,
				       struct Cyc_Absyn_Fndecl * fd) {
  int * _T0;
  int _T1;
  struct Cyc_Absyn_Fndecl * _T2;
  struct Cyc_Absyn_FnInfo _T3;
  struct Cyc_Absyn_Fndecl * _T4;
  struct Cyc_Absyn_Fndecl * _T5;
  struct Cyc_Absyn_Fndecl * _T6;
  unsigned int _T7;
  struct Cyc_Absyn_FnInfo _T8;
  struct Cyc_Absyn_Tqual _T9;
  long _TA;
  struct Cyc_Absyn_FnInfo _TB;
  void * _TC;
  struct Cyc_Warn_String_Warn_Warg_struct _TD;
  int (* _TE)(struct _fat_ptr);
  void * (* _TF)(struct _fat_ptr);
  struct _fat_ptr _T10;
  struct Cyc_Absyn_Fndecl * _T11;
  struct Cyc_Absyn_FnInfo _T12;
  struct Cyc_List_List * _T13;
  struct Cyc_List_List * _T14;
  void * _T15;
  struct _tuple9 * _T16;
  struct _tuple9 _T17;
  struct _fat_ptr * _T18;
  struct Cyc_List_List * _T19;
  struct Cyc_List_List * _T1A;
  unsigned int _T1B;
  struct _fat_ptr _T1C;
  struct Cyc_Absyn_Fndecl * _T1D;
  void * t = Cyc_Tcutil_fndecl2type(fd);
  Cyc_Tctyp_check_valid_toplevel_type(loc,te,t);
  { void * _T1E = Cyc_Absyn_compress(t);
    struct Cyc_Absyn_FnInfo _T1F;
    _T0 = (int *)_T1E;
    _T1 = *_T0;
    if (_T1 != 6) { goto _TL29A;
    }
    { struct Cyc_Absyn_FnType_Absyn_Type_struct * _T20 = (struct Cyc_Absyn_FnType_Absyn_Type_struct *)_T1E;
      _T1F = _T20->f1;
    }{ struct Cyc_Absyn_FnInfo i = _T1F;
      _T2 = fd;
      _T3 = _T2->i;
      { struct Cyc_List_List * atts = _T3.attributes;
	_T4 = fd;
	_T4->i = i;
	_T5 = fd;
	(_T5->i).attributes = atts;
	_T6 = fd;
	_T7 = loc;
	_T8 = i;
	_T9 = _T8.ret_tqual;
	_TA = _T9.print_const;
	_TB = i;
	_TC = _TB.ret_type;
	((_T6->i).ret_tqual).real_const = Cyc_Tcutil_extract_const_from_typedef(_T7,
										_TA,
										_TC);
	goto _LL0;
      }
    }_TL29A: { struct Cyc_Warn_String_Warn_Warg_struct _T20;
      _T20.tag = 0;
      _T20.f1 = _tag_fat("check_fndecl_valid_type: not a FnType",sizeof(char),
			 38U);
      _TD = _T20;
    }{ struct Cyc_Warn_String_Warn_Warg_struct _T20 = _TD;
      void * _T21[1];
      _T21[0] = &_T20;
      _TF = Cyc_Warn_impos2;
      { int (* _T22)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_TF;
	_TE = _T22;
      }_T10 = _tag_fat(_T21,sizeof(void *),1);
      _TE(_T10);
    }_LL0: ;
  }{ struct Cyc_List_List * argnames = 0;
    _T11 = fd;
    _T12 = _T11->i;
    { struct Cyc_List_List * args = _T12.args;
      _TL29F: if (args != 0) { goto _TL29D;
      }else { goto _TL29E;
      }
      _TL29D: { struct Cyc_List_List * _T1E = _cycalloc(sizeof(struct Cyc_List_List));
	_T14 = args;
	_T15 = _T14->hd;
	_T16 = (struct _tuple9 *)_T15;
	_T17 = *_T16;
	_T18 = _T17.f0;
	_T1E->hd = _check_null(_T18);
	_T1E->tl = argnames;
	_T13 = (struct Cyc_List_List *)_T1E;
      }argnames = _T13;
      _T19 = args;
      args = _T19->tl;
      goto _TL29F;
      _TL29E: ;
    }_T1A = argnames;
    _T1B = loc;
    _T1C = _tag_fat("function declaration has repeated parameter",sizeof(char),
		    44U);
    Cyc_Tcutil_check_unique_vars(_T1A,_T1B,_T1C);
    _T1D = fd;
    _T1D->cached_type = t;
  }
}
void Cyc_Tctyp_check_type(unsigned int loc,struct Cyc_Tcenv_Tenv * te,struct Cyc_List_List * bound_tvars,
			  struct Cyc_Absyn_Kind * expected_kind,long allow_evars,
			  long allow_abs_aggr,void * t) {
  struct Cyc_Tctyp_CVTEnv _T0;
  struct Cyc_Absyn_Kind * _T1;
  long _T2;
  void * _T3;
  struct Cyc_List_List * (* _T4)(struct Cyc_List_List *,struct Cyc_List_List *,
				 struct Cyc_Absyn_Tvar * (*)(struct _tuple15 *));
  struct Cyc_Tctyp_CVTEnv _T5;
  struct Cyc_List_List * _T6;
  struct Cyc_List_List * _T7;
  struct Cyc_Absyn_Tvar * (* _T8)(struct _tuple15 *);
  void * (* _T9)(struct _tuple0 *);
  struct Cyc_Warn_String_Warn_Warg_struct _TA;
  struct Cyc_Warn_Tvar_Warn_Warg_struct _TB;
  struct Cyc_List_List * _TC;
  void * _TD;
  struct _tuple15 * _TE;
  struct _tuple15 _TF;
  struct Cyc_Warn_String_Warn_Warg_struct _T10;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T11;
  unsigned int _T12;
  struct _fat_ptr _T13;
  struct Cyc_List_List * _T14;
  long _T15;
  struct Cyc_Tctyp_CVTEnv _T16;
  struct Cyc_List_List * _T17;
  void * _T18;
  unsigned int _T19;
  { struct Cyc_Tctyp_CVTEnv _T1A;
    _T1A.loc = loc;
    _T1A.te = te;
    _T1A.kind_env = bound_tvars;
    _T1A.fn_result = 0;
    _T1A.def_aliasable = 0;
    _T1A.inst_type_evar = 0;
    _T1A.generalize_evars = 0;
    _T1A.allow_aqual_bounds = 0;
    _T1A.free_vars = 0;
    _T1A.free_evars = 0;
    _T1A.free_qualvars = 0;
    _T0 = _T1A;
  }_T1 = expected_kind;
  _T2 = allow_abs_aggr;
  _T3 = t;
  { struct Cyc_Tctyp_CVTEnv cvt = Cyc_Tctyp_check_valid_type(_T0,_T1,_T2,
							     _T3);
    { struct Cyc_List_List * (* _T1A)(struct Cyc_List_List *,struct Cyc_List_List *,
				      struct Cyc_Absyn_Tvar * (*)(struct _tuple15 *)) = (struct Cyc_List_List * (*)(struct Cyc_List_List *,
														    struct Cyc_List_List *,
														    struct Cyc_Absyn_Tvar * (*)(struct _tuple15 *)))Cyc_Tctyp_remove_bound_tvars;
      _T4 = _T1A;
    }_T5 = cvt;
    _T6 = _T5.free_vars;
    _T7 = bound_tvars;
    _T9 = Cyc_Core_fst;
    { struct Cyc_Absyn_Tvar * (* _T1A)(struct _tuple15 *) = (struct Cyc_Absyn_Tvar * (*)(struct _tuple15 *))_T9;
      _T8 = _T1A;
    }{ struct Cyc_List_List * free_tvs = _T4(_T6,_T7,_T8);
      _TL2A3: if (free_tvs != 0) { goto _TL2A1;
      }else { goto _TL2A2;
      }
      _TL2A1: { struct Cyc_Warn_String_Warn_Warg_struct _T1A;
	_T1A.tag = 0;
	_T1A.f1 = _tag_fat("unbound type variable ",sizeof(char),23U);
	_TA = _T1A;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T1A = _TA;
	{ struct Cyc_Warn_Tvar_Warn_Warg_struct _T1B;
	  _T1B.tag = 7;
	  _TC = free_tvs;
	  _TD = _TC->hd;
	  _TE = (struct _tuple15 *)_TD;
	  _TF = *_TE;
	  _T1B.f1 = _TF.f0;
	  _TB = _T1B;
	}{ struct Cyc_Warn_Tvar_Warn_Warg_struct _T1B = _TB;
	  { struct Cyc_Warn_String_Warn_Warg_struct _T1C;
	    _T1C.tag = 0;
	    _T1C.f1 = _tag_fat(" in type ",sizeof(char),10U);
	    _T10 = _T1C;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T1C = _T10;
	    { struct Cyc_Warn_Typ_Warn_Warg_struct _T1D;
	      _T1D.tag = 2;
	      _T1D.f1 = t;
	      _T11 = _T1D;
	    }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T1D = _T11;
	      void * _T1E[4];
	      _T1E[0] = &_T1A;
	      _T1E[1] = &_T1B;
	      _T1E[2] = &_T1C;
	      _T1E[3] = &_T1D;
	      _T12 = loc;
	      _T13 = _tag_fat(_T1E,sizeof(void *),4);
	      Cyc_Warn_err2(_T12,_T13);
	    }
	  }
	}
      }_T14 = free_tvs;
      free_tvs = _T14->tl;
      goto _TL2A3;
      _TL2A2: _T15 = allow_evars;
      if (_T15) { goto _TL2A4;
      }else { goto _TL2A6;
      }
      _TL2A6: _T16 = cvt;
      _T17 = _T16.free_evars;
      _T18 = t;
      _T19 = loc;
      Cyc_Tctyp_check_free_evars(_T17,_T18,_T19);
      goto _TL2A5;
      _TL2A4: _TL2A5: ;
    }
  }
}
void Cyc_Tctyp_check_type_with_bounds(unsigned int loc,struct Cyc_Tcenv_Tenv * te,
				      struct Cyc_List_List * flagged_tvars,
				      struct Cyc_List_List * * qual_bnd,struct Cyc_Absyn_Kind * expected_kind,
				      long allow_evars,long allow_abs_aggr,
				      void * t) {
  struct Cyc_List_List * (* _T0)(struct Cyc_Absyn_Tvar * (*)(struct _tuple15 *),
				 struct Cyc_List_List *);
  struct Cyc_List_List * (* _T1)(void * (*)(void *),struct Cyc_List_List *);
  struct Cyc_Absyn_Tvar * (* _T2)(struct _tuple15 *);
  void * (* _T3)(struct _tuple0 *);
  struct Cyc_List_List * _T4;
  struct Cyc_Tctyp_CVTEnv _T5;
  struct Cyc_Absyn_Kind * _T6;
  long _T7;
  void * _T8;
  struct Cyc_List_List * * _T9;
  struct Cyc_List_List * _TA;
  void * _TB;
  struct Cyc_Tctyp_CVTEnv _TC;
  struct Cyc_Absyn_Kind * _TD;
  struct Cyc_Absyn_Kind * _TE;
  long _TF;
  void * _T10;
  struct Cyc_Tctyp_CVTEnv _T11;
  struct Cyc_Absyn_Kind * _T12;
  struct Cyc_Absyn_Kind * _T13;
  long _T14;
  void * _T15;
  struct Cyc_List_List * _T16;
  struct Cyc_List_List * (* _T17)(struct Cyc_List_List *,struct Cyc_List_List *,
				  struct Cyc_Absyn_Tvar * (*)(struct _tuple15 *));
  struct Cyc_Tctyp_CVTEnv _T18;
  struct Cyc_List_List * _T19;
  struct Cyc_List_List * _T1A;
  struct Cyc_Absyn_Tvar * (* _T1B)(struct _tuple15 *);
  void * (* _T1C)(struct _tuple0 *);
  struct Cyc_Warn_String_Warn_Warg_struct _T1D;
  struct Cyc_Warn_Tvar_Warn_Warg_struct _T1E;
  struct Cyc_List_List * _T1F;
  void * _T20;
  struct _tuple15 * _T21;
  struct _tuple15 _T22;
  struct Cyc_Warn_String_Warn_Warg_struct _T23;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T24;
  unsigned int _T25;
  struct _fat_ptr _T26;
  struct Cyc_List_List * _T27;
  long _T28;
  struct Cyc_Tctyp_CVTEnv _T29;
  struct Cyc_List_List * _T2A;
  void * _T2B;
  unsigned int _T2C;
  _T1 = Cyc_List_map;
  { struct Cyc_List_List * (* _T2D)(struct Cyc_Absyn_Tvar * (*)(struct _tuple15 *),
				    struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_Absyn_Tvar * (*)(struct _tuple15 *),
											  struct Cyc_List_List *))_T1;
    _T0 = _T2D;
  }_T3 = Cyc_Core_fst;
  { struct Cyc_Absyn_Tvar * (* _T2D)(struct _tuple15 *) = (struct Cyc_Absyn_Tvar * (*)(struct _tuple15 *))_T3;
    _T2 = _T2D;
  }_T4 = flagged_tvars;
  { struct Cyc_List_List * bound_tvars = _T0(_T2,_T4);
    { struct Cyc_Tctyp_CVTEnv _T2D;
      _T2D.loc = loc;
      _T2D.te = te;
      _T2D.kind_env = bound_tvars;
      _T2D.fn_result = 0;
      _T2D.def_aliasable = 0;
      _T2D.inst_type_evar = 0;
      _T2D.generalize_evars = 0;
      _T2D.allow_aqual_bounds = 1;
      _T2D.free_vars = 0;
      _T2D.free_evars = 0;
      _T2D.free_qualvars = 0;
      _T5 = _T2D;
    }_T6 = expected_kind;
    _T7 = allow_abs_aggr;
    _T8 = t;
    { struct Cyc_Tctyp_CVTEnv cvt = Cyc_Tctyp_check_valid_type(_T5,_T6,_T7,
							       _T8);
      _T9 = qual_bnd;
      { struct Cyc_List_List * qbit = *_T9;
	_TL2AA: if (qbit != 0) { goto _TL2A8;
	}else { goto _TL2A9;
	}
	_TL2A8: _TA = qbit;
	_TB = _TA->hd;
	{ struct _tuple0 * _T2D = (struct _tuple0 *)_TB;
	  void * _T2E;
	  void * _T2F;
	  { struct _tuple0 _T30 = *_T2D;
	    _T2F = _T30.f0;
	    _T2E = _T30.f1;
	  }{ void * tv = _T2F;
	    void * bnd = _T2E;
	    _TC = cvt;
	    _TD = &Cyc_Kinds_aqk;
	    _TE = (struct Cyc_Absyn_Kind *)_TD;
	    _TF = allow_abs_aggr;
	    _T10 = tv;
	    cvt = Cyc_Tctyp_check_valid_type(_TC,_TE,_TF,_T10);
	    _T11 = cvt;
	    _T12 = &Cyc_Kinds_aqk;
	    _T13 = (struct Cyc_Absyn_Kind *)_T12;
	    _T14 = allow_abs_aggr;
	    _T15 = bnd;
	    cvt = Cyc_Tctyp_check_valid_type(_T11,_T13,_T14,_T15);
	  }
	}_T16 = qbit;
	qbit = _T16->tl;
	goto _TL2AA;
	_TL2A9: ;
      }{ struct Cyc_List_List * (* _T2D)(struct Cyc_List_List *,struct Cyc_List_List *,
					 struct Cyc_Absyn_Tvar * (*)(struct _tuple15 *)) = (struct Cyc_List_List * (*)(struct Cyc_List_List *,
														       struct Cyc_List_List *,
														       struct Cyc_Absyn_Tvar * (*)(struct _tuple15 *)))Cyc_Tctyp_remove_bound_tvars;
	_T17 = _T2D;
      }_T18 = cvt;
      _T19 = _T18.free_vars;
      _T1A = bound_tvars;
      _T1C = Cyc_Core_fst;
      { struct Cyc_Absyn_Tvar * (* _T2D)(struct _tuple15 *) = (struct Cyc_Absyn_Tvar * (*)(struct _tuple15 *))_T1C;
	_T1B = _T2D;
      }{ struct Cyc_List_List * free_tvs = _T17(_T19,_T1A,_T1B);
	_TL2AE: if (free_tvs != 0) { goto _TL2AC;
	}else { goto _TL2AD;
	}
	_TL2AC: { struct Cyc_Warn_String_Warn_Warg_struct _T2D;
	  _T2D.tag = 0;
	  _T2D.f1 = _tag_fat("unbound type variable ",sizeof(char),23U);
	  _T1D = _T2D;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T2D = _T1D;
	  { struct Cyc_Warn_Tvar_Warn_Warg_struct _T2E;
	    _T2E.tag = 7;
	    _T1F = free_tvs;
	    _T20 = _T1F->hd;
	    _T21 = (struct _tuple15 *)_T20;
	    _T22 = *_T21;
	    _T2E.f1 = _T22.f0;
	    _T1E = _T2E;
	  }{ struct Cyc_Warn_Tvar_Warn_Warg_struct _T2E = _T1E;
	    { struct Cyc_Warn_String_Warn_Warg_struct _T2F;
	      _T2F.tag = 0;
	      _T2F.f1 = _tag_fat(" in type ",sizeof(char),10U);
	      _T23 = _T2F;
	    }{ struct Cyc_Warn_String_Warn_Warg_struct _T2F = _T23;
	      { struct Cyc_Warn_Typ_Warn_Warg_struct _T30;
		_T30.tag = 2;
		_T30.f1 = t;
		_T24 = _T30;
	      }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T30 = _T24;
		void * _T31[4];
		_T31[0] = &_T2D;
		_T31[1] = &_T2E;
		_T31[2] = &_T2F;
		_T31[3] = &_T30;
		_T25 = loc;
		_T26 = _tag_fat(_T31,sizeof(void *),4);
		Cyc_Warn_err2(_T25,_T26);
	      }
	    }
	  }
	}_T27 = free_tvs;
	free_tvs = _T27->tl;
	goto _TL2AE;
	_TL2AD: _T28 = allow_evars;
	if (_T28) { goto _TL2AF;
	}else { goto _TL2B1;
	}
	_TL2B1: _T29 = cvt;
	_T2A = _T29.free_evars;
	_T2B = t;
	_T2C = loc;
	Cyc_Tctyp_check_free_evars(_T2A,_T2B,_T2C);
	goto _TL2B0;
	_TL2AF: _TL2B0: Cyc_Tctyp_update_qualifier_bounds(loc,cvt,flagged_tvars,
							  qual_bnd,Cyc_Absyn_rtd_qual_type);
      }
    }
  }
}
