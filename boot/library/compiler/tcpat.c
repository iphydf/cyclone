#include <cyc_include.h>
 struct Cyc_Core_Opt {
  void * v;
};
 struct _tuple0 {
  void * f0;
  void * f1;
};
void * Cyc_Core_snd(struct _tuple0 *);
extern struct _RegionHandle * Cyc_Core_heap_region;
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
extern int Cyc_fprintf(struct Cyc___cycFILE *,struct _fat_ptr,struct _fat_ptr);
 struct Cyc_List_List {
  void * hd;
  struct Cyc_List_List * tl;
};
extern struct Cyc_List_List * Cyc_List_list(struct _fat_ptr);
extern int Cyc_List_length(struct Cyc_List_List *);
extern struct Cyc_List_List * Cyc_List_map(void * (*)(void *),struct Cyc_List_List *);
extern struct Cyc_List_List * Cyc_List_map_c(void * (*)(void *,void *),void *,
					     struct Cyc_List_List *);
extern struct Cyc_List_List * Cyc_List_rmap_c(struct _RegionHandle *,void * (*)(void *,
										void *),
					      void *,struct Cyc_List_List *);
extern struct Cyc_List_List * Cyc_List_rev(struct Cyc_List_List *);
extern struct Cyc_List_List * Cyc_List_imp_rev(struct Cyc_List_List *);
extern struct Cyc_List_List * Cyc_List_append(struct Cyc_List_List *,struct Cyc_List_List *);
extern struct Cyc_List_List * Cyc_List_rappend(struct _RegionHandle *,struct Cyc_List_List *,
					       struct Cyc_List_List *);
extern struct Cyc_List_List * Cyc_List_imp_append(struct Cyc_List_List *,
						  struct Cyc_List_List *);
extern struct Cyc_List_List * Cyc_List_rzip(struct _RegionHandle *,struct _RegionHandle *,
					    struct Cyc_List_List *,struct Cyc_List_List *);
 struct _tuple1 {
  struct Cyc_List_List * f0;
  struct Cyc_List_List * f1;
};
extern struct _tuple1 Cyc_List_split(struct Cyc_List_List *);
extern struct Cyc_List_List * Cyc_List_tabulate_c(int,void * (*)(void *,int),
						  void *);
extern int Cyc_strcmp(struct _fat_ptr,struct _fat_ptr);
extern int Cyc_strptrcmp(struct _fat_ptr *,struct _fat_ptr *);
extern struct _fat_ptr Cyc_strconcat_l(struct Cyc_List_List *);
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
 struct _tuple2 {
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
enum Cyc_Absyn_Size_of {
  Cyc_Absyn_Char_sz = 0U,
  Cyc_Absyn_Short_sz = 1U,
  Cyc_Absyn_Int_sz = 2U,
  Cyc_Absyn_Long_sz = 3U,
  Cyc_Absyn_LongLong_sz = 4U,
  Cyc_Absyn_Int128_sz = 5U
};
enum Cyc_Absyn_Sign {
  Cyc_Absyn_Signed = 0U,
  Cyc_Absyn_Unsigned = 1U,
  Cyc_Absyn_None = 2U
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
 struct Cyc_Absyn_UnknownDatatypeInfo {
  struct _tuple2 * name;
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
  struct _tuple2 * datatype_name;
  struct _tuple2 * field_name;
  long is_extensible;
};
 struct _union_DatatypeFieldInfo_UnknownDatatypefield {
  int tag;
  struct Cyc_Absyn_UnknownDatatypeFieldInfo val;
};
 struct _tuple3 {
  struct Cyc_Absyn_Datatypedecl * f0;
  struct Cyc_Absyn_Datatypefield * f1;
};
 struct _union_DatatypeFieldInfo_KnownDatatypefield {
  int tag;
  struct _tuple3 val;
};
 union Cyc_Absyn_DatatypeFieldInfo {
  struct _union_DatatypeFieldInfo_UnknownDatatypefield UnknownDatatypefield;
  struct _union_DatatypeFieldInfo_KnownDatatypefield KnownDatatypefield;
};
union Cyc_Absyn_DatatypeFieldInfo Cyc_Absyn_KnownDatatypefield(struct Cyc_Absyn_Datatypedecl *,
							       struct Cyc_Absyn_Datatypefield *);
 struct _tuple4 {
  enum Cyc_Absyn_AggrKind f0;
  struct _tuple2 * f1;
  struct Cyc_Core_Opt * f2;
};
 struct _union_AggrInfo_UnknownAggr {
  int tag;
  struct _tuple4 val;
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
 struct Cyc_Absyn_IntCon_Absyn_TyCon_struct {
  int tag;
  enum Cyc_Absyn_Sign f1;
  enum Cyc_Absyn_Size_of f2;
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
 struct Cyc_Absyn_AppType_Absyn_Type_struct {
  int tag;
  void * f1;
  struct Cyc_List_List * f2;
};
 struct Cyc_Absyn_VarType_Absyn_Type_struct {
  int tag;
  struct Cyc_Absyn_Tvar * f1;
};
 struct Cyc_Absyn_PointerType_Absyn_Type_struct {
  int tag;
  struct Cyc_Absyn_PtrInfo f1;
};
 struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct {
  int tag;
  enum Cyc_Absyn_AggrKind f1;
  long f2;
  struct Cyc_List_List * f3;
};
 struct Cyc_Absyn_FieldName_Absyn_Designator_struct {
  int tag;
  struct _fat_ptr * f1;
};
 struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct {
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
 struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct {
  int tag;
};
 struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct {
  int tag;
  struct Cyc_Absyn_Vardecl * f1;
  struct Cyc_Absyn_Pat * f2;
};
 struct Cyc_Absyn_AliasVar_p_Absyn_Raw_pat_struct {
  int tag;
  struct Cyc_Absyn_Tvar * f1;
  struct Cyc_Absyn_Vardecl * f2;
};
 struct Cyc_Absyn_Reference_p_Absyn_Raw_pat_struct {
  int tag;
  struct Cyc_Absyn_Vardecl * f1;
  struct Cyc_Absyn_Pat * f2;
};
 struct Cyc_Absyn_TagInt_p_Absyn_Raw_pat_struct {
  int tag;
  struct Cyc_Absyn_Tvar * f1;
  struct Cyc_Absyn_Vardecl * f2;
};
 struct Cyc_Absyn_Pointer_p_Absyn_Raw_pat_struct {
  int tag;
  struct Cyc_Absyn_Pat * f1;
};
 struct Cyc_Absyn_Aggr_p_Absyn_Raw_pat_struct {
  int tag;
  void * f1;
  long f2;
  struct Cyc_List_List * f3;
  struct Cyc_List_List * f4;
  long f5;
};
 struct Cyc_Absyn_Datatype_p_Absyn_Raw_pat_struct {
  int tag;
  struct Cyc_Absyn_Datatypedecl * f1;
  struct Cyc_Absyn_Datatypefield * f2;
  struct Cyc_List_List * f3;
  long f4;
};
 struct Cyc_Absyn_Int_p_Absyn_Raw_pat_struct {
  int tag;
  enum Cyc_Absyn_Sign f1;
  int f2;
};
 struct Cyc_Absyn_Char_p_Absyn_Raw_pat_struct {
  int tag;
  char f1;
};
 struct Cyc_Absyn_Float_p_Absyn_Raw_pat_struct {
  int tag;
  struct _fat_ptr f1;
  int f2;
};
 struct Cyc_Absyn_Enum_p_Absyn_Raw_pat_struct {
  int tag;
  struct Cyc_Absyn_Enumdecl * f1;
  struct Cyc_Absyn_Enumfield * f2;
};
 struct Cyc_Absyn_AnonEnum_p_Absyn_Raw_pat_struct {
  int tag;
  void * f1;
  struct Cyc_Absyn_Enumfield * f2;
};
 struct Cyc_Absyn_Exp_p_Absyn_Raw_pat_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
};
extern struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct Cyc_Absyn_Wild_p_val;
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
 struct Cyc_Absyn_Vardecl {
  enum Cyc_Absyn_Scope sc;
  struct _tuple2 * name;
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
  struct _tuple2 * name;
  struct Cyc_List_List * tvs;
  struct Cyc_Absyn_AggrdeclImpl * impl;
  struct Cyc_List_List * attributes;
  long expected_mem_kind;
};
 struct Cyc_Absyn_Datatypefield {
  struct _tuple2 * name;
  struct Cyc_List_List * typs;
  unsigned int loc;
  enum Cyc_Absyn_Scope sc;
};
 struct Cyc_Absyn_Datatypedecl {
  enum Cyc_Absyn_Scope sc;
  struct _tuple2 * name;
  struct Cyc_List_List * tvs;
  struct Cyc_Core_Opt * fields;
  long is_extensible;
};
 struct Cyc_Absyn_Enumfield {
  struct _tuple2 * name;
  struct Cyc_Absyn_Exp * tag;
  unsigned int loc;
};
 struct Cyc_Absyn_Enumdecl {
  enum Cyc_Absyn_Scope sc;
  struct _tuple2 * name;
  struct Cyc_Core_Opt * fields;
};
int Cyc_Absyn_qvar_cmp(struct _tuple2 *,struct _tuple2 *);
struct Cyc_Absyn_Tqual Cyc_Absyn_const_tqual(unsigned int);
struct Cyc_Absyn_Tqual Cyc_Absyn_empty_tqual(unsigned int);
void * Cyc_Absyn_compress(void *);
void * Cyc_Absyn_new_evar(struct Cyc_Core_Opt *,struct Cyc_Core_Opt *);
void * Cyc_Absyn_wildtyp(struct Cyc_Core_Opt *);
extern void * Cyc_Absyn_char_type;
extern void * Cyc_Absyn_uint_type;
extern void * Cyc_Absyn_sint_type;
void * Cyc_Absyn_gen_float_type(unsigned int);
extern void * Cyc_Absyn_al_qual_type;
extern void * Cyc_Absyn_true_type;
extern void * Cyc_Absyn_false_type;
extern void * Cyc_Absyn_void_type;
extern void * Cyc_Absyn_var_type(struct Cyc_Absyn_Tvar *);
extern void * Cyc_Absyn_enum_type(struct _tuple2 *,struct Cyc_Absyn_Enumdecl *);
struct Cyc_Absyn_FieldName_Absyn_Designator_struct * Cyc_Absyn_tuple_field_designator(int);
void * Cyc_Absyn_bounds_one();
void * Cyc_Absyn_pointer_type(struct Cyc_Absyn_PtrInfo);
void * Cyc_Absyn_datatype_type(union Cyc_Absyn_DatatypeInfo,struct Cyc_List_List *);
void * Cyc_Absyn_datatype_field_type(union Cyc_Absyn_DatatypeFieldInfo,struct Cyc_List_List *);
void * Cyc_Absyn_aggr_type(union Cyc_Absyn_AggrInfo,struct Cyc_List_List *);
struct Cyc_Absyn_Exp * Cyc_Absyn_address_exp(struct Cyc_Absyn_Exp *,unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_deref_exp(struct Cyc_Absyn_Exp *,unsigned int);
struct Cyc_Absyn_Exp * Cyc_Absyn_aggrmember_exp(struct Cyc_Absyn_Exp *,struct _fat_ptr *,
						unsigned int);
struct Cyc_Absyn_Stmt * Cyc_Absyn_skip_stmt(unsigned int);
struct Cyc_Absyn_Aggrdecl * Cyc_Absyn_get_known_aggrdecl(union Cyc_Absyn_AggrInfo);
struct _fat_ptr Cyc_Absynpp_exp2string(struct Cyc_Absyn_Exp *);
struct _fat_ptr Cyc_Absynpp_stmt2string(struct Cyc_Absyn_Stmt *);
struct _fat_ptr Cyc_Absynpp_qvar2string(struct _tuple2 *);
struct _fat_ptr Cyc_Absynpp_pat2string(struct Cyc_Absyn_Pat *);
struct Cyc_Dict_T;
 struct Cyc_Dict_Dict {
  int (* rel)(void *,void *);
  struct _RegionHandle * r;
  const struct Cyc_Dict_T * t;
};
struct Cyc_Set_Set;
extern struct Cyc_Set_Set * Cyc_Set_rempty(struct _RegionHandle *,int (*)(void *,
									  void *));
extern struct Cyc_Set_Set * Cyc_Set_insert(struct Cyc_Set_Set *,void *);
extern int Cyc_Set_cardinality(struct Cyc_Set_Set *);
extern long Cyc_Set_is_empty(struct Cyc_Set_Set *);
extern long Cyc_Set_member(struct Cyc_Set_Set *,void *);
extern void * Cyc_Set_choose(struct Cyc_Set_Set *);
 struct _tuple13 {
  unsigned int f0;
  long f1;
};
extern struct _tuple13 Cyc_Evexp_eval_const_uint_exp(struct Cyc_Absyn_Exp *);
extern struct Cyc_Absyn_Kind Cyc_Kinds_ak;
extern struct Cyc_Absyn_Kind Cyc_Kinds_mk;
extern struct Cyc_Core_Opt Cyc_Kinds_mko;
extern struct Cyc_Core_Opt Cyc_Kinds_eko;
extern struct Cyc_Core_Opt Cyc_Kinds_aqko;
void * Cyc_Kinds_compress_kb(void *);
long Cyc_Kinds_kind_leq(struct Cyc_Absyn_Kind *,struct Cyc_Absyn_Kind *);
struct Cyc___cycFILE;
extern struct Cyc___cycFILE * Cyc_stderr;
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);
extern int Cyc_fprintf(struct Cyc___cycFILE *,struct _fat_ptr,struct _fat_ptr);
long Cyc_Subtype_subtype(unsigned int,struct Cyc_List_List *,void *,void *);
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
struct Cyc_List_List * Cyc_Tcenv_lookup_type_vars(struct Cyc_Tcenv_Tenv *);
struct Cyc_Core_Opt * Cyc_Tcenv_lookup_opt_type_vars(struct Cyc_Tcenv_Tenv *);
struct Cyc_Tcenv_Tenv * Cyc_Tcenv_add_type_vars(unsigned int,struct Cyc_Tcenv_Tenv *,
						struct Cyc_List_List *);
struct Cyc_List_List * Cyc_Tcenv_curr_aquals_bounds(struct Cyc_Tcenv_Tenv *);
struct Cyc_Tcenv_Tenv * Cyc_Tcenv_add_aquals_bound(struct Cyc_Tcenv_Tenv *,
						   void *,void *);
struct Cyc_Tcenv_Tenv * Cyc_Tcenv_add_region(struct Cyc_Tcenv_Tenv *,void *,
					     long,long);
void Cyc_Tcenv_check_effect_accessible_nodelay(struct Cyc_Tcenv_Tenv *,unsigned int,
					       void *);
void * Cyc_Tcexp_tcExp(struct Cyc_Tcenv_Tenv *,void * *,struct Cyc_Absyn_Exp *);
struct Cyc_Absyn_PtrInfo Cyc_Tcexp_fresh_pointer_type(struct Cyc_Tcenv_Tenv *);
 struct Cyc_Tcpat_TcPatResult {
  struct _tuple1 * tvars_and_effconstr_opt;
  struct Cyc_List_List * patvars;
  struct Cyc_List_List * aquals_bounds;
};
 struct Cyc_Tcpat_WhereTest_Tcpat_PatTest_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
};
 struct Cyc_Tcpat_EqNull_Tcpat_PatTest_struct {
  int tag;
};
 struct Cyc_Tcpat_NeqNull_Tcpat_PatTest_struct {
  int tag;
};
 struct Cyc_Tcpat_EqEnum_Tcpat_PatTest_struct {
  int tag;
  struct Cyc_Absyn_Enumdecl * f1;
  struct Cyc_Absyn_Enumfield * f2;
};
 struct Cyc_Tcpat_EqAnonEnum_Tcpat_PatTest_struct {
  int tag;
  void * f1;
  struct Cyc_Absyn_Enumfield * f2;
};
 struct Cyc_Tcpat_EqFloat_Tcpat_PatTest_struct {
  int tag;
  struct _fat_ptr f1;
  int f2;
};
 struct Cyc_Tcpat_EqConst_Tcpat_PatTest_struct {
  int tag;
  unsigned int f1;
};
 struct Cyc_Tcpat_EqDatatypeTag_Tcpat_PatTest_struct {
  int tag;
  int f1;
  struct Cyc_Absyn_Datatypedecl * f2;
  struct Cyc_Absyn_Datatypefield * f3;
};
 struct Cyc_Tcpat_EqTaggedUnion_Tcpat_PatTest_struct {
  int tag;
  void * f1;
  struct _fat_ptr * f2;
  int f3;
};
 struct Cyc_Tcpat_EqExtensibleDatatype_Tcpat_PatTest_struct {
  int tag;
  struct Cyc_Absyn_Datatypedecl * f1;
  struct Cyc_Absyn_Datatypefield * f2;
};
 struct Cyc_Tcpat_Dummy_Tcpat_Access_struct {
  int tag;
};
 struct Cyc_Tcpat_Deref_Tcpat_Access_struct {
  int tag;
  void * f1;
};
 struct Cyc_Tcpat_DatatypeField_Tcpat_Access_struct {
  int tag;
  struct Cyc_Absyn_Datatypedecl * f1;
  struct Cyc_Absyn_Datatypefield * f2;
  unsigned int f3;
  void * f4;
};
 struct Cyc_Tcpat_AggrField_Tcpat_Access_struct {
  int tag;
  void * f1;
  long f2;
  struct _fat_ptr * f3;
  void * f4;
};
 struct _union_PatOrWhere_pattern {
  int tag;
  struct Cyc_Absyn_Pat * val;
};
 struct _union_PatOrWhere_where_clause {
  int tag;
  struct Cyc_Absyn_Exp * val;
};
 union Cyc_Tcpat_PatOrWhere {
  struct _union_PatOrWhere_pattern pattern;
  struct _union_PatOrWhere_where_clause where_clause;
};
 struct Cyc_Tcpat_PathNode {
  union Cyc_Tcpat_PatOrWhere orig_pat;
  void * access;
};
 struct Cyc_Tcpat_Rhs {
  long used;
  unsigned int pat_loc;
  struct Cyc_Absyn_Stmt * rhs;
};
 struct Cyc_Tcpat_Failure_Tcpat_Decision_struct {
  int tag;
  void * f1;
};
 struct Cyc_Tcpat_Success_Tcpat_Decision_struct {
  int tag;
  struct Cyc_Tcpat_Rhs * f1;
};
 struct Cyc_Tcpat_SwitchDec_Tcpat_Decision_struct {
  int tag;
  struct Cyc_List_List * f1;
  struct Cyc_List_List * f2;
  void * f3;
};
void Cyc_Tctyp_check_type(unsigned int,struct Cyc_Tcenv_Tenv *,struct Cyc_List_List *,
			  struct Cyc_Absyn_Kind *,long,long,void *);
long Cyc_Tcutil_is_arithmetic_type(void *);
long Cyc_Tcutil_is_pointer_type(void *);
long Cyc_Tcutil_is_array_type(void *);
long Cyc_Tcutil_is_nullable_pointer_type(void *,long);
struct Cyc_Absyn_Exp * Cyc_Tcutil_deep_copy_exp(long,struct Cyc_Absyn_Exp *);
struct Cyc_Absyn_Kind * Cyc_Tcutil_type_kind(void *);
long Cyc_Tcutil_coerce_assign(struct Cyc_List_List *,struct Cyc_Absyn_Exp *,
			      void *);
void * Cyc_Tcutil_substitute(struct Cyc_List_List *,void *);
void * Cyc_Tcutil_rsubstitute(struct _RegionHandle *,struct Cyc_List_List *,
			      void *);
struct Cyc_List_List * Cyc_Tcutil_rsubst_effconstr(struct _RegionHandle *,
						   struct Cyc_List_List *,
						   struct Cyc_List_List *);
 struct _tuple16 {
  struct Cyc_List_List * f0;
  struct _RegionHandle * f1;
};
 struct _tuple17 {
  struct Cyc_Absyn_Tvar * f0;
  void * f1;
};
struct _tuple17 * Cyc_Tcutil_r_make_inst_var(struct _tuple16 *,struct Cyc_Absyn_Tvar *);
void Cyc_Tcutil_check_unique_vars(struct Cyc_List_List *,unsigned int,struct _fat_ptr);
struct Cyc_List_List * Cyc_Tcutil_resolve_aggregate_designators(struct _RegionHandle *,
								unsigned int,
								struct Cyc_List_List *,
								enum Cyc_Absyn_AggrKind,
								struct Cyc_List_List *);
long Cyc_Tcutil_is_noalias_qual(void *,long);
long Cyc_Tcutil_is_noalias_path(struct Cyc_List_List *,struct Cyc_Absyn_Exp *);
long Cyc_Tcutil_is_noalias_pointer_or_aggr(struct Cyc_List_List *,void *);
struct Cyc_Absyn_Tvar * Cyc_Tcutil_new_tvar(void *);
long Cyc_Tcutil_is_const_exp(struct Cyc_Absyn_Exp *);
void * Cyc_Tcutil_promote_array(void *,void *,void *,long);
long Cyc_Tcutil_force_type2bool(long,void *);
void * Cyc_Tcutil_any_bool(struct Cyc_List_List *);
long Cyc_Unify_unify(void *,void *);
long Cyc_Unify_unify_and_constrain(unsigned int,void *,void *);
void Cyc_Warn_warn(unsigned int,struct _fat_ptr,struct _fat_ptr);
void Cyc_Warn_err(unsigned int,struct _fat_ptr,struct _fat_ptr);
void * Cyc_Warn_impos(struct _fat_ptr,struct _fat_ptr);
 struct Cyc_Warn_String_Warn_Warg_struct {
  int tag;
  struct _fat_ptr f1;
};
 struct Cyc_Warn_Qvar_Warn_Warg_struct {
  int tag;
  struct _tuple2 * f1;
};
 struct Cyc_Warn_Typ_Warn_Warg_struct {
  int tag;
  void * f1;
};
 struct Cyc_Warn_Aggrdecl_Warn_Warg_struct {
  int tag;
  struct Cyc_Absyn_Aggrdecl * f1;
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
void Cyc_Warn_err2(unsigned int,struct _fat_ptr);
void Cyc_Warn_warn2(unsigned int,struct _fat_ptr);
void * Cyc_Warn_impos2(struct _fat_ptr);
static void Cyc_Tcpat_resolve_pat(struct Cyc_Tcenv_Tenv * te,void * * topt,
				  struct Cyc_Absyn_Pat * p) {
  struct Cyc_Absyn_Pat * _T0;
  int * _T1;
  unsigned int _T2;
  struct Cyc_Absyn_Aggr_p_Absyn_Raw_pat_struct * _T3;
  void * _T4;
  long _T5;
  long _T6;
  int _T7;
  int _T8;
  unsigned int _T9;
  unsigned int _TA;
  struct Cyc_Absyn_Aggrfield * _TB;
  struct Cyc_Absyn_Aggrfield * _TC;
  struct Cyc_Absyn_Aggrfield * _TD;
  struct Cyc_Core_Opt * _TE;
  struct Cyc_Core_Opt * _TF;
  struct Cyc_Core_Opt * _T10;
  struct Cyc_Absyn_Aggrfield * _T11;
  struct Cyc_Absyn_Aggrfield * _T12;
  struct Cyc_Absyn_Aggrfield * _T13;
  struct Cyc_List_List * _T14;
  struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct * _T15;
  struct Cyc_Absyn_Pat * _T16;
  struct Cyc_Absyn_Aggr_p_Absyn_Raw_pat_struct * _T17;
  struct Cyc_Warn_String_Warn_Warg_struct _T18;
  struct Cyc_Absyn_Pat * _T19;
  unsigned int _T1A;
  struct _fat_ptr _T1B;
  void * * _T1C;
  void * _T1D;
  void * _T1E;
  int * _T1F;
  unsigned int _T20;
  void * _T21;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T22;
  void * _T23;
  int * _T24;
  int _T25;
  struct Cyc_Absyn_Pat * _T26;
  struct Cyc_Absyn_Aggr_p_Absyn_Raw_pat_struct * _T27;
  struct Cyc_Absyn_Pat * _T28;
  struct Cyc_Absyn_Aggr_p_Absyn_Raw_pat_struct * _T29;
  struct Cyc_Warn_String_Warn_Warg_struct _T2A;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T2B;
  void * * _T2C;
  struct Cyc_Absyn_Pat * _T2D;
  unsigned int _T2E;
  struct _fat_ptr _T2F;
  void * _T30;
  struct Cyc_Absyn_Aggr_p_Absyn_Raw_pat_struct * _T31;
  struct Cyc_List_List * * _T32;
  int * _T33;
  unsigned int _T34;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T35;
  void * _T36;
  int * _T37;
  int _T38;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T39;
  void * _T3A;
  struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct * _T3B;
  union Cyc_Absyn_AggrInfo _T3C;
  struct _union_AggrInfo_KnownAggr _T3D;
  unsigned int _T3E;
  void * _T3F;
  union Cyc_Absyn_AggrInfo _T40;
  struct _union_AggrInfo_KnownAggr _T41;
  struct Cyc_Absyn_Aggrdecl * * _T42;
  struct Cyc_Absyn_Aggrdecl * _T43;
  struct Cyc_Absyn_AggrdeclImpl * _T44;
  struct Cyc_Warn_String_Warn_Warg_struct _T45;
  struct Cyc_Warn_Aggrdecl_Warn_Warg_struct _T46;
  struct Cyc_Absyn_Pat * _T47;
  unsigned int _T48;
  struct _fat_ptr _T49;
  struct Cyc_Absyn_Pat * _T4A;
  struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct * _T4B;
  struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct * _T4C;
  struct Cyc_Absyn_Aggrdecl * _T4D;
  struct Cyc_Absyn_AggrdeclImpl * _T4E;
  struct Cyc_List_List * _T4F;
  int _T50;
  struct Cyc_List_List * * _T51;
  struct Cyc_List_List * _T52;
  int _T53;
  struct Cyc_Warn_String_Warn_Warg_struct _T54;
  struct Cyc_Absyn_Pat * _T55;
  unsigned int _T56;
  struct _fat_ptr _T57;
  struct Cyc_Absyn_Aggrdecl * _T58;
  struct Cyc_Absyn_AggrdeclImpl * _T59;
  struct Cyc_Absyn_AggrdeclImpl * _T5A;
  struct Cyc_List_List * _T5B;
  struct Cyc_List_List * * _T5C;
  struct Cyc_List_List * _T5D;
  struct Cyc_List_List * _T5E;
  struct Cyc_List_List * * _T5F;
  struct Cyc_List_List * _T60;
  struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct * _T61;
  void * _T62;
  struct Cyc_List_List * * _T63;
  struct Cyc_List_List * * _T64;
  struct Cyc_List_List * _T65;
  struct Cyc_List_List * _T66;
  struct Cyc_Warn_String_Warn_Warg_struct _T67;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T68;
  int (* _T69)(struct _fat_ptr);
  void * (* _T6A)(struct _fat_ptr);
  struct _fat_ptr _T6B;
  long _T6C;
  struct Cyc_Warn_String_Warn_Warg_struct _T6D;
  struct Cyc_Absyn_Pat * _T6E;
  unsigned int _T6F;
  struct _fat_ptr _T70;
  struct Cyc_Absyn_Pat * _T71;
  struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct * _T72;
  struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct * _T73;
  long _T74;
  struct Cyc_String_pa_PrintArg_struct _T75;
  struct Cyc_Absyn_Pat * _T76;
  unsigned int _T77;
  struct _fat_ptr _T78;
  struct _fat_ptr _T79;
  struct Cyc_Absyn_Pat * _T7A;
  struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct * _T7B;
  struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct * _T7C;
  struct Cyc_Absyn_Pat * _T7D;
  struct Cyc_Absyn_Int_p_Absyn_Raw_pat_struct * _T7E;
  unsigned int _T7F;
  struct Cyc_Warn_String_Warn_Warg_struct _T80;
  int (* _T81)(struct _fat_ptr);
  void * (* _T82)(struct _fat_ptr);
  struct _fat_ptr _T83;
  struct Cyc_Warn_String_Warn_Warg_struct _T84;
  int (* _T85)(struct _fat_ptr);
  void * (* _T86)(struct _fat_ptr);
  struct _fat_ptr _T87;
  _T0 = p;
  { void * _T88 = _T0->r;
    struct Cyc_Absyn_Exp * _T89;
    struct Cyc_List_List * _T8A;
    long _T8B;
    void * _T8C;
    void * _T8D;
    long _T8E;
    _T1 = (int *)_T88;
    _T2 = *_T1;
    switch (_T2) {
    case 6: 
      _T3 = (struct Cyc_Absyn_Aggr_p_Absyn_Raw_pat_struct *)_T88;
      _T4 = _T3->f1;
      if (_T4 != 0) { goto _TL1;
      }
      { struct Cyc_Absyn_Aggr_p_Absyn_Raw_pat_struct * _T8F = (struct Cyc_Absyn_Aggr_p_Absyn_Raw_pat_struct *)_T88;
	_T8E = _T8F->f2;
	_T8D = _T8F->f3;
	_T8C = _T8F->f4;
	_T8B = _T8F->f5;
      }{ long is_tuple = _T8E;
	struct Cyc_List_List * exist_ts = _T8D;
	struct Cyc_List_List * dps = _T8C;
	long dots = _T8B;
	if (topt != 0) { goto _TL3;
	}
	_T5 = is_tuple;
	if (! _T5) { goto _TL5;
	}
	_T6 = dots;
	if (_T6) { goto _TL5;
	}else { goto _TL7;
	}
	_TL7: { struct Cyc_List_List * fields = 0;
	  _T7 = Cyc_List_length(dps);
	  { unsigned int n = (unsigned int)_T7;
	    { int i = 0;
	      _TLB: _T8 = i;
	      _T9 = (unsigned int)_T8;
	      _TA = n;
	      if (_T9 < _TA) { goto _TL9;
	      }else { goto _TLA;
	      }
	      _TL9: { struct Cyc_Absyn_FieldName_Absyn_Designator_struct * _T8F = Cyc_Absyn_tuple_field_designator(i);
		struct _fat_ptr * _T90;
		{ struct Cyc_Absyn_FieldName_Absyn_Designator_struct * _T91 = (struct Cyc_Absyn_FieldName_Absyn_Designator_struct *)_T8F;
		  _T90 = _T91->f1;
		}{ struct _fat_ptr * n = _T90;
		  struct Cyc_Absyn_Aggrfield * f;
		  f = _cycalloc(sizeof(struct Cyc_Absyn_Aggrfield));
		  _TB = f;
		  _TB->name = n;
		  _TC = f;
		  _TC->tq = Cyc_Absyn_empty_tqual(0U);
		  _TD = f;
		  _TE = &Cyc_Kinds_mko;
		  _TF = (struct Cyc_Core_Opt *)_TE;
		  _T10 = Cyc_Tcenv_lookup_opt_type_vars(te);
		  _TD->type = Cyc_Absyn_new_evar(_TF,_T10);
		  _T11 = f;
		  _T11->width = 0;
		  _T12 = f;
		  _T12->attributes = 0;
		  _T13 = f;
		  _T13->requires_clause = 0;
		  { struct Cyc_List_List * _T91 = _cycalloc(sizeof(struct Cyc_List_List));
		    _T91->hd = f;
		    _T91->tl = fields;
		    _T14 = (struct Cyc_List_List *)_T91;
		  }fields = _T14;
		}
	      }i = i + 1;
	      goto _TLB;
	      _TLA: ;
	    }fields = Cyc_List_imp_rev(fields);
	    { struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct * _T8F = _cycalloc(sizeof(struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct));
	      _T8F->tag = 7;
	      _T8F->f1 = 0U;
	      _T8F->f2 = is_tuple;
	      _T8F->f3 = fields;
	      _T15 = (struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct *)_T8F;
	    }{ void * t = (void *)_T15;
	      _T16 = p;
	      { struct Cyc_Absyn_Aggr_p_Absyn_Raw_pat_struct * _T8F = _cycalloc(sizeof(struct Cyc_Absyn_Aggr_p_Absyn_Raw_pat_struct));
		_T8F->tag = 6;
		_T8F->f1 = t;
		_T8F->f2 = is_tuple;
		_T8F->f3 = exist_ts;
		_T8F->f4 = dps;
		_T8F->f5 = dots;
		_T17 = (struct Cyc_Absyn_Aggr_p_Absyn_Raw_pat_struct *)_T8F;
	      }_T16->r = (void *)_T17;
	    }
	  }
	}goto _TL6;
	_TL5: { struct Cyc_Warn_String_Warn_Warg_struct _T8F;
	  _T8F.tag = 0;
	  _T8F.f1 = _tag_fat("cannot determine pattern type",sizeof(char),
			     30U);
	  _T18 = _T8F;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T8F = _T18;
	  void * _T90[1];
	  _T90[0] = &_T8F;
	  _T19 = p;
	  _T1A = _T19->loc;
	  _T1B = _tag_fat(_T90,sizeof(void *),1);
	  Cyc_Warn_err2(_T1A,_T1B);
	}_TL6: goto _TL4;
	_TL3: _T1C = topt;
	_T1D = *_T1C;
	{ void * type = Cyc_Absyn_compress(_T1D);
	  _T1E = type;
	  _T1F = (int *)_T1E;
	  _T20 = *_T1F;
	  switch (_T20) {
	  case 0: 
	    _T21 = type;
	    _T22 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T21;
	    _T23 = _T22->f1;
	    _T24 = (int *)_T23;
	    _T25 = *_T24;
	    if (_T25 != 24) { goto _TLD;
	    }
	    _T26 = p;
	    { struct Cyc_Absyn_Aggr_p_Absyn_Raw_pat_struct * _T8F = _cycalloc(sizeof(struct Cyc_Absyn_Aggr_p_Absyn_Raw_pat_struct));
	      _T8F->tag = 6;
	      _T8F->f1 = type;
	      _T8F->f2 = is_tuple;
	      _T8F->f3 = exist_ts;
	      _T8F->f4 = dps;
	      _T8F->f5 = dots;
	      _T27 = (struct Cyc_Absyn_Aggr_p_Absyn_Raw_pat_struct *)_T8F;
	    }_T26->r = (void *)_T27;
	    Cyc_Tcpat_resolve_pat(te,topt,p);
	    goto _LL10;
	    _TLD: goto _LL15;
	  case 7: 
	    _T28 = p;
	    { struct Cyc_Absyn_Aggr_p_Absyn_Raw_pat_struct * _T8F = _cycalloc(sizeof(struct Cyc_Absyn_Aggr_p_Absyn_Raw_pat_struct));
	      _T8F->tag = 6;
	      _T8F->f1 = type;
	      _T8F->f2 = is_tuple;
	      _T8F->f3 = exist_ts;
	      _T8F->f4 = dps;
	      _T8F->f5 = dots;
	      _T29 = (struct Cyc_Absyn_Aggr_p_Absyn_Raw_pat_struct *)_T8F;
	    }_T28->r = (void *)_T29;
	    Cyc_Tcpat_resolve_pat(te,topt,p);
	    goto _LL10;
	  default: 
	    _LL15: { struct Cyc_Warn_String_Warn_Warg_struct _T8F;
	      _T8F.tag = 0;
	      _T8F.f1 = _tag_fat("pattern expects aggregate type instead of ",
				 sizeof(char),43U);
	      _T2A = _T8F;
	    }{ struct Cyc_Warn_String_Warn_Warg_struct _T8F = _T2A;
	      { struct Cyc_Warn_Typ_Warn_Warg_struct _T90;
		_T90.tag = 2;
		_T2C = topt;
		_T90.f1 = *_T2C;
		_T2B = _T90;
	      }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T90 = _T2B;
		void * _T91[2];
		_T91[0] = &_T8F;
		_T91[1] = &_T90;
		_T2D = p;
		_T2E = _T2D->loc;
		_T2F = _tag_fat(_T91,sizeof(void *),2);
		Cyc_Warn_err2(_T2E,_T2F);
	      }
	    }goto _LL10;
	  }
	  _LL10: ;
	}_TL4: return;
      }_TL1: { struct Cyc_Absyn_Aggr_p_Absyn_Raw_pat_struct * _T8F = (struct Cyc_Absyn_Aggr_p_Absyn_Raw_pat_struct *)_T88;
	_T30 = _T8F->f1;
	_T8D = (void *)_T30;
	_T8E = _T8F->f2;
	_T31 = (struct Cyc_Absyn_Aggr_p_Absyn_Raw_pat_struct *)_T88;
	_T32 = &_T31->f3;
	_T8C = (struct Cyc_List_List * *)_T32;
	_T8A = _T8F->f4;
	_T8B = _T8F->f5;
      }{ void * topt = _T8D;
	long is_tuple = _T8E;
	struct Cyc_List_List * * exist_ts = (struct Cyc_List_List * *)_T8C;
	struct Cyc_List_List * dps = _T8A;
	long dots = _T8B;
	void * _T8F = Cyc_Absyn_compress(topt);
	struct Cyc_Absyn_Aggrdecl * * _T90;
	_T33 = (int *)_T8F;
	_T34 = *_T33;
	switch (_T34) {
	case 0: 
	  _T35 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T8F;
	  _T36 = _T35->f1;
	  _T37 = (int *)_T36;
	  _T38 = *_T37;
	  if (_T38 != 24) { goto _TL10;
	  }
	  _T39 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T8F;
	  _T3A = _T39->f1;
	  _T3B = (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct *)_T3A;
	  _T3C = _T3B->f1;
	  _T3D = _T3C.KnownAggr;
	  _T3E = _T3D.tag;
	  if (_T3E != 2) { goto _TL12;
	  }
	  { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T91 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T8F;
	    _T3F = _T91->f1;
	    { struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct * _T92 = (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct *)_T3F;
	      _T40 = _T92->f1;
	      _T41 = _T40.KnownAggr;
	      _T90 = _T41.val;
	    }
	  }{ struct Cyc_Absyn_Aggrdecl * * adp = _T90;
	    _T42 = adp;
	    { struct Cyc_Absyn_Aggrdecl * ad = *_T42;
	      _T43 = ad;
	      _T44 = _T43->impl;
	      if (_T44 != 0) { goto _TL14;
	      }
	      { struct Cyc_Warn_String_Warn_Warg_struct _T91;
		_T91.tag = 0;
		_T91.f1 = _tag_fat("can't destructure an abstract",sizeof(char),
				   30U);
		_T45 = _T91;
	      }{ struct Cyc_Warn_String_Warn_Warg_struct _T91 = _T45;
		{ struct Cyc_Warn_Aggrdecl_Warn_Warg_struct _T92;
		  _T92.tag = 6;
		  _T92.f1 = ad;
		  _T46 = _T92;
		}{ struct Cyc_Warn_Aggrdecl_Warn_Warg_struct _T92 = _T46;
		  void * _T93[2];
		  _T93[0] = &_T91;
		  _T93[1] = &_T92;
		  _T47 = p;
		  _T48 = _T47->loc;
		  _T49 = _tag_fat(_T93,sizeof(void *),2);
		  Cyc_Warn_err2(_T48,_T49);
		}
	      }_T4A = p;
	      _T4B = &Cyc_Absyn_Wild_p_val;
	      _T4C = (struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct *)_T4B;
	      _T4A->r = (void *)_T4C;
	      return;
	      _TL14: _T4D = ad;
	      _T4E = _T4D->impl;
	      _T4F = _T4E->exist_vars;
	      _T50 = Cyc_List_length(_T4F);
	      _T51 = exist_ts;
	      _T52 = *_T51;
	      _T53 = Cyc_List_length(_T52);
	      { int more_exists = _T50 - _T53;
		if (more_exists >= 0) { goto _TL16;
		}
		{ struct Cyc_Warn_String_Warn_Warg_struct _T91;
		  _T91.tag = 0;
		  _T91.f1 = _tag_fat("too many existential type variables in pattern",
				     sizeof(char),47U);
		  _T54 = _T91;
		}{ struct Cyc_Warn_String_Warn_Warg_struct _T91 = _T54;
		  void * _T92[1];
		  _T92[0] = &_T91;
		  _T55 = p;
		  _T56 = _T55->loc;
		  _T57 = _tag_fat(_T92,sizeof(void *),1);
		  Cyc_Warn_err2(_T56,_T57);
		}{ struct Cyc_List_List * * ts = exist_ts;
		  _T58 = ad;
		  _T59 = _T58->impl;
		  _T5A = _check_null(_T59);
		  _T5B = _T5A->exist_vars;
		  { int n = Cyc_List_length(_T5B);
		    _TL1B: if (n != 0) { goto _TL19;
		    }else { goto _TL1A;
		    }
		    _TL19: _T5C = ts;
		    _T5D = *_T5C;
		    _T5E = _check_null(_T5D);
		    ts = &_T5E->tl;
		    n = n + -1;
		    goto _TL1B;
		    _TL1A: ;
		  }_T5F = ts;
		  *_T5F = 0;
		}goto _TL17;
		_TL16: if (more_exists <= 0) { goto _TL1C;
		}
		{ struct Cyc_List_List * new_ts = 0;
		  _TL21: if (more_exists != 0) { goto _TL1F;
		  }else { goto _TL20;
		  }
		  _TL1F: { struct Cyc_List_List * _T91 = _cycalloc(sizeof(struct Cyc_List_List));
		    { struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct * _T92 = _cycalloc(sizeof(struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct));
		      _T92->tag = 1;
		      _T92->f1 = 0;
		      _T61 = (struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct *)_T92;
		    }_T62 = (void *)_T61;
		    _T91->hd = Cyc_Tcutil_new_tvar(_T62);
		    _T91->tl = new_ts;
		    _T60 = (struct Cyc_List_List *)_T91;
		  }new_ts = _T60;
		  more_exists = more_exists + -1;
		  goto _TL21;
		  _TL20: _T63 = exist_ts;
		  _T64 = exist_ts;
		  _T65 = *_T64;
		  _T66 = new_ts;
		  *_T63 = Cyc_List_imp_append(_T65,_T66);
		}goto _TL1D;
		_TL1C: _TL1D: _TL17: return;
	      }
	    }
	  }_TL12: goto _LL1C;
	  _TL10: goto _LL1C;
	case 7: 
	  return;
	default: 
	  _LL1C: { struct Cyc_Warn_String_Warn_Warg_struct _T91;
	    _T91.tag = 0;
	    _T91.f1 = _tag_fat("resolve_pat unknown aggrtype ",sizeof(char),
			       30U);
	    _T67 = _T91;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T91 = _T67;
	    { struct Cyc_Warn_Typ_Warn_Warg_struct _T92;
	      _T92.tag = 2;
	      _T92.f1 = topt;
	      _T68 = _T92;
	    }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T92 = _T68;
	      void * _T93[2];
	      _T93[0] = &_T91;
	      _T93[1] = &_T92;
	      _T6A = Cyc_Warn_impos2;
	      { int (* _T94)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T6A;
		_T69 = _T94;
	      }_T6B = _tag_fat(_T93,sizeof(void *),2);
	      _T69(_T6B);
	    }
	  }
	}
	;
      };
    case 16: 
      { struct Cyc_Absyn_Exp_p_Absyn_Raw_pat_struct * _T8F = (struct Cyc_Absyn_Exp_p_Absyn_Raw_pat_struct *)_T88;
	_T89 = _T8F->f1;
      }{ struct Cyc_Absyn_Exp * e = _T89;
	Cyc_Tcexp_tcExp(te,0,e);
	_T6C = Cyc_Tcutil_is_const_exp(e);
	if (_T6C) { goto _TL22;
	}else { goto _TL24;
	}
	_TL24: { struct Cyc_Warn_String_Warn_Warg_struct _T8F;
	  _T8F.tag = 0;
	  _T8F.f1 = _tag_fat("non-constant expression in case pattern",sizeof(char),
			     40U);
	  _T6D = _T8F;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T8F = _T6D;
	  void * _T90[1];
	  _T90[0] = &_T8F;
	  _T6E = p;
	  _T6F = _T6E->loc;
	  _T70 = _tag_fat(_T90,sizeof(void *),1);
	  Cyc_Warn_err2(_T6F,_T70);
	}_T71 = p;
	_T72 = &Cyc_Absyn_Wild_p_val;
	_T73 = (struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct *)_T72;
	_T71->r = (void *)_T73;
	return;
	_TL22: { struct _tuple13 _T8F = Cyc_Evexp_eval_const_uint_exp(e);
	  long _T90;
	  unsigned int _T91;
	  _T91 = _T8F.f0;
	  _T90 = _T8F.f1;
	  { unsigned int i = _T91;
	    long known = _T90;
	    _T74 = known;
	    if (_T74) { goto _TL25;
	    }else { goto _TL27;
	    }
	    _TL27: { struct Cyc_String_pa_PrintArg_struct _T92;
	      _T92.tag = 0;
	      _T92.f1 = Cyc_Absynpp_exp2string(e);
	      _T75 = _T92;
	    }{ struct Cyc_String_pa_PrintArg_struct _T92 = _T75;
	      void * _T93[1];
	      _T93[0] = &_T92;
	      _T76 = p;
	      _T77 = _T76->loc;
	      _T78 = _tag_fat("cannot evaluate expression at compile time\nWe suggest using x && x == %s instead",
			      sizeof(char),81U);
	      _T79 = _tag_fat(_T93,sizeof(void *),1);
	      Cyc_Warn_err(_T77,_T78,_T79);
	    }_T7A = p;
	    _T7B = &Cyc_Absyn_Wild_p_val;
	    _T7C = (struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct *)_T7B;
	    _T7A->r = (void *)_T7C;
	    return;
	    _TL25: _T7D = p;
	    { struct Cyc_Absyn_Int_p_Absyn_Raw_pat_struct * _T92 = _cycalloc(sizeof(struct Cyc_Absyn_Int_p_Absyn_Raw_pat_struct));
	      _T92->tag = 9;
	      _T92->f1 = 2U;
	      _T7F = i;
	      _T92->f2 = (int)_T7F;
	      _T7E = (struct Cyc_Absyn_Int_p_Absyn_Raw_pat_struct *)_T92;
	    }_T7D->r = (void *)_T7E;
	    return;
	  }
	}
      }
    case 14: 
      { struct Cyc_Warn_String_Warn_Warg_struct _T8F;
	_T8F.tag = 0;
	_T8F.f1 = _tag_fat("resolve_pat UnknownId_p",sizeof(char),24U);
	_T80 = _T8F;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T8F = _T80;
	void * _T90[1];
	_T90[0] = &_T8F;
	_T82 = Cyc_Warn_impos2;
	{ int (* _T91)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T82;
	  _T81 = _T91;
	}_T83 = _tag_fat(_T90,sizeof(void *),1);
	_T81(_T83);
      }
    case 15: 
      { struct Cyc_Warn_String_Warn_Warg_struct _T8F;
	_T8F.tag = 0;
	_T8F.f1 = _tag_fat("resolve_pat UnknownCall_p",sizeof(char),26U);
	_T84 = _T8F;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T8F = _T84;
	void * _T90[1];
	_T90[0] = &_T8F;
	_T86 = Cyc_Warn_impos2;
	{ int (* _T91)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T86;
	  _T85 = _T91;
	}_T87 = _tag_fat(_T90,sizeof(void *),1);
	_T85(_T87);
      }
    default: 
      return;
    }
    ;
  }
}
static struct Cyc_Absyn_Pat * Cyc_Tcpat_wild_pat(unsigned int loc) {
  struct Cyc_Absyn_Pat * _T0;
  struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct * _T1;
  struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct * _T2;
  { struct Cyc_Absyn_Pat * _T3 = _cycalloc(sizeof(struct Cyc_Absyn_Pat));
    _T3->loc = loc;
    _T3->topt = 0;
    _T1 = &Cyc_Absyn_Wild_p_val;
    _T2 = (struct Cyc_Absyn_Wild_p_Absyn_Raw_pat_struct *)_T1;
    _T3->r = (void *)_T2;
    _T0 = (struct Cyc_Absyn_Pat *)_T3;
  }return _T0;
}
 struct _tuple18 {
  struct Cyc_List_List * f0;
  struct Cyc_Absyn_Pat * f1;
};
static struct _tuple18 * Cyc_Tcpat_wild_dlp(unsigned int loc) {
  struct _tuple18 * _T0;
  { struct _tuple18 * _T1 = _cycalloc(sizeof(struct _tuple18));
    _T1->f0 = 0;
    _T1->f1 = Cyc_Tcpat_wild_pat(loc);
    _T0 = (struct _tuple18 *)_T1;
  }return _T0;
}
static struct Cyc_List_List * Cyc_Tcpat_remove_dots(struct Cyc_List_List * earlier,
						    int num_pats,int num_fields,
						    void * (* f)(unsigned int),
						    unsigned int loc,struct _fat_ptr msg_str) {
  struct Cyc_Warn_String_Warn_Warg_struct _T0;
  struct Cyc_Warn_String_Warn_Warg_struct _T1;
  struct Cyc_Warn_String_Warn_Warg_struct _T2;
  unsigned int _T3;
  struct _fat_ptr _T4;
  int _T5;
  int _T6;
  struct Cyc_List_List * _T7;
  struct Cyc_List_List * _T8;
  if (num_pats < num_fields) { goto _TL28;
  }
  { struct Cyc_Warn_String_Warn_Warg_struct _T9;
    _T9.tag = 0;
    _T9.f1 = _tag_fat("unnecessary ... in ",sizeof(char),20U);
    _T0 = _T9;
  }{ struct Cyc_Warn_String_Warn_Warg_struct _T9 = _T0;
    { struct Cyc_Warn_String_Warn_Warg_struct _TA;
      _TA.tag = 0;
      _TA.f1 = msg_str;
      _T1 = _TA;
    }{ struct Cyc_Warn_String_Warn_Warg_struct _TA = _T1;
      { struct Cyc_Warn_String_Warn_Warg_struct _TB;
	_TB.tag = 0;
	_TB.f1 = _tag_fat(" pattern",sizeof(char),9U);
	_T2 = _TB;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _TB = _T2;
	void * _TC[3];
	_TC[0] = &_T9;
	_TC[1] = &_TA;
	_TC[2] = &_TB;
	_T3 = loc;
	_T4 = _tag_fat(_TC,sizeof(void *),3);
	Cyc_Warn_warn2(_T3,_T4);
      }
    }
  }goto _TL29;
  _TL28: _TL29: { struct Cyc_List_List * new_ps = 0;
    { int i = 0;
      _TL2D: _T5 = i;
      _T6 = num_fields - num_pats;
      if (_T5 < _T6) { goto _TL2B;
      }else { goto _TL2C;
      }
      _TL2B: { struct Cyc_List_List * _T9 = _cycalloc(sizeof(struct Cyc_List_List));
	_T9->hd = f(loc);
	_T9->tl = new_ps;
	_T7 = (struct Cyc_List_List *)_T9;
      }new_ps = _T7;
      i = i + 1;
      goto _TL2D;
      _TL2C: ;
    }_T8 = Cyc_List_imp_append(earlier,new_ps);
    return _T8;
  }
}
static struct _fat_ptr * Cyc_Tcpat_get_name(struct Cyc_Absyn_Vardecl * vd) {
  struct Cyc_Absyn_Vardecl * _T0;
  struct _tuple2 * _T1;
  struct _tuple2 _T2;
  struct _fat_ptr * _T3;
  _T0 = vd;
  _T1 = _T0->name;
  _T2 = *_T1;
  _T3 = _T2.f1;
  return _T3;
}
static void * Cyc_Tcpat_any_type(struct Cyc_List_List * s,void * * topt) {
  void * _T0;
  struct Cyc_Core_Opt * _T1;
  struct Cyc_Core_Opt * _T2;
  struct Cyc_Core_Opt * _T3;
  void * * _T4;
  if (topt != 0) { goto _TL2E;
  }
  _T1 = &Cyc_Kinds_mko;
  _T2 = (struct Cyc_Core_Opt *)_T1;
  { struct Cyc_Core_Opt * _T5 = _cycalloc(sizeof(struct Cyc_Core_Opt));
    _T5->v = s;
    _T3 = (struct Cyc_Core_Opt *)_T5;
  }_T0 = Cyc_Absyn_new_evar(_T2,_T3);
  goto _TL2F;
  _TL2E: _T4 = topt;
  _T0 = *_T4;
  _TL2F: return _T0;
}
static void * Cyc_Tcpat_num_type(void * * topt,void * numt) {
  void * _T0;
  void * * _T1;
  void * _T2;
  long _T3;
  void * * _T4;
  void * _T5;
  int * _T6;
  int _T7;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T8;
  void * _T9;
  int * _TA;
  unsigned int _TB;
  void * * _TC;
  void * _TD;
  void * _TE;
  if (topt != 0) { goto _TL30;
  }
  _T0 = numt;
  return _T0;
  _TL30: _T1 = topt;
  _T2 = *_T1;
  _T3 = Cyc_Tcutil_is_arithmetic_type(_T2);
  if (! _T3) { goto _TL32;
  }
  _T4 = topt;
  _T5 = *_T4;
  return _T5;
  _TL32: { void * _TF = Cyc_Absyn_compress(numt);
    _T6 = (int *)_TF;
    _T7 = *_T6;
    if (_T7 != 0) { goto _TL34;
    }
    _T8 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TF;
    _T9 = _T8->f1;
    _TA = (int *)_T9;
    _TB = *_TA;
    switch (_TB) {
    case 19: 
      goto _LL4;
    case 20: 
      _LL4: _TC = topt;
      _TD = *_TC;
      return _TD;
    default: 
      goto _LL5;
    }
    goto _TL35;
    _TL34: _LL5: _TE = numt;
    return _TE;
    _TL35: ;
  }
}
 struct _tuple19 {
  struct Cyc_Absyn_Vardecl * * f0;
  struct Cyc_Absyn_Exp * f1;
};
static void Cyc_Tcpat_set_vd(struct Cyc_Absyn_Vardecl * * vd,struct Cyc_Absyn_Exp * e,
			     struct Cyc_List_List * * v_result_ptr,void * t) {
  struct Cyc_Absyn_Vardecl * * _T0;
  struct Cyc_Absyn_Vardecl * _T1;
  struct Cyc_Absyn_Vardecl * * _T2;
  struct Cyc_Absyn_Vardecl * _T3;
  struct Cyc_List_List * * _T4;
  struct Cyc_List_List * _T5;
  struct _tuple19 * _T6;
  struct Cyc_List_List * * _T7;
  if (vd == 0) { goto _TL37;
  }
  _T0 = vd;
  _T1 = *_T0;
  _T1->type = t;
  _T2 = vd;
  _T3 = *_T2;
  _T3->tq = Cyc_Absyn_empty_tqual(0U);
  goto _TL38;
  _TL37: _TL38: _T4 = v_result_ptr;
  { struct Cyc_List_List * _T8 = _cycalloc(sizeof(struct Cyc_List_List));
    { struct _tuple19 * _T9 = _cycalloc(sizeof(struct _tuple19));
      _T9->f0 = vd;
      _T9->f1 = e;
      _T6 = (struct _tuple19 *)_T9;
    }_T8->hd = _T6;
    _T7 = v_result_ptr;
    _T8->tl = *_T7;
    _T5 = (struct Cyc_List_List *)_T8;
  }*_T4 = _T5;
}
static struct Cyc_Tcpat_TcPatResult Cyc_Tcpat_combine_results(struct Cyc_Tcpat_TcPatResult res1,
							      struct Cyc_Tcpat_TcPatResult res2) {
  struct Cyc_Tcpat_TcPatResult _T0;
  struct Cyc_Tcpat_TcPatResult _T1;
  struct Cyc_Tcpat_TcPatResult _T2;
  struct Cyc_Tcpat_TcPatResult _T3;
  struct Cyc_Tcpat_TcPatResult _T4;
  struct Cyc_Tcpat_TcPatResult _T5;
  struct Cyc_Tcpat_TcPatResult _T6;
  struct _tuple1 * _T7;
  struct _tuple1 * _T8;
  struct Cyc_Tcpat_TcPatResult _T9;
  struct _tuple1 * _TA;
  struct _tuple1 * _TB;
  struct _tuple1 _TC;
  struct Cyc_List_List * _TD;
  struct _tuple1 * _TE;
  struct _tuple1 _TF;
  struct Cyc_List_List * _T10;
  struct _tuple1 * _T11;
  struct _tuple1 _T12;
  struct Cyc_List_List * _T13;
  struct _tuple1 * _T14;
  struct _tuple1 _T15;
  struct Cyc_List_List * _T16;
  struct Cyc_List_List * _T17;
  struct Cyc_List_List * _T18;
  struct _tuple1 * _T19;
  _T0 = res1;
  _T19 = _T0.tvars_and_effconstr_opt;
  _T1 = res1;
  _T18 = _T1.patvars;
  _T2 = res1;
  _T17 = _T2.aquals_bounds;
  { struct _tuple1 * p1 = _T19;
    struct Cyc_List_List * vs1 = _T18;
    struct Cyc_List_List * aq1 = _T17;
    struct Cyc_List_List * _T1A;
    struct Cyc_List_List * _T1B;
    struct _tuple1 * _T1C;
    _T3 = res2;
    _T1C = _T3.tvars_and_effconstr_opt;
    _T4 = res2;
    _T1B = _T4.patvars;
    _T5 = res2;
    _T1A = _T5.aquals_bounds;
    { struct _tuple1 * p2 = _T1C;
      struct Cyc_List_List * vs2 = _T1B;
      struct Cyc_List_List * aq2 = _T1A;
      struct Cyc_List_List * aq = Cyc_List_append(aq1,aq2);
      if (p1 != 0) { goto _TL39;
      }
      if (p2 != 0) { goto _TL39;
      }
      { struct Cyc_Tcpat_TcPatResult _T1D;
	_T1D.tvars_and_effconstr_opt = 0;
	_T1D.patvars = Cyc_List_append(vs1,vs2);
	_T1D.aquals_bounds = aq;
	_T6 = _T1D;
      }return _T6;
      _TL39: if (p1 != 0) { goto _TL3B;
      }
      { struct _tuple1 * _T1D = _cycalloc(sizeof(struct _tuple1));
	_T1D->f0 = 0;
	_T1D->f1 = 0;
	_T7 = (struct _tuple1 *)_T1D;
      }p1 = _T7;
      goto _TL3C;
      _TL3B: _TL3C: if (p2 != 0) { goto _TL3D;
      }
      { struct _tuple1 * _T1D = _cycalloc(sizeof(struct _tuple1));
	_T1D->f0 = 0;
	_T1D->f1 = 0;
	_T8 = (struct _tuple1 *)_T1D;
      }p2 = _T8;
      goto _TL3E;
      _TL3D: _TL3E: { struct Cyc_Tcpat_TcPatResult _T1D;
	{ struct _tuple1 * _T1E = _cycalloc(sizeof(struct _tuple1));
	  _TB = p1;
	  _TC = *_TB;
	  _TD = _TC.f0;
	  _TE = p2;
	  _TF = *_TE;
	  _T10 = _TF.f0;
	  _T1E->f0 = Cyc_List_append(_TD,_T10);
	  _T11 = p1;
	  _T12 = *_T11;
	  _T13 = _T12.f1;
	  _T14 = p2;
	  _T15 = *_T14;
	  _T16 = _T15.f1;
	  _T1E->f1 = Cyc_List_append(_T13,_T16);
	  _TA = (struct _tuple1 *)_T1E;
	}_T1D.tvars_and_effconstr_opt = _TA;
	_T1D.patvars = Cyc_List_append(vs1,vs2);
	_T1D.aquals_bounds = aq;
	_T9 = _T1D;
      }return _T9;
    }
  }
}
static void * Cyc_Tcpat_pat_promote_array(struct Cyc_Tcenv_Tenv * te,void * t,
					  void * rgn_opt) {
  void * _T0;
  long _T1;
  void * _T2;
  void * _T3;
  struct Cyc_Core_Opt * _T4;
  struct Cyc_Core_Opt * _T5;
  struct Cyc_Core_Opt * _T6;
  void * _T7;
  _T1 = Cyc_Tcutil_is_array_type(t);
  if (! _T1) { goto _TL3F;
  }
  _T2 = t;
  if (rgn_opt != 0) { goto _TL41;
  }
  _T4 = &Cyc_Kinds_eko;
  _T5 = (struct Cyc_Core_Opt *)_T4;
  { struct Cyc_Core_Opt * _T8 = _cycalloc(sizeof(struct Cyc_Core_Opt));
    _T8->v = Cyc_Tcenv_lookup_type_vars(te);
    _T6 = (struct Cyc_Core_Opt *)_T8;
  }_T3 = Cyc_Absyn_new_evar(_T5,_T6);
  goto _TL42;
  _TL41: _T3 = rgn_opt;
  _TL42: _T7 = Cyc_Absyn_al_qual_type;
  _T0 = Cyc_Tcutil_promote_array(_T2,_T3,_T7,0);
  goto _TL40;
  _TL3F: _T0 = t;
  _TL40: return _T0;
}
 struct _tuple20 {
  struct Cyc_Absyn_Tvar * f0;
  long f1;
};
static struct _tuple20 * Cyc_Tcpat_add_false(struct Cyc_Absyn_Tvar * tv) {
  struct _tuple20 * _T0;
  { struct _tuple20 * _T1 = _cycalloc(sizeof(struct _tuple20));
    _T1->f0 = tv;
    _T1->f1 = 0;
    _T0 = (struct _tuple20 *)_T1;
  }return _T0;
}
 struct _tuple21 {
  struct Cyc_Absyn_Aggrfield * f0;
  struct Cyc_Absyn_Pat * f1;
};
 struct _tuple22 {
  struct Cyc_Absyn_Tqual f0;
  void * f1;
};
static struct Cyc_Tcpat_TcPatResult Cyc_Tcpat_tcPatRec(struct Cyc_Tcenv_Tenv * te,
						       struct Cyc_Absyn_Pat * p,
						       void * * topt,void * rgn_pat,
						       long allow_ref_pat,
						       struct Cyc_Absyn_Exp * access_exp) {
  struct Cyc_Tcpat_TcPatResult _T0;
  struct Cyc_Absyn_Pat * _T1;
  int * _T2;
  unsigned int _T3;
  struct Cyc_List_List * _T4;
  void * * _T5;
  struct Cyc_Absyn_Vardecl * _T6;
  struct _fat_ptr * _T7;
  struct _fat_ptr _T8;
  struct _fat_ptr _T9;
  int _TA;
  struct _fat_ptr _TB;
  struct _fat_ptr _TC;
  int _TD;
  struct Cyc_Warn_String_Warn_Warg_struct _TE;
  struct Cyc_Warn_String_Warn_Warg_struct _TF;
  struct Cyc_Warn_String_Warn_Warg_struct _T10;
  struct Cyc_Absyn_Pat * _T11;
  unsigned int _T12;
  struct _fat_ptr _T13;
  struct Cyc_Absyn_Pat * _T14;
  void * _T15;
  int * _T16;
  int _T17;
  long _T18;
  struct Cyc_Warn_String_Warn_Warg_struct _T19;
  struct Cyc_Absyn_Pat * _T1A;
  unsigned int _T1B;
  struct _fat_ptr _T1C;
  struct Cyc_Absyn_Kind * _T1D;
  struct Cyc_Absyn_Kind * _T1E;
  struct Cyc_Absyn_Kind * _T1F;
  long _T20;
  struct Cyc_Warn_String_Warn_Warg_struct _T21;
  struct Cyc_Absyn_Pat * _T22;
  unsigned int _T23;
  struct _fat_ptr _T24;
  struct Cyc_Absyn_Vardecl * * _T25;
  struct Cyc_Absyn_Exp * _T26;
  struct Cyc_List_List * * _T27;
  void * _T28;
  struct Cyc_Absyn_Pat * _T29;
  unsigned int _T2A;
  struct Cyc_Tcenv_Tenv * _T2B;
  struct Cyc_List_List * _T2C;
  struct _fat_ptr _T2D;
  struct Cyc_Tcpat_TcPatResult _T2E;
  struct _tuple1 * _T2F;
  struct _tuple1 * _T30;
  struct Cyc_Tcpat_TcPatResult _T31;
  struct _tuple1 * _T32;
  struct Cyc_Tcpat_TcPatResult _T33;
  struct _tuple1 * _T34;
  struct _tuple1 _T35;
  struct Cyc_List_List * _T36;
  struct Cyc_List_List * _T37;
  struct _tuple20 * _T38;
  struct Cyc_Absyn_Pat * _T39;
  unsigned int _T3A;
  struct Cyc_Tcenv_Tenv * _T3B;
  struct Cyc_List_List * _T3C;
  struct Cyc_Absyn_Kind * _T3D;
  struct Cyc_Absyn_Kind * _T3E;
  struct Cyc_Absyn_Vardecl * _T3F;
  void * _T40;
  struct Cyc_Absyn_Vardecl * _T41;
  int * _T42;
  int _T43;
  struct Cyc_Absyn_PtrInfo _T44;
  struct Cyc_Absyn_PtrAtts _T45;
  void * _T46;
  void * _T47;
  long _T48;
  struct Cyc_Warn_String_Warn_Warg_struct _T49;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T4A;
  struct Cyc_Warn_String_Warn_Warg_struct _T4B;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T4C;
  struct Cyc_Absyn_Pat * _T4D;
  unsigned int _T4E;
  struct _fat_ptr _T4F;
  struct Cyc_List_List * _T50;
  void * * _T51;
  int * _T52;
  int _T53;
  long _T54;
  struct Cyc_Warn_String_Warn_Warg_struct _T55;
  struct Cyc_Absyn_Pat * _T56;
  unsigned int _T57;
  struct _fat_ptr _T58;
  struct Cyc_Absyn_Kind * _T59;
  struct Cyc_Absyn_Kind * _T5A;
  struct Cyc_Absyn_Kind * _T5B;
  long _T5C;
  struct Cyc_Warn_String_Warn_Warg_struct _T5D;
  struct Cyc_Absyn_Pat * _T5E;
  unsigned int _T5F;
  struct _fat_ptr _T60;
  struct Cyc_Absyn_Vardecl * * _T61;
  struct Cyc_Absyn_Exp * _T62;
  struct Cyc_List_List * * _T63;
  struct Cyc_Absyn_Vardecl * _T64;
  void * _T65;
  struct Cyc_Absyn_Pat * _T66;
  void * _T67;
  long _T68;
  struct Cyc_Warn_String_Warn_Warg_struct _T69;
  struct Cyc_Absyn_Pat * _T6A;
  unsigned int _T6B;
  struct _fat_ptr _T6C;
  struct Cyc_List_List * _T6D;
  void * _T6E;
  long _T6F;
  struct Cyc_Warn_String_Warn_Warg_struct _T70;
  struct Cyc_Absyn_Pat * _T71;
  unsigned int _T72;
  struct _fat_ptr _T73;
  struct Cyc_Absyn_Exp * _T74;
  unsigned int _T75;
  struct Cyc_Absyn_Exp * _T76;
  struct Cyc_Absyn_Vardecl * * _T77;
  struct Cyc_Absyn_Exp * _T78;
  struct Cyc_List_List * * _T79;
  void * _T7A;
  struct Cyc_Absyn_Vardecl * * _T7B;
  struct Cyc_Absyn_Exp * _T7C;
  struct Cyc_List_List * * _T7D;
  struct Cyc_Absyn_Vardecl * _T7E;
  void * _T7F;
  struct Cyc_Absyn_Pat * _T80;
  unsigned int _T81;
  struct Cyc_Tcenv_Tenv * _T82;
  struct Cyc_List_List * _T83;
  struct _fat_ptr _T84;
  struct Cyc_Tcpat_TcPatResult _T85;
  struct _tuple1 * _T86;
  struct _tuple1 * _T87;
  struct Cyc_Tcpat_TcPatResult _T88;
  struct _tuple1 * _T89;
  struct Cyc_List_List * _T8A;
  struct _tuple20 * _T8B;
  struct Cyc_Tcpat_TcPatResult _T8C;
  struct _tuple1 * _T8D;
  struct _tuple1 _T8E;
  struct Cyc_Absyn_Int_p_Absyn_Raw_pat_struct * _T8F;
  enum Cyc_Absyn_Sign _T90;
  void * * _T91;
  int _T92;
  unsigned int _T93;
  void * _T94;
  void * * _T95;
  struct Cyc_Absyn_Enumdecl * _T96;
  struct _tuple2 * _T97;
  struct Cyc_Absyn_Enumdecl * _T98;
  void * _T99;
  void * _T9A;
  void * * _T9B;
  void * _T9C;
  int * _T9D;
  int _T9E;
  void * * _T9F;
  void * * _TA0;
  void * _TA1;
  int * _TA2;
  int _TA3;
  struct Cyc_Absyn_PtrInfo _TA4;
  struct Cyc_Absyn_PtrInfo _TA5;
  struct Cyc_Absyn_Tqual _TA6;
  struct Cyc_Core_Opt * _TA7;
  struct Cyc_Core_Opt * _TA8;
  struct Cyc_Core_Opt * _TA9;
  struct Cyc_Absyn_Exp * _TAA;
  unsigned int _TAB;
  struct Cyc_Tcpat_TcPatResult _TAC;
  struct Cyc_Tcpat_TcPatResult _TAD;
  struct Cyc_Absyn_Pat * _TAE;
  void * _TAF;
  void * _TB0;
  int * _TB1;
  int _TB2;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _TB3;
  void * _TB4;
  int * _TB5;
  int _TB6;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _TB7;
  void * _TB8;
  struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct * _TB9;
  union Cyc_Absyn_DatatypeFieldInfo _TBA;
  struct _union_DatatypeFieldInfo_KnownDatatypefield _TBB;
  unsigned int _TBC;
  void * _TBD;
  union Cyc_Absyn_DatatypeFieldInfo _TBE;
  struct _union_DatatypeFieldInfo_KnownDatatypefield _TBF;
  struct _tuple3 _TC0;
  union Cyc_Absyn_DatatypeFieldInfo _TC1;
  struct _union_DatatypeFieldInfo_KnownDatatypefield _TC2;
  struct _tuple3 _TC3;
  int * _TC4;
  int _TC5;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _TC6;
  void * _TC7;
  int * _TC8;
  int _TC9;
  struct Cyc_Absyn_Datatypedecl * * _TCA;
  union Cyc_Absyn_DatatypeInfo _TCB;
  struct Cyc_List_List * _TCC;
  struct Cyc_Absyn_Pat * _TCD;
  struct Cyc_Absyn_PointerType_Absyn_Type_struct * _TCE;
  long _TCF;
  struct Cyc_List_List * _TD0;
  struct Cyc_List_List * _TD1;
  struct Cyc_Core_Opt * _TD2;
  struct Cyc_Core_Opt * _TD3;
  struct Cyc_Core_Opt * _TD4;
  struct Cyc_Absyn_Pat * _TD5;
  void * _TD6;
  struct Cyc_Absyn_Tqual _TD7;
  long _TD8;
  struct Cyc_Absyn_Exp * _TD9;
  unsigned int _TDA;
  struct Cyc_Absyn_Exp * _TDB;
  struct Cyc_Absyn_Pat * _TDC;
  void * _TDD;
  struct Cyc_Absyn_Aggr_p_Absyn_Raw_pat_struct * _TDE;
  struct Cyc_List_List * * _TDF;
  struct Cyc_List_List * * _TE0;
  struct Cyc_Core_Opt * _TE1;
  int * _TE2;
  unsigned int _TE3;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _TE4;
  void * _TE5;
  int * _TE6;
  int _TE7;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _TE8;
  void * _TE9;
  struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct * _TEA;
  union Cyc_Absyn_AggrInfo _TEB;
  struct _union_AggrInfo_KnownAggr _TEC;
  unsigned int _TED;
  void * _TEE;
  struct _union_AggrInfo_KnownAggr _TEF;
  struct Cyc_Absyn_Aggrdecl * * _TF0;
  struct Cyc_Absyn_Aggrdecl * _TF1;
  struct Cyc_Absyn_AggrdeclImpl * _TF2;
  struct Cyc_Warn_String_Warn_Warg_struct _TF3;
  struct Cyc_Warn_Aggrdecl_Warn_Warg_struct _TF4;
  struct Cyc_Absyn_Pat * _TF5;
  unsigned int _TF6;
  struct _fat_ptr _TF7;
  struct Cyc_Core_Opt * _TF8;
  struct Cyc_Absyn_Aggrdecl * _TF9;
  enum Cyc_Absyn_AggrKind _TFA;
  int _TFB;
  struct Cyc_Absyn_Aggrdecl * _TFC;
  struct Cyc_Absyn_AggrdeclImpl * _TFD;
  long _TFE;
  void * * _TFF;
  void * _T100;
  struct Cyc_Absyn_Kind * _T101;
  struct Cyc_Absyn_Kind * _T102;
  struct Cyc_Absyn_Kind * _T103;
  struct Cyc_Absyn_Aggrdecl * _T104;
  struct Cyc_Absyn_AggrdeclImpl * _T105;
  struct Cyc_List_List * _T106;
  void * _T107;
  struct Cyc_List_List * _T108;
  void * _T109;
  struct Cyc_List_List * _T10A;
  struct Cyc_Absyn_Tvar * _T10B;
  void * _T10C;
  struct Cyc_Absyn_Tvar * _T10D;
  void * _T10E;
  void * _T10F;
  int * _T110;
  unsigned int _T111;
  void * _T112;
  void * _T113;
  struct Cyc_Warn_String_Warn_Warg_struct _T114;
  int (* _T115)(struct _fat_ptr);
  void * (* _T116)(struct _fat_ptr);
  struct _fat_ptr _T117;
  void * _T118;
  int * _T119;
  unsigned int _T11A;
  void * _T11B;
  long _T11C;
  struct Cyc_Warn_String_Warn_Warg_struct _T11D;
  struct Cyc_Warn_Tvar_Warn_Warg_struct _T11E;
  struct Cyc_Warn_String_Warn_Warg_struct _T11F;
  struct Cyc_Warn_KindBound_Warn_Warg_struct _T120;
  struct Cyc_Warn_String_Warn_Warg_struct _T121;
  struct Cyc_Warn_Kind_Warn_Warg_struct _T122;
  struct Cyc_Absyn_Pat * _T123;
  unsigned int _T124;
  struct _fat_ptr _T125;
  void * _T126;
  void * _T127;
  struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct * _T128;
  struct Cyc_Core_Opt * * _T129;
  void * _T12A;
  void * _T12B;
  struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct * _T12C;
  struct Cyc_Core_Opt * * _T12D;
  struct Cyc_Core_Opt * * _T12E;
  struct Cyc_Core_Opt * _T12F;
  struct Cyc_Absyn_VarType_Absyn_Type_struct * _T130;
  struct Cyc_List_List * _T131;
  struct _RegionHandle * _T132;
  struct Cyc_List_List * _T133;
  struct Cyc_Absyn_Pat * _T134;
  unsigned int _T135;
  struct Cyc_Tcenv_Tenv * _T136;
  struct Cyc_List_List * _T137;
  struct _tuple16 _T138;
  struct Cyc_List_List * (* _T139)(struct _RegionHandle *,struct _tuple17 * (*)(struct _tuple16 *,
										struct Cyc_Absyn_Tvar *),
				   struct _tuple16 *,struct Cyc_List_List *);
  struct Cyc_List_List * (* _T13A)(struct _RegionHandle *,void * (*)(void *,
								     void *),
				   void *,struct Cyc_List_List *);
  struct _RegionHandle * _T13B;
  struct _tuple17 * (* _T13C)(struct _tuple16 *,struct Cyc_Absyn_Tvar *);
  struct _tuple16 * _T13D;
  struct Cyc_Absyn_Aggrdecl * _T13E;
  struct Cyc_List_List * _T13F;
  struct _RegionHandle * _T140;
  struct _RegionHandle * _T141;
  struct Cyc_Absyn_Aggrdecl * _T142;
  struct Cyc_Absyn_AggrdeclImpl * _T143;
  struct Cyc_Absyn_AggrdeclImpl * _T144;
  struct Cyc_List_List * _T145;
  struct Cyc_List_List * _T146;
  struct Cyc_List_List * (* _T147)(void * (*)(struct _tuple17 *),struct Cyc_List_List *);
  struct Cyc_List_List * (* _T148)(void * (*)(void *),struct Cyc_List_List *);
  void * (* _T149)(struct _tuple17 *);
  void * (* _T14A)(struct _tuple0 *);
  struct Cyc_List_List * _T14B;
  struct Cyc_List_List * (* _T14C)(void * (*)(struct _tuple17 *),struct Cyc_List_List *);
  struct Cyc_List_List * (* _T14D)(void * (*)(void *),struct Cyc_List_List *);
  void * (* _T14E)(struct _tuple17 *);
  void * (* _T14F)(struct _tuple0 *);
  struct Cyc_List_List * _T150;
  struct Cyc_Absyn_Aggrdecl * _T151;
  struct Cyc_Absyn_AggrdeclImpl * _T152;
  struct Cyc_Absyn_AggrdeclImpl * _T153;
  struct Cyc_List_List * _T154;
  struct Cyc_Tcpat_TcPatResult _T155;
  struct _tuple1 * _T156;
  struct _tuple1 * _T157;
  struct Cyc_Tcpat_TcPatResult _T158;
  struct _tuple1 * _T159;
  struct Cyc_Tcpat_TcPatResult _T15A;
  struct _tuple1 * _T15B;
  struct _tuple1 _T15C;
  struct Cyc_List_List * _T15D;
  struct Cyc_List_List * (* _T15E)(struct _tuple20 * (*)(struct Cyc_Absyn_Tvar *),
				   struct Cyc_List_List *);
  struct Cyc_List_List * (* _T15F)(void * (*)(void *),struct Cyc_List_List *);
  struct Cyc_List_List * _T160;
  struct Cyc_List_List * _T161;
  struct _RegionHandle * _T162;
  struct Cyc_List_List * _T163;
  struct Cyc_Absyn_Aggrdecl * _T164;
  struct Cyc_Absyn_AggrdeclImpl * _T165;
  struct Cyc_List_List * _T166;
  struct Cyc_Tcpat_TcPatResult _T167;
  struct _tuple1 * _T168;
  struct Cyc_Tcpat_TcPatResult _T169;
  struct _tuple1 * _T16A;
  struct _tuple1 _T16B;
  struct Cyc_List_List * _T16C;
  struct Cyc_List_List * _T16D;
  struct Cyc_Absyn_Aggrdecl * _T16E;
  struct Cyc_Absyn_AggrdeclImpl * _T16F;
  struct _tuple0 _T170;
  struct _RegionHandle * _T171;
  struct Cyc_List_List * _T172;
  struct Cyc_List_List * _T173;
  void * _T174;
  struct _tuple0 * _T175;
  struct _tuple0 _T176;
  void * _T177;
  struct _RegionHandle * _T178;
  struct Cyc_List_List * _T179;
  struct Cyc_List_List * _T17A;
  void * _T17B;
  struct _tuple0 * _T17C;
  struct _tuple0 _T17D;
  void * _T17E;
  struct Cyc_List_List * _T17F;
  struct _tuple0 * _T180;
  struct Cyc_List_List * _T181;
  struct Cyc_Absyn_Aggrdecl * * _T182;
  union Cyc_Absyn_AggrInfo _T183;
  struct Cyc_List_List * _T184;
  long _T185;
  struct Cyc_Absyn_Aggrdecl * _T186;
  enum Cyc_Absyn_AggrKind _T187;
  int _T188;
  struct Cyc_Absyn_Pat * _T189;
  unsigned int _T18A;
  struct _fat_ptr _T18B;
  struct _fat_ptr _T18C;
  long _T18D;
  struct Cyc_List_List * * _T18E;
  struct Cyc_List_List * (* _T18F)(struct Cyc_List_List *,int,int,struct _tuple18 * (*)(unsigned int),
				   unsigned int,struct _fat_ptr);
  struct Cyc_List_List * _T190;
  int _T191;
  struct Cyc_Absyn_Aggrdecl * _T192;
  struct Cyc_Absyn_AggrdeclImpl * _T193;
  struct Cyc_List_List * _T194;
  int _T195;
  struct Cyc_Absyn_Pat * _T196;
  unsigned int _T197;
  struct _fat_ptr _T198;
  struct Cyc_List_List * * _T199;
  struct _RegionHandle * _T19A;
  struct Cyc_Absyn_Pat * _T19B;
  unsigned int _T19C;
  struct Cyc_List_List * _T19D;
  struct Cyc_Absyn_Aggrdecl * _T19E;
  enum Cyc_Absyn_AggrKind _T19F;
  struct Cyc_Absyn_Aggrdecl * _T1A0;
  struct Cyc_Absyn_AggrdeclImpl * _T1A1;
  struct Cyc_Absyn_AggrdeclImpl * _T1A2;
  struct Cyc_List_List * _T1A3;
  struct Cyc_List_List * _T1A4;
  void * _T1A5;
  struct _RegionHandle * _T1A6;
  struct Cyc_List_List * _T1A7;
  struct Cyc_Absyn_Aggrfield * _T1A8;
  void * _T1A9;
  struct Cyc_Absyn_Exp * _T1AA;
  unsigned int _T1AB;
  struct Cyc_Absyn_Exp * _T1AC;
  struct Cyc_Absyn_Aggrfield * _T1AD;
  struct _fat_ptr * _T1AE;
  struct Cyc_Tcpat_TcPatResult _T1AF;
  struct Cyc_Tcenv_Tenv * _T1B0;
  struct Cyc_Absyn_Pat * _T1B1;
  void * * _T1B2;
  void * _T1B3;
  long _T1B4;
  struct Cyc_Absyn_Exp * _T1B5;
  struct Cyc_Tcpat_TcPatResult _T1B6;
  struct Cyc_Absyn_Pat * _T1B7;
  unsigned int _T1B8;
  struct Cyc_Absyn_Pat * _T1B9;
  void * _T1BA;
  void * _T1BB;
  void * _T1BC;
  long _T1BD;
  struct Cyc_Warn_String_Warn_Warg_struct _T1BE;
  struct Cyc_Warn_String_Warn_Warg_struct _T1BF;
  struct Cyc_Absyn_Aggrfield * _T1C0;
  struct _fat_ptr * _T1C1;
  struct Cyc_Warn_String_Warn_Warg_struct _T1C2;
  struct Cyc_Warn_Aggrdecl_Warn_Warg_struct _T1C3;
  struct Cyc_Warn_String_Warn_Warg_struct _T1C4;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T1C5;
  struct Cyc_Warn_String_Warn_Warg_struct _T1C6;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T1C7;
  struct Cyc_Absyn_Pat * _T1C8;
  void * _T1C9;
  struct Cyc_Absyn_Pat * _T1CA;
  unsigned int _T1CB;
  struct _fat_ptr _T1CC;
  struct Cyc_Absyn_Exp * _T1CD;
  unsigned int _T1CE;
  struct Cyc_Absyn_Exp * _T1CF;
  struct Cyc_Absyn_Pat * _T1D0;
  struct Cyc_List_List * _T1D1;
  struct Cyc_Warn_String_Warn_Warg_struct _T1D2;
  struct Cyc_Absyn_Pat * _T1D3;
  unsigned int _T1D4;
  struct _fat_ptr _T1D5;
  long _T1D6;
  enum Cyc_Absyn_AggrKind _T1D7;
  int _T1D8;
  struct Cyc_Absyn_Pat * _T1D9;
  unsigned int _T1DA;
  struct _fat_ptr _T1DB;
  struct _fat_ptr _T1DC;
  long _T1DD;
  struct Cyc_List_List * * _T1DE;
  struct Cyc_List_List * (* _T1DF)(struct Cyc_List_List *,int,int,struct _tuple18 * (*)(unsigned int),
				   unsigned int,struct _fat_ptr);
  struct Cyc_List_List * _T1E0;
  int _T1E1;
  int _T1E2;
  struct Cyc_Absyn_Pat * _T1E3;
  unsigned int _T1E4;
  struct _fat_ptr _T1E5;
  long _T1E6;
  struct Cyc_List_List * * _T1E7;
  struct _RegionHandle * _T1E8;
  struct Cyc_Absyn_Pat * _T1E9;
  unsigned int _T1EA;
  struct Cyc_List_List * _T1EB;
  enum Cyc_Absyn_AggrKind _T1EC;
  struct Cyc_List_List * _T1ED;
  struct Cyc_List_List * _T1EE;
  void * _T1EF;
  struct Cyc_Absyn_Aggrfield * _T1F0;
  struct Cyc_Absyn_Exp * _T1F1;
  unsigned int _T1F2;
  struct Cyc_Absyn_Exp * _T1F3;
  struct Cyc_Absyn_Aggrfield * _T1F4;
  struct _fat_ptr * _T1F5;
  struct Cyc_Tcpat_TcPatResult _T1F6;
  struct Cyc_Tcenv_Tenv * _T1F7;
  struct Cyc_Absyn_Pat * _T1F8;
  void * * _T1F9;
  void * _T1FA;
  long _T1FB;
  struct Cyc_Absyn_Exp * _T1FC;
  struct Cyc_Tcpat_TcPatResult _T1FD;
  struct Cyc_Absyn_Pat * _T1FE;
  unsigned int _T1FF;
  struct Cyc_Absyn_Pat * _T200;
  void * _T201;
  void * _T202;
  void * _T203;
  long _T204;
  struct Cyc_Warn_String_Warn_Warg_struct _T205;
  struct Cyc_Warn_String_Warn_Warg_struct _T206;
  struct Cyc_Absyn_Aggrfield * _T207;
  struct _fat_ptr * _T208;
  struct Cyc_Warn_String_Warn_Warg_struct _T209;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T20A;
  struct Cyc_Warn_String_Warn_Warg_struct _T20B;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T20C;
  struct Cyc_Absyn_Pat * _T20D;
  void * _T20E;
  struct Cyc_Absyn_Pat * _T20F;
  unsigned int _T210;
  struct _fat_ptr _T211;
  struct Cyc_Absyn_Exp * _T212;
  unsigned int _T213;
  struct Cyc_Absyn_Exp * _T214;
  struct Cyc_Absyn_Pat * _T215;
  struct Cyc_List_List * _T216;
  struct Cyc_Warn_String_Warn_Warg_struct _T217;
  int (* _T218)(struct _fat_ptr);
  void * (* _T219)(struct _fat_ptr);
  struct _fat_ptr _T21A;
  struct Cyc_Absyn_Datatype_p_Absyn_Raw_pat_struct * _T21B;
  struct Cyc_List_List * * _T21C;
  struct Cyc_List_List * * _T21D;
  struct Cyc_Absyn_Datatypefield * _T21E;
  struct _tuple16 _T21F;
  struct Cyc_List_List * (* _T220)(struct _tuple17 * (*)(struct _tuple16 *,
							 struct Cyc_Absyn_Tvar *),
				   struct _tuple16 *,struct Cyc_List_List *);
  struct Cyc_List_List * (* _T221)(void * (*)(void *,void *),void *,struct Cyc_List_List *);
  struct _tuple17 * (* _T222)(struct _tuple16 *,struct Cyc_Absyn_Tvar *);
  struct _tuple16 * _T223;
  struct Cyc_Absyn_Datatypedecl * _T224;
  struct Cyc_List_List * _T225;
  struct Cyc_List_List * (* _T226)(void * (*)(struct _tuple17 *),struct Cyc_List_List *);
  struct Cyc_List_List * (* _T227)(void * (*)(void *),struct Cyc_List_List *);
  void * (* _T228)(struct _tuple17 *);
  void * (* _T229)(struct _tuple0 *);
  struct Cyc_List_List * _T22A;
  union Cyc_Absyn_DatatypeFieldInfo _T22B;
  struct Cyc_List_List * _T22C;
  long _T22D;
  struct Cyc_List_List * * _T22E;
  struct Cyc_List_List * (* _T22F)(struct Cyc_List_List *,int,int,struct Cyc_Absyn_Pat * (*)(unsigned int),
				   unsigned int,struct _fat_ptr);
  struct Cyc_List_List * _T230;
  int _T231;
  int _T232;
  struct Cyc_Absyn_Pat * _T233;
  unsigned int _T234;
  struct _fat_ptr _T235;
  struct Cyc_List_List * * _T236;
  struct Cyc_List_List * _T237;
  void * _T238;
  struct Cyc_List_List * _T239;
  struct Cyc_List_List * _T23A;
  void * _T23B;
  struct _tuple22 * _T23C;
  struct _tuple22 _T23D;
  void * _T23E;
  struct Cyc_Absyn_Exp * _T23F;
  unsigned int _T240;
  struct Cyc_Absyn_Exp * _T241;
  struct Cyc_List_List * * _T242;
  void * _T243;
  struct Cyc_Tcpat_TcPatResult _T244;
  struct Cyc_Tcenv_Tenv * _T245;
  struct Cyc_Absyn_Pat * _T246;
  void * * _T247;
  void * _T248;
  long _T249;
  struct Cyc_Tcpat_TcPatResult _T24A;
  struct Cyc_Absyn_Pat * _T24B;
  unsigned int _T24C;
  struct Cyc_Absyn_Pat * _T24D;
  void * _T24E;
  void * _T24F;
  long _T250;
  struct Cyc_Warn_Qvar_Warn_Warg_struct _T251;
  struct Cyc_Absyn_Datatypefield * _T252;
  struct Cyc_Warn_String_Warn_Warg_struct _T253;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T254;
  struct Cyc_Warn_String_Warn_Warg_struct _T255;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T256;
  struct Cyc_Absyn_Pat * _T257;
  struct Cyc_Absyn_Pat * _T258;
  unsigned int _T259;
  struct _fat_ptr _T25A;
  struct Cyc_List_List * _T25B;
  struct Cyc_List_List * _T25C;
  struct Cyc_Warn_String_Warn_Warg_struct _T25D;
  struct Cyc_Warn_Qvar_Warn_Warg_struct _T25E;
  struct Cyc_Absyn_Datatypefield * _T25F;
  struct Cyc_Absyn_Pat * _T260;
  unsigned int _T261;
  struct _fat_ptr _T262;
  struct Cyc_Warn_String_Warn_Warg_struct _T263;
  struct Cyc_Warn_Qvar_Warn_Warg_struct _T264;
  struct Cyc_Absyn_Datatypefield * _T265;
  struct Cyc_Absyn_Pat * _T266;
  unsigned int _T267;
  struct _fat_ptr _T268;
  struct Cyc_Core_Opt * _T269;
  struct Cyc_Absyn_Pat * _T26A;
  struct Cyc_Tcpat_TcPatResult _T26B;
  Cyc_Tcpat_resolve_pat(te,topt,p);
  { void * t;
    { struct Cyc_Tcpat_TcPatResult _T26C;
      _T26C.tvars_and_effconstr_opt = 0;
      _T26C.patvars = 0;
      _T26C.aquals_bounds = 0;
      _T0 = _T26C;
    }{ struct Cyc_Tcpat_TcPatResult res = _T0;
      _T1 = p;
      { void * _T26C = _T1->r;
	struct Cyc_Absyn_Datatypefield * _T26D;
	struct Cyc_Absyn_Datatypedecl * _T26E;
	long _T26F;
	struct Cyc_List_List * _T270;
	long _T271;
	void * _T272;
	void * _T273;
	_T2 = (int *)_T26C;
	_T3 = *_T2;
	switch (_T3) {
	case 0: 
	  _T4 = Cyc_Tcenv_lookup_type_vars(te);
	  _T5 = topt;
	  t = Cyc_Tcpat_any_type(_T4,_T5);
	  goto _LL0;
	case 1: 
	  { struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct * _T274 = (struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct *)_T26C;
	    _T273 = _T274->f1;
	    _T272 = _T274->f2;
	  }{ struct Cyc_Absyn_Vardecl * vd = _T273;
	    struct Cyc_Absyn_Pat * p2 = _T272;
	    _T6 = vd;
	    { struct _tuple2 * _T274 = _T6->name;
	      struct _fat_ptr _T275;
	      { struct _tuple2 _T276 = *_T274;
		_T7 = _T276.f1;
		{ struct _fat_ptr _T277 = *_T7;
		  _T275 = _T277;
		}
	      }{ struct _fat_ptr v = _T275;
		_T8 = v;
		_T9 = _tag_fat("true",sizeof(char),5U);
		_TA = Cyc_strcmp(_T8,_T9);
		if (_TA == 0) { goto _TL46;
		}else { goto _TL47;
		}
		_TL47: _TB = v;
		_TC = _tag_fat("false",sizeof(char),6U);
		_TD = Cyc_strcmp(_TB,_TC);
		if (_TD == 0) { goto _TL46;
		}else { goto _TL44;
		}
		_TL46: { struct Cyc_Warn_String_Warn_Warg_struct _T276;
		  _T276.tag = 0;
		  _T276.f1 = _tag_fat("you probably do not want to use ",
				      sizeof(char),33U);
		  _TE = _T276;
		}{ struct Cyc_Warn_String_Warn_Warg_struct _T276 = _TE;
		  { struct Cyc_Warn_String_Warn_Warg_struct _T277;
		    _T277.tag = 0;
		    _T277.f1 = v;
		    _TF = _T277;
		  }{ struct Cyc_Warn_String_Warn_Warg_struct _T277 = _TF;
		    { struct Cyc_Warn_String_Warn_Warg_struct _T278;
		      _T278.tag = 0;
		      _T278.f1 = _tag_fat(" as a local variable",sizeof(char),
					  21U);
		      _T10 = _T278;
		    }{ struct Cyc_Warn_String_Warn_Warg_struct _T278 = _T10;
		      void * _T279[3];
		      _T279[0] = &_T276;
		      _T279[1] = &_T277;
		      _T279[2] = &_T278;
		      _T11 = p;
		      _T12 = _T11->loc;
		      _T13 = _tag_fat(_T279,sizeof(void *),3);
		      Cyc_Warn_warn2(_T12,_T13);
		    }
		  }
		}goto _TL45;
		_TL44: _TL45: res = Cyc_Tcpat_tcPatRec(te,p2,topt,rgn_pat,
						       allow_ref_pat,access_exp);
		_T14 = p2;
		_T15 = _T14->topt;
		t = _check_null(_T15);
		{ void * _T276 = Cyc_Absyn_compress(t);
		  _T16 = (int *)_T276;
		  _T17 = *_T16;
		  if (_T17 != 5) { goto _TL48;
		  }
		  if (rgn_pat == 0) { goto _TL4C;
		  }else { goto _TL4D;
		  }
		  _TL4D: _T18 = allow_ref_pat;
		  if (_T18) { goto _TL4A;
		  }else { goto _TL4C;
		  }
		  _TL4C: { struct Cyc_Warn_String_Warn_Warg_struct _T277;
		    _T277.tag = 0;
		    _T277.f1 = _tag_fat("array reference would point into unknown/unallowed region",
					sizeof(char),58U);
		    _T19 = _T277;
		  }{ struct Cyc_Warn_String_Warn_Warg_struct _T277 = _T19;
		    void * _T278[1];
		    _T278[0] = &_T277;
		    _T1A = p;
		    _T1B = _T1A->loc;
		    _T1C = _tag_fat(_T278,sizeof(void *),1);
		    Cyc_Warn_err2(_T1B,_T1C);
		  }goto _TL4B;
		  _TL4A: _TL4B: goto _LL28;
		  _TL48: _T1D = Cyc_Tcutil_type_kind(t);
		  _T1E = &Cyc_Kinds_mk;
		  _T1F = (struct Cyc_Absyn_Kind *)_T1E;
		  _T20 = Cyc_Kinds_kind_leq(_T1D,_T1F);
		  if (_T20) { goto _TL4E;
		  }else { goto _TL50;
		  }
		  _TL50: { struct Cyc_Warn_String_Warn_Warg_struct _T277;
		    _T277.tag = 0;
		    _T277.f1 = _tag_fat("pattern would point to an abstract member",
					sizeof(char),42U);
		    _T21 = _T277;
		  }{ struct Cyc_Warn_String_Warn_Warg_struct _T277 = _T21;
		    void * _T278[1];
		    _T278[0] = &_T277;
		    _T22 = p;
		    _T23 = _T22->loc;
		    _T24 = _tag_fat(_T278,sizeof(void *),1);
		    Cyc_Warn_err2(_T23,_T24);
		  }goto _TL4F;
		  _TL4E: _TL4F: goto _LL28;
		  _LL28: ;
		}{ struct Cyc_Absyn_Vardecl * * _T276 = _cycalloc(sizeof(struct Cyc_Absyn_Vardecl *));
		  *_T276 = vd;
		  _T25 = (struct Cyc_Absyn_Vardecl * *)_T276;
		}_T26 = access_exp;
		_T27 = &res.patvars;
		_T28 = Cyc_Tcpat_pat_promote_array(te,t,rgn_pat);
		Cyc_Tcpat_set_vd(_T25,_T26,_T27,_T28);
		goto _LL0;
	      }
	    }
	  }
	case 2: 
	  { struct Cyc_Absyn_AliasVar_p_Absyn_Raw_pat_struct * _T274 = (struct Cyc_Absyn_AliasVar_p_Absyn_Raw_pat_struct *)_T26C;
	    _T273 = _T274->f1;
	    _T272 = _T274->f2;
	  }{ struct Cyc_Absyn_Tvar * tv = _T273;
	    struct Cyc_Absyn_Vardecl * vd = _T272;
	    _T29 = p;
	    _T2A = _T29->loc;
	    _T2B = te;
	    { struct Cyc_Absyn_Tvar * _T274[1];
	      _T274[0] = tv;
	      _T2D = _tag_fat(_T274,sizeof(struct Cyc_Absyn_Tvar *),1);
	      _T2C = Cyc_List_list(_T2D);
	    }{ struct Cyc_Tcenv_Tenv * te2 = Cyc_Tcenv_add_type_vars(_T2A,
								     _T2B,
								     _T2C);
	      _T2E = res;
	      _T2F = _T2E.tvars_and_effconstr_opt;
	      if (_T2F != 0) { goto _TL51;
	      }
	      { struct _tuple1 * _T274 = _cycalloc(sizeof(struct _tuple1));
		_T274->f0 = 0;
		_T274->f1 = 0;
		_T30 = (struct _tuple1 *)_T274;
	      }res.tvars_and_effconstr_opt = _T30;
	      goto _TL52;
	      _TL51: _TL52: _T31 = res;
	      _T32 = _T31.tvars_and_effconstr_opt;
	      _T33 = res;
	      _T34 = _T33.tvars_and_effconstr_opt;
	      _T35 = *_T34;
	      _T36 = _T35.f0;
	      { struct Cyc_List_List * _T274 = _cycalloc(sizeof(struct Cyc_List_List));
		{ struct _tuple20 * _T275 = _cycalloc(sizeof(struct _tuple20));
		  _T275->f0 = tv;
		  _T275->f1 = 1;
		  _T38 = (struct _tuple20 *)_T275;
		}_T274->hd = _T38;
		_T274->tl = 0;
		_T37 = (struct Cyc_List_List *)_T274;
	      }(*_T32).f0 = Cyc_List_append(_T36,_T37);
	      _T39 = p;
	      _T3A = _T39->loc;
	      _T3B = te2;
	      _T3C = Cyc_Tcenv_lookup_type_vars(te2);
	      _T3D = &Cyc_Kinds_mk;
	      _T3E = (struct Cyc_Absyn_Kind *)_T3D;
	      _T3F = vd;
	      _T40 = _T3F->type;
	      Cyc_Tctyp_check_type(_T3A,_T3B,_T3C,_T3E,1,0,_T40);
	      _T41 = vd;
	      { void * _T274 = _T41->type;
		void * _T275;
		_T42 = (int *)_T274;
		_T43 = *_T42;
		if (_T43 != 4) { goto _TL53;
		}
		{ struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T276 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T274;
		  _T44 = _T276->f1;
		  _T45 = _T44.ptr_atts;
		  _T275 = _T45.eff;
		}{ void * eff = _T275;
		  void * atv = Cyc_Absyn_var_type(tv);
		  _T46 = eff;
		  _T47 = Cyc_Absyn_var_type(tv);
		  _T48 = Cyc_Unify_unify(_T46,_T47);
		  if (_T48) { goto _TL55;
		  }else { goto _TL57;
		  }
		  _TL57: { struct Cyc_Warn_String_Warn_Warg_struct _T276;
		    _T276.tag = 0;
		    _T276.f1 = _tag_fat("Mismatched effect variables in alias pattern:",
					sizeof(char),46U);
		    _T49 = _T276;
		  }{ struct Cyc_Warn_String_Warn_Warg_struct _T276 = _T49;
		    { struct Cyc_Warn_Typ_Warn_Warg_struct _T277;
		      _T277.tag = 2;
		      _T277.f1 = eff;
		      _T4A = _T277;
		    }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T277 = _T4A;
		      { struct Cyc_Warn_String_Warn_Warg_struct _T278;
			_T278.tag = 0;
			_T278.f1 = _tag_fat(", ",sizeof(char),3U);
			_T4B = _T278;
		      }{ struct Cyc_Warn_String_Warn_Warg_struct _T278 = _T4B;
			{ struct Cyc_Warn_Typ_Warn_Warg_struct _T279;
			  _T279.tag = 2;
			  _T279.f1 = atv;
			  _T4C = _T279;
			}{ struct Cyc_Warn_Typ_Warn_Warg_struct _T279 = _T4C;
			  void * _T27A[4];
			  _T27A[0] = &_T276;
			  _T27A[1] = &_T277;
			  _T27A[2] = &_T278;
			  _T27A[3] = &_T279;
			  _T4D = p;
			  _T4E = _T4D->loc;
			  _T4F = _tag_fat(_T27A,sizeof(void *),4);
			  Cyc_Warn_err2(_T4E,_T4F);
			}
		      }
		    }
		  }goto _TL56;
		  _TL55: _TL56: goto _LL2D;
		}_TL53: goto _LL2D;
		_LL2D: ;
	      }_T50 = Cyc_Tcenv_lookup_type_vars(te);
	      _T51 = topt;
	      t = Cyc_Tcpat_any_type(_T50,_T51);
	      { void * _T274 = Cyc_Absyn_compress(t);
		_T52 = (int *)_T274;
		_T53 = *_T52;
		if (_T53 != 5) { goto _TL58;
		}
		if (rgn_pat == 0) { goto _TL5C;
		}else { goto _TL5D;
		}
		_TL5D: _T54 = allow_ref_pat;
		if (_T54) { goto _TL5A;
		}else { goto _TL5C;
		}
		_TL5C: { struct Cyc_Warn_String_Warn_Warg_struct _T275;
		  _T275.tag = 0;
		  _T275.f1 = _tag_fat("array reference would point into unknown/unallowed region",
				      sizeof(char),58U);
		  _T55 = _T275;
		}{ struct Cyc_Warn_String_Warn_Warg_struct _T275 = _T55;
		  void * _T276[1];
		  _T276[0] = &_T275;
		  _T56 = p;
		  _T57 = _T56->loc;
		  _T58 = _tag_fat(_T276,sizeof(void *),1);
		  Cyc_Warn_err2(_T57,_T58);
		}goto _TL5B;
		_TL5A: _TL5B: goto _LL32;
		_TL58: _T59 = Cyc_Tcutil_type_kind(t);
		_T5A = &Cyc_Kinds_mk;
		_T5B = (struct Cyc_Absyn_Kind *)_T5A;
		_T5C = Cyc_Kinds_kind_leq(_T59,_T5B);
		if (_T5C) { goto _TL5E;
		}else { goto _TL60;
		}
		_TL60: { struct Cyc_Warn_String_Warn_Warg_struct _T275;
		  _T275.tag = 0;
		  _T275.f1 = _tag_fat("pattern would point to an abstract member",
				      sizeof(char),42U);
		  _T5D = _T275;
		}{ struct Cyc_Warn_String_Warn_Warg_struct _T275 = _T5D;
		  void * _T276[1];
		  _T276[0] = &_T275;
		  _T5E = p;
		  _T5F = _T5E->loc;
		  _T60 = _tag_fat(_T276,sizeof(void *),1);
		  Cyc_Warn_err2(_T5F,_T60);
		}goto _TL5F;
		_TL5E: _TL5F: goto _LL32;
		_LL32: ;
	      }{ struct Cyc_Absyn_Vardecl * * _T274 = _cycalloc(sizeof(struct Cyc_Absyn_Vardecl *));
		*_T274 = vd;
		_T61 = (struct Cyc_Absyn_Vardecl * *)_T274;
	      }_T62 = access_exp;
	      _T63 = &res.patvars;
	      _T64 = vd;
	      _T65 = _T64->type;
	      Cyc_Tcpat_set_vd(_T61,_T62,_T63,_T65);
	      goto _LL0;
	    }
	  }
	case 3: 
	  { struct Cyc_Absyn_Reference_p_Absyn_Raw_pat_struct * _T274 = (struct Cyc_Absyn_Reference_p_Absyn_Raw_pat_struct *)_T26C;
	    _T273 = _T274->f1;
	    _T272 = _T274->f2;
	  }{ struct Cyc_Absyn_Vardecl * vd = _T273;
	    struct Cyc_Absyn_Pat * p2 = _T272;
	    res = Cyc_Tcpat_tcPatRec(te,p2,topt,rgn_pat,allow_ref_pat,access_exp);
	    _T66 = p2;
	    _T67 = _T66->topt;
	    t = _check_null(_T67);
	    _T68 = allow_ref_pat;
	    if (_T68) { goto _TL64;
	    }else { goto _TL63;
	    }
	    _TL64: if (rgn_pat == 0) { goto _TL63;
	    }else { goto _TL61;
	    }
	    _TL63: { struct Cyc_Warn_String_Warn_Warg_struct _T274;
	      _T274.tag = 0;
	      _T274.f1 = _tag_fat("* pattern would point into an unknown/unallowed region",
				  sizeof(char),55U);
	      _T69 = _T274;
	    }{ struct Cyc_Warn_String_Warn_Warg_struct _T274 = _T69;
	      void * _T275[1];
	      _T275[0] = &_T274;
	      _T6A = p;
	      _T6B = _T6A->loc;
	      _T6C = _tag_fat(_T275,sizeof(void *),1);
	      Cyc_Warn_err2(_T6B,_T6C);
	    }goto _LL0;
	    _TL61: _T6D = Cyc_Tcenv_curr_aquals_bounds(te);
	    _T6E = t;
	    _T6F = Cyc_Tcutil_is_noalias_pointer_or_aggr(_T6D,_T6E);
	    if (! _T6F) { goto _TL65;
	    }
	    { struct Cyc_Warn_String_Warn_Warg_struct _T274;
	      _T274.tag = 0;
	      _T274.f1 = _tag_fat("* pattern cannot take the address of an alias-free path",
				  sizeof(char),56U);
	      _T70 = _T274;
	    }{ struct Cyc_Warn_String_Warn_Warg_struct _T274 = _T70;
	      void * _T275[1];
	      _T275[0] = &_T274;
	      _T71 = p;
	      _T72 = _T71->loc;
	      _T73 = _tag_fat(_T275,sizeof(void *),1);
	      Cyc_Warn_err2(_T72,_T73);
	    }goto _TL66;
	    _TL65: _TL66: { struct Cyc_Absyn_Exp * new_access_exp = 0;
	      struct Cyc_Absyn_PtrInfo pi = Cyc_Tcexp_fresh_pointer_type(te);
	      pi.elt_type = t;
	      (pi.ptr_atts).eff = rgn_pat;
	      (pi.ptr_atts).nullable = Cyc_Absyn_false_type;
	      { void * t2 = Cyc_Absyn_pointer_type(pi);
		_T74 = access_exp;
		_T75 = (unsigned int)_T74;
		if (! _T75) { goto _TL67;
		}
		new_access_exp = Cyc_Absyn_address_exp(access_exp,0U);
		_T76 = new_access_exp;
		_T76->topt = t2;
		goto _TL68;
		_TL67: _TL68: { struct Cyc_Absyn_Vardecl * * _T274 = _cycalloc(sizeof(struct Cyc_Absyn_Vardecl *));
		  *_T274 = vd;
		  _T77 = (struct Cyc_Absyn_Vardecl * *)_T274;
		}_T78 = new_access_exp;
		_T79 = &res.patvars;
		_T7A = t2;
		Cyc_Tcpat_set_vd(_T77,_T78,_T79,_T7A);
		goto _LL0;
	      }
	    }
	  }
	case 4: 
	  { struct Cyc_Absyn_TagInt_p_Absyn_Raw_pat_struct * _T274 = (struct Cyc_Absyn_TagInt_p_Absyn_Raw_pat_struct *)_T26C;
	    _T273 = _T274->f1;
	    _T272 = _T274->f2;
	  }{ struct Cyc_Absyn_Tvar * tv = _T273;
	    struct Cyc_Absyn_Vardecl * vd = _T272;
	    { struct Cyc_Absyn_Vardecl * * _T274 = _cycalloc(sizeof(struct Cyc_Absyn_Vardecl *));
	      *_T274 = vd;
	      _T7B = (struct Cyc_Absyn_Vardecl * *)_T274;
	    }_T7C = access_exp;
	    _T7D = &res.patvars;
	    _T7E = vd;
	    _T7F = _T7E->type;
	    Cyc_Tcpat_set_vd(_T7B,_T7C,_T7D,_T7F);
	    _T80 = p;
	    _T81 = _T80->loc;
	    _T82 = te;
	    { struct Cyc_Absyn_Tvar * _T274[1];
	      _T274[0] = tv;
	      _T84 = _tag_fat(_T274,sizeof(struct Cyc_Absyn_Tvar *),1);
	      _T83 = Cyc_List_list(_T84);
	    }Cyc_Tcenv_add_type_vars(_T81,_T82,_T83);
	    _T85 = res;
	    _T86 = _T85.tvars_and_effconstr_opt;
	    if (_T86 != 0) { goto _TL69;
	    }
	    { struct _tuple1 * _T274 = _cycalloc(sizeof(struct _tuple1));
	      _T274->f0 = 0;
	      _T274->f1 = 0;
	      _T87 = (struct _tuple1 *)_T274;
	    }res.tvars_and_effconstr_opt = _T87;
	    goto _TL6A;
	    _TL69: _TL6A: _T88 = res;
	    _T89 = _T88.tvars_and_effconstr_opt;
	    { struct Cyc_List_List * _T274 = _cycalloc(sizeof(struct Cyc_List_List));
	      { struct _tuple20 * _T275 = _cycalloc(sizeof(struct _tuple20));
		_T275->f0 = tv;
		_T275->f1 = 0;
		_T8B = (struct _tuple20 *)_T275;
	      }_T274->hd = _T8B;
	      _T8C = res;
	      _T8D = _T8C.tvars_and_effconstr_opt;
	      _T8E = *_T8D;
	      _T274->tl = _T8E.f0;
	      _T8A = (struct Cyc_List_List *)_T274;
	    }(*_T89).f0 = _T8A;
	    t = Cyc_Absyn_uint_type;
	    goto _LL0;
	  }
	case 9: 
	  _T8F = (struct Cyc_Absyn_Int_p_Absyn_Raw_pat_struct *)_T26C;
	  _T90 = _T8F->f1;
	  if (_T90 != Cyc_Absyn_Unsigned) { goto _TL6B;
	  }
	  t = Cyc_Tcpat_num_type(topt,Cyc_Absyn_uint_type);
	  goto _LL0;
	  _TL6B: t = Cyc_Tcpat_num_type(topt,Cyc_Absyn_sint_type);
	  goto _LL0;
	case 10: 
	  t = Cyc_Tcpat_num_type(topt,Cyc_Absyn_char_type);
	  goto _LL0;
	case 11: 
	  { struct Cyc_Absyn_Float_p_Absyn_Raw_pat_struct * _T274 = (struct Cyc_Absyn_Float_p_Absyn_Raw_pat_struct *)_T26C;
	    _T271 = _T274->f2;
	  }{ int i = _T271;
	    _T91 = topt;
	    _T92 = i;
	    _T93 = (unsigned int)_T92;
	    _T94 = Cyc_Absyn_gen_float_type(_T93);
	    t = Cyc_Tcpat_num_type(_T91,_T94);
	    goto _LL0;
	  }
	case 12: 
	  { struct Cyc_Absyn_Enum_p_Absyn_Raw_pat_struct * _T274 = (struct Cyc_Absyn_Enum_p_Absyn_Raw_pat_struct *)_T26C;
	    _T273 = _T274->f1;
	  }{ struct Cyc_Absyn_Enumdecl * ed = _T273;
	    _T95 = topt;
	    _T96 = ed;
	    _T97 = _T96->name;
	    _T98 = ed;
	    _T99 = Cyc_Absyn_enum_type(_T97,_T98);
	    t = Cyc_Tcpat_num_type(_T95,_T99);
	    goto _LL0;
	  }
	case 13: 
	  { struct Cyc_Absyn_AnonEnum_p_Absyn_Raw_pat_struct * _T274 = (struct Cyc_Absyn_AnonEnum_p_Absyn_Raw_pat_struct *)_T26C;
	    _T9A = _T274->f1;
	    _T273 = (void *)_T9A;
	  }{ void * tenum = _T273;
	    t = Cyc_Tcpat_num_type(topt,tenum);
	    goto _LL0;
	  }
	case 8: 
	  if (topt == 0) { goto _TL6D;
	  }
	  _T9B = topt;
	  _T9C = *_T9B;
	  { void * _T274 = Cyc_Absyn_compress(_T9C);
	    _T9D = (int *)_T274;
	    _T9E = *_T9D;
	    if (_T9E != 4) { goto _TL6F;
	    }
	    _T9F = topt;
	    t = *_T9F;
	    goto tcpat_end;
	    _TL6F: goto _LL37;
	    _LL37: ;
	  }goto _TL6E;
	  _TL6D: _TL6E: { struct Cyc_Absyn_PtrInfo pi = Cyc_Tcexp_fresh_pointer_type(te);
	    (pi.ptr_atts).nullable = Cyc_Absyn_true_type;
	    t = Cyc_Absyn_pointer_type(pi);
	    goto _LL0;
	  }
	case 5: 
	  { struct Cyc_Absyn_Pointer_p_Absyn_Raw_pat_struct * _T274 = (struct Cyc_Absyn_Pointer_p_Absyn_Raw_pat_struct *)_T26C;
	    _T273 = _T274->f1;
	  }{ struct Cyc_Absyn_Pat * p2 = _T273;
	    void * inner_typ = Cyc_Absyn_void_type;
	    void * * inner_topt = 0;
	    long elt_const = 0;
	    if (topt == 0) { goto _TL71;
	    }
	    _TA0 = topt;
	    _TA1 = *_TA0;
	    { void * _T274 = Cyc_Absyn_compress(_TA1);
	      struct Cyc_Absyn_Tqual _T275;
	      void * _T276;
	      _TA2 = (int *)_T274;
	      _TA3 = *_TA2;
	      if (_TA3 != 4) { goto _TL73;
	      }
	      { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T277 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T274;
		_TA4 = _T277->f1;
		_T276 = _TA4.elt_type;
		_TA5 = _T277->f1;
		_T275 = _TA5.elt_tq;
	      }{ void * elt_typ = _T276;
		struct Cyc_Absyn_Tqual elt_tq = _T275;
		inner_typ = elt_typ;
		inner_topt = &inner_typ;
		_TA6 = elt_tq;
		elt_const = _TA6.real_const;
		goto _LL3C;
	      }_TL73: goto _LL3C;
	      _LL3C: ;
	    }goto _TL72;
	    _TL71: _TL72: _TA7 = &Cyc_Kinds_eko;
	    _TA8 = (struct Cyc_Core_Opt *)_TA7;
	    _TA9 = Cyc_Tcenv_lookup_opt_type_vars(te);
	    { void * ptr_rgn = Cyc_Absyn_new_evar(_TA8,_TA9);
	      struct Cyc_Absyn_Exp * new_access_exp = 0;
	      _TAA = access_exp;
	      _TAB = (unsigned int)_TAA;
	      if (! _TAB) { goto _TL75;
	      }
	      new_access_exp = Cyc_Absyn_deref_exp(access_exp,0U);
	      goto _TL76;
	      _TL75: _TL76: _TAC = res;
	      _TAD = Cyc_Tcpat_tcPatRec(te,p2,inner_topt,ptr_rgn,1,new_access_exp);
	      res = Cyc_Tcpat_combine_results(_TAC,_TAD);
	      _TAE = p2;
	      _TAF = _TAE->topt;
	      _TB0 = _check_null(_TAF);
	      { void * _T274 = Cyc_Absyn_compress(_TB0);
		struct Cyc_List_List * _T275;
		struct Cyc_Absyn_Datatypefield * _T276;
		struct Cyc_Absyn_Datatypedecl * _T277;
		_TB1 = (int *)_T274;
		_TB2 = *_TB1;
		if (_TB2 != 0) { goto _TL77;
		}
		_TB3 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T274;
		_TB4 = _TB3->f1;
		_TB5 = (int *)_TB4;
		_TB6 = *_TB5;
		if (_TB6 != 23) { goto _TL79;
		}
		_TB7 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T274;
		_TB8 = _TB7->f1;
		_TB9 = (struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct *)_TB8;
		_TBA = _TB9->f1;
		_TBB = _TBA.KnownDatatypefield;
		_TBC = _TBB.tag;
		if (_TBC != 2) { goto _TL7B;
		}
		{ struct Cyc_Absyn_AppType_Absyn_Type_struct * _T278 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T274;
		  _TBD = _T278->f1;
		  { struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct * _T279 = (struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct *)_TBD;
		    _TBE = _T279->f1;
		    _TBF = _TBE.KnownDatatypefield;
		    _TC0 = _TBF.val;
		    _T277 = _TC0.f0;
		    _TC1 = _T279->f1;
		    _TC2 = _TC1.KnownDatatypefield;
		    _TC3 = _TC2.val;
		    _T276 = _TC3.f1;
		  }_T275 = _T278->f2;
		}{ struct Cyc_Absyn_Datatypedecl * tud = _T277;
		  struct Cyc_Absyn_Datatypefield * tuf = _T276;
		  struct Cyc_List_List * targs = _T275;
		  { void * _T278 = Cyc_Absyn_compress(inner_typ);
		    _TC4 = (int *)_T278;
		    _TC5 = *_TC4;
		    if (_TC5 != 0) { goto _TL7D;
		    }
		    _TC6 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T278;
		    _TC7 = _TC6->f1;
		    _TC8 = (int *)_TC7;
		    _TC9 = *_TC8;
		    if (_TC9 != 23) { goto _TL7F;
		    }
		    goto DONT_PROMOTE;
		    _TL7F: goto _LL49;
		    _TL7D: _LL49: goto _LL46;
		    _LL46: ;
		  }{ struct Cyc_Absyn_Datatypedecl * * _T278 = _cycalloc(sizeof(struct Cyc_Absyn_Datatypedecl *));
		    *_T278 = tud;
		    _TCA = (struct Cyc_Absyn_Datatypedecl * *)_T278;
		  }_TCB = Cyc_Absyn_KnownDatatype(_TCA);
		  _TCC = targs;
		  { void * new_type = Cyc_Absyn_datatype_type(_TCB,_TCC);
		    _TCD = p2;
		    _TCD->topt = new_type;
		    { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T278 = _cycalloc(sizeof(struct Cyc_Absyn_PointerType_Absyn_Type_struct));
		      _T278->tag = 4;
		      (_T278->f1).elt_type = new_type;
		      _TCF = elt_const;
		      if (! _TCF) { goto _TL81;
		      }
		      (_T278->f1).elt_tq = Cyc_Absyn_const_tqual(0U);
		      goto _TL82;
		      _TL81: (_T278->f1).elt_tq = Cyc_Absyn_empty_tqual(0U);
		      _TL82: ((_T278->f1).ptr_atts).eff = ptr_rgn;
		      _TD0 = Cyc_Tcenv_lookup_type_vars(te);
		      ((_T278->f1).ptr_atts).nullable = Cyc_Tcutil_any_bool(_TD0);
		      ((_T278->f1).ptr_atts).bounds = Cyc_Absyn_bounds_one();
		      ((_T278->f1).ptr_atts).zero_term = Cyc_Absyn_false_type;
		      ((_T278->f1).ptr_atts).ptrloc = 0;
		      _TD1 = Cyc_Tcenv_lookup_type_vars(te);
		      ((_T278->f1).ptr_atts).autoreleased = Cyc_Tcutil_any_bool(_TD1);
		      _TD2 = &Cyc_Kinds_aqko;
		      _TD3 = (struct Cyc_Core_Opt *)_TD2;
		      _TD4 = Cyc_Tcenv_lookup_opt_type_vars(te);
		      ((_T278->f1).ptr_atts).aqual = Cyc_Absyn_new_evar(_TD3,
									_TD4);
		      _TCE = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T278;
		    }t = (void *)_TCE;
		    goto _LL41;
		  }
		}_TL7B: goto _LL44;
		_TL79: goto _LL44;
		_TL77: _LL44: DONT_PROMOTE: { struct Cyc_Absyn_PtrInfo pi = Cyc_Tcexp_fresh_pointer_type(te);
		  _TD5 = p2;
		  _TD6 = _TD5->topt;
		  pi.elt_type = _check_null(_TD6);
		  _TD8 = elt_const;
		  if (! _TD8) { goto _TL83;
		  }
		  _TD7 = Cyc_Absyn_const_tqual(0U);
		  goto _TL84;
		  _TL83: _TD7 = Cyc_Absyn_empty_tqual(0U);
		  _TL84: pi.elt_tq = _TD7;
		  (pi.ptr_atts).eff = ptr_rgn;
		  t = Cyc_Absyn_pointer_type(pi);
		}_LL41: ;
	      }_TD9 = new_access_exp;
	      _TDA = (unsigned int)_TD9;
	      if (! _TDA) { goto _TL85;
	      }
	      _TDB = new_access_exp;
	      _TDC = p2;
	      _TDB->topt = _TDC->topt;
	      goto _TL86;
	      _TL85: _TL86: goto _LL0;
	    }
	  }
	case 6: 
	  { struct Cyc_Absyn_Aggr_p_Absyn_Raw_pat_struct * _T274 = (struct Cyc_Absyn_Aggr_p_Absyn_Raw_pat_struct *)_T26C;
	    _TDD = _T274->f1;
	    _T273 = (void *)_TDD;
	    _T271 = _T274->f2;
	    _T270 = _T274->f3;
	    _TDE = (struct Cyc_Absyn_Aggr_p_Absyn_Raw_pat_struct *)_T26C;
	    _TDF = &_TDE->f4;
	    _T272 = (struct Cyc_List_List * *)_TDF;
	    _T26F = _T274->f5;
	  }{ void * atype = _T273;
	    long is_tuple = _T271;
	    struct Cyc_List_List * exist_ts = _T270;
	    struct Cyc_List_List * * dps_p = (struct Cyc_List_List * *)_T272;
	    long dots = _T26F;
	    _TE0 = dps_p;
	    { struct Cyc_List_List * dps = *_TE0;
	      if (atype != 0) { goto _TL87;
	      }
	      _TE1 = Cyc_Tcenv_lookup_opt_type_vars(te);
	      t = Cyc_Absyn_wildtyp(_TE1);
	      goto _LL0;
	      _TL87: t = atype;
	      { void * _T274 = Cyc_Absyn_compress(t);
		struct Cyc_List_List * _T275;
		long _T276;
		enum Cyc_Absyn_AggrKind _T277;
		struct Cyc_Absyn_Aggrdecl * _T278;
		union Cyc_Absyn_AggrInfo _T279;
		_TE2 = (int *)_T274;
		_TE3 = *_TE2;
		switch (_TE3) {
		case 0: 
		  _TE4 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T274;
		  _TE5 = _TE4->f1;
		  _TE6 = (int *)_TE5;
		  _TE7 = *_TE6;
		  if (_TE7 != 24) { goto _TL8A;
		  }
		  _TE8 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T274;
		  _TE9 = _TE8->f1;
		  _TEA = (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct *)_TE9;
		  _TEB = _TEA->f1;
		  _TEC = _TEB.KnownAggr;
		  _TED = _TEC.tag;
		  if (_TED != 2) { goto _TL8C;
		  }
		  { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T27A = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T274;
		    _TEE = _T27A->f1;
		    { struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct * _T27B = (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct *)_TEE;
		      _T279 = _T27B->f1;
		      _TEF = _T279.KnownAggr;
		      _TF0 = _TEF.val;
		      { struct Cyc_Absyn_Aggrdecl * _T27C = *_TF0;
			_T278 = _T27C;
		      }
		    }
		  }{ union Cyc_Absyn_AggrInfo ainfo = _T279;
		    struct Cyc_Absyn_Aggrdecl * ad = _T278;
		    _TF1 = ad;
		    _TF2 = _TF1->impl;
		    if (_TF2 != 0) { goto _TL8E;
		    }
		    { struct Cyc_Warn_String_Warn_Warg_struct _T27A;
		      _T27A.tag = 0;
		      _T27A.f1 = _tag_fat("can't destructure abstract ",sizeof(char),
					  28U);
		      _TF3 = _T27A;
		    }{ struct Cyc_Warn_String_Warn_Warg_struct _T27A = _TF3;
		      { struct Cyc_Warn_Aggrdecl_Warn_Warg_struct _T27B;
			_T27B.tag = 6;
			_T27B.f1 = ad;
			_TF4 = _T27B;
		      }{ struct Cyc_Warn_Aggrdecl_Warn_Warg_struct _T27B = _TF4;
			void * _T27C[2];
			_T27C[0] = &_T27A;
			_T27C[1] = &_T27B;
			_TF5 = p;
			_TF6 = _TF5->loc;
			_TF7 = _tag_fat(_T27C,sizeof(void *),2);
			Cyc_Warn_err2(_TF6,_TF7);
		      }
		    }_TF8 = Cyc_Tcenv_lookup_opt_type_vars(te);
		    t = Cyc_Absyn_wildtyp(_TF8);
		    goto _LL4B;
		    _TL8E: _TF9 = ad;
		    _TFA = _TF9->kind;
		    _TFB = (int)_TFA;
		    if (_TFB != 1) { goto _TL90;
		    }
		    _TFC = ad;
		    _TFD = _TFC->impl;
		    _TFE = _TFD->tagged;
		    if (! _TFE) { goto _TL90;
		    }
		    allow_ref_pat = 0;
		    goto _TL91;
		    _TL90: _TL91: if (exist_ts == 0) { goto _TL92;
		    }
		    if (topt == 0) { goto _TL96;
		    }else { goto _TL97;
		    }
		    _TL97: _TFF = topt;
		    _T100 = *_TFF;
		    _T101 = Cyc_Tcutil_type_kind(_T100);
		    _T102 = &Cyc_Kinds_ak;
		    _T103 = (struct Cyc_Absyn_Kind *)_T102;
		    if (_T101 != _T103) { goto _TL96;
		    }else { goto _TL94;
		    }
		    _TL96: allow_ref_pat = 0;
		    goto _TL95;
		    _TL94: _TL95: goto _TL93;
		    _TL92: _TL93: { struct _RegionHandle _T27A = _new_region(0U,
									     "rgn");
		      struct _RegionHandle * rgn = &_T27A;
		      _push_region(rgn);
		      { struct Cyc_List_List * var_tvs = 0;
			_T104 = ad;
			_T105 = _T104->impl;
			{ struct Cyc_List_List * u = _T105->exist_vars;
			  { struct Cyc_List_List * t = exist_ts;
			    _TL9B: if (t != 0) { goto _TL99;
			    }else { goto _TL9A;
			    }
			    _TL99: _T106 = t;
			    _T107 = _T106->hd;
			    { struct Cyc_Absyn_Tvar * tv = (struct Cyc_Absyn_Tvar *)_T107;
			      _T108 = _check_null(u);
			      _T109 = _T108->hd;
			      { struct Cyc_Absyn_Tvar * uv = (struct Cyc_Absyn_Tvar *)_T109;
				_T10A = u;
				u = _T10A->tl;
				_T10B = tv;
				_T10C = _T10B->kind;
				{ void * kb1 = Cyc_Kinds_compress_kb(_T10C);
				  _T10D = uv;
				  _T10E = _T10D->kind;
				  { void * kb2 = Cyc_Kinds_compress_kb(_T10E);
				    struct Cyc_Absyn_Kind * k2;
				    { struct Cyc_Absyn_Kind * _T27B;
				      _T10F = kb2;
				      _T110 = (int *)_T10F;
				      _T111 = *_T110;
				      switch (_T111) {
				      case 2: 
					_T112 = kb2;
					{ struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct * _T27C = (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct *)_T112;
					  _T27B = _T27C->f2;
					}{ struct Cyc_Absyn_Kind * k = _T27B;
					  _T27B = k;
					  goto _LL56;
					}
				      case 0: 
					_T113 = kb2;
					{ struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct * _T27C = (struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct *)_T113;
					  _T27B = _T27C->f1;
					}_LL56: { struct Cyc_Absyn_Kind * k = _T27B;
					  k2 = k;
					  goto _LL52;
					}
				      default: 
					{ struct Cyc_Warn_String_Warn_Warg_struct _T27C;
					  _T27C.tag = 0;
					  _T27C.f1 = _tag_fat("unconstrained existential tyvar in aggregate",
							      sizeof(char),
							      45U);
					  _T114 = _T27C;
					}{ struct Cyc_Warn_String_Warn_Warg_struct _T27C = _T114;
					  void * _T27D[1];
					  _T27D[0] = &_T27C;
					  _T116 = Cyc_Warn_impos2;
					  { int (* _T27E)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T116;
					    _T115 = _T27E;
					  }_T117 = _tag_fat(_T27D,sizeof(void *),
							    1);
					  _T115(_T117);
					}
				      }
				      _LL52: ;
				    }{ struct Cyc_Absyn_Kind * _T27B;
				      void * _T27C;
				      _T118 = kb1;
				      _T119 = (int *)_T118;
				      _T11A = *_T119;
				      switch (_T11A) {
				      case 0: 
					_T11B = kb1;
					{ struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct * _T27D = (struct Cyc_Absyn_Eq_kb_Absyn_KindBound_struct *)_T11B;
					  _T27C = _T27D->f1;
					}{ struct Cyc_Absyn_Kind * k1 = _T27C;
					  _T11C = Cyc_Kinds_kind_leq(k2,k1);
					  if (_T11C) { goto _TL9E;
					  }else { goto _TLA0;
					  }
					  _TLA0: { struct Cyc_Warn_String_Warn_Warg_struct _T27D;
					    _T27D.tag = 0;
					    _T27D.f1 = _tag_fat("type variable ",
								sizeof(char),
								15U);
					    _T11D = _T27D;
					  }{ struct Cyc_Warn_String_Warn_Warg_struct _T27D = _T11D;
					    { struct Cyc_Warn_Tvar_Warn_Warg_struct _T27E;
					      _T27E.tag = 7;
					      _T27E.f1 = tv;
					      _T11E = _T27E;
					    }{ struct Cyc_Warn_Tvar_Warn_Warg_struct _T27E = _T11E;
					      { struct Cyc_Warn_String_Warn_Warg_struct _T27F;
						_T27F.tag = 0;
						_T27F.f1 = _tag_fat(" has kind ",
								    sizeof(char),
								    11U);
						_T11F = _T27F;
					      }{ struct Cyc_Warn_String_Warn_Warg_struct _T27F = _T11F;
						{ struct Cyc_Warn_KindBound_Warn_Warg_struct _T280;
						  _T280.tag = 8;
						  _T280.f1 = kb1;
						  _T120 = _T280;
						}{ struct Cyc_Warn_KindBound_Warn_Warg_struct _T280 = _T120;
						  { struct Cyc_Warn_String_Warn_Warg_struct _T281;
						    _T281.tag = 0;
						    _T281.f1 = _tag_fat(" but must have at least kind ",
									sizeof(char),
									30U);
						    _T121 = _T281;
						  }{ struct Cyc_Warn_String_Warn_Warg_struct _T281 = _T121;
						    { struct Cyc_Warn_Kind_Warn_Warg_struct _T282;
						      _T282.tag = 9;
						      _T282.f1 = k2;
						      _T122 = _T282;
						    }{ struct Cyc_Warn_Kind_Warn_Warg_struct _T282 = _T122;
						      void * _T283[6];
						      _T283[0] = &_T27D;
						      _T283[1] = &_T27E;
						      _T283[2] = &_T27F;
						      _T283[3] = &_T280;
						      _T283[4] = &_T281;
						      _T283[5] = &_T282;
						      _T123 = p;
						      _T124 = _T123->loc;
						      _T125 = _tag_fat(_T283,
								       sizeof(void *),
								       6);
						      Cyc_Warn_err2(_T124,
								    _T125);
						    }
						  }
						}
					      }
					    }
					  }goto _TL9F;
					  _TL9E: _TL9F: goto _LL59;
					}
				      case 2: 
					_T126 = kb1;
					{ struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct * _T27D = (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct *)_T126;
					  _T127 = kb1;
					  _T128 = (struct Cyc_Absyn_Less_kb_Absyn_KindBound_struct *)_T127;
					  _T129 = &_T128->f1;
					  _T27C = (struct Cyc_Core_Opt * *)_T129;
					  _T27B = _T27D->f2;
					}{ struct Cyc_Core_Opt * * f = _T27C;
					  struct Cyc_Absyn_Kind * k = _T27B;
					  _T27C = f;
					  goto _LL5F;
					}
				      default: 
					_T12A = kb1;
					{ struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct * _T27D = (struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct *)_T12A;
					  _T12B = kb1;
					  _T12C = (struct Cyc_Absyn_Unknown_kb_Absyn_KindBound_struct *)_T12B;
					  _T12D = &_T12C->f1;
					  _T27C = (struct Cyc_Core_Opt * *)_T12D;
					}_LL5F: { struct Cyc_Core_Opt * * f = (struct Cyc_Core_Opt * *)_T27C;
					  _T12E = f;
					  { struct Cyc_Core_Opt * _T27D = _cycalloc(sizeof(struct Cyc_Core_Opt));
					    _T27D->v = kb2;
					    _T12F = (struct Cyc_Core_Opt *)_T27D;
					  }*_T12E = _T12F;
					  goto _LL59;
					}
				      }
				      _LL59: ;
				    }{ struct Cyc_Absyn_VarType_Absyn_Type_struct * _T27B = _cycalloc(sizeof(struct Cyc_Absyn_VarType_Absyn_Type_struct));
				      _T27B->tag = 2;
				      _T27B->f1 = tv;
				      _T130 = (struct Cyc_Absyn_VarType_Absyn_Type_struct *)_T27B;
				    }{ void * vartype = (void *)_T130;
				      _T132 = rgn;
				      { struct Cyc_List_List * _T27B = _region_malloc(_T132,
										      0U,
										      sizeof(struct Cyc_List_List));
					_T27B->hd = vartype;
					_T27B->tl = var_tvs;
					_T131 = (struct Cyc_List_List *)_T27B;
				      }var_tvs = _T131;
				    }
				  }
				}
			      }
			    }_T133 = t;
			    t = _T133->tl;
			    goto _TL9B;
			    _TL9A: ;
			  }var_tvs = Cyc_List_imp_rev(var_tvs);
			  _T134 = p;
			  _T135 = _T134->loc;
			  _T136 = te;
			  _T137 = exist_ts;
			  { struct Cyc_Tcenv_Tenv * te2 = Cyc_Tcenv_add_type_vars(_T135,
										  _T136,
										  _T137);
			    { struct _tuple16 _T27B;
			      _T27B.f0 = Cyc_Tcenv_lookup_type_vars(te2);
			      _T27B.f1 = rgn;
			      _T138 = _T27B;
			    }{ struct _tuple16 env = _T138;
			      _T13A = Cyc_List_rmap_c;
			      { struct Cyc_List_List * (* _T27B)(struct _RegionHandle *,
								 struct _tuple17 * (*)(struct _tuple16 *,
										       struct Cyc_Absyn_Tvar *),
								 struct _tuple16 *,
								 struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct _RegionHandle *,
														       struct _tuple17 * (*)(struct _tuple16 *,
																	     struct Cyc_Absyn_Tvar *),
														       struct _tuple16 *,
														       struct Cyc_List_List *))_T13A;
				_T139 = _T27B;
			      }_T13B = rgn;
			      _T13C = Cyc_Tcutil_r_make_inst_var;
			      _T13D = &env;
			      _T13E = ad;
			      _T13F = _T13E->tvs;
			      { struct Cyc_List_List * all_inst = _T139(_T13B,
									_T13C,
									_T13D,
									_T13F);
				_T140 = rgn;
				_T141 = rgn;
				_T142 = ad;
				_T143 = _T142->impl;
				_T144 = _check_null(_T143);
				_T145 = _T144->exist_vars;
				_T146 = var_tvs;
				{ struct Cyc_List_List * exist_inst = Cyc_List_rzip(_T140,
										    _T141,
										    _T145,
										    _T146);
				  _T148 = Cyc_List_map;
				  { struct Cyc_List_List * (* _T27B)(void * (*)(struct _tuple17 *),
								     struct Cyc_List_List *) = (struct Cyc_List_List * (*)(void * (*)(struct _tuple17 *),
															   struct Cyc_List_List *))_T148;
				    _T147 = _T27B;
				  }_T14A = Cyc_Core_snd;
				  { void * (* _T27B)(struct _tuple17 *) = (void * (*)(struct _tuple17 *))_T14A;
				    _T149 = _T27B;
				  }_T14B = all_inst;
				  { struct Cyc_List_List * all_typs = _T147(_T149,
									    _T14B);
				    _T14D = Cyc_List_map;
				    { struct Cyc_List_List * (* _T27B)(void * (*)(struct _tuple17 *),
								       struct Cyc_List_List *) = (struct Cyc_List_List * (*)(void * (*)(struct _tuple17 *),
															     struct Cyc_List_List *))_T14D;
				      _T14C = _T27B;
				    }_T14F = Cyc_Core_snd;
				    { void * (* _T27B)(struct _tuple17 *) = (void * (*)(struct _tuple17 *))_T14F;
				      _T14E = _T27B;
				    }_T150 = exist_inst;
				    { struct Cyc_List_List * exist_typs = _T14C(_T14E,
										_T150);
				      struct Cyc_List_List * inst = Cyc_List_rappend(rgn,
										     all_inst,
										     exist_inst);
				      if (exist_ts != 0) { goto _TLA3;
				      }else { goto _TLA4;
				      }
				      _TLA4: _T151 = ad;
				      _T152 = _T151->impl;
				      _T153 = _check_null(_T152);
				      _T154 = _T153->effconstr;
				      if (_T154 != 0) { goto _TLA3;
				      }else { goto _TLA1;
				      }
				      _TLA3: _T155 = res;
				      _T156 = _T155.tvars_and_effconstr_opt;
				      if (_T156 != 0) { goto _TLA5;
				      }
				      { struct _tuple1 * _T27B = _cycalloc(sizeof(struct _tuple1));
					_T27B->f0 = 0;
					_T27B->f1 = 0;
					_T157 = (struct _tuple1 *)_T27B;
				      }res.tvars_and_effconstr_opt = _T157;
				      goto _TLA6;
				      _TLA5: _TLA6: _T158 = res;
				      _T159 = _T158.tvars_and_effconstr_opt;
				      _T15A = res;
				      _T15B = _T15A.tvars_and_effconstr_opt;
				      _T15C = *_T15B;
				      _T15D = _T15C.f0;
				      _T15F = Cyc_List_map;
				      { struct Cyc_List_List * (* _T27B)(struct _tuple20 * (*)(struct Cyc_Absyn_Tvar *),
									 struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct _tuple20 * (*)(struct Cyc_Absyn_Tvar *),
															       struct Cyc_List_List *))_T15F;
					_T15E = _T27B;
				      }_T160 = exist_ts;
				      _T161 = _T15E(Cyc_Tcpat_add_false,_T160);
				      (*_T159).f0 = Cyc_List_append(_T15D,
								    _T161);
				      _T162 = rgn;
				      _T163 = inst;
				      _T164 = ad;
				      _T165 = _T164->impl;
				      _T166 = _T165->effconstr;
				      { struct Cyc_List_List * ec_inst = Cyc_Tcutil_rsubst_effconstr(_T162,
												     _T163,
												     _T166);
					_T167 = res;
					_T168 = _T167.tvars_and_effconstr_opt;
					_T169 = res;
					_T16A = _T169.tvars_and_effconstr_opt;
					_T16B = *_T16A;
					_T16C = _T16B.f1;
					_T16D = ec_inst;
					(*_T168).f1 = Cyc_List_append(_T16C,
								      _T16D);
					{ struct Cyc_List_List * aqb_inst = 0;
					  _T16E = ad;
					  _T16F = _T16E->impl;
					  { struct Cyc_List_List * aqb = _T16F->qual_bnd;
					    _TLAA: if (aqb != 0) { goto _TLA8;
					    }else { goto _TLA9;
					    }
					    _TLA8: { struct _tuple0 _T27B;
					      _T171 = rgn;
					      _T172 = inst;
					      _T173 = aqb;
					      _T174 = _T173->hd;
					      _T175 = (struct _tuple0 *)_T174;
					      _T176 = *_T175;
					      _T177 = _T176.f0;
					      _T27B.f0 = Cyc_Tcutil_rsubstitute(_T171,
										_T172,
										_T177);
					      _T178 = rgn;
					      _T179 = inst;
					      _T17A = aqb;
					      _T17B = _T17A->hd;
					      _T17C = (struct _tuple0 *)_T17B;
					      _T17D = *_T17C;
					      _T17E = _T17D.f1;
					      _T27B.f1 = Cyc_Tcutil_rsubstitute(_T178,
										_T179,
										_T17E);
					      _T170 = _T27B;
					    }{ struct _tuple0 _T27B = _T170;
					      void * _T27C;
					      void * _T27D;
					      _T27D = _T27B.f0;
					      _T27C = _T27B.f1;
					      { void * tv = _T27D;
						void * b = _T27C;
						{ struct Cyc_List_List * _T27E = _cycalloc(sizeof(struct Cyc_List_List));
						  { struct _tuple0 * _T27F = _cycalloc(sizeof(struct _tuple0));
						    _T27F->f0 = tv;
						    _T27F->f1 = b;
						    _T180 = (struct _tuple0 *)_T27F;
						  }_T27E->hd = _T180;
						  _T27E->tl = aqb_inst;
						  _T17F = (struct Cyc_List_List *)_T27E;
						}aqb_inst = _T17F;
					      }
					    }_T181 = aqb;
					    aqb = _T181->tl;
					    goto _TLAA;
					    _TLA9: ;
					  }aqb_inst = Cyc_List_imp_rev(aqb_inst);
					  res.aquals_bounds = aqb_inst;
					}
				      }goto _TLA2;
				      _TLA1: _TLA2: { struct Cyc_Absyn_Aggrdecl * * _T27B = _cycalloc(sizeof(struct Cyc_Absyn_Aggrdecl *));
					*_T27B = ad;
					_T182 = (struct Cyc_Absyn_Aggrdecl * *)_T27B;
				      }_T183 = Cyc_Absyn_KnownAggr(_T182);
				      _T184 = all_typs;
				      t = Cyc_Absyn_aggr_type(_T183,_T184);
				      _T185 = dots;
				      if (! _T185) { goto _TLAB;
				      }
				      _T186 = ad;
				      _T187 = _T186->kind;
				      _T188 = (int)_T187;
				      if (_T188 != 1) { goto _TLAB;
				      }
				      _T189 = p;
				      _T18A = _T189->loc;
				      _T18B = _tag_fat("`...' pattern not allowed in union pattern",
						       sizeof(char),43U);
				      _T18C = _tag_fat(0U,sizeof(void *),
						       0);
				      Cyc_Warn_warn(_T18A,_T18B,_T18C);
				      goto _TLAC;
				      _TLAB: _T18D = dots;
				      if (! _T18D) { goto _TLAD;
				      }
				      _T18E = dps_p;
				      { struct Cyc_List_List * (* _T27B)(struct Cyc_List_List *,
									 int,
									 int,
									 struct _tuple18 * (*)(unsigned int),
									 unsigned int,
									 struct _fat_ptr) = (struct Cyc_List_List * (*)(struct Cyc_List_List *,
															int,
															int,
															struct _tuple18 * (*)(unsigned int),
															unsigned int,
															struct _fat_ptr))Cyc_Tcpat_remove_dots;
					_T18F = _T27B;
				      }_T190 = dps;
				      _T191 = Cyc_List_length(dps);
				      _T192 = ad;
				      _T193 = _T192->impl;
				      _T194 = _T193->fields;
				      _T195 = Cyc_List_length(_T194);
				      _T196 = p;
				      _T197 = _T196->loc;
				      _T198 = _tag_fat("struct",sizeof(char),
						       7U);
				      *_T18E = _T18F(_T190,_T191,_T195,Cyc_Tcpat_wild_dlp,
						     _T197,_T198);
				      _T199 = dps_p;
				      dps = *_T199;
				      goto _TLAE;
				      _TLAD: _TLAE: _TLAC: _T19A = rgn;
				      _T19B = p;
				      _T19C = _T19B->loc;
				      _T19D = dps;
				      _T19E = ad;
				      _T19F = _T19E->kind;
				      _T1A0 = ad;
				      _T1A1 = _T1A0->impl;
				      _T1A2 = _check_null(_T1A1);
				      _T1A3 = _T1A2->fields;
				      { struct Cyc_List_List * fields = Cyc_Tcutil_resolve_aggregate_designators(_T19A,
														 _T19C,
														 _T19D,
														 _T19F,
														 _T1A3);
					_TLB2: if (fields != 0) { goto _TLB0;
					}else { goto _TLB1;
					}
					_TLB0: _T1A4 = fields;
					_T1A5 = _T1A4->hd;
					{ struct _tuple21 * _T27B = (struct _tuple21 *)_T1A5;
					  struct Cyc_Absyn_Pat * _T27C;
					  struct Cyc_Absyn_Aggrfield * _T27D;
					  { struct _tuple21 _T27E = *_T27B;
					    _T27D = _T27E.f0;
					    _T27C = _T27E.f1;
					  }{ struct Cyc_Absyn_Aggrfield * field = _T27D;
					    struct Cyc_Absyn_Pat * pat = _T27C;
					    _T1A6 = rgn;
					    _T1A7 = inst;
					    _T1A8 = field;
					    _T1A9 = _T1A8->type;
					    { void * inst_fieldtyp = Cyc_Tcutil_rsubstitute(_T1A6,
											    _T1A7,
											    _T1A9);
					      struct Cyc_Absyn_Exp * new_access_exp = 0;
					      _T1AA = access_exp;
					      _T1AB = (unsigned int)_T1AA;
					      if (! _T1AB) { goto _TLB3;
					      }
					      _T1AC = access_exp;
					      _T1AD = field;
					      _T1AE = _T1AD->name;
					      new_access_exp = Cyc_Absyn_aggrmember_exp(_T1AC,
											_T1AE,
											0U);
					      goto _TLB4;
					      _TLB3: _TLB4: _T1AF = res;
					      _T1B0 = te2;
					      _T1B1 = pat;
					      _T1B2 = &inst_fieldtyp;
					      _T1B3 = rgn_pat;
					      _T1B4 = allow_ref_pat;
					      _T1B5 = new_access_exp;
					      _T1B6 = Cyc_Tcpat_tcPatRec(_T1B0,
									 _T1B1,
									 _T1B2,
									 _T1B3,
									 _T1B4,
									 _T1B5);
					      res = Cyc_Tcpat_combine_results(_T1AF,
									      _T1B6);
					      _T1B7 = p;
					      _T1B8 = _T1B7->loc;
					      _T1B9 = pat;
					      _T1BA = _T1B9->topt;
					      _T1BB = _check_null(_T1BA);
					      _T1BC = inst_fieldtyp;
					      _T1BD = Cyc_Unify_unify_and_constrain(_T1B8,
										    _T1BB,
										    _T1BC);
					      if (_T1BD) { goto _TLB5;
					      }else { goto _TLB7;
					      }
					      _TLB7: { struct Cyc_Warn_String_Warn_Warg_struct _T27E;
						_T27E.tag = 0;
						_T27E.f1 = _tag_fat("field ",
								    sizeof(char),
								    7U);
						_T1BE = _T27E;
					      }{ struct Cyc_Warn_String_Warn_Warg_struct _T27E = _T1BE;
						{ struct Cyc_Warn_String_Warn_Warg_struct _T27F;
						  _T27F.tag = 0;
						  _T1C0 = field;
						  _T1C1 = _T1C0->name;
						  _T27F.f1 = *_T1C1;
						  _T1BF = _T27F;
						}{ struct Cyc_Warn_String_Warn_Warg_struct _T27F = _T1BF;
						  { struct Cyc_Warn_String_Warn_Warg_struct _T280;
						    _T280.tag = 0;
						    _T280.f1 = _tag_fat(" of ",
									sizeof(char),
									5U);
						    _T1C2 = _T280;
						  }{ struct Cyc_Warn_String_Warn_Warg_struct _T280 = _T1C2;
						    { struct Cyc_Warn_Aggrdecl_Warn_Warg_struct _T281;
						      _T281.tag = 6;
						      _T281.f1 = ad;
						      _T1C3 = _T281;
						    }{ struct Cyc_Warn_Aggrdecl_Warn_Warg_struct _T281 = _T1C3;
						      { struct Cyc_Warn_String_Warn_Warg_struct _T282;
							_T282.tag = 0;
							_T282.f1 = _tag_fat(" pattern expects type ",
									    sizeof(char),
									    23U);
							_T1C4 = _T282;
						      }{ struct Cyc_Warn_String_Warn_Warg_struct _T282 = _T1C4;
							{ struct Cyc_Warn_Typ_Warn_Warg_struct _T283;
							  _T283.tag = 2;
							  _T283.f1 = inst_fieldtyp;
							  _T1C5 = _T283;
							}{ struct Cyc_Warn_Typ_Warn_Warg_struct _T283 = _T1C5;
							  { struct Cyc_Warn_String_Warn_Warg_struct _T284;
							    _T284.tag = 0;
							    _T284.f1 = _tag_fat(" != ",
										sizeof(char),
										5U);
							    _T1C6 = _T284;
							  }{ struct Cyc_Warn_String_Warn_Warg_struct _T284 = _T1C6;
							    { struct Cyc_Warn_Typ_Warn_Warg_struct _T285;
							      _T285.tag = 2;
							      _T1C8 = pat;
							      _T1C9 = _T1C8->topt;
							      _T285.f1 = _check_null(_T1C9);
							      _T1C7 = _T285;
							    }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T285 = _T1C7;
							      void * _T286[8];
							      _T286[0] = &_T27E;
							      _T286[1] = &_T27F;
							      _T286[2] = &_T280;
							      _T286[3] = &_T281;
							      _T286[4] = &_T282;
							      _T286[5] = &_T283;
							      _T286[6] = &_T284;
							      _T286[7] = &_T285;
							      _T1CA = p;
							      _T1CB = _T1CA->loc;
							      _T1CC = _tag_fat(_T286,
									       sizeof(void *),
									       8);
							      Cyc_Warn_err2(_T1CB,
									    _T1CC);
							    }
							  }
							}
						      }
						    }
						  }
						}
					      }goto _TLB6;
					      _TLB5: _TLB6: _T1CD = new_access_exp;
					      _T1CE = (unsigned int)_T1CD;
					      if (! _T1CE) { goto _TLB8;
					      }
					      _T1CF = new_access_exp;
					      _T1D0 = pat;
					      _T1CF->topt = _T1D0->topt;
					      goto _TLB9;
					      _TLB8: _TLB9: ;
					    }
					  }
					}_T1D1 = fields;
					fields = _T1D1->tl;
					goto _TLB2;
					_TLB1: ;
				      }
				    }
				  }
				}
			      }
			    }
			  }
			}
		      }_pop_region();
		    }goto _LL4B;
		  }_TL8C: goto _LL50;
		  _TL8A: goto _LL50;
		case 7: 
		  { struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct * _T27A = (struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct *)_T274;
		    _T277 = _T27A->f1;
		    _T276 = _T27A->f2;
		    _T275 = _T27A->f3;
		  }{ enum Cyc_Absyn_AggrKind ak = _T277;
		    long is_tuple = _T276;
		    struct Cyc_List_List * afs = _T275;
		    if (exist_ts == 0) { goto _TLBA;
		    }
		    { struct Cyc_Warn_String_Warn_Warg_struct _T27A;
		      _T27A.tag = 0;
		      _T27A.f1 = _tag_fat("bad existentially-bound type variables",
					  sizeof(char),39U);
		      _T1D2 = _T27A;
		    }{ struct Cyc_Warn_String_Warn_Warg_struct _T27A = _T1D2;
		      void * _T27B[1];
		      _T27B[0] = &_T27A;
		      _T1D3 = p;
		      _T1D4 = _T1D3->loc;
		      _T1D5 = _tag_fat(_T27B,sizeof(void *),1);
		      Cyc_Warn_err2(_T1D4,_T1D5);
		    }goto _TLBB;
		    _TLBA: _TLBB: _T1D6 = dots;
		    if (! _T1D6) { goto _TLBC;
		    }
		    _T1D7 = ak;
		    _T1D8 = (int)_T1D7;
		    if (_T1D8 != 1) { goto _TLBC;
		    }
		    _T1D9 = p;
		    _T1DA = _T1D9->loc;
		    _T1DB = _tag_fat("`...' patterns not allowed in union pattern",
				     sizeof(char),44U);
		    _T1DC = _tag_fat(0U,sizeof(void *),0);
		    Cyc_Warn_warn(_T1DA,_T1DB,_T1DC);
		    goto _TLBD;
		    _TLBC: _T1DD = dots;
		    if (! _T1DD) { goto _TLBE;
		    }
		    _T1DE = dps_p;
		    { struct Cyc_List_List * (* _T27A)(struct Cyc_List_List *,
						       int,int,struct _tuple18 * (*)(unsigned int),
						       unsigned int,struct _fat_ptr) = (struct Cyc_List_List * (*)(struct Cyc_List_List *,
														   int,
														   int,
														   struct _tuple18 * (*)(unsigned int),
														   unsigned int,
														   struct _fat_ptr))Cyc_Tcpat_remove_dots;
		      _T1DF = _T27A;
		    }_T1E0 = dps;
		    _T1E1 = Cyc_List_length(dps);
		    _T1E2 = Cyc_List_length(afs);
		    _T1E3 = p;
		    _T1E4 = _T1E3->loc;
		    _T1E6 = is_tuple;
		    if (! _T1E6) { goto _TLC0;
		    }
		    _T1E5 = _tag_fat("tuple",sizeof(char),6U);
		    goto _TLC1;
		    _TLC0: _T1E5 = _tag_fat("struct",sizeof(char),7U);
		    _TLC1: *_T1DE = _T1DF(_T1E0,_T1E1,_T1E2,Cyc_Tcpat_wild_dlp,
					  _T1E4,_T1E5);
		    _T1E7 = dps_p;
		    dps = *_T1E7;
		    goto _TLBF;
		    _TLBE: _TLBF: _TLBD: { struct _RegionHandle _T27A = _new_region(0U,
										    "rgn");
		      struct _RegionHandle * rgn = &_T27A;
		      _push_region(rgn);
		      _T1E8 = rgn;
		      _T1E9 = p;
		      _T1EA = _T1E9->loc;
		      _T1EB = dps;
		      _T1EC = ak;
		      _T1ED = afs;
		      { struct Cyc_List_List * fields = Cyc_Tcutil_resolve_aggregate_designators(_T1E8,
												 _T1EA,
												 _T1EB,
												 _T1EC,
												 _T1ED);
			_TLC5: if (fields != 0) { goto _TLC3;
			}else { goto _TLC4;
			}
			_TLC3: _T1EE = fields;
			_T1EF = _T1EE->hd;
			{ struct _tuple21 * _T27B = (struct _tuple21 *)_T1EF;
			  struct Cyc_Absyn_Pat * _T27C;
			  struct Cyc_Absyn_Aggrfield * _T27D;
			  { struct _tuple21 _T27E = *_T27B;
			    _T27D = _T27E.f0;
			    _T27C = _T27E.f1;
			  }{ struct Cyc_Absyn_Aggrfield * field = _T27D;
			    struct Cyc_Absyn_Pat * pat = _T27C;
			    _T1F0 = field;
			    { void * fieldtyp = _T1F0->type;
			      struct Cyc_Absyn_Exp * new_access_exp = 0;
			      _T1F1 = access_exp;
			      _T1F2 = (unsigned int)_T1F1;
			      if (! _T1F2) { goto _TLC6;
			      }
			      _T1F3 = access_exp;
			      _T1F4 = field;
			      _T1F5 = _T1F4->name;
			      new_access_exp = Cyc_Absyn_aggrmember_exp(_T1F3,
									_T1F5,
									0U);
			      goto _TLC7;
			      _TLC6: _TLC7: _T1F6 = res;
			      _T1F7 = te;
			      _T1F8 = pat;
			      _T1F9 = &fieldtyp;
			      _T1FA = rgn_pat;
			      _T1FB = allow_ref_pat;
			      _T1FC = new_access_exp;
			      _T1FD = Cyc_Tcpat_tcPatRec(_T1F7,_T1F8,_T1F9,
							 _T1FA,_T1FB,_T1FC);
			      res = Cyc_Tcpat_combine_results(_T1F6,_T1FD);
			      _T1FE = p;
			      _T1FF = _T1FE->loc;
			      _T200 = pat;
			      _T201 = _T200->topt;
			      _T202 = _check_null(_T201);
			      _T203 = fieldtyp;
			      _T204 = Cyc_Unify_unify_and_constrain(_T1FF,
								    _T202,
								    _T203);
			      if (_T204) { goto _TLC8;
			      }else { goto _TLCA;
			      }
			      _TLCA: { struct Cyc_Warn_String_Warn_Warg_struct _T27E;
				_T27E.tag = 0;
				_T27E.f1 = _tag_fat("field ",sizeof(char),
						    7U);
				_T205 = _T27E;
			      }{ struct Cyc_Warn_String_Warn_Warg_struct _T27E = _T205;
				{ struct Cyc_Warn_String_Warn_Warg_struct _T27F;
				  _T27F.tag = 0;
				  _T207 = field;
				  _T208 = _T207->name;
				  _T27F.f1 = *_T208;
				  _T206 = _T27F;
				}{ struct Cyc_Warn_String_Warn_Warg_struct _T27F = _T206;
				  { struct Cyc_Warn_String_Warn_Warg_struct _T280;
				    _T280.tag = 0;
				    _T280.f1 = _tag_fat(" pattern expects type ",
							sizeof(char),23U);
				    _T209 = _T280;
				  }{ struct Cyc_Warn_String_Warn_Warg_struct _T280 = _T209;
				    { struct Cyc_Warn_Typ_Warn_Warg_struct _T281;
				      _T281.tag = 2;
				      _T281.f1 = fieldtyp;
				      _T20A = _T281;
				    }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T281 = _T20A;
				      { struct Cyc_Warn_String_Warn_Warg_struct _T282;
					_T282.tag = 0;
					_T282.f1 = _tag_fat(" != ",sizeof(char),
							    5U);
					_T20B = _T282;
				      }{ struct Cyc_Warn_String_Warn_Warg_struct _T282 = _T20B;
					{ struct Cyc_Warn_Typ_Warn_Warg_struct _T283;
					  _T283.tag = 2;
					  _T20D = pat;
					  _T20E = _T20D->topt;
					  _T283.f1 = _check_null(_T20E);
					  _T20C = _T283;
					}{ struct Cyc_Warn_Typ_Warn_Warg_struct _T283 = _T20C;
					  void * _T284[6];
					  _T284[0] = &_T27E;
					  _T284[1] = &_T27F;
					  _T284[2] = &_T280;
					  _T284[3] = &_T281;
					  _T284[4] = &_T282;
					  _T284[5] = &_T283;
					  _T20F = p;
					  _T210 = _T20F->loc;
					  _T211 = _tag_fat(_T284,sizeof(void *),
							   6);
					  Cyc_Warn_err2(_T210,_T211);
					}
				      }
				    }
				  }
				}
			      }goto _TLC9;
			      _TLC8: _TLC9: _T212 = new_access_exp;
			      _T213 = (unsigned int)_T212;
			      if (! _T213) { goto _TLCB;
			      }
			      _T214 = new_access_exp;
			      _T215 = pat;
			      _T214->topt = _T215->topt;
			      goto _TLCC;
			      _TLCB: _TLCC: ;
			    }
			  }
			}_T216 = fields;
			fields = _T216->tl;
			goto _TLC5;
			_TLC4: ;
		      }_pop_region();
		    }goto _LL4B;
		  }
		default: 
		  _LL50: { struct Cyc_Warn_String_Warn_Warg_struct _T27A;
		    _T27A.tag = 0;
		    _T27A.f1 = _tag_fat("bad type in tcpat",sizeof(char),
					18U);
		    _T217 = _T27A;
		  }{ struct Cyc_Warn_String_Warn_Warg_struct _T27A = _T217;
		    void * _T27B[1];
		    _T27B[0] = &_T27A;
		    _T219 = Cyc_Warn_impos2;
		    { int (* _T27C)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T219;
		      _T218 = _T27C;
		    }_T21A = _tag_fat(_T27B,sizeof(void *),1);
		    _T218(_T21A);
		  }
		}
		_LL4B: ;
	      }goto _LL0;
	    }
	  }
	case 7: 
	  { struct Cyc_Absyn_Datatype_p_Absyn_Raw_pat_struct * _T274 = (struct Cyc_Absyn_Datatype_p_Absyn_Raw_pat_struct *)_T26C;
	    _T26E = _T274->f1;
	    _T26D = _T274->f2;
	    _T21B = (struct Cyc_Absyn_Datatype_p_Absyn_Raw_pat_struct *)_T26C;
	    _T21C = &_T21B->f3;
	    _T273 = (struct Cyc_List_List * *)_T21C;
	    _T271 = _T274->f4;
	  }{ struct Cyc_Absyn_Datatypedecl * tud = _T26E;
	    struct Cyc_Absyn_Datatypefield * tuf = _T26D;
	    struct Cyc_List_List * * ps_p = (struct Cyc_List_List * *)_T273;
	    long dots = _T271;
	    _T21D = ps_p;
	    { struct Cyc_List_List * ps = *_T21D;
	      _T21E = tuf;
	      { struct Cyc_List_List * tqts = _T21E->typs;
		{ struct _tuple16 _T274;
		  _T274.f0 = Cyc_Tcenv_lookup_type_vars(te);
		  _T274.f1 = Cyc_Core_heap_region;
		  _T21F = _T274;
		}{ struct _tuple16 env = _T21F;
		  _T221 = Cyc_List_map_c;
		  { struct Cyc_List_List * (* _T274)(struct _tuple17 * (*)(struct _tuple16 *,
									   struct Cyc_Absyn_Tvar *),
						     struct _tuple16 *,struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct _tuple17 * (*)(struct _tuple16 *,
																		   struct Cyc_Absyn_Tvar *),
															     struct _tuple16 *,
															     struct Cyc_List_List *))_T221;
		    _T220 = _T274;
		  }_T222 = Cyc_Tcutil_r_make_inst_var;
		  _T223 = &env;
		  _T224 = tud;
		  _T225 = _T224->tvs;
		  { struct Cyc_List_List * inst = _T220(_T222,_T223,_T225);
		    _T227 = Cyc_List_map;
		    { struct Cyc_List_List * (* _T274)(void * (*)(struct _tuple17 *),
						       struct Cyc_List_List *) = (struct Cyc_List_List * (*)(void * (*)(struct _tuple17 *),
													     struct Cyc_List_List *))_T227;
		      _T226 = _T274;
		    }_T229 = Cyc_Core_snd;
		    { void * (* _T274)(struct _tuple17 *) = (void * (*)(struct _tuple17 *))_T229;
		      _T228 = _T274;
		    }_T22A = inst;
		    { struct Cyc_List_List * all_typs = _T226(_T228,_T22A);
		      _T22B = Cyc_Absyn_KnownDatatypefield(tud,tuf);
		      _T22C = all_typs;
		      t = Cyc_Absyn_datatype_field_type(_T22B,_T22C);
		      _T22D = dots;
		      if (! _T22D) { goto _TLCD;
		      }
		      _T22E = ps_p;
		      { struct Cyc_List_List * (* _T274)(struct Cyc_List_List *,
							 int,int,struct Cyc_Absyn_Pat * (*)(unsigned int),
							 unsigned int,struct _fat_ptr) = (struct Cyc_List_List * (*)(struct Cyc_List_List *,
														     int,
														     int,
														     struct Cyc_Absyn_Pat * (*)(unsigned int),
														     unsigned int,
														     struct _fat_ptr))Cyc_Tcpat_remove_dots;
			_T22F = _T274;
		      }_T230 = ps;
		      _T231 = Cyc_List_length(ps);
		      _T232 = Cyc_List_length(tqts);
		      _T233 = p;
		      _T234 = _T233->loc;
		      _T235 = _tag_fat("datatype field",sizeof(char),15U);
		      *_T22E = _T22F(_T230,_T231,_T232,Cyc_Tcpat_wild_pat,
				     _T234,_T235);
		      _T236 = ps_p;
		      ps = *_T236;
		      goto _TLCE;
		      _TLCD: _TLCE: _TLD2: if (ps != 0) { goto _TLD3;
		      }else { goto _TLD1;
		      }
		      _TLD3: if (tqts != 0) { goto _TLD0;
		      }else { goto _TLD1;
		      }
		      _TLD0: _T237 = ps;
		      _T238 = _T237->hd;
		      { struct Cyc_Absyn_Pat * p2 = (struct Cyc_Absyn_Pat *)_T238;
			_T239 = inst;
			_T23A = tqts;
			_T23B = _T23A->hd;
			_T23C = (struct _tuple22 *)_T23B;
			_T23D = *_T23C;
			_T23E = _T23D.f1;
			{ void * field_typ = Cyc_Tcutil_substitute(_T239,
								   _T23E);
			  _T23F = access_exp;
			  _T240 = (unsigned int)_T23F;
			  if (! _T240) { goto _TLD4;
			  }
			  _T241 = access_exp;
			  _T242 = &res.patvars;
			  _T243 = Cyc_Absyn_char_type;
			  Cyc_Tcpat_set_vd(0,_T241,_T242,_T243);
			  goto _TLD5;
			  _TLD4: _TLD5: _T244 = res;
			  _T245 = te;
			  _T246 = p2;
			  _T247 = &field_typ;
			  _T248 = rgn_pat;
			  _T249 = allow_ref_pat;
			  _T24A = Cyc_Tcpat_tcPatRec(_T245,_T246,_T247,_T248,
						     _T249,0);
			  res = Cyc_Tcpat_combine_results(_T244,_T24A);
			  _T24B = p2;
			  _T24C = _T24B->loc;
			  _T24D = p2;
			  _T24E = _T24D->topt;
			  _T24F = field_typ;
			  _T250 = Cyc_Unify_unify_and_constrain(_T24C,_T24E,
								_T24F);
			  if (_T250) { goto _TLD6;
			  }else { goto _TLD8;
			  }
			  _TLD8: { struct Cyc_Warn_Qvar_Warn_Warg_struct _T274;
			    _T274.tag = 1;
			    _T252 = tuf;
			    _T274.f1 = _T252->name;
			    _T251 = _T274;
			  }{ struct Cyc_Warn_Qvar_Warn_Warg_struct _T274 = _T251;
			    { struct Cyc_Warn_String_Warn_Warg_struct _T275;
			      _T275.tag = 0;
			      _T275.f1 = _tag_fat(" expects argument type ",
						  sizeof(char),24U);
			      _T253 = _T275;
			    }{ struct Cyc_Warn_String_Warn_Warg_struct _T275 = _T253;
			      { struct Cyc_Warn_Typ_Warn_Warg_struct _T276;
				_T276.tag = 2;
				_T276.f1 = field_typ;
				_T254 = _T276;
			      }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T276 = _T254;
				{ struct Cyc_Warn_String_Warn_Warg_struct _T277;
				  _T277.tag = 0;
				  _T277.f1 = _tag_fat(" not ",sizeof(char),
						      6U);
				  _T255 = _T277;
				}{ struct Cyc_Warn_String_Warn_Warg_struct _T277 = _T255;
				  { struct Cyc_Warn_Typ_Warn_Warg_struct _T278;
				    _T278.tag = 2;
				    _T257 = p2;
				    _T278.f1 = _T257->topt;
				    _T256 = _T278;
				  }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T278 = _T256;
				    void * _T279[5];
				    _T279[0] = &_T274;
				    _T279[1] = &_T275;
				    _T279[2] = &_T276;
				    _T279[3] = &_T277;
				    _T279[4] = &_T278;
				    _T258 = p2;
				    _T259 = _T258->loc;
				    _T25A = _tag_fat(_T279,sizeof(void *),
						     5);
				    Cyc_Warn_err2(_T259,_T25A);
				  }
				}
			      }
			    }
			  }goto _TLD7;
			  _TLD6: _TLD7: ;
			}
		      }_T25B = ps;
		      ps = _T25B->tl;
		      _T25C = tqts;
		      tqts = _T25C->tl;
		      goto _TLD2;
		      _TLD1: if (ps == 0) { goto _TLD9;
		      }
		      { struct Cyc_Warn_String_Warn_Warg_struct _T274;
			_T274.tag = 0;
			_T274.f1 = _tag_fat("too many arguments for datatype constructor ",
					    sizeof(char),45U);
			_T25D = _T274;
		      }{ struct Cyc_Warn_String_Warn_Warg_struct _T274 = _T25D;
			{ struct Cyc_Warn_Qvar_Warn_Warg_struct _T275;
			  _T275.tag = 1;
			  _T25F = tuf;
			  _T275.f1 = _T25F->name;
			  _T25E = _T275;
			}{ struct Cyc_Warn_Qvar_Warn_Warg_struct _T275 = _T25E;
			  void * _T276[2];
			  _T276[0] = &_T274;
			  _T276[1] = &_T275;
			  _T260 = p;
			  _T261 = _T260->loc;
			  _T262 = _tag_fat(_T276,sizeof(void *),2);
			  Cyc_Warn_err2(_T261,_T262);
			}
		      }goto _TLDA;
		      _TLD9: _TLDA: if (tqts == 0) { goto _TLDB;
		      }
		      { struct Cyc_Warn_String_Warn_Warg_struct _T274;
			_T274.tag = 0;
			_T274.f1 = _tag_fat("too few arguments for datatype constructor ",
					    sizeof(char),44U);
			_T263 = _T274;
		      }{ struct Cyc_Warn_String_Warn_Warg_struct _T274 = _T263;
			{ struct Cyc_Warn_Qvar_Warn_Warg_struct _T275;
			  _T275.tag = 1;
			  _T265 = tuf;
			  _T275.f1 = _T265->name;
			  _T264 = _T275;
			}{ struct Cyc_Warn_Qvar_Warn_Warg_struct _T275 = _T264;
			  void * _T276[2];
			  _T276[0] = &_T274;
			  _T276[1] = &_T275;
			  _T266 = p;
			  _T267 = _T266->loc;
			  _T268 = _tag_fat(_T276,sizeof(void *),2);
			  Cyc_Warn_err2(_T267,_T268);
			}
		      }goto _TLDC;
		      _TLDB: _TLDC: goto _LL0;
		    }
		  }
		}
	      }
	    }
	  }
	case 14: 
	  goto _LL22;
	case 16: 
	  _LL22: goto _LL24;
	default: 
	  _LL24: _T269 = Cyc_Tcenv_lookup_opt_type_vars(te);
	  t = Cyc_Absyn_wildtyp(_T269);
	  goto _LL0;
	}
	_LL0: ;
      }tcpat_end: _T26A = p;
      _T26A->topt = t;
      _T26B = res;
      return _T26B;
    }
  }
}
struct Cyc_Tcpat_TcPatResult Cyc_Tcpat_tcPat(struct Cyc_Tcenv_Tenv * te,struct Cyc_Absyn_Pat * p,
					     void * * topt,struct Cyc_Absyn_Exp * pat_var_exp) {
  struct Cyc_Tcpat_TcPatResult _T0;
  struct Cyc_List_List * _T1;
  struct Cyc_List_List * _T2;
  void * _T3;
  struct Cyc_Absyn_Vardecl * * _T4;
  struct Cyc_List_List * _T5;
  struct Cyc_List_List * _T6;
  void * _T7;
  struct Cyc_Absyn_Vardecl * * _T8;
  struct Cyc_List_List * _T9;
  struct Cyc_List_List * (* _TA)(struct _fat_ptr * (*)(struct Cyc_Absyn_Vardecl *),
				 struct Cyc_List_List *);
  struct Cyc_List_List * (* _TB)(void * (*)(void *),struct Cyc_List_List *);
  struct Cyc_List_List * _TC;
  struct Cyc_List_List * _TD;
  struct Cyc_Absyn_Pat * _TE;
  unsigned int _TF;
  struct _fat_ptr _T10;
  struct Cyc_Tcpat_TcPatResult _T11;
  struct Cyc_List_List * _T12;
  void * _T13;
  struct Cyc_Absyn_Exp * * _T14;
  struct Cyc_Absyn_Exp * * _T15;
  struct Cyc_Absyn_Exp * _T16;
  struct Cyc_Absyn_Exp * * _T17;
  struct Cyc_Absyn_Exp * _T18;
  struct Cyc_Absyn_Exp * _T19;
  struct Cyc_Absyn_Exp * * _T1A;
  struct Cyc_Absyn_Exp * * _T1B;
  struct Cyc_Absyn_Exp * _T1C;
  struct Cyc_List_List * _T1D;
  struct Cyc_Tcpat_TcPatResult _T1E;
  struct Cyc_Tcpat_TcPatResult ans = Cyc_Tcpat_tcPatRec(te,p,topt,0,0,pat_var_exp);
  _T0 = ans;
  _T1 = _T0.patvars;
  { struct _tuple1 _T1F = Cyc_List_split(_T1);
    struct Cyc_List_List * _T20;
    _T20 = _T1F.f0;
    { struct Cyc_List_List * vs1 = _T20;
      struct Cyc_List_List * vs = 0;
      { struct Cyc_List_List * x = vs1;
	_TLE0: if (x != 0) { goto _TLDE;
	}else { goto _TLDF;
	}
	_TLDE: _T2 = x;
	_T3 = _T2->hd;
	_T4 = (struct Cyc_Absyn_Vardecl * *)_T3;
	if (_T4 == 0) { goto _TLE1;
	}
	{ struct Cyc_List_List * _T21 = _cycalloc(sizeof(struct Cyc_List_List));
	  _T6 = x;
	  _T7 = _T6->hd;
	  _T8 = (struct Cyc_Absyn_Vardecl * *)_T7;
	  _T21->hd = *_T8;
	  _T21->tl = vs;
	  _T5 = (struct Cyc_List_List *)_T21;
	}vs = _T5;
	goto _TLE2;
	_TLE1: _TLE2: _T9 = x;
	x = _T9->tl;
	goto _TLE0;
	_TLDF: ;
      }_TB = Cyc_List_map;
      { struct Cyc_List_List * (* _T21)(struct _fat_ptr * (*)(struct Cyc_Absyn_Vardecl *),
					struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct _fat_ptr * (*)(struct Cyc_Absyn_Vardecl *),
											      struct Cyc_List_List *))_TB;
	_TA = _T21;
      }_TC = vs;
      _TD = _TA(Cyc_Tcpat_get_name,_TC);
      _TE = p;
      _TF = _TE->loc;
      _T10 = _tag_fat("pattern contains a repeated variable",sizeof(char),
		      37U);
      Cyc_Tcutil_check_unique_vars(_TD,_TF,_T10);
      _T11 = ans;
      { struct Cyc_List_List * x = _T11.patvars;
	_TLE6: if (x != 0) { goto _TLE4;
	}else { goto _TLE5;
	}
	_TLE4: _T12 = x;
	_T13 = _T12->hd;
	{ struct _tuple19 * _T21 = (struct _tuple19 *)_T13;
	  void * _T22;
	  struct Cyc_Absyn_Vardecl * * _T23;
	  { struct _tuple19 _T24 = *_T21;
	    _T23 = _T24.f0;
	    _T14 = &_T21->f1;
	    _T22 = (struct Cyc_Absyn_Exp * *)_T14;
	  }{ struct Cyc_Absyn_Vardecl * * vdopt = _T23;
	    struct Cyc_Absyn_Exp * * expopt = (struct Cyc_Absyn_Exp * *)_T22;
	    _T15 = expopt;
	    _T16 = *_T15;
	    if (_T16 == 0) { goto _TLE7;
	    }
	    _T17 = expopt;
	    _T18 = *_T17;
	    _T19 = pat_var_exp;
	    if (_T18 == _T19) { goto _TLE7;
	    }
	    _T1A = expopt;
	    _T1B = expopt;
	    _T1C = *_T1B;
	    *_T1A = Cyc_Tcutil_deep_copy_exp(1,_T1C);
	    goto _TLE8;
	    _TLE7: _TLE8: ;
	  }
	}_T1D = x;
	x = _T1D->tl;
	goto _TLE6;
	_TLE5: ;
      }_T1E = ans;
      return _T1E;
    }
  }
}
static long Cyc_Tcpat_try_alias_coerce(struct Cyc_Tcenv_Tenv * tenv,void * old_type,
				       void * new_type,struct Cyc_Absyn_Exp * initializer,
				       struct Cyc_List_List * assump) {
  struct _tuple0 _T0;
  void * _T1;
  int * _T2;
  int _T3;
  void * _T4;
  int * _T5;
  int _T6;
  void * _T7;
  void * _T8;
  struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T9;
  struct Cyc_Absyn_PointerType_Absyn_Type_struct * _TA;
  struct Cyc_Absyn_PtrInfo _TB;
  struct Cyc_Absyn_PointerType_Absyn_Type_struct * _TC;
  struct Cyc_Absyn_PtrInfo _TD;
  struct Cyc_Absyn_PointerType_Absyn_Type_struct * _TE;
  struct Cyc_Absyn_PtrInfo _TF;
  struct Cyc_Absyn_PtrAtts _T10;
  struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T11;
  struct Cyc_Absyn_PtrInfo _T12;
  struct Cyc_Absyn_PtrAtts _T13;
  struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T14;
  struct Cyc_Absyn_PtrInfo _T15;
  struct Cyc_Absyn_PtrAtts _T16;
  struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T17;
  struct Cyc_Absyn_PtrInfo _T18;
  struct Cyc_Absyn_PtrAtts _T19;
  struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T1A;
  struct Cyc_Absyn_PtrInfo _T1B;
  struct Cyc_Absyn_PtrAtts _T1C;
  struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T1D;
  struct Cyc_Absyn_PtrInfo _T1E;
  struct Cyc_Absyn_PtrAtts _T1F;
  struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T20;
  struct Cyc_Absyn_PtrInfo _T21;
  struct Cyc_Absyn_PtrAtts _T22;
  int _T23;
  struct Cyc_Absyn_Exp * _T24;
  unsigned int _T25;
  struct Cyc_List_List * _T26;
  struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T27;
  void * _T28;
  void * _T29;
  long _T2A;
  struct Cyc_List_List * _T2B;
  struct Cyc_Absyn_Exp * _T2C;
  struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T2D;
  void * _T2E;
  { struct _tuple0 _T2F;
    _T2F.f0 = Cyc_Absyn_compress(old_type);
    _T2F.f1 = Cyc_Absyn_compress(new_type);
    _T0 = _T2F;
  }{ struct _tuple0 _T2F = _T0;
    struct Cyc_Absyn_PtrInfo _T30;
    struct Cyc_Absyn_PtrInfo _T31;
    _T1 = _T2F.f0;
    _T2 = (int *)_T1;
    _T3 = *_T2;
    if (_T3 != 4) { goto _TLE9;
    }
    _T4 = _T2F.f1;
    _T5 = (int *)_T4;
    _T6 = *_T5;
    if (_T6 != 4) { goto _TLEB;
    }
    _T7 = _T2F.f0;
    { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T32 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T7;
      _T31 = _T32->f1;
    }_T8 = _T2F.f1;
    { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T32 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T8;
      _T30 = _T32->f1;
    }{ struct Cyc_Absyn_PtrInfo pold = _T31;
      struct Cyc_Absyn_PtrInfo pnew = _T30;
      struct Cyc_Absyn_PointerType_Absyn_Type_struct * ptry;
      ptry = _cycalloc(sizeof(struct Cyc_Absyn_PointerType_Absyn_Type_struct));
      _T9 = ptry;
      _T9->tag = 4;
      _TA = ptry;
      _TB = pold;
      (_TA->f1).elt_type = _TB.elt_type;
      _TC = ptry;
      _TD = pnew;
      (_TC->f1).elt_tq = _TD.elt_tq;
      _TE = ptry;
      _TF = pold;
      _T10 = _TF.ptr_atts;
      ((_TE->f1).ptr_atts).eff = _T10.eff;
      _T11 = ptry;
      _T12 = pnew;
      _T13 = _T12.ptr_atts;
      ((_T11->f1).ptr_atts).nullable = _T13.nullable;
      _T14 = ptry;
      _T15 = pnew;
      _T16 = _T15.ptr_atts;
      ((_T14->f1).ptr_atts).bounds = _T16.bounds;
      _T17 = ptry;
      _T18 = pnew;
      _T19 = _T18.ptr_atts;
      ((_T17->f1).ptr_atts).zero_term = _T19.zero_term;
      _T1A = ptry;
      _T1B = pold;
      _T1C = _T1B.ptr_atts;
      ((_T1A->f1).ptr_atts).ptrloc = _T1C.ptrloc;
      _T1D = ptry;
      _T1E = pnew;
      _T1F = _T1E.ptr_atts;
      ((_T1D->f1).ptr_atts).autoreleased = _T1F.autoreleased;
      _T20 = ptry;
      _T21 = pold;
      _T22 = _T21.ptr_atts;
      ((_T20->f1).ptr_atts).aqual = _T22.aqual;
      _T24 = initializer;
      _T25 = _T24->loc;
      _T26 = assump;
      _T27 = ptry;
      _T28 = (void *)_T27;
      _T29 = new_type;
      _T2A = Cyc_Subtype_subtype(_T25,_T26,_T28,_T29);
      if (! _T2A) { goto _TLED;
      }
      _T2B = Cyc_Tcenv_curr_aquals_bounds(tenv);
      _T2C = initializer;
      _T2D = ptry;
      _T2E = (void *)_T2D;
      _T23 = Cyc_Tcutil_coerce_assign(_T2B,_T2C,_T2E);
      goto _TLEE;
      _TLED: _T23 = 0;
      _TLEE: return _T23;
    }_TLEB: goto _LL3;
    _TLE9: _LL3: return 0;
    ;
  }
}
static void Cyc_Tcpat_check_alias_coercion(struct Cyc_Tcenv_Tenv * tenv,unsigned int loc,
					   void * old_type,struct Cyc_Absyn_Tvar * tv,
					   void * new_type,struct Cyc_Absyn_Exp * initializer) {
  struct _tuple0 _T0;
  void * _T1;
  int * _T2;
  int _T3;
  void * _T4;
  int * _T5;
  int _T6;
  void * _T7;
  struct Cyc_Absyn_PtrInfo _T8;
  struct Cyc_Absyn_PtrAtts _T9;
  struct Cyc_Absyn_PtrInfo _TA;
  struct Cyc_Absyn_PtrAtts _TB;
  void * _TC;
  void * _TD;
  struct Cyc_Absyn_PointerType_Absyn_Type_struct * _TE;
  void * * _TF;
  struct Cyc_List_List * _T10;
  struct _tuple0 * _T11;
  struct Cyc_Absyn_VarType_Absyn_Type_struct * _T12;
  void * * _T13;
  int * _T14;
  int _T15;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T16;
  void * _T17;
  int * _T18;
  int _T19;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T1A;
  struct Cyc_List_List * _T1B;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T1C;
  struct Cyc_List_List * _T1D;
  struct Cyc_List_List * _T1E;
  void * _T1F;
  int * _T20;
  int _T21;
  struct Cyc_List_List * _T22;
  void * * _T23;
  struct Cyc_Warn_String_Warn_Warg_struct _T24;
  unsigned int _T25;
  struct _fat_ptr _T26;
  long _T27;
  struct _tuple0 _T28;
  void * _T29;
  int * _T2A;
  int _T2B;
  void * _T2C;
  int * _T2D;
  int _T2E;
  void * _T2F;
  void * _T30;
  struct Cyc_Warn_String_Warn_Warg_struct _T31;
  unsigned int _T32;
  struct _fat_ptr _T33;
  struct Cyc_Warn_String_Warn_Warg_struct _T34;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T35;
  struct Cyc_Warn_String_Warn_Warg_struct _T36;
  struct Cyc_Warn_Typ_Warn_Warg_struct _T37;
  unsigned int _T38;
  struct _fat_ptr _T39;
  struct Cyc_List_List * assump = 0;
  { struct _tuple0 _T3A;
    _T3A.f0 = Cyc_Absyn_compress(old_type);
    _T3A.f1 = Cyc_Absyn_compress(new_type);
    _T0 = _T3A;
  }{ struct _tuple0 _T3A = _T0;
    void * _T3B;
    void * _T3C;
    void * _T3D;
    _T1 = _T3A.f0;
    _T2 = (int *)_T1;
    _T3 = *_T2;
    if (_T3 != 4) { goto _TLEF;
    }
    _T4 = _T3A.f1;
    _T5 = (int *)_T4;
    _T6 = *_T5;
    if (_T6 != 4) { goto _TLF1;
    }
    _T7 = _T3A.f0;
    { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T3E = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T7;
      _T8 = _T3E->f1;
      _T9 = _T8.ptr_atts;
      _T3D = _T9.eff;
      _TA = _T3E->f1;
      _TB = _TA.ptr_atts;
      _T3C = _TB.aqual;
    }_TC = _T3A.f1;
    { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T3E = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_TC;
      _TD = _T3A.f1;
      _TE = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_TD;
      _TF = &((_TE->f1).ptr_atts).aqual;
      _T3B = (void * *)_TF;
    }{ void * oldrgn = _T3D;
      void * aq_old = _T3C;
      void * * aq_new = (void * *)_T3B;
      { struct Cyc_List_List * _T3E = _cycalloc(sizeof(struct Cyc_List_List));
	{ struct _tuple0 * _T3F = _cycalloc(sizeof(struct _tuple0));
	  _T3F->f0 = oldrgn;
	  { struct Cyc_Absyn_VarType_Absyn_Type_struct * _T40 = _cycalloc(sizeof(struct Cyc_Absyn_VarType_Absyn_Type_struct));
	    _T40->tag = 2;
	    _T40->f1 = tv;
	    _T12 = (struct Cyc_Absyn_VarType_Absyn_Type_struct *)_T40;
	  }_T3F->f1 = (void *)_T12;
	  _T11 = (struct _tuple0 *)_T3F;
	}_T3E->hd = _T11;
	_T3E->tl = 0;
	_T10 = (struct Cyc_List_List *)_T3E;
      }assump = _T10;
      _T13 = aq_new;
      { void * _T3E = *_T13;
	struct Cyc_List_List * _T3F;
	_T14 = (int *)_T3E;
	_T15 = *_T14;
	if (_T15 != 0) { goto _TLF3;
	}
	_T16 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T3E;
	_T17 = _T16->f1;
	_T18 = (int *)_T17;
	_T19 = *_T18;
	if (_T19 != 17) { goto _TLF5;
	}
	_T1A = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T3E;
	_T1B = _T1A->f2;
	if (_T1B == 0) { goto _TLF7;
	}
	_T1C = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T3E;
	_T1D = _T1C->f2;
	_T1E = (struct Cyc_List_List *)_T1D;
	_T1F = _T1E->hd;
	_T20 = (int *)_T1F;
	_T21 = *_T20;
	if (_T21 != 1) { goto _TLF9;
	}
	{ struct Cyc_Absyn_AppType_Absyn_Type_struct * _T40 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T3E;
	  _T22 = _T40->f2;
	  { struct Cyc_List_List _T41 = *_T22;
	    _T3F = _T41.tl;
	  }
	}{ struct Cyc_List_List * bnd = _T3F;
	  _T23 = aq_new;
	  *_T23 = Cyc_Absyn_al_qual_type;
	  goto _LL5;
	}_TLF9: goto _LL8;
	_TLF7: goto _LL8;
	_TLF5: goto _LL8;
	_TLF3: _LL8: goto _LL5;
	_LL5: ;
      }goto _LL0;
    }_TLF1: goto _LL3;
    _TLEF: _LL3: { struct Cyc_Warn_String_Warn_Warg_struct _T3E;
      _T3E.tag = 0;
      _T3E.f1 = _tag_fat("alias requires pointer type",sizeof(char),28U);
      _T24 = _T3E;
    }{ struct Cyc_Warn_String_Warn_Warg_struct _T3E = _T24;
      void * _T3F[1];
      _T3F[0] = &_T3E;
      _T25 = loc;
      _T26 = _tag_fat(_T3F,sizeof(void *),1);
      Cyc_Warn_err2(_T25,_T26);
    }goto _LL0;
    _LL0: ;
  }_T27 = Cyc_Subtype_subtype(loc,assump,old_type,new_type);
  if (! _T27) { goto _TLFB;
  }
  { struct _tuple0 _T3A;
    _T3A.f0 = Cyc_Absyn_compress(old_type);
    _T3A.f1 = Cyc_Absyn_compress(new_type);
    _T28 = _T3A;
  }{ struct _tuple0 _T3A = _T28;
    struct Cyc_Absyn_PtrInfo _T3B;
    struct Cyc_Absyn_PtrInfo _T3C;
    _T29 = _T3A.f0;
    _T2A = (int *)_T29;
    _T2B = *_T2A;
    if (_T2B != 4) { goto _TLFD;
    }
    _T2C = _T3A.f1;
    _T2D = (int *)_T2C;
    _T2E = *_T2D;
    if (_T2E != 4) { goto _TLFF;
    }
    _T2F = _T3A.f0;
    { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T3D = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T2F;
      _T3C = _T3D->f1;
    }_T30 = _T3A.f1;
    { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T3D = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T30;
      _T3B = _T3D->f1;
    }{ struct Cyc_Absyn_PtrInfo pold = _T3C;
      struct Cyc_Absyn_PtrInfo pnew = _T3B;
      goto _LLA;
    }_TLFF: goto _LLD;
    _TLFD: _LLD: { struct Cyc_Warn_String_Warn_Warg_struct _T3D;
      _T3D.tag = 0;
      _T3D.f1 = _tag_fat("alias requires pointer type",sizeof(char),28U);
      _T31 = _T3D;
    }{ struct Cyc_Warn_String_Warn_Warg_struct _T3D = _T31;
      void * _T3E[1];
      _T3E[0] = &_T3D;
      _T32 = loc;
      _T33 = _tag_fat(_T3E,sizeof(void *),1);
      Cyc_Warn_err2(_T32,_T33);
    }goto _LLA;
    _LLA: ;
  }goto _TLFC;
  _TLFB: { struct Cyc_Warn_String_Warn_Warg_struct _T3A;
    _T3A.tag = 0;
    _T3A.f1 = _tag_fat("cannot alias value of type ",sizeof(char),28U);
    _T34 = _T3A;
  }{ struct Cyc_Warn_String_Warn_Warg_struct _T3A = _T34;
    { struct Cyc_Warn_Typ_Warn_Warg_struct _T3B;
      _T3B.tag = 2;
      _T3B.f1 = old_type;
      _T35 = _T3B;
    }{ struct Cyc_Warn_Typ_Warn_Warg_struct _T3B = _T35;
      { struct Cyc_Warn_String_Warn_Warg_struct _T3C;
	_T3C.tag = 0;
	_T3C.f1 = _tag_fat(" to type ",sizeof(char),10U);
	_T36 = _T3C;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T3C = _T36;
	{ struct Cyc_Warn_Typ_Warn_Warg_struct _T3D;
	  _T3D.tag = 2;
	  _T3D.f1 = new_type;
	  _T37 = _T3D;
	}{ struct Cyc_Warn_Typ_Warn_Warg_struct _T3D = _T37;
	  void * _T3E[4];
	  _T3E[0] = &_T3A;
	  _T3E[1] = &_T3B;
	  _T3E[2] = &_T3C;
	  _T3E[3] = &_T3D;
	  _T38 = loc;
	  _T39 = _tag_fat(_T3E,sizeof(void *),4);
	  Cyc_Warn_err2(_T38,_T39);
	}
      }
    }
  }_TLFC: ;
}
void Cyc_Tcpat_check_pat_regions_rec(struct Cyc_Tcenv_Tenv * te,struct Cyc_Absyn_Pat * p,
				     long did_noalias_deref,struct Cyc_List_List * patvars) {
  struct Cyc_Absyn_Pat * _T0;
  int * _T1;
  unsigned int _T2;
  struct Cyc_Absyn_Pat * _T3;
  void * _T4;
  int * _T5;
  int _T6;
  struct Cyc_Absyn_PtrInfo _T7;
  struct Cyc_Absyn_PtrAtts _T8;
  struct Cyc_Absyn_PtrInfo _T9;
  struct Cyc_Absyn_PtrAtts _TA;
  struct Cyc_Tcenv_Tenv * _TB;
  struct Cyc_Absyn_Pat * _TC;
  unsigned int _TD;
  void * _TE;
  struct Cyc_Tcenv_Tenv * _TF;
  struct Cyc_Absyn_Pat * _T10;
  long _T11;
  struct Cyc_List_List * _T12;
  struct Cyc_Warn_String_Warn_Warg_struct _T13;
  int (* _T14)(struct _fat_ptr);
  void * (* _T15)(struct _fat_ptr);
  struct _fat_ptr _T16;
  void * _T17;
  struct Cyc_Tcenv_Tenv * _T18;
  struct Cyc_List_List * _T19;
  void * _T1A;
  struct _tuple18 * _T1B;
  struct _tuple18 _T1C;
  struct Cyc_Absyn_Pat * _T1D;
  long _T1E;
  struct Cyc_List_List * _T1F;
  struct Cyc_List_List * _T20;
  struct Cyc_Tcenv_Tenv * _T21;
  struct Cyc_List_List * _T22;
  void * _T23;
  struct Cyc_Absyn_Pat * _T24;
  long _T25;
  struct Cyc_List_List * _T26;
  struct Cyc_List_List * _T27;
  struct Cyc_List_List * _T28;
  void * _T29;
  struct Cyc_Absyn_Vardecl * * _T2A;
  struct Cyc_Absyn_Vardecl * _T2B;
  struct Cyc_Absyn_Vardecl * _T2C;
  struct Cyc_Absyn_Exp * _T2D;
  int * _T2E;
  int _T2F;
  struct Cyc_List_List * _T30;
  struct Cyc_Absyn_Exp * _T31;
  void * _T32;
  void * _T33;
  long _T34;
  struct Cyc_Warn_String_Warn_Warg_struct _T35;
  struct Cyc_Absyn_Pat * _T36;
  unsigned int _T37;
  struct _fat_ptr _T38;
  struct Cyc_Warn_String_Warn_Warg_struct _T39;
  int (* _T3A)(struct _fat_ptr);
  void * (* _T3B)(struct _fat_ptr);
  struct _fat_ptr _T3C;
  struct Cyc_List_List * _T3D;
  struct Cyc_Absyn_Pat * _T3E;
  int * _T3F;
  int _T40;
  long _T41;
  struct Cyc_Warn_String_Warn_Warg_struct _T42;
  struct Cyc_Absyn_Pat * _T43;
  unsigned int _T44;
  struct _fat_ptr _T45;
  struct Cyc_List_List * _T46;
  void * _T47;
  struct Cyc_Absyn_Vardecl * * _T48;
  struct Cyc_Absyn_Vardecl * _T49;
  struct Cyc_Absyn_Vardecl * _T4A;
  struct Cyc_Warn_String_Warn_Warg_struct _T4B;
  struct Cyc_Absyn_Pat * _T4C;
  unsigned int _T4D;
  struct _fat_ptr _T4E;
  struct Cyc_Absyn_Pat * _T4F;
  unsigned int _T50;
  struct Cyc_Tcenv_Tenv * _T51;
  struct Cyc_List_List * _T52;
  struct _fat_ptr _T53;
  struct Cyc_Tcenv_Tenv * _T54;
  struct Cyc_Absyn_VarType_Absyn_Type_struct * _T55;
  void * _T56;
  struct Cyc_Tcenv_Tenv * _T57;
  struct Cyc_Absyn_Pat * _T58;
  unsigned int _T59;
  struct Cyc_Absyn_Exp * _T5A;
  void * _T5B;
  void * _T5C;
  struct Cyc_Absyn_Tvar * _T5D;
  struct Cyc_Absyn_Vardecl * _T5E;
  void * _T5F;
  struct Cyc_Absyn_Exp * _T60;
  struct Cyc_List_List * _T61;
  _T0 = p;
  { void * _T62 = _T0->r;
    struct Cyc_Absyn_Tvar * _T63;
    struct Cyc_Absyn_Pat * _T64;
    struct Cyc_Absyn_Vardecl * _T65;
    struct Cyc_List_List * _T66;
    struct Cyc_List_List * _T67;
    long _T68;
    void * _T69;
    _T1 = (int *)_T62;
    _T2 = *_T1;
    switch (_T2) {
    case 5: 
      { struct Cyc_Absyn_Pointer_p_Absyn_Raw_pat_struct * _T6A = (struct Cyc_Absyn_Pointer_p_Absyn_Raw_pat_struct *)_T62;
	_T69 = _T6A->f1;
      }{ struct Cyc_Absyn_Pat * p2 = _T69;
	_T3 = p;
	_T4 = _T3->topt;
	{ void * _T6A = _check_null(_T4);
	  void * _T6B;
	  void * _T6C;
	  _T5 = (int *)_T6A;
	  _T6 = *_T5;
	  if (_T6 != 4) { goto _TL102;
	  }
	  { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T6D = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T6A;
	    _T7 = _T6D->f1;
	    _T8 = _T7.ptr_atts;
	    _T6C = _T8.eff;
	    _T9 = _T6D->f1;
	    _TA = _T9.ptr_atts;
	    _T6B = _TA.aqual;
	  }{ void * rt = _T6C;
	    void * aq = _T6B;
	    _TB = te;
	    _TC = p;
	    _TD = _TC->loc;
	    _TE = rt;
	    Cyc_Tcenv_check_effect_accessible_nodelay(_TB,_TD,_TE);
	    _TF = te;
	    _T10 = p2;
	    _T11 = Cyc_Tcutil_is_noalias_qual(aq,0);
	    _T12 = patvars;
	    Cyc_Tcpat_check_pat_regions_rec(_TF,_T10,_T11,_T12);
	    return;
	  }_TL102: { struct Cyc_Warn_String_Warn_Warg_struct _T6D;
	    _T6D.tag = 0;
	    _T6D.f1 = _tag_fat("check_pat_regions: bad pointer type",sizeof(char),
			       36U);
	    _T13 = _T6D;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T6D = _T13;
	    void * _T6E[1];
	    _T6E[0] = &_T6D;
	    _T15 = Cyc_Warn_impos2;
	    { int (* _T6F)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T15;
	      _T14 = _T6F;
	    }_T16 = _tag_fat(_T6E,sizeof(void *),1);
	    _T14(_T16);
	  };
	}
      }
    case 6: 
      { struct Cyc_Absyn_Aggr_p_Absyn_Raw_pat_struct * _T6A = (struct Cyc_Absyn_Aggr_p_Absyn_Raw_pat_struct *)_T62;
	_T17 = _T6A->f1;
	_T69 = (void *)_T17;
	_T68 = _T6A->f2;
	_T67 = _T6A->f3;
	_T66 = _T6A->f4;
      }{ void * ai = _T69;
	long is_tuple = _T68;
	struct Cyc_List_List * exist_ts = _T67;
	struct Cyc_List_List * dps = _T66;
	_TL107: if (dps != 0) { goto _TL105;
	}else { goto _TL106;
	}
	_TL105: _T18 = te;
	_T19 = dps;
	_T1A = _T19->hd;
	_T1B = (struct _tuple18 *)_T1A;
	_T1C = *_T1B;
	_T1D = _T1C.f1;
	_T1E = did_noalias_deref;
	_T1F = patvars;
	Cyc_Tcpat_check_pat_regions_rec(_T18,_T1D,_T1E,_T1F);
	_T20 = dps;
	dps = _T20->tl;
	goto _TL107;
	_TL106: return;
      }
    case 7: 
      { struct Cyc_Absyn_Datatype_p_Absyn_Raw_pat_struct * _T6A = (struct Cyc_Absyn_Datatype_p_Absyn_Raw_pat_struct *)_T62;
	_T67 = _T6A->f3;
      }{ struct Cyc_List_List * ps = _T67;
	did_noalias_deref = 0;
	_TL10B: if (ps != 0) { goto _TL109;
	}else { goto _TL10A;
	}
	_TL109: _T21 = te;
	_T22 = ps;
	_T23 = _T22->hd;
	_T24 = (struct Cyc_Absyn_Pat *)_T23;
	_T25 = did_noalias_deref;
	_T26 = patvars;
	Cyc_Tcpat_check_pat_regions_rec(_T21,_T24,_T25,_T26);
	_T27 = ps;
	ps = _T27->tl;
	goto _TL10B;
	_TL10A: return;
      }
    case 3: 
      { struct Cyc_Absyn_Reference_p_Absyn_Raw_pat_struct * _T6A = (struct Cyc_Absyn_Reference_p_Absyn_Raw_pat_struct *)_T62;
	_T65 = _T6A->f1;
	_T64 = _T6A->f2;
      }{ struct Cyc_Absyn_Vardecl * vd = _T65;
	struct Cyc_Absyn_Pat * p2 = _T64;
	{ struct Cyc_List_List * x = patvars;
	  _TL10F: if (x != 0) { goto _TL10D;
	  }else { goto _TL10E;
	  }
	  _TL10D: _T28 = x;
	  _T29 = _T28->hd;
	  { struct _tuple19 * _T6A = (struct _tuple19 *)_T29;
	    struct Cyc_Absyn_Exp * _T6B;
	    struct Cyc_Absyn_Vardecl * * _T6C;
	    { struct _tuple19 _T6D = *_T6A;
	      _T6C = _T6D.f0;
	      _T6B = _T6D.f1;
	    }{ struct Cyc_Absyn_Vardecl * * vdopt = _T6C;
	      struct Cyc_Absyn_Exp * eopt = _T6B;
	      if (vdopt == 0) { goto _TL110;
	      }
	      _T2A = vdopt;
	      _T2B = *_T2A;
	      _T2C = vd;
	      if (_T2B != _T2C) { goto _TL110;
	      }
	      if (eopt == 0) { goto _TL110;
	      }
	      _T2D = eopt;
	      { void * _T6D = _T2D->r;
		struct Cyc_Absyn_Exp * _T6E;
		_T2E = (int *)_T6D;
		_T2F = *_T2E;
		if (_T2F != 15) { goto _TL112;
		}
		{ struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct * _T6F = (struct Cyc_Absyn_Address_e_Absyn_Raw_exp_struct *)_T6D;
		  _T6E = _T6F->f1;
		}{ struct Cyc_Absyn_Exp * e = _T6E;
		  _T30 = Cyc_Tcenv_curr_aquals_bounds(te);
		  _T31 = e;
		  _T32 = _T31->topt;
		  _T33 = _check_null(_T32);
		  _T34 = Cyc_Tcutil_is_noalias_pointer_or_aggr(_T30,_T33);
		  if (! _T34) { goto _TL114;
		  }
		  { struct Cyc_Warn_String_Warn_Warg_struct _T6F;
		    _T6F.tag = 0;
		    _T6F.f1 = _tag_fat("reference pattern not allowed on alias-free pointers",
				       sizeof(char),53U);
		    _T35 = _T6F;
		  }{ struct Cyc_Warn_String_Warn_Warg_struct _T6F = _T35;
		    void * _T70[1];
		    _T70[0] = &_T6F;
		    _T36 = p;
		    _T37 = _T36->loc;
		    _T38 = _tag_fat(_T70,sizeof(void *),1);
		    Cyc_Warn_err2(_T37,_T38);
		  }goto _TL115;
		  _TL114: _TL115: goto _LL17;
		}_TL112: { struct Cyc_Warn_String_Warn_Warg_struct _T6F;
		  _T6F.tag = 0;
		  _T6F.f1 = _tag_fat("check_pat_regions: bad reference access exp",
				     sizeof(char),44U);
		  _T39 = _T6F;
		}{ struct Cyc_Warn_String_Warn_Warg_struct _T6F = _T39;
		  void * _T70[1];
		  _T70[0] = &_T6F;
		  _T3B = Cyc_Warn_impos2;
		  { int (* _T71)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T3B;
		    _T3A = _T71;
		  }_T3C = _tag_fat(_T70,sizeof(void *),1);
		  _T3A(_T3C);
		}_LL17: ;
	      }goto _TL10E;
	      _TL110: ;
	    }
	  }_T3D = x;
	  x = _T3D->tl;
	  goto _TL10F;
	  _TL10E: ;
	}Cyc_Tcpat_check_pat_regions_rec(te,p2,did_noalias_deref,patvars);
	return;
      }
    case 1: 
      { struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct * _T6A = (struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct *)_T62;
	_T65 = _T6A->f1;
	_T64 = _T6A->f2;
      }{ struct Cyc_Absyn_Vardecl * vd = _T65;
	struct Cyc_Absyn_Pat * p2 = _T64;
	_T3E = p;
	{ void * _T6A = _T3E->topt;
	  if (_T6A == 0) { goto _TL116;
	  }
	  _T3F = (int *)_T6A;
	  _T40 = *_T3F;
	  if (_T40 != 5) { goto _TL118;
	  }
	  _T41 = did_noalias_deref;
	  if (_T41) { goto _TL11A;
	  }else { goto _TL11C;
	  }
	  _TL11C: goto _LL1C;
	  _TL11A: { struct Cyc_Warn_String_Warn_Warg_struct _T6B;
	    _T6B.tag = 0;
	    _T6B.f1 = _tag_fat("pattern to array would create alias of no-alias pointer",
			       sizeof(char),56U);
	    _T42 = _T6B;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T6B = _T42;
	    void * _T6C[1];
	    _T6C[0] = &_T6B;
	    _T43 = p;
	    _T44 = _T43->loc;
	    _T45 = _tag_fat(_T6C,sizeof(void *),1);
	    Cyc_Warn_err2(_T44,_T45);
	  }return;
	  _TL118: goto _LL1F;
	  _TL116: _LL1F: goto _LL1C;
	  _LL1C: ;
	}Cyc_Tcpat_check_pat_regions_rec(te,p2,did_noalias_deref,patvars);
	return;
      }
    case 2: 
      { struct Cyc_Absyn_AliasVar_p_Absyn_Raw_pat_struct * _T6A = (struct Cyc_Absyn_AliasVar_p_Absyn_Raw_pat_struct *)_T62;
	_T63 = _T6A->f1;
	_T65 = _T6A->f2;
      }{ struct Cyc_Absyn_Tvar * tv = _T63;
	struct Cyc_Absyn_Vardecl * vd = _T65;
	{ struct Cyc_List_List * x = patvars;
	  _TL120: if (x != 0) { goto _TL11E;
	  }else { goto _TL11F;
	  }
	  _TL11E: _T46 = x;
	  _T47 = _T46->hd;
	  { struct _tuple19 * _T6A = (struct _tuple19 *)_T47;
	    struct Cyc_Absyn_Exp * _T6B;
	    struct Cyc_Absyn_Vardecl * * _T6C;
	    { struct _tuple19 _T6D = *_T6A;
	      _T6C = _T6D.f0;
	      _T6B = _T6D.f1;
	    }{ struct Cyc_Absyn_Vardecl * * vdopt = _T6C;
	      struct Cyc_Absyn_Exp * eopt = _T6B;
	      if (vdopt == 0) { goto _TL121;
	      }
	      _T48 = vdopt;
	      _T49 = *_T48;
	      _T4A = vd;
	      if (_T49 != _T4A) { goto _TL121;
	      }
	      if (eopt != 0) { goto _TL123;
	      }
	      { struct Cyc_Warn_String_Warn_Warg_struct _T6D;
		_T6D.tag = 0;
		_T6D.f1 = _tag_fat("cannot alias pattern expression in datatype",
				   sizeof(char),44U);
		_T4B = _T6D;
	      }{ struct Cyc_Warn_String_Warn_Warg_struct _T6D = _T4B;
		void * _T6E[1];
		_T6E[0] = &_T6D;
		_T4C = p;
		_T4D = _T4C->loc;
		_T4E = _tag_fat(_T6E,sizeof(void *),1);
		Cyc_Warn_err2(_T4D,_T4E);
	      }goto _TL124;
	      _TL123: _T4F = p;
	      _T50 = _T4F->loc;
	      _T51 = te;
	      { struct Cyc_Absyn_Tvar * _T6D[1];
		_T6D[0] = tv;
		_T53 = _tag_fat(_T6D,sizeof(struct Cyc_Absyn_Tvar *),1);
		_T52 = Cyc_List_list(_T53);
	      }{ struct Cyc_Tcenv_Tenv * te2 = Cyc_Tcenv_add_type_vars(_T50,
								       _T51,
								       _T52);
		_T54 = te2;
		{ struct Cyc_Absyn_VarType_Absyn_Type_struct * _T6D = _cycalloc(sizeof(struct Cyc_Absyn_VarType_Absyn_Type_struct));
		  _T6D->tag = 2;
		  _T6D->f1 = tv;
		  _T55 = (struct Cyc_Absyn_VarType_Absyn_Type_struct *)_T6D;
		}_T56 = (void *)_T55;
		te2 = Cyc_Tcenv_add_region(_T54,_T56,0,0);
		_T57 = te2;
		_T58 = p;
		_T59 = _T58->loc;
		_T5A = eopt;
		_T5B = _T5A->topt;
		_T5C = _check_null(_T5B);
		_T5D = tv;
		_T5E = vd;
		_T5F = _T5E->type;
		_T60 = eopt;
		Cyc_Tcpat_check_alias_coercion(_T57,_T59,_T5C,_T5D,_T5F,_T60);
	      }_TL124: goto _TL11F;
	      _TL121: ;
	    }
	  }_T61 = x;
	  x = _T61->tl;
	  goto _TL120;
	  _TL11F: ;
	}goto _LL0;
      }
    default: 
      return;
    }
    _LL0: ;
  }
}
void Cyc_Tcpat_check_pat_regions(struct Cyc_Tcenv_Tenv * te,struct Cyc_Absyn_Pat * p,
				 struct Cyc_Tcpat_TcPatResult * pat_res) {
  struct Cyc_Tcpat_TcPatResult * _T0;
  struct Cyc_Tcpat_TcPatResult * _T1;
  struct Cyc_List_List * _T2;
  void * _T3;
  int * _T4;
  int _T5;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T6;
  void * _T7;
  int * _T8;
  int _T9;
  struct Cyc_List_List * _TA;
  struct Cyc_List_List * _TB;
  void * _TC;
  struct Cyc_List_List * _TD;
  struct Cyc_Absyn_Exp * _TE;
  void * _TF;
  void * _T10;
  long _T11;
  struct Cyc_List_List * _T12;
  struct Cyc_Absyn_Exp * _T13;
  long _T14;
  struct Cyc_Warn_String_Warn_Warg_struct _T15;
  struct Cyc_Warn_String_Warn_Warg_struct _T16;
  struct Cyc_Absyn_Pat * _T17;
  unsigned int _T18;
  struct _fat_ptr _T19;
  struct Cyc_Warn_String_Warn_Warg_struct _T1A;
  struct Cyc_Warn_Qvar_Warn_Warg_struct _T1B;
  struct Cyc_Absyn_Vardecl * * _T1C;
  struct Cyc_Absyn_Vardecl * _T1D;
  struct Cyc_Warn_String_Warn_Warg_struct _T1E;
  struct Cyc_Absyn_Pat * _T1F;
  unsigned int _T20;
  struct _fat_ptr _T21;
  struct Cyc_List_List * _T22;
  _T0 = pat_res;
  { struct Cyc_List_List * patvars = _T0->patvars;
    Cyc_Tcpat_check_pat_regions_rec(te,p,0,patvars);
    { struct Cyc_List_List * _T23;
      _T1 = pat_res;
      { struct Cyc_Tcpat_TcPatResult _T24 = *_T1;
	_T23 = _T24.aquals_bounds;
      }{ struct Cyc_List_List * aqb = _T23;
	_TL128: if (aqb != 0) { goto _TL126;
	}else { goto _TL127;
	}
	_TL126: _T2 = aqb;
	_T3 = _T2->hd;
	{ struct _tuple0 * _T24 = (struct _tuple0 *)_T3;
	  void * _T25;
	  void * _T26;
	  { struct _tuple0 _T27 = *_T24;
	    _T26 = _T27.f0;
	    _T25 = _T27.f1;
	  }{ void * tv = _T26;
	    void * b = _T25;
	    void * _T27 = Cyc_Absyn_compress(tv);
	    _T4 = (int *)_T27;
	    _T5 = *_T4;
	    if (_T5 != 0) { goto _TL129;
	    }
	    _T6 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T27;
	    _T7 = _T6->f1;
	    _T8 = (int *)_T7;
	    _T9 = *_T8;
	    if (_T9 != 15) { goto _TL12B;
	    }
	    te = Cyc_Tcenv_add_aquals_bound(te,tv,b);
	    goto _LL6;
	    _TL12B: goto _LL9;
	    _TL129: _LL9: goto _LL6;
	    _LL6: ;
	  }
	}_TA = aqb;
	aqb = _TA->tl;
	goto _TL128;
	_TL127: { struct Cyc_List_List * x = patvars;
	  _TL130: if (x != 0) { goto _TL12E;
	  }else { goto _TL12F;
	  }
	  _TL12E: _TB = x;
	  _TC = _TB->hd;
	  { struct _tuple19 * _T24 = (struct _tuple19 *)_TC;
	    struct Cyc_Absyn_Exp * _T25;
	    struct Cyc_Absyn_Vardecl * * _T26;
	    { struct _tuple19 _T27 = *_T24;
	      _T26 = _T27.f0;
	      _T25 = _T27.f1;
	    }{ struct Cyc_Absyn_Vardecl * * vdopt = _T26;
	      struct Cyc_Absyn_Exp * eopt = _T25;
	      if (eopt == 0) { goto _TL131;
	      }
	      { struct Cyc_Absyn_Exp * e = eopt;
		_TD = Cyc_Tcenv_curr_aquals_bounds(te);
		_TE = e;
		_TF = _TE->topt;
		_T10 = _check_null(_TF);
		_T11 = Cyc_Tcutil_is_noalias_pointer_or_aggr(_TD,_T10);
		if (! _T11) { goto _TL133;
		}
		_T12 = Cyc_Tcenv_curr_aquals_bounds(te);
		_T13 = e;
		_T14 = Cyc_Tcutil_is_noalias_path(_T12,_T13);
		if (_T14) { goto _TL133;
		}else { goto _TL135;
		}
		_TL135: if (vdopt != 0) { goto _TL136;
		}
		{ struct Cyc_Warn_String_Warn_Warg_struct _T27;
		  _T27.tag = 0;
		  _T27.f1 = _tag_fat("pattern dereferences an alias-free-pointer ",
				     sizeof(char),44U);
		  _T15 = _T27;
		}{ struct Cyc_Warn_String_Warn_Warg_struct _T27 = _T15;
		  { struct Cyc_Warn_String_Warn_Warg_struct _T28;
		    _T28.tag = 0;
		    _T28.f1 = _tag_fat("from a non-unique path",sizeof(char),
				       23U);
		    _T16 = _T28;
		  }{ struct Cyc_Warn_String_Warn_Warg_struct _T28 = _T16;
		    void * _T29[2];
		    _T29[0] = &_T27;
		    _T29[1] = &_T28;
		    _T17 = p;
		    _T18 = _T17->loc;
		    _T19 = _tag_fat(_T29,sizeof(void *),2);
		    Cyc_Warn_err2(_T18,_T19);
		  }
		}goto _TL137;
		_TL136: { struct Cyc_Warn_String_Warn_Warg_struct _T27;
		  _T27.tag = 0;
		  _T27.f1 = _tag_fat("pattern for variable ",sizeof(char),
				     22U);
		  _T1A = _T27;
		}{ struct Cyc_Warn_String_Warn_Warg_struct _T27 = _T1A;
		  { struct Cyc_Warn_Qvar_Warn_Warg_struct _T28;
		    _T28.tag = 1;
		    _T1C = vdopt;
		    _T1D = *_T1C;
		    _T28.f1 = _T1D->name;
		    _T1B = _T28;
		  }{ struct Cyc_Warn_Qvar_Warn_Warg_struct _T28 = _T1B;
		    { struct Cyc_Warn_String_Warn_Warg_struct _T29;
		      _T29.tag = 0;
		      _T29.f1 = _tag_fat(" dereferences an alias-free-pointer from a non-unique path",
					 sizeof(char),59U);
		      _T1E = _T29;
		    }{ struct Cyc_Warn_String_Warn_Warg_struct _T29 = _T1E;
		      void * _T2A[3];
		      _T2A[0] = &_T27;
		      _T2A[1] = &_T28;
		      _T2A[2] = &_T29;
		      _T1F = p;
		      _T20 = _T1F->loc;
		      _T21 = _tag_fat(_T2A,sizeof(void *),3);
		      Cyc_Warn_err2(_T20,_T21);
		    }
		  }
		}_TL137: goto _TL134;
		_TL133: _TL134: ;
	      }goto _TL132;
	      _TL131: _TL132: ;
	    }
	  }_T22 = x;
	  x = _T22->tl;
	  goto _TL130;
	  _TL12F: ;
	}
      }
    }
  }
}
struct Cyc_Tcpat_EqNull_Tcpat_PatTest_struct Cyc_Tcpat_EqNull_val = {1};
struct Cyc_Tcpat_NeqNull_Tcpat_PatTest_struct Cyc_Tcpat_NeqNull_val = {2};
struct Cyc_Tcpat_Dummy_Tcpat_Access_struct Cyc_Tcpat_Dummy_val = {0};
 struct _union_Name_value_Name_v {
  int tag;
  struct _fat_ptr val;
};
 struct _union_Name_value_Int_v {
  int tag;
  int val;
};
 union Cyc_Tcpat_Name_value {
  struct _union_Name_value_Name_v Name_v;
  struct _union_Name_value_Int_v Int_v;
};
union Cyc_Tcpat_Name_value Cyc_Tcpat_Name_v(struct _fat_ptr s) {
  union Cyc_Tcpat_Name_value _T0;
  { union Cyc_Tcpat_Name_value _T1;
    (_T1.Name_v).tag = 1U;
    (_T1.Name_v).val = s;
    _T0 = _T1;
  }return _T0;
}
union Cyc_Tcpat_Name_value Cyc_Tcpat_Int_v(int i) {
  union Cyc_Tcpat_Name_value _T0;
  { union Cyc_Tcpat_Name_value _T1;
    (_T1.Int_v).tag = 2U;
    (_T1.Int_v).val = i;
    _T0 = _T1;
  }return _T0;
}
 struct Cyc_Tcpat_Con_s {
  union Cyc_Tcpat_Name_value name;
  int arity;
  int * span;
  union Cyc_Tcpat_PatOrWhere orig_pat;
};
 struct Cyc_Tcpat_Any_Tcpat_Simple_pat_struct {
  int tag;
};
 struct Cyc_Tcpat_Con_Tcpat_Simple_pat_struct {
  int tag;
  struct Cyc_Tcpat_Con_s * f1;
  struct Cyc_List_List * f2;
};
static int Cyc_Tcpat_compare_con(struct Cyc_Tcpat_Con_s * c1,struct Cyc_Tcpat_Con_s * c2) {
  struct Cyc_Tcpat_Con_s * _T0;
  struct _union_Name_value_Name_v _T1;
  unsigned int _T2;
  struct _union_Name_value_Name_v _T3;
  struct Cyc_Tcpat_Con_s * _T4;
  struct _union_Name_value_Name_v _T5;
  unsigned int _T6;
  struct _union_Name_value_Name_v _T7;
  int _T8;
  int _T9;
  struct _union_Name_value_Int_v _TA;
  struct Cyc_Tcpat_Con_s * _TB;
  struct _union_Name_value_Name_v _TC;
  unsigned int _TD;
  struct _union_Name_value_Int_v _TE;
  int _TF;
  _T0 = c1;
  { union Cyc_Tcpat_Name_value _T10 = _T0->name;
    int _T11;
    struct _fat_ptr _T12;
    _T1 = _T10.Name_v;
    _T2 = _T1.tag;
    if (_T2 != 1) { goto _TL138;
    }
    _T3 = _T10.Name_v;
    _T12 = _T3.val;
    { struct _fat_ptr n1 = _T12;
      _T4 = c2;
      { union Cyc_Tcpat_Name_value _T13 = _T4->name;
	struct _fat_ptr _T14;
	_T5 = _T13.Name_v;
	_T6 = _T5.tag;
	if (_T6 != 1) { goto _TL13A;
	}
	_T7 = _T13.Name_v;
	_T14 = _T7.val;
	{ struct _fat_ptr n2 = _T14;
	  _T8 = Cyc_strcmp(n1,n2);
	  return _T8;
	}_TL13A: _T9 = - 1;
	return _T9;
	;
      }
    }goto _TL139;
    _TL138: _TA = _T10.Int_v;
    _T11 = _TA.val;
    { int i1 = _T11;
      _TB = c2;
      { union Cyc_Tcpat_Name_value _T13 = _TB->name;
	int _T14;
	_TC = _T13.Name_v;
	_TD = _TC.tag;
	if (_TD != 1) { goto _TL13C;
	}
	return 1;
	_TL13C: _TE = _T13.Int_v;
	_T14 = _TE.val;
	{ int i2 = _T14;
	  _TF = i1 - i2;
	  return _TF;
	};
      }
    }_TL139: ;
  }
}
static struct Cyc_Set_Set * Cyc_Tcpat_empty_con_set() {
  struct Cyc_Set_Set * (* _T0)(struct _RegionHandle *,int (*)(struct Cyc_Tcpat_Con_s *,
							      struct Cyc_Tcpat_Con_s *));
  struct Cyc_Set_Set * (* _T1)(struct _RegionHandle *,int (*)(void *,void *));
  struct _RegionHandle * _T2;
  struct Cyc_Set_Set * _T3;
  _T1 = Cyc_Set_rempty;
  { struct Cyc_Set_Set * (* _T4)(struct _RegionHandle *,int (*)(struct Cyc_Tcpat_Con_s *,
								struct Cyc_Tcpat_Con_s *)) = (struct Cyc_Set_Set * (*)(struct _RegionHandle *,
														       int (*)(struct Cyc_Tcpat_Con_s *,
															       struct Cyc_Tcpat_Con_s *)))_T1;
    _T0 = _T4;
  }_T2 = Cyc_Core_heap_region;
  _T3 = _T0(_T2,Cyc_Tcpat_compare_con);
  return _T3;
}
static int Cyc_Tcpat_one_opt = 1;
static int Cyc_Tcpat_two_opt = 2;
static int Cyc_Tcpat_twofiftysix_opt = 256;
static unsigned int Cyc_Tcpat_datatype_tag_number(struct Cyc_Absyn_Datatypedecl * td,
						  struct _tuple2 * name) {
  struct Cyc_Absyn_Datatypedecl * _T0;
  struct Cyc_Core_Opt * _T1;
  struct Cyc_Core_Opt * _T2;
  void * _T3;
  struct _tuple2 * _T4;
  struct Cyc_List_List * _T5;
  void * _T6;
  struct Cyc_Absyn_Datatypefield * _T7;
  struct _tuple2 * _T8;
  int _T9;
  struct Cyc_List_List * _TA;
  unsigned int _TB;
  unsigned int ans = 0U;
  _T0 = td;
  _T1 = _T0->fields;
  _T2 = _check_null(_T1);
  _T3 = _T2->v;
  { struct Cyc_List_List * fs = (struct Cyc_List_List *)_T3;
    _TL13E: _T4 = name;
    _T5 = _check_null(fs);
    _T6 = _T5->hd;
    _T7 = (struct Cyc_Absyn_Datatypefield *)_T6;
    _T8 = _T7->name;
    _T9 = Cyc_Absyn_qvar_cmp(_T4,_T8);
    if (_T9 != 0) { goto _TL13F;
    }else { goto _TL140;
    }
    _TL13F: ans = ans + 1;
    _TA = fs;
    fs = _TA->tl;
    goto _TL13E;
    _TL140: _TB = ans;
    return _TB;
  }
}
static int Cyc_Tcpat_get_member_offset(struct Cyc_Absyn_Aggrdecl * ad,struct _fat_ptr * f) {
  struct Cyc_Absyn_Aggrdecl * _T0;
  struct Cyc_Absyn_AggrdeclImpl * _T1;
  struct Cyc_Absyn_AggrdeclImpl * _T2;
  struct Cyc_List_List * _T3;
  void * _T4;
  struct Cyc_Absyn_Aggrfield * _T5;
  struct _fat_ptr * _T6;
  struct _fat_ptr _T7;
  struct _fat_ptr * _T8;
  struct _fat_ptr _T9;
  int _TA;
  int _TB;
  struct Cyc_List_List * _TC;
  struct Cyc_Warn_String_Warn_Warg_struct _TD;
  struct Cyc_Warn_String_Warn_Warg_struct _TE;
  struct _fat_ptr * _TF;
  struct Cyc_Warn_String_Warn_Warg_struct _T10;
  int (* _T11)(struct _fat_ptr);
  void * (* _T12)(struct _fat_ptr);
  struct _fat_ptr _T13;
  int i = 1;
  _T0 = ad;
  _T1 = _T0->impl;
  _T2 = _check_null(_T1);
  { struct Cyc_List_List * fields = _T2->fields;
    _TL144: if (fields != 0) { goto _TL142;
    }else { goto _TL143;
    }
    _TL142: _T3 = fields;
    _T4 = _T3->hd;
    _T5 = (struct Cyc_Absyn_Aggrfield *)_T4;
    _T6 = _T5->name;
    _T7 = *_T6;
    _T8 = f;
    _T9 = *_T8;
    _TA = Cyc_strcmp(_T7,_T9);
    if (_TA != 0) { goto _TL145;
    }
    _TB = i;
    return _TB;
    _TL145: _TC = fields;
    fields = _TC->tl;
    i = i + 1;
    goto _TL144;
    _TL143: ;
  }{ struct Cyc_Warn_String_Warn_Warg_struct _T14;
    _T14.tag = 0;
    _T14.f1 = _tag_fat("get_member_offset ",sizeof(char),19U);
    _TD = _T14;
  }{ struct Cyc_Warn_String_Warn_Warg_struct _T14 = _TD;
    { struct Cyc_Warn_String_Warn_Warg_struct _T15;
      _T15.tag = 0;
      _TF = f;
      _T15.f1 = *_TF;
      _TE = _T15;
    }{ struct Cyc_Warn_String_Warn_Warg_struct _T15 = _TE;
      { struct Cyc_Warn_String_Warn_Warg_struct _T16;
	_T16.tag = 0;
	_T16.f1 = _tag_fat(" failed",sizeof(char),8U);
	_T10 = _T16;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T16 = _T10;
	void * _T17[3];
	_T17[0] = &_T14;
	_T17[1] = &_T15;
	_T17[2] = &_T16;
	_T12 = Cyc_Warn_impos2;
	{ int (* _T18)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T12;
	  _T11 = _T18;
	}_T13 = _tag_fat(_T17,sizeof(void *),3);
	_T11(_T13);
      }
    }
  }
}
static void * Cyc_Tcpat_get_pat_test(union Cyc_Tcpat_PatOrWhere pw) {
  union Cyc_Tcpat_PatOrWhere _T0;
  struct _union_PatOrWhere_where_clause _T1;
  unsigned int _T2;
  union Cyc_Tcpat_PatOrWhere _T3;
  struct _union_PatOrWhere_where_clause _T4;
  struct Cyc_Tcpat_WhereTest_Tcpat_PatTest_struct * _T5;
  void * _T6;
  union Cyc_Tcpat_PatOrWhere _T7;
  struct _union_PatOrWhere_pattern _T8;
  struct Cyc_Absyn_Pat * _T9;
  int * _TA;
  unsigned int _TB;
  union Cyc_Tcpat_PatOrWhere _TC;
  void * _TD;
  struct Cyc_Tcpat_EqNull_Tcpat_PatTest_struct * _TE;
  struct Cyc_Tcpat_EqNull_Tcpat_PatTest_struct * _TF;
  void * _T10;
  struct Cyc_Tcpat_EqConst_Tcpat_PatTest_struct * _T11;
  int _T12;
  void * _T13;
  struct Cyc_Tcpat_EqConst_Tcpat_PatTest_struct * _T14;
  char _T15;
  void * _T16;
  struct Cyc_Tcpat_EqFloat_Tcpat_PatTest_struct * _T17;
  void * _T18;
  struct Cyc_Tcpat_EqEnum_Tcpat_PatTest_struct * _T19;
  void * _T1A;
  void * _T1B;
  struct Cyc_Tcpat_EqAnonEnum_Tcpat_PatTest_struct * _T1C;
  void * _T1D;
  struct Cyc_Absyn_Pat * _T1E;
  void * _T1F;
  void * _T20;
  long _T21;
  struct Cyc_Absyn_Pat * _T22;
  void * _T23;
  void * _T24;
  long _T25;
  struct Cyc_Warn_String_Warn_Warg_struct _T26;
  int (* _T27)(struct _fat_ptr);
  void * (* _T28)(struct _fat_ptr);
  struct _fat_ptr _T29;
  struct Cyc_Tcpat_NeqNull_Tcpat_PatTest_struct * _T2A;
  struct Cyc_Tcpat_NeqNull_Tcpat_PatTest_struct * _T2B;
  void * _T2C;
  struct Cyc_Absyn_Datatypedecl * _T2D;
  long _T2E;
  struct Cyc_Tcpat_EqExtensibleDatatype_Tcpat_PatTest_struct * _T2F;
  void * _T30;
  struct Cyc_Tcpat_EqDatatypeTag_Tcpat_PatTest_struct * _T31;
  struct Cyc_Absyn_Datatypedecl * _T32;
  struct Cyc_Absyn_Datatypefield * _T33;
  struct _tuple2 * _T34;
  unsigned int _T35;
  void * _T36;
  void * _T37;
  void * _T38;
  int * _T39;
  int _T3A;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T3B;
  void * _T3C;
  int * _T3D;
  int _T3E;
  void * _T3F;
  struct Cyc_Absyn_Aggrdecl * _T40;
  struct Cyc_Absyn_AggrdeclImpl * _T41;
  struct Cyc_Absyn_AggrdeclImpl * _T42;
  long _T43;
  struct Cyc_Warn_String_Warn_Warg_struct _T44;
  int (* _T45)(struct _fat_ptr);
  void * (* _T46)(struct _fat_ptr);
  struct _fat_ptr _T47;
  struct Cyc_List_List * _T48;
  void * _T49;
  struct _tuple18 * _T4A;
  struct _tuple18 _T4B;
  struct Cyc_List_List * _T4C;
  struct Cyc_List_List * _T4D;
  int * _T4E;
  int _T4F;
  struct Cyc_Tcpat_EqTaggedUnion_Tcpat_PatTest_struct * _T50;
  void * _T51;
  struct Cyc_Warn_String_Warn_Warg_struct _T52;
  int (* _T53)(struct _fat_ptr);
  void * (* _T54)(struct _fat_ptr);
  struct _fat_ptr _T55;
  struct Cyc_Warn_String_Warn_Warg_struct _T56;
  int (* _T57)(struct _fat_ptr);
  void * (* _T58)(struct _fat_ptr);
  struct _fat_ptr _T59;
  struct Cyc_Warn_String_Warn_Warg_struct _T5A;
  int (* _T5B)(struct _fat_ptr);
  void * (* _T5C)(struct _fat_ptr);
  struct _fat_ptr _T5D;
  struct Cyc_Absyn_Pat * _T5E;
  struct Cyc_Absyn_Exp * _T5F;
  _T0 = pw;
  _T1 = _T0.where_clause;
  _T2 = _T1.tag;
  if (_T2 != 2) { goto _TL147;
  }
  _T3 = pw;
  _T4 = _T3.where_clause;
  _T5F = _T4.val;
  { struct Cyc_Absyn_Exp * e = _T5F;
    { struct Cyc_Tcpat_WhereTest_Tcpat_PatTest_struct * _T60 = _cycalloc(sizeof(struct Cyc_Tcpat_WhereTest_Tcpat_PatTest_struct));
      _T60->tag = 0;
      _T60->f1 = e;
      _T5 = (struct Cyc_Tcpat_WhereTest_Tcpat_PatTest_struct *)_T60;
    }_T6 = (void *)_T5;
    return _T6;
  }_TL147: _T7 = pw;
  _T8 = _T7.pattern;
  _T5E = _T8.val;
  { struct Cyc_Absyn_Pat * p = _T5E;
    _T9 = p;
    { void * _T60 = _T9->r;
      struct Cyc_List_List * _T61;
      struct Cyc_Absyn_Datatypefield * _T62;
      struct Cyc_Absyn_Enumfield * _T63;
      struct _fat_ptr _T64;
      char _T65;
      int _T66;
      enum Cyc_Absyn_Sign _T67;
      void * _T68;
      _TA = (int *)_T60;
      _TB = *_TA;
      switch (_TB) {
      case 1: 
	{ struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct * _T69 = (struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct *)_T60;
	  _T68 = _T69->f2;
	}{ struct Cyc_Absyn_Pat * p1 = _T68;
	  _T68 = p1;
	  goto _LL9;
	}
      case 3: 
	{ struct Cyc_Absyn_Reference_p_Absyn_Raw_pat_struct * _T69 = (struct Cyc_Absyn_Reference_p_Absyn_Raw_pat_struct *)_T60;
	  _T68 = _T69->f2;
	}_LL9: { struct Cyc_Absyn_Pat * p1 = _T68;
	  { union Cyc_Tcpat_PatOrWhere _T69;
	    (_T69.pattern).tag = 1U;
	    (_T69.pattern).val = p1;
	    _TC = _T69;
	  }_TD = Cyc_Tcpat_get_pat_test(_TC);
	  return _TD;
	}
      case 8: 
	_TE = &Cyc_Tcpat_EqNull_val;
	_TF = (struct Cyc_Tcpat_EqNull_Tcpat_PatTest_struct *)_TE;
	_T10 = (void *)_TF;
	return _T10;
      case 9: 
	{ struct Cyc_Absyn_Int_p_Absyn_Raw_pat_struct * _T69 = (struct Cyc_Absyn_Int_p_Absyn_Raw_pat_struct *)_T60;
	  _T67 = _T69->f1;
	  _T66 = _T69->f2;
	}{ enum Cyc_Absyn_Sign s = _T67;
	  int i = _T66;
	  { struct Cyc_Tcpat_EqConst_Tcpat_PatTest_struct * _T69 = _cycalloc(sizeof(struct Cyc_Tcpat_EqConst_Tcpat_PatTest_struct));
	    _T69->tag = 6;
	    _T12 = i;
	    _T69->f1 = (unsigned int)_T12;
	    _T11 = (struct Cyc_Tcpat_EqConst_Tcpat_PatTest_struct *)_T69;
	  }_T13 = (void *)_T11;
	  return _T13;
	}
      case 10: 
	{ struct Cyc_Absyn_Char_p_Absyn_Raw_pat_struct * _T69 = (struct Cyc_Absyn_Char_p_Absyn_Raw_pat_struct *)_T60;
	  _T65 = _T69->f1;
	}{ char c = _T65;
	  { struct Cyc_Tcpat_EqConst_Tcpat_PatTest_struct * _T69 = _cycalloc(sizeof(struct Cyc_Tcpat_EqConst_Tcpat_PatTest_struct));
	    _T69->tag = 6;
	    _T15 = c;
	    _T69->f1 = (unsigned int)_T15;
	    _T14 = (struct Cyc_Tcpat_EqConst_Tcpat_PatTest_struct *)_T69;
	  }_T16 = (void *)_T14;
	  return _T16;
	}
      case 11: 
	{ struct Cyc_Absyn_Float_p_Absyn_Raw_pat_struct * _T69 = (struct Cyc_Absyn_Float_p_Absyn_Raw_pat_struct *)_T60;
	  _T64 = _T69->f1;
	  _T66 = _T69->f2;
	}{ struct _fat_ptr f = _T64;
	  int i = _T66;
	  { struct Cyc_Tcpat_EqFloat_Tcpat_PatTest_struct * _T69 = _cycalloc(sizeof(struct Cyc_Tcpat_EqFloat_Tcpat_PatTest_struct));
	    _T69->tag = 5;
	    _T69->f1 = f;
	    _T69->f2 = i;
	    _T17 = (struct Cyc_Tcpat_EqFloat_Tcpat_PatTest_struct *)_T69;
	  }_T18 = (void *)_T17;
	  return _T18;
	}
      case 12: 
	{ struct Cyc_Absyn_Enum_p_Absyn_Raw_pat_struct * _T69 = (struct Cyc_Absyn_Enum_p_Absyn_Raw_pat_struct *)_T60;
	  _T68 = _T69->f1;
	  _T63 = _T69->f2;
	}{ struct Cyc_Absyn_Enumdecl * ed = _T68;
	  struct Cyc_Absyn_Enumfield * ef = _T63;
	  { struct Cyc_Tcpat_EqEnum_Tcpat_PatTest_struct * _T69 = _cycalloc(sizeof(struct Cyc_Tcpat_EqEnum_Tcpat_PatTest_struct));
	    _T69->tag = 3;
	    _T69->f1 = ed;
	    _T69->f2 = ef;
	    _T19 = (struct Cyc_Tcpat_EqEnum_Tcpat_PatTest_struct *)_T69;
	  }_T1A = (void *)_T19;
	  return _T1A;
	}
      case 13: 
	{ struct Cyc_Absyn_AnonEnum_p_Absyn_Raw_pat_struct * _T69 = (struct Cyc_Absyn_AnonEnum_p_Absyn_Raw_pat_struct *)_T60;
	  _T1B = _T69->f1;
	  _T68 = (void *)_T1B;
	  _T63 = _T69->f2;
	}{ void * t = _T68;
	  struct Cyc_Absyn_Enumfield * ef = _T63;
	  { struct Cyc_Tcpat_EqAnonEnum_Tcpat_PatTest_struct * _T69 = _cycalloc(sizeof(struct Cyc_Tcpat_EqAnonEnum_Tcpat_PatTest_struct));
	    _T69->tag = 4;
	    _T69->f1 = t;
	    _T69->f2 = ef;
	    _T1C = (struct Cyc_Tcpat_EqAnonEnum_Tcpat_PatTest_struct *)_T69;
	  }_T1D = (void *)_T1C;
	  return _T1D;
	}
      case 5: 
	_T1E = p;
	_T1F = _T1E->topt;
	_T20 = _check_null(_T1F);
	_T21 = Cyc_Tcutil_is_pointer_type(_T20);
	if (_T21) { goto _TL14D;
	}else { goto _TL14C;
	}
	_TL14D: _T22 = p;
	_T23 = _T22->topt;
	_T24 = _check_null(_T23);
	_T25 = Cyc_Tcutil_is_nullable_pointer_type(_T24,0);
	if (_T25) { goto _TL14A;
	}else { goto _TL14C;
	}
	_TL14C: { struct Cyc_Warn_String_Warn_Warg_struct _T69;
	  _T69.tag = 0;
	  _T69.f1 = _tag_fat("non-null pointer type or non-pointer type in pointer pattern",
			     sizeof(char),61U);
	  _T26 = _T69;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T69 = _T26;
	  void * _T6A[1];
	  _T6A[0] = &_T69;
	  _T28 = Cyc_Warn_impos2;
	  { int (* _T6B)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T28;
	    _T27 = _T6B;
	  }_T29 = _tag_fat(_T6A,sizeof(void *),1);
	  _T27(_T29);
	}goto _TL14B;
	_TL14A: _TL14B: _T2A = &Cyc_Tcpat_NeqNull_val;
	_T2B = (struct Cyc_Tcpat_NeqNull_Tcpat_PatTest_struct *)_T2A;
	_T2C = (void *)_T2B;
	return _T2C;
      case 7: 
	{ struct Cyc_Absyn_Datatype_p_Absyn_Raw_pat_struct * _T69 = (struct Cyc_Absyn_Datatype_p_Absyn_Raw_pat_struct *)_T60;
	  _T68 = _T69->f1;
	  _T62 = _T69->f2;
	}{ struct Cyc_Absyn_Datatypedecl * ddecl = _T68;
	  struct Cyc_Absyn_Datatypefield * df = _T62;
	  _T2D = ddecl;
	  _T2E = _T2D->is_extensible;
	  if (! _T2E) { goto _TL14E;
	  }
	  { struct Cyc_Tcpat_EqExtensibleDatatype_Tcpat_PatTest_struct * _T69 = _cycalloc(sizeof(struct Cyc_Tcpat_EqExtensibleDatatype_Tcpat_PatTest_struct));
	    _T69->tag = 9;
	    _T69->f1 = ddecl;
	    _T69->f2 = df;
	    _T2F = (struct Cyc_Tcpat_EqExtensibleDatatype_Tcpat_PatTest_struct *)_T69;
	  }_T30 = (void *)_T2F;
	  return _T30;
	  _TL14E: { struct Cyc_Tcpat_EqDatatypeTag_Tcpat_PatTest_struct * _T69 = _cycalloc(sizeof(struct Cyc_Tcpat_EqDatatypeTag_Tcpat_PatTest_struct));
	    _T69->tag = 7;
	    _T32 = ddecl;
	    _T33 = df;
	    _T34 = _T33->name;
	    _T35 = Cyc_Tcpat_datatype_tag_number(_T32,_T34);
	    _T69->f1 = (int)_T35;
	    _T69->f2 = ddecl;
	    _T69->f3 = df;
	    _T31 = (struct Cyc_Tcpat_EqDatatypeTag_Tcpat_PatTest_struct *)_T69;
	  }_T36 = (void *)_T31;
	  return _T36;
	}
      case 6: 
	{ struct Cyc_Absyn_Aggr_p_Absyn_Raw_pat_struct * _T69 = (struct Cyc_Absyn_Aggr_p_Absyn_Raw_pat_struct *)_T60;
	  _T37 = _T69->f1;
	  _T68 = (void *)_T37;
	  _T61 = _T69->f4;
	}_T38 = (void *)_T68;
	if (_T38 == 0) { goto _TL150;
	}
	{ void * atype = _T68;
	  struct Cyc_List_List * dlps = _T61;
	  void * _T69 = Cyc_Absyn_compress(atype);
	  union Cyc_Absyn_AggrInfo _T6A;
	  _T39 = (int *)_T69;
	  _T3A = *_T39;
	  if (_T3A != 0) { goto _TL152;
	  }
	  _T3B = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T69;
	  _T3C = _T3B->f1;
	  _T3D = (int *)_T3C;
	  _T3E = *_T3D;
	  if (_T3E != 24) { goto _TL154;
	  }
	  { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T6B = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T69;
	    _T3F = _T6B->f1;
	    { struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct * _T6C = (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct *)_T3F;
	      _T6A = _T6C->f1;
	    }
	  }{ union Cyc_Absyn_AggrInfo info = _T6A;
	    struct Cyc_Absyn_Aggrdecl * ad = Cyc_Absyn_get_known_aggrdecl(info);
	    _T40 = ad;
	    _T41 = _T40->impl;
	    _T42 = _check_null(_T41);
	    _T43 = _T42->tagged;
	    if (_T43) { goto _TL156;
	    }else { goto _TL158;
	    }
	    _TL158: { struct Cyc_Warn_String_Warn_Warg_struct _T6B;
	      _T6B.tag = 0;
	      _T6B.f1 = _tag_fat("non-tagged aggregate in pattern test",sizeof(char),
				 37U);
	      _T44 = _T6B;
	    }{ struct Cyc_Warn_String_Warn_Warg_struct _T6B = _T44;
	      void * _T6C[1];
	      _T6C[0] = &_T6B;
	      _T46 = Cyc_Warn_impos2;
	      { int (* _T6D)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T46;
		_T45 = _T6D;
	      }_T47 = _tag_fat(_T6C,sizeof(void *),1);
	      _T45(_T47);
	    }goto _TL157;
	    _TL156: _TL157: _T48 = _check_null(dlps);
	    _T49 = _T48->hd;
	    _T4A = (struct _tuple18 *)_T49;
	    _T4B = *_T4A;
	    _T4C = _T4B.f0;
	    _T4D = _check_null(_T4C);
	    { void * _T6B = _T4D->hd;
	      struct _fat_ptr * _T6C;
	      _T4E = (int *)_T6B;
	      _T4F = *_T4E;
	      if (_T4F != 1) { goto _TL159;
	      }
	      { struct Cyc_Absyn_FieldName_Absyn_Designator_struct * _T6D = (struct Cyc_Absyn_FieldName_Absyn_Designator_struct *)_T6B;
		_T6C = _T6D->f1;
	      }{ struct _fat_ptr * f = _T6C;
		{ struct Cyc_Tcpat_EqTaggedUnion_Tcpat_PatTest_struct * _T6D = _cycalloc(sizeof(struct Cyc_Tcpat_EqTaggedUnion_Tcpat_PatTest_struct));
		  _T6D->tag = 8;
		  _T6D->f1 = atype;
		  _T6D->f2 = f;
		  _T6D->f3 = Cyc_Tcpat_get_member_offset(ad,f);
		  _T50 = (struct Cyc_Tcpat_EqTaggedUnion_Tcpat_PatTest_struct *)_T6D;
		}_T51 = (void *)_T50;
		return _T51;
	      }_TL159: { struct Cyc_Warn_String_Warn_Warg_struct _T6D;
		_T6D.tag = 0;
		_T6D.f1 = _tag_fat("no field name in tagged union pattern",
				   sizeof(char),38U);
		_T52 = _T6D;
	      }{ struct Cyc_Warn_String_Warn_Warg_struct _T6D = _T52;
		void * _T6E[1];
		_T6E[0] = &_T6D;
		_T54 = Cyc_Warn_impos2;
		{ int (* _T6F)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T54;
		  _T53 = _T6F;
		}_T55 = _tag_fat(_T6E,sizeof(void *),1);
		_T53(_T55);
	      };
	    }
	  }goto _TL155;
	  _TL154: goto _LL21;
	  _TL155: goto _TL153;
	  _TL152: _LL21: { struct Cyc_Warn_String_Warn_Warg_struct _T6B;
	    _T6B.tag = 0;
	    _T6B.f1 = _tag_fat("non-tagged aggregate in pattern test",sizeof(char),
			       37U);
	    _T56 = _T6B;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T6B = _T56;
	    void * _T6C[1];
	    _T6C[0] = &_T6B;
	    _T58 = Cyc_Warn_impos2;
	    { int (* _T6D)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T58;
	      _T57 = _T6D;
	    }_T59 = _tag_fat(_T6C,sizeof(void *),1);
	    _T57(_T59);
	  }_TL153: ;
	}goto _TL151;
	_TL150: goto _LL1C;
	_TL151: ;
      default: 
	_LL1C: { struct Cyc_Warn_String_Warn_Warg_struct _T69;
	  _T69.tag = 0;
	  _T69.f1 = _tag_fat("non-test pattern in pattern test",sizeof(char),
			     33U);
	  _T5A = _T69;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T69 = _T5A;
	  void * _T6A[1];
	  _T6A[0] = &_T69;
	  _T5C = Cyc_Warn_impos2;
	  { int (* _T6B)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T5C;
	    _T5B = _T6B;
	  }_T5D = _tag_fat(_T6A,sizeof(void *),1);
	  _T5B(_T5D);
	}
      }
      ;
    }
  };
}
static union Cyc_Tcpat_PatOrWhere Cyc_Tcpat_pw(struct Cyc_Absyn_Pat * p) {
  union Cyc_Tcpat_PatOrWhere _T0;
  { union Cyc_Tcpat_PatOrWhere _T1;
    (_T1.pattern).tag = 1U;
    (_T1.pattern).val = p;
    _T0 = _T1;
  }return _T0;
}
static struct Cyc_Tcpat_Con_s * Cyc_Tcpat_null_con(struct Cyc_Absyn_Pat * p) {
  struct Cyc_Tcpat_Con_s * _T0;
  struct _fat_ptr _T1;
  { struct Cyc_Tcpat_Con_s * _T2 = _cycalloc(sizeof(struct Cyc_Tcpat_Con_s));
    _T1 = _tag_fat("NULL",sizeof(char),5U);
    _T2->name = Cyc_Tcpat_Name_v(_T1);
    _T2->arity = 0;
    _T2->span = &Cyc_Tcpat_two_opt;
    _T2->orig_pat = Cyc_Tcpat_pw(p);
    _T0 = (struct Cyc_Tcpat_Con_s *)_T2;
  }return _T0;
}
static struct Cyc_Tcpat_Con_s * Cyc_Tcpat_null_ptr_con(struct Cyc_Absyn_Pat * p) {
  struct Cyc_Tcpat_Con_s * _T0;
  struct _fat_ptr _T1;
  { struct Cyc_Tcpat_Con_s * _T2 = _cycalloc(sizeof(struct Cyc_Tcpat_Con_s));
    _T1 = _tag_fat("&",sizeof(char),2U);
    _T2->name = Cyc_Tcpat_Name_v(_T1);
    _T2->arity = 1;
    _T2->span = &Cyc_Tcpat_two_opt;
    _T2->orig_pat = Cyc_Tcpat_pw(p);
    _T0 = (struct Cyc_Tcpat_Con_s *)_T2;
  }return _T0;
}
static struct Cyc_Tcpat_Con_s * Cyc_Tcpat_ptr_con(struct Cyc_Absyn_Pat * p) {
  struct Cyc_Tcpat_Con_s * _T0;
  struct _fat_ptr _T1;
  { struct Cyc_Tcpat_Con_s * _T2 = _cycalloc(sizeof(struct Cyc_Tcpat_Con_s));
    _T1 = _tag_fat("&",sizeof(char),2U);
    _T2->name = Cyc_Tcpat_Name_v(_T1);
    _T2->arity = 1;
    _T2->span = &Cyc_Tcpat_one_opt;
    _T2->orig_pat = Cyc_Tcpat_pw(p);
    _T0 = (struct Cyc_Tcpat_Con_s *)_T2;
  }return _T0;
}
static struct Cyc_Tcpat_Con_s * Cyc_Tcpat_int_con(int i,union Cyc_Tcpat_PatOrWhere p) {
  struct Cyc_Tcpat_Con_s * _T0;
  { struct Cyc_Tcpat_Con_s * _T1 = _cycalloc(sizeof(struct Cyc_Tcpat_Con_s));
    _T1->name = Cyc_Tcpat_Int_v(i);
    _T1->arity = 0;
    _T1->span = 0;
    _T1->orig_pat = p;
    _T0 = (struct Cyc_Tcpat_Con_s *)_T1;
  }return _T0;
}
static struct Cyc_Tcpat_Con_s * Cyc_Tcpat_float_con(struct _fat_ptr f,struct Cyc_Absyn_Pat * p) {
  struct Cyc_Tcpat_Con_s * _T0;
  { struct Cyc_Tcpat_Con_s * _T1 = _cycalloc(sizeof(struct Cyc_Tcpat_Con_s));
    _T1->name = Cyc_Tcpat_Name_v(f);
    _T1->arity = 0;
    _T1->span = 0;
    _T1->orig_pat = Cyc_Tcpat_pw(p);
    _T0 = (struct Cyc_Tcpat_Con_s *)_T1;
  }return _T0;
}
static struct Cyc_Tcpat_Con_s * Cyc_Tcpat_char_con(char c,struct Cyc_Absyn_Pat * p) {
  struct Cyc_Tcpat_Con_s * _T0;
  char _T1;
  int _T2;
  { struct Cyc_Tcpat_Con_s * _T3 = _cycalloc(sizeof(struct Cyc_Tcpat_Con_s));
    _T1 = c;
    _T2 = (int)_T1;
    _T3->name = Cyc_Tcpat_Int_v(_T2);
    _T3->arity = 0;
    _T3->span = &Cyc_Tcpat_twofiftysix_opt;
    _T3->orig_pat = Cyc_Tcpat_pw(p);
    _T0 = (struct Cyc_Tcpat_Con_s *)_T3;
  }return _T0;
}
static struct Cyc_Tcpat_Con_s * Cyc_Tcpat_tuple_con(int i,union Cyc_Tcpat_PatOrWhere p) {
  struct Cyc_Tcpat_Con_s * _T0;
  struct _fat_ptr _T1;
  { struct Cyc_Tcpat_Con_s * _T2 = _cycalloc(sizeof(struct Cyc_Tcpat_Con_s));
    _T1 = _tag_fat("$",sizeof(char),2U);
    _T2->name = Cyc_Tcpat_Name_v(_T1);
    _T2->arity = i;
    _T2->span = &Cyc_Tcpat_one_opt;
    _T2->orig_pat = p;
    _T0 = (struct Cyc_Tcpat_Con_s *)_T2;
  }return _T0;
}
static void * Cyc_Tcpat_null_pat(struct Cyc_Absyn_Pat * p) {
  struct Cyc_Tcpat_Con_Tcpat_Simple_pat_struct * _T0;
  void * _T1;
  { struct Cyc_Tcpat_Con_Tcpat_Simple_pat_struct * _T2 = _cycalloc(sizeof(struct Cyc_Tcpat_Con_Tcpat_Simple_pat_struct));
    _T2->tag = 1;
    _T2->f1 = Cyc_Tcpat_null_con(p);
    _T2->f2 = 0;
    _T0 = (struct Cyc_Tcpat_Con_Tcpat_Simple_pat_struct *)_T2;
  }_T1 = (void *)_T0;
  return _T1;
}
static void * Cyc_Tcpat_int_pat(int i,union Cyc_Tcpat_PatOrWhere p) {
  struct Cyc_Tcpat_Con_Tcpat_Simple_pat_struct * _T0;
  void * _T1;
  { struct Cyc_Tcpat_Con_Tcpat_Simple_pat_struct * _T2 = _cycalloc(sizeof(struct Cyc_Tcpat_Con_Tcpat_Simple_pat_struct));
    _T2->tag = 1;
    _T2->f1 = Cyc_Tcpat_int_con(i,p);
    _T2->f2 = 0;
    _T0 = (struct Cyc_Tcpat_Con_Tcpat_Simple_pat_struct *)_T2;
  }_T1 = (void *)_T0;
  return _T1;
}
static void * Cyc_Tcpat_char_pat(char c,struct Cyc_Absyn_Pat * p) {
  struct Cyc_Tcpat_Con_Tcpat_Simple_pat_struct * _T0;
  void * _T1;
  { struct Cyc_Tcpat_Con_Tcpat_Simple_pat_struct * _T2 = _cycalloc(sizeof(struct Cyc_Tcpat_Con_Tcpat_Simple_pat_struct));
    _T2->tag = 1;
    _T2->f1 = Cyc_Tcpat_char_con(c,p);
    _T2->f2 = 0;
    _T0 = (struct Cyc_Tcpat_Con_Tcpat_Simple_pat_struct *)_T2;
  }_T1 = (void *)_T0;
  return _T1;
}
static void * Cyc_Tcpat_float_pat(struct _fat_ptr f,struct Cyc_Absyn_Pat * p) {
  struct Cyc_Tcpat_Con_Tcpat_Simple_pat_struct * _T0;
  void * _T1;
  { struct Cyc_Tcpat_Con_Tcpat_Simple_pat_struct * _T2 = _cycalloc(sizeof(struct Cyc_Tcpat_Con_Tcpat_Simple_pat_struct));
    _T2->tag = 1;
    _T2->f1 = Cyc_Tcpat_float_con(f,p);
    _T2->f2 = 0;
    _T0 = (struct Cyc_Tcpat_Con_Tcpat_Simple_pat_struct *)_T2;
  }_T1 = (void *)_T0;
  return _T1;
}
static void * Cyc_Tcpat_null_ptr_pat(void * p,struct Cyc_Absyn_Pat * p0) {
  struct Cyc_Tcpat_Con_Tcpat_Simple_pat_struct * _T0;
  struct Cyc_List_List * _T1;
  void * _T2;
  { struct Cyc_Tcpat_Con_Tcpat_Simple_pat_struct * _T3 = _cycalloc(sizeof(struct Cyc_Tcpat_Con_Tcpat_Simple_pat_struct));
    _T3->tag = 1;
    _T3->f1 = Cyc_Tcpat_null_ptr_con(p0);
    { struct Cyc_List_List * _T4 = _cycalloc(sizeof(struct Cyc_List_List));
      _T4->hd = p;
      _T4->tl = 0;
      _T1 = (struct Cyc_List_List *)_T4;
    }_T3->f2 = _T1;
    _T0 = (struct Cyc_Tcpat_Con_Tcpat_Simple_pat_struct *)_T3;
  }_T2 = (void *)_T0;
  return _T2;
}
static void * Cyc_Tcpat_ptr_pat(void * p,struct Cyc_Absyn_Pat * p0) {
  struct Cyc_Tcpat_Con_Tcpat_Simple_pat_struct * _T0;
  struct Cyc_List_List * _T1;
  void * _T2;
  { struct Cyc_Tcpat_Con_Tcpat_Simple_pat_struct * _T3 = _cycalloc(sizeof(struct Cyc_Tcpat_Con_Tcpat_Simple_pat_struct));
    _T3->tag = 1;
    _T3->f1 = Cyc_Tcpat_ptr_con(p0);
    { struct Cyc_List_List * _T4 = _cycalloc(sizeof(struct Cyc_List_List));
      _T4->hd = p;
      _T4->tl = 0;
      _T1 = (struct Cyc_List_List *)_T4;
    }_T3->f2 = _T1;
    _T0 = (struct Cyc_Tcpat_Con_Tcpat_Simple_pat_struct *)_T3;
  }_T2 = (void *)_T0;
  return _T2;
}
static void * Cyc_Tcpat_tuple_pat(struct Cyc_List_List * ss,union Cyc_Tcpat_PatOrWhere p) {
  struct Cyc_Tcpat_Con_Tcpat_Simple_pat_struct * _T0;
  int _T1;
  union Cyc_Tcpat_PatOrWhere _T2;
  void * _T3;
  { struct Cyc_Tcpat_Con_Tcpat_Simple_pat_struct * _T4 = _cycalloc(sizeof(struct Cyc_Tcpat_Con_Tcpat_Simple_pat_struct));
    _T4->tag = 1;
    _T1 = Cyc_List_length(ss);
    _T2 = p;
    _T4->f1 = Cyc_Tcpat_tuple_con(_T1,_T2);
    _T4->f2 = ss;
    _T0 = (struct Cyc_Tcpat_Con_Tcpat_Simple_pat_struct *)_T4;
  }_T3 = (void *)_T0;
  return _T3;
}
static void * Cyc_Tcpat_con_pat(struct _fat_ptr con_name,int * span,struct Cyc_List_List * ps,
				struct Cyc_Absyn_Pat * p) {
  struct Cyc_Tcpat_Con_s * _T0;
  struct Cyc_Tcpat_Con_s * _T1;
  struct Cyc_Tcpat_Con_s * _T2;
  struct Cyc_Tcpat_Con_s * _T3;
  struct Cyc_Tcpat_Con_Tcpat_Simple_pat_struct * _T4;
  void * _T5;
  struct Cyc_Tcpat_Con_s * c;
  c = _cycalloc(sizeof(struct Cyc_Tcpat_Con_s));
  _T0 = c;
  _T0->name = Cyc_Tcpat_Name_v(con_name);
  _T1 = c;
  _T1->arity = Cyc_List_length(ps);
  _T2 = c;
  _T2->span = span;
  _T3 = c;
  _T3->orig_pat = Cyc_Tcpat_pw(p);
  { struct Cyc_Tcpat_Con_Tcpat_Simple_pat_struct * _T6 = _cycalloc(sizeof(struct Cyc_Tcpat_Con_Tcpat_Simple_pat_struct));
    _T6->tag = 1;
    _T6->f1 = c;
    _T6->f2 = ps;
    _T4 = (struct Cyc_Tcpat_Con_Tcpat_Simple_pat_struct *)_T6;
  }_T5 = (void *)_T4;
  return _T5;
}
static void * Cyc_Tcpat_compile_pat(struct Cyc_Absyn_Pat * p) {
  struct Cyc_Absyn_Pat * _T0;
  int * _T1;
  unsigned int _T2;
  struct Cyc_Tcpat_Any_Tcpat_Simple_pat_struct * _T3;
  int _T4;
  union Cyc_Tcpat_PatOrWhere _T5;
  struct Cyc_Absyn_Pat * _T6;
  void * _T7;
  void * _T8;
  int * _T9;
  int _TA;
  struct Cyc_Absyn_PtrInfo _TB;
  struct Cyc_Absyn_PtrAtts _TC;
  void * _TD;
  long _TE;
  struct Cyc_Warn_String_Warn_Warg_struct _TF;
  int (* _T10)(struct _fat_ptr);
  void * (* _T11)(struct _fat_ptr);
  struct _fat_ptr _T12;
  struct Cyc_Absyn_Pat * _T13;
  void * _T14;
  void * _T15;
  int * _T16;
  int _T17;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T18;
  void * _T19;
  int * _T1A;
  unsigned int _T1B;
  int * _T1C;
  struct Cyc_Absyn_Datatypedecl * _T1D;
  long _T1E;
  int * _T1F;
  struct Cyc_Absyn_Datatypedecl * _T20;
  struct Cyc_Core_Opt * _T21;
  struct Cyc_Core_Opt * _T22;
  void * _T23;
  struct Cyc_List_List * _T24;
  struct Cyc_Warn_String_Warn_Warg_struct _T25;
  int (* _T26)(struct _fat_ptr);
  void * (* _T27)(struct _fat_ptr);
  struct _fat_ptr _T28;
  struct Cyc_Absyn_Datatypefield * _T29;
  struct _tuple2 * _T2A;
  struct _tuple2 _T2B;
  struct _fat_ptr * _T2C;
  struct _fat_ptr _T2D;
  int * _T2E;
  struct Cyc_List_List * (* _T2F)(void * (*)(struct Cyc_Absyn_Pat *),struct Cyc_List_List *);
  struct Cyc_List_List * (* _T30)(void * (*)(void *),struct Cyc_List_List *);
  struct Cyc_List_List * _T31;
  struct Cyc_List_List * _T32;
  struct Cyc_Absyn_Pat * _T33;
  void * _T34;
  void * _T35;
  int * _T36;
  unsigned int _T37;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T38;
  void * _T39;
  int * _T3A;
  int _T3B;
  void * _T3C;
  struct Cyc_Absyn_Aggrdecl * _T3D;
  struct Cyc_Absyn_Aggrdecl * _T3E;
  struct Cyc_Absyn_AggrdeclImpl * _T3F;
  struct Cyc_Absyn_AggrdeclImpl * _T40;
  struct Cyc_Absyn_Aggrdecl * _T41;
  struct Cyc_Absyn_AggrdeclImpl * _T42;
  struct Cyc_Warn_String_Warn_Warg_struct _T43;
  int (* _T44)(struct _fat_ptr);
  void * (* _T45)(struct _fat_ptr);
  struct _fat_ptr _T46;
  enum Cyc_Absyn_AggrKind _T47;
  int _T48;
  struct Cyc_List_List * _T49;
  void * _T4A;
  struct Cyc_Absyn_Aggrfield * _T4B;
  struct _fat_ptr * _T4C;
  struct _fat_ptr _T4D;
  struct _fat_ptr _T4E;
  int _T4F;
  long _T50;
  struct Cyc_List_List * _T51;
  void * _T52;
  struct Cyc_List_List * _T53;
  struct Cyc_List_List * _T54;
  void * _T55;
  int * _T56;
  int _T57;
  struct Cyc_List_List * _T58;
  struct Cyc_List_List * _T59;
  struct Cyc_List_List * _T5A;
  struct Cyc_List_List * _T5B;
  void * _T5C;
  struct _fat_ptr * _T5D;
  struct Cyc_List_List * _T5E;
  void * _T5F;
  struct Cyc_Absyn_Aggrfield * _T60;
  struct _fat_ptr * _T61;
  int _T62;
  struct Cyc_List_List * _T63;
  struct Cyc_Warn_String_Warn_Warg_struct _T64;
  int (* _T65)(struct _fat_ptr);
  void * (* _T66)(struct _fat_ptr);
  struct _fat_ptr _T67;
  struct Cyc_List_List * _T68;
  long _T69;
  struct Cyc_Warn_String_Warn_Warg_struct _T6A;
  int (* _T6B)(struct _fat_ptr);
  void * (* _T6C)(struct _fat_ptr);
  struct _fat_ptr _T6D;
  struct Cyc_List_List * _T6E;
  struct Cyc_List_List * _T6F;
  union Cyc_Tcpat_PatOrWhere _T70;
  long _T71;
  struct Cyc_Warn_String_Warn_Warg_struct _T72;
  struct Cyc_Absyn_Pat * _T73;
  unsigned int _T74;
  struct _fat_ptr _T75;
  int * _T76;
  struct Cyc_List_List * _T77;
  struct Cyc_List_List * _T78;
  struct _tuple18 * _T79;
  struct _tuple18 * _T7A;
  struct Cyc_List_List * _T7B;
  struct Cyc_List_List * _T7C;
  struct Cyc_List_List * _T7D;
  struct _tuple18 * _T7E;
  struct _tuple18 * _T7F;
  struct Cyc_List_List * _T80;
  struct Cyc_List_List * _T81;
  void * _T82;
  int * _T83;
  int _T84;
  struct Cyc_List_List * _T85;
  struct Cyc_List_List * _T86;
  struct _tuple18 * _T87;
  struct _tuple18 * _T88;
  struct Cyc_List_List * _T89;
  struct Cyc_List_List * _T8A;
  struct Cyc_List_List * _T8B;
  struct Cyc_List_List * _T8C;
  struct Cyc_List_List * _T8D;
  struct Cyc_List_List * _T8E;
  struct Cyc_List_List * _T8F;
  void * _T90;
  struct _tuple18 * _T91;
  struct Cyc_List_List * _T92;
  void * _T93;
  struct _fat_ptr * _T94;
  struct _fat_ptr _T95;
  int * _T96;
  struct Cyc_List_List * _T97;
  struct Cyc_Absyn_Pat * _T98;
  struct Cyc_Warn_String_Warn_Warg_struct _T99;
  int (* _T9A)(struct _fat_ptr);
  void * (* _T9B)(struct _fat_ptr);
  struct _fat_ptr _T9C;
  struct Cyc_Absyn_Enumfield * _T9D;
  struct _tuple2 * _T9E;
  struct _tuple2 _T9F;
  struct _fat_ptr * _TA0;
  struct _fat_ptr _TA1;
  struct Cyc_Absyn_Pat * _TA2;
  struct Cyc_Tcpat_Any_Tcpat_Simple_pat_struct * _TA3;
  void * _TA4;
  void * s;
  _T0 = p;
  { void * _TA5 = _T0->r;
    struct Cyc_Absyn_Enumfield * _TA6;
    struct Cyc_List_List * _TA7;
    struct Cyc_Absyn_Datatypefield * _TA8;
    void * _TA9;
    struct _fat_ptr _TAA;
    char _TAB;
    int _TAC;
    enum Cyc_Absyn_Sign _TAD;
    _T1 = (int *)_TA5;
    _T2 = *_T1;
    switch (_T2) {
    case 0: 
      goto _LL4;
    case 2: 
      _LL4: goto _LL6;
    case 4: 
      _LL6: { struct Cyc_Tcpat_Any_Tcpat_Simple_pat_struct * _TAE = _cycalloc(sizeof(struct Cyc_Tcpat_Any_Tcpat_Simple_pat_struct));
	_TAE->tag = 0;
	_T3 = (struct Cyc_Tcpat_Any_Tcpat_Simple_pat_struct *)_TAE;
      }s = (void *)_T3;
      goto _LL0;
    case 8: 
      s = Cyc_Tcpat_null_pat(p);
      goto _LL0;
    case 9: 
      { struct Cyc_Absyn_Int_p_Absyn_Raw_pat_struct * _TAE = (struct Cyc_Absyn_Int_p_Absyn_Raw_pat_struct *)_TA5;
	_TAD = _TAE->f1;
	_TAC = _TAE->f2;
      }{ enum Cyc_Absyn_Sign sn = _TAD;
	int i = _TAC;
	_T4 = i;
	_T5 = Cyc_Tcpat_pw(p);
	s = Cyc_Tcpat_int_pat(_T4,_T5);
	goto _LL0;
      }
    case 10: 
      { struct Cyc_Absyn_Char_p_Absyn_Raw_pat_struct * _TAE = (struct Cyc_Absyn_Char_p_Absyn_Raw_pat_struct *)_TA5;
	_TAB = _TAE->f1;
      }{ char c = _TAB;
	s = Cyc_Tcpat_char_pat(c,p);
	goto _LL0;
      }
    case 11: 
      { struct Cyc_Absyn_Float_p_Absyn_Raw_pat_struct * _TAE = (struct Cyc_Absyn_Float_p_Absyn_Raw_pat_struct *)_TA5;
	_TAA = _TAE->f1;
      }{ struct _fat_ptr f = _TAA;
	s = Cyc_Tcpat_float_pat(f,p);
	goto _LL0;
      }
    case 1: 
      { struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct * _TAE = (struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct *)_TA5;
	_TA9 = _TAE->f2;
      }{ struct Cyc_Absyn_Pat * p2 = _TA9;
	s = Cyc_Tcpat_compile_pat(p2);
	goto _LL0;
      }
    case 3: 
      { struct Cyc_Absyn_Reference_p_Absyn_Raw_pat_struct * _TAE = (struct Cyc_Absyn_Reference_p_Absyn_Raw_pat_struct *)_TA5;
	_TA9 = _TAE->f2;
      }{ struct Cyc_Absyn_Pat * p2 = _TA9;
	s = Cyc_Tcpat_compile_pat(p2);
	goto _LL0;
      }
    case 5: 
      { struct Cyc_Absyn_Pointer_p_Absyn_Raw_pat_struct * _TAE = (struct Cyc_Absyn_Pointer_p_Absyn_Raw_pat_struct *)_TA5;
	_TA9 = _TAE->f1;
      }{ struct Cyc_Absyn_Pat * pp = _TA9;
	_T6 = p;
	_T7 = _T6->topt;
	_T8 = _check_null(_T7);
	{ void * _TAE = Cyc_Absyn_compress(_T8);
	  void * _TAF;
	  _T9 = (int *)_TAE;
	  _TA = *_T9;
	  if (_TA != 4) { goto _TL15C;
	  }
	  { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _TB0 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_TAE;
	    _TB = _TB0->f1;
	    _TC = _TB.ptr_atts;
	    _TAF = _TC.nullable;
	  }{ void * n = _TAF;
	    long is_nullable = Cyc_Tcutil_force_type2bool(0,n);
	    void * ss = Cyc_Tcpat_compile_pat(pp);
	    _TE = is_nullable;
	    if (! _TE) { goto _TL15E;
	    }
	    _TD = Cyc_Tcpat_null_ptr_pat(ss,p);
	    goto _TL15F;
	    _TL15E: _TD = Cyc_Tcpat_ptr_pat(ss,p);
	    _TL15F: s = _TD;
	    goto _LL23;
	  }_TL15C: { struct Cyc_Warn_String_Warn_Warg_struct _TB0;
	    _TB0.tag = 0;
	    _TB0.f1 = _tag_fat("expecting pointertype for pattern!",sizeof(char),
			       35U);
	    _TF = _TB0;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _TB0 = _TF;
	    void * _TB1[1];
	    _TB1[0] = &_TB0;
	    _T11 = Cyc_Warn_impos2;
	    { int (* _TB2)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T11;
	      _T10 = _TB2;
	    }_T12 = _tag_fat(_TB1,sizeof(void *),1);
	    _T10(_T12);
	  }_LL23: ;
	}goto _LL0;
      }
    case 7: 
      { struct Cyc_Absyn_Datatype_p_Absyn_Raw_pat_struct * _TAE = (struct Cyc_Absyn_Datatype_p_Absyn_Raw_pat_struct *)_TA5;
	_TA9 = _TAE->f1;
	_TA8 = _TAE->f2;
	_TA7 = _TAE->f3;
      }{ struct Cyc_Absyn_Datatypedecl * tud = _TA9;
	struct Cyc_Absyn_Datatypefield * tuf = _TA8;
	struct Cyc_List_List * ps = _TA7;
	int * span;
	_T13 = p;
	_T14 = _T13->topt;
	_T15 = _check_null(_T14);
	{ void * _TAE = Cyc_Absyn_compress(_T15);
	  _T16 = (int *)_TAE;
	  _T17 = *_T16;
	  if (_T17 != 0) { goto _TL160;
	  }
	  _T18 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TAE;
	  _T19 = _T18->f1;
	  _T1A = (int *)_T19;
	  _T1B = *_T1A;
	  switch (_T1B) {
	  case 22: 
	    _T1D = tud;
	    _T1E = _T1D->is_extensible;
	    if (! _T1E) { goto _TL163;
	    }
	    _T1C = 0;
	    goto _TL164;
	    _TL163: { int * _TAF = _cycalloc_atomic(sizeof(int));
	      _T20 = tud;
	      _T21 = _T20->fields;
	      _T22 = _check_null(_T21);
	      _T23 = _T22->v;
	      _T24 = (struct Cyc_List_List *)_T23;
	      *_TAF = Cyc_List_length(_T24);
	      _T1F = (int *)_TAF;
	    }_T1C = _T1F;
	    _TL164: span = _T1C;
	    goto _LL28;
	  case 23: 
	    span = &Cyc_Tcpat_one_opt;
	    goto _LL28;
	  default: 
	    goto _LL2D;
	  }
	  goto _TL161;
	  _TL160: _LL2D: { struct Cyc_Warn_String_Warn_Warg_struct _TAF;
	    _TAF.tag = 0;
	    _TAF.f1 = _tag_fat("void datatype pattern has bad type",sizeof(char),
			       35U);
	    _T25 = _TAF;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _TAF = _T25;
	    void * _TB0[1];
	    _TB0[0] = &_TAF;
	    _T27 = Cyc_Warn_impos2;
	    { int (* _TB1)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T27;
	      _T26 = _TB1;
	    }_T28 = _tag_fat(_TB0,sizeof(void *),1);
	    _T26(_T28);
	  }_TL161: _LL28: ;
	}_T29 = tuf;
	_T2A = _T29->name;
	_T2B = *_T2A;
	_T2C = _T2B.f1;
	_T2D = *_T2C;
	_T2E = span;
	_T30 = Cyc_List_map;
	{ struct Cyc_List_List * (* _TAE)(void * (*)(struct Cyc_Absyn_Pat *),
					  struct Cyc_List_List *) = (struct Cyc_List_List * (*)(void * (*)(struct Cyc_Absyn_Pat *),
												struct Cyc_List_List *))_T30;
	  _T2F = _TAE;
	}_T31 = ps;
	_T32 = _T2F(Cyc_Tcpat_compile_pat,_T31);
	_T33 = p;
	s = Cyc_Tcpat_con_pat(_T2D,_T2E,_T32,_T33);
	goto _LL0;
      }
    case 6: 
      { struct Cyc_Absyn_Aggr_p_Absyn_Raw_pat_struct * _TAE = (struct Cyc_Absyn_Aggr_p_Absyn_Raw_pat_struct *)_TA5;
	_T34 = _TAE->f1;
	_TA9 = (void *)_T34;
	_TA7 = _TAE->f4;
      }{ void * atype = _TA9;
	struct Cyc_List_List * dlps = _TA7;
	struct Cyc_List_List * fields;
	enum Cyc_Absyn_AggrKind aggr_kind;
	long is_tagged = 0;
	_T35 = _check_null(atype);
	{ void * _TAE = Cyc_Absyn_compress(_T35);
	  struct Cyc_List_List * _TAF;
	  enum Cyc_Absyn_AggrKind _TB0;
	  union Cyc_Absyn_AggrInfo _TB1;
	  _T36 = (int *)_TAE;
	  _T37 = *_T36;
	  switch (_T37) {
	  case 0: 
	    _T38 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TAE;
	    _T39 = _T38->f1;
	    _T3A = (int *)_T39;
	    _T3B = *_T3A;
	    if (_T3B != 24) { goto _TL166;
	    }
	    { struct Cyc_Absyn_AppType_Absyn_Type_struct * _TB2 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TAE;
	      _T3C = _TB2->f1;
	      { struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct * _TB3 = (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct *)_T3C;
		_TB1 = _TB3->f1;
	      }
	    }{ union Cyc_Absyn_AggrInfo ainfo = _TB1;
	      struct Cyc_Absyn_Aggrdecl * ad = Cyc_Absyn_get_known_aggrdecl(ainfo);
	      _T3D = ad;
	      aggr_kind = _T3D->kind;
	      _T3E = ad;
	      _T3F = _T3E->impl;
	      _T40 = _check_null(_T3F);
	      fields = _T40->fields;
	      _T41 = ad;
	      _T42 = _T41->impl;
	      is_tagged = _T42->tagged;
	      goto _LL2F;
	    }_TL166: goto _LL34;
	  case 7: 
	    { struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct * _TB2 = (struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct *)_TAE;
	      _TB0 = _TB2->f1;
	      _TAF = _TB2->f3;
	    }{ enum Cyc_Absyn_AggrKind ak = _TB0;
	      struct Cyc_List_List * fs = _TAF;
	      aggr_kind = ak;
	      fields = fs;
	      goto _LL2F;
	    }
	  default: 
	    _LL34: { struct Cyc_Warn_String_Warn_Warg_struct _TB2;
	      _TB2.tag = 0;
	      _TB2.f1 = _tag_fat("bad type on aggr pattern",sizeof(char),
				 25U);
	      _T43 = _TB2;
	    }{ struct Cyc_Warn_String_Warn_Warg_struct _TB2 = _T43;
	      void * _TB3[1];
	      _TB3[0] = &_TB2;
	      _T45 = Cyc_Warn_impos2;
	      { int (* _TB4)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T45;
		_T44 = _TB4;
	      }_T46 = _tag_fat(_TB3,sizeof(void *),1);
	      _T44(_T46);
	    }
	  }
	  _LL2F: ;
	}_T47 = aggr_kind;
	_T48 = (int)_T47;
	if (_T48 != 0) { goto _TL168;
	}
	{ struct Cyc_List_List * ps = 0;
	  _TL16D: if (fields != 0) { goto _TL16B;
	  }else { goto _TL16C;
	  }
	  _TL16B: _T49 = fields;
	  _T4A = _T49->hd;
	  _T4B = (struct Cyc_Absyn_Aggrfield *)_T4A;
	  _T4C = _T4B->name;
	  _T4D = *_T4C;
	  _T4E = _tag_fat("",sizeof(char),1U);
	  _T4F = Cyc_strcmp(_T4D,_T4E);
	  { long found = _T4F == 0;
	    { struct Cyc_List_List * dlps0 = dlps;
	      _TL171: _T50 = found;
	      if (_T50) { goto _TL170;
	      }else { goto _TL172;
	      }
	      _TL172: if (dlps0 != 0) { goto _TL16F;
	      }else { goto _TL170;
	      }
	      _TL16F: _T51 = dlps0;
	      _T52 = _T51->hd;
	      { struct _tuple18 * _TAE = (struct _tuple18 *)_T52;
		struct Cyc_Absyn_Pat * _TAF;
		struct Cyc_List_List * _TB0;
		{ struct _tuple18 _TB1 = *_TAE;
		  _TB0 = _TB1.f0;
		  _TAF = _TB1.f1;
		}{ struct Cyc_List_List * dl = _TB0;
		  struct Cyc_Absyn_Pat * p = _TAF;
		  struct _fat_ptr * _TB1;
		  if (dl == 0) { goto _TL173;
		  }
		  _T53 = dl;
		  _T54 = (struct Cyc_List_List *)_T53;
		  _T55 = _T54->hd;
		  _T56 = (int *)_T55;
		  _T57 = *_T56;
		  if (_T57 != 1) { goto _TL175;
		  }
		  _T58 = dl;
		  _T59 = (struct Cyc_List_List *)_T58;
		  _T5A = _T59->tl;
		  if (_T5A != 0) { goto _TL177;
		  }
		  _T5B = dl;
		  { struct Cyc_List_List _TB2 = *_T5B;
		    _T5C = _TB2.hd;
		    { struct Cyc_Absyn_FieldName_Absyn_Designator_struct * _TB3 = (struct Cyc_Absyn_FieldName_Absyn_Designator_struct *)_T5C;
		      _TB1 = _TB3->f1;
		    }
		  }{ struct _fat_ptr * f = _TB1;
		    _T5D = f;
		    _T5E = fields;
		    _T5F = _T5E->hd;
		    _T60 = (struct Cyc_Absyn_Aggrfield *)_T5F;
		    _T61 = _T60->name;
		    _T62 = Cyc_strptrcmp(_T5D,_T61);
		    if (_T62 != 0) { goto _TL179;
		    }
		    { struct Cyc_List_List * _TB2 = _cycalloc(sizeof(struct Cyc_List_List));
		      _TB2->hd = Cyc_Tcpat_compile_pat(p);
		      _TB2->tl = ps;
		      _T63 = (struct Cyc_List_List *)_TB2;
		    }ps = _T63;
		    found = 1;
		    goto _TL17A;
		    _TL179: _TL17A: goto _LL39;
		  }_TL177: goto _LL3C;
		  _TL175: goto _LL3C;
		  _TL173: _LL3C: { struct Cyc_Warn_String_Warn_Warg_struct _TB2;
		    _TB2.tag = 0;
		    _TB2.f1 = _tag_fat("bad designator(s)",sizeof(char),18U);
		    _T64 = _TB2;
		  }{ struct Cyc_Warn_String_Warn_Warg_struct _TB2 = _T64;
		    void * _TB3[1];
		    _TB3[0] = &_TB2;
		    _T66 = Cyc_Warn_impos2;
		    { int (* _TB4)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T66;
		      _T65 = _TB4;
		    }_T67 = _tag_fat(_TB3,sizeof(void *),1);
		    _T65(_T67);
		  }_LL39: ;
		}
	      }_T68 = dlps0;
	      dlps0 = _T68->tl;
	      goto _TL171;
	      _TL170: ;
	    }_T69 = found;
	    if (_T69) { goto _TL17B;
	    }else { goto _TL17D;
	    }
	    _TL17D: { struct Cyc_Warn_String_Warn_Warg_struct _TAE;
	      _TAE.tag = 0;
	      _TAE.f1 = _tag_fat("bad designator",sizeof(char),15U);
	      _T6A = _TAE;
	    }{ struct Cyc_Warn_String_Warn_Warg_struct _TAE = _T6A;
	      void * _TAF[1];
	      _TAF[0] = &_TAE;
	      _T6C = Cyc_Warn_impos2;
	      { int (* _TB0)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T6C;
		_T6B = _TB0;
	      }_T6D = _tag_fat(_TAF,sizeof(void *),1);
	      _T6B(_T6D);
	    }goto _TL17C;
	    _TL17B: _TL17C: ;
	  }_T6E = fields;
	  fields = _T6E->tl;
	  goto _TL16D;
	  _TL16C: _T6F = Cyc_List_imp_rev(ps);
	  _T70 = Cyc_Tcpat_pw(p);
	  s = Cyc_Tcpat_tuple_pat(_T6F,_T70);
	}goto _TL169;
	_TL168: _T71 = is_tagged;
	if (_T71) { goto _TL17E;
	}else { goto _TL180;
	}
	_TL180: { struct Cyc_Warn_String_Warn_Warg_struct _TAE;
	  _TAE.tag = 0;
	  _TAE.f1 = _tag_fat("patterns on untagged unions not yet supported.",
			     sizeof(char),47U);
	  _T72 = _TAE;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _TAE = _T72;
	  void * _TAF[1];
	  _TAF[0] = &_TAE;
	  _T73 = p;
	  _T74 = _T73->loc;
	  _T75 = _tag_fat(_TAF,sizeof(void *),1);
	  Cyc_Warn_err2(_T74,_T75);
	}goto _TL17F;
	_TL17E: _TL17F: { int * span;
	  span = _cycalloc_atomic(sizeof(int));
	  _T76 = span;
	  *_T76 = Cyc_List_length(fields);
	  { struct Cyc_Absyn_Pat * _TAE;
	    struct _fat_ptr * _TAF;
	    if (dlps == 0) { goto _TL181;
	    }
	    _T77 = dlps;
	    _T78 = (struct Cyc_List_List *)_T77;
	    _T79 = _T78->hd;
	    _T7A = (struct _tuple18 *)_T79;
	    _T7B = _T7A->f0;
	    if (_T7B == 0) { goto _TL183;
	    }
	    _T7C = dlps;
	    _T7D = (struct Cyc_List_List *)_T7C;
	    _T7E = _T7D->hd;
	    _T7F = (struct _tuple18 *)_T7E;
	    _T80 = _T7F->f0;
	    _T81 = (struct Cyc_List_List *)_T80;
	    _T82 = _T81->hd;
	    _T83 = (int *)_T82;
	    _T84 = *_T83;
	    if (_T84 != 1) { goto _TL185;
	    }
	    _T85 = dlps;
	    _T86 = (struct Cyc_List_List *)_T85;
	    _T87 = _T86->hd;
	    _T88 = (struct _tuple18 *)_T87;
	    _T89 = _T88->f0;
	    _T8A = (struct Cyc_List_List *)_T89;
	    _T8B = _T8A->tl;
	    if (_T8B != 0) { goto _TL187;
	    }
	    _T8C = dlps;
	    _T8D = (struct Cyc_List_List *)_T8C;
	    _T8E = _T8D->tl;
	    if (_T8E != 0) { goto _TL189;
	    }
	    _T8F = dlps;
	    { struct Cyc_List_List _TB0 = *_T8F;
	      _T90 = _TB0.hd;
	      _T91 = (struct _tuple18 *)_T90;
	      { struct _tuple18 _TB1 = *_T91;
		_T92 = _TB1.f0;
		{ struct Cyc_List_List _TB2 = *_T92;
		  _T93 = _TB2.hd;
		  { struct Cyc_Absyn_FieldName_Absyn_Designator_struct * _TB3 = (struct Cyc_Absyn_FieldName_Absyn_Designator_struct *)_T93;
		    _TAF = _TB3->f1;
		  }
		}_TAE = _TB1.f1;
	      }
	    }{ struct _fat_ptr * f = _TAF;
	      struct Cyc_Absyn_Pat * p2 = _TAE;
	      _T94 = f;
	      _T95 = *_T94;
	      _T96 = span;
	      { struct Cyc_List_List * _TB0 = _cycalloc(sizeof(struct Cyc_List_List));
		_TB0->hd = Cyc_Tcpat_compile_pat(p2);
		_TB0->tl = 0;
		_T97 = (struct Cyc_List_List *)_TB0;
	      }_T98 = p;
	      s = Cyc_Tcpat_con_pat(_T95,_T96,_T97,_T98);
	      goto _LL3E;
	    }_TL189: goto _LL41;
	    _TL187: goto _LL41;
	    _TL185: goto _LL41;
	    _TL183: goto _LL41;
	    _TL181: _LL41: { struct Cyc_Warn_String_Warn_Warg_struct _TB0;
	      _TB0.tag = 0;
	      _TB0.f1 = _tag_fat("bad union pattern",sizeof(char),18U);
	      _T99 = _TB0;
	    }{ struct Cyc_Warn_String_Warn_Warg_struct _TB0 = _T99;
	      void * _TB1[1];
	      _TB1[0] = &_TB0;
	      _T9B = Cyc_Warn_impos2;
	      { int (* _TB2)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T9B;
		_T9A = _TB2;
	      }_T9C = _tag_fat(_TB1,sizeof(void *),1);
	      _T9A(_T9C);
	    }_LL3E: ;
	  }
	}_TL169: goto _LL0;
      }
    case 12: 
      { struct Cyc_Absyn_Enum_p_Absyn_Raw_pat_struct * _TAE = (struct Cyc_Absyn_Enum_p_Absyn_Raw_pat_struct *)_TA5;
	_TA6 = _TAE->f2;
      }{ struct Cyc_Absyn_Enumfield * ef = _TA6;
	_TA6 = ef;
	goto _LL1C;
      }
    case 13: 
      { struct Cyc_Absyn_AnonEnum_p_Absyn_Raw_pat_struct * _TAE = (struct Cyc_Absyn_AnonEnum_p_Absyn_Raw_pat_struct *)_TA5;
	_TA6 = _TAE->f2;
      }_LL1C: { struct Cyc_Absyn_Enumfield * ef = _TA6;
	_T9D = ef;
	_T9E = _T9D->name;
	_T9F = *_T9E;
	_TA0 = _T9F.f1;
	_TA1 = *_TA0;
	_TA2 = p;
	s = Cyc_Tcpat_con_pat(_TA1,0,0,_TA2);
	goto _LL0;
      }
    case 14: 
      goto _LL20;
    case 15: 
      _LL20: goto _LL22;
    default: 
      _LL22: { struct Cyc_Tcpat_Any_Tcpat_Simple_pat_struct * _TAE = _cycalloc(sizeof(struct Cyc_Tcpat_Any_Tcpat_Simple_pat_struct));
	_TAE->tag = 0;
	_TA3 = (struct Cyc_Tcpat_Any_Tcpat_Simple_pat_struct *)_TAE;
      }s = (void *)_TA3;
    }
    _LL0: ;
  }_TA4 = s;
  return _TA4;
}
 struct Cyc_Tcpat_Pos_Tcpat_Term_desc_struct {
  int tag;
  struct Cyc_Tcpat_Con_s * f1;
  struct Cyc_List_List * f2;
};
 struct Cyc_Tcpat_Neg_Tcpat_Term_desc_struct {
  int tag;
  struct Cyc_Set_Set * f1;
};
static long Cyc_Tcpat_same_access(void * a1,void * a2) {
  struct _tuple0 _T0;
  void * _T1;
  int * _T2;
  unsigned int _T3;
  void * _T4;
  int * _T5;
  int _T6;
  void * _T7;
  int * _T8;
  int _T9;
  void * _TA;
  int * _TB;
  int _TC;
  void * _TD;
  void * _TE;
  int _TF;
  void * _T10;
  int * _T11;
  int _T12;
  void * _T13;
  void * _T14;
  int _T15;
  int _T16;
  { struct _tuple0 _T17;
    _T17.f0 = a1;
    _T17.f1 = a2;
    _T0 = _T17;
  }{ struct _tuple0 _T17 = _T0;
    struct _fat_ptr * _T18;
    long _T19;
    struct _fat_ptr * _T1A;
    long _T1B;
    unsigned int _T1C;
    struct Cyc_Absyn_Datatypefield * _T1D;
    unsigned int _T1E;
    struct Cyc_Absyn_Datatypefield * _T1F;
    _T1 = _T17.f0;
    _T2 = (int *)_T1;
    _T3 = *_T2;
    switch (_T3) {
    case 0: 
      _T4 = _T17.f1;
      _T5 = (int *)_T4;
      _T6 = *_T5;
      if (_T6 != 0) { goto _TL18C;
      }
      return 1;
      _TL18C: goto _LL9;
    case 1: 
      _T7 = _T17.f1;
      _T8 = (int *)_T7;
      _T9 = *_T8;
      if (_T9 != 1) { goto _TL18E;
      }
      return 1;
      _TL18E: goto _LL9;
    case 2: 
      _TA = _T17.f1;
      _TB = (int *)_TA;
      _TC = *_TB;
      if (_TC != 2) { goto _TL190;
      }
      _TD = _T17.f0;
      { struct Cyc_Tcpat_DatatypeField_Tcpat_Access_struct * _T20 = (struct Cyc_Tcpat_DatatypeField_Tcpat_Access_struct *)_TD;
	_T1F = _T20->f2;
	_T1E = _T20->f3;
      }_TE = _T17.f1;
      { struct Cyc_Tcpat_DatatypeField_Tcpat_Access_struct * _T20 = (struct Cyc_Tcpat_DatatypeField_Tcpat_Access_struct *)_TE;
	_T1D = _T20->f2;
	_T1C = _T20->f3;
      }{ struct Cyc_Absyn_Datatypefield * df1 = _T1F;
	unsigned int i1 = _T1E;
	struct Cyc_Absyn_Datatypefield * df2 = _T1D;
	unsigned int i2 = _T1C;
	if (df1 != df2) { goto _TL192;
	}
	_TF = i1 == i2;
	goto _TL193;
	_TL192: _TF = 0;
	_TL193: return _TF;
      }_TL190: goto _LL9;
    default: 
      _T10 = _T17.f1;
      _T11 = (int *)_T10;
      _T12 = *_T11;
      if (_T12 != 3) { goto _TL194;
      }
      _T13 = _T17.f0;
      { struct Cyc_Tcpat_AggrField_Tcpat_Access_struct * _T20 = (struct Cyc_Tcpat_AggrField_Tcpat_Access_struct *)_T13;
	_T1B = _T20->f2;
	_T1A = _T20->f3;
      }_T14 = _T17.f1;
      { struct Cyc_Tcpat_AggrField_Tcpat_Access_struct * _T20 = (struct Cyc_Tcpat_AggrField_Tcpat_Access_struct *)_T14;
	_T19 = _T20->f2;
	_T18 = _T20->f3;
      }{ long b1 = _T1B;
	struct _fat_ptr * f1 = _T1A;
	long b2 = _T19;
	struct _fat_ptr * f2 = _T18;
	if (b1 != b2) { goto _TL196;
	}
	_T16 = Cyc_strptrcmp(f1,f2);
	_T15 = _T16 == 0;
	goto _TL197;
	_TL196: _T15 = 0;
	_TL197: return _T15;
      }_TL194: _LL9: return 0;
    }
    ;
  }
}
static long Cyc_Tcpat_same_path(struct Cyc_List_List * p1,struct Cyc_List_List * p2) {
  struct Cyc_List_List * _T0;
  void * _T1;
  struct Cyc_Tcpat_PathNode * _T2;
  void * _T3;
  struct Cyc_List_List * _T4;
  void * _T5;
  struct Cyc_Tcpat_PathNode * _T6;
  void * _T7;
  long _T8;
  struct Cyc_List_List * _T9;
  struct Cyc_List_List * _TA;
  _TL19B: if (p1 != 0) { goto _TL19C;
  }else { goto _TL19A;
  }
  _TL19C: if (p2 != 0) { goto _TL199;
  }else { goto _TL19A;
  }
  _TL199: _T0 = p1;
  _T1 = _T0->hd;
  _T2 = (struct Cyc_Tcpat_PathNode *)_T1;
  _T3 = _T2->access;
  _T4 = p2;
  _T5 = _T4->hd;
  _T6 = (struct Cyc_Tcpat_PathNode *)_T5;
  _T7 = _T6->access;
  _T8 = Cyc_Tcpat_same_access(_T3,_T7);
  if (_T8) { goto _TL19D;
  }else { goto _TL19F;
  }
  _TL19F: return 0;
  _TL19D: _T9 = p1;
  p1 = _T9->tl;
  _TA = p2;
  p2 = _TA->tl;
  goto _TL19B;
  _TL19A: if (p1 == p2) { goto _TL1A0;
  }
  return 0;
  _TL1A0: return 1;
}
static void * Cyc_Tcpat_ifeq(struct Cyc_List_List * access,struct Cyc_Tcpat_Con_s * con,
			     void * d1,void * d2) {
  struct Cyc_Tcpat_Con_s * _T0;
  union Cyc_Tcpat_PatOrWhere _T1;
  void * _T2;
  int * _T3;
  int _T4;
  void * _T5;
  void * _T6;
  long _T7;
  struct Cyc_Tcpat_Con_s * _T8;
  union Cyc_Tcpat_PatOrWhere _T9;
  struct _union_PatOrWhere_pattern _TA;
  unsigned int _TB;
  unsigned int _TC;
  int _TD;
  struct Cyc_Tcpat_SwitchDec_Tcpat_Decision_struct * _TE;
  struct Cyc_List_List * _TF;
  struct _tuple0 * _T10;
  void * _T11;
  struct Cyc_Tcpat_SwitchDec_Tcpat_Decision_struct * _T12;
  struct Cyc_List_List * _T13;
  struct _tuple0 * _T14;
  void * _T15;
  _T0 = con;
  _T1 = _T0->orig_pat;
  { void * test = Cyc_Tcpat_get_pat_test(_T1);
    void * _T16;
    struct Cyc_List_List * _T17;
    struct Cyc_List_List * _T18;
    _T2 = d2;
    _T3 = (int *)_T2;
    _T4 = *_T3;
    if (_T4 != 2) { goto _TL1A2;
    }
    _T5 = d2;
    { struct Cyc_Tcpat_SwitchDec_Tcpat_Decision_struct * _T19 = (struct Cyc_Tcpat_SwitchDec_Tcpat_Decision_struct *)_T5;
      _T18 = _T19->f1;
      _T17 = _T19->f2;
      _T6 = _T19->f3;
      _T16 = (void *)_T6;
    }{ struct Cyc_List_List * access2 = _T18;
      struct Cyc_List_List * switch_clauses = _T17;
      void * default_decision = _T16;
      _T7 = Cyc_Tcpat_same_path(access,access2);
      if (! _T7) { goto _TL1A4;
      }
      _T8 = con;
      _T9 = _T8->orig_pat;
      _TA = _T9.pattern;
      _TB = _TA.tag;
      _TC = _TB == 1;
      _TD = (int)_TC;
      if (! _TD) { goto _TL1A4;
      }
      { struct Cyc_Tcpat_SwitchDec_Tcpat_Decision_struct * _T19 = _cycalloc(sizeof(struct Cyc_Tcpat_SwitchDec_Tcpat_Decision_struct));
	_T19->tag = 2;
	_T19->f1 = access2;
	{ struct Cyc_List_List * _T1A = _cycalloc(sizeof(struct Cyc_List_List));
	  { struct _tuple0 * _T1B = _cycalloc(sizeof(struct _tuple0));
	    _T1B->f0 = test;
	    _T1B->f1 = d1;
	    _T10 = (struct _tuple0 *)_T1B;
	  }_T1A->hd = _T10;
	  _T1A->tl = switch_clauses;
	  _TF = (struct Cyc_List_List *)_T1A;
	}_T19->f2 = _TF;
	_T19->f3 = default_decision;
	_TE = (struct Cyc_Tcpat_SwitchDec_Tcpat_Decision_struct *)_T19;
      }_T11 = (void *)_TE;
      return _T11;
      _TL1A4: goto _LL4;
    }_TL1A2: _LL4: { struct Cyc_Tcpat_SwitchDec_Tcpat_Decision_struct * _T19 = _cycalloc(sizeof(struct Cyc_Tcpat_SwitchDec_Tcpat_Decision_struct));
      _T19->tag = 2;
      _T19->f1 = access;
      { struct Cyc_List_List * _T1A = _cycalloc(sizeof(struct Cyc_List_List));
	{ struct _tuple0 * _T1B = _cycalloc(sizeof(struct _tuple0));
	  _T1B->f0 = test;
	  _T1B->f1 = d1;
	  _T14 = (struct _tuple0 *)_T1B;
	}_T1A->hd = _T14;
	_T1A->tl = 0;
	_T13 = (struct Cyc_List_List *)_T1A;
      }_T19->f2 = _T13;
      _T19->f3 = d2;
      _T12 = (struct Cyc_Tcpat_SwitchDec_Tcpat_Decision_struct *)_T19;
    }_T15 = (void *)_T12;
    return _T15;
    ;
  }
}
 struct _tuple23 {
  struct Cyc_List_List * f0;
  struct Cyc_List_List * f1;
  struct Cyc_List_List * f2;
};
enum Cyc_Tcpat_Answer {
  Cyc_Tcpat_Yes = 0U,
  Cyc_Tcpat_No = 1U,
  Cyc_Tcpat_Maybe = 2U
};
static void Cyc_Tcpat_print_tab(int i) {
  struct Cyc___cycFILE * _T0;
  struct _fat_ptr _T1;
  struct _fat_ptr _T2;
  _TL1A9: if (i != 0) { goto _TL1A7;
  }else { goto _TL1A8;
  }
  _TL1A7: _T0 = Cyc_stderr;
  _T1 = _tag_fat(" ",sizeof(char),2U);
  _T2 = _tag_fat(0U,sizeof(void *),0);
  Cyc_fprintf(_T0,_T1,_T2);
  i = i + -1;
  goto _TL1A9;
  _TL1A8: ;
}
static void Cyc_Tcpat_print_con(struct Cyc_Tcpat_Con_s * c) {
  struct Cyc_Tcpat_Con_s * _T0;
  struct _union_Name_value_Name_v _T1;
  unsigned int _T2;
  struct _union_Name_value_Name_v _T3;
  struct Cyc_String_pa_PrintArg_struct _T4;
  struct Cyc___cycFILE * _T5;
  struct _fat_ptr _T6;
  struct _fat_ptr _T7;
  struct _union_Name_value_Int_v _T8;
  struct Cyc_Int_pa_PrintArg_struct _T9;
  int _TA;
  struct Cyc___cycFILE * _TB;
  struct _fat_ptr _TC;
  struct _fat_ptr _TD;
  _T0 = c;
  { union Cyc_Tcpat_Name_value _TE = _T0->name;
    int _TF;
    struct _fat_ptr _T10;
    _T1 = _TE.Name_v;
    _T2 = _T1.tag;
    if (_T2 != 1) { goto _TL1AA;
    }
    _T3 = _TE.Name_v;
    _T10 = _T3.val;
    { struct _fat_ptr s = _T10;
      { struct Cyc_String_pa_PrintArg_struct _T11;
	_T11.tag = 0;
	_T11.f1 = s;
	_T4 = _T11;
      }{ struct Cyc_String_pa_PrintArg_struct _T11 = _T4;
	void * _T12[1];
	_T12[0] = &_T11;
	_T5 = Cyc_stderr;
	_T6 = _tag_fat("%s",sizeof(char),3U);
	_T7 = _tag_fat(_T12,sizeof(void *),1);
	Cyc_fprintf(_T5,_T6,_T7);
      }goto _LL0;
    }_TL1AA: _T8 = _TE.Int_v;
    _TF = _T8.val;
    { int i = _TF;
      { struct Cyc_Int_pa_PrintArg_struct _T11;
	_T11.tag = 1;
	_TA = i;
	_T11.f1 = (unsigned long)_TA;
	_T9 = _T11;
      }{ struct Cyc_Int_pa_PrintArg_struct _T11 = _T9;
	void * _T12[1];
	_T12[0] = &_T11;
	_TB = Cyc_stderr;
	_TC = _tag_fat("%d",sizeof(char),3U);
	_TD = _tag_fat(_T12,sizeof(void *),1);
	Cyc_fprintf(_TB,_TC,_TD);
      }goto _LL0;
    }_LL0: ;
  }
}
static void Cyc_Tcpat_print_access(void * a) {
  void * _T0;
  int * _T1;
  unsigned int _T2;
  struct Cyc___cycFILE * _T3;
  struct _fat_ptr _T4;
  struct _fat_ptr _T5;
  struct Cyc___cycFILE * _T6;
  struct _fat_ptr _T7;
  struct _fat_ptr _T8;
  void * _T9;
  struct Cyc_String_pa_PrintArg_struct _TA;
  struct Cyc_Absyn_Datatypefield * _TB;
  struct _tuple2 * _TC;
  struct Cyc_Int_pa_PrintArg_struct _TD;
  unsigned int _TE;
  int _TF;
  struct Cyc___cycFILE * _T10;
  struct _fat_ptr _T11;
  struct _fat_ptr _T12;
  void * _T13;
  long _T14;
  struct Cyc___cycFILE * _T15;
  struct _fat_ptr _T16;
  struct _fat_ptr _T17;
  struct Cyc_String_pa_PrintArg_struct _T18;
  struct _fat_ptr * _T19;
  struct Cyc___cycFILE * _T1A;
  struct _fat_ptr _T1B;
  struct _fat_ptr _T1C;
  struct _fat_ptr * _T1D;
  long _T1E;
  unsigned int _T1F;
  struct Cyc_Absyn_Datatypefield * _T20;
  _T0 = a;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  switch (_T2) {
  case 0: 
    _T3 = Cyc_stderr;
    _T4 = _tag_fat("DUMMY",sizeof(char),6U);
    _T5 = _tag_fat(0U,sizeof(void *),0);
    Cyc_fprintf(_T3,_T4,_T5);
    goto _LL0;
  case 1: 
    _T6 = Cyc_stderr;
    _T7 = _tag_fat("*",sizeof(char),2U);
    _T8 = _tag_fat(0U,sizeof(void *),0);
    Cyc_fprintf(_T6,_T7,_T8);
    goto _LL0;
  case 2: 
    _T9 = a;
    { struct Cyc_Tcpat_DatatypeField_Tcpat_Access_struct * _T21 = (struct Cyc_Tcpat_DatatypeField_Tcpat_Access_struct *)_T9;
      _T20 = _T21->f2;
      _T1F = _T21->f3;
    }{ struct Cyc_Absyn_Datatypefield * f = _T20;
      unsigned int i = _T1F;
      { struct Cyc_String_pa_PrintArg_struct _T21;
	_T21.tag = 0;
	_TB = f;
	_TC = _TB->name;
	_T21.f1 = Cyc_Absynpp_qvar2string(_TC);
	_TA = _T21;
      }{ struct Cyc_String_pa_PrintArg_struct _T21 = _TA;
	{ struct Cyc_Int_pa_PrintArg_struct _T22;
	  _T22.tag = 1;
	  _TE = i;
	  _TF = (int)_TE;
	  _T22.f1 = (unsigned long)_TF;
	  _TD = _T22;
	}{ struct Cyc_Int_pa_PrintArg_struct _T22 = _TD;
	  void * _T23[2];
	  _T23[0] = &_T21;
	  _T23[1] = &_T22;
	  _T10 = Cyc_stderr;
	  _T11 = _tag_fat("%s[%d]",sizeof(char),7U);
	  _T12 = _tag_fat(_T23,sizeof(void *),2);
	  Cyc_fprintf(_T10,_T11,_T12);
	}
      }goto _LL0;
    }
  default: 
    _T13 = a;
    { struct Cyc_Tcpat_AggrField_Tcpat_Access_struct * _T21 = (struct Cyc_Tcpat_AggrField_Tcpat_Access_struct *)_T13;
      _T1E = _T21->f2;
      _T1D = _T21->f3;
    }{ long tagged = _T1E;
      struct _fat_ptr * f = _T1D;
      _T14 = tagged;
      if (! _T14) { goto _TL1AD;
      }
      _T15 = Cyc_stderr;
      _T16 = _tag_fat(".tagunion",sizeof(char),10U);
      _T17 = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T15,_T16,_T17);
      goto _TL1AE;
      _TL1AD: _TL1AE: { struct Cyc_String_pa_PrintArg_struct _T21;
	_T21.tag = 0;
	_T19 = f;
	_T21.f1 = *_T19;
	_T18 = _T21;
      }{ struct Cyc_String_pa_PrintArg_struct _T21 = _T18;
	void * _T22[1];
	_T22[0] = &_T21;
	_T1A = Cyc_stderr;
	_T1B = _tag_fat(".%s",sizeof(char),4U);
	_T1C = _tag_fat(_T22,sizeof(void *),1);
	Cyc_fprintf(_T1A,_T1B,_T1C);
      }goto _LL0;
    }
  }
  _LL0: ;
}
static void Cyc_Tcpat_print_pat_test(void * p) {
  void * _T0;
  int * _T1;
  unsigned int _T2;
  void * _T3;
  struct Cyc_Tcpat_WhereTest_Tcpat_PatTest_struct * _T4;
  struct Cyc_Absyn_Exp * _T5;
  struct Cyc___cycFILE * _T6;
  struct _fat_ptr _T7;
  struct _fat_ptr _T8;
  void * _T9;
  struct Cyc_String_pa_PrintArg_struct _TA;
  struct Cyc___cycFILE * _TB;
  struct _fat_ptr _TC;
  struct _fat_ptr _TD;
  struct Cyc___cycFILE * _TE;
  struct _fat_ptr _TF;
  struct _fat_ptr _T10;
  struct Cyc___cycFILE * _T11;
  struct _fat_ptr _T12;
  struct _fat_ptr _T13;
  void * _T14;
  void * _T15;
  struct Cyc_String_pa_PrintArg_struct _T16;
  struct Cyc_Absyn_Enumfield * _T17;
  struct _tuple2 * _T18;
  struct Cyc___cycFILE * _T19;
  struct _fat_ptr _T1A;
  struct _fat_ptr _T1B;
  void * _T1C;
  struct Cyc_String_pa_PrintArg_struct _T1D;
  struct Cyc___cycFILE * _T1E;
  struct _fat_ptr _T1F;
  struct _fat_ptr _T20;
  void * _T21;
  struct Cyc_Int_pa_PrintArg_struct _T22;
  unsigned int _T23;
  int _T24;
  struct Cyc___cycFILE * _T25;
  struct _fat_ptr _T26;
  struct _fat_ptr _T27;
  void * _T28;
  struct Cyc_Int_pa_PrintArg_struct _T29;
  int _T2A;
  struct Cyc___cycFILE * _T2B;
  struct _fat_ptr _T2C;
  struct _fat_ptr _T2D;
  void * _T2E;
  struct Cyc_String_pa_PrintArg_struct _T2F;
  struct _fat_ptr * _T30;
  struct Cyc_Int_pa_PrintArg_struct _T31;
  int _T32;
  struct Cyc___cycFILE * _T33;
  struct _fat_ptr _T34;
  struct _fat_ptr _T35;
  void * _T36;
  struct Cyc_String_pa_PrintArg_struct _T37;
  struct Cyc_Absyn_Datatypefield * _T38;
  struct _tuple2 * _T39;
  struct Cyc___cycFILE * _T3A;
  struct _fat_ptr _T3B;
  struct _fat_ptr _T3C;
  struct Cyc_Absyn_Datatypefield * _T3D;
  struct _fat_ptr * _T3E;
  int _T3F;
  unsigned int _T40;
  struct _fat_ptr _T41;
  struct Cyc_Absyn_Enumfield * _T42;
  struct Cyc_Absyn_Exp * _T43;
  _T0 = p;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  switch (_T2) {
  case 0: 
    _T3 = p;
    _T4 = (struct Cyc_Tcpat_WhereTest_Tcpat_PatTest_struct *)_T3;
    _T5 = _T4->f1;
    if (_T5 != 0) { goto _TL1B0;
    }
    _T6 = Cyc_stderr;
    _T7 = _tag_fat("where(NULL)",sizeof(char),12U);
    _T8 = _tag_fat(0U,sizeof(void *),0);
    Cyc_fprintf(_T6,_T7,_T8);
    goto _LL0;
    _TL1B0: _T9 = p;
    { struct Cyc_Tcpat_WhereTest_Tcpat_PatTest_struct * _T44 = (struct Cyc_Tcpat_WhereTest_Tcpat_PatTest_struct *)_T9;
      _T43 = _T44->f1;
    }{ struct Cyc_Absyn_Exp * e = _T43;
      { struct Cyc_String_pa_PrintArg_struct _T44;
	_T44.tag = 0;
	_T44.f1 = Cyc_Absynpp_exp2string(e);
	_TA = _T44;
      }{ struct Cyc_String_pa_PrintArg_struct _T44 = _TA;
	void * _T45[1];
	_T45[0] = &_T44;
	_TB = Cyc_stderr;
	_TC = _tag_fat("where(%s)",sizeof(char),10U);
	_TD = _tag_fat(_T45,sizeof(void *),1);
	Cyc_fprintf(_TB,_TC,_TD);
      }goto _LL0;
    }
  case 1: 
    _TE = Cyc_stderr;
    _TF = _tag_fat("NULL",sizeof(char),5U);
    _T10 = _tag_fat(0U,sizeof(void *),0);
    Cyc_fprintf(_TE,_TF,_T10);
    goto _LL0;
  case 2: 
    _T11 = Cyc_stderr;
    _T12 = _tag_fat("NOT-NULL:",sizeof(char),10U);
    _T13 = _tag_fat(0U,sizeof(void *),0);
    Cyc_fprintf(_T11,_T12,_T13);
    goto _LL0;
  case 4: 
    _T14 = p;
    { struct Cyc_Tcpat_EqAnonEnum_Tcpat_PatTest_struct * _T44 = (struct Cyc_Tcpat_EqAnonEnum_Tcpat_PatTest_struct *)_T14;
      _T42 = _T44->f2;
    }{ struct Cyc_Absyn_Enumfield * ef = _T42;
      _T42 = ef;
      goto _LLC;
    }
  case 3: 
    _T15 = p;
    { struct Cyc_Tcpat_EqEnum_Tcpat_PatTest_struct * _T44 = (struct Cyc_Tcpat_EqEnum_Tcpat_PatTest_struct *)_T15;
      _T42 = _T44->f2;
    }_LLC: { struct Cyc_Absyn_Enumfield * ef = _T42;
      { struct Cyc_String_pa_PrintArg_struct _T44;
	_T44.tag = 0;
	_T17 = ef;
	_T18 = _T17->name;
	_T44.f1 = Cyc_Absynpp_qvar2string(_T18);
	_T16 = _T44;
      }{ struct Cyc_String_pa_PrintArg_struct _T44 = _T16;
	void * _T45[1];
	_T45[0] = &_T44;
	_T19 = Cyc_stderr;
	_T1A = _tag_fat("%s",sizeof(char),3U);
	_T1B = _tag_fat(_T45,sizeof(void *),1);
	Cyc_fprintf(_T19,_T1A,_T1B);
      }goto _LL0;
    }
  case 5: 
    _T1C = p;
    { struct Cyc_Tcpat_EqFloat_Tcpat_PatTest_struct * _T44 = (struct Cyc_Tcpat_EqFloat_Tcpat_PatTest_struct *)_T1C;
      _T41 = _T44->f1;
    }{ struct _fat_ptr s = _T41;
      { struct Cyc_String_pa_PrintArg_struct _T44;
	_T44.tag = 0;
	_T44.f1 = s;
	_T1D = _T44;
      }{ struct Cyc_String_pa_PrintArg_struct _T44 = _T1D;
	void * _T45[1];
	_T45[0] = &_T44;
	_T1E = Cyc_stderr;
	_T1F = _tag_fat("%s",sizeof(char),3U);
	_T20 = _tag_fat(_T45,sizeof(void *),1);
	Cyc_fprintf(_T1E,_T1F,_T20);
      }goto _LL0;
    }
  case 6: 
    _T21 = p;
    { struct Cyc_Tcpat_EqConst_Tcpat_PatTest_struct * _T44 = (struct Cyc_Tcpat_EqConst_Tcpat_PatTest_struct *)_T21;
      _T40 = _T44->f1;
    }{ unsigned int i = _T40;
      { struct Cyc_Int_pa_PrintArg_struct _T44;
	_T44.tag = 1;
	_T23 = i;
	_T24 = (int)_T23;
	_T44.f1 = (unsigned long)_T24;
	_T22 = _T44;
      }{ struct Cyc_Int_pa_PrintArg_struct _T44 = _T22;
	void * _T45[1];
	_T45[0] = &_T44;
	_T25 = Cyc_stderr;
	_T26 = _tag_fat("%d",sizeof(char),3U);
	_T27 = _tag_fat(_T45,sizeof(void *),1);
	Cyc_fprintf(_T25,_T26,_T27);
      }goto _LL0;
    }
  case 7: 
    _T28 = p;
    { struct Cyc_Tcpat_EqDatatypeTag_Tcpat_PatTest_struct * _T44 = (struct Cyc_Tcpat_EqDatatypeTag_Tcpat_PatTest_struct *)_T28;
      _T3F = _T44->f1;
    }{ int i = _T3F;
      { struct Cyc_Int_pa_PrintArg_struct _T44;
	_T44.tag = 1;
	_T2A = i;
	_T44.f1 = (unsigned long)_T2A;
	_T29 = _T44;
      }{ struct Cyc_Int_pa_PrintArg_struct _T44 = _T29;
	void * _T45[1];
	_T45[0] = &_T44;
	_T2B = Cyc_stderr;
	_T2C = _tag_fat("datatypetag(%d)",sizeof(char),16U);
	_T2D = _tag_fat(_T45,sizeof(void *),1);
	Cyc_fprintf(_T2B,_T2C,_T2D);
      }goto _LL0;
    }
  case 8: 
    _T2E = p;
    { struct Cyc_Tcpat_EqTaggedUnion_Tcpat_PatTest_struct * _T44 = (struct Cyc_Tcpat_EqTaggedUnion_Tcpat_PatTest_struct *)_T2E;
      _T3E = _T44->f2;
      _T3F = _T44->f3;
    }{ struct _fat_ptr * f = _T3E;
      int i = _T3F;
      { struct Cyc_String_pa_PrintArg_struct _T44;
	_T44.tag = 0;
	_T30 = f;
	_T44.f1 = *_T30;
	_T2F = _T44;
      }{ struct Cyc_String_pa_PrintArg_struct _T44 = _T2F;
	{ struct Cyc_Int_pa_PrintArg_struct _T45;
	  _T45.tag = 1;
	  _T32 = i;
	  _T45.f1 = (unsigned long)_T32;
	  _T31 = _T45;
	}{ struct Cyc_Int_pa_PrintArg_struct _T45 = _T31;
	  void * _T46[2];
	  _T46[0] = &_T44;
	  _T46[1] = &_T45;
	  _T33 = Cyc_stderr;
	  _T34 = _tag_fat("uniontag[%s](%d)",sizeof(char),17U);
	  _T35 = _tag_fat(_T46,sizeof(void *),2);
	  Cyc_fprintf(_T33,_T34,_T35);
	}
      }goto _LL0;
    }
  default: 
    _T36 = p;
    { struct Cyc_Tcpat_EqExtensibleDatatype_Tcpat_PatTest_struct * _T44 = (struct Cyc_Tcpat_EqExtensibleDatatype_Tcpat_PatTest_struct *)_T36;
      _T3D = _T44->f2;
    }{ struct Cyc_Absyn_Datatypefield * f = _T3D;
      { struct Cyc_String_pa_PrintArg_struct _T44;
	_T44.tag = 0;
	_T38 = f;
	_T39 = _T38->name;
	_T44.f1 = Cyc_Absynpp_qvar2string(_T39);
	_T37 = _T44;
      }{ struct Cyc_String_pa_PrintArg_struct _T44 = _T37;
	void * _T45[1];
	_T45[0] = &_T44;
	_T3A = Cyc_stderr;
	_T3B = _tag_fat("datatypefield(%s)",sizeof(char),18U);
	_T3C = _tag_fat(_T45,sizeof(void *),1);
	Cyc_fprintf(_T3A,_T3B,_T3C);
      }
    }
  }
  _LL0: ;
}
static void Cyc_Tcpat_print_rhs(struct Cyc_Tcpat_Rhs * r) {
  struct Cyc_String_pa_PrintArg_struct _T0;
  struct Cyc_Tcpat_Rhs * _T1;
  struct Cyc_Absyn_Stmt * _T2;
  struct Cyc___cycFILE * _T3;
  struct _fat_ptr _T4;
  struct _fat_ptr _T5;
  { struct Cyc_String_pa_PrintArg_struct _T6;
    _T6.tag = 0;
    _T1 = r;
    _T2 = _T1->rhs;
    _T6.f1 = Cyc_Absynpp_stmt2string(_T2);
    _T0 = _T6;
  }{ struct Cyc_String_pa_PrintArg_struct _T6 = _T0;
    void * _T7[1];
    _T7[0] = &_T6;
    _T3 = Cyc_stderr;
    _T4 = _tag_fat("%s",sizeof(char),3U);
    _T5 = _tag_fat(_T7,sizeof(void *),1);
    Cyc_fprintf(_T3,_T4,_T5);
  }
}
static void Cyc_Tcpat_print_dec_tree(void * d,int tab) {
  void * _T0;
  int * _T1;
  unsigned int _T2;
  void * _T3;
  struct Cyc___cycFILE * _T4;
  struct _fat_ptr _T5;
  struct _fat_ptr _T6;
  struct Cyc___cycFILE * _T7;
  struct _fat_ptr _T8;
  struct _fat_ptr _T9;
  struct Cyc___cycFILE * _TA;
  struct _fat_ptr _TB;
  struct _fat_ptr _TC;
  void * _TD;
  void * _TE;
  struct Cyc___cycFILE * _TF;
  struct _fat_ptr _T10;
  struct _fat_ptr _T11;
  struct Cyc_List_List * _T12;
  void * _T13;
  struct Cyc_Tcpat_PathNode * _T14;
  void * _T15;
  struct Cyc_List_List * _T16;
  struct Cyc_List_List * _T17;
  struct Cyc___cycFILE * _T18;
  struct _fat_ptr _T19;
  struct _fat_ptr _T1A;
  struct Cyc_List_List * _T1B;
  struct Cyc___cycFILE * _T1C;
  struct _fat_ptr _T1D;
  struct _fat_ptr _T1E;
  struct Cyc_List_List * _T1F;
  void * _T20;
  struct _tuple0 * _T21;
  struct Cyc___cycFILE * _T22;
  struct _fat_ptr _T23;
  struct _fat_ptr _T24;
  struct Cyc___cycFILE * _T25;
  struct _fat_ptr _T26;
  struct _fat_ptr _T27;
  void * _T28;
  int _T29;
  struct Cyc_List_List * _T2A;
  struct Cyc___cycFILE * _T2B;
  struct _fat_ptr _T2C;
  struct _fat_ptr _T2D;
  void * _T2E;
  int _T2F;
  struct Cyc___cycFILE * _T30;
  struct _fat_ptr _T31;
  struct _fat_ptr _T32;
  struct Cyc_List_List * _T33;
  struct Cyc_List_List * _T34;
  void * _T35;
  _T0 = d;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  switch (_T2) {
  case 1: 
    _T3 = d;
    { struct Cyc_Tcpat_Success_Tcpat_Decision_struct * _T36 = (struct Cyc_Tcpat_Success_Tcpat_Decision_struct *)_T3;
      _T35 = _T36->f1;
    }{ struct Cyc_Tcpat_Rhs * rhs = _T35;
      Cyc_Tcpat_print_tab(tab);
      _T4 = Cyc_stderr;
      _T5 = _tag_fat("Success(",sizeof(char),9U);
      _T6 = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T4,_T5,_T6);
      Cyc_Tcpat_print_rhs(rhs);
      _T7 = Cyc_stderr;
      _T8 = _tag_fat(")\n",sizeof(char),3U);
      _T9 = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T7,_T8,_T9);
      goto _LL0;
    }
  case 0: 
    _TA = Cyc_stderr;
    _TB = _tag_fat("Failure\n",sizeof(char),9U);
    _TC = _tag_fat(0U,sizeof(void *),0);
    Cyc_fprintf(_TA,_TB,_TC);
    goto _LL0;
  default: 
    _TD = d;
    { struct Cyc_Tcpat_SwitchDec_Tcpat_Decision_struct * _T36 = (struct Cyc_Tcpat_SwitchDec_Tcpat_Decision_struct *)_TD;
      _T34 = _T36->f1;
      _T33 = _T36->f2;
      _TE = _T36->f3;
      _T35 = (void *)_TE;
    }{ struct Cyc_List_List * a = _T34;
      struct Cyc_List_List * cases = _T33;
      void * def = _T35;
      Cyc_Tcpat_print_tab(tab);
      _TF = Cyc_stderr;
      _T10 = _tag_fat("Switch[",sizeof(char),8U);
      _T11 = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_TF,_T10,_T11);
      _TL1B6: if (a != 0) { goto _TL1B4;
      }else { goto _TL1B5;
      }
      _TL1B4: _T12 = a;
      _T13 = _T12->hd;
      _T14 = (struct Cyc_Tcpat_PathNode *)_T13;
      _T15 = _T14->access;
      Cyc_Tcpat_print_access(_T15);
      _T16 = a;
      _T17 = _T16->tl;
      if (_T17 == 0) { goto _TL1B7;
      }
      _T18 = Cyc_stderr;
      _T19 = _tag_fat(",",sizeof(char),2U);
      _T1A = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T18,_T19,_T1A);
      goto _TL1B8;
      _TL1B7: _TL1B8: _T1B = a;
      a = _T1B->tl;
      goto _TL1B6;
      _TL1B5: _T1C = Cyc_stderr;
      _T1D = _tag_fat("] {\n",sizeof(char),5U);
      _T1E = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T1C,_T1D,_T1E);
      _TL1BC: if (cases != 0) { goto _TL1BA;
      }else { goto _TL1BB;
      }
      _TL1BA: _T1F = cases;
      _T20 = _T1F->hd;
      _T21 = (struct _tuple0 *)_T20;
      { struct _tuple0 _T36 = *_T21;
	void * _T37;
	void * _T38;
	_T38 = _T36.f0;
	_T37 = _T36.f1;
	{ void * pt = _T38;
	  void * d = _T37;
	  Cyc_Tcpat_print_tab(tab);
	  _T22 = Cyc_stderr;
	  _T23 = _tag_fat("case ",sizeof(char),6U);
	  _T24 = _tag_fat(0U,sizeof(void *),0);
	  Cyc_fprintf(_T22,_T23,_T24);
	  Cyc_Tcpat_print_pat_test(pt);
	  _T25 = Cyc_stderr;
	  _T26 = _tag_fat(":\n",sizeof(char),3U);
	  _T27 = _tag_fat(0U,sizeof(void *),0);
	  Cyc_fprintf(_T25,_T26,_T27);
	  _T28 = d;
	  _T29 = tab + 7;
	  Cyc_Tcpat_print_dec_tree(_T28,_T29);
	}
      }_T2A = cases;
      cases = _T2A->tl;
      goto _TL1BC;
      _TL1BB: Cyc_Tcpat_print_tab(tab);
      _T2B = Cyc_stderr;
      _T2C = _tag_fat("default:\n",sizeof(char),10U);
      _T2D = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T2B,_T2C,_T2D);
      _T2E = def;
      _T2F = tab + 7;
      Cyc_Tcpat_print_dec_tree(_T2E,_T2F);
      Cyc_Tcpat_print_tab(tab);
      _T30 = Cyc_stderr;
      _T31 = _tag_fat("}\n",sizeof(char),3U);
      _T32 = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T30,_T31,_T32);
    }
  }
  _LL0: ;
}
void Cyc_Tcpat_print_decision_tree(void * d) {
  Cyc_Tcpat_print_dec_tree(d,0);
}
static void * Cyc_Tcpat_add_neg(void * td,struct Cyc_Tcpat_Con_s * c) {
  void * _T0;
  int * _T1;
  int _T2;
  void * _T3;
  struct Cyc_Tcpat_Neg_Tcpat_Term_desc_struct * _T4;
  struct Cyc_Set_Set * (* _T5)(struct Cyc_Set_Set *,struct Cyc_Tcpat_Con_s *);
  struct Cyc_Set_Set * (* _T6)(struct Cyc_Set_Set *,void *);
  void * _T7;
  struct Cyc_Warn_String_Warn_Warg_struct _T8;
  int (* _T9)(struct _fat_ptr);
  void * (* _TA)(struct _fat_ptr);
  struct _fat_ptr _TB;
  struct Cyc_Set_Set * _TC;
  _T0 = td;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  if (_T2 != 1) { goto _TL1BD;
  }
  _T3 = td;
  { struct Cyc_Tcpat_Neg_Tcpat_Term_desc_struct * _TD = (struct Cyc_Tcpat_Neg_Tcpat_Term_desc_struct *)_T3;
    _TC = _TD->f1;
  }{ struct Cyc_Set_Set * cs = _TC;
    { struct Cyc_Tcpat_Neg_Tcpat_Term_desc_struct * _TD = _cycalloc(sizeof(struct Cyc_Tcpat_Neg_Tcpat_Term_desc_struct));
      _TD->tag = 1;
      _T6 = Cyc_Set_insert;
      { struct Cyc_Set_Set * (* _TE)(struct Cyc_Set_Set *,struct Cyc_Tcpat_Con_s *) = (struct Cyc_Set_Set * (*)(struct Cyc_Set_Set *,
														struct Cyc_Tcpat_Con_s *))_T6;
	_T5 = _TE;
      }_TD->f1 = _T5(cs,c);
      _T4 = (struct Cyc_Tcpat_Neg_Tcpat_Term_desc_struct *)_TD;
    }_T7 = (void *)_T4;
    return _T7;
  }_TL1BD: { struct Cyc_Warn_String_Warn_Warg_struct _TD;
    _TD.tag = 0;
    _TD.f1 = _tag_fat("add_neg called when td is Positive",sizeof(char),35U);
    _T8 = _TD;
  }{ struct Cyc_Warn_String_Warn_Warg_struct _TD = _T8;
    void * _TE[1];
    _TE[0] = &_TD;
    _TA = Cyc_Warn_impos2;
    { int (* _TF)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_TA;
      _T9 = _TF;
    }_TB = _tag_fat(_TE,sizeof(void *),1);
    _T9(_TB);
  };
}
static enum Cyc_Tcpat_Answer Cyc_Tcpat_static_match(struct Cyc_Tcpat_Con_s * c,
						    void * td) {
  void * _T0;
  int * _T1;
  int _T2;
  void * _T3;
  enum Cyc_Tcpat_Answer _T4;
  int _T5;
  void * _T6;
  long (* _T7)(struct Cyc_Set_Set *,struct Cyc_Tcpat_Con_s *);
  long (* _T8)(struct Cyc_Set_Set *,void *);
  long _T9;
  struct Cyc_Tcpat_Con_s * _TA;
  int * _TB;
  struct Cyc_Tcpat_Con_s * _TC;
  int * _TD;
  int _TE;
  int _TF;
  int _T10;
  struct Cyc_Set_Set * _T11;
  struct Cyc_Tcpat_Con_s * _T12;
  _T0 = td;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  if (_T2 != 0) { goto _TL1BF;
  }
  _T3 = td;
  { struct Cyc_Tcpat_Pos_Tcpat_Term_desc_struct * _T13 = (struct Cyc_Tcpat_Pos_Tcpat_Term_desc_struct *)_T3;
    _T12 = _T13->f1;
  }{ struct Cyc_Tcpat_Con_s * c2 = _T12;
    _T5 = Cyc_Tcpat_compare_con(c,c2);
    if (_T5 != 0) { goto _TL1C1;
    }
    _T4 = 0U;
    goto _TL1C2;
    _TL1C1: _T4 = 1U;
    _TL1C2: return _T4;
  }_TL1BF: _T6 = td;
  { struct Cyc_Tcpat_Neg_Tcpat_Term_desc_struct * _T13 = (struct Cyc_Tcpat_Neg_Tcpat_Term_desc_struct *)_T6;
    _T11 = _T13->f1;
  }{ struct Cyc_Set_Set * cs = _T11;
    _T8 = Cyc_Set_member;
    { long (* _T13)(struct Cyc_Set_Set *,struct Cyc_Tcpat_Con_s *) = (long (*)(struct Cyc_Set_Set *,
									       struct Cyc_Tcpat_Con_s *))_T8;
      _T7 = _T13;
    }_T9 = _T7(cs,c);
    if (! _T9) { goto _TL1C3;
    }
    return 1U;
    _TL1C3: _TA = c;
    _TB = _TA->span;
    if (_TB == 0) { goto _TL1C5;
    }
    _TC = c;
    _TD = _TC->span;
    _TE = *_TD;
    _TF = Cyc_Set_cardinality(cs);
    _T10 = _TF + 1;
    if (_TE != _T10) { goto _TL1C5;
    }
    return 0U;
    _TL1C5: return 2U;
  };
}
 struct _tuple24 {
  struct Cyc_Tcpat_Con_s * f0;
  struct Cyc_List_List * f1;
};
static struct Cyc_List_List * Cyc_Tcpat_augment(struct Cyc_List_List * ctxt,
						void * dsc) {
  struct Cyc_List_List * _T0;
  void * _T1;
  struct _tuple24 * _T2;
  struct Cyc_List_List * _T3;
  struct _tuple24 * _T4;
  struct Cyc_List_List * _T5;
  struct Cyc_List_List * _T6;
  struct Cyc_List_List * _T7;
  struct Cyc_Tcpat_Con_s * _T8;
  if (ctxt != 0) { goto _TL1C7;
  }
  return 0;
  _TL1C7: _T0 = ctxt;
  { struct Cyc_List_List _T9 = *_T0;
    _T1 = _T9.hd;
    _T2 = (struct _tuple24 *)_T1;
    { struct _tuple24 _TA = *_T2;
      _T8 = _TA.f0;
      _T7 = _TA.f1;
    }_T6 = _T9.tl;
  }{ struct Cyc_Tcpat_Con_s * c = _T8;
    struct Cyc_List_List * args = _T7;
    struct Cyc_List_List * tl = _T6;
    { struct Cyc_List_List * _T9 = _cycalloc(sizeof(struct Cyc_List_List));
      { struct _tuple24 * _TA = _cycalloc(sizeof(struct _tuple24));
	_TA->f0 = c;
	{ struct Cyc_List_List * _TB = _cycalloc(sizeof(struct Cyc_List_List));
	  _TB->hd = dsc;
	  _TB->tl = args;
	  _T5 = (struct Cyc_List_List *)_TB;
	}_TA->f1 = _T5;
	_T4 = (struct _tuple24 *)_TA;
      }_T9->hd = _T4;
      _T9->tl = tl;
      _T3 = (struct Cyc_List_List *)_T9;
    }return _T3;
  };
}
static struct Cyc_List_List * Cyc_Tcpat_norm_context(struct Cyc_List_List * ctxt) {
  struct Cyc_Warn_String_Warn_Warg_struct _T0;
  int (* _T1)(struct _fat_ptr);
  void * (* _T2)(struct _fat_ptr);
  struct _fat_ptr _T3;
  struct Cyc_List_List * _T4;
  void * _T5;
  struct _tuple24 * _T6;
  struct Cyc_List_List * _T7;
  struct Cyc_Tcpat_Pos_Tcpat_Term_desc_struct * _T8;
  void * _T9;
  struct Cyc_List_List * _TA;
  struct Cyc_List_List * _TB;
  struct Cyc_List_List * _TC;
  struct Cyc_Tcpat_Con_s * _TD;
  if (ctxt != 0) { goto _TL1C9;
  }
  { struct Cyc_Warn_String_Warn_Warg_struct _TE;
    _TE.tag = 0;
    _TE.f1 = _tag_fat("norm_context: empty context",sizeof(char),28U);
    _T0 = _TE;
  }{ struct Cyc_Warn_String_Warn_Warg_struct _TE = _T0;
    void * _TF[1];
    _TF[0] = &_TE;
    _T2 = Cyc_Warn_impos2;
    { int (* _T10)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T2;
      _T1 = _T10;
    }_T3 = _tag_fat(_TF,sizeof(void *),1);
    _T1(_T3);
  }goto _TL1CA;
  _TL1C9: _T4 = ctxt;
  { struct Cyc_List_List _TE = *_T4;
    _T5 = _TE.hd;
    _T6 = (struct _tuple24 *)_T5;
    { struct _tuple24 _TF = *_T6;
      _TD = _TF.f0;
      _TC = _TF.f1;
    }_TB = _TE.tl;
  }{ struct Cyc_Tcpat_Con_s * c = _TD;
    struct Cyc_List_List * args = _TC;
    struct Cyc_List_List * tl = _TB;
    _T7 = tl;
    { struct Cyc_Tcpat_Pos_Tcpat_Term_desc_struct * _TE = _cycalloc(sizeof(struct Cyc_Tcpat_Pos_Tcpat_Term_desc_struct));
      _TE->tag = 0;
      _TE->f1 = c;
      _TE->f2 = Cyc_List_rev(args);
      _T8 = (struct Cyc_Tcpat_Pos_Tcpat_Term_desc_struct *)_TE;
    }_T9 = (void *)_T8;
    _TA = Cyc_Tcpat_augment(_T7,_T9);
    return _TA;
  }_TL1CA: ;
}
static void * Cyc_Tcpat_build_desc(struct Cyc_List_List * ctxt,void * dsc,
				   struct Cyc_List_List * work) {
  struct _tuple1 _T0;
  struct Cyc_List_List * _T1;
  struct Cyc_List_List * _T2;
  void * _T3;
  struct Cyc_List_List * _T4;
  struct Cyc_Warn_String_Warn_Warg_struct _T5;
  int (* _T6)(struct _fat_ptr);
  void * (* _T7)(struct _fat_ptr);
  struct _fat_ptr _T8;
  struct Cyc_List_List * _T9;
  void * _TA;
  struct _tuple24 * _TB;
  struct Cyc_List_List * _TC;
  void * _TD;
  struct _tuple23 * _TE;
  struct Cyc_Tcpat_Pos_Tcpat_Term_desc_struct * _TF;
  struct Cyc_Tcpat_Pos_Tcpat_Term_desc_struct * _T10;
  struct Cyc_Tcpat_Pos_Tcpat_Term_desc_struct * _T11;
  struct Cyc_List_List * _T12;
  struct Cyc_List_List * _T13;
  struct Cyc_List_List * _T14;
  struct Cyc_Tcpat_Pos_Tcpat_Term_desc_struct * _T15;
  void * _T16;
  struct Cyc_List_List * _T17;
  void * _T18;
  { struct _tuple1 _T19;
    _T19.f0 = ctxt;
    _T19.f1 = work;
    _T0 = _T19;
  }{ struct _tuple1 _T19 = _T0;
    struct Cyc_List_List * _T1A;
    struct Cyc_List_List * _T1B;
    struct Cyc_List_List * _T1C;
    struct Cyc_List_List * _T1D;
    struct Cyc_Tcpat_Con_s * _T1E;
    _T1 = _T19.f0;
    if (_T1 != 0) { goto _TL1CB;
    }
    _T2 = _T19.f1;
    if (_T2 != 0) { goto _TL1CD;
    }
    _T3 = dsc;
    return _T3;
    _TL1CD: goto _LL6;
    _TL1CB: _T4 = _T19.f1;
    if (_T4 != 0) { goto _TL1CF;
    }
    _LL6: { struct Cyc_Warn_String_Warn_Warg_struct _T1F;
      _T1F.tag = 0;
      _T1F.f1 = _tag_fat("build_desc: ctxt and work don't match",sizeof(char),
			 38U);
      _T5 = _T1F;
    }{ struct Cyc_Warn_String_Warn_Warg_struct _T1F = _T5;
      void * _T20[1];
      _T20[0] = &_T1F;
      _T7 = Cyc_Warn_impos2;
      { int (* _T21)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T7;
	_T6 = _T21;
      }_T8 = _tag_fat(_T20,sizeof(void *),1);
      _T6(_T8);
    }goto _TL1D0;
    _TL1CF: _T9 = _T19.f0;
    { struct Cyc_List_List _T1F = *_T9;
      _TA = _T1F.hd;
      _TB = (struct _tuple24 *)_TA;
      { struct _tuple24 _T20 = *_TB;
	_T1E = _T20.f0;
	_T1D = _T20.f1;
      }_T1C = _T1F.tl;
    }_TC = _T19.f1;
    { struct Cyc_List_List _T1F = *_TC;
      _TD = _T1F.hd;
      _TE = (struct _tuple23 *)_TD;
      { struct _tuple23 _T20 = *_TE;
	_T1B = _T20.f2;
      }_T1A = _T1F.tl;
    }{ struct Cyc_Tcpat_Con_s * c = _T1E;
      struct Cyc_List_List * args = _T1D;
      struct Cyc_List_List * rest = _T1C;
      struct Cyc_List_List * dargs = _T1B;
      struct Cyc_List_List * work2 = _T1A;
      struct Cyc_Tcpat_Pos_Tcpat_Term_desc_struct * td;
      td = _cycalloc(sizeof(struct Cyc_Tcpat_Pos_Tcpat_Term_desc_struct));
      _TF = td;
      _TF->tag = 0;
      _T10 = td;
      _T10->f1 = c;
      _T11 = td;
      _T12 = Cyc_List_rev(args);
      { struct Cyc_List_List * _T1F = _cycalloc(sizeof(struct Cyc_List_List));
	_T1F->hd = dsc;
	_T1F->tl = dargs;
	_T13 = (struct Cyc_List_List *)_T1F;
      }_T11->f2 = Cyc_List_append(_T12,_T13);
      _T14 = rest;
      _T15 = td;
      _T16 = (void *)_T15;
      _T17 = work2;
      _T18 = Cyc_Tcpat_build_desc(_T14,_T16,_T17);
      return _T18;
    }_TL1D0: ;
  }
}
static void * Cyc_Tcpat_match(void *,struct Cyc_List_List *,void *,struct Cyc_List_List *,
			      struct Cyc_List_List *,struct Cyc_Tcpat_Rhs *,
			      struct Cyc_List_List *);
 struct _tuple25 {
  void * f0;
  struct Cyc_Tcpat_Rhs * f1;
};
static void * Cyc_Tcpat_or_match(void * dsc,struct Cyc_List_List * allmrules) {
  struct Cyc_Tcpat_Failure_Tcpat_Decision_struct * _T0;
  void * _T1;
  struct Cyc_List_List * _T2;
  void * _T3;
  struct _tuple25 * _T4;
  void * _T5;
  struct Cyc_List_List * _T6;
  struct Cyc_Tcpat_Rhs * _T7;
  void * _T8;
  if (allmrules != 0) { goto _TL1D1;
  }
  { struct Cyc_Tcpat_Failure_Tcpat_Decision_struct * _T9 = _cycalloc(sizeof(struct Cyc_Tcpat_Failure_Tcpat_Decision_struct));
    _T9->tag = 0;
    _T9->f1 = dsc;
    _T0 = (struct Cyc_Tcpat_Failure_Tcpat_Decision_struct *)_T9;
  }_T1 = (void *)_T0;
  return _T1;
  _TL1D1: _T2 = allmrules;
  { struct Cyc_List_List _T9 = *_T2;
    _T3 = _T9.hd;
    _T4 = (struct _tuple25 *)_T3;
    { struct _tuple25 _TA = *_T4;
      _T8 = _TA.f0;
      _T7 = _TA.f1;
    }_T6 = _T9.tl;
  }{ void * pat1 = _T8;
    struct Cyc_Tcpat_Rhs * rhs1 = _T7;
    struct Cyc_List_List * rulerest = _T6;
    _T5 = Cyc_Tcpat_match(pat1,0,dsc,0,0,rhs1,rulerest);
    return _T5;
  };
}
static void * Cyc_Tcpat_match_compile(struct Cyc_List_List * allmrules) {
  struct Cyc_Tcpat_Neg_Tcpat_Term_desc_struct * _T0;
  void * _T1;
  struct Cyc_List_List * _T2;
  void * _T3;
  { struct Cyc_Tcpat_Neg_Tcpat_Term_desc_struct * _T4 = _cycalloc(sizeof(struct Cyc_Tcpat_Neg_Tcpat_Term_desc_struct));
    _T4->tag = 1;
    _T4->f1 = Cyc_Tcpat_empty_con_set();
    _T0 = (struct Cyc_Tcpat_Neg_Tcpat_Term_desc_struct *)_T4;
  }_T1 = (void *)_T0;
  _T2 = allmrules;
  _T3 = Cyc_Tcpat_or_match(_T1,_T2);
  return _T3;
}
static void * Cyc_Tcpat_and_match(struct Cyc_List_List * ctx,struct Cyc_List_List * work,
				  struct Cyc_Tcpat_Rhs * right_hand_side,
				  struct Cyc_List_List * rules) {
  struct Cyc_Tcpat_Success_Tcpat_Decision_struct * _T0;
  void * _T1;
  struct Cyc_List_List * _T2;
  struct Cyc_List_List * _T3;
  struct _tuple23 * _T4;
  struct _tuple23 * _T5;
  struct Cyc_List_List * _T6;
  struct Cyc_List_List * _T7;
  struct Cyc_List_List * _T8;
  struct _tuple23 * _T9;
  struct _tuple23 * _TA;
  struct Cyc_List_List * _TB;
  struct Cyc_List_List * _TC;
  struct Cyc_List_List * _TD;
  struct _tuple23 * _TE;
  struct _tuple23 * _TF;
  struct Cyc_List_List * _T10;
  struct Cyc_List_List * _T11;
  struct Cyc_List_List * _T12;
  struct Cyc_List_List * _T13;
  struct Cyc_Tcpat_Rhs * _T14;
  struct Cyc_List_List * _T15;
  void * _T16;
  struct Cyc_List_List * _T17;
  void * _T18;
  struct _tuple23 * _T19;
  struct Cyc_Warn_String_Warn_Warg_struct _T1A;
  int (* _T1B)(struct _fat_ptr);
  void * (* _T1C)(struct _fat_ptr);
  struct _fat_ptr _T1D;
  void * _T1E;
  void * _T1F;
  void * _T20;
  struct _tuple23 * _T21;
  struct _tuple23 * _T22;
  struct _tuple23 * _T23;
  void * _T24;
  struct Cyc_List_List * _T25;
  void * _T26;
  struct Cyc_List_List * _T27;
  struct Cyc_List_List * _T28;
  struct Cyc_Tcpat_Rhs * _T29;
  struct Cyc_List_List * _T2A;
  void * _T2B;
  struct Cyc_List_List * _T2C;
  struct Cyc_List_List * _T2D;
  struct Cyc_List_List * _T2E;
  struct Cyc_List_List * _T2F;
  if (work != 0) { goto _TL1D3;
  }
  { struct Cyc_Tcpat_Success_Tcpat_Decision_struct * _T30 = _cycalloc(sizeof(struct Cyc_Tcpat_Success_Tcpat_Decision_struct));
    _T30->tag = 1;
    _T30->f1 = right_hand_side;
    _T0 = (struct Cyc_Tcpat_Success_Tcpat_Decision_struct *)_T30;
  }_T1 = (void *)_T0;
  return _T1;
  _TL1D3: _T2 = work;
  _T3 = (struct Cyc_List_List *)_T2;
  _T4 = _T3->hd;
  _T5 = (struct _tuple23 *)_T4;
  _T6 = _T5->f0;
  if (_T6 != 0) { goto _TL1D5;
  }
  _T7 = work;
  _T8 = (struct Cyc_List_List *)_T7;
  _T9 = _T8->hd;
  _TA = (struct _tuple23 *)_T9;
  _TB = _TA->f1;
  if (_TB != 0) { goto _TL1D7;
  }
  _TC = work;
  _TD = (struct Cyc_List_List *)_TC;
  _TE = _TD->hd;
  _TF = (struct _tuple23 *)_TE;
  _T10 = _TF->f2;
  if (_T10 != 0) { goto _TL1D9;
  }
  _T11 = work;
  { struct Cyc_List_List _T30 = *_T11;
    _T2F = _T30.tl;
  }{ struct Cyc_List_List * workr = _T2F;
    _T12 = Cyc_Tcpat_norm_context(ctx);
    _T13 = workr;
    _T14 = right_hand_side;
    _T15 = rules;
    _T16 = Cyc_Tcpat_and_match(_T12,_T13,_T14,_T15);
    return _T16;
  }_TL1D9: goto _LL5;
  _TL1D7: goto _LL5;
  _TL1D5: _LL5: _T17 = work;
  { struct Cyc_List_List _T30 = *_T17;
    _T18 = _T30.hd;
    _T19 = (struct _tuple23 *)_T18;
    { struct _tuple23 _T31 = *_T19;
      _T2F = _T31.f0;
      _T2E = _T31.f1;
      _T2D = _T31.f2;
    }_T2C = _T30.tl;
  }{ struct Cyc_List_List * pats = _T2F;
    struct Cyc_List_List * objs = _T2E;
    struct Cyc_List_List * dscs = _T2D;
    struct Cyc_List_List * workr = _T2C;
    if (pats == 0) { goto _TL1DD;
    }else { goto _TL1DF;
    }
    _TL1DF: if (objs == 0) { goto _TL1DD;
    }else { goto _TL1DE;
    }
    _TL1DE: if (dscs == 0) { goto _TL1DD;
    }else { goto _TL1DB;
    }
    _TL1DD: { struct Cyc_Warn_String_Warn_Warg_struct _T30;
      _T30.tag = 0;
      _T30.f1 = _tag_fat("tcpat:and_match: malformed work frame",sizeof(char),
			 38U);
      _T1A = _T30;
    }{ struct Cyc_Warn_String_Warn_Warg_struct _T30 = _T1A;
      void * _T31[1];
      _T31[0] = &_T30;
      _T1C = Cyc_Warn_impos2;
      { int (* _T32)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T1C;
	_T1B = _T32;
      }_T1D = _tag_fat(_T31,sizeof(void *),1);
      _T1B(_T1D);
    }goto _TL1DC;
    _TL1DB: _TL1DC: { struct Cyc_List_List * _T30 = pats;
      struct Cyc_List_List * _T31;
      void * _T32;
      { struct Cyc_List_List _T33 = *_T30;
	_T1E = _T33.hd;
	_T32 = (void *)_T1E;
	_T31 = _T33.tl;
      }{ void * pat1 = _T32;
	struct Cyc_List_List * patr = _T31;
	struct Cyc_List_List * _T33 = objs;
	struct Cyc_List_List * _T34;
	struct Cyc_List_List * _T35;
	{ struct Cyc_List_List _T36 = *_T33;
	  _T1F = _T36.hd;
	  _T35 = (struct Cyc_List_List *)_T1F;
	  _T34 = _T36.tl;
	}{ struct Cyc_List_List * obj1 = _T35;
	  struct Cyc_List_List * objr = _T34;
	  struct Cyc_List_List * _T36 = dscs;
	  struct Cyc_List_List * _T37;
	  void * _T38;
	  { struct Cyc_List_List _T39 = *_T36;
	    _T20 = _T39.hd;
	    _T38 = (void *)_T20;
	    _T37 = _T39.tl;
	  }{ void * dsc1 = _T38;
	    struct Cyc_List_List * dscr = _T37;
	    struct _tuple23 * wf;
	    wf = _cycalloc(sizeof(struct _tuple23));
	    _T21 = wf;
	    _T21->f0 = patr;
	    _T22 = wf;
	    _T22->f1 = objr;
	    _T23 = wf;
	    _T23->f2 = dscr;
	    _T24 = pat1;
	    _T25 = obj1;
	    _T26 = dsc1;
	    _T27 = ctx;
	    { struct Cyc_List_List * _T39 = _cycalloc(sizeof(struct Cyc_List_List));
	      _T39->hd = wf;
	      _T39->tl = workr;
	      _T28 = (struct Cyc_List_List *)_T39;
	    }_T29 = right_hand_side;
	    _T2A = rules;
	    _T2B = Cyc_Tcpat_match(_T24,_T25,_T26,_T27,_T28,_T29,_T2A);
	    return _T2B;
	  }
	}
      }
    }
  };
}
static struct Cyc_List_List * Cyc_Tcpat_getdargs(struct Cyc_Tcpat_Con_s * pcon,
						 void * dsc) {
  void * _T0;
  int * _T1;
  int _T2;
  void * _T3;
  struct Cyc_Tcpat_Neg_Tcpat_Term_desc_struct * _T4;
  int _T5;
  struct Cyc_Tcpat_Con_s * _T6;
  int _T7;
  struct Cyc_List_List * _T8;
  struct Cyc_List_List * _T9;
  void * _TA;
  struct Cyc_List_List * _TB;
  struct Cyc_List_List * _TC;
  struct Cyc_Set_Set * _TD;
  _T0 = dsc;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  if (_T2 != 1) { goto _TL1E0;
  }
  _T3 = dsc;
  { struct Cyc_Tcpat_Neg_Tcpat_Term_desc_struct * _TE = (struct Cyc_Tcpat_Neg_Tcpat_Term_desc_struct *)_T3;
    _TD = _TE->f1;
  }{ struct Cyc_Set_Set * ncs = _TD;
    { struct Cyc_Tcpat_Neg_Tcpat_Term_desc_struct * _TE = _cycalloc(sizeof(struct Cyc_Tcpat_Neg_Tcpat_Term_desc_struct));
      _TE->tag = 1;
      _TE->f1 = Cyc_Tcpat_empty_con_set();
      _T4 = (struct Cyc_Tcpat_Neg_Tcpat_Term_desc_struct *)_TE;
    }{ void * any = (void *)_T4;
      struct Cyc_List_List * res = 0;
      { int i = 0;
	_TL1E5: _T5 = i;
	_T6 = pcon;
	_T7 = _T6->arity;
	if (_T5 < _T7) { goto _TL1E3;
	}else { goto _TL1E4;
	}
	_TL1E3: { struct Cyc_List_List * _TE = _cycalloc(sizeof(struct Cyc_List_List));
	  _TE->hd = any;
	  _TE->tl = res;
	  _T8 = (struct Cyc_List_List *)_TE;
	}res = _T8;
	i = i + 1;
	goto _TL1E5;
	_TL1E4: ;
      }_T9 = res;
      return _T9;
    }
  }_TL1E0: _TA = dsc;
  { struct Cyc_Tcpat_Pos_Tcpat_Term_desc_struct * _TE = (struct Cyc_Tcpat_Pos_Tcpat_Term_desc_struct *)_TA;
    _TC = _TE->f2;
  }{ struct Cyc_List_List * dargs = _TC;
    _TB = dargs;
    return _TB;
  };
}
static void * Cyc_Tcpat_get_access(union Cyc_Tcpat_PatOrWhere pw,int i) {
  union Cyc_Tcpat_PatOrWhere _T0;
  struct _union_PatOrWhere_where_clause _T1;
  unsigned int _T2;
  struct Cyc_Tcpat_Dummy_Tcpat_Access_struct * _T3;
  struct Cyc_Tcpat_Dummy_Tcpat_Access_struct * _T4;
  void * _T5;
  union Cyc_Tcpat_PatOrWhere _T6;
  struct _union_PatOrWhere_pattern _T7;
  struct Cyc_Absyn_Pat * _T8;
  int * _T9;
  unsigned int _TA;
  struct Cyc_Int_pa_PrintArg_struct _TB;
  int _TC;
  int (* _TD)(struct _fat_ptr,struct _fat_ptr);
  void * (* _TE)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _TF;
  struct _fat_ptr _T10;
  struct Cyc_Tcpat_Deref_Tcpat_Access_struct * _T11;
  struct Cyc_Absyn_Pat * _T12;
  void * _T13;
  struct Cyc_List_List * _T14;
  struct Cyc_Tcpat_DatatypeField_Tcpat_Access_struct * _T15;
  int _T16;
  struct Cyc_List_List * _T17;
  void * _T18;
  struct Cyc_Absyn_Pat * _T19;
  void * _T1A;
  void * _T1B;
  void * _T1C;
  void * _T1D;
  int * _T1E;
  unsigned int _T1F;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T20;
  void * _T21;
  int * _T22;
  int _T23;
  void * _T24;
  struct Cyc_Absyn_Aggrdecl * _T25;
  struct Cyc_Absyn_AggrdeclImpl * _T26;
  struct Cyc_Absyn_AggrdeclImpl * _T27;
  struct Cyc_Absyn_Aggrdecl * _T28;
  struct Cyc_Absyn_AggrdeclImpl * _T29;
  int (* _T2A)(struct _fat_ptr,struct _fat_ptr);
  void * (* _T2B)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T2C;
  struct _fat_ptr _T2D;
  long _T2E;
  struct Cyc_List_List * _T2F;
  void * _T30;
  struct _tuple18 * _T31;
  struct _tuple18 _T32;
  struct Cyc_List_List * _T33;
  void * _T34;
  int * _T35;
  int _T36;
  struct Cyc_List_List * _T37;
  struct Cyc_List_List * _T38;
  void * _T39;
  struct Cyc_Tcpat_AggrField_Tcpat_Access_struct * _T3A;
  struct Cyc_List_List * _T3B;
  void * _T3C;
  struct _tuple18 * _T3D;
  struct Cyc_Absyn_Pat * _T3E;
  void * _T3F;
  void * _T40;
  struct Cyc_String_pa_PrintArg_struct _T41;
  int (* _T42)(struct _fat_ptr,struct _fat_ptr);
  void * (* _T43)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T44;
  struct _fat_ptr _T45;
  struct Cyc_List_List * _T46;
  struct Cyc_List_List * _T47;
  void * _T48;
  struct Cyc_Absyn_Aggrfield * _T49;
  struct Cyc_List_List * _T4A;
  void * _T4B;
  struct _tuple18 * _T4C;
  struct Cyc_List_List * _T4D;
  void * _T4E;
  int * _T4F;
  int _T50;
  struct Cyc_List_List * _T51;
  struct Cyc_List_List * _T52;
  void * _T53;
  int _T54;
  struct Cyc_List_List * _T55;
  void * _T56;
  struct _tuple18 * _T57;
  struct Cyc_Absyn_Pat * _T58;
  void * _T59;
  int (* _T5A)(struct _fat_ptr,struct _fat_ptr);
  void * (* _T5B)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T5C;
  struct _fat_ptr _T5D;
  struct Cyc_List_List * _T5E;
  struct Cyc_String_pa_PrintArg_struct _T5F;
  struct _fat_ptr * _T60;
  struct _fat_ptr _T61;
  int (* _T62)(struct _fat_ptr,struct _fat_ptr);
  void * (* _T63)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T64;
  struct _fat_ptr _T65;
  struct Cyc_Tcpat_AggrField_Tcpat_Access_struct * _T66;
  struct Cyc_List_List * _T67;
  void * _T68;
  struct Cyc_Absyn_Aggrfield * _T69;
  void * _T6A;
  struct Cyc_String_pa_PrintArg_struct _T6B;
  int (* _T6C)(struct _fat_ptr,struct _fat_ptr);
  void * (* _T6D)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T6E;
  struct _fat_ptr _T6F;
  struct Cyc_Absyn_Pat * _T70;
  _T0 = pw;
  _T1 = _T0.where_clause;
  _T2 = _T1.tag;
  if (_T2 != 2) { goto _TL1E6;
  }
  _T3 = &Cyc_Tcpat_Dummy_val;
  _T4 = (struct Cyc_Tcpat_Dummy_Tcpat_Access_struct *)_T3;
  _T5 = (void *)_T4;
  return _T5;
  _TL1E6: _T6 = pw;
  _T7 = _T6.pattern;
  _T70 = _T7.val;
  { struct Cyc_Absyn_Pat * p = _T70;
    _T8 = p;
    { void * _T71 = _T8->r;
      struct Cyc_List_List * _T72;
      struct Cyc_Absyn_Datatypefield * _T73;
      void * _T74;
      _T9 = (int *)_T71;
      _TA = *_T9;
      switch (_TA) {
      case 5: 
	{ struct Cyc_Absyn_Pointer_p_Absyn_Raw_pat_struct * _T75 = (struct Cyc_Absyn_Pointer_p_Absyn_Raw_pat_struct *)_T71;
	  _T74 = _T75->f1;
	}{ struct Cyc_Absyn_Pat * p2 = _T74;
	  if (i == 0) { goto _TL1E9;
	  }
	  { struct Cyc_Int_pa_PrintArg_struct _T75;
	    _T75.tag = 1;
	    _TC = i;
	    _T75.f1 = (unsigned long)_TC;
	    _TB = _T75;
	  }{ struct Cyc_Int_pa_PrintArg_struct _T75 = _TB;
	    void * _T76[1];
	    _T76[0] = &_T75;
	    _TE = Cyc_Warn_impos;
	    { int (* _T77)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								       struct _fat_ptr))_TE;
	      _TD = _T77;
	    }_TF = _tag_fat("get_access on pointer pattern with offset %d\n",
			    sizeof(char),46U);
	    _T10 = _tag_fat(_T76,sizeof(void *),1);
	    _TD(_TF,_T10);
	  }goto _TL1EA;
	  _TL1E9: _TL1EA: { struct Cyc_Tcpat_Deref_Tcpat_Access_struct * _T75 = _cycalloc(sizeof(struct Cyc_Tcpat_Deref_Tcpat_Access_struct));
	    _T75->tag = 1;
	    _T12 = p2;
	    _T75->f1 = _T12->topt;
	    _T11 = (struct Cyc_Tcpat_Deref_Tcpat_Access_struct *)_T75;
	  }_T13 = (void *)_T11;
	  return _T13;
	}
      case 7: 
	{ struct Cyc_Absyn_Datatype_p_Absyn_Raw_pat_struct * _T75 = (struct Cyc_Absyn_Datatype_p_Absyn_Raw_pat_struct *)_T71;
	  _T74 = _T75->f1;
	  _T73 = _T75->f2;
	  _T72 = _T75->f3;
	}{ struct Cyc_Absyn_Datatypedecl * tud = _T74;
	  struct Cyc_Absyn_Datatypefield * tuf = _T73;
	  struct Cyc_List_List * args = _T72;
	  int orig_i = i;
	  _TL1EE: if (i != 0) { goto _TL1EC;
	  }else { goto _TL1ED;
	  }
	  _TL1EC: _T14 = _check_null(args);
	  args = _T14->tl;
	  i = i + -1;
	  goto _TL1EE;
	  _TL1ED: { struct Cyc_Tcpat_DatatypeField_Tcpat_Access_struct * _T75 = _cycalloc(sizeof(struct Cyc_Tcpat_DatatypeField_Tcpat_Access_struct));
	    _T75->tag = 2;
	    _T75->f1 = tud;
	    _T75->f2 = tuf;
	    _T16 = orig_i;
	    _T75->f3 = (unsigned int)_T16;
	    _T17 = _check_null(args);
	    _T18 = _T17->hd;
	    _T19 = (struct Cyc_Absyn_Pat *)_T18;
	    _T1A = _T19->topt;
	    _T75->f4 = _check_null(_T1A);
	    _T15 = (struct Cyc_Tcpat_DatatypeField_Tcpat_Access_struct *)_T75;
	  }_T1B = (void *)_T15;
	  return _T1B;
	}
      case 6: 
	{ struct Cyc_Absyn_Aggr_p_Absyn_Raw_pat_struct * _T75 = (struct Cyc_Absyn_Aggr_p_Absyn_Raw_pat_struct *)_T71;
	  _T1C = _T75->f1;
	  _T74 = (void *)_T1C;
	  _T72 = _T75->f4;
	}{ void * atype = _T74;
	  struct Cyc_List_List * dlps = _T72;
	  struct Cyc_List_List * fields;
	  long is_tagged = 0;
	  _T1D = _check_null(atype);
	  { void * _T75 = Cyc_Absyn_compress(_T1D);
	    struct Cyc_List_List * _T76;
	    union Cyc_Absyn_AggrInfo _T77;
	    _T1E = (int *)_T75;
	    _T1F = *_T1E;
	    switch (_T1F) {
	    case 0: 
	      _T20 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T75;
	      _T21 = _T20->f1;
	      _T22 = (int *)_T21;
	      _T23 = *_T22;
	      if (_T23 != 24) { goto _TL1F0;
	      }
	      { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T78 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T75;
		_T24 = _T78->f1;
		{ struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct * _T79 = (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct *)_T24;
		  _T77 = _T79->f1;
		}
	      }{ union Cyc_Absyn_AggrInfo ainfo = _T77;
		struct Cyc_Absyn_Aggrdecl * ad = Cyc_Absyn_get_known_aggrdecl(ainfo);
		_T25 = ad;
		_T26 = _T25->impl;
		_T27 = _check_null(_T26);
		is_tagged = _T27->tagged;
		_T28 = ad;
		_T29 = _T28->impl;
		fields = _T29->fields;
		goto _LLE;
	      }_TL1F0: goto _LL13;
	    case 7: 
	      { struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct * _T78 = (struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct *)_T75;
		_T76 = _T78->f3;
	      }{ struct Cyc_List_List * fs = _T76;
		fields = fs;
		goto _LLE;
	      }
	    default: 
	      _LL13: _T2B = Cyc_Warn_impos;
	      { int (* _T78)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
									 struct _fat_ptr))_T2B;
		_T2A = _T78;
	      }_T2C = _tag_fat("bad type in aggr pattern",sizeof(char),25U);
	      _T2D = _tag_fat(0U,sizeof(void *),0);
	      _T2A(_T2C,_T2D);
	    }
	    _LLE: ;
	  }_T2E = is_tagged;
	  if (! _T2E) { goto _TL1F2;
	  }
	  _T2F = _check_null(dlps);
	  _T30 = _T2F->hd;
	  _T31 = (struct _tuple18 *)_T30;
	  _T32 = *_T31;
	  { struct Cyc_List_List * _T75 = _T32.f0;
	    struct _fat_ptr * _T76;
	    if (_T75 == 0) { goto _TL1F4;
	    }
	    _T33 = (struct Cyc_List_List *)_T75;
	    _T34 = _T33->hd;
	    _T35 = (int *)_T34;
	    _T36 = *_T35;
	    if (_T36 != 1) { goto _TL1F6;
	    }
	    _T37 = (struct Cyc_List_List *)_T75;
	    _T38 = _T37->tl;
	    if (_T38 != 0) { goto _TL1F8;
	    }
	    { struct Cyc_List_List _T77 = *_T75;
	      _T39 = _T77.hd;
	      { struct Cyc_Absyn_FieldName_Absyn_Designator_struct * _T78 = (struct Cyc_Absyn_FieldName_Absyn_Designator_struct *)_T39;
		_T76 = _T78->f1;
	      }
	    }{ struct _fat_ptr * f = _T76;
	      { struct Cyc_Tcpat_AggrField_Tcpat_Access_struct * _T77 = _cycalloc(sizeof(struct Cyc_Tcpat_AggrField_Tcpat_Access_struct));
		_T77->tag = 3;
		_T77->f1 = atype;
		_T77->f2 = is_tagged;
		_T77->f3 = f;
		_T3B = dlps;
		_T3C = _T3B->hd;
		_T3D = (struct _tuple18 *)_T3C;
		_T3E = _T3D->f1;
		_T3F = _T3E->topt;
		_T77->f4 = _check_null(_T3F);
		_T3A = (struct Cyc_Tcpat_AggrField_Tcpat_Access_struct *)_T77;
	      }_T40 = (void *)_T3A;
	      return _T40;
	    }_TL1F8: goto _LL18;
	    _TL1F6: goto _LL18;
	    _TL1F4: _LL18: { struct Cyc_String_pa_PrintArg_struct _T77;
	      _T77.tag = 0;
	      _T77.f1 = Cyc_Absynpp_pat2string(p);
	      _T41 = _T77;
	    }{ struct Cyc_String_pa_PrintArg_struct _T77 = _T41;
	      void * _T78[1];
	      _T78[0] = &_T77;
	      _T43 = Cyc_Warn_impos;
	      { int (* _T79)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
									 struct _fat_ptr))_T43;
		_T42 = _T79;
	      }_T44 = _tag_fat("get_access on bad aggr pattern: %s",sizeof(char),
			       35U);
	      _T45 = _tag_fat(_T78,sizeof(void *),1);
	      _T42(_T44,_T45);
	    };
	  }goto _TL1F3;
	  _TL1F2: _TL1F3: { int orig_i = i;
	    _TL1FD: if (i != 0) { goto _TL1FB;
	    }else { goto _TL1FC;
	    }
	    _TL1FB: _T46 = _check_null(fields);
	    fields = _T46->tl;
	    i = i + -1;
	    goto _TL1FD;
	    _TL1FC: _T47 = _check_null(fields);
	    _T48 = _T47->hd;
	    _T49 = (struct Cyc_Absyn_Aggrfield *)_T48;
	    { struct _fat_ptr * name = _T49->name;
	      void * field_type = Cyc_Absyn_void_type;
	      _TL201: if (dlps != 0) { goto _TL1FF;
	      }else { goto _TL200;
	      }
	      _TL1FF: _T4A = dlps;
	      _T4B = _T4A->hd;
	      _T4C = (struct _tuple18 *)_T4B;
	      { struct Cyc_List_List * _T75 = _T4C->f0;
		struct _fat_ptr * _T76;
		if (_T75 == 0) { goto _TL202;
		}
		_T4D = (struct Cyc_List_List *)_T75;
		_T4E = _T4D->hd;
		_T4F = (int *)_T4E;
		_T50 = *_T4F;
		if (_T50 != 1) { goto _TL204;
		}
		_T51 = (struct Cyc_List_List *)_T75;
		_T52 = _T51->tl;
		if (_T52 != 0) { goto _TL206;
		}
		{ struct Cyc_List_List _T77 = *_T75;
		  _T53 = _T77.hd;
		  { struct Cyc_Absyn_FieldName_Absyn_Designator_struct * _T78 = (struct Cyc_Absyn_FieldName_Absyn_Designator_struct *)_T53;
		    _T76 = _T78->f1;
		  }
		}{ struct _fat_ptr * f = _T76;
		  _T54 = Cyc_strptrcmp(f,name);
		  if (_T54 == 0) { goto _TL208;
		  }
		  goto _TL1FE;
		  _TL208: _T55 = dlps;
		  _T56 = _T55->hd;
		  _T57 = (struct _tuple18 *)_T56;
		  _T58 = _T57->f1;
		  _T59 = _T58->topt;
		  field_type = _check_null(_T59);
		  goto _LL1A;
		}_TL206: goto _LL1D;
		_TL204: goto _LL1D;
		_TL202: _LL1D: _T5B = Cyc_Warn_impos;
		{ int (* _T77)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
									   struct _fat_ptr))_T5B;
		  _T5A = _T77;
		}_T5C = _tag_fat("get_access bad designator list",sizeof(char),
				 31U);
		_T5D = _tag_fat(0U,sizeof(void *),0);
		_T5A(_T5C,_T5D);
		_LL1A: ;
	      }goto _TL200;
	      _TL1FE: _T5E = dlps;
	      dlps = _T5E->tl;
	      goto _TL201;
	      _TL200: if (dlps != 0) { goto _TL20A;
	      }
	      { struct Cyc_String_pa_PrintArg_struct _T75;
		_T75.tag = 0;
		_T60 = name;
		_T61 = *_T60;
		_T75.f1 = _T61;
		_T5F = _T75;
	      }{ struct Cyc_String_pa_PrintArg_struct _T75 = _T5F;
		void * _T76[1];
		_T76[0] = &_T75;
		_T63 = Cyc_Warn_impos;
		{ int (* _T77)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
									   struct _fat_ptr))_T63;
		  _T62 = _T77;
		}_T64 = _tag_fat("get_access can't find field %s",sizeof(char),
				 31U);
		_T65 = _tag_fat(_T76,sizeof(void *),1);
		_T62(_T64,_T65);
	      }goto _TL20B;
	      _TL20A: _TL20B: { struct Cyc_Tcpat_AggrField_Tcpat_Access_struct * _T75 = _cycalloc(sizeof(struct Cyc_Tcpat_AggrField_Tcpat_Access_struct));
		_T75->tag = 3;
		_T75->f1 = atype;
		_T75->f2 = is_tagged;
		_T67 = fields;
		_T68 = _T67->hd;
		_T69 = (struct Cyc_Absyn_Aggrfield *)_T68;
		_T75->f3 = _T69->name;
		_T75->f4 = field_type;
		_T66 = (struct Cyc_Tcpat_AggrField_Tcpat_Access_struct *)_T75;
	      }_T6A = (void *)_T66;
	      return _T6A;
	    }
	  }
	}
      default: 
	{ struct Cyc_String_pa_PrintArg_struct _T75;
	  _T75.tag = 0;
	  _T75.f1 = Cyc_Absynpp_pat2string(p);
	  _T6B = _T75;
	}{ struct Cyc_String_pa_PrintArg_struct _T75 = _T6B;
	  void * _T76[1];
	  _T76[0] = &_T75;
	  _T6D = Cyc_Warn_impos;
	  { int (* _T77)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								     struct _fat_ptr))_T6D;
	    _T6C = _T77;
	  }_T6E = _tag_fat("get_access on bad pattern: %s",sizeof(char),30U);
	  _T6F = _tag_fat(_T76,sizeof(void *),1);
	  _T6C(_T6E,_T6F);
	}
      }
      ;
    }
  };
}
 struct _tuple26 {
  struct Cyc_List_List * f0;
  struct Cyc_Tcpat_Con_s * f1;
};
static struct Cyc_List_List * Cyc_Tcpat_getoarg(struct _tuple26 * env,int i) {
  struct _tuple26 * _T0;
  struct Cyc_Tcpat_Con_s * _T1;
  union Cyc_Tcpat_PatOrWhere _T2;
  int _T3;
  struct Cyc_List_List * _T4;
  struct Cyc_Tcpat_PathNode * _T5;
  struct Cyc_Tcpat_Con_s * _T6;
  struct Cyc_Tcpat_Con_s * _T7;
  struct Cyc_List_List * _T8;
  _T0 = env;
  { struct _tuple26 _T9 = *_T0;
    _T8 = _T9.f0;
    _T7 = _T9.f1;
  }{ struct Cyc_List_List * obj = _T8;
    struct Cyc_Tcpat_Con_s * pcon = _T7;
    _T1 = pcon;
    _T2 = _T1->orig_pat;
    _T3 = i;
    { void * acc = Cyc_Tcpat_get_access(_T2,_T3);
      { struct Cyc_List_List * _T9 = _cycalloc(sizeof(struct Cyc_List_List));
	{ struct Cyc_Tcpat_PathNode * _TA = _cycalloc(sizeof(struct Cyc_Tcpat_PathNode));
	  _T6 = pcon;
	  _TA->orig_pat = _T6->orig_pat;
	  _TA->access = acc;
	  _T5 = (struct Cyc_Tcpat_PathNode *)_TA;
	}_T9->hd = _T5;
	_T9->tl = obj;
	_T4 = (struct Cyc_List_List *)_T9;
      }return _T4;
    }
  }
}
static struct Cyc_List_List * Cyc_Tcpat_getoargs(struct Cyc_Tcpat_Con_s * pcon,
						 struct Cyc_List_List * obj) {
  struct _tuple26 _T0;
  struct Cyc_List_List * (* _T1)(int,struct Cyc_List_List * (*)(struct _tuple26 *,
								int),struct _tuple26 *);
  struct Cyc_List_List * (* _T2)(int,void * (*)(void *,int),void *);
  struct Cyc_Tcpat_Con_s * _T3;
  int _T4;
  struct _tuple26 * _T5;
  struct Cyc_List_List * _T6;
  { struct _tuple26 _T7;
    _T7.f0 = obj;
    _T7.f1 = pcon;
    _T0 = _T7;
  }{ struct _tuple26 env = _T0;
    _T2 = Cyc_List_tabulate_c;
    { struct Cyc_List_List * (* _T7)(int,struct Cyc_List_List * (*)(struct _tuple26 *,
								    int),
				     struct _tuple26 *) = (struct Cyc_List_List * (*)(int,
										      struct Cyc_List_List * (*)(struct _tuple26 *,
														 int),
										      struct _tuple26 *))_T2;
      _T1 = _T7;
    }_T3 = pcon;
    _T4 = _T3->arity;
    _T5 = &env;
    _T6 = _T1(_T4,Cyc_Tcpat_getoarg,_T5);
    return _T6;
  }
}
static void * Cyc_Tcpat_match(void * p,struct Cyc_List_List * obj,void * dsc,
			      struct Cyc_List_List * ctx,struct Cyc_List_List * work,
			      struct Cyc_Tcpat_Rhs * right_hand_side,struct Cyc_List_List * rules) {
  void * _T0;
  int * _T1;
  int _T2;
  struct Cyc_List_List * _T3;
  struct Cyc_List_List * _T4;
  struct Cyc_Tcpat_Rhs * _T5;
  struct Cyc_List_List * _T6;
  void * _T7;
  void * _T8;
  int _T9;
  struct Cyc_List_List * _TA;
  struct _tuple24 * _TB;
  struct Cyc_List_List * _TC;
  struct _tuple23 * _TD;
  struct _tuple23 * _TE;
  struct _tuple23 * _TF;
  struct Cyc_List_List * _T10;
  struct Cyc_List_List * _T11;
  void * _T12;
  void * _T13;
  struct Cyc_List_List * _T14;
  void * _T15;
  struct Cyc_List_List * _T16;
  struct _tuple24 * _T17;
  struct Cyc_List_List * _T18;
  struct _tuple23 * _T19;
  struct _tuple23 * _T1A;
  struct _tuple23 * _T1B;
  struct Cyc_List_List * _T1C;
  struct Cyc_List_List * _T1D;
  struct Cyc_List_List * _T1E;
  void * _T1F;
  struct Cyc_List_List * _T20;
  void * _T21;
  struct Cyc_List_List * _T22;
  void * _T23;
  struct Cyc_List_List * _T24;
  struct Cyc_Tcpat_Con_s * _T25;
  _T0 = p;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  if (_T2 != 0) { goto _TL20C;
  }
  _T3 = Cyc_Tcpat_augment(ctx,dsc);
  _T4 = work;
  _T5 = right_hand_side;
  _T6 = rules;
  _T7 = Cyc_Tcpat_and_match(_T3,_T4,_T5,_T6);
  return _T7;
  _TL20C: _T8 = p;
  { struct Cyc_Tcpat_Con_Tcpat_Simple_pat_struct * _T26 = (struct Cyc_Tcpat_Con_Tcpat_Simple_pat_struct *)_T8;
    _T25 = _T26->f1;
    _T24 = _T26->f2;
  }{ struct Cyc_Tcpat_Con_s * pcon = _T25;
    struct Cyc_List_List * pargs = _T24;
    enum Cyc_Tcpat_Answer _T26 = Cyc_Tcpat_static_match(pcon,dsc);
    _T9 = (int)_T26;
    switch (_T9) {
    case Cyc_Tcpat_Yes: 
      { struct Cyc_List_List * ctx2;
	ctx2 = _cycalloc(sizeof(struct Cyc_List_List));
	_TA = ctx2;
	{ struct _tuple24 * _T27 = _cycalloc(sizeof(struct _tuple24));
	  _T27->f0 = pcon;
	  _T27->f1 = 0;
	  _TB = (struct _tuple24 *)_T27;
	}_TA->hd = _TB;
	_TC = ctx2;
	_TC->tl = ctx;
	{ struct _tuple23 * work_frame;
	  work_frame = _cycalloc(sizeof(struct _tuple23));
	  _TD = work_frame;
	  _TD->f0 = pargs;
	  _TE = work_frame;
	  _TE->f1 = Cyc_Tcpat_getoargs(pcon,obj);
	  _TF = work_frame;
	  _TF->f2 = Cyc_Tcpat_getdargs(pcon,dsc);
	  { struct Cyc_List_List * work2;
	    work2 = _cycalloc(sizeof(struct Cyc_List_List));
	    _T10 = work2;
	    _T10->hd = work_frame;
	    _T11 = work2;
	    _T11->tl = work;
	    _T12 = Cyc_Tcpat_and_match(ctx2,work2,right_hand_side,rules);
	    return _T12;
	  }
	}
      }
    case Cyc_Tcpat_No: 
      _T13 = Cyc_Tcpat_build_desc(ctx,dsc,work);
      _T14 = rules;
      _T15 = Cyc_Tcpat_or_match(_T13,_T14);
      return _T15;
    default: 
      { struct Cyc_List_List * ctx2;
	ctx2 = _cycalloc(sizeof(struct Cyc_List_List));
	_T16 = ctx2;
	{ struct _tuple24 * _T27 = _cycalloc(sizeof(struct _tuple24));
	  _T27->f0 = pcon;
	  _T27->f1 = 0;
	  _T17 = (struct _tuple24 *)_T27;
	}_T16->hd = _T17;
	_T18 = ctx2;
	_T18->tl = ctx;
	{ struct _tuple23 * work_frame;
	  work_frame = _cycalloc(sizeof(struct _tuple23));
	  _T19 = work_frame;
	  _T19->f0 = pargs;
	  _T1A = work_frame;
	  _T1A->f1 = Cyc_Tcpat_getoargs(pcon,obj);
	  _T1B = work_frame;
	  _T1B->f2 = Cyc_Tcpat_getdargs(pcon,dsc);
	  { struct Cyc_List_List * work2;
	    work2 = _cycalloc(sizeof(struct Cyc_List_List));
	    _T1C = work2;
	    _T1C->hd = work_frame;
	    _T1D = work2;
	    _T1D->tl = work;
	    { void * s = Cyc_Tcpat_and_match(ctx2,work2,right_hand_side,rules);
	      _T1E = ctx;
	      _T1F = Cyc_Tcpat_add_neg(dsc,pcon);
	      _T20 = work;
	      _T21 = Cyc_Tcpat_build_desc(_T1E,_T1F,_T20);
	      _T22 = rules;
	      { void * f = Cyc_Tcpat_or_match(_T21,_T22);
		_T23 = Cyc_Tcpat_ifeq(obj,pcon,s,f);
		return _T23;
	      }
	    }
	  }
	}
      }
    }
    ;
  };
}
static void Cyc_Tcpat_check_exhaust_overlap(void * d,void (* not_exhaust)(void *,
									  void *),
					    void * env1,void (* rhs_appears)(void *,
									     struct Cyc_Tcpat_Rhs *),
					    void * env2,long * exhaust_done) {
  void * _T0;
  int * _T1;
  unsigned int _T2;
  void * _T3;
  void * _T4;
  long * _T5;
  long _T6;
  long * _T7;
  void * _T8;
  void * _T9;
  void * _TA;
  struct Cyc_List_List * _TB;
  void * _TC;
  struct _tuple0 * _TD;
  void * _TE;
  void (* _TF)(void *,void *);
  void * _T10;
  void (* _T11)(void *,struct Cyc_Tcpat_Rhs *);
  void * _T12;
  long * _T13;
  struct Cyc_List_List * _T14;
  void * _T15;
  void (* _T16)(void *,void *);
  void * _T17;
  void (* _T18)(void *,struct Cyc_Tcpat_Rhs *);
  void * _T19;
  long * _T1A;
  struct Cyc_List_List * _T1B;
  void * _T1C;
  _T0 = d;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  switch (_T2) {
  case 0: 
    _T3 = d;
    { struct Cyc_Tcpat_Failure_Tcpat_Decision_struct * _T1D = (struct Cyc_Tcpat_Failure_Tcpat_Decision_struct *)_T3;
      _T4 = _T1D->f1;
      _T1C = (void *)_T4;
    }{ void * td = _T1C;
      _T5 = exhaust_done;
      _T6 = *_T5;
      if (_T6) { goto _TL210;
      }else { goto _TL212;
      }
      _TL212: not_exhaust(env1,td);
      _T7 = exhaust_done;
      *_T7 = 1;
      goto _TL211;
      _TL210: _TL211: goto _LL0;
    }
  case 1: 
    _T8 = d;
    { struct Cyc_Tcpat_Success_Tcpat_Decision_struct * _T1D = (struct Cyc_Tcpat_Success_Tcpat_Decision_struct *)_T8;
      _T1C = _T1D->f1;
    }{ struct Cyc_Tcpat_Rhs * r = _T1C;
      rhs_appears(env2,r);
      goto _LL0;
    }
  default: 
    _T9 = d;
    { struct Cyc_Tcpat_SwitchDec_Tcpat_Decision_struct * _T1D = (struct Cyc_Tcpat_SwitchDec_Tcpat_Decision_struct *)_T9;
      _T1B = _T1D->f2;
      _TA = _T1D->f3;
      _T1C = (void *)_TA;
    }{ struct Cyc_List_List * cases = _T1B;
      void * def = _T1C;
      _TL216: if (cases != 0) { goto _TL214;
      }else { goto _TL215;
      }
      _TL214: _TB = cases;
      _TC = _TB->hd;
      _TD = (struct _tuple0 *)_TC;
      { struct _tuple0 _T1D = *_TD;
	void * _T1E;
	_T1E = _T1D.f1;
	{ void * d = _T1E;
	  _TE = d;
	  _TF = not_exhaust;
	  _T10 = env1;
	  _T11 = rhs_appears;
	  _T12 = env2;
	  _T13 = exhaust_done;
	  Cyc_Tcpat_check_exhaust_overlap(_TE,_TF,_T10,_T11,_T12,_T13);
	}
      }_T14 = cases;
      cases = _T14->tl;
      goto _TL216;
      _TL215: _T15 = def;
      _T16 = not_exhaust;
      _T17 = env1;
      _T18 = rhs_appears;
      _T19 = env2;
      _T1A = exhaust_done;
      Cyc_Tcpat_check_exhaust_overlap(_T15,_T16,_T17,_T18,_T19,_T1A);
      goto _LL0;
    }
  }
  _LL0: ;
}
static struct _tuple25 * Cyc_Tcpat_get_match(int * ctr,struct Cyc_Absyn_Switch_clause * swc) {
  struct Cyc_Absyn_Switch_clause * _T0;
  struct Cyc_Absyn_Pat * _T1;
  struct Cyc_Tcpat_Rhs * _T2;
  struct Cyc_Tcpat_Rhs * _T3;
  struct Cyc_Absyn_Switch_clause * _T4;
  struct Cyc_Absyn_Pat * _T5;
  struct Cyc_Tcpat_Rhs * _T6;
  struct Cyc_Absyn_Switch_clause * _T7;
  struct Cyc_Absyn_Switch_clause * _T8;
  struct Cyc_Absyn_Exp * _T9;
  union Cyc_Tcpat_PatOrWhere _TA;
  struct Cyc_Absyn_Switch_clause * _TB;
  struct Cyc_List_List * _TC;
  int * _TD;
  int _TE;
  union Cyc_Tcpat_PatOrWhere _TF;
  struct _fat_ptr _T10;
  union Cyc_Tcpat_PatOrWhere _T11;
  int * _T12;
  int * _T13;
  int _T14;
  struct Cyc_List_List * _T15;
  struct Cyc_Tcpat_Any_Tcpat_Simple_pat_struct * _T16;
  struct _fat_ptr _T17;
  union Cyc_Tcpat_PatOrWhere _T18;
  struct _tuple25 * _T19;
  _T0 = swc;
  _T1 = _T0->pattern;
  { void * sp0 = Cyc_Tcpat_compile_pat(_T1);
    struct Cyc_Tcpat_Rhs * rhs;
    rhs = _cycalloc(sizeof(struct Cyc_Tcpat_Rhs));
    _T2 = rhs;
    _T2->used = 0;
    _T3 = rhs;
    _T4 = swc;
    _T5 = _T4->pattern;
    _T3->pat_loc = _T5->loc;
    _T6 = rhs;
    _T7 = swc;
    _T6->rhs = _T7->body;
    { void * sp;
      _T8 = swc;
      _T9 = _T8->where_clause;
      if (_T9 == 0) { goto _TL217;
      }
      { union Cyc_Tcpat_PatOrWhere _T1A;
	(_T1A.where_clause).tag = 2U;
	_TB = swc;
	(_T1A.where_clause).val = _TB->where_clause;
	_TA = _T1A;
      }{ union Cyc_Tcpat_PatOrWhere w = _TA;
	{ void * _T1A[2];
	  _T1A[0] = sp0;
	  _TD = ctr;
	  _TE = *_TD;
	  _TF = w;
	  _T1A[1] = Cyc_Tcpat_int_pat(_TE,_TF);
	  _T10 = _tag_fat(_T1A,sizeof(void *),2);
	  _TC = Cyc_List_list(_T10);
	}_T11 = w;
	sp = Cyc_Tcpat_tuple_pat(_TC,_T11);
	_T12 = ctr;
	_T13 = ctr;
	_T14 = *_T13;
	*_T12 = _T14 + 1;
      }goto _TL218;
      _TL217: { void * _T1A[2];
	_T1A[0] = sp0;
	{ struct Cyc_Tcpat_Any_Tcpat_Simple_pat_struct * _T1B = _cycalloc(sizeof(struct Cyc_Tcpat_Any_Tcpat_Simple_pat_struct));
	  _T1B->tag = 0;
	  _T16 = (struct Cyc_Tcpat_Any_Tcpat_Simple_pat_struct *)_T1B;
	}_T1A[1] = (void *)_T16;
	_T17 = _tag_fat(_T1A,sizeof(void *),2);
	_T15 = Cyc_List_list(_T17);
      }{ union Cyc_Tcpat_PatOrWhere _T1A;
	(_T1A.where_clause).tag = 2U;
	(_T1A.where_clause).val = 0;
	_T18 = _T1A;
      }sp = Cyc_Tcpat_tuple_pat(_T15,_T18);
      _TL218: { struct _tuple25 * _T1A = _cycalloc(sizeof(struct _tuple25));
	_T1A->f0 = sp;
	_T1A->f1 = rhs;
	_T19 = (struct _tuple25 *)_T1A;
      }return _T19;
    }
  }
}
char Cyc_Tcpat_Desc2string[12U] = "Desc2string";
 struct Cyc_Tcpat_Desc2string_exn_struct {
  char * tag;
};
struct Cyc_Tcpat_Desc2string_exn_struct Cyc_Tcpat_Desc2string_val = {Cyc_Tcpat_Desc2string};
static struct _fat_ptr Cyc_Tcpat_descs2string(struct Cyc_List_List *);
static struct _fat_ptr Cyc_Tcpat_desc2string(void * d) {
  void * _T0;
  int * _T1;
  int _T2;
  void * _T3;
  struct Cyc_Tcpat_Con_s * _T4;
  struct Cyc_Tcpat_Con_s * _T5;
  struct _union_PatOrWhere_where_clause _T6;
  unsigned int _T7;
  struct Cyc_List_List * _T8;
  void * _T9;
  struct _fat_ptr _TA;
  struct _union_PatOrWhere_pattern _TB;
  struct Cyc_Absyn_Pat * _TC;
  int * _TD;
  unsigned int _TE;
  struct _fat_ptr _TF;
  struct Cyc_Absyn_Vardecl * _T10;
  struct _tuple2 * _T11;
  struct _fat_ptr _T12;
  struct _fat_ptr _T13;
  struct Cyc_String_pa_PrintArg_struct _T14;
  struct Cyc_Absyn_Vardecl * _T15;
  struct _tuple2 * _T16;
  struct _fat_ptr _T17;
  struct _fat_ptr _T18;
  struct _fat_ptr _T19;
  struct Cyc_String_pa_PrintArg_struct _T1A;
  struct Cyc_Absyn_Vardecl * _T1B;
  struct _tuple2 * _T1C;
  struct Cyc_String_pa_PrintArg_struct _T1D;
  struct Cyc_Absyn_Tvar * _T1E;
  struct _fat_ptr * _T1F;
  struct _fat_ptr _T20;
  struct _fat_ptr _T21;
  struct _fat_ptr _T22;
  struct Cyc_String_pa_PrintArg_struct _T23;
  struct _fat_ptr _T24;
  struct _fat_ptr _T25;
  void * _T26;
  void * _T27;
  int * _T28;
  unsigned int _T29;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T2A;
  void * _T2B;
  int * _T2C;
  int _T2D;
  void * _T2E;
  struct Cyc_Absyn_Aggrdecl * _T2F;
  enum Cyc_Absyn_AggrKind _T30;
  int _T31;
  struct Cyc_List_List * _T32;
  struct Cyc_List_List * _T33;
  struct _tuple18 * _T34;
  struct _tuple18 * _T35;
  struct Cyc_List_List * _T36;
  struct Cyc_List_List * _T37;
  struct Cyc_List_List * _T38;
  struct _tuple18 * _T39;
  struct _tuple18 * _T3A;
  struct Cyc_List_List * _T3B;
  struct Cyc_List_List * _T3C;
  void * _T3D;
  int * _T3E;
  int _T3F;
  struct Cyc_List_List * _T40;
  void * _T41;
  struct _tuple18 * _T42;
  struct Cyc_List_List * _T43;
  void * _T44;
  struct _fat_ptr _T45;
  struct Cyc_String_pa_PrintArg_struct _T46;
  struct Cyc_Absyn_Aggrdecl * _T47;
  struct _tuple2 * _T48;
  struct Cyc_String_pa_PrintArg_struct _T49;
  struct _fat_ptr * _T4A;
  struct Cyc_String_pa_PrintArg_struct _T4B;
  struct _fat_ptr _T4C;
  struct _fat_ptr _T4D;
  struct _fat_ptr _T4E;
  struct Cyc_String_pa_PrintArg_struct _T4F;
  struct Cyc_Absyn_Aggrdecl * _T50;
  struct _tuple2 * _T51;
  struct Cyc_String_pa_PrintArg_struct _T52;
  struct _fat_ptr _T53;
  struct _fat_ptr _T54;
  long _T55;
  struct _fat_ptr _T56;
  struct Cyc_String_pa_PrintArg_struct _T57;
  struct _fat_ptr _T58;
  struct _fat_ptr _T59;
  struct _fat_ptr _T5A;
  struct Cyc_String_pa_PrintArg_struct _T5B;
  struct _fat_ptr _T5C;
  struct _fat_ptr _T5D;
  struct Cyc_Warn_String_Warn_Warg_struct _T5E;
  int (* _T5F)(struct _fat_ptr);
  void * (* _T60)(struct _fat_ptr);
  struct _fat_ptr _T61;
  struct _fat_ptr _T62;
  struct Cyc_String_pa_PrintArg_struct _T63;
  struct Cyc_Absyn_Datatypefield * _T64;
  struct _tuple2 * _T65;
  struct _fat_ptr _T66;
  struct _fat_ptr _T67;
  struct _fat_ptr _T68;
  struct Cyc_String_pa_PrintArg_struct _T69;
  struct Cyc_Absyn_Datatypefield * _T6A;
  struct _tuple2 * _T6B;
  struct Cyc_String_pa_PrintArg_struct _T6C;
  struct _fat_ptr _T6D;
  struct _fat_ptr _T6E;
  struct _fat_ptr _T6F;
  struct _fat_ptr _T70;
  struct Cyc_Int_pa_PrintArg_struct _T71;
  int _T72;
  struct _fat_ptr _T73;
  struct _fat_ptr _T74;
  struct _fat_ptr _T75;
  struct Cyc_Int_pa_PrintArg_struct _T76;
  char _T77;
  int _T78;
  struct _fat_ptr _T79;
  struct _fat_ptr _T7A;
  struct _fat_ptr _T7B;
  struct Cyc_Absyn_Enumfield * _T7C;
  struct _tuple2 * _T7D;
  struct _fat_ptr _T7E;
  struct _fat_ptr _T7F;
  struct Cyc_Tcpat_Desc2string_exn_struct * _T80;
  struct Cyc_Tcpat_Desc2string_exn_struct * _T81;
  void * _T82;
  long _T83;
  struct _fat_ptr _T84;
  struct Cyc_Tcpat_Con_s * (* _T85)(struct Cyc_Set_Set *);
  void * (* _T86)(struct Cyc_Set_Set *);
  struct Cyc_Tcpat_Con_s * _T87;
  union Cyc_Tcpat_PatOrWhere _T88;
  struct _union_PatOrWhere_where_clause _T89;
  unsigned int _T8A;
  unsigned int _T8B;
  int _T8C;
  struct Cyc_Tcpat_Desc2string_exn_struct * _T8D;
  struct Cyc_Tcpat_Desc2string_exn_struct * _T8E;
  struct Cyc_Absyn_Pat * _T8F;
  struct Cyc_Tcpat_Con_s * _T90;
  struct _union_PatOrWhere_pattern _T91;
  unsigned int _T92;
  struct _union_PatOrWhere_pattern _T93;
  struct Cyc_Absyn_Pat * _T94;
  void * _T95;
  int * _T96;
  unsigned int _T97;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T98;
  void * _T99;
  int * _T9A;
  unsigned int _T9B;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T9C;
  void * _T9D;
  struct Cyc_Absyn_IntCon_Absyn_TyCon_struct * _T9E;
  enum Cyc_Absyn_Size_of _T9F;
  long (* _TA0)(struct Cyc_Set_Set *,struct Cyc_Tcpat_Con_s *);
  long (* _TA1)(struct Cyc_Set_Set *,void *);
  struct Cyc_Set_Set * _TA2;
  int _TA3;
  char _TA4;
  struct Cyc_Absyn_Pat * _TA5;
  struct Cyc_Tcpat_Con_s * _TA6;
  long _TA7;
  struct _fat_ptr _TA8;
  struct Cyc_Int_pa_PrintArg_struct _TA9;
  int _TAA;
  struct _fat_ptr _TAB;
  struct _fat_ptr _TAC;
  struct Cyc_Tcpat_Desc2string_exn_struct * _TAD;
  struct Cyc_Tcpat_Desc2string_exn_struct * _TAE;
  long (* _TAF)(struct Cyc_Set_Set *,struct Cyc_Tcpat_Con_s *);
  long (* _TB0)(struct Cyc_Set_Set *,void *);
  struct Cyc_Set_Set * _TB1;
  unsigned int _TB2;
  int _TB3;
  struct Cyc_Tcpat_Con_s * _TB4;
  union Cyc_Tcpat_PatOrWhere _TB5;
  struct Cyc_Tcpat_Con_s * _TB6;
  long _TB7;
  struct _fat_ptr _TB8;
  struct Cyc_Int_pa_PrintArg_struct _TB9;
  unsigned int _TBA;
  int _TBB;
  struct _fat_ptr _TBC;
  struct _fat_ptr _TBD;
  struct Cyc_Tcpat_Desc2string_exn_struct * _TBE;
  struct Cyc_Tcpat_Desc2string_exn_struct * _TBF;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _TC0;
  void * _TC1;
  struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct * _TC2;
  union Cyc_Absyn_DatatypeInfo _TC3;
  struct _union_DatatypeInfo_KnownDatatype _TC4;
  unsigned int _TC5;
  void * _TC6;
  union Cyc_Absyn_DatatypeInfo _TC7;
  struct _union_DatatypeInfo_KnownDatatype _TC8;
  struct Cyc_Absyn_Datatypedecl * * _TC9;
  struct Cyc_Absyn_Datatypedecl * _TCA;
  long _TCB;
  struct Cyc_Tcpat_Desc2string_exn_struct * _TCC;
  struct Cyc_Tcpat_Desc2string_exn_struct * _TCD;
  struct Cyc_Absyn_Datatypedecl * _TCE;
  struct Cyc_Core_Opt * _TCF;
  struct Cyc_Core_Opt * _TD0;
  void * _TD1;
  struct Cyc_List_List * _TD2;
  unsigned int _TD3;
  struct Cyc_List_List * _TD4;
  void * _TD5;
  struct Cyc_Absyn_Datatypefield * _TD6;
  struct _tuple2 * _TD7;
  struct _tuple2 _TD8;
  struct _fat_ptr * _TD9;
  struct Cyc_List_List * _TDA;
  void * _TDB;
  struct Cyc_Absyn_Datatypefield * _TDC;
  long (* _TDD)(struct Cyc_Set_Set *,struct Cyc_Tcpat_Con_s *);
  long (* _TDE)(struct Cyc_Set_Set *,void *);
  struct Cyc_Set_Set * _TDF;
  struct Cyc_Tcpat_Con_s * _TE0;
  struct Cyc_Tcpat_Con_s * _TE1;
  long _TE2;
  struct _fat_ptr _TE3;
  int _TE4;
  struct _fat_ptr _TE5;
  struct Cyc_String_pa_PrintArg_struct _TE6;
  struct _fat_ptr _TE7;
  struct _fat_ptr _TE8;
  struct Cyc_List_List * _TE9;
  struct Cyc_Tcpat_Desc2string_exn_struct * _TEA;
  struct Cyc_Tcpat_Desc2string_exn_struct * _TEB;
  void * _TEC;
  struct Cyc_Absyn_Aggrdecl * _TED;
  enum Cyc_Absyn_AggrKind _TEE;
  int _TEF;
  struct Cyc_Tcpat_Desc2string_exn_struct * _TF0;
  struct Cyc_Tcpat_Desc2string_exn_struct * _TF1;
  struct Cyc_Absyn_Aggrdecl * _TF2;
  struct Cyc_Absyn_AggrdeclImpl * _TF3;
  struct Cyc_Absyn_AggrdeclImpl * _TF4;
  struct Cyc_Absyn_Aggrdecl * _TF5;
  struct _fat_ptr * _TF6;
  struct Cyc_List_List * _TF7;
  unsigned int _TF8;
  struct Cyc_List_List * _TF9;
  void * _TFA;
  struct Cyc_Absyn_Aggrfield * _TFB;
  struct _fat_ptr * _TFC;
  long (* _TFD)(struct Cyc_Set_Set *,struct Cyc_Tcpat_Con_s *);
  long (* _TFE)(struct Cyc_Set_Set *,void *);
  struct Cyc_Set_Set * _TFF;
  struct Cyc_Tcpat_Con_s * _T100;
  struct Cyc_Tcpat_Con_s * _T101;
  long _T102;
  struct _fat_ptr _T103;
  struct Cyc_String_pa_PrintArg_struct _T104;
  struct Cyc_String_pa_PrintArg_struct _T105;
  struct _fat_ptr _T106;
  struct _fat_ptr _T107;
  struct Cyc_List_List * _T108;
  struct Cyc_Tcpat_Desc2string_exn_struct * _T109;
  struct Cyc_Tcpat_Desc2string_exn_struct * _T10A;
  struct Cyc_Absyn_PtrInfo _T10B;
  struct Cyc_Absyn_PtrAtts _T10C;
  long _T10D;
  long (* _T10E)(struct Cyc_Set_Set *,struct Cyc_Tcpat_Con_s *);
  long (* _T10F)(struct Cyc_Set_Set *,void *);
  struct Cyc_Set_Set * _T110;
  struct Cyc_Tcpat_Con_s * _T111;
  long _T112;
  struct _fat_ptr _T113;
  struct _fat_ptr _T114;
  struct Cyc_Tcpat_Desc2string_exn_struct * _T115;
  struct Cyc_Tcpat_Desc2string_exn_struct * _T116;
  struct Cyc_Set_Set * _T117;
  struct Cyc_List_List * _T118;
  struct Cyc_Tcpat_Con_s * _T119;
  _T0 = d;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  if (_T2 != 0) { goto _TL219;
  }
  _T3 = d;
  { struct Cyc_Tcpat_Pos_Tcpat_Term_desc_struct * _T11A = (struct Cyc_Tcpat_Pos_Tcpat_Term_desc_struct *)_T3;
    _T119 = _T11A->f1;
    _T118 = _T11A->f2;
  }{ struct Cyc_Tcpat_Con_s * c = _T119;
    struct Cyc_List_List * ds = _T118;
    _T4 = c;
    { union Cyc_Tcpat_Name_value n = _T4->name;
      struct Cyc_Absyn_Pat * p;
      _T5 = c;
      { union Cyc_Tcpat_PatOrWhere _T11A = _T5->orig_pat;
	struct Cyc_Absyn_Pat * _T11B;
	_T6 = _T11A.where_clause;
	_T7 = _T6.tag;
	if (_T7 != 2) { goto _TL21B;
	}
	_T8 = _check_null(ds);
	_T9 = _T8->hd;
	_TA = Cyc_Tcpat_desc2string(_T9);
	return _TA;
	_TL21B: _TB = _T11A.pattern;
	_T11B = _TB.val;
	{ struct Cyc_Absyn_Pat * p2 = _T11B;
	  p = p2;
	  goto _LL5;
	}_LL5: ;
      }_TC = p;
      { void * _T11A = _TC->r;
	struct Cyc_Absyn_Exp * _T11B;
	struct Cyc_Absyn_Enumfield * _T11C;
	struct _fat_ptr _T11D;
	char _T11E;
	int _T11F;
	struct Cyc_Absyn_Datatypefield * _T120;
	struct Cyc_List_List * _T121;
	struct Cyc_Absyn_Vardecl * _T122;
	void * _T123;
	_TD = (int *)_T11A;
	_TE = *_TD;
	switch (_TE) {
	case 0: 
	  _TF = _tag_fat("_",sizeof(char),2U);
	  return _TF;
	case 1: 
	  { struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct * _T124 = (struct Cyc_Absyn_Var_p_Absyn_Raw_pat_struct *)_T11A;
	    _T123 = _T124->f1;
	  }{ struct Cyc_Absyn_Vardecl * vd = _T123;
	    _T10 = vd;
	    _T11 = _T10->name;
	    _T12 = Cyc_Absynpp_qvar2string(_T11);
	    return _T12;
	  }
	case 3: 
	  { struct Cyc_Absyn_Reference_p_Absyn_Raw_pat_struct * _T124 = (struct Cyc_Absyn_Reference_p_Absyn_Raw_pat_struct *)_T11A;
	    _T123 = _T124->f1;
	  }{ struct Cyc_Absyn_Vardecl * vd = _T123;
	    { struct Cyc_String_pa_PrintArg_struct _T124;
	      _T124.tag = 0;
	      _T15 = vd;
	      _T16 = _T15->name;
	      _T124.f1 = Cyc_Absynpp_qvar2string(_T16);
	      _T14 = _T124;
	    }{ struct Cyc_String_pa_PrintArg_struct _T124 = _T14;
	      void * _T125[1];
	      _T125[0] = &_T124;
	      _T17 = _tag_fat("*%s",sizeof(char),4U);
	      _T18 = _tag_fat(_T125,sizeof(void *),1);
	      _T13 = Cyc_aprintf(_T17,_T18);
	    }return _T13;
	  }
	case 4: 
	  { struct Cyc_Absyn_TagInt_p_Absyn_Raw_pat_struct * _T124 = (struct Cyc_Absyn_TagInt_p_Absyn_Raw_pat_struct *)_T11A;
	    _T123 = _T124->f1;
	    _T122 = _T124->f2;
	  }{ struct Cyc_Absyn_Tvar * tv = _T123;
	    struct Cyc_Absyn_Vardecl * vd = _T122;
	    { struct Cyc_String_pa_PrintArg_struct _T124;
	      _T124.tag = 0;
	      _T1B = vd;
	      _T1C = _T1B->name;
	      _T124.f1 = Cyc_Absynpp_qvar2string(_T1C);
	      _T1A = _T124;
	    }{ struct Cyc_String_pa_PrintArg_struct _T124 = _T1A;
	      { struct Cyc_String_pa_PrintArg_struct _T125;
		_T125.tag = 0;
		_T1E = tv;
		_T1F = _T1E->name;
		_T125.f1 = *_T1F;
		_T1D = _T125;
	      }{ struct Cyc_String_pa_PrintArg_struct _T125 = _T1D;
		void * _T126[2];
		_T126[0] = &_T124;
		_T126[1] = &_T125;
		_T20 = _tag_fat("%s<`%s>",sizeof(char),8U);
		_T21 = _tag_fat(_T126,sizeof(void *),2);
		_T19 = Cyc_aprintf(_T20,_T21);
	      }
	    }return _T19;
	  }
	case 5: 
	  { struct Cyc_String_pa_PrintArg_struct _T124;
	    _T124.tag = 0;
	    _T124.f1 = Cyc_Tcpat_descs2string(ds);
	    _T23 = _T124;
	  }{ struct Cyc_String_pa_PrintArg_struct _T124 = _T23;
	    void * _T125[1];
	    _T125[0] = &_T124;
	    _T24 = _tag_fat("&%s",sizeof(char),4U);
	    _T25 = _tag_fat(_T125,sizeof(void *),1);
	    _T22 = Cyc_aprintf(_T24,_T25);
	  }return _T22;
	case 6: 
	  { struct Cyc_Absyn_Aggr_p_Absyn_Raw_pat_struct * _T124 = (struct Cyc_Absyn_Aggr_p_Absyn_Raw_pat_struct *)_T11A;
	    _T26 = _T124->f1;
	    _T123 = (void *)_T26;
	    _T121 = _T124->f4;
	  }{ void * atype = _T123;
	    struct Cyc_List_List * dlps = _T121;
	    _T27 = _check_null(atype);
	    { void * _T124 = Cyc_Absyn_compress(_T27);
	      long _T125;
	      union Cyc_Absyn_AggrInfo _T126;
	      _T28 = (int *)_T124;
	      _T29 = *_T28;
	      switch (_T29) {
	      case 0: 
		_T2A = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T124;
		_T2B = _T2A->f1;
		_T2C = (int *)_T2B;
		_T2D = *_T2C;
		if (_T2D != 24) { goto _TL21F;
		}
		{ struct Cyc_Absyn_AppType_Absyn_Type_struct * _T127 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T124;
		  _T2E = _T127->f1;
		  { struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct * _T128 = (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct *)_T2E;
		    _T126 = _T128->f1;
		  }
		}{ union Cyc_Absyn_AggrInfo ainfo = _T126;
		  struct Cyc_Absyn_Aggrdecl * ad = Cyc_Absyn_get_known_aggrdecl(ainfo);
		  _T2F = ad;
		  _T30 = _T2F->kind;
		  _T31 = (int)_T30;
		  if (_T31 != 1) { goto _TL221;
		  }
		  { struct _fat_ptr * _T127;
		    if (dlps == 0) { goto _TL223;
		    }
		    _T32 = dlps;
		    _T33 = (struct Cyc_List_List *)_T32;
		    _T34 = _T33->hd;
		    _T35 = (struct _tuple18 *)_T34;
		    _T36 = _T35->f0;
		    if (_T36 == 0) { goto _TL225;
		    }
		    _T37 = dlps;
		    _T38 = (struct Cyc_List_List *)_T37;
		    _T39 = _T38->hd;
		    _T3A = (struct _tuple18 *)_T39;
		    _T3B = _T3A->f0;
		    _T3C = (struct Cyc_List_List *)_T3B;
		    _T3D = _T3C->hd;
		    _T3E = (int *)_T3D;
		    _T3F = *_T3E;
		    if (_T3F != 1) { goto _TL227;
		    }
		    _T40 = dlps;
		    { struct Cyc_List_List _T128 = *_T40;
		      _T41 = _T128.hd;
		      _T42 = (struct _tuple18 *)_T41;
		      { struct _tuple18 _T129 = *_T42;
			_T43 = _T129.f0;
			{ struct Cyc_List_List _T12A = *_T43;
			  _T44 = _T12A.hd;
			  { struct Cyc_Absyn_FieldName_Absyn_Designator_struct * _T12B = (struct Cyc_Absyn_FieldName_Absyn_Designator_struct *)_T44;
			    _T127 = _T12B->f1;
			  }
			}
		      }
		    }{ struct _fat_ptr * f = _T127;
		      { struct Cyc_String_pa_PrintArg_struct _T128;
			_T128.tag = 0;
			_T47 = ad;
			_T48 = _T47->name;
			_T128.f1 = Cyc_Absynpp_qvar2string(_T48);
			_T46 = _T128;
		      }{ struct Cyc_String_pa_PrintArg_struct _T128 = _T46;
			{ struct Cyc_String_pa_PrintArg_struct _T129;
			  _T129.tag = 0;
			  _T4A = f;
			  _T129.f1 = *_T4A;
			  _T49 = _T129;
			}{ struct Cyc_String_pa_PrintArg_struct _T129 = _T49;
			  { struct Cyc_String_pa_PrintArg_struct _T12A;
			    _T12A.tag = 0;
			    _T12A.f1 = Cyc_Tcpat_descs2string(ds);
			    _T4B = _T12A;
			  }{ struct Cyc_String_pa_PrintArg_struct _T12A = _T4B;
			    void * _T12B[3];
			    _T12B[0] = &_T128;
			    _T12B[1] = &_T129;
			    _T12B[2] = &_T12A;
			    _T4C = _tag_fat("%s{.%s = %s}",sizeof(char),13U);
			    _T4D = _tag_fat(_T12B,sizeof(void *),3);
			    _T45 = Cyc_aprintf(_T4C,_T4D);
			  }
			}
		      }return _T45;
		    }_TL227: goto _LL33;
		    _TL225: goto _LL33;
		    _TL223: _LL33: goto _LL30;
		    _LL30: ;
		  }goto _TL222;
		  _TL221: _TL222: { struct Cyc_String_pa_PrintArg_struct _T127;
		    _T127.tag = 0;
		    _T50 = ad;
		    _T51 = _T50->name;
		    _T127.f1 = Cyc_Absynpp_qvar2string(_T51);
		    _T4F = _T127;
		  }{ struct Cyc_String_pa_PrintArg_struct _T127 = _T4F;
		    { struct Cyc_String_pa_PrintArg_struct _T128;
		      _T128.tag = 0;
		      _T128.f1 = Cyc_Tcpat_descs2string(ds);
		      _T52 = _T128;
		    }{ struct Cyc_String_pa_PrintArg_struct _T128 = _T52;
		      void * _T129[2];
		      _T129[0] = &_T127;
		      _T129[1] = &_T128;
		      _T53 = _tag_fat("%s{%s}",sizeof(char),7U);
		      _T54 = _tag_fat(_T129,sizeof(void *),2);
		      _T4E = Cyc_aprintf(_T53,_T54);
		    }
		  }return _T4E;
		}_TL21F: goto _LL2E;
	      case 7: 
		{ struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct * _T127 = (struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct *)_T124;
		  _T125 = _T127->f2;
		}{ long is_tuple = _T125;
		  _T55 = is_tuple;
		  if (! _T55) { goto _TL229;
		  }
		  { struct Cyc_String_pa_PrintArg_struct _T127;
		    _T127.tag = 0;
		    _T127.f1 = Cyc_Tcpat_descs2string(ds);
		    _T57 = _T127;
		  }{ struct Cyc_String_pa_PrintArg_struct _T127 = _T57;
		    void * _T128[1];
		    _T128[0] = &_T127;
		    _T58 = _tag_fat("$(%s)",sizeof(char),6U);
		    _T59 = _tag_fat(_T128,sizeof(void *),1);
		    _T56 = Cyc_aprintf(_T58,_T59);
		  }return _T56;
		  _TL229: { struct Cyc_String_pa_PrintArg_struct _T127;
		    _T127.tag = 0;
		    _T127.f1 = Cyc_Tcpat_descs2string(ds);
		    _T5B = _T127;
		  }{ struct Cyc_String_pa_PrintArg_struct _T127 = _T5B;
		    void * _T128[1];
		    _T128[0] = &_T127;
		    _T5C = _tag_fat("{%s}",sizeof(char),5U);
		    _T5D = _tag_fat(_T128,sizeof(void *),1);
		    _T5A = Cyc_aprintf(_T5C,_T5D);
		  }return _T5A;
		}
	      default: 
		_LL2E: { struct Cyc_Warn_String_Warn_Warg_struct _T127;
		  _T127.tag = 0;
		  _T127.f1 = _tag_fat("bad type in aggr_p",sizeof(char),19U);
		  _T5E = _T127;
		}{ struct Cyc_Warn_String_Warn_Warg_struct _T127 = _T5E;
		  void * _T128[1];
		  _T128[0] = &_T127;
		  _T60 = Cyc_Warn_impos2;
		  { int (* _T129)(struct _fat_ptr) = (int (*)(struct _fat_ptr))_T60;
		    _T5F = _T129;
		  }_T61 = _tag_fat(_T128,sizeof(void *),1);
		  _T5F(_T61);
		}
	      }
	      ;
	    }
	  }
	case 7: 
	  { struct Cyc_Absyn_Datatype_p_Absyn_Raw_pat_struct * _T124 = (struct Cyc_Absyn_Datatype_p_Absyn_Raw_pat_struct *)_T11A;
	    _T120 = _T124->f2;
	  }{ struct Cyc_Absyn_Datatypefield * tuf = _T120;
	    if (ds != 0) { goto _TL22B;
	    }
	    { struct Cyc_String_pa_PrintArg_struct _T124;
	      _T124.tag = 0;
	      _T64 = tuf;
	      _T65 = _T64->name;
	      _T124.f1 = Cyc_Absynpp_qvar2string(_T65);
	      _T63 = _T124;
	    }{ struct Cyc_String_pa_PrintArg_struct _T124 = _T63;
	      void * _T125[1];
	      _T125[0] = &_T124;
	      _T66 = _tag_fat("%s",sizeof(char),3U);
	      _T67 = _tag_fat(_T125,sizeof(void *),1);
	      _T62 = Cyc_aprintf(_T66,_T67);
	    }return _T62;
	    _TL22B: { struct Cyc_String_pa_PrintArg_struct _T124;
	      _T124.tag = 0;
	      _T6A = tuf;
	      _T6B = _T6A->name;
	      _T124.f1 = Cyc_Absynpp_qvar2string(_T6B);
	      _T69 = _T124;
	    }{ struct Cyc_String_pa_PrintArg_struct _T124 = _T69;
	      { struct Cyc_String_pa_PrintArg_struct _T125;
		_T125.tag = 0;
		_T125.f1 = Cyc_Tcpat_descs2string(ds);
		_T6C = _T125;
	      }{ struct Cyc_String_pa_PrintArg_struct _T125 = _T6C;
		void * _T126[2];
		_T126[0] = &_T124;
		_T126[1] = &_T125;
		_T6D = _tag_fat("%s(%s)",sizeof(char),7U);
		_T6E = _tag_fat(_T126,sizeof(void *),2);
		_T68 = Cyc_aprintf(_T6D,_T6E);
	      }
	    }return _T68;
	  }
	case 8: 
	  _T6F = _tag_fat("NULL",sizeof(char),5U);
	  return _T6F;
	case 9: 
	  { struct Cyc_Absyn_Int_p_Absyn_Raw_pat_struct * _T124 = (struct Cyc_Absyn_Int_p_Absyn_Raw_pat_struct *)_T11A;
	    _T11F = _T124->f2;
	  }{ int i = _T11F;
	    { struct Cyc_Int_pa_PrintArg_struct _T124;
	      _T124.tag = 1;
	      _T72 = i;
	      _T124.f1 = (unsigned long)_T72;
	      _T71 = _T124;
	    }{ struct Cyc_Int_pa_PrintArg_struct _T124 = _T71;
	      void * _T125[1];
	      _T125[0] = &_T124;
	      _T73 = _tag_fat("%d",sizeof(char),3U);
	      _T74 = _tag_fat(_T125,sizeof(void *),1);
	      _T70 = Cyc_aprintf(_T73,_T74);
	    }return _T70;
	  }
	case 10: 
	  { struct Cyc_Absyn_Char_p_Absyn_Raw_pat_struct * _T124 = (struct Cyc_Absyn_Char_p_Absyn_Raw_pat_struct *)_T11A;
	    _T11E = _T124->f1;
	  }{ char c = _T11E;
	    { struct Cyc_Int_pa_PrintArg_struct _T124;
	      _T124.tag = 1;
	      _T77 = c;
	      _T78 = (int)_T77;
	      _T124.f1 = (unsigned long)_T78;
	      _T76 = _T124;
	    }{ struct Cyc_Int_pa_PrintArg_struct _T124 = _T76;
	      void * _T125[1];
	      _T125[0] = &_T124;
	      _T79 = _tag_fat("%d",sizeof(char),3U);
	      _T7A = _tag_fat(_T125,sizeof(void *),1);
	      _T75 = Cyc_aprintf(_T79,_T7A);
	    }return _T75;
	  }
	case 11: 
	  { struct Cyc_Absyn_Float_p_Absyn_Raw_pat_struct * _T124 = (struct Cyc_Absyn_Float_p_Absyn_Raw_pat_struct *)_T11A;
	    _T11D = _T124->f1;
	    _T11F = _T124->f2;
	  }{ struct _fat_ptr f = _T11D;
	    int i = _T11F;
	    _T7B = f;
	    return _T7B;
	  }
	case 12: 
	  { struct Cyc_Absyn_Enum_p_Absyn_Raw_pat_struct * _T124 = (struct Cyc_Absyn_Enum_p_Absyn_Raw_pat_struct *)_T11A;
	    _T11C = _T124->f2;
	  }{ struct Cyc_Absyn_Enumfield * ef = _T11C;
	    _T11C = ef;
	    goto _LL24;
	  }
	case 13: 
	  { struct Cyc_Absyn_AnonEnum_p_Absyn_Raw_pat_struct * _T124 = (struct Cyc_Absyn_AnonEnum_p_Absyn_Raw_pat_struct *)_T11A;
	    _T11C = _T124->f2;
	  }_LL24: { struct Cyc_Absyn_Enumfield * ef = _T11C;
	    _T7C = ef;
	    _T7D = _T7C->name;
	    _T7E = Cyc_Absynpp_qvar2string(_T7D);
	    return _T7E;
	  }
	case 16: 
	  { struct Cyc_Absyn_Exp_p_Absyn_Raw_pat_struct * _T124 = (struct Cyc_Absyn_Exp_p_Absyn_Raw_pat_struct *)_T11A;
	    _T11B = _T124->f1;
	  }{ struct Cyc_Absyn_Exp * e = _T11B;
	    _T7F = Cyc_Absynpp_exp2string(e);
	    return _T7F;
	  }
	default: 
	  _T80 = &Cyc_Tcpat_Desc2string_val;
	  _T81 = (struct Cyc_Tcpat_Desc2string_exn_struct *)_T80;
	  _throw(_T81);
	}
	;
      }
    }
  }goto _TL21A;
  _TL219: _T82 = d;
  { struct Cyc_Tcpat_Neg_Tcpat_Term_desc_struct * _T11A = (struct Cyc_Tcpat_Neg_Tcpat_Term_desc_struct *)_T82;
    _T117 = _T11A->f1;
  }{ struct Cyc_Set_Set * s = _T117;
    _T83 = Cyc_Set_is_empty(s);
    if (! _T83) { goto _TL22D;
    }
    _T84 = _tag_fat("_",sizeof(char),2U);
    return _T84;
    _TL22D: _T86 = Cyc_Set_choose;
    { struct Cyc_Tcpat_Con_s * (* _T11A)(struct Cyc_Set_Set *) = (struct Cyc_Tcpat_Con_s * (*)(struct Cyc_Set_Set *))_T86;
      _T85 = _T11A;
    }{ struct Cyc_Tcpat_Con_s * c = _T85(s);
      _T87 = c;
      _T88 = _T87->orig_pat;
      _T89 = _T88.where_clause;
      _T8A = _T89.tag;
      _T8B = _T8A == 2;
      _T8C = (int)_T8B;
      if (! _T8C) { goto _TL22F;
      }
      _T8D = &Cyc_Tcpat_Desc2string_val;
      _T8E = (struct Cyc_Tcpat_Desc2string_exn_struct *)_T8D;
      _throw(_T8E);
      goto _TL230;
      _TL22F: _TL230: _T90 = c;
      { union Cyc_Tcpat_PatOrWhere _T11A = _T90->orig_pat;
	_T91 = _T11A.pattern;
	_T92 = _T91.tag;
	if (_T92 == 1) { goto _TL231;
	}
	_throw_match();
	goto _TL232;
	_TL231: _TL232: _T93 = _T11A.pattern;
	_T8F = _T93.val;
      }{ struct Cyc_Absyn_Pat * orig_pat = _T8F;
	_T94 = orig_pat;
	_T95 = _T94->topt;
	{ void * _T11A = Cyc_Absyn_compress(_T95);
	  union Cyc_Absyn_AggrInfo _T11B;
	  void * _T11C;
	  _T96 = (int *)_T11A;
	  _T97 = *_T96;
	  switch (_T97) {
	  case 0: 
	    _T98 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T11A;
	    _T99 = _T98->f1;
	    _T9A = (int *)_T99;
	    _T9B = *_T9A;
	    switch (_T9B) {
	    case 1: 
	      _T9C = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T11A;
	      _T9D = _T9C->f1;
	      _T9E = (struct Cyc_Absyn_IntCon_Absyn_TyCon_struct *)_T9D;
	      _T9F = _T9E->f2;
	      if (_T9F != Cyc_Absyn_Char_sz) { goto _TL235;
	      }
	      { int i = 0;
		_TL23A: if (i < 256) { goto _TL238;
		}else { goto _TL239;
		}
		_TL238: _TA1 = Cyc_Set_member;
		{ long (* _T11D)(struct Cyc_Set_Set *,struct Cyc_Tcpat_Con_s *) = (long (*)(struct Cyc_Set_Set *,
											    struct Cyc_Tcpat_Con_s *))_TA1;
		  _TA0 = _T11D;
		}_TA2 = s;
		_TA3 = i;
		_TA4 = (char)_TA3;
		_TA5 = orig_pat;
		_TA6 = Cyc_Tcpat_char_con(_TA4,_TA5);
		_TA7 = _TA0(_TA2,_TA6);
		if (_TA7) { goto _TL23B;
		}else { goto _TL23D;
		}
		_TL23D: { struct Cyc_Int_pa_PrintArg_struct _T11D;
		  _T11D.tag = 1;
		  _TAA = i;
		  _T11D.f1 = (unsigned long)_TAA;
		  _TA9 = _T11D;
		}{ struct Cyc_Int_pa_PrintArg_struct _T11D = _TA9;
		  void * _T11E[1];
		  _T11E[0] = &_T11D;
		  _TAB = _tag_fat("%d",sizeof(char),3U);
		  _TAC = _tag_fat(_T11E,sizeof(void *),1);
		  _TA8 = Cyc_aprintf(_TAB,_TAC);
		}return _TA8;
		_TL23B: i = i + 1;
		goto _TL23A;
		_TL239: ;
	      }_TAD = &Cyc_Tcpat_Desc2string_val;
	      _TAE = (struct Cyc_Tcpat_Desc2string_exn_struct *)_TAD;
	      _throw(_TAE);
	      goto _TL236;
	      _TL235: { unsigned int i = 0U;
		_TL241: if (i < 4294967295U) { goto _TL23F;
		}else { goto _TL240;
		}
		_TL23F: _TB0 = Cyc_Set_member;
		{ long (* _T11D)(struct Cyc_Set_Set *,struct Cyc_Tcpat_Con_s *) = (long (*)(struct Cyc_Set_Set *,
											    struct Cyc_Tcpat_Con_s *))_TB0;
		  _TAF = _T11D;
		}_TB1 = s;
		_TB2 = i;
		_TB3 = (int)_TB2;
		_TB4 = c;
		_TB5 = _TB4->orig_pat;
		_TB6 = Cyc_Tcpat_int_con(_TB3,_TB5);
		_TB7 = _TAF(_TB1,_TB6);
		if (_TB7) { goto _TL242;
		}else { goto _TL244;
		}
		_TL244: { struct Cyc_Int_pa_PrintArg_struct _T11D;
		  _T11D.tag = 1;
		  _TBA = i;
		  _TBB = (int)_TBA;
		  _T11D.f1 = (unsigned long)_TBB;
		  _TB9 = _T11D;
		}{ struct Cyc_Int_pa_PrintArg_struct _T11D = _TB9;
		  void * _T11E[1];
		  _T11E[0] = &_T11D;
		  _TBC = _tag_fat("%d",sizeof(char),3U);
		  _TBD = _tag_fat(_T11E,sizeof(void *),1);
		  _TB8 = Cyc_aprintf(_TBC,_TBD);
		}return _TB8;
		_TL242: i = i + 1;
		goto _TL241;
		_TL240: ;
	      }_TBE = &Cyc_Tcpat_Desc2string_val;
	      _TBF = (struct Cyc_Tcpat_Desc2string_exn_struct *)_TBE;
	      _throw(_TBF);
	      _TL236: ;
	    case 22: 
	      _TC0 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T11A;
	      _TC1 = _TC0->f1;
	      _TC2 = (struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct *)_TC1;
	      _TC3 = _TC2->f1;
	      _TC4 = _TC3.KnownDatatype;
	      _TC5 = _TC4.tag;
	      if (_TC5 != 2) { goto _TL245;
	      }
	      { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T11D = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T11A;
		_TC6 = _T11D->f1;
		{ struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct * _T11E = (struct Cyc_Absyn_DatatypeCon_Absyn_TyCon_struct *)_TC6;
		  _TC7 = _T11E->f1;
		  _TC8 = _TC7.KnownDatatype;
		  _TC9 = _TC8.val;
		  { struct Cyc_Absyn_Datatypedecl * _T11F = *_TC9;
		    _T11C = _T11F;
		  }
		}
	      }{ struct Cyc_Absyn_Datatypedecl * tud = _T11C;
		_TCA = tud;
		_TCB = _TCA->is_extensible;
		if (! _TCB) { goto _TL247;
		}
		_TCC = &Cyc_Tcpat_Desc2string_val;
		_TCD = (struct Cyc_Tcpat_Desc2string_exn_struct *)_TCC;
		_throw(_TCD);
		goto _TL248;
		_TL247: _TL248: _TCE = tud;
		_TCF = _TCE->fields;
		_TD0 = _check_null(_TCF);
		_TD1 = _TD0->v;
		{ struct Cyc_List_List * fields = (struct Cyc_List_List *)_TD1;
		  int span = Cyc_List_length(fields);
		  _TL24C: _TD2 = fields;
		  _TD3 = (unsigned int)_TD2;
		  if (_TD3) { goto _TL24A;
		  }else { goto _TL24B;
		  }
		  _TL24A: _TD4 = fields;
		  _TD5 = _TD4->hd;
		  _TD6 = (struct Cyc_Absyn_Datatypefield *)_TD5;
		  _TD7 = _TD6->name;
		  _TD8 = *_TD7;
		  _TD9 = _TD8.f1;
		  { struct _fat_ptr n = *_TD9;
		    _TDA = fields;
		    _TDB = _TDA->hd;
		    _TDC = (struct Cyc_Absyn_Datatypefield *)_TDB;
		    { struct Cyc_List_List * args = _TDC->typs;
		      _TDE = Cyc_Set_member;
		      { long (* _T11D)(struct Cyc_Set_Set *,struct Cyc_Tcpat_Con_s *) = (long (*)(struct Cyc_Set_Set *,
												  struct Cyc_Tcpat_Con_s *))_TDE;
			_TDD = _T11D;
		      }_TDF = s;
		      { struct Cyc_Tcpat_Con_s * _T11D = _cycalloc(sizeof(struct Cyc_Tcpat_Con_s));
			_T11D->name = Cyc_Tcpat_Name_v(n);
			_T11D->arity = 0;
			_T11D->span = 0;
			_TE1 = c;
			_T11D->orig_pat = _TE1->orig_pat;
			_TE0 = (struct Cyc_Tcpat_Con_s *)_T11D;
		      }_TE2 = _TDD(_TDF,_TE0);
		      if (_TE2) { goto _TL24D;
		      }else { goto _TL24F;
		      }
		      _TL24F: _TE4 = Cyc_List_length(args);
		      if (_TE4 != 0) { goto _TL250;
		      }
		      _TE3 = n;
		      goto _TL251;
		      _TL250: { struct Cyc_String_pa_PrintArg_struct _T11D;
			_T11D.tag = 0;
			_T11D.f1 = n;
			_TE6 = _T11D;
		      }{ struct Cyc_String_pa_PrintArg_struct _T11D = _TE6;
			void * _T11E[1];
			_T11E[0] = &_T11D;
			_TE7 = _tag_fat("%s(...)",sizeof(char),8U);
			_TE8 = _tag_fat(_T11E,sizeof(void *),1);
			_TE5 = Cyc_aprintf(_TE7,_TE8);
		      }_TE3 = _TE5;
		      _TL251: return _TE3;
		      _TL24D: ;
		    }
		  }_TE9 = fields;
		  fields = _TE9->tl;
		  goto _TL24C;
		  _TL24B: _TEA = &Cyc_Tcpat_Desc2string_val;
		  _TEB = (struct Cyc_Tcpat_Desc2string_exn_struct *)_TEA;
		  _throw(_TEB);
		}
	      }goto _TL246;
	      _TL245: goto _LL40;
	      _TL246: ;
	    case 24: 
	      { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T11D = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T11A;
		_TEC = _T11D->f1;
		{ struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct * _T11E = (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct *)_TEC;
		  _T11B = _T11E->f1;
		}
	      }{ union Cyc_Absyn_AggrInfo ainfo = _T11B;
		struct Cyc_Absyn_Aggrdecl * ad = Cyc_Absyn_get_known_aggrdecl(ainfo);
		_TED = ad;
		_TEE = _TED->kind;
		_TEF = (int)_TEE;
		if (_TEF == 1) { goto _TL252;
		}
		_TF0 = &Cyc_Tcpat_Desc2string_val;
		_TF1 = (struct Cyc_Tcpat_Desc2string_exn_struct *)_TF0;
		_throw(_TF1);
		goto _TL253;
		_TL252: _TL253: _TF2 = ad;
		_TF3 = _TF2->impl;
		_TF4 = _check_null(_TF3);
		{ struct Cyc_List_List * fields = _TF4->fields;
		  int span = Cyc_List_length(fields);
		  _TF5 = ad;
		  { struct _tuple2 * _T11D = _TF5->name;
		    struct _fat_ptr _T11E;
		    { struct _tuple2 _T11F = *_T11D;
		      _TF6 = _T11F.f1;
		      { struct _fat_ptr _T120 = *_TF6;
			_T11E = _T120;
		      }
		    }{ struct _fat_ptr union_name = _T11E;
		      _TL257: _TF7 = fields;
		      _TF8 = (unsigned int)_TF7;
		      if (_TF8) { goto _TL255;
		      }else { goto _TL256;
		      }
		      _TL255: _TF9 = fields;
		      _TFA = _TF9->hd;
		      _TFB = (struct Cyc_Absyn_Aggrfield *)_TFA;
		      _TFC = _TFB->name;
		      { struct _fat_ptr n = *_TFC;
			_TFE = Cyc_Set_member;
			{ long (* _T11F)(struct Cyc_Set_Set *,struct Cyc_Tcpat_Con_s *) = (long (*)(struct Cyc_Set_Set *,
												    struct Cyc_Tcpat_Con_s *))_TFE;
			  _TFD = _T11F;
			}_TFF = s;
			{ struct Cyc_Tcpat_Con_s * _T11F = _cycalloc(sizeof(struct Cyc_Tcpat_Con_s));
			  _T11F->name = Cyc_Tcpat_Name_v(n);
			  _T11F->arity = 0;
			  _T11F->span = 0;
			  _T101 = c;
			  _T11F->orig_pat = _T101->orig_pat;
			  _T100 = (struct Cyc_Tcpat_Con_s *)_T11F;
			}_T102 = _TFD(_TFF,_T100);
			if (_T102) { goto _TL258;
			}else { goto _TL25A;
			}
			_TL25A: { struct Cyc_String_pa_PrintArg_struct _T11F;
			  _T11F.tag = 0;
			  _T11F.f1 = union_name;
			  _T104 = _T11F;
			}{ struct Cyc_String_pa_PrintArg_struct _T11F = _T104;
			  { struct Cyc_String_pa_PrintArg_struct _T120;
			    _T120.tag = 0;
			    _T120.f1 = n;
			    _T105 = _T120;
			  }{ struct Cyc_String_pa_PrintArg_struct _T120 = _T105;
			    void * _T121[2];
			    _T121[0] = &_T11F;
			    _T121[1] = &_T120;
			    _T106 = _tag_fat("%s{.%s = _}",sizeof(char),12U);
			    _T107 = _tag_fat(_T121,sizeof(void *),2);
			    _T103 = Cyc_aprintf(_T106,_T107);
			  }
			}return _T103;
			_TL258: ;
		      }_T108 = fields;
		      fields = _T108->tl;
		      goto _TL257;
		      _TL256: _T109 = &Cyc_Tcpat_Desc2string_val;
		      _T10A = (struct Cyc_Tcpat_Desc2string_exn_struct *)_T109;
		      _throw(_T10A);
		    }
		  }
		}
	      }
	    default: 
	      goto _LL40;
	    }
	    ;
	  case 4: 
	    { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T11D = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T11A;
	      _T10B = _T11D->f1;
	      _T10C = _T10B.ptr_atts;
	      _T11C = _T10C.nullable;
	    }{ void * n = _T11C;
	      _T10D = Cyc_Tcutil_force_type2bool(0,n);
	      if (! _T10D) { goto _TL25B;
	      }
	      _T10F = Cyc_Set_member;
	      { long (* _T11D)(struct Cyc_Set_Set *,struct Cyc_Tcpat_Con_s *) = (long (*)(struct Cyc_Set_Set *,
											  struct Cyc_Tcpat_Con_s *))_T10F;
		_T10E = _T11D;
	      }_T110 = s;
	      _T111 = Cyc_Tcpat_null_con(orig_pat);
	      _T112 = _T10E(_T110,_T111);
	      if (_T112) { goto _TL25B;
	      }else { goto _TL25D;
	      }
	      _TL25D: _T113 = _tag_fat("NULL",sizeof(char),5U);
	      return _T113;
	      _TL25B: _T114 = _tag_fat("&_",sizeof(char),3U);
	      return _T114;
	    }
	  default: 
	    _LL40: _T115 = &Cyc_Tcpat_Desc2string_val;
	    _T116 = (struct Cyc_Tcpat_Desc2string_exn_struct *)_T115;
	    _throw(_T116);
	  }
	  ;
	}
      }
    }
  }_TL21A: ;
}
static struct _fat_ptr * Cyc_Tcpat_desc2stringptr(void * d) {
  struct _fat_ptr * _T0;
  { struct _fat_ptr * _T1 = _cycalloc(sizeof(struct _fat_ptr));
    *_T1 = Cyc_Tcpat_desc2string(d);
    _T0 = (struct _fat_ptr *)_T1;
  }return _T0;
}
static struct _fat_ptr Cyc_Tcpat_descs2string(struct Cyc_List_List * ds) {
  struct Cyc_List_List * (* _T0)(struct _fat_ptr * (*)(void *),struct Cyc_List_List *);
  struct Cyc_List_List * (* _T1)(void * (*)(void *),struct Cyc_List_List *);
  struct Cyc_List_List * _T2;
  struct _fat_ptr * _T3;
  struct Cyc_List_List * _T4;
  struct Cyc_List_List * _T5;
  struct Cyc_List_List * _T6;
  struct Cyc_List_List * _T7;
  struct Cyc_List_List * _T8;
  struct Cyc_List_List * _T9;
  struct Cyc_List_List * _TA;
  struct _fat_ptr _TB;
  _T1 = Cyc_List_map;
  { struct Cyc_List_List * (* _TC)(struct _fat_ptr * (*)(void *),struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct _fat_ptr * (*)(void *),
														       struct Cyc_List_List *))_T1;
    _T0 = _TC;
  }_T2 = ds;
  { struct Cyc_List_List * ss = _T0(Cyc_Tcpat_desc2stringptr,_T2);
    struct _fat_ptr * comma;
    comma = _cycalloc(sizeof(struct _fat_ptr));
    _T3 = comma;
    *_T3 = _tag_fat(",",sizeof(char),2U);
    { struct Cyc_List_List * x = ss;
      _TL261: if (x != 0) { goto _TL25F;
      }else { goto _TL260;
      }
      _TL25F: _T4 = x;
      _T5 = _T4->tl;
      if (_T5 == 0) { goto _TL262;
      }
      _T6 = x;
      { struct Cyc_List_List * _TC = _cycalloc(sizeof(struct Cyc_List_List));
	_TC->hd = comma;
	_T8 = x;
	_TC->tl = _T8->tl;
	_T7 = (struct Cyc_List_List *)_TC;
      }_T6->tl = _T7;
      _T9 = x;
      x = _T9->tl;
      goto _TL263;
      _TL262: _TL263: _TA = x;
      x = _TA->tl;
      goto _TL261;
      _TL260: ;
    }_TB = Cyc_strconcat_l(ss);
    return _TB;
  }
}
static void Cyc_Tcpat_not_exhaust_err(unsigned int loc,void * desc) {
  struct _handler_cons * _T0;
  int _T1;
  struct Cyc_Warn_String_Warn_Warg_struct _T2;
  struct Cyc_Warn_String_Warn_Warg_struct _T3;
  unsigned int _T4;
  struct _fat_ptr _T5;
  void * _T6;
  struct Cyc_Tcpat_Desc2string_exn_struct * _T7;
  char * _T8;
  char * _T9;
  struct Cyc_Warn_String_Warn_Warg_struct _TA;
  unsigned int _TB;
  struct _fat_ptr _TC;
  struct _handler_cons _TD;
  _T0 = &_TD;
  _push_handler(_T0);
  { int _TE = 0;
    _T1 = setjmp(_TD.handler);
    if (! _T1) { goto _TL264;
    }
    _TE = 1;
    goto _TL265;
    _TL264: _TL265: if (_TE) { goto _TL266;
    }else { goto _TL268;
    }
    _TL268: { struct _fat_ptr s = Cyc_Tcpat_desc2string(desc);
      { struct Cyc_Warn_String_Warn_Warg_struct _TF;
	_TF.tag = 0;
	_TF.f1 = _tag_fat("patterns may not be exhaustive.\n\tmissing case for ",
			  sizeof(char),51U);
	_T2 = _TF;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _TF = _T2;
	{ struct Cyc_Warn_String_Warn_Warg_struct _T10;
	  _T10.tag = 0;
	  _T10.f1 = s;
	  _T3 = _T10;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T10 = _T3;
	  void * _T11[2];
	  _T11[0] = &_TF;
	  _T11[1] = &_T10;
	  _T4 = loc;
	  _T5 = _tag_fat(_T11,sizeof(void *),2);
	  Cyc_Warn_err2(_T4,_T5);
	}
      }
    }_pop_handler();
    goto _TL267;
    _TL266: _T6 = Cyc_Core_get_exn_thrown();
    { void * _TF = (void *)_T6;
      void * _T10;
      _T7 = (struct Cyc_Tcpat_Desc2string_exn_struct *)_TF;
      _T8 = _T7->tag;
      _T9 = Cyc_Tcpat_Desc2string;
      if (_T8 != _T9) { goto _TL269;
      }
      { struct Cyc_Warn_String_Warn_Warg_struct _T11;
	_T11.tag = 0;
	_T11.f1 = _tag_fat("patterns may not be exhaustive.",sizeof(char),
			   32U);
	_TA = _T11;
      }{ struct Cyc_Warn_String_Warn_Warg_struct _T11 = _TA;
	void * _T12[1];
	_T12[0] = &_T11;
	_TB = loc;
	_TC = _tag_fat(_T12,sizeof(void *),1);
	Cyc_Warn_err2(_TB,_TC);
      }goto _LL0;
      _TL269: _T10 = _TF;
      { void * exn = _T10;
	_rethrow(exn);
      }_LL0: ;
    }_TL267: ;
  }
}
static void Cyc_Tcpat_rule_occurs(int dummy,struct Cyc_Tcpat_Rhs * rhs) {
  struct Cyc_Tcpat_Rhs * _T0;
  _T0 = rhs;
  _T0->used = 1;
}
void Cyc_Tcpat_check_switch_exhaustive(unsigned int loc,struct Cyc_Tcenv_Tenv * te,
				       struct Cyc_List_List * swcs,void * * dopt) {
  struct Cyc_List_List * (* _T0)(struct _tuple25 * (*)(int *,struct Cyc_Absyn_Switch_clause *),
				 int *,struct Cyc_List_List *);
  struct Cyc_List_List * (* _T1)(void * (*)(void *,void *),void *,struct Cyc_List_List *);
  int * _T2;
  struct Cyc_List_List * _T3;
  void * * _T4;
  void (* _T5)(void *,void (*)(unsigned int,void *),unsigned int,void (*)(int,
									  struct Cyc_Tcpat_Rhs *),
	       int,long *);
  void * _T6;
  unsigned int _T7;
  long * _T8;
  struct Cyc_List_List * _T9;
  void * _TA;
  struct Cyc_Tcpat_Rhs * _TB;
  long _TC;
  struct Cyc_Warn_String_Warn_Warg_struct _TD;
  unsigned int _TE;
  struct _fat_ptr _TF;
  struct Cyc_List_List * _T10;
  int where_ctr = 0;
  int * env = &where_ctr;
  _T1 = Cyc_List_map_c;
  { struct Cyc_List_List * (* _T11)(struct _tuple25 * (*)(int *,struct Cyc_Absyn_Switch_clause *),
				    int *,struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct _tuple25 * (*)(int *,
														      struct Cyc_Absyn_Switch_clause *),
												int *,
												struct Cyc_List_List *))_T1;
    _T0 = _T11;
  }_T2 = env;
  _T3 = swcs;
  { struct Cyc_List_List * match_rules = _T0(Cyc_Tcpat_get_match,_T2,_T3);
    void * dec_tree = Cyc_Tcpat_match_compile(match_rules);
    _T4 = dopt;
    *_T4 = dec_tree;
    { long ex_done = 0;
      { void (* _T11)(void *,void (*)(unsigned int,void *),unsigned int,void (*)(int,
										 struct Cyc_Tcpat_Rhs *),
		      int,long *) = (void (*)(void *,void (*)(unsigned int,
							      void *),unsigned int,
					      void (*)(int,struct Cyc_Tcpat_Rhs *),
					      int,long *))Cyc_Tcpat_check_exhaust_overlap;
	_T5 = _T11;
      }_T6 = dec_tree;
      _T7 = loc;
      _T8 = &ex_done;
      _T5(_T6,Cyc_Tcpat_not_exhaust_err,_T7,Cyc_Tcpat_rule_occurs,0,_T8);
      _TL26E: if (match_rules != 0) { goto _TL26C;
      }else { goto _TL26D;
      }
      _TL26C: _T9 = match_rules;
      _TA = _T9->hd;
      { struct _tuple25 * _T11 = (struct _tuple25 *)_TA;
	unsigned int _T12;
	long _T13;
	{ struct _tuple25 _T14 = *_T11;
	  _TB = _T14.f1;
	  { struct Cyc_Tcpat_Rhs _T15 = *_TB;
	    _T13 = _T15.used;
	    _T12 = _T15.pat_loc;
	  }
	}{ long b = _T13;
	  unsigned int loc2 = _T12;
	  _TC = b;
	  if (_TC) { goto _TL26F;
	  }else { goto _TL271;
	  }
	  _TL271: { struct Cyc_Warn_String_Warn_Warg_struct _T14;
	    _T14.tag = 0;
	    _T14.f1 = _tag_fat("redundant pattern (check for misspelled constructors in earlier patterns)",
			       sizeof(char),74U);
	    _TD = _T14;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T14 = _TD;
	    void * _T15[1];
	    _T15[0] = &_T14;
	    _TE = loc2;
	    _TF = _tag_fat(_T15,sizeof(void *),1);
	    Cyc_Warn_err2(_TE,_TF);
	  }goto _TL26D;
	  _TL26F: ;
	}
      }_T10 = match_rules;
      match_rules = _T10->tl;
      goto _TL26E;
      _TL26D: ;
    }
  }
}
static void Cyc_Tcpat_not_exhaust_warn(struct _tuple13 * pr,void * desc) {
  struct _tuple13 * _T0;
  struct _handler_cons * _T1;
  int _T2;
  struct Cyc_Warn_String_Warn_Warg_struct _T3;
  struct Cyc_Warn_String_Warn_Warg_struct _T4;
  struct _tuple13 * _T5;
  struct _tuple13 _T6;
  unsigned int _T7;
  struct _fat_ptr _T8;
  void * _T9;
  struct Cyc_Tcpat_Desc2string_exn_struct * _TA;
  char * _TB;
  char * _TC;
  struct Cyc_Warn_String_Warn_Warg_struct _TD;
  struct _tuple13 * _TE;
  struct _tuple13 _TF;
  unsigned int _T10;
  struct _fat_ptr _T11;
  _T0 = pr;
  (*_T0).f1 = 0;
  { struct _handler_cons _T12;
    _T1 = &_T12;
    _push_handler(_T1);
    { int _T13 = 0;
      _T2 = setjmp(_T12.handler);
      if (! _T2) { goto _TL272;
      }
      _T13 = 1;
      goto _TL273;
      _TL272: _TL273: if (_T13) { goto _TL274;
      }else { goto _TL276;
      }
      _TL276: { struct _fat_ptr s = Cyc_Tcpat_desc2string(desc);
	{ struct Cyc_Warn_String_Warn_Warg_struct _T14;
	  _T14.tag = 0;
	  _T14.f1 = _tag_fat("pattern not exhaustive.\n\tmissing case for ",
			     sizeof(char),43U);
	  _T3 = _T14;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T14 = _T3;
	  { struct Cyc_Warn_String_Warn_Warg_struct _T15;
	    _T15.tag = 0;
	    _T15.f1 = s;
	    _T4 = _T15;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T15 = _T4;
	    void * _T16[2];
	    _T16[0] = &_T14;
	    _T16[1] = &_T15;
	    _T5 = pr;
	    _T6 = *_T5;
	    _T7 = _T6.f0;
	    _T8 = _tag_fat(_T16,sizeof(void *),2);
	    Cyc_Warn_warn2(_T7,_T8);
	  }
	}
      }_pop_handler();
      goto _TL275;
      _TL274: _T9 = Cyc_Core_get_exn_thrown();
      { void * _T14 = (void *)_T9;
	void * _T15;
	_TA = (struct Cyc_Tcpat_Desc2string_exn_struct *)_T14;
	_TB = _TA->tag;
	_TC = Cyc_Tcpat_Desc2string;
	if (_TB != _TC) { goto _TL277;
	}
	{ struct Cyc_Warn_String_Warn_Warg_struct _T16;
	  _T16.tag = 0;
	  _T16.f1 = _tag_fat("pattern not exhaustive.",sizeof(char),24U);
	  _TD = _T16;
	}{ struct Cyc_Warn_String_Warn_Warg_struct _T16 = _TD;
	  void * _T17[1];
	  _T17[0] = &_T16;
	  _TE = pr;
	  _TF = *_TE;
	  _T10 = _TF.f0;
	  _T11 = _tag_fat(_T17,sizeof(void *),1);
	  Cyc_Warn_warn2(_T10,_T11);
	}goto _LL0;
	_TL277: _T15 = _T14;
	{ void * exn = _T15;
	  _rethrow(exn);
	}_LL0: ;
      }_TL275: ;
    }
  }
}
static void Cyc_Tcpat_dummy_fn(int i,struct Cyc_Tcpat_Rhs * rhs) {
  return;
}
long Cyc_Tcpat_check_let_pat_exhaustive(unsigned int loc,struct Cyc_Tcenv_Tenv * te,
					struct Cyc_Absyn_Pat * p,void * * dopt) {
  struct Cyc_Tcpat_Rhs * _T0;
  struct Cyc_Tcpat_Rhs * _T1;
  struct Cyc_Absyn_Pat * _T2;
  struct Cyc_Tcpat_Rhs * _T3;
  struct Cyc_List_List * _T4;
  struct _tuple25 * _T5;
  struct Cyc_List_List * _T6;
  struct _tuple13 _T7;
  void (* _T8)(void *,void (*)(struct _tuple13 *,void *),struct _tuple13 *,
	       void (*)(int,struct Cyc_Tcpat_Rhs *),int,long *);
  void * _T9;
  struct _tuple13 * _TA;
  long * _TB;
  void * * _TC;
  struct _tuple13 _TD;
  long _TE;
  struct Cyc_Tcpat_Rhs * rhs;
  rhs = _cycalloc(sizeof(struct Cyc_Tcpat_Rhs));
  _T0 = rhs;
  _T0->used = 0;
  _T1 = rhs;
  _T2 = p;
  _T1->pat_loc = _T2->loc;
  _T3 = rhs;
  _T3->rhs = Cyc_Absyn_skip_stmt(0U);
  { struct Cyc_List_List * match_rules;
    match_rules = _cycalloc(sizeof(struct Cyc_List_List));
    _T4 = match_rules;
    { struct _tuple25 * _TF = _cycalloc(sizeof(struct _tuple25));
      _TF->f0 = Cyc_Tcpat_compile_pat(p);
      _TF->f1 = rhs;
      _T5 = (struct _tuple25 *)_TF;
    }_T4->hd = _T5;
    _T6 = match_rules;
    _T6->tl = 0;
    { void * dec_tree = Cyc_Tcpat_match_compile(match_rules);
      { struct _tuple13 _TF;
	_TF.f0 = loc;
	_TF.f1 = 1;
	_T7 = _TF;
      }{ struct _tuple13 exhaust_env = _T7;
	long ex_done = 0;
	{ void (* _TF)(void *,void (*)(struct _tuple13 *,void *),struct _tuple13 *,
		       void (*)(int,struct Cyc_Tcpat_Rhs *),int,long *) = (void (*)(void *,
										    void (*)(struct _tuple13 *,
											     void *),
										    struct _tuple13 *,
										    void (*)(int,
											     struct Cyc_Tcpat_Rhs *),
										    int,
										    long *))Cyc_Tcpat_check_exhaust_overlap;
	  _T8 = _TF;
	}_T9 = dec_tree;
	_TA = &exhaust_env;
	_TB = &ex_done;
	_T8(_T9,Cyc_Tcpat_not_exhaust_warn,_TA,Cyc_Tcpat_dummy_fn,0,_TB);
	_TC = dopt;
	*_TC = dec_tree;
	_TD = exhaust_env;
	_TE = _TD.f1;
	return _TE;
      }
    }
  }
}
static struct _tuple25 * Cyc_Tcpat_get_match2(struct Cyc_Absyn_Switch_clause * swc) {
  struct Cyc_Absyn_Switch_clause * _T0;
  struct Cyc_Absyn_Pat * _T1;
  struct Cyc_Absyn_Switch_clause * _T2;
  struct Cyc_Absyn_Exp * _T3;
  struct Cyc_Warn_String_Warn_Warg_struct _T4;
  struct Cyc_Absyn_Switch_clause * _T5;
  struct Cyc_Absyn_Exp * _T6;
  unsigned int _T7;
  struct _fat_ptr _T8;
  struct Cyc_Tcpat_Rhs * _T9;
  struct Cyc_Tcpat_Rhs * _TA;
  struct Cyc_Absyn_Switch_clause * _TB;
  struct Cyc_Absyn_Pat * _TC;
  struct Cyc_Tcpat_Rhs * _TD;
  struct Cyc_Absyn_Switch_clause * _TE;
  struct _tuple25 * _TF;
  _T0 = swc;
  _T1 = _T0->pattern;
  { void * sp0 = Cyc_Tcpat_compile_pat(_T1);
    _T2 = swc;
    _T3 = _T2->where_clause;
    if (_T3 == 0) { goto _TL279;
    }
    { struct Cyc_Warn_String_Warn_Warg_struct _T10;
      _T10.tag = 0;
      _T10.f1 = _tag_fat("&&-clauses not supported in exception handlers.",
			 sizeof(char),48U);
      _T4 = _T10;
    }{ struct Cyc_Warn_String_Warn_Warg_struct _T10 = _T4;
      void * _T11[1];
      _T11[0] = &_T10;
      _T5 = swc;
      _T6 = _T5->where_clause;
      _T7 = _T6->loc;
      _T8 = _tag_fat(_T11,sizeof(void *),1);
      Cyc_Warn_err2(_T7,_T8);
    }goto _TL27A;
    _TL279: _TL27A: { struct Cyc_Tcpat_Rhs * rhs;
      rhs = _cycalloc(sizeof(struct Cyc_Tcpat_Rhs));
      _T9 = rhs;
      _T9->used = 0;
      _TA = rhs;
      _TB = swc;
      _TC = _TB->pattern;
      _TA->pat_loc = _TC->loc;
      _TD = rhs;
      _TE = swc;
      _TD->rhs = _TE->body;
      { struct _tuple25 * _T10 = _cycalloc(sizeof(struct _tuple25));
	_T10->f0 = sp0;
	_T10->f1 = rhs;
	_TF = (struct _tuple25 *)_T10;
      }return _TF;
    }
  }
}
static void Cyc_Tcpat_not_exhaust_err2(unsigned int loc,void * d) {
  ;
}
void Cyc_Tcpat_check_catch_overlap(unsigned int loc,struct Cyc_Tcenv_Tenv * te,
				   struct Cyc_List_List * swcs,void * * dopt) {
  struct Cyc_List_List * (* _T0)(struct _tuple25 * (*)(struct Cyc_Absyn_Switch_clause *),
				 struct Cyc_List_List *);
  struct Cyc_List_List * (* _T1)(void * (*)(void *),struct Cyc_List_List *);
  struct Cyc_List_List * _T2;
  void * * _T3;
  void (* _T4)(void *,void (*)(unsigned int,void *),unsigned int,void (*)(int,
									  struct Cyc_Tcpat_Rhs *),
	       int,long *);
  void * _T5;
  unsigned int _T6;
  long * _T7;
  struct Cyc_List_List * _T8;
  struct Cyc_List_List * _T9;
  struct Cyc_List_List * _TA;
  void * _TB;
  struct Cyc_Tcpat_Rhs * _TC;
  long _TD;
  struct Cyc_Warn_String_Warn_Warg_struct _TE;
  unsigned int _TF;
  struct _fat_ptr _T10;
  struct Cyc_List_List * _T11;
  _T1 = Cyc_List_map;
  { struct Cyc_List_List * (* _T12)(struct _tuple25 * (*)(struct Cyc_Absyn_Switch_clause *),
				    struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct _tuple25 * (*)(struct Cyc_Absyn_Switch_clause *),
											  struct Cyc_List_List *))_T1;
    _T0 = _T12;
  }_T2 = swcs;
  { struct Cyc_List_List * match_rules = _T0(Cyc_Tcpat_get_match2,_T2);
    void * dec_tree = Cyc_Tcpat_match_compile(match_rules);
    _T3 = dopt;
    *_T3 = dec_tree;
    { long ex_done = 0;
      { void (* _T12)(void *,void (*)(unsigned int,void *),unsigned int,void (*)(int,
										 struct Cyc_Tcpat_Rhs *),
		      int,long *) = (void (*)(void *,void (*)(unsigned int,
							      void *),unsigned int,
					      void (*)(int,struct Cyc_Tcpat_Rhs *),
					      int,long *))Cyc_Tcpat_check_exhaust_overlap;
	_T4 = _T12;
      }_T5 = dec_tree;
      _T6 = loc;
      _T7 = &ex_done;
      _T4(_T5,Cyc_Tcpat_not_exhaust_err2,_T6,Cyc_Tcpat_rule_occurs,0,_T7);
      _TL27E: if (match_rules != 0) { goto _TL27C;
      }else { goto _TL27D;
      }
      _TL27C: _T8 = match_rules;
      _T9 = _T8->tl;
      if (_T9 != 0) { goto _TL27F;
      }
      goto _TL27D;
      _TL27F: _TA = match_rules;
      _TB = _TA->hd;
      { struct _tuple25 * _T12 = (struct _tuple25 *)_TB;
	unsigned int _T13;
	long _T14;
	{ struct _tuple25 _T15 = *_T12;
	  _TC = _T15.f1;
	  { struct Cyc_Tcpat_Rhs _T16 = *_TC;
	    _T14 = _T16.used;
	    _T13 = _T16.pat_loc;
	  }
	}{ long b = _T14;
	  unsigned int loc2 = _T13;
	  _TD = b;
	  if (_TD) { goto _TL281;
	  }else { goto _TL283;
	  }
	  _TL283: { struct Cyc_Warn_String_Warn_Warg_struct _T15;
	    _T15.tag = 0;
	    _T15.f1 = _tag_fat("redundant pattern (check for misspelled constructors in earlier patterns)",
			       sizeof(char),74U);
	    _TE = _T15;
	  }{ struct Cyc_Warn_String_Warn_Warg_struct _T15 = _TE;
	    void * _T16[1];
	    _T16[0] = &_T15;
	    _TF = loc2;
	    _T10 = _tag_fat(_T16,sizeof(void *),1);
	    Cyc_Warn_err2(_TF,_T10);
	  }goto _TL27D;
	  _TL281: ;
	}
      }_T11 = match_rules;
      match_rules = _T11->tl;
      goto _TL27E;
      _TL27D: ;
    }
  }
}
long Cyc_Tcpat_has_vars(struct Cyc_Core_Opt * pat_vars) {
  struct Cyc_Core_Opt * _T0;
  void * _T1;
  struct Cyc_List_List * _T2;
  void * _T3;
  struct _tuple19 * _T4;
  struct _tuple19 _T5;
  struct Cyc_Absyn_Vardecl * * _T6;
  struct Cyc_List_List * _T7;
  _T0 = _check_null(pat_vars);
  _T1 = _T0->v;
  { struct Cyc_List_List * l = (struct Cyc_List_List *)_T1;
    _TL287: if (l != 0) { goto _TL285;
    }else { goto _TL286;
    }
    _TL285: _T2 = l;
    _T3 = _T2->hd;
    _T4 = (struct _tuple19 *)_T3;
    _T5 = *_T4;
    _T6 = _T5.f0;
    if (_T6 == 0) { goto _TL288;
    }
    return 1;
    _TL288: _T7 = l;
    l = _T7->tl;
    goto _TL287;
    _TL286: ;
  }return 0;
}
