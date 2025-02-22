#include <cyc_include.h>
 struct Cyc_Core_Opt {
  void * v;
};
 struct Cyc_List_List {
  void * hd;
  struct Cyc_List_List * tl;
};
extern int Cyc_List_length(struct Cyc_List_List *);
extern struct Cyc_List_List * Cyc_List_rmap_c(struct _RegionHandle *,void * (*)(void *,
										void *),
					      void *,struct Cyc_List_List *);
extern struct Cyc_List_List * Cyc_List_imp_rev(struct Cyc_List_List *);
extern long Cyc_List_mem(int (*)(void *,void *),struct Cyc_List_List *,void *);
extern int Cyc_List_list_cmp(int (*)(void *,void *),struct Cyc_List_List *,
			     struct Cyc_List_List *);
extern struct Cyc_List_List * Cyc_List_filter_c(long (*)(void *,void *),void *,
						struct Cyc_List_List *);
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
 struct Cyc_Absyn_UnknownDatatypeFieldInfo {
  struct _tuple0 * datatype_name;
  struct _tuple0 * field_name;
  long is_extensible;
};
 struct _union_DatatypeFieldInfo_UnknownDatatypefield {
  int tag;
  struct Cyc_Absyn_UnknownDatatypeFieldInfo val;
};
 struct _tuple1 {
  struct Cyc_Absyn_Datatypedecl * f0;
  struct Cyc_Absyn_Datatypefield * f1;
};
 struct _union_DatatypeFieldInfo_KnownDatatypefield {
  int tag;
  struct _tuple1 val;
};
 union Cyc_Absyn_DatatypeFieldInfo {
  struct _union_DatatypeFieldInfo_UnknownDatatypefield UnknownDatatypefield;
  struct _union_DatatypeFieldInfo_KnownDatatypefield KnownDatatypefield;
};
 struct _tuple2 {
  enum Cyc_Absyn_AggrKind f0;
  struct _tuple0 * f1;
  struct Cyc_Core_Opt * f2;
};
 struct _union_AggrInfo_UnknownAggr {
  int tag;
  struct _tuple2 val;
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
 struct Cyc_Absyn_PointerType_Absyn_Type_struct {
  int tag;
  struct Cyc_Absyn_PtrInfo f1;
};
 struct Cyc_Absyn_ArrayType_Absyn_Type_struct {
  int tag;
  struct Cyc_Absyn_ArrayInfo f1;
};
 struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct {
  int tag;
  enum Cyc_Absyn_AggrKind f1;
  long f2;
  struct Cyc_List_List * f3;
};
 struct Cyc_Absyn_SubsetType_Absyn_Type_struct {
  int tag;
  struct Cyc_Absyn_Vardecl * f1;
  struct Cyc_Absyn_Exp * f2;
  struct Cyc_AssnDef_ExistAssnFn * f3;
};
 struct _union_Cnst_Null_c {
  int tag;
  int val;
};
 struct _tuple3 {
  enum Cyc_Absyn_Sign f0;
  char f1;
};
 struct _union_Cnst_Char_c {
  int tag;
  struct _tuple3 val;
};
 struct _union_Cnst_Wchar_c {
  int tag;
  struct _fat_ptr val;
};
 struct _tuple4 {
  enum Cyc_Absyn_Sign f0;
  short f1;
};
 struct _union_Cnst_Short_c {
  int tag;
  struct _tuple4 val;
};
 struct _tuple5 {
  enum Cyc_Absyn_Sign f0;
  int f1;
};
 struct _union_Cnst_Int_c {
  int tag;
  struct _tuple5 val;
};
 struct _tuple6 {
  enum Cyc_Absyn_Sign f0;
  long long f1;
};
 struct _union_Cnst_LongLong_c {
  int tag;
  struct _tuple6 val;
};
 struct _union_Cnst_Int128_c {
  int tag;
  struct _tuple6 val;
};
 struct _tuple7 {
  struct _fat_ptr f0;
  int f1;
};
 struct _union_Cnst_Float_c {
  int tag;
  struct _tuple7 val;
};
 struct _union_Cnst_String_c {
  int tag;
  struct _fat_ptr val;
};
 struct _union_Cnst_Wstring_c {
  int tag;
  struct _fat_ptr val;
};
 union Cyc_Absyn_Cnst {
  struct _union_Cnst_Null_c Null_c;
  struct _union_Cnst_Char_c Char_c;
  struct _union_Cnst_Wchar_c Wchar_c;
  struct _union_Cnst_Short_c Short_c;
  struct _union_Cnst_Int_c Int_c;
  struct _union_Cnst_LongLong_c LongLong_c;
  struct _union_Cnst_Int128_c Int128_c;
  struct _union_Cnst_Float_c Float_c;
  struct _union_Cnst_String_c String_c;
  struct _union_Cnst_Wstring_c Wstring_c;
};
 struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct {
  int tag;
  union Cyc_Absyn_Cnst f1;
};
 struct Cyc_Absyn_Exp {
  void * topt;
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
 struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct {
  char * tag;
};
extern struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct Cyc_Absyn_EmptyAnnot_val;
void * Cyc_Absyn_compress(void *);
extern void * Cyc_Absyn_void_type;
struct Cyc_Absyn_Aggrdecl * Cyc_Absyn_get_known_aggrdecl(union Cyc_Absyn_AggrInfo);
long Cyc_Absyn_is_nontagged_nonrequire_union_type(void *);
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
extern struct Cyc_Dict_Dict Cyc_Dict_empty(int (*)(void *,void *));
extern struct Cyc_Dict_Dict Cyc_Dict_insert(struct Cyc_Dict_Dict,void *,void *);
extern void * Cyc_Dict_lookup(struct Cyc_Dict_Dict,void *);
extern void Cyc_Dict_iter(void (*)(void *,void *),struct Cyc_Dict_Dict);
extern struct Cyc_Dict_Dict Cyc_Dict_intersect_c(void * (*)(void *,void *,
							    void *,void *),
						 void *,struct Cyc_Dict_Dict,
						 struct Cyc_Dict_Dict);
extern long Cyc_Dict_forall_intersect(long (*)(void *,void *,void *),struct Cyc_Dict_Dict,
				      struct Cyc_Dict_Dict);
extern struct Cyc_Iter_Iter Cyc_Dict_make_iter(struct _RegionHandle *,struct Cyc_Dict_Dict);
extern long Cyc_CfFlowInfo_anal_error;
 struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct {
  int tag;
  struct Cyc_Absyn_Vardecl * f1;
};
 struct Cyc_CfFlowInfo_MallocPt_CfFlowInfo_Root_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  void * f2;
};
 struct Cyc_CfFlowInfo_InitParam_CfFlowInfo_Root_struct {
  int tag;
  int f1;
  void * f2;
};
 struct Cyc_CfFlowInfo_Dot_CfFlowInfo_PathCon_struct {
  int tag;
  int f1;
};
 struct Cyc_CfFlowInfo_Place {
  void * root;
  struct Cyc_List_List * path;
};
enum Cyc_CfFlowInfo_InitLevel {
  Cyc_CfFlowInfo_NoneIL = 0U,
  Cyc_CfFlowInfo_AllIL = 1U
};
char Cyc_CfFlowInfo_IsZero[7U] = "IsZero";
 struct Cyc_CfFlowInfo_IsZero_Absyn_AbsynAnnot_struct {
  char * tag;
};
char Cyc_CfFlowInfo_NotZero[8U] = "NotZero";
 struct Cyc_CfFlowInfo_NotZero_Absyn_AbsynAnnot_struct {
  char * tag;
};
char Cyc_CfFlowInfo_UnknownZ[9U] = "UnknownZ";
 struct Cyc_CfFlowInfo_UnknownZ_Absyn_AbsynAnnot_struct {
  char * tag;
};
 struct _union_AbsLVal_PlaceL {
  int tag;
  struct Cyc_CfFlowInfo_Place * val;
};
 struct _union_AbsLVal_UnknownL {
  int tag;
  int val;
};
 union Cyc_CfFlowInfo_AbsLVal {
  struct _union_AbsLVal_PlaceL PlaceL;
  struct _union_AbsLVal_UnknownL UnknownL;
};
 struct Cyc_CfFlowInfo_UnionRInfo {
  long is_union;
  int fieldnum;
};
 struct Cyc_CfFlowInfo_Zero_CfFlowInfo_AbsRVal_struct {
  int tag;
};
 struct Cyc_CfFlowInfo_NotZeroAll_CfFlowInfo_AbsRVal_struct {
  int tag;
};
 struct Cyc_CfFlowInfo_UnknownR_CfFlowInfo_AbsRVal_struct {
  int tag;
  enum Cyc_CfFlowInfo_InitLevel f1;
};
 struct Cyc_CfFlowInfo_Esc_CfFlowInfo_AbsRVal_struct {
  int tag;
  enum Cyc_CfFlowInfo_InitLevel f1;
};
 struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct {
  int tag;
  struct Cyc_CfFlowInfo_Place * f1;
};
 struct Cyc_CfFlowInfo_UniquePtr_CfFlowInfo_AbsRVal_struct {
  int tag;
  void * f1;
};
 struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct {
  int tag;
  struct Cyc_CfFlowInfo_UnionRInfo f1;
  struct _fat_ptr f2;
};
 struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
  int f2;
  void * f3;
  long f4;
};
 struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct {
  int tag;
  struct Cyc_Absyn_Vardecl * f1;
  void * f2;
};
 struct _union_FlowInfo_BottomFL {
  int tag;
  int val;
};
 struct _union_FlowInfo_ReachableFL {
  int tag;
  struct Cyc_Dict_Dict val;
};
 union Cyc_CfFlowInfo_FlowInfo {
  struct _union_FlowInfo_BottomFL BottomFL;
  struct _union_FlowInfo_ReachableFL ReachableFL;
};
 struct Cyc_CfFlowInfo_FlowEnv {
  void * zero;
  void * notzeroall;
  void * unknown_none;
  void * unknown_all;
  void * esc_none;
  void * esc_all;
  struct Cyc_Dict_Dict mt_flowdict;
  struct Cyc_CfFlowInfo_Place * dummy_place;
};
extern int Cyc_CfFlowInfo_root_cmp(void *,void *);
extern enum Cyc_CfFlowInfo_InitLevel Cyc_CfFlowInfo_initlevel(struct Cyc_CfFlowInfo_FlowEnv *,
							      struct Cyc_Dict_Dict,
							      void *);
extern void * Cyc_CfFlowInfo_lookup_place(struct Cyc_Dict_Dict,struct Cyc_CfFlowInfo_Place *);
extern long Cyc_CfFlowInfo_flow_lessthan_approx(union Cyc_CfFlowInfo_FlowInfo,
						union Cyc_CfFlowInfo_FlowInfo);
extern void Cyc_CfFlowInfo_print_absrval(void *);
struct _fat_ptr Cyc_Absynpp_typ2string(void *);
struct _fat_ptr Cyc_Absynpp_exp2string(struct Cyc_Absyn_Exp *);
struct _fat_ptr Cyc_Absynpp_qvar2string(struct _tuple0 *);
extern struct Cyc_Absyn_Kind Cyc_Kinds_bk;
struct Cyc_Absyn_Kind * Cyc_Kinds_tvar_kind(struct Cyc_Absyn_Tvar *,struct Cyc_Absyn_Kind *);
long Cyc_Tcutil_is_bits_only_type(void *);
void * Cyc_Tcutil_rsubstitute(struct _RegionHandle *,struct Cyc_List_List *,
			      void *);
struct Cyc_Absyn_Exp * Cyc_Tcutil_rsubsexp(struct _RegionHandle *,struct Cyc_List_List *,
					   struct Cyc_Absyn_Exp *);
long Cyc_Tcutil_is_noalias_pointer(struct Cyc_List_List *,void *,long);
long Cyc_Tcutil_force_type2bool(long,void *);
struct Cyc___cycFILE;
extern struct Cyc___cycFILE * Cyc_stderr;
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);
extern int Cyc_fprintf(struct Cyc___cycFILE *,struct _fat_ptr,struct _fat_ptr);
void Cyc_Warn_verr(unsigned int,struct _fat_ptr,struct _fat_ptr);
void * Cyc_Warn_impos(struct _fat_ptr,struct _fat_ptr);
extern int Cyc_strptrcmp(struct _fat_ptr *,struct _fat_ptr *);
long Cyc_CfFlowInfo_anal_error = 0;
void Cyc_CfFlowInfo_aerr(unsigned int loc,struct _fat_ptr fmt,struct _fat_ptr ap) {
  Cyc_CfFlowInfo_anal_error = 1;
  Cyc_Warn_verr(loc,fmt,ap);
}
struct Cyc_CfFlowInfo_IsZero_Absyn_AbsynAnnot_struct Cyc_CfFlowInfo_IsZero_val = {Cyc_CfFlowInfo_IsZero};
struct Cyc_CfFlowInfo_NotZero_Absyn_AbsynAnnot_struct Cyc_CfFlowInfo_NotZero_val = {Cyc_CfFlowInfo_NotZero};
struct Cyc_CfFlowInfo_UnknownZ_Absyn_AbsynAnnot_struct Cyc_CfFlowInfo_UnknownZ_val = {Cyc_CfFlowInfo_UnknownZ};
union Cyc_CfFlowInfo_AbsLVal Cyc_CfFlowInfo_UnknownL() {
  union Cyc_CfFlowInfo_AbsLVal _T0;
  { union Cyc_CfFlowInfo_AbsLVal _T1;
    (_T1.UnknownL).tag = 2U;
    (_T1.UnknownL).val = 0;
    _T0 = _T1;
  }return _T0;
}
union Cyc_CfFlowInfo_AbsLVal Cyc_CfFlowInfo_PlaceL(struct Cyc_CfFlowInfo_Place * x) {
  union Cyc_CfFlowInfo_AbsLVal _T0;
  { union Cyc_CfFlowInfo_AbsLVal _T1;
    (_T1.PlaceL).tag = 1U;
    (_T1.PlaceL).val = x;
    _T0 = _T1;
  }return _T0;
}
union Cyc_CfFlowInfo_FlowInfo Cyc_CfFlowInfo_BottomFL() {
  union Cyc_CfFlowInfo_FlowInfo _T0;
  { union Cyc_CfFlowInfo_FlowInfo _T1;
    (_T1.BottomFL).tag = 1U;
    (_T1.BottomFL).val = 0;
    _T0 = _T1;
  }return _T0;
}
union Cyc_CfFlowInfo_FlowInfo Cyc_CfFlowInfo_ReachableFL(struct Cyc_Dict_Dict fd) {
  union Cyc_CfFlowInfo_FlowInfo _T0;
  { union Cyc_CfFlowInfo_FlowInfo _T1;
    (_T1.ReachableFL).tag = 2U;
    (_T1.ReachableFL).val = fd;
    _T0 = _T1;
  }return _T0;
}
struct Cyc_CfFlowInfo_FlowEnv * Cyc_CfFlowInfo_new_flow_env() {
  struct Cyc_CfFlowInfo_FlowEnv * _T0;
  struct Cyc_CfFlowInfo_Zero_CfFlowInfo_AbsRVal_struct * _T1;
  struct Cyc_CfFlowInfo_NotZeroAll_CfFlowInfo_AbsRVal_struct * _T2;
  struct Cyc_CfFlowInfo_UnknownR_CfFlowInfo_AbsRVal_struct * _T3;
  struct Cyc_CfFlowInfo_UnknownR_CfFlowInfo_AbsRVal_struct * _T4;
  struct Cyc_CfFlowInfo_Esc_CfFlowInfo_AbsRVal_struct * _T5;
  struct Cyc_CfFlowInfo_Esc_CfFlowInfo_AbsRVal_struct * _T6;
  int (* _T7)(void *,void *);
  struct Cyc_CfFlowInfo_Place * _T8;
  struct Cyc_CfFlowInfo_MallocPt_CfFlowInfo_Root_struct * _T9;
  struct Cyc_Absyn_Exp * _TA;
  static struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct dummy_rawexp = {0,
								       {.Null_c={1,
										 0}}};
  static struct Cyc_Absyn_Exp dummy_exp = {0,(void *)((struct Cyc_Absyn_Const_e_Absyn_Raw_exp_struct *)&dummy_rawexp),
					   0U,(void *)((struct Cyc_Absyn_EmptyAnnot_Absyn_AbsynAnnot_struct *)&Cyc_Absyn_EmptyAnnot_val)};
  { struct Cyc_CfFlowInfo_FlowEnv * _TB = _cycalloc(sizeof(struct Cyc_CfFlowInfo_FlowEnv));
    { struct Cyc_CfFlowInfo_Zero_CfFlowInfo_AbsRVal_struct * _TC = _cycalloc(sizeof(struct Cyc_CfFlowInfo_Zero_CfFlowInfo_AbsRVal_struct));
      _TC->tag = 0;
      _T1 = (struct Cyc_CfFlowInfo_Zero_CfFlowInfo_AbsRVal_struct *)_TC;
    }_TB->zero = (void *)_T1;
    { struct Cyc_CfFlowInfo_NotZeroAll_CfFlowInfo_AbsRVal_struct * _TC = _cycalloc(sizeof(struct Cyc_CfFlowInfo_NotZeroAll_CfFlowInfo_AbsRVal_struct));
      _TC->tag = 1;
      _T2 = (struct Cyc_CfFlowInfo_NotZeroAll_CfFlowInfo_AbsRVal_struct *)_TC;
    }_TB->notzeroall = (void *)_T2;
    { struct Cyc_CfFlowInfo_UnknownR_CfFlowInfo_AbsRVal_struct * _TC = _cycalloc(sizeof(struct Cyc_CfFlowInfo_UnknownR_CfFlowInfo_AbsRVal_struct));
      _TC->tag = 2;
      _TC->f1 = 0U;
      _T3 = (struct Cyc_CfFlowInfo_UnknownR_CfFlowInfo_AbsRVal_struct *)_TC;
    }_TB->unknown_none = (void *)_T3;
    { struct Cyc_CfFlowInfo_UnknownR_CfFlowInfo_AbsRVal_struct * _TC = _cycalloc(sizeof(struct Cyc_CfFlowInfo_UnknownR_CfFlowInfo_AbsRVal_struct));
      _TC->tag = 2;
      _TC->f1 = 1U;
      _T4 = (struct Cyc_CfFlowInfo_UnknownR_CfFlowInfo_AbsRVal_struct *)_TC;
    }_TB->unknown_all = (void *)_T4;
    { struct Cyc_CfFlowInfo_Esc_CfFlowInfo_AbsRVal_struct * _TC = _cycalloc(sizeof(struct Cyc_CfFlowInfo_Esc_CfFlowInfo_AbsRVal_struct));
      _TC->tag = 3;
      _TC->f1 = 0U;
      _T5 = (struct Cyc_CfFlowInfo_Esc_CfFlowInfo_AbsRVal_struct *)_TC;
    }_TB->esc_none = (void *)_T5;
    { struct Cyc_CfFlowInfo_Esc_CfFlowInfo_AbsRVal_struct * _TC = _cycalloc(sizeof(struct Cyc_CfFlowInfo_Esc_CfFlowInfo_AbsRVal_struct));
      _TC->tag = 3;
      _TC->f1 = 1U;
      _T6 = (struct Cyc_CfFlowInfo_Esc_CfFlowInfo_AbsRVal_struct *)_TC;
    }_TB->esc_all = (void *)_T6;
    _T7 = Cyc_CfFlowInfo_root_cmp;
    _TB->mt_flowdict = Cyc_Dict_empty(_T7);
    { struct Cyc_CfFlowInfo_Place * _TC = _cycalloc(sizeof(struct Cyc_CfFlowInfo_Place));
      { struct Cyc_CfFlowInfo_MallocPt_CfFlowInfo_Root_struct * _TD = _cycalloc(sizeof(struct Cyc_CfFlowInfo_MallocPt_CfFlowInfo_Root_struct));
	_TD->tag = 1;
	_TA = &dummy_exp;
	_TD->f1 = (struct Cyc_Absyn_Exp *)_TA;
	_TD->f2 = Cyc_Absyn_void_type;
	_T9 = (struct Cyc_CfFlowInfo_MallocPt_CfFlowInfo_Root_struct *)_TD;
      }_TC->root = (void *)_T9;
      _TC->path = 0;
      _T8 = (struct Cyc_CfFlowInfo_Place *)_TC;
    }_TB->dummy_place = _T8;
    _T0 = (struct Cyc_CfFlowInfo_FlowEnv *)_TB;
  }return _T0;
}
struct _fat_ptr Cyc_CfFlowInfo_place_err_string(struct Cyc_CfFlowInfo_Place * place) {
  struct Cyc_CfFlowInfo_Place * _T0;
  void * _T1;
  int * _T2;
  int _T3;
  void * _T4;
  struct Cyc_Absyn_Vardecl * _T5;
  struct _tuple0 * _T6;
  struct _fat_ptr _T7;
  struct _fat_ptr _T8;
  struct Cyc_String_pa_PrintArg_struct _T9;
  struct Cyc_Absyn_Vardecl * _TA;
  struct _tuple0 * _TB;
  struct _fat_ptr _TC;
  struct _fat_ptr _TD;
  int (* _TE)(struct _fat_ptr,struct _fat_ptr);
  void * (* _TF)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T10;
  struct _fat_ptr _T11;
  _T0 = place;
  { struct Cyc_CfFlowInfo_Place _T12 = *_T0;
    struct Cyc_List_List * _T13;
    void * _T14;
    _T14 = _T12.root;
    _T13 = _T12.path;
    { void * root = _T14;
      struct Cyc_List_List * fields = _T13;
      struct Cyc_Absyn_Vardecl * _T15;
      _T1 = root;
      _T2 = (int *)_T1;
      _T3 = *_T2;
      if (_T3 != 0) { goto _TL0;
      }
      _T4 = root;
      { struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct * _T16 = (struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct *)_T4;
	_T15 = _T16->f1;
      }{ struct Cyc_Absyn_Vardecl * vd = _T15;
	if (fields != 0) { goto _TL2;
	}
	_T5 = vd;
	_T6 = _T5->name;
	_T7 = Cyc_Absynpp_qvar2string(_T6);
	return _T7;
	_TL2: { struct Cyc_String_pa_PrintArg_struct _T16;
	  _T16.tag = 0;
	  _TA = vd;
	  _TB = _TA->name;
	  _T16.f1 = Cyc_Absynpp_qvar2string(_TB);
	  _T9 = _T16;
	}{ struct Cyc_String_pa_PrintArg_struct _T16 = _T9;
	  void * _T17[1];
	  _T17[0] = &_T16;
	  _TC = _tag_fat("reachable from %s",sizeof(char),18U);
	  _TD = _tag_fat(_T17,sizeof(void *),1);
	  _T8 = Cyc_aprintf(_TC,_TD);
	}return _T8;
      }_TL0: _TF = Cyc_Warn_impos;
      { int (* _T16)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								 struct _fat_ptr))_TF;
	_TE = _T16;
      }_T10 = _tag_fat("error locations not for VarRoots",sizeof(char),33U);
      _T11 = _tag_fat(0U,sizeof(void *),0);
      _TE(_T10,_T11);
      ;
    }
  }
}
int Cyc_CfFlowInfo_get_field_index_fs(struct Cyc_List_List * fs,struct _fat_ptr * f) {
  struct Cyc_List_List * _T0;
  unsigned int _T1;
  struct Cyc_List_List * _T2;
  void * _T3;
  struct Cyc_Absyn_Aggrfield * _T4;
  int _T5;
  int _T6;
  struct Cyc_List_List * _T7;
  struct Cyc_String_pa_PrintArg_struct _T8;
  struct _fat_ptr * _T9;
  int (* _TA)(struct _fat_ptr,struct _fat_ptr);
  void * (* _TB)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _TC;
  struct _fat_ptr _TD;
  int n = 0;
  _TL7: _T0 = fs;
  _T1 = (unsigned int)_T0;
  if (_T1) { goto _TL5;
  }else { goto _TL6;
  }
  _TL5: _T2 = fs;
  _T3 = _T2->hd;
  _T4 = (struct Cyc_Absyn_Aggrfield *)_T3;
  { struct _fat_ptr * f2 = _T4->name;
    _T5 = Cyc_strptrcmp(f2,f);
    if (_T5 != 0) { goto _TL8;
    }
    _T6 = n;
    return _T6;
    _TL8: n = n + 1;
  }_T7 = fs;
  fs = _T7->tl;
  goto _TL7;
  _TL6: { struct Cyc_String_pa_PrintArg_struct _TE;
    _TE.tag = 0;
    _T9 = f;
    _TE.f1 = *_T9;
    _T8 = _TE;
  }{ struct Cyc_String_pa_PrintArg_struct _TE = _T8;
    void * _TF[1];
    _TF[0] = &_TE;
    _TB = Cyc_Warn_impos;
    { int (* _T10)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
							       struct _fat_ptr))_TB;
      _TA = _T10;
    }_TC = _tag_fat("get_field_index_fs failed: %s",sizeof(char),30U);
    _TD = _tag_fat(_TF,sizeof(void *),1);
    _TA(_TC,_TD);
  }
}
int Cyc_CfFlowInfo_get_field_index(void * t,struct _fat_ptr * f) {
  int * _T0;
  unsigned int _T1;
  struct Cyc_Absyn_Vardecl * _T2;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T3;
  void * _T4;
  int * _T5;
  int _T6;
  void * _T7;
  struct Cyc_Absyn_Aggrdecl * _T8;
  struct Cyc_Absyn_AggrdeclImpl * _T9;
  struct Cyc_Absyn_AggrdeclImpl * _TA;
  int _TB;
  struct Cyc_String_pa_PrintArg_struct _TC;
  int (* _TD)(struct _fat_ptr,struct _fat_ptr);
  void * (* _TE)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _TF;
  struct _fat_ptr _T10;
  loop: { void * _T11 = Cyc_Absyn_compress(t);
    struct Cyc_List_List * _T12;
    union Cyc_Absyn_AggrInfo _T13;
    struct Cyc_Absyn_Vardecl * _T14;
    _T0 = (int *)_T11;
    _T1 = *_T0;
    switch (_T1) {
    case 12: 
      { struct Cyc_Absyn_SubsetType_Absyn_Type_struct * _T15 = (struct Cyc_Absyn_SubsetType_Absyn_Type_struct *)_T11;
	_T14 = _T15->f1;
      }{ struct Cyc_Absyn_Vardecl * vd = _T14;
	_T2 = vd;
	t = _T2->type;
	goto loop;
      }
    case 0: 
      _T3 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T11;
      _T4 = _T3->f1;
      _T5 = (int *)_T4;
      _T6 = *_T5;
      if (_T6 != 24) { goto _TLB;
      }
      { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T15 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T11;
	_T7 = _T15->f1;
	{ struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct * _T16 = (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct *)_T7;
	  _T13 = _T16->f1;
	}
      }{ union Cyc_Absyn_AggrInfo info = _T13;
	_T8 = Cyc_Absyn_get_known_aggrdecl(info);
	_T9 = _T8->impl;
	_TA = _check_null(_T9);
	{ struct Cyc_List_List * fs = _TA->fields;
	  _T12 = fs;
	  goto _LL6;
	}
      }_TLB: goto _LL7;
    case 7: 
      { struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct * _T15 = (struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct *)_T11;
	_T12 = _T15->f3;
      }_LL6: { struct Cyc_List_List * fs = _T12;
	_TB = Cyc_CfFlowInfo_get_field_index_fs(fs,f);
	return _TB;
      }
    default: 
      _LL7: { struct Cyc_String_pa_PrintArg_struct _T15;
	_T15.tag = 0;
	_T15.f1 = Cyc_Absynpp_typ2string(t);
	_TC = _T15;
      }{ struct Cyc_String_pa_PrintArg_struct _T15 = _TC;
	void * _T16[1];
	_T16[0] = &_T15;
	_TE = Cyc_Warn_impos;
	{ int (* _T17)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								   struct _fat_ptr))_TE;
	  _TD = _T17;
	}_TF = _tag_fat("get_field_index failed: %s",sizeof(char),27U);
	_T10 = _tag_fat(_T16,sizeof(void *),1);
	_TD(_TF,_T10);
      }
    }
    ;
  }
}
 struct _tuple13 {
  void * f0;
  void * f1;
};
int Cyc_CfFlowInfo_root_cmp(void * r1,void * r2) {
  void * _T0;
  int _T1;
  void * _T2;
  int _T3;
  struct _tuple13 _T4;
  void * _T5;
  int * _T6;
  unsigned int _T7;
  void * _T8;
  int * _T9;
  int _TA;
  void * _TB;
  void * _TC;
  struct Cyc_Absyn_Vardecl * _TD;
  int _TE;
  struct Cyc_Absyn_Vardecl * _TF;
  int _T10;
  int _T11;
  int _T12;
  void * _T13;
  int * _T14;
  unsigned int _T15;
  void * _T16;
  void * _T17;
  struct Cyc_Absyn_Exp * _T18;
  int _T19;
  struct Cyc_Absyn_Exp * _T1A;
  int _T1B;
  int _T1C;
  int _T1D;
  void * _T1E;
  int * _T1F;
  unsigned int _T20;
  void * _T21;
  void * _T22;
  int _T23;
  _T0 = r1;
  _T1 = (int)_T0;
  _T2 = r2;
  _T3 = (int)_T2;
  if (_T1 != _T3) { goto _TLD;
  }
  return 0;
  _TLD: { struct _tuple13 _T24;
    _T24.f0 = r1;
    _T24.f1 = r2;
    _T4 = _T24;
  }{ struct _tuple13 _T24 = _T4;
    int _T25;
    int _T26;
    struct Cyc_Absyn_Exp * _T27;
    struct Cyc_Absyn_Exp * _T28;
    struct Cyc_Absyn_Vardecl * _T29;
    struct Cyc_Absyn_Vardecl * _T2A;
    _T5 = _T24.f0;
    _T6 = (int *)_T5;
    _T7 = *_T6;
    switch (_T7) {
    case 0: 
      _T8 = _T24.f1;
      _T9 = (int *)_T8;
      _TA = *_T9;
      if (_TA != 0) { goto _TL10;
      }
      _TB = _T24.f0;
      { struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct * _T2B = (struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct *)_TB;
	_T2A = _T2B->f1;
      }_TC = _T24.f1;
      { struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct * _T2B = (struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct *)_TC;
	_T29 = _T2B->f1;
      }{ struct Cyc_Absyn_Vardecl * vd1 = _T2A;
	struct Cyc_Absyn_Vardecl * vd2 = _T29;
	_TD = vd1;
	_TE = (int)_TD;
	_TF = vd2;
	_T10 = (int)_TF;
	_T11 = _TE - _T10;
	return _T11;
      }_TL10: _T12 = - 1;
      return _T12;
    case 1: 
      _T13 = _T24.f1;
      _T14 = (int *)_T13;
      _T15 = *_T14;
      switch (_T15) {
      case 1: 
	_T16 = _T24.f0;
	{ struct Cyc_CfFlowInfo_MallocPt_CfFlowInfo_Root_struct * _T2B = (struct Cyc_CfFlowInfo_MallocPt_CfFlowInfo_Root_struct *)_T16;
	  _T28 = _T2B->f1;
	}_T17 = _T24.f1;
	{ struct Cyc_CfFlowInfo_MallocPt_CfFlowInfo_Root_struct * _T2B = (struct Cyc_CfFlowInfo_MallocPt_CfFlowInfo_Root_struct *)_T17;
	  _T27 = _T2B->f1;
	}{ struct Cyc_Absyn_Exp * e1 = _T28;
	  struct Cyc_Absyn_Exp * e2 = _T27;
	  _T18 = e1;
	  _T19 = (int)_T18;
	  _T1A = e2;
	  _T1B = (int)_T1A;
	  _T1C = _T19 - _T1B;
	  return _T1C;
	}
      case 0: 
	goto _LL9;
      default: 
	_T1D = - 1;
	return _T1D;
      }
      ;
    default: 
      _T1E = _T24.f1;
      _T1F = (int *)_T1E;
      _T20 = *_T1F;
      switch (_T20) {
      case 2: 
	_T21 = _T24.f0;
	{ struct Cyc_CfFlowInfo_InitParam_CfFlowInfo_Root_struct * _T2B = (struct Cyc_CfFlowInfo_InitParam_CfFlowInfo_Root_struct *)_T21;
	  _T26 = _T2B->f1;
	}_T22 = _T24.f1;
	{ struct Cyc_CfFlowInfo_InitParam_CfFlowInfo_Root_struct * _T2B = (struct Cyc_CfFlowInfo_InitParam_CfFlowInfo_Root_struct *)_T22;
	  _T25 = _T2B->f1;
	}{ int i1 = _T26;
	  int i2 = _T25;
	  _T23 = i1 - i2;
	  return _T23;
	}
      case 0: 
	_LL9: return 1;
      default: 
	return 1;
      }
      ;
    }
    ;
  }
}
static int Cyc_CfFlowInfo_pathcon_cmp(void * p1,void * p2) {
  struct _tuple13 _T0;
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
  { struct _tuple13 _TE;
    _TE.f0 = p1;
    _TE.f1 = p2;
    _T0 = _TE;
  }{ struct _tuple13 _TE = _T0;
    int _TF;
    int _T10;
    _T1 = _TE.f0;
    _T2 = (int *)_T1;
    _T3 = *_T2;
    if (_T3 != 0) { goto _TL14;
    }
    _T4 = _TE.f1;
    _T5 = (int *)_T4;
    _T6 = *_T5;
    if (_T6 != 0) { goto _TL16;
    }
    _T7 = _TE.f0;
    { struct Cyc_CfFlowInfo_Dot_CfFlowInfo_PathCon_struct * _T11 = (struct Cyc_CfFlowInfo_Dot_CfFlowInfo_PathCon_struct *)_T7;
      _T10 = _T11->f1;
    }_T8 = _TE.f1;
    { struct Cyc_CfFlowInfo_Dot_CfFlowInfo_PathCon_struct * _T11 = (struct Cyc_CfFlowInfo_Dot_CfFlowInfo_PathCon_struct *)_T8;
      _TF = _T11->f1;
    }{ int i1 = _T10;
      int i2 = _TF;
      if (i1 != i2) { goto _TL18;
      }
      return 0;
      _TL18: if (i1 >= i2) { goto _TL1A;
      }
      _T9 = - 1;
      return _T9;
      _TL1A: return 1;
    }_TL16: return 1;
    _TL14: _TA = _TE.f1;
    _TB = (int *)_TA;
    _TC = *_TB;
    if (_TC != 1) { goto _TL1C;
    }
    return 0;
    _TL1C: _TD = - 1;
    return _TD;
    ;
  }
}
static int Cyc_CfFlowInfo_path_cmp(struct Cyc_List_List * path1,struct Cyc_List_List * path2) {
  struct Cyc_List_List * _T0;
  struct Cyc_List_List * _T1;
  int _T2;
  _T0 = path1;
  _T1 = path2;
  _T2 = Cyc_List_list_cmp(Cyc_CfFlowInfo_pathcon_cmp,_T0,_T1);
  return _T2;
}
int Cyc_CfFlowInfo_place_cmp(struct Cyc_CfFlowInfo_Place * p1,struct Cyc_CfFlowInfo_Place * p2) {
  struct Cyc_CfFlowInfo_Place * _T0;
  int _T1;
  struct Cyc_CfFlowInfo_Place * _T2;
  int _T3;
  struct Cyc_CfFlowInfo_Place * _T4;
  struct Cyc_CfFlowInfo_Place * _T5;
  int _T6;
  int _T7;
  _T0 = p1;
  _T1 = (int)_T0;
  _T2 = p2;
  _T3 = (int)_T2;
  if (_T1 != _T3) { goto _TL1E;
  }
  return 0;
  _TL1E: _T4 = p1;
  { struct Cyc_CfFlowInfo_Place _T8 = *_T4;
    struct Cyc_List_List * _T9;
    void * _TA;
    _TA = _T8.root;
    _T9 = _T8.path;
    { void * root1 = _TA;
      struct Cyc_List_List * path1 = _T9;
      _T5 = p2;
      { struct Cyc_CfFlowInfo_Place _TB = *_T5;
	struct Cyc_List_List * _TC;
	void * _TD;
	_TD = _TB.root;
	_TC = _TB.path;
	{ void * root2 = _TD;
	  struct Cyc_List_List * path2 = _TC;
	  int i = Cyc_CfFlowInfo_root_cmp(root1,root2);
	  if (i == 0) { goto _TL20;
	  }
	  _T6 = i;
	  return _T6;
	  _TL20: _T7 = Cyc_CfFlowInfo_path_cmp(path1,path2);
	  return _T7;
	}
      }
    }
  }
}
static void * Cyc_CfFlowInfo_i_typ_to_absrval(struct Cyc_CfFlowInfo_FlowEnv *,
					      long,long,void *,void *);
struct _fat_ptr Cyc_CfFlowInfo_aggrfields_to_aggrdict(struct Cyc_CfFlowInfo_FlowEnv * fenv,
						      struct Cyc_List_List * fs,
						      long no_init_bits_only,
						      void * leafval) {
  int _T0;
  struct _fat_ptr _T1;
  void * * _T2;
  unsigned int _T3;
  unsigned int _T4;
  struct Cyc_CfFlowInfo_FlowEnv * _T5;
  int _T6;
  unsigned int _T7;
  unsigned int _T8;
  struct Cyc_List_List * _T9;
  void * _TA;
  struct _fat_ptr * _TB;
  struct _fat_ptr _TC;
  unsigned int _TD;
  struct _fat_ptr _TE;
  unsigned char * _TF;
  void * * _T10;
  int _T11;
  struct Cyc_List_List * _T12;
  struct _fat_ptr _T13;
  _T0 = Cyc_List_length(fs);
  { unsigned int sz = (unsigned int)_T0;
    { unsigned int _T14 = sz;
      _T3 = _check_times(_T14,sizeof(void *));
      { void * * _T15 = _cycalloc(_T3);
	{ unsigned int _T16 = _T14;
	  unsigned int i;
	  i = 0;
	  _TL25: if (i < _T16) { goto _TL23;
	  }else { goto _TL24;
	  }
	  _TL23: _T4 = i;
	  _T5 = fenv;
	  _T15[_T4] = _T5->unknown_all;
	  i = i + 1;
	  goto _TL25;
	  _TL24: ;
	}_T2 = (void * *)_T15;
      }_T1 = _tag_fat(_T2,sizeof(void *),_T14);
    }{ struct _fat_ptr d = _T1;
      { int i = 0;
	_TL29: _T6 = i;
	_T7 = (unsigned int)_T6;
	_T8 = sz;
	if (_T7 < _T8) { goto _TL27;
	}else { goto _TL28;
	}
	_TL27: _T9 = _check_null(fs);
	_TA = _T9->hd;
	{ struct Cyc_Absyn_Aggrfield * _T14 = (struct Cyc_Absyn_Aggrfield *)_TA;
	  void * _T15;
	  struct _fat_ptr * _T16;
	  { struct Cyc_Absyn_Aggrfield _T17 = *_T14;
	    _T16 = _T17.name;
	    _T15 = _T17.type;
	  }{ struct _fat_ptr * n = _T16;
	    void * t2 = _T15;
	    _TB = n;
	    _TC = *_TB;
	    _TD = _get_fat_size(_TC,sizeof(char));
	    if (_TD == 1U) { goto _TL2A;
	    }
	    _TE = d;
	    _TF = _TE.curr;
	    _T10 = (void * *)_TF;
	    _T11 = i;
	    _T10[_T11] = Cyc_CfFlowInfo_i_typ_to_absrval(fenv,0,no_init_bits_only,
							 t2,leafval);
	    goto _TL2B;
	    _TL2A: _TL2B: ;
	  }
	}i = i + 1;
	_T12 = fs;
	fs = _T12->tl;
	goto _TL29;
	_TL28: ;
      }_T13 = d;
      return _T13;
    }
  }
}
 struct _tuple14 {
  struct _RegionHandle * f0;
  struct Cyc_List_List * f1;
};
static struct Cyc_Absyn_Aggrfield * Cyc_CfFlowInfo_substitute_field(struct _tuple14 * env,
								    struct Cyc_Absyn_Aggrfield * f) {
  struct _tuple14 * _T0;
  struct _RegionHandle * _T1;
  struct Cyc_List_List * _T2;
  struct Cyc_Absyn_Aggrfield * _T3;
  void * _T4;
  struct Cyc_Absyn_Aggrfield * _T5;
  struct Cyc_Absyn_Exp * _T6;
  struct Cyc_Absyn_Aggrfield * _T7;
  struct _RegionHandle * _T8;
  struct Cyc_Absyn_Aggrfield * _T9;
  struct Cyc_Absyn_Aggrfield * _TA;
  struct Cyc_Absyn_Aggrfield * _TB;
  struct Cyc_Absyn_Aggrfield * _TC;
  struct Cyc_List_List * _TD;
  struct _RegionHandle * _TE;
  _T0 = env;
  { struct _tuple14 _TF = *_T0;
    _TE = _TF.f0;
    _TD = _TF.f1;
  }{ struct _RegionHandle * t = _TE;
    struct Cyc_List_List * inst = _TD;
    _T1 = t;
    _T2 = inst;
    _T3 = f;
    _T4 = _T3->type;
    { void * new_typ = Cyc_Tcutil_rsubstitute(_T1,_T2,_T4);
      _T5 = f;
      { struct Cyc_Absyn_Exp * r = _T5->requires_clause;
	if (r != 0) { goto _TL2C;
	}
	_T6 = 0;
	goto _TL2D;
	_TL2C: _T6 = Cyc_Tcutil_rsubsexp(t,inst,r);
	_TL2D: { struct Cyc_Absyn_Exp * new_r = _T6;
	  _T8 = t;
	  { struct Cyc_Absyn_Aggrfield * _TF = _region_malloc(_T8,0U,sizeof(struct Cyc_Absyn_Aggrfield));
	    _T9 = f;
	    _TF->name = _T9->name;
	    _TA = f;
	    _TF->tq = _TA->tq;
	    _TF->type = new_typ;
	    _TB = f;
	    _TF->width = _TB->width;
	    _TC = f;
	    _TF->attributes = _TC->attributes;
	    _TF->requires_clause = new_r;
	    _T7 = (struct Cyc_Absyn_Aggrfield *)_TF;
	  }return _T7;
	}
      }
    }
  }
}
 struct _tuple15 {
  struct Cyc_Absyn_Tvar * f0;
  void * f1;
};
static struct _fat_ptr Cyc_CfFlowInfo_substitute_aggrfields_to_aggrdict(struct Cyc_CfFlowInfo_FlowEnv * fenv,
									struct Cyc_List_List * tvs,
									struct Cyc_List_List * targs,
									struct Cyc_List_List * fs,
									long no_init_bits_only,
									void * leafval) {
  struct Cyc_List_List * _T0;
  void * _T1;
  struct Cyc_List_List * _T2;
  struct Cyc_Absyn_Tvar * _T3;
  struct Cyc_Absyn_Kind * _T4;
  struct Cyc_Absyn_Kind * _T5;
  struct Cyc_Absyn_Kind * _T6;
  enum Cyc_Absyn_KindQual _T7;
  struct Cyc_List_List * _T8;
  struct _RegionHandle * _T9;
  struct _tuple15 * _TA;
  struct _RegionHandle * _TB;
  struct Cyc_List_List * _TC;
  struct Cyc_List_List * _TD;
  struct _tuple14 _TE;
  struct Cyc_List_List * (* _TF)(struct _RegionHandle *,struct Cyc_Absyn_Aggrfield * (*)(struct _tuple14 *,
											 struct Cyc_Absyn_Aggrfield *),
				 struct _tuple14 *,struct Cyc_List_List *);
  struct Cyc_List_List * (* _T10)(struct _RegionHandle *,void * (*)(void *,
								    void *),
				  void *,struct Cyc_List_List *);
  struct _RegionHandle * _T11;
  struct _tuple14 * _T12;
  struct Cyc_List_List * _T13;
  struct _RegionHandle _T14 = _new_region(0U,"temp");
  struct _RegionHandle * temp = &_T14;
  _push_region(temp);
  { struct Cyc_List_List * inst = 0;
    _TL31: if (tvs != 0) { goto _TL2F;
    }else { goto _TL30;
    }
    _TL2F: _T0 = tvs;
    _T1 = _T0->hd;
    { struct Cyc_Absyn_Tvar * tv = (struct Cyc_Absyn_Tvar *)_T1;
      _T2 = _check_null(targs);
      { void * t = _T2->hd;
	_T3 = tv;
	_T4 = &Cyc_Kinds_bk;
	_T5 = (struct Cyc_Absyn_Kind *)_T4;
	{ struct Cyc_Absyn_Kind * _T15 = Cyc_Kinds_tvar_kind(_T3,_T5);
	  _T6 = (struct Cyc_Absyn_Kind *)_T15;
	  _T7 = _T6->kind;
	  if (_T7 != Cyc_Absyn_EffKind) { goto _TL32;
	  }
	  goto _TL2E;
	  _TL32: goto _LL0;
	  _LL0: ;
	}_T9 = temp;
	{ struct Cyc_List_List * _T15 = _region_malloc(_T9,0U,sizeof(struct Cyc_List_List));
	  _TB = temp;
	  { struct _tuple15 * _T16 = _region_malloc(_TB,0U,sizeof(struct _tuple15));
	    _T16->f0 = tv;
	    _T16->f1 = t;
	    _TA = (struct _tuple15 *)_T16;
	  }_T15->hd = _TA;
	  _T15->tl = inst;
	  _T8 = (struct Cyc_List_List *)_T15;
	}inst = _T8;
      }
    }_TL2E: _TC = tvs;
    tvs = _TC->tl;
    _TD = targs;
    targs = _TD->tl;
    goto _TL31;
    _TL30: if (inst == 0) { goto _TL34;
    }
    { struct _tuple14 _T15;
      _T15.f0 = temp;
      _T15.f1 = Cyc_List_imp_rev(inst);
      _TE = _T15;
    }{ struct _tuple14 env = _TE;
      _T10 = Cyc_List_rmap_c;
      { struct Cyc_List_List * (* _T15)(struct _RegionHandle *,struct Cyc_Absyn_Aggrfield * (*)(struct _tuple14 *,
												struct Cyc_Absyn_Aggrfield *),
					struct _tuple14 *,struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct _RegionHandle *,
														struct Cyc_Absyn_Aggrfield * (*)(struct _tuple14 *,
																		 struct Cyc_Absyn_Aggrfield *),
														struct _tuple14 *,
														struct Cyc_List_List *))_T10;
	_TF = _T15;
      }_T11 = temp;
      _T12 = &env;
      _T13 = fs;
      { struct Cyc_List_List * subs_fs = _TF(_T11,Cyc_CfFlowInfo_substitute_field,
					     _T12,_T13);
	struct _fat_ptr _T15 = Cyc_CfFlowInfo_aggrfields_to_aggrdict(fenv,
								     subs_fs,
								     no_init_bits_only,
								     leafval);
	_npop_handler(0);
	return _T15;
      }
    }_TL34: { struct _fat_ptr _T15 = Cyc_CfFlowInfo_aggrfields_to_aggrdict(fenv,
									   fs,
									   no_init_bits_only,
									   leafval);
      _npop_handler(0);
      return _T15;
    }
  }_pop_region();
}
 struct _tuple16 {
  struct Cyc_Absyn_Tqual f0;
  void * f1;
};
static void * Cyc_CfFlowInfo_i_typ_to_absrval(struct Cyc_CfFlowInfo_FlowEnv * fenv,
					      long allow_zeroterm,long no_init_bits_only,
					      void * t,void * leafval) {
  long _T0;
  struct Cyc_CfFlowInfo_FlowEnv * _T1;
  void * _T2;
  int * _T3;
  unsigned int _T4;
  struct Cyc_Absyn_Vardecl * _T5;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T6;
  void * _T7;
  int * _T8;
  unsigned int _T9;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _TA;
  void * _TB;
  struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct * _TC;
  union Cyc_Absyn_DatatypeFieldInfo _TD;
  struct _union_DatatypeFieldInfo_KnownDatatypefield _TE;
  unsigned int _TF;
  void * _T10;
  union Cyc_Absyn_DatatypeFieldInfo _T11;
  struct _union_DatatypeFieldInfo_KnownDatatypefield _T12;
  struct _tuple1 _T13;
  struct Cyc_Absyn_Datatypefield * _T14;
  struct Cyc_List_List * _T15;
  void * _T16;
  struct Cyc_Absyn_Datatypefield * _T17;
  int _T18;
  int _T19;
  struct _fat_ptr _T1A;
  void * * _T1B;
  unsigned int _T1C;
  unsigned int _T1D;
  struct Cyc_CfFlowInfo_FlowEnv * _T1E;
  struct _fat_ptr _T1F;
  unsigned char * _T20;
  void * * _T21;
  int _T22;
  unsigned int _T23;
  unsigned int _T24;
  struct _fat_ptr _T25;
  unsigned char * _T26;
  void * * _T27;
  int _T28;
  struct Cyc_CfFlowInfo_FlowEnv * _T29;
  long _T2A;
  struct Cyc_List_List * _T2B;
  void * _T2C;
  struct _tuple16 * _T2D;
  struct _tuple16 _T2E;
  void * _T2F;
  void * _T30;
  struct Cyc_List_List * _T31;
  struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct * _T32;
  void * _T33;
  void * _T34;
  struct Cyc_Absyn_Aggrdecl * _T35;
  struct Cyc_Absyn_AggrdeclImpl * _T36;
  struct Cyc_Absyn_Aggrdecl * _T37;
  struct Cyc_Absyn_AggrdeclImpl * _T38;
  struct Cyc_Absyn_Aggrdecl * _T39;
  struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct * _T3A;
  struct Cyc_Absyn_Aggrdecl * _T3B;
  enum Cyc_Absyn_AggrKind _T3C;
  int _T3D;
  struct Cyc_CfFlowInfo_FlowEnv * _T3E;
  struct Cyc_Absyn_Aggrdecl * _T3F;
  struct Cyc_List_List * _T40;
  struct Cyc_List_List * _T41;
  struct Cyc_List_List * _T42;
  struct Cyc_Absyn_Aggrdecl * _T43;
  enum Cyc_Absyn_AggrKind _T44;
  int _T45;
  int _T46;
  void * _T47;
  void * _T48;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _T49;
  struct Cyc_List_List * _T4A;
  struct Cyc_List_List * _T4B;
  void * _T4C;
  void * _T4D;
  struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct * _T4E;
  enum Cyc_Absyn_AggrKind _T4F;
  int _T50;
  struct Cyc_CfFlowInfo_FlowEnv * _T51;
  struct Cyc_List_List * _T52;
  enum Cyc_Absyn_AggrKind _T53;
  int _T54;
  int _T55;
  void * _T56;
  void * _T57;
  struct Cyc_Absyn_ArrayInfo _T58;
  struct Cyc_Absyn_ArrayInfo _T59;
  long _T5A;
  void * _T5B;
  long _T5C;
  long _T5D;
  long _T5E;
  struct Cyc_CfFlowInfo_FlowEnv * _T5F;
  struct Cyc_Absyn_PtrInfo _T60;
  struct Cyc_Absyn_PtrAtts _T61;
  long _T62;
  void * _T63;
  int * _T64;
  int _T65;
  void * _T66;
  struct Cyc_CfFlowInfo_UnknownR_CfFlowInfo_AbsRVal_struct * _T67;
  enum Cyc_CfFlowInfo_InitLevel _T68;
  struct Cyc_CfFlowInfo_FlowEnv * _T69;
  void * _T6A;
  void * _T6B;
  long _T6C;
  long _T6D;
  struct Cyc_CfFlowInfo_FlowEnv * _T6E;
  loop: _T0 = Cyc_Absyn_is_nontagged_nonrequire_union_type(t);
  if (! _T0) { goto _TL36;
  }
  _T1 = fenv;
  _T2 = _T1->unknown_all;
  return _T2;
  _TL36: { void * _T6F = Cyc_Absyn_compress(t);
    void * _T70;
    enum Cyc_Absyn_AggrKind _T71;
    union Cyc_Absyn_AggrInfo _T72;
    void * _T73;
    _T3 = (int *)_T6F;
    _T4 = *_T3;
    switch (_T4) {
    case 12: 
      { struct Cyc_Absyn_SubsetType_Absyn_Type_struct * _T74 = (struct Cyc_Absyn_SubsetType_Absyn_Type_struct *)_T6F;
	_T73 = _T74->f1;
      }{ struct Cyc_Absyn_Vardecl * vd = _T73;
	_T5 = vd;
	t = _T5->type;
	goto loop;
      }
    case 0: 
      _T6 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T6F;
      _T7 = _T6->f1;
      _T8 = (int *)_T7;
      _T9 = *_T8;
      switch (_T9) {
      case 23: 
	_TA = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T6F;
	_TB = _TA->f1;
	_TC = (struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct *)_TB;
	_TD = _TC->f1;
	_TE = _TD.KnownDatatypefield;
	_TF = _TE.tag;
	if (_TF != 2) { goto _TL3A;
	}
	{ struct Cyc_Absyn_AppType_Absyn_Type_struct * _T74 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T6F;
	  _T10 = _T74->f1;
	  { struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct * _T75 = (struct Cyc_Absyn_DatatypeFieldCon_Absyn_TyCon_struct *)_T10;
	    _T11 = _T75->f1;
	    _T12 = _T11.KnownDatatypefield;
	    _T13 = _T12.val;
	    _T73 = _T13.f1;
	  }
	}{ struct Cyc_Absyn_Datatypefield * tuf = _T73;
	  _T14 = tuf;
	  _T15 = _T14->typs;
	  if (_T15 != 0) { goto _TL3C;
	  }
	  _T16 = leafval;
	  return _T16;
	  _TL3C: _T17 = tuf;
	  { struct Cyc_List_List * tqts = _T17->typs;
	    _T18 = Cyc_List_length(tqts);
	    _T19 = _T18 + 1;
	    { unsigned int sz = (unsigned int)_T19;
	      { unsigned int _T74 = sz;
		_T1C = _check_times(_T74,sizeof(void *));
		{ void * * _T75 = _cycalloc(_T1C);
		  { unsigned int _T76 = _T74;
		    unsigned int i;
		    i = 0;
		    _TL41: if (i < _T76) { goto _TL3F;
		    }else { goto _TL40;
		    }
		    _TL3F: _T1D = i;
		    _T1E = fenv;
		    _T75[_T1D] = _T1E->unknown_all;
		    i = i + 1;
		    goto _TL41;
		    _TL40: ;
		  }_T1B = (void * *)_T75;
		}_T1A = _tag_fat(_T1B,sizeof(void *),_T74);
	      }{ struct _fat_ptr d = _T1A;
		_T1F = d;
		_T20 = _check_fat_subscript(_T1F,sizeof(void *),0);
		_T21 = (void * *)_T20;
		*_T21 = leafval;
		{ int i = 1;
		  _TL45: _T22 = i;
		  _T23 = (unsigned int)_T22;
		  _T24 = sz;
		  if (_T23 < _T24) { goto _TL43;
		  }else { goto _TL44;
		  }
		  _TL43: _T25 = d;
		  _T26 = _T25.curr;
		  _T27 = (void * *)_T26;
		  _T28 = i;
		  _T29 = fenv;
		  _T2A = no_init_bits_only;
		  _T2B = _check_null(tqts);
		  _T2C = _T2B->hd;
		  _T2D = (struct _tuple16 *)_T2C;
		  _T2E = *_T2D;
		  _T2F = _T2E.f1;
		  _T30 = leafval;
		  _T27[_T28] = Cyc_CfFlowInfo_i_typ_to_absrval(_T29,0,_T2A,
							       _T2F,_T30);
		  _T31 = tqts;
		  tqts = _T31->tl;
		  i = i + 1;
		  goto _TL45;
		  _TL44: ;
		}{ struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct * _T74 = _cycalloc(sizeof(struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct));
		  _T74->tag = 6;
		  (_T74->f1).is_union = 0;
		  (_T74->f1).fieldnum = - 1;
		  _T74->f2 = d;
		  _T32 = (struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct *)_T74;
		}_T33 = (void *)_T32;
		return _T33;
	      }
	    }
	  }
	}_TL3A: goto _LLF;
      case 24: 
	{ struct Cyc_Absyn_AppType_Absyn_Type_struct * _T74 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T6F;
	  _T34 = _T74->f1;
	  { struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct * _T75 = (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct *)_T34;
	    _T72 = _T75->f1;
	  }_T73 = _T74->f2;
	}{ union Cyc_Absyn_AggrInfo info = _T72;
	  struct Cyc_List_List * targs = _T73;
	  struct Cyc_Absyn_Aggrdecl * ad = Cyc_Absyn_get_known_aggrdecl(info);
	  _T35 = ad;
	  _T36 = _T35->impl;
	  if (_T36 != 0) { goto _TL46;
	  }
	  goto _LL0;
	  _TL46: _T37 = ad;
	  _T38 = _T37->impl;
	  { struct Cyc_List_List * fields = _T38->fields;
	    if (targs != 0) { goto _TL48;
	    }
	    _T39 = ad;
	    _T71 = _T39->kind;
	    _T73 = fields;
	    goto _LL8;
	    _TL48: { struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct * _T74 = _cycalloc(sizeof(struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct));
	      _T74->tag = 6;
	      _T3B = ad;
	      _T3C = _T3B->kind;
	      _T3D = (int)_T3C;
	      (_T74->f1).is_union = _T3D == 1;
	      (_T74->f1).fieldnum = - 1;
	      _T3E = fenv;
	      _T3F = ad;
	      _T40 = _T3F->tvs;
	      _T41 = targs;
	      _T42 = fields;
	      _T43 = ad;
	      _T44 = _T43->kind;
	      _T45 = (int)_T44;
	      _T46 = _T45 == 1;
	      _T47 = leafval;
	      _T74->f2 = Cyc_CfFlowInfo_substitute_aggrfields_to_aggrdict(_T3E,
									  _T40,
									  _T41,
									  _T42,
									  _T46,
									  _T47);
	      _T3A = (struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct *)_T74;
	    }_T48 = (void *)_T3A;
	    return _T48;
	  }
	}
      case 5: 
	_T49 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T6F;
	_T4A = _T49->f2;
	if (_T4A == 0) { goto _TL4A;
	}
	{ struct Cyc_Absyn_AppType_Absyn_Type_struct * _T74 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T6F;
	  _T4B = _T74->f2;
	  { struct Cyc_List_List _T75 = *_T4B;
	    _T4C = _T75.hd;
	    _T73 = (void *)_T4C;
	  }
	}{ void * t = _T73;
	  _T4D = leafval;
	  return _T4D;
	}_TL4A: goto _LLF;
      default: 
	goto _LLF;
      }
      ;
    case 7: 
      { struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct * _T74 = (struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct *)_T6F;
	_T71 = _T74->f1;
	_T73 = _T74->f3;
      }_LL8: { enum Cyc_Absyn_AggrKind k = _T71;
	struct Cyc_List_List * fs = _T73;
	{ struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct * _T74 = _cycalloc(sizeof(struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct));
	  _T74->tag = 6;
	  _T4F = k;
	  _T50 = (int)_T4F;
	  (_T74->f1).is_union = _T50 == 1;
	  (_T74->f1).fieldnum = - 1;
	  _T51 = fenv;
	  _T52 = fs;
	  _T53 = k;
	  _T54 = (int)_T53;
	  _T55 = _T54 == 1;
	  _T56 = leafval;
	  _T74->f2 = Cyc_CfFlowInfo_aggrfields_to_aggrdict(_T51,_T52,_T55,
							   _T56);
	  _T4E = (struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct *)_T74;
	}_T57 = (void *)_T4E;
	return _T57;
      }
    case 5: 
      { struct Cyc_Absyn_ArrayType_Absyn_Type_struct * _T74 = (struct Cyc_Absyn_ArrayType_Absyn_Type_struct *)_T6F;
	_T58 = _T74->f1;
	_T73 = _T58.elt_type;
	_T59 = _T74->f1;
	_T70 = _T59.zero_term;
      }{ void * et = _T73;
	void * zeroterm = _T70;
	_T5A = Cyc_Tcutil_force_type2bool(0,zeroterm);
	if (! _T5A) { goto _TL4C;
	}
	_T5C = allow_zeroterm;
	if (! _T5C) { goto _TL4E;
	}
	_T5D = no_init_bits_only;
	if (_T5D) { goto _TL4E;
	}else { goto _TL50;
	}
	_TL50: _T5E = Cyc_Tcutil_is_bits_only_type(et);
	if (! _T5E) { goto _TL4E;
	}
	_T5F = fenv;
	_T5B = _T5F->unknown_all;
	goto _TL4F;
	_TL4E: _T5B = leafval;
	_TL4F: return _T5B;
	_TL4C: goto _LL0;
      }
    case 4: 
      { struct Cyc_Absyn_PointerType_Absyn_Type_struct * _T74 = (struct Cyc_Absyn_PointerType_Absyn_Type_struct *)_T6F;
	_T60 = _T74->f1;
	_T61 = _T60.ptr_atts;
	_T73 = _T61.nullable;
      }{ void * nbl = _T73;
	_T62 = Cyc_Tcutil_force_type2bool(0,nbl);
	if (_T62) { goto _TL51;
	}else { goto _TL53;
	}
	_TL53: _T63 = leafval;
	_T64 = (int *)_T63;
	_T65 = *_T64;
	if (_T65 != 2) { goto _TL54;
	}
	_T66 = leafval;
	_T67 = (struct Cyc_CfFlowInfo_UnknownR_CfFlowInfo_AbsRVal_struct *)_T66;
	_T68 = _T67->f1;
	if (_T68 != Cyc_CfFlowInfo_AllIL) { goto _TL56;
	}
	_T69 = fenv;
	_T6A = _T69->notzeroall;
	return _T6A;
	_TL56: goto _LL14;
	_TL54: _LL14: goto _LL11;
	_LL11: goto _TL52;
	_TL51: _TL52: goto _LL0;
      }
    default: 
      _LLF: goto _LL0;
    }
    _LL0: ;
  }_T6C = no_init_bits_only;
  if (_T6C) { goto _TL58;
  }else { goto _TL5A;
  }
  _TL5A: _T6D = Cyc_Tcutil_is_bits_only_type(t);
  if (! _T6D) { goto _TL58;
  }
  _T6E = fenv;
  _T6B = _T6E->unknown_all;
  goto _TL59;
  _TL58: _T6B = leafval;
  _TL59: return _T6B;
}
void * Cyc_CfFlowInfo_typ_to_absrval(struct Cyc_CfFlowInfo_FlowEnv * fenv,
				     void * t,long no_init_bits_only,void * leafval) {
  void * _T0;
  _T0 = Cyc_CfFlowInfo_i_typ_to_absrval(fenv,1,no_init_bits_only,t,leafval);
  return _T0;
}
long Cyc_CfFlowInfo_is_unique_consumed(struct Cyc_Absyn_Exp * e,int env_iteration,
				       void * r,long * needs_unconsume) {
  void * _T0;
  int * _T1;
  unsigned int _T2;
  void * _T3;
  void * _T4;
  long * _T5;
  void * _T6;
  struct Cyc_CfFlowInfo_UnionRInfo _T7;
  struct Cyc_CfFlowInfo_UnionRInfo _T8;
  long _T9;
  int _TA;
  int _TB;
  struct _fat_ptr _TC;
  int _TD;
  unsigned int _TE;
  unsigned int _TF;
  struct Cyc_Absyn_Exp * _T10;
  int _T11;
  struct _fat_ptr _T12;
  unsigned char * _T13;
  void * * _T14;
  void * * _T15;
  int _T16;
  void * _T17;
  long * _T18;
  long _T19;
  struct Cyc_Absyn_Exp * _T1A;
  int _T1B;
  struct _fat_ptr _T1C;
  unsigned char * _T1D;
  void * * _T1E;
  int _T1F;
  void * _T20;
  long * _T21;
  long _T22;
  void * _T23;
  void * _T24;
  long _T25;
  struct _fat_ptr _T26;
  int _T27;
  void * _T28;
  long _T29;
  void * _T2A;
  _T0 = r;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  switch (_T2) {
  case 7: 
    _T3 = r;
    { struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct * _T2B = (struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct *)_T3;
      _T2A = _T2B->f1;
      _T29 = _T2B->f2;
      _T4 = _T2B->f3;
      _T28 = (void *)_T4;
      _T27 = _T2B->f4;
    }{ struct Cyc_Absyn_Exp * consumer = _T2A;
      int iteration = _T29;
      void * r = _T28;
      long local = _T27;
      if (consumer != e) { goto _TL5C;
      }
      if (iteration != env_iteration) { goto _TL5C;
      }
      _T5 = needs_unconsume;
      *_T5 = 1;
      return 0;
      _TL5C: return 1;
    }
  case 6: 
    _T6 = r;
    { struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct * _T2B = (struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct *)_T6;
      _T7 = _T2B->f1;
      _T29 = _T7.is_union;
      _T8 = _T2B->f1;
      _T27 = _T8.fieldnum;
      _T26 = _T2B->f2;
    }{ long is_union = _T29;
      int field_no = _T27;
      struct _fat_ptr d = _T26;
      _T9 = is_union;
      if (_T9) { goto _TL61;
      }else { goto _TL60;
      }
      _TL61: _TA = field_no;
      _TB = - 1;
      if (_TA == _TB) { goto _TL60;
      }else { goto _TL5E;
      }
      _TL60: _TC = d;
      { unsigned int sz = _get_fat_size(_TC,sizeof(void *));
	{ int i = 0;
	  _TL65: _TD = i;
	  _TE = (unsigned int)_TD;
	  _TF = sz;
	  if (_TE < _TF) { goto _TL63;
	  }else { goto _TL64;
	  }
	  _TL63: _T10 = e;
	  _T11 = env_iteration;
	  _T12 = d;
	  _T13 = _T12.curr;
	  _T14 = (void * *)_T13;
	  _T15 = _check_null(_T14);
	  _T16 = i;
	  _T17 = _T15[_T16];
	  _T18 = needs_unconsume;
	  _T19 = Cyc_CfFlowInfo_is_unique_consumed(_T10,_T11,_T17,_T18);
	  if (! _T19) { goto _TL66;
	  }
	  return 1;
	  _TL66: i = i + 1;
	  goto _TL65;
	  _TL64: ;
	}return 0;
      }_TL5E: _T1A = e;
      _T1B = env_iteration;
      _T1C = d;
      _T1D = _T1C.curr;
      _T1E = (void * *)_T1D;
      _T1F = field_no;
      _T20 = _T1E[_T1F];
      _T21 = needs_unconsume;
      _T22 = Cyc_CfFlowInfo_is_unique_consumed(_T1A,_T1B,_T20,_T21);
      return _T22;
    }
  case 8: 
    _T23 = r;
    { struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct * _T2B = (struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct *)_T23;
      _T24 = _T2B->f2;
      _T2A = (void *)_T24;
    }{ void * r = _T2A;
      _T25 = Cyc_CfFlowInfo_is_unique_consumed(e,env_iteration,r,needs_unconsume);
      return _T25;
    }
  default: 
    return 0;
  }
  ;
}
void * Cyc_CfFlowInfo_make_unique_unconsumed(struct Cyc_CfFlowInfo_FlowEnv * fenv,
					     void * r) {
  void * _T0;
  int * _T1;
  unsigned int _T2;
  void * _T3;
  void * _T4;
  void * _T5;
  void * _T6;
  struct _fat_ptr _T7;
  struct _fat_ptr _T8;
  void * * _T9;
  unsigned int _TA;
  unsigned int _TB;
  struct _fat_ptr _TC;
  unsigned char * _TD;
  void * * _TE;
  void * * _TF;
  unsigned int _T10;
  int _T11;
  int _T12;
  unsigned int _T13;
  unsigned int _T14;
  struct _fat_ptr _T15;
  unsigned char * _T16;
  void * * _T17;
  int _T18;
  struct Cyc_CfFlowInfo_FlowEnv * _T19;
  struct _fat_ptr _T1A;
  unsigned char * _T1B;
  void * * _T1C;
  void * * _T1D;
  int _T1E;
  void * _T1F;
  struct _fat_ptr _T20;
  unsigned char * _T21;
  void * * _T22;
  int _T23;
  void * _T24;
  struct _fat_ptr _T25;
  unsigned char * _T26;
  void * * _T27;
  int _T28;
  void * _T29;
  long _T2A;
  struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct * _T2B;
  void * _T2C;
  void * _T2D;
  void * _T2E;
  void * _T2F;
  struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct * _T30;
  void * _T31;
  void * _T32;
  void * _T33;
  struct Cyc_Absyn_Vardecl * _T34;
  struct _fat_ptr _T35;
  struct Cyc_CfFlowInfo_UnionRInfo _T36;
  long _T37;
  void * _T38;
  int _T39;
  void * _T3A;
  _T0 = r;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  switch (_T2) {
  case 7: 
    _T3 = r;
    { struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct * _T3B = (struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct *)_T3;
      _T3A = _T3B->f1;
      _T39 = _T3B->f2;
      _T4 = _T3B->f3;
      _T38 = (void *)_T4;
      _T37 = _T3B->f4;
    }{ struct Cyc_Absyn_Exp * consumer = _T3A;
      int iteration = _T39;
      void * r = _T38;
      long local = _T37;
      _T5 = r;
      return _T5;
    }
  case 6: 
    _T6 = r;
    { struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct * _T3B = (struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct *)_T6;
      _T36 = _T3B->f1;
      _T35 = _T3B->f2;
    }{ struct Cyc_CfFlowInfo_UnionRInfo uinfo = _T36;
      struct _fat_ptr d = _T35;
      _T7 = d;
      { unsigned int sz = _get_fat_size(_T7,sizeof(void *));
	long change = 0;
	{ unsigned int _T3B = sz;
	  _TA = _check_times(_T3B,sizeof(void *));
	  { void * * _T3C = _cycalloc(_TA);
	    { unsigned int _T3D = _T3B;
	      unsigned int i;
	      i = 0;
	      _TL6C: if (i < _T3D) { goto _TL6A;
	      }else { goto _TL6B;
	      }
	      _TL6A: _TB = i;
	      _TC = d;
	      _TD = _TC.curr;
	      _TE = (void * *)_TD;
	      _TF = _check_null(_TE);
	      _T10 = i;
	      _T11 = (int)_T10;
	      _T3C[_TB] = _TF[_T11];
	      i = i + 1;
	      goto _TL6C;
	      _TL6B: ;
	    }_T9 = (void * *)_T3C;
	  }_T8 = _tag_fat(_T9,sizeof(void *),_T3B);
	}{ struct _fat_ptr d2 = _T8;
	  { int i = 0;
	    _TL70: _T12 = i;
	    _T13 = (unsigned int)_T12;
	    _T14 = sz;
	    if (_T13 < _T14) { goto _TL6E;
	    }else { goto _TL6F;
	    }
	    _TL6E: _T15 = d2;
	    _T16 = _T15.curr;
	    _T17 = (void * *)_T16;
	    _T18 = i;
	    _T19 = fenv;
	    _T1A = d;
	    _T1B = _T1A.curr;
	    _T1C = (void * *)_T1B;
	    _T1D = _check_null(_T1C);
	    _T1E = i;
	    _T1F = _T1D[_T1E];
	    _T17[_T18] = Cyc_CfFlowInfo_make_unique_unconsumed(_T19,_T1F);
	    _T20 = d2;
	    _T21 = _T20.curr;
	    _T22 = (void * *)_T21;
	    _T23 = i;
	    _T24 = _T22[_T23];
	    _T25 = d;
	    _T26 = _T25.curr;
	    _T27 = (void * *)_T26;
	    _T28 = i;
	    _T29 = _T27[_T28];
	    if (_T24 == _T29) { goto _TL71;
	    }
	    change = 1;
	    goto _TL72;
	    _TL71: _TL72: i = i + 1;
	    goto _TL70;
	    _TL6F: ;
	  }_T2A = change;
	  if (! _T2A) { goto _TL73;
	  }
	  { struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct * _T3B = _cycalloc(sizeof(struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct));
	    _T3B->tag = 6;
	    _T3B->f1 = uinfo;
	    _T3B->f2 = d2;
	    _T2B = (struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct *)_T3B;
	  }_T2C = (void *)_T2B;
	  return _T2C;
	  _TL73: _T2D = r;
	  return _T2D;
	}
      }
    }
  case 8: 
    _T2E = r;
    { struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct * _T3B = (struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct *)_T2E;
      _T34 = _T3B->f1;
      _T2F = _T3B->f2;
      _T3A = (void *)_T2F;
    }{ struct Cyc_Absyn_Vardecl * n = _T34;
      void * r2 = _T3A;
      void * r3 = Cyc_CfFlowInfo_make_unique_unconsumed(fenv,r2);
      if (r3 == r2) { goto _TL75;
      }
      { struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct * _T3B = _cycalloc(sizeof(struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct));
	_T3B->tag = 8;
	_T3B->f1 = n;
	_T3B->f2 = r3;
	_T30 = (struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct *)_T3B;
      }_T31 = (void *)_T30;
      return _T31;
      _TL75: _T32 = r;
      return _T32;
    }
  default: 
    _T33 = r;
    return _T33;
  }
  ;
}
void * Cyc_CfFlowInfo_make_unique_consumed(struct Cyc_CfFlowInfo_FlowEnv * fenv,
					   struct Cyc_List_List * aqb,void * t,
					   struct Cyc_Absyn_Exp * consumer,
					   int iteration,void * r,long local_alias) {
  struct _tuple13 _T0;
  void * _T1;
  int * _T2;
  int _T3;
  void * _T4;
  void * _T5;
  struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct * _T6;
  void * _T7;
  void * _T8;
  void * _T9;
  int * _TA;
  unsigned int _TB;
  void * _TC;
  struct Cyc_Absyn_AppType_Absyn_Type_struct * _TD;
  void * _TE;
  int * _TF;
  int _T10;
  void * _T11;
  int * _T12;
  int _T13;
  void * _T14;
  void * _T15;
  void * _T16;
  struct Cyc_Absyn_Aggrdecl * _T17;
  struct Cyc_Absyn_AggrdeclImpl * _T18;
  void * _T19;
  struct Cyc_Absyn_Aggrdecl * _T1A;
  struct Cyc_Absyn_Aggrdecl * _T1B;
  struct Cyc_Absyn_AggrdeclImpl * _T1C;
  void * _T1D;
  int * _T1E;
  int _T1F;
  void * _T20;
  void * _T21;
  struct _fat_ptr _T22;
  struct _fat_ptr _T23;
  void * * _T24;
  unsigned int _T25;
  unsigned int _T26;
  struct _fat_ptr _T27;
  unsigned char * _T28;
  void * * _T29;
  void * * _T2A;
  unsigned int _T2B;
  int _T2C;
  int _T2D;
  int _T2E;
  unsigned int _T2F;
  unsigned int _T30;
  struct Cyc_List_List * _T31;
  void * _T32;
  struct _fat_ptr * _T33;
  struct _fat_ptr _T34;
  unsigned int _T35;
  struct _fat_ptr _T36;
  unsigned char * _T37;
  void * * _T38;
  int _T39;
  struct Cyc_CfFlowInfo_FlowEnv * _T3A;
  struct Cyc_List_List * _T3B;
  void * _T3C;
  struct Cyc_Absyn_Exp * _T3D;
  int _T3E;
  struct _fat_ptr _T3F;
  int _T40;
  unsigned char * _T41;
  void * * _T42;
  void * _T43;
  long _T44;
  struct Cyc_List_List * _T45;
  struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct * _T46;
  void * _T47;
  long _T48;
  struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct * _T49;
  void * _T4A;
  void * _T4B;
  { struct _tuple13 _T4C;
    _T4C.f0 = Cyc_Absyn_compress(t);
    _T4C.f1 = r;
    _T0 = _T4C;
  }{ struct _tuple13 _T4C = _T0;
    struct Cyc_List_List * _T4D;
    enum Cyc_Absyn_AggrKind _T4E;
    struct _fat_ptr _T4F;
    struct Cyc_CfFlowInfo_UnionRInfo _T50;
    union Cyc_Absyn_AggrInfo _T51;
    void * _T52;
    struct Cyc_Absyn_Vardecl * _T53;
    _T1 = _T4C.f1;
    _T2 = (int *)_T1;
    _T3 = *_T2;
    if (_T3 != 8) { goto _TL77;
    }
    _T4 = _T4C.f1;
    { struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct * _T54 = (struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct *)_T4;
      _T53 = _T54->f1;
      _T5 = _T54->f2;
      _T52 = (void *)_T5;
    }{ struct Cyc_Absyn_Vardecl * s = _T53;
      void * r2 = _T52;
      void * r3 = Cyc_CfFlowInfo_make_unique_consumed(fenv,aqb,t,consumer,
						      iteration,r2,local_alias);
      if (r3 == r2) { goto _TL79;
      }
      { struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct * _T54 = _cycalloc(sizeof(struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct));
	_T54->tag = 8;
	_T54->f1 = s;
	_T54->f2 = r3;
	_T6 = (struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct *)_T54;
      }_T7 = (void *)_T6;
      return _T7;
      _TL79: _T8 = r;
      return _T8;
    }_TL77: _T9 = _T4C.f0;
    _TA = (int *)_T9;
    _TB = *_TA;
    switch (_TB) {
    case 0: 
      _TC = _T4C.f0;
      _TD = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_TC;
      _TE = _TD->f1;
      _TF = (int *)_TE;
      _T10 = *_TF;
      if (_T10 != 24) { goto _TL7C;
      }
      _T11 = _T4C.f1;
      _T12 = (int *)_T11;
      _T13 = *_T12;
      if (_T13 != 6) { goto _TL7E;
      }
      _T14 = _T4C.f0;
      { struct Cyc_Absyn_AppType_Absyn_Type_struct * _T54 = (struct Cyc_Absyn_AppType_Absyn_Type_struct *)_T14;
	_T15 = _T54->f1;
	{ struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct * _T55 = (struct Cyc_Absyn_AggrCon_Absyn_TyCon_struct *)_T15;
	  _T51 = _T55->f1;
	}
      }_T16 = _T4C.f1;
      { struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct * _T54 = (struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct *)_T16;
	_T50 = _T54->f1;
	_T4F = _T54->f2;
      }{ union Cyc_Absyn_AggrInfo info = _T51;
	struct Cyc_CfFlowInfo_UnionRInfo b = _T50;
	struct _fat_ptr d = _T4F;
	struct Cyc_Absyn_Aggrdecl * ad = Cyc_Absyn_get_known_aggrdecl(info);
	_T17 = ad;
	_T18 = _T17->impl;
	if (_T18 != 0) { goto _TL80;
	}
	_T19 = r;
	return _T19;
	_TL80: _T1A = ad;
	_T4E = _T1A->kind;
	_T1B = ad;
	_T1C = _T1B->impl;
	_T4D = _T1C->fields;
	_T50 = b;
	_T4F = d;
	goto _LL6;
      }_TL7E: goto _LL7;
      _TL7C: goto _LL7;
    case 7: 
      _T1D = _T4C.f1;
      _T1E = (int *)_T1D;
      _T1F = *_T1E;
      if (_T1F != 6) { goto _TL82;
      }
      _T20 = _T4C.f0;
      { struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct * _T54 = (struct Cyc_Absyn_AnonAggrType_Absyn_Type_struct *)_T20;
	_T4E = _T54->f1;
	_T4D = _T54->f3;
      }_T21 = _T4C.f1;
      { struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct * _T54 = (struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct *)_T21;
	_T50 = _T54->f1;
	_T4F = _T54->f2;
      }_LL6: { enum Cyc_Absyn_AggrKind k = _T4E;
	struct Cyc_List_List * fs = _T4D;
	struct Cyc_CfFlowInfo_UnionRInfo b = _T50;
	struct _fat_ptr d = _T4F;
	_T23 = d;
	{ unsigned int _T54 = _get_fat_size(_T23,sizeof(void *));
	  _T25 = _check_times(_T54,sizeof(void *));
	  { void * * _T55 = _cycalloc(_T25);
	    { unsigned int _T56 = _T54;
	      unsigned int i;
	      i = 0;
	      _TL87: if (i < _T56) { goto _TL85;
	      }else { goto _TL86;
	      }
	      _TL85: _T26 = i;
	      _T27 = d;
	      _T28 = _T27.curr;
	      _T29 = (void * *)_T28;
	      _T2A = _check_null(_T29);
	      _T2B = i;
	      _T2C = (int)_T2B;
	      _T55[_T26] = _T2A[_T2C];
	      i = i + 1;
	      goto _TL87;
	      _TL86: ;
	    }_T24 = (void * *)_T55;
	  }_T22 = _tag_fat(_T24,sizeof(void *),_T54);
	}{ struct _fat_ptr d2 = _T22;
	  _T2D = Cyc_List_length(fs);
	  { unsigned int sz = (unsigned int)_T2D;
	    { int i = 0;
	      _TL8B: _T2E = i;
	      _T2F = (unsigned int)_T2E;
	      _T30 = sz;
	      if (_T2F < _T30) { goto _TL89;
	      }else { goto _TL8A;
	      }
	      _TL89: _T31 = _check_null(fs);
	      _T32 = _T31->hd;
	      { struct Cyc_Absyn_Aggrfield * _T54 = (struct Cyc_Absyn_Aggrfield *)_T32;
		void * _T55;
		struct _fat_ptr * _T56;
		{ struct Cyc_Absyn_Aggrfield _T57 = *_T54;
		  _T56 = _T57.name;
		  _T55 = _T57.type;
		}{ struct _fat_ptr * n = _T56;
		  void * t2 = _T55;
		  _T33 = n;
		  _T34 = *_T33;
		  _T35 = _get_fat_size(_T34,sizeof(char));
		  if (_T35 == 1U) { goto _TL8C;
		  }
		  _T36 = d2;
		  _T37 = _T36.curr;
		  _T38 = (void * *)_T37;
		  _T39 = i;
		  _T3A = fenv;
		  _T3B = aqb;
		  _T3C = t2;
		  _T3D = consumer;
		  _T3E = iteration;
		  _T3F = d;
		  _T40 = i;
		  _T41 = _check_fat_subscript(_T3F,sizeof(void *),_T40);
		  _T42 = (void * *)_T41;
		  _T43 = *_T42;
		  _T44 = local_alias;
		  _T38[_T39] = Cyc_CfFlowInfo_make_unique_consumed(_T3A,_T3B,
								   _T3C,_T3D,
								   _T3E,_T43,
								   _T44);
		  goto _TL8D;
		  _TL8C: _TL8D: ;
		}
	      }i = i + 1;
	      _T45 = fs;
	      fs = _T45->tl;
	      goto _TL8B;
	      _TL8A: ;
	    }{ struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct * _T54 = _cycalloc(sizeof(struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct));
	      _T54->tag = 6;
	      _T54->f1 = b;
	      _T54->f2 = d2;
	      _T46 = (struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct *)_T54;
	    }_T47 = (void *)_T46;
	    return _T47;
	  }
	}
      }_TL82: goto _LL7;
    default: 
      _LL7: _T48 = Cyc_Tcutil_is_noalias_pointer(aqb,t,0);
      if (! _T48) { goto _TL8E;
      }
      { struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct * _T54 = _cycalloc(sizeof(struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct));
	_T54->tag = 7;
	_T54->f1 = consumer;
	_T54->f2 = iteration;
	_T54->f3 = r;
	_T54->f4 = local_alias;
	_T49 = (struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct *)_T54;
      }_T4A = (void *)_T49;
      return _T4A;
      _TL8E: _T4B = r;
      return _T4B;
    }
    ;
  }
}
 struct _tuple17 {
  struct Cyc_CfFlowInfo_Place * f0;
  unsigned int f1;
};
static long Cyc_CfFlowInfo_prefix_of_member(struct Cyc_CfFlowInfo_Place * place,
					    struct Cyc_Dict_Dict set) {
  struct _tuple17 _T0;
  long (* _T1)(struct Cyc_Iter_Iter,struct _tuple17 *);
  long (* _T2)(struct Cyc_Iter_Iter,void *);
  struct Cyc_Iter_Iter _T3;
  struct _tuple17 * _T4;
  long _T5;
  struct _tuple17 _T6;
  struct Cyc_CfFlowInfo_Place * _T7;
  struct Cyc_CfFlowInfo_Place * _T8;
  int _T9;
  struct Cyc_List_List * _TA;
  void * _TB;
  struct Cyc_List_List * _TC;
  void * _TD;
  struct Cyc_List_List * _TE;
  struct Cyc_List_List * _TF;
  struct _RegionHandle _T10 = _new_region(0U,"r");
  struct _RegionHandle * r = &_T10;
  _push_region(r);
  { struct _tuple17 _T11;
    _T11.f0 = place;
    _T11.f1 = 0U;
    _T0 = _T11;
  }{ struct _tuple17 elem = _T0;
    struct Cyc_Iter_Iter iter = Cyc_Dict_make_iter(r,set);
    _TL90: _T2 = Cyc_Iter_next;
    { long (* _T11)(struct Cyc_Iter_Iter,struct _tuple17 *) = (long (*)(struct Cyc_Iter_Iter,
									struct _tuple17 *))_T2;
      _T1 = _T11;
    }_T3 = iter;
    _T4 = &elem;
    _T5 = _T1(_T3,_T4);
    if (_T5) { goto _TL91;
    }else { goto _TL92;
    }
    _TL91: _T6 = elem;
    { struct Cyc_CfFlowInfo_Place * place2 = _T6.f0;
      _T7 = place;
      { struct Cyc_CfFlowInfo_Place _T11 = *_T7;
	struct Cyc_List_List * _T12;
	void * _T13;
	_T13 = _T11.root;
	_T12 = _T11.path;
	{ void * root1 = _T13;
	  struct Cyc_List_List * fs1 = _T12;
	  _T8 = place2;
	  { struct Cyc_CfFlowInfo_Place _T14 = *_T8;
	    struct Cyc_List_List * _T15;
	    void * _T16;
	    _T16 = _T14.root;
	    _T15 = _T14.path;
	    { void * root2 = _T16;
	      struct Cyc_List_List * fs2 = _T15;
	      _T9 = Cyc_CfFlowInfo_root_cmp(root1,root2);
	      if (_T9 == 0) { goto _TL93;
	      }
	      goto _TL90;
	      _TL93: _TL98: if (fs1 != 0) { goto _TL99;
	      }else { goto _TL97;
	      }
	      _TL99: if (fs2 != 0) { goto _TL96;
	      }else { goto _TL97;
	      }
	      _TL96: _TA = fs1;
	      _TB = _TA->hd;
	      _TC = fs2;
	      _TD = _TC->hd;
	      if (_TB == _TD) { goto _TL9A;
	      }
	      goto _TL97;
	      _TL9A: _TE = fs1;
	      fs1 = _TE->tl;
	      _TF = fs2;
	      fs2 = _TF->tl;
	      goto _TL98;
	      _TL97: if (fs1 != 0) { goto _TL9C;
	      }
	      { long _T17 = 1;
		_npop_handler(0);
		return _T17;
	      }_TL9C: ;
	    }
	  }
	}
      }
    }goto _TL90;
    _TL92: { long _T11 = 0;
      _npop_handler(0);
      return _T11;
    }
  }_pop_region();
}
 struct Cyc_CfFlowInfo_EscPile {
  struct Cyc_List_List * places;
};
static void Cyc_CfFlowInfo_add_place(struct Cyc_CfFlowInfo_EscPile * pile,
				     struct Cyc_CfFlowInfo_Place * place) {
  long (* _T0)(int (*)(struct Cyc_CfFlowInfo_Place *,struct Cyc_CfFlowInfo_Place *),
	       struct Cyc_List_List *,struct Cyc_CfFlowInfo_Place *);
  long (* _T1)(int (*)(void *,void *),struct Cyc_List_List *,void *);
  struct Cyc_CfFlowInfo_EscPile * _T2;
  struct Cyc_List_List * _T3;
  struct Cyc_CfFlowInfo_Place * _T4;
  long _T5;
  struct Cyc_CfFlowInfo_EscPile * _T6;
  struct Cyc_List_List * _T7;
  struct Cyc_CfFlowInfo_EscPile * _T8;
  _T1 = Cyc_List_mem;
  { long (* _T9)(int (*)(struct Cyc_CfFlowInfo_Place *,struct Cyc_CfFlowInfo_Place *),
		 struct Cyc_List_List *,struct Cyc_CfFlowInfo_Place *) = (long (*)(int (*)(struct Cyc_CfFlowInfo_Place *,
											   struct Cyc_CfFlowInfo_Place *),
										   struct Cyc_List_List *,
										   struct Cyc_CfFlowInfo_Place *))_T1;
    _T0 = _T9;
  }_T2 = pile;
  _T3 = _T2->places;
  _T4 = place;
  _T5 = _T0(Cyc_CfFlowInfo_place_cmp,_T3,_T4);
  if (_T5) { goto _TL9E;
  }else { goto _TLA0;
  }
  _TLA0: _T6 = pile;
  { struct Cyc_List_List * _T9 = _cycalloc(sizeof(struct Cyc_List_List));
    _T9->hd = place;
    _T8 = pile;
    _T9->tl = _T8->places;
    _T7 = (struct Cyc_List_List *)_T9;
  }_T6->places = _T7;
  goto _TL9F;
  _TL9E: _TL9F: ;
}
static void Cyc_CfFlowInfo_add_places(struct Cyc_CfFlowInfo_EscPile * pile,
				      void * r) {
  void * _T0;
  int * _T1;
  unsigned int _T2;
  void * _T3;
  void * _T4;
  void * _T5;
  void * _T6;
  void * _T7;
  void * _T8;
  int _T9;
  unsigned int _TA;
  struct _fat_ptr _TB;
  unsigned int _TC;
  struct Cyc_CfFlowInfo_EscPile * _TD;
  struct _fat_ptr _TE;
  unsigned char * _TF;
  void * * _T10;
  void * * _T11;
  int _T12;
  void * _T13;
  struct _fat_ptr _T14;
  struct Cyc_CfFlowInfo_UnionRInfo _T15;
  struct Cyc_CfFlowInfo_Place * _T16;
  void * _T17;
  _T0 = r;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  switch (_T2) {
  case 7: 
    _T3 = r;
    { struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct * _T18 = (struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct *)_T3;
      _T4 = _T18->f3;
      _T17 = (void *)_T4;
    }{ void * r = _T17;
      _T17 = r;
      goto _LL4;
    }
  case 8: 
    _T5 = r;
    { struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct * _T18 = (struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct *)_T5;
      _T6 = _T18->f2;
      _T17 = (void *)_T6;
    }_LL4: { void * r = _T17;
      Cyc_CfFlowInfo_add_places(pile,r);
      return;
    }
  case 4: 
    _T7 = r;
    { struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct * _T18 = (struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct *)_T7;
      _T16 = _T18->f1;
    }{ struct Cyc_CfFlowInfo_Place * p = _T16;
      Cyc_CfFlowInfo_add_place(pile,p);
      return;
    }
  case 6: 
    _T8 = r;
    { struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct * _T18 = (struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct *)_T8;
      _T15 = _T18->f1;
      _T14 = _T18->f2;
    }{ struct Cyc_CfFlowInfo_UnionRInfo b = _T15;
      struct _fat_ptr d = _T14;
      { int i = 0;
	_TLA5: _T9 = i;
	_TA = (unsigned int)_T9;
	_TB = d;
	_TC = _get_fat_size(_TB,sizeof(void *));
	if (_TA < _TC) { goto _TLA3;
	}else { goto _TLA4;
	}
	_TLA3: _TD = pile;
	_TE = d;
	_TF = _TE.curr;
	_T10 = (void * *)_TF;
	_T11 = _check_null(_T10);
	_T12 = i;
	_T13 = _T11[_T12];
	Cyc_CfFlowInfo_add_places(_TD,_T13);
	i = i + 1;
	goto _TLA5;
	_TLA4: ;
      }return;
    }
  default: 
    return;
  }
  ;
}
static void * Cyc_CfFlowInfo_insert_place_inner(void * new_val,void * old_val) {
  void * _T0;
  int * _T1;
  unsigned int _T2;
  void * _T3;
  struct Cyc_CfFlowInfo_UnionRInfo _T4;
  struct _fat_ptr _T5;
  struct _fat_ptr _T6;
  void * * _T7;
  unsigned int _T8;
  unsigned int _T9;
  void * _TA;
  struct _fat_ptr _TB;
  unsigned int _TC;
  int _TD;
  unsigned char * _TE;
  void * * _TF;
  void * _T10;
  struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct * _T11;
  void * _T12;
  void * _T13;
  void * _T14;
  struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct * _T15;
  void * _T16;
  void * _T17;
  void * _T18;
  struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct * _T19;
  void * _T1A;
  void * _T1B;
  struct Cyc_Absyn_Vardecl * _T1C;
  long _T1D;
  void * _T1E;
  void * _T1F;
  struct _fat_ptr _T20;
  int _T21;
  _T0 = old_val;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  switch (_T2) {
  case 6: 
    _T3 = old_val;
    { struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct * _T22 = (struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct *)_T3;
      _T4 = _T22->f1;
      _T21 = _T4.is_union;
      _T20 = _T22->f2;
    }{ long is_union = _T21;
      struct _fat_ptr d = _T20;
      _T6 = d;
      { unsigned int _T22 = _get_fat_size(_T6,sizeof(void *));
	_T8 = _check_times(_T22,sizeof(void *));
	{ void * * _T23 = _cycalloc(_T8);
	  { unsigned int _T24 = _T22;
	    unsigned int i;
	    i = 0;
	    _TLAA: if (i < _T24) { goto _TLA8;
	    }else { goto _TLA9;
	    }
	    _TLA8: _T9 = i;
	    _TA = new_val;
	    _TB = d;
	    _TC = i;
	    _TD = (int)_TC;
	    _TE = _check_fat_subscript(_TB,sizeof(void *),_TD);
	    _TF = (void * *)_TE;
	    _T10 = *_TF;
	    _T23[_T9] = Cyc_CfFlowInfo_insert_place_inner(_TA,_T10);
	    i = i + 1;
	    goto _TLAA;
	    _TLA9: ;
	  }_T7 = (void * *)_T23;
	}_T5 = _tag_fat(_T7,sizeof(void *),_T22);
      }{ struct _fat_ptr d2 = _T5;
	{ struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct * _T22 = _cycalloc(sizeof(struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct));
	  _T22->tag = 6;
	  (_T22->f1).is_union = is_union;
	  (_T22->f1).fieldnum = - 1;
	  _T22->f2 = d2;
	  _T11 = (struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct *)_T22;
	}_T12 = (void *)_T11;
	return _T12;
      }
    }
  case 7: 
    _T13 = old_val;
    { struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct * _T22 = (struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct *)_T13;
      _T1F = _T22->f1;
      _T21 = _T22->f2;
      _T14 = _T22->f3;
      _T1E = (void *)_T14;
      _T1D = _T22->f4;
    }{ struct Cyc_Absyn_Exp * e = _T1F;
      int i = _T21;
      void * rval = _T1E;
      long l = _T1D;
      { struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct * _T22 = _cycalloc(sizeof(struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct));
	_T22->tag = 7;
	_T22->f1 = e;
	_T22->f2 = i;
	_T22->f3 = Cyc_CfFlowInfo_insert_place_inner(new_val,rval);
	_T22->f4 = l;
	_T15 = (struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct *)_T22;
      }_T16 = (void *)_T15;
      return _T16;
    }
  case 8: 
    _T17 = old_val;
    { struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct * _T22 = (struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct *)_T17;
      _T1C = _T22->f1;
      _T18 = _T22->f2;
      _T1F = (void *)_T18;
    }{ struct Cyc_Absyn_Vardecl * n = _T1C;
      void * rval = _T1F;
      { struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct * _T22 = _cycalloc(sizeof(struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct));
	_T22->tag = 8;
	_T22->f1 = n;
	_T22->f2 = Cyc_CfFlowInfo_insert_place_inner(new_val,rval);
	_T19 = (struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct *)_T22;
      }_T1A = (void *)_T19;
      return _T1A;
    }
  default: 
    _T1B = new_val;
    return _T1B;
  }
  ;
}
static struct _fat_ptr Cyc_CfFlowInfo_aggr_dict_insert(struct _fat_ptr d,
						       int n,void * rval) {
  struct _fat_ptr _T0;
  int _T1;
  unsigned char * _T2;
  void * * _T3;
  struct _fat_ptr _T4;
  struct _fat_ptr _T5;
  struct _fat_ptr _T6;
  void * * _T7;
  unsigned int _T8;
  unsigned int _T9;
  struct _fat_ptr _TA;
  unsigned char * _TB;
  void * * _TC;
  unsigned int _TD;
  int _TE;
  struct _fat_ptr _TF;
  unsigned char * _T10;
  void * * _T11;
  int _T12;
  struct _fat_ptr _T13;
  _T0 = d;
  _T1 = n;
  _T2 = _check_fat_subscript(_T0,sizeof(void *),_T1);
  _T3 = (void * *)_T2;
  { void * old_rval = *_T3;
    if (old_rval != rval) { goto _TLAB;
    }
    _T4 = d;
    return _T4;
    _TLAB: _T6 = d;
    { unsigned int _T14 = _get_fat_size(_T6,sizeof(void *));
      _T8 = _check_times(_T14,sizeof(void *));
      { void * * _T15 = _cycalloc(_T8);
	{ unsigned int _T16 = _T14;
	  unsigned int i;
	  i = 0;
	  _TLB0: if (i < _T16) { goto _TLAE;
	  }else { goto _TLAF;
	  }
	  _TLAE: _T9 = i;
	  _TA = d;
	  _TB = _TA.curr;
	  _TC = (void * *)_TB;
	  _TD = i;
	  _TE = (int)_TD;
	  _T15[_T9] = _TC[_TE];
	  i = i + 1;
	  goto _TLB0;
	  _TLAF: ;
	}_T7 = (void * *)_T15;
      }_T5 = _tag_fat(_T7,sizeof(void *),_T14);
    }{ struct _fat_ptr res = _T5;
      _TF = res;
      _T10 = _TF.curr;
      _T11 = (void * *)_T10;
      _T12 = n;
      _T11[_T12] = rval;
      _T13 = res;
      return _T13;
    }
  }
}
 struct _tuple18 {
  struct Cyc_List_List * f0;
  void * f1;
};
static void * Cyc_CfFlowInfo_insert_place_outer(struct Cyc_List_List * path,
						void * old_val,void * new_val) {
  void * _T0;
  struct _tuple18 _T1;
  struct Cyc_List_List * _T2;
  struct Cyc_List_List * _T3;
  struct Cyc_List_List * _T4;
  void * _T5;
  int * _T6;
  int _T7;
  void * _T8;
  int * _T9;
  unsigned int _TA;
  struct Cyc_List_List * _TB;
  void * _TC;
  void * _TD;
  struct Cyc_CfFlowInfo_UnionRInfo _TE;
  struct Cyc_List_List * _TF;
  struct _fat_ptr _T10;
  int _T11;
  unsigned char * _T12;
  void * * _T13;
  void * _T14;
  void * _T15;
  struct _fat_ptr _T16;
  unsigned char * _T17;
  void * * _T18;
  struct _fat_ptr _T19;
  unsigned char * _T1A;
  void * * _T1B;
  void * _T1C;
  struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct * _T1D;
  void * _T1E;
  void * _T1F;
  int * _T20;
  unsigned int _T21;
  struct Cyc_List_List * _T22;
  void * _T23;
  void * _T24;
  void * _T25;
  struct Cyc_CfFlowInfo_UniquePtr_CfFlowInfo_AbsRVal_struct * _T26;
  void * _T27;
  void * _T28;
  int * _T29;
  int _T2A;
  void * _T2B;
  void * _T2C;
  void * _T2D;
  struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct * _T2E;
  void * _T2F;
  int (* _T30)(struct _fat_ptr,struct _fat_ptr);
  void * (* _T31)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T32;
  struct _fat_ptr _T33;
  if (path != 0) { goto _TLB1;
  }
  _T0 = Cyc_CfFlowInfo_insert_place_inner(new_val,old_val);
  return _T0;
  _TLB1: { struct _tuple18 _T34;
    _T34.f0 = path;
    _T34.f1 = old_val;
    _T1 = _T34;
  }{ struct _tuple18 _T34 = _T1;
    struct Cyc_Absyn_Vardecl * _T35;
    void * _T36;
    struct _fat_ptr _T37;
    long _T38;
    void * _T39;
    int _T3A;
    _T2 = _T34.f0;
    if (_T2 == 0) { goto _TLB3;
    }
    _T3 = _T34.f0;
    _T4 = (struct Cyc_List_List *)_T3;
    _T5 = _T4->hd;
    _T6 = (int *)_T5;
    _T7 = *_T6;
    if (_T7 != 0) { goto _TLB5;
    }
    _T8 = _T34.f1;
    _T9 = (int *)_T8;
    _TA = *_T9;
    switch (_TA) {
    case 6: 
      _TB = _T34.f0;
      { struct Cyc_List_List _T3B = *_TB;
	_TC = _T3B.hd;
	{ struct Cyc_CfFlowInfo_Dot_CfFlowInfo_PathCon_struct * _T3C = (struct Cyc_CfFlowInfo_Dot_CfFlowInfo_PathCon_struct *)_TC;
	  _T3A = _T3C->f1;
	}_T39 = _T3B.tl;
      }_TD = _T34.f1;
      { struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct * _T3B = (struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct *)_TD;
	_TE = _T3B->f1;
	_T38 = _TE.is_union;
	_T37 = _T3B->f2;
      }{ int i = _T3A;
	struct Cyc_List_List * tl = _T39;
	long is_union = _T38;
	struct _fat_ptr d = _T37;
	_TF = tl;
	_T10 = d;
	_T11 = i;
	_T12 = _check_fat_subscript(_T10,sizeof(void *),_T11);
	_T13 = (void * *)_T12;
	_T14 = *_T13;
	_T15 = new_val;
	{ void * new_child = Cyc_CfFlowInfo_insert_place_outer(_TF,_T14,_T15);
	  struct _fat_ptr new_d = Cyc_CfFlowInfo_aggr_dict_insert(d,i,new_child);
	  _T16 = new_d;
	  _T17 = _T16.curr;
	  _T18 = (void * *)_T17;
	  _T19 = d;
	  _T1A = _T19.curr;
	  _T1B = (void * *)_T1A;
	  if (_T18 != _T1B) { goto _TLB8;
	  }
	  _T1C = old_val;
	  return _T1C;
	  _TLB8: { struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct * _T3B = _cycalloc(sizeof(struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct));
	    _T3B->tag = 6;
	    (_T3B->f1).is_union = is_union;
	    (_T3B->f1).fieldnum = - 1;
	    _T3B->f2 = new_d;
	    _T1D = (struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct *)_T3B;
	  }_T1E = (void *)_T1D;
	  return _T1E;
	}
      }
    case 8: 
      goto _LL5;
    default: 
      goto _LL7;
    }
    goto _TLB6;
    _TLB5: _T1F = _T34.f1;
    _T20 = (int *)_T1F;
    _T21 = *_T20;
    switch (_T21) {
    case 5: 
      _T22 = _T34.f0;
      { struct Cyc_List_List _T3B = *_T22;
	_T39 = _T3B.tl;
      }_T23 = _T34.f1;
      { struct Cyc_CfFlowInfo_UniquePtr_CfFlowInfo_AbsRVal_struct * _T3B = (struct Cyc_CfFlowInfo_UniquePtr_CfFlowInfo_AbsRVal_struct *)_T23;
	_T24 = _T3B->f1;
	_T36 = (void *)_T24;
      }{ struct Cyc_List_List * tl = _T39;
	void * rval = _T36;
	void * new_rval = Cyc_CfFlowInfo_insert_place_outer(tl,rval,new_val);
	if (new_rval != rval) { goto _TLBB;
	}
	_T25 = old_val;
	return _T25;
	_TLBB: { struct Cyc_CfFlowInfo_UniquePtr_CfFlowInfo_AbsRVal_struct * _T3B = _cycalloc(sizeof(struct Cyc_CfFlowInfo_UniquePtr_CfFlowInfo_AbsRVal_struct));
	  _T3B->tag = 5;
	  _T3B->f1 = new_rval;
	  _T26 = (struct Cyc_CfFlowInfo_UniquePtr_CfFlowInfo_AbsRVal_struct *)_T3B;
	}_T27 = (void *)_T26;
	return _T27;
      }
    case 8: 
      goto _LL5;
    default: 
      goto _LL7;
    }
    _TLB6: goto _TLB4;
    _TLB3: _T28 = _T34.f1;
    _T29 = (int *)_T28;
    _T2A = *_T29;
    if (_T2A != 8) { goto _TLBD;
    }
    _LL5: _T2B = _T34.f1;
    { struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct * _T3B = (struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct *)_T2B;
      _T35 = _T3B->f1;
      _T2C = _T3B->f2;
      _T39 = (void *)_T2C;
    }{ struct Cyc_Absyn_Vardecl * n = _T35;
      void * rval = _T39;
      void * new_rval = Cyc_CfFlowInfo_insert_place_outer(path,rval,new_val);
      if (new_rval != rval) { goto _TLBF;
      }
      _T2D = old_val;
      return _T2D;
      _TLBF: { struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct * _T3B = _cycalloc(sizeof(struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct));
	_T3B->tag = 8;
	_T3B->f1 = n;
	_T3B->f2 = new_rval;
	_T2E = (struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct *)_T3B;
      }_T2F = (void *)_T2E;
      return _T2F;
    }_TLBD: _LL7: _T31 = Cyc_Warn_impos;
    { int (* _T3B)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
							       struct _fat_ptr))_T31;
      _T30 = _T3B;
    }_T32 = _tag_fat("bad insert place",sizeof(char),17U);
    _T33 = _tag_fat(0U,sizeof(void *),0);
    _T30(_T32,_T33);
    _TLB4: ;
  }
}
static struct Cyc_Dict_Dict Cyc_CfFlowInfo_escape_these(struct Cyc_CfFlowInfo_FlowEnv * fenv,
							struct Cyc_CfFlowInfo_EscPile * pile,
							struct Cyc_Dict_Dict d) {
  struct Cyc_CfFlowInfo_EscPile * _T0;
  struct Cyc_List_List * _T1;
  struct Cyc_CfFlowInfo_EscPile * _T2;
  struct Cyc_List_List * _T3;
  void * _T4;
  struct Cyc_CfFlowInfo_EscPile * _T5;
  struct Cyc_CfFlowInfo_EscPile * _T6;
  struct Cyc_List_List * _T7;
  struct _handler_cons * _T8;
  int _T9;
  void * _TA;
  struct Cyc_Dict_Absent_exn_struct * _TB;
  char * _TC;
  char * _TD;
  struct Cyc_CfFlowInfo_FlowEnv * _TE;
  struct Cyc_CfFlowInfo_FlowEnv * _TF;
  struct Cyc_CfFlowInfo_Place * _T10;
  struct Cyc_Dict_Dict _T11;
  void * _T12;
  struct Cyc_List_List * _T13;
  void * _T14;
  void * _T15;
  void * _T16;
  struct Cyc_Dict_Dict _T17;
  _TLC1: _T0 = pile;
  _T1 = _T0->places;
  if (_T1 != 0) { goto _TLC2;
  }else { goto _TLC3;
  }
  _TLC2: _T2 = pile;
  _T3 = _T2->places;
  _T4 = _T3->hd;
  { struct Cyc_CfFlowInfo_Place * place = (struct Cyc_CfFlowInfo_Place *)_T4;
    _T5 = pile;
    _T6 = pile;
    _T7 = _T6->places;
    _T5->places = _T7->tl;
    { void * oldval;
      void * newval;
      { struct _handler_cons _T18;
	_T8 = &_T18;
	_push_handler(_T8);
	{ int _T19 = 0;
	  _T9 = setjmp(_T18.handler);
	  if (! _T9) { goto _TLC4;
	  }
	  _T19 = 1;
	  goto _TLC5;
	  _TLC4: _TLC5: if (_T19) { goto _TLC6;
	  }else { goto _TLC8;
	  }
	  _TLC8: oldval = Cyc_CfFlowInfo_lookup_place(d,place);
	  _pop_handler();
	  goto _TLC7;
	  _TLC6: _TA = Cyc_Core_get_exn_thrown();
	  { void * _T1A = (void *)_TA;
	    void * _T1B;
	    _TB = (struct Cyc_Dict_Absent_exn_struct *)_T1A;
	    _TC = _TB->tag;
	    _TD = Cyc_Dict_Absent;
	    if (_TC != _TD) { goto _TLC9;
	    }
	    goto _TLC1;
	    _TLC9: _T1B = _T1A;
	    { void * exn = _T1B;
	      _rethrow(exn);
	    };
	  }_TLC7: ;
	}
      }{ enum Cyc_CfFlowInfo_InitLevel _T18 = Cyc_CfFlowInfo_initlevel(fenv,
								       d,
								       oldval);
	if (_T18 != Cyc_CfFlowInfo_AllIL) { goto _TLCB;
	}
	_TE = fenv;
	newval = _TE->esc_all;
	goto _LL5;
	_TLCB: _TF = fenv;
	newval = _TF->esc_none;
	goto _LL5;
	_LL5: ;
      }Cyc_CfFlowInfo_add_places(pile,oldval);
      _T10 = place;
      { struct Cyc_CfFlowInfo_Place _T18 = *_T10;
	struct Cyc_List_List * _T19;
	void * _T1A;
	_T1A = _T18.root;
	_T19 = _T18.path;
	{ void * root = _T1A;
	  struct Cyc_List_List * path = _T19;
	  _T11 = d;
	  _T12 = root;
	  _T13 = path;
	  _T14 = Cyc_Dict_lookup(d,root);
	  _T15 = newval;
	  _T16 = Cyc_CfFlowInfo_insert_place_outer(_T13,_T14,_T15);
	  d = Cyc_Dict_insert(_T11,_T12,_T16);
	}
      }
    }
  }goto _TLC1;
  _TLC3: _T17 = d;
  return _T17;
}
 struct Cyc_CfFlowInfo_InitlevelEnv {
  struct Cyc_Dict_Dict d;
  struct Cyc_List_List * seen;
};
static enum Cyc_CfFlowInfo_InitLevel Cyc_CfFlowInfo_initlevel_approx(void * r) {
  void * _T0;
  int * _T1;
  unsigned int _T2;
  void * _T3;
  void * _T4;
  enum Cyc_CfFlowInfo_InitLevel _T5;
  void * _T6;
  void * _T7;
  int (* _T8)(struct _fat_ptr,struct _fat_ptr);
  void * (* _T9)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _TA;
  struct _fat_ptr _TB;
  void * _TC;
  enum Cyc_CfFlowInfo_InitLevel _TD;
  _T0 = r;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  switch (_T2) {
  case 2: 
    _T3 = r;
    { struct Cyc_CfFlowInfo_UnknownR_CfFlowInfo_AbsRVal_struct * _TE = (struct Cyc_CfFlowInfo_UnknownR_CfFlowInfo_AbsRVal_struct *)_T3;
      _TD = _TE->f1;
    }{ enum Cyc_CfFlowInfo_InitLevel il = _TD;
      _TD = il;
      goto _LL4;
    }
  case 3: 
    _T4 = r;
    { struct Cyc_CfFlowInfo_Esc_CfFlowInfo_AbsRVal_struct * _TE = (struct Cyc_CfFlowInfo_Esc_CfFlowInfo_AbsRVal_struct *)_T4;
      _TD = _TE->f1;
    }_LL4: { enum Cyc_CfFlowInfo_InitLevel il = _TD;
      _T5 = il;
      return _T5;
    }
  case 0: 
    goto _LL8;
  case 1: 
    _LL8: return 1U;
  case 7: 
    _T6 = r;
    { struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct * _TE = (struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct *)_T6;
      _T7 = _TE->f3;
      _TC = (void *)_T7;
    }{ void * r = _TC;
      return 0U;
    }
  default: 
    Cyc_CfFlowInfo_print_absrval(r);
    _T9 = Cyc_Warn_impos;
    { int (* _TE)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
							      struct _fat_ptr))_T9;
      _T8 = _TE;
    }_TA = _tag_fat("initlevel_approx",sizeof(char),17U);
    _TB = _tag_fat(0U,sizeof(void *),0);
    _T8(_TA,_TB);
  }
  ;
}
static enum Cyc_CfFlowInfo_InitLevel Cyc_CfFlowInfo_initlevel_rec(struct Cyc_CfFlowInfo_InitlevelEnv * env,
								  void * r,
								  enum Cyc_CfFlowInfo_InitLevel acc) {
  enum Cyc_CfFlowInfo_InitLevel _T0;
  int _T1;
  void * _T2;
  int * _T3;
  unsigned int _T4;
  void * _T5;
  void * _T6;
  enum Cyc_CfFlowInfo_InitLevel _T7;
  void * _T8;
  struct Cyc_CfFlowInfo_UnionRInfo _T9;
  struct Cyc_CfFlowInfo_UnionRInfo _TA;
  long _TB;
  struct _fat_ptr _TC;
  int _TD;
  int _TE;
  int _TF;
  unsigned int _T10;
  unsigned int _T11;
  struct Cyc_CfFlowInfo_InitlevelEnv * _T12;
  struct _fat_ptr _T13;
  unsigned char * _T14;
  void * * _T15;
  void * * _T16;
  int _T17;
  void * _T18;
  enum Cyc_CfFlowInfo_InitLevel _T19;
  int _T1A;
  struct Cyc_CfFlowInfo_InitlevelEnv * _T1B;
  struct _fat_ptr _T1C;
  unsigned char * _T1D;
  void * * _T1E;
  int _T1F;
  void * _T20;
  enum Cyc_CfFlowInfo_InitLevel _T21;
  int _T22;
  void * _T23;
  struct _fat_ptr _T24;
  int _T25;
  unsigned int _T26;
  unsigned int _T27;
  struct Cyc_CfFlowInfo_InitlevelEnv * _T28;
  struct _fat_ptr _T29;
  unsigned char * _T2A;
  void * * _T2B;
  void * * _T2C;
  int _T2D;
  void * _T2E;
  enum Cyc_CfFlowInfo_InitLevel _T2F;
  void * _T30;
  long (* _T31)(int (*)(struct Cyc_CfFlowInfo_Place *,struct Cyc_CfFlowInfo_Place *),
		struct Cyc_List_List *,struct Cyc_CfFlowInfo_Place *);
  long (* _T32)(int (*)(void *,void *),struct Cyc_List_List *,void *);
  struct Cyc_CfFlowInfo_InitlevelEnv * _T33;
  struct Cyc_List_List * _T34;
  struct Cyc_CfFlowInfo_Place * _T35;
  long _T36;
  struct Cyc_CfFlowInfo_InitlevelEnv * _T37;
  struct Cyc_List_List * _T38;
  struct Cyc_CfFlowInfo_InitlevelEnv * _T39;
  struct Cyc_CfFlowInfo_InitlevelEnv * _T3A;
  struct Cyc_CfFlowInfo_InitlevelEnv * _T3B;
  struct Cyc_Dict_Dict _T3C;
  struct Cyc_CfFlowInfo_Place * _T3D;
  void * _T3E;
  struct Cyc_CfFlowInfo_InitlevelEnv * _T3F;
  struct Cyc_CfFlowInfo_InitlevelEnv * _T40;
  struct Cyc_List_List * _T41;
  struct Cyc_List_List * _T42;
  void * _T43;
  void * _T44;
  enum Cyc_CfFlowInfo_InitLevel _T45;
  enum Cyc_CfFlowInfo_InitLevel this_ans;
  _T0 = acc;
  _T1 = (int)_T0;
  if (_T1 != 0) { goto _TLCE;
  }
  return 0U;
  _TLCE: { struct _fat_ptr _T46;
    int _T47;
    long _T48;
    void * _T49;
    _T2 = r;
    _T3 = (int *)_T2;
    _T4 = *_T3;
    switch (_T4) {
    case 8: 
      _T5 = r;
      { struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct * _T4A = (struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct *)_T5;
	_T6 = _T4A->f2;
	_T49 = (void *)_T6;
      }{ void * r = _T49;
	_T7 = Cyc_CfFlowInfo_initlevel_rec(env,r,acc);
	return _T7;
      }
    case 6: 
      _T8 = r;
      { struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct * _T4A = (struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct *)_T8;
	_T9 = _T4A->f1;
	_T48 = _T9.is_union;
	_TA = _T4A->f1;
	_T47 = _TA.fieldnum;
	_T46 = _T4A->f2;
      }_TB = (long)_T48;
      if (! _TB) { goto _TLD1;
      }
      { long iu = _T48;
	int f = _T47;
	struct _fat_ptr d = _T46;
	_TC = d;
	{ unsigned int sz = _get_fat_size(_TC,sizeof(void *));
	  this_ans = 0U;
	  _TD = f;
	  _TE = - 1;
	  if (_TD != _TE) { goto _TLD3;
	  }
	  { int i = 0;
	    _TLD8: _TF = i;
	    _T10 = (unsigned int)_TF;
	    _T11 = sz;
	    if (_T10 < _T11) { goto _TLD6;
	    }else { goto _TLD7;
	    }
	    _TLD6: _T12 = env;
	    _T13 = d;
	    _T14 = _T13.curr;
	    _T15 = (void * *)_T14;
	    _T16 = _check_null(_T15);
	    _T17 = i;
	    _T18 = _T16[_T17];
	    _T19 = Cyc_CfFlowInfo_initlevel_rec(_T12,_T18,1U);
	    _T1A = (int)_T19;
	    if (_T1A != 1) { goto _TLD9;
	    }
	    this_ans = 1U;
	    goto _TLD7;
	    _TLD9: i = i + 1;
	    goto _TLD8;
	    _TLD7: ;
	  }goto _TLD4;
	  _TLD3: _T1B = env;
	  _T1C = d;
	  _T1D = _T1C.curr;
	  _T1E = (void * *)_T1D;
	  _T1F = f;
	  _T20 = _T1E[_T1F];
	  _T21 = Cyc_CfFlowInfo_initlevel_rec(_T1B,_T20,1U);
	  _T22 = (int)_T21;
	  if (_T22 != 1) { goto _TLDB;
	  }
	  this_ans = 1U;
	  goto _TLDC;
	  _TLDB: _TLDC: _TLD4: goto _LL0;
	}
      }_TLD1: _T23 = r;
      { struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct * _T4A = (struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct *)_T23;
	_T46 = _T4A->f2;
      }{ struct _fat_ptr d = _T46;
	_T24 = d;
	{ unsigned int sz = _get_fat_size(_T24,sizeof(void *));
	  this_ans = 1U;
	  { int i = 0;
	    _TLE0: _T25 = i;
	    _T26 = (unsigned int)_T25;
	    _T27 = sz;
	    if (_T26 < _T27) { goto _TLDE;
	    }else { goto _TLDF;
	    }
	    _TLDE: _T28 = env;
	    _T29 = d;
	    _T2A = _T29.curr;
	    _T2B = (void * *)_T2A;
	    _T2C = _check_null(_T2B);
	    _T2D = i;
	    _T2E = _T2C[_T2D];
	    _T2F = this_ans;
	    this_ans = Cyc_CfFlowInfo_initlevel_rec(_T28,_T2E,_T2F);
	    i = i + 1;
	    goto _TLE0;
	    _TLDF: ;
	  }goto _LL0;
	}
      }
    case 4: 
      _T30 = r;
      { struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct * _T4A = (struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct *)_T30;
	_T49 = _T4A->f1;
      }{ struct Cyc_CfFlowInfo_Place * p = _T49;
	_T32 = Cyc_List_mem;
	{ long (* _T4A)(int (*)(struct Cyc_CfFlowInfo_Place *,struct Cyc_CfFlowInfo_Place *),
			struct Cyc_List_List *,struct Cyc_CfFlowInfo_Place *) = (long (*)(int (*)(struct Cyc_CfFlowInfo_Place *,
												  struct Cyc_CfFlowInfo_Place *),
											  struct Cyc_List_List *,
											  struct Cyc_CfFlowInfo_Place *))_T32;
	  _T31 = _T4A;
	}_T33 = env;
	_T34 = _T33->seen;
	_T35 = p;
	_T36 = _T31(Cyc_CfFlowInfo_place_cmp,_T34,_T35);
	if (! _T36) { goto _TLE1;
	}
	this_ans = 1U;
	goto _TLE2;
	_TLE1: _T37 = env;
	{ struct Cyc_List_List * _T4A = _cycalloc(sizeof(struct Cyc_List_List));
	  _T4A->hd = p;
	  _T39 = env;
	  _T4A->tl = _T39->seen;
	  _T38 = (struct Cyc_List_List *)_T4A;
	}_T37->seen = _T38;
	_T3A = env;
	_T3B = env;
	_T3C = _T3B->d;
	_T3D = p;
	_T3E = Cyc_CfFlowInfo_lookup_place(_T3C,_T3D);
	this_ans = Cyc_CfFlowInfo_initlevel_rec(_T3A,_T3E,1U);
	_T3F = env;
	_T40 = env;
	_T41 = _T40->seen;
	_T42 = _check_null(_T41);
	_T3F->seen = _T42->tl;
	_TLE2: goto _LL0;
      }
    case 5: 
      _T43 = r;
      { struct Cyc_CfFlowInfo_UniquePtr_CfFlowInfo_AbsRVal_struct * _T4A = (struct Cyc_CfFlowInfo_UniquePtr_CfFlowInfo_AbsRVal_struct *)_T43;
	_T44 = _T4A->f1;
	_T49 = (void *)_T44;
      }{ void * r = _T49;
	this_ans = Cyc_CfFlowInfo_initlevel_rec(env,r,1U);
	goto _LL0;
      }
    default: 
      this_ans = Cyc_CfFlowInfo_initlevel_approx(r);
      goto _LL0;
    }
    _LL0: ;
  }_T45 = this_ans;
  return _T45;
}
enum Cyc_CfFlowInfo_InitLevel Cyc_CfFlowInfo_initlevel(struct Cyc_CfFlowInfo_FlowEnv * env,
						       struct Cyc_Dict_Dict d,
						       void * r) {
  struct Cyc_CfFlowInfo_InitlevelEnv _T0;
  struct Cyc_CfFlowInfo_InitlevelEnv * _T1;
  struct Cyc_CfFlowInfo_InitlevelEnv * _T2;
  void * _T3;
  enum Cyc_CfFlowInfo_InitLevel _T4;
  { struct Cyc_CfFlowInfo_InitlevelEnv _T5;
    _T5.d = d;
    _T5.seen = 0;
    _T0 = _T5;
  }{ struct Cyc_CfFlowInfo_InitlevelEnv env2 = _T0;
    _T1 = &env2;
    _T2 = (struct Cyc_CfFlowInfo_InitlevelEnv *)_T1;
    _T3 = r;
    _T4 = Cyc_CfFlowInfo_initlevel_rec(_T2,_T3,1U);
    return _T4;
  }
}
void * Cyc_CfFlowInfo_lookup_place(struct Cyc_Dict_Dict d,struct Cyc_CfFlowInfo_Place * place) {
  struct Cyc_CfFlowInfo_Place * _T0;
  struct _tuple13 _T1;
  struct Cyc_List_List * _T2;
  void * _T3;
  int * _T4;
  unsigned int _T5;
  void * _T6;
  void * _T7;
  void * _T8;
  void * _T9;
  void * _TA;
  int * _TB;
  int _TC;
  void * _TD;
  void * _TE;
  struct _fat_ptr _TF;
  int _T10;
  unsigned char * _T11;
  void * * _T12;
  void * _T13;
  int * _T14;
  int _T15;
  void * _T16;
  void * _T17;
  int (* _T18)(struct _fat_ptr,struct _fat_ptr);
  void * (* _T19)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T1A;
  struct _fat_ptr _T1B;
  struct Cyc_List_List * _T1C;
  void * _T1D;
  _T0 = place;
  { struct Cyc_CfFlowInfo_Place _T1E = *_T0;
    struct Cyc_List_List * _T1F;
    void * _T20;
    _T20 = _T1E.root;
    _T1F = _T1E.path;
    { void * root = _T20;
      struct Cyc_List_List * path = _T1F;
      void * ans = Cyc_Dict_lookup(d,root);
      _TLE6: if (path != 0) { goto _TLE4;
      }else { goto _TLE5;
      }
      _TLE4: retry: { struct _tuple13 _T21;
	_T21.f0 = ans;
	_T2 = path;
	_T21.f1 = _T2->hd;
	_T1 = _T21;
      }{ struct _tuple13 _T21 = _T1;
	int _T22;
	struct _fat_ptr _T23;
	struct Cyc_CfFlowInfo_UnionRInfo _T24;
	void * _T25;
	_T3 = _T21.f0;
	_T4 = (int *)_T3;
	_T5 = *_T4;
	switch (_T5) {
	case 8: 
	  _T6 = _T21.f0;
	  { struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct * _T26 = (struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct *)_T6;
	    _T7 = _T26->f2;
	    _T25 = (void *)_T7;
	  }{ void * rval = _T25;
	    ans = rval;
	    goto retry;
	  }
	case 7: 
	  _T8 = _T21.f0;
	  { struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct * _T26 = (struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct *)_T8;
	    _T9 = _T26->f3;
	    _T25 = (void *)_T9;
	  }{ void * rval = _T25;
	    ans = rval;
	    goto retry;
	  }
	case 6: 
	  _TA = _T21.f1;
	  _TB = (int *)_TA;
	  _TC = *_TB;
	  if (_TC != 0) { goto _TLE8;
	  }
	  _TD = _T21.f0;
	  { struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct * _T26 = (struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct *)_TD;
	    _T24 = _T26->f1;
	    _T23 = _T26->f2;
	  }_TE = _T21.f1;
	  { struct Cyc_CfFlowInfo_Dot_CfFlowInfo_PathCon_struct * _T26 = (struct Cyc_CfFlowInfo_Dot_CfFlowInfo_PathCon_struct *)_TE;
	    _T22 = _T26->f1;
	  }{ struct Cyc_CfFlowInfo_UnionRInfo is_union = _T24;
	    struct _fat_ptr d2 = _T23;
	    int fname = _T22;
	    _TF = d2;
	    _T10 = fname;
	    _T11 = _check_fat_subscript(_TF,sizeof(void *),_T10);
	    _T12 = (void * *)_T11;
	    ans = *_T12;
	    goto _LL3;
	  }_TLE8: goto _LLC;
	case 5: 
	  _T13 = _T21.f1;
	  _T14 = (int *)_T13;
	  _T15 = *_T14;
	  if (_T15 != 1) { goto _TLEA;
	  }
	  _T16 = _T21.f0;
	  { struct Cyc_CfFlowInfo_UniquePtr_CfFlowInfo_AbsRVal_struct * _T26 = (struct Cyc_CfFlowInfo_UniquePtr_CfFlowInfo_AbsRVal_struct *)_T16;
	    _T17 = _T26->f1;
	    _T25 = (void *)_T17;
	  }{ void * rval = _T25;
	    ans = rval;
	    goto _LL3;
	  }_TLEA: goto _LLC;
	default: 
	  _LLC: _T19 = Cyc_Warn_impos;
	  { int (* _T26)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								     struct _fat_ptr))_T19;
	    _T18 = _T26;
	  }_T1A = _tag_fat("bad lookup_place",sizeof(char),17U);
	  _T1B = _tag_fat(0U,sizeof(void *),0);
	  _T18(_T1A,_T1B);
	}
	_LL3: ;
      }_T1C = path;
      path = _T1C->tl;
      goto _TLE6;
      _TLE5: _T1D = ans;
      return _T1D;
    }
  }
}
static long Cyc_CfFlowInfo_is_rval_unescaped(void * rval) {
  void * _T0;
  int * _T1;
  unsigned int _T2;
  void * _T3;
  void * _T4;
  long _T5;
  void * _T6;
  void * _T7;
  long _T8;
  void * _T9;
  struct Cyc_CfFlowInfo_UnionRInfo _TA;
  struct Cyc_CfFlowInfo_UnionRInfo _TB;
  long _TC;
  int _TD;
  int _TE;
  struct _fat_ptr _TF;
  unsigned char * _T10;
  void * * _T11;
  int _T12;
  void * _T13;
  long _T14;
  int _T15;
  struct _fat_ptr _T16;
  int _T17;
  unsigned int _T18;
  unsigned int _T19;
  struct _fat_ptr _T1A;
  unsigned char * _T1B;
  void * * _T1C;
  void * * _T1D;
  int _T1E;
  void * _T1F;
  long _T20;
  struct _fat_ptr _T21;
  int _T22;
  long _T23;
  void * _T24;
  _T0 = rval;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  switch (_T2) {
  case 3: 
    return 0;
  case 7: 
    _T3 = rval;
    { struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct * _T25 = (struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct *)_T3;
      _T4 = _T25->f3;
      _T24 = (void *)_T4;
    }{ void * r = _T24;
      _T5 = Cyc_CfFlowInfo_is_rval_unescaped(r);
      return _T5;
    }
  case 8: 
    _T6 = rval;
    { struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct * _T25 = (struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct *)_T6;
      _T7 = _T25->f2;
      _T24 = (void *)_T7;
    }{ void * r = _T24;
      _T8 = Cyc_CfFlowInfo_is_rval_unescaped(r);
      return _T8;
    }
  case 6: 
    _T9 = rval;
    { struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct * _T25 = (struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct *)_T9;
      _TA = _T25->f1;
      _T23 = _TA.is_union;
      _TB = _T25->f1;
      _T22 = _TB.fieldnum;
      _T21 = _T25->f2;
    }{ long is_union = _T23;
      int field_no = _T22;
      struct _fat_ptr d = _T21;
      _TC = is_union;
      if (! _TC) { goto _TLED;
      }
      _TD = field_no;
      _TE = - 1;
      if (_TD == _TE) { goto _TLED;
      }
      _TF = d;
      _T10 = _TF.curr;
      _T11 = (void * *)_T10;
      _T12 = field_no;
      _T13 = _T11[_T12];
      _T14 = Cyc_CfFlowInfo_is_rval_unescaped(_T13);
      _T15 = ! _T14;
      return _T15;
      _TLED: _T16 = d;
      { unsigned int sz = _get_fat_size(_T16,sizeof(void *));
	{ int i = 0;
	  _TLF2: _T17 = i;
	  _T18 = (unsigned int)_T17;
	  _T19 = sz;
	  if (_T18 < _T19) { goto _TLF0;
	  }else { goto _TLF1;
	  }
	  _TLF0: _T1A = d;
	  _T1B = _T1A.curr;
	  _T1C = (void * *)_T1B;
	  _T1D = _check_null(_T1C);
	  _T1E = i;
	  _T1F = _T1D[_T1E];
	  _T20 = Cyc_CfFlowInfo_is_rval_unescaped(_T1F);
	  if (_T20) { goto _TLF3;
	  }else { goto _TLF5;
	  }
	  _TLF5: return 0;
	  _TLF3: i = i + 1;
	  goto _TLF2;
	  _TLF1: ;
	}return 1;
      }
    }
  default: 
    return 1;
  }
  ;
}
long Cyc_CfFlowInfo_is_unescaped(struct Cyc_Dict_Dict d,struct Cyc_CfFlowInfo_Place * place) {
  void * _T0;
  long _T1;
  _T0 = Cyc_CfFlowInfo_lookup_place(d,place);
  _T1 = Cyc_CfFlowInfo_is_rval_unescaped(_T0);
  return _T1;
}
long Cyc_CfFlowInfo_is_init_pointer(void * rval) {
  void * _T0;
  int * _T1;
  unsigned int _T2;
  void * _T3;
  void * _T4;
  long _T5;
  void * _T6;
  _T0 = rval;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  switch (_T2) {
  case 8: 
    _T3 = rval;
    { struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct * _T7 = (struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct *)_T3;
      _T4 = _T7->f2;
      _T6 = (void *)_T4;
    }{ void * r = _T6;
      _T5 = Cyc_CfFlowInfo_is_init_pointer(r);
      return _T5;
    }
  case 4: 
    goto _LL6;
  case 5: 
    _LL6: return 1;
  default: 
    return 0;
  }
  ;
}
struct Cyc_Dict_Dict Cyc_CfFlowInfo_escape_deref(struct Cyc_CfFlowInfo_FlowEnv * fenv,
						 struct Cyc_Dict_Dict d,void * r) {
  struct Cyc_CfFlowInfo_EscPile * _T0;
  struct _RegionHandle _T1 = _new_region(0U,"rgn");
  struct _RegionHandle * rgn = &_T1;
  _push_region(rgn);
  { struct Cyc_CfFlowInfo_EscPile * pile;
    pile = _cycalloc(sizeof(struct Cyc_CfFlowInfo_EscPile));
    _T0 = pile;
    _T0->places = 0;
    Cyc_CfFlowInfo_add_places(pile,r);
    { struct Cyc_Dict_Dict _T2 = Cyc_CfFlowInfo_escape_these(fenv,pile,d);
      _npop_handler(0);
      return _T2;
    }
  }_pop_region();
}
 struct Cyc_CfFlowInfo_AssignEnv {
  struct Cyc_CfFlowInfo_FlowEnv * fenv;
  struct Cyc_CfFlowInfo_EscPile * pile;
  struct Cyc_Dict_Dict d;
  unsigned int loc;
  struct Cyc_CfFlowInfo_Place * root_place;
};
static void * Cyc_CfFlowInfo_assign_place_inner(struct Cyc_CfFlowInfo_AssignEnv * env,
						void * oldval,void * newval) {
  struct _tuple13 _T0;
  void * _T1;
  int * _T2;
  int _T3;
  void * _T4;
  void * _T5;
  void * _T6;
  void * _T7;
  int * _T8;
  int _T9;
  void * _TA;
  void * _TB;
  void * _TC;
  struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct * _TD;
  void * _TE;
  void * _TF;
  int * _T10;
  unsigned int _T11;
  void * _T12;
  int * _T13;
  int _T14;
  void * _T15;
  struct Cyc_CfFlowInfo_AssignEnv * _T16;
  struct Cyc_CfFlowInfo_EscPile * _T17;
  struct Cyc_CfFlowInfo_Place * _T18;
  struct Cyc_CfFlowInfo_AssignEnv * _T19;
  struct Cyc_CfFlowInfo_FlowEnv * _T1A;
  struct Cyc_CfFlowInfo_AssignEnv * _T1B;
  struct Cyc_Dict_Dict _T1C;
  void * _T1D;
  enum Cyc_CfFlowInfo_InitLevel _T1E;
  int _T1F;
  struct Cyc_CfFlowInfo_AssignEnv * _T20;
  unsigned int _T21;
  struct _fat_ptr _T22;
  struct _fat_ptr _T23;
  struct Cyc_CfFlowInfo_AssignEnv * _T24;
  struct Cyc_CfFlowInfo_FlowEnv * _T25;
  void * _T26;
  void * _T27;
  int * _T28;
  unsigned int _T29;
  void * _T2A;
  void * _T2B;
  struct _fat_ptr _T2C;
  struct _fat_ptr _T2D;
  void * * _T2E;
  unsigned int _T2F;
  unsigned int _T30;
  struct Cyc_CfFlowInfo_AssignEnv * _T31;
  struct _fat_ptr _T32;
  unsigned int _T33;
  int _T34;
  unsigned char * _T35;
  void * * _T36;
  void * _T37;
  struct _fat_ptr _T38;
  unsigned int _T39;
  int _T3A;
  unsigned char * _T3B;
  void * * _T3C;
  void * _T3D;
  int _T3E;
  unsigned int _T3F;
  struct _fat_ptr _T40;
  unsigned int _T41;
  struct _fat_ptr _T42;
  int _T43;
  unsigned char * _T44;
  void * * _T45;
  void * _T46;
  struct _fat_ptr _T47;
  unsigned char * _T48;
  void * * _T49;
  void * * _T4A;
  int _T4B;
  void * _T4C;
  long _T4D;
  struct Cyc_CfFlowInfo_UnionRInfo _T4E;
  long _T4F;
  void * _T50;
  int _T51;
  unsigned int _T52;
  struct _fat_ptr _T53;
  unsigned int _T54;
  struct _fat_ptr _T55;
  int _T56;
  unsigned char * _T57;
  void * * _T58;
  void * _T59;
  struct _fat_ptr _T5A;
  int _T5B;
  unsigned char * _T5C;
  void * * _T5D;
  void * _T5E;
  long _T5F;
  struct Cyc_CfFlowInfo_UnionRInfo _T60;
  long _T61;
  void * _T62;
  struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct * _T63;
  void * _T64;
  void * _T65;
  int * _T66;
  int _T67;
  void * _T68;
  enum Cyc_CfFlowInfo_InitLevel _T69;
  struct Cyc_CfFlowInfo_AssignEnv * _T6A;
  struct Cyc_CfFlowInfo_FlowEnv * _T6B;
  void * _T6C;
  struct Cyc_CfFlowInfo_AssignEnv * _T6D;
  struct Cyc_CfFlowInfo_FlowEnv * _T6E;
  void * _T6F;
  void * _T70;
  { struct _tuple13 _T71;
    _T71.f0 = oldval;
    _T71.f1 = newval;
    _T0 = _T71;
  }{ struct _tuple13 _T71 = _T0;
    enum Cyc_CfFlowInfo_InitLevel _T72;
    struct _fat_ptr _T73;
    struct Cyc_CfFlowInfo_UnionRInfo _T74;
    struct _fat_ptr _T75;
    struct Cyc_CfFlowInfo_UnionRInfo _T76;
    struct Cyc_CfFlowInfo_Place * _T77;
    struct Cyc_Absyn_Vardecl * _T78;
    void * _T79;
    _T1 = _T71.f0;
    _T2 = (int *)_T1;
    _T3 = *_T2;
    if (_T3 != 8) { goto _TLF7;
    }
    _T4 = _T71.f0;
    { struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct * _T7A = (struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct *)_T4;
      _T5 = _T7A->f2;
      _T79 = (void *)_T5;
    }{ void * r1 = _T79;
      _T6 = Cyc_CfFlowInfo_assign_place_inner(env,r1,newval);
      return _T6;
    }_TLF7: _T7 = _T71.f1;
    _T8 = (int *)_T7;
    _T9 = *_T8;
    if (_T9 != 8) { goto _TLF9;
    }
    _TA = _T71.f1;
    { struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct * _T7A = (struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct *)_TA;
      _T78 = _T7A->f1;
      _TB = _T7A->f2;
      _T79 = (void *)_TB;
    }{ struct Cyc_Absyn_Vardecl * n = _T78;
      void * r = _T79;
      void * new_rval = Cyc_CfFlowInfo_assign_place_inner(env,oldval,r);
      if (new_rval != r) { goto _TLFB;
      }
      _TC = newval;
      return _TC;
      _TLFB: { struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct * _T7A = _cycalloc(sizeof(struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct));
	_T7A->tag = 8;
	_T7A->f1 = n;
	_T7A->f2 = new_rval;
	_TD = (struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct *)_T7A;
      }_TE = (void *)_TD;
      return _TE;
    }_TLF9: _TF = _T71.f0;
    _T10 = (int *)_TF;
    _T11 = *_T10;
    switch (_T11) {
    case 3: 
      _T12 = _T71.f1;
      _T13 = (int *)_T12;
      _T14 = *_T13;
      if (_T14 != 4) { goto _TLFE;
      }
      _T15 = _T71.f1;
      { struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct * _T7A = (struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct *)_T15;
	_T77 = _T7A->f1;
      }{ struct Cyc_CfFlowInfo_Place * p = _T77;
	_T16 = env;
	_T17 = _T16->pile;
	_T18 = p;
	Cyc_CfFlowInfo_add_place(_T17,_T18);
	goto _LL8;
      }_TLFE: _LL8: _T19 = env;
      _T1A = _T19->fenv;
      _T1B = env;
      _T1C = _T1B->d;
      _T1D = newval;
      _T1E = Cyc_CfFlowInfo_initlevel(_T1A,_T1C,_T1D);
      _T1F = (int)_T1E;
      if (_T1F == 1) { goto _TL100;
      }
      _T20 = env;
      _T21 = _T20->loc;
      _T22 = _tag_fat("assignment puts possibly-uninitialized data in an escaped location",
		      sizeof(char),67U);
      _T23 = _tag_fat(0U,sizeof(void *),0);
      Cyc_CfFlowInfo_aerr(_T21,_T22,_T23);
      goto _TL101;
      _TL100: _TL101: _T24 = env;
      _T25 = _T24->fenv;
      _T26 = _T25->esc_all;
      return _T26;
    case 6: 
      _T27 = _T71.f1;
      _T28 = (int *)_T27;
      _T29 = *_T28;
      switch (_T29) {
      case 6: 
	_T2A = _T71.f0;
	{ struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct * _T7A = (struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct *)_T2A;
	  _T76 = _T7A->f1;
	  _T75 = _T7A->f2;
	}_T2B = _T71.f1;
	{ struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct * _T7A = (struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct *)_T2B;
	  _T74 = _T7A->f1;
	  _T73 = _T7A->f2;
	}{ struct Cyc_CfFlowInfo_UnionRInfo is_union1 = _T76;
	  struct _fat_ptr d1 = _T75;
	  struct Cyc_CfFlowInfo_UnionRInfo is_union2 = _T74;
	  struct _fat_ptr d2 = _T73;
	  _T2D = d1;
	  { unsigned int _T7A = _get_fat_size(_T2D,sizeof(void *));
	    _T2F = _check_times(_T7A,sizeof(void *));
	    { void * * _T7B = _cycalloc(_T2F);
	      { unsigned int _T7C = _T7A;
		unsigned int i;
		i = 0;
		_TL106: if (i < _T7C) { goto _TL104;
		}else { goto _TL105;
		}
		_TL104: _T30 = i;
		_T31 = env;
		_T32 = d1;
		_T33 = i;
		_T34 = (int)_T33;
		_T35 = _check_fat_subscript(_T32,sizeof(void *),_T34);
		_T36 = (void * *)_T35;
		_T37 = *_T36;
		_T38 = d2;
		_T39 = i;
		_T3A = (int)_T39;
		_T3B = _check_fat_subscript(_T38,sizeof(void *),_T3A);
		_T3C = (void * *)_T3B;
		_T3D = *_T3C;
		_T7B[_T30] = Cyc_CfFlowInfo_assign_place_inner(_T31,_T37,
							       _T3D);
		i = i + 1;
		goto _TL106;
		_TL105: ;
	      }_T2E = (void * *)_T7B;
	    }_T2C = _tag_fat(_T2E,sizeof(void *),_T7A);
	  }{ struct _fat_ptr new_d = _T2C;
	    long change = 0;
	    { int i = 0;
	      _TL10A: _T3E = i;
	      _T3F = (unsigned int)_T3E;
	      _T40 = d1;
	      _T41 = _get_fat_size(_T40,sizeof(void *));
	      if (_T3F < _T41) { goto _TL108;
	      }else { goto _TL109;
	      }
	      _TL108: _T42 = new_d;
	      _T43 = i;
	      _T44 = _check_fat_subscript(_T42,sizeof(void *),_T43);
	      _T45 = (void * *)_T44;
	      _T46 = *_T45;
	      _T47 = d1;
	      _T48 = _T47.curr;
	      _T49 = (void * *)_T48;
	      _T4A = _check_null(_T49);
	      _T4B = i;
	      _T4C = _T4A[_T4B];
	      if (_T46 == _T4C) { goto _TL10B;
	      }
	      change = 1;
	      goto _TL109;
	      _TL10B: i = i + 1;
	      goto _TL10A;
	      _TL109: ;
	    }_T4D = change;
	    if (_T4D) { goto _TL10D;
	    }else { goto _TL10F;
	    }
	    _TL10F: _T4E = is_union1;
	    _T4F = _T4E.is_union;
	    if (_T4F) { goto _TL110;
	    }else { goto _TL112;
	    }
	    _TL112: _T50 = oldval;
	    return _T50;
	    _TL110: new_d = d1;
	    goto _TL10E;
	    _TL10D: change = 0;
	    { int i = 0;
	      _TL116: _T51 = i;
	      _T52 = (unsigned int)_T51;
	      _T53 = d1;
	      _T54 = _get_fat_size(_T53,sizeof(void *));
	      if (_T52 < _T54) { goto _TL114;
	      }else { goto _TL115;
	      }
	      _TL114: _T55 = new_d;
	      _T56 = i;
	      _T57 = _check_fat_subscript(_T55,sizeof(void *),_T56);
	      _T58 = (void * *)_T57;
	      _T59 = *_T58;
	      _T5A = d2;
	      _T5B = i;
	      _T5C = _check_fat_subscript(_T5A,sizeof(void *),_T5B);
	      _T5D = (void * *)_T5C;
	      _T5E = *_T5D;
	      if (_T59 == _T5E) { goto _TL117;
	      }
	      change = 1;
	      goto _TL115;
	      _TL117: i = i + 1;
	      goto _TL116;
	      _TL115: ;
	    }_T5F = change;
	    if (_T5F) { goto _TL119;
	    }else { goto _TL11B;
	    }
	    _TL11B: _T60 = is_union1;
	    _T61 = _T60.is_union;
	    if (_T61) { goto _TL11C;
	    }else { goto _TL11E;
	    }
	    _TL11E: _T62 = newval;
	    return _T62;
	    _TL11C: new_d = d2;
	    goto _TL11A;
	    _TL119: _TL11A: _TL10E: { struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct * _T7A = _cycalloc(sizeof(struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct));
	      _T7A->tag = 6;
	      _T7A->f1 = is_union2;
	      _T7A->f2 = new_d;
	      _T63 = (struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct *)_T7A;
	    }_T64 = (void *)_T63;
	    return _T64;
	  }
	}
      case 3: 
	goto _LLB;
      default: 
	goto _LLD;
      }
      ;
    default: 
      _T65 = _T71.f1;
      _T66 = (int *)_T65;
      _T67 = *_T66;
      if (_T67 != 3) { goto _TL11F;
      }
      _LLB: _T68 = _T71.f1;
      { struct Cyc_CfFlowInfo_Esc_CfFlowInfo_AbsRVal_struct * _T7A = (struct Cyc_CfFlowInfo_Esc_CfFlowInfo_AbsRVal_struct *)_T68;
	_T72 = _T7A->f1;
      }{ enum Cyc_CfFlowInfo_InitLevel il = _T72;
	_T69 = il;
	if (_T69 != Cyc_CfFlowInfo_NoneIL) { goto _TL121;
	}
	_T6A = env;
	_T6B = _T6A->fenv;
	_T6C = _T6B->unknown_none;
	return _T6C;
	_TL121: _T6D = env;
	_T6E = _T6D->fenv;
	_T6F = _T6E->unknown_all;
	return _T6F;
	;
      }goto _TL120;
      _TL11F: _LLD: _T70 = newval;
      return _T70;
      _TL120: ;
    }
    ;
  }
}
static long Cyc_CfFlowInfo_nprefix(int * n,void * unused) {
  int * _T0;
  int _T1;
  int * _T2;
  int * _T3;
  int _T4;
  _T0 = n;
  _T1 = *_T0;
  if (_T1 <= 0) { goto _TL123;
  }
  _T2 = n;
  _T3 = n;
  _T4 = *_T3;
  *_T2 = _T4 - 1;
  return 1;
  _TL123: return 0;
}
static void * Cyc_CfFlowInfo_assign_place_outer(struct Cyc_CfFlowInfo_AssignEnv * env,
						struct Cyc_List_List * path,
						int path_prefix,void * oldval,
						void * newval) {
  void * _T0;
  struct _tuple18 _T1;
  void * _T2;
  int * _T3;
  unsigned int _T4;
  void * _T5;
  void * _T6;
  void * _T7;
  struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct * _T8;
  void * _T9;
  void * _TA;
  void * _TB;
  void * _TC;
  struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct * _TD;
  void * _TE;
  struct Cyc_List_List * _TF;
  struct Cyc_List_List * _T10;
  struct Cyc_List_List * _T11;
  void * _T12;
  int * _T13;
  int _T14;
  void * _T15;
  int * _T16;
  int _T17;
  struct Cyc_List_List * _T18;
  void * _T19;
  void * _T1A;
  struct Cyc_CfFlowInfo_AssignEnv * _T1B;
  struct Cyc_List_List * _T1C;
  int _T1D;
  void * _T1E;
  void * _T1F;
  void * _T20;
  struct Cyc_CfFlowInfo_UniquePtr_CfFlowInfo_AbsRVal_struct * _T21;
  void * _T22;
  void * _T23;
  int * _T24;
  int _T25;
  struct Cyc_List_List * _T26;
  void * _T27;
  void * _T28;
  struct Cyc_CfFlowInfo_UnionRInfo _T29;
  struct Cyc_CfFlowInfo_UnionRInfo _T2A;
  struct Cyc_CfFlowInfo_AssignEnv * _T2B;
  struct Cyc_List_List * _T2C;
  int _T2D;
  struct _fat_ptr _T2E;
  int _T2F;
  unsigned char * _T30;
  void * * _T31;
  void * _T32;
  void * _T33;
  struct _fat_ptr _T34;
  unsigned char * _T35;
  void * * _T36;
  struct _fat_ptr _T37;
  unsigned char * _T38;
  void * * _T39;
  long _T3A;
  void * _T3B;
  long _T3C;
  struct _fat_ptr _T3D;
  unsigned int _T3E;
  struct _fat_ptr _T3F;
  int _T40;
  struct Cyc_CfFlowInfo_AssignEnv * _T41;
  struct Cyc_CfFlowInfo_FlowEnv * _T42;
  void * _T43;
  struct _fat_ptr _T44;
  unsigned char * _T45;
  void * * _T46;
  void * * _T47;
  int _T48;
  void * _T49;
  void * _T4A;
  struct _fat_ptr _T4B;
  unsigned char * _T4C;
  void * * _T4D;
  struct _fat_ptr _T4E;
  unsigned char * _T4F;
  void * * _T50;
  long _T51;
  struct Cyc_CfFlowInfo_AssignEnv * _T52;
  struct Cyc_List_List * (* _T53)(long (*)(int *,void *),int *,struct Cyc_List_List *);
  struct Cyc_List_List * (* _T54)(long (*)(void *,void *),void *,struct Cyc_List_List *);
  int * _T55;
  struct Cyc_List_List * _T56;
  struct Cyc_CfFlowInfo_Place * _T57;
  struct Cyc_CfFlowInfo_Place * _T58;
  struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct * _T59;
  void * _T5A;
  int (* _T5B)(struct _fat_ptr,struct _fat_ptr);
  void * (* _T5C)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T5D;
  struct _fat_ptr _T5E;
  if (path != 0) { goto _TL125;
  }
  _T0 = Cyc_CfFlowInfo_assign_place_inner(env,oldval,newval);
  return _T0;
  _TL125: { struct _tuple18 _T5F;
    _T5F.f0 = path;
    _T5F.f1 = oldval;
    _T1 = _T5F;
  }{ struct _tuple18 _T5F = _T1;
    struct _fat_ptr _T60;
    int _T61;
    struct Cyc_List_List * _T62;
    long _T63;
    int _T64;
    void * _T65;
    void * _T66;
    _T2 = _T5F.f1;
    _T3 = (int *)_T2;
    _T4 = *_T3;
    switch (_T4) {
    case 8: 
      _T5 = _T5F.f1;
      { struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct * _T67 = (struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct *)_T5;
	_T66 = _T67->f1;
	_T6 = _T67->f2;
	_T65 = (void *)_T6;
      }{ struct Cyc_Absyn_Vardecl * n = _T66;
	void * r = _T65;
	void * new_r = Cyc_CfFlowInfo_assign_place_outer(env,path,path_prefix,
							 r,newval);
	if (new_r != r) { goto _TL128;
	}
	_T7 = oldval;
	return _T7;
	_TL128: { struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct * _T67 = _cycalloc(sizeof(struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct));
	  _T67->tag = 8;
	  _T67->f1 = n;
	  _T67->f2 = new_r;
	  _T8 = (struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct *)_T67;
	}_T9 = (void *)_T8;
	return _T9;
      }
    case 7: 
      _TA = _T5F.f1;
      { struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct * _T67 = (struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct *)_TA;
	_T66 = _T67->f1;
	_T64 = _T67->f2;
	_TB = _T67->f3;
	_T65 = (void *)_TB;
	_T63 = _T67->f4;
      }{ struct Cyc_Absyn_Exp * x = _T66;
	int y = _T64;
	void * r = _T65;
	long l = _T63;
	void * new_r = Cyc_CfFlowInfo_assign_place_outer(env,path,path_prefix,
							 r,newval);
	if (new_r != r) { goto _TL12A;
	}
	_TC = oldval;
	return _TC;
	_TL12A: { struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct * _T67 = _cycalloc(sizeof(struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct));
	  _T67->tag = 7;
	  _T67->f1 = x;
	  _T67->f2 = y;
	  _T67->f3 = new_r;
	  _T67->f4 = l;
	  _TD = (struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct *)_T67;
	}_TE = (void *)_TD;
	return _TE;
      }
    default: 
      _TF = _T5F.f0;
      if (_TF == 0) { goto _TL12C;
      }
      _T10 = _T5F.f0;
      _T11 = (struct Cyc_List_List *)_T10;
      _T12 = _T11->hd;
      _T13 = (int *)_T12;
      _T14 = *_T13;
      if (_T14 != 1) { goto _TL12E;
      }
      _T15 = _T5F.f1;
      _T16 = (int *)_T15;
      _T17 = *_T16;
      if (_T17 != 5) { goto _TL130;
      }
      _T18 = _T5F.f0;
      { struct Cyc_List_List _T67 = *_T18;
	_T62 = _T67.tl;
      }_T19 = _T5F.f1;
      { struct Cyc_CfFlowInfo_UniquePtr_CfFlowInfo_AbsRVal_struct * _T67 = (struct Cyc_CfFlowInfo_UniquePtr_CfFlowInfo_AbsRVal_struct *)_T19;
	_T1A = _T67->f1;
	_T66 = (void *)_T1A;
      }{ struct Cyc_List_List * tl = _T62;
	void * r = _T66;
	_T1B = env;
	_T1C = tl;
	_T1D = path_prefix + 1;
	_T1E = r;
	_T1F = newval;
	{ void * new_r = Cyc_CfFlowInfo_assign_place_outer(_T1B,_T1C,_T1D,
							   _T1E,_T1F);
	  if (new_r != r) { goto _TL132;
	  }
	  _T20 = oldval;
	  return _T20;
	  _TL132: { struct Cyc_CfFlowInfo_UniquePtr_CfFlowInfo_AbsRVal_struct * _T67 = _cycalloc(sizeof(struct Cyc_CfFlowInfo_UniquePtr_CfFlowInfo_AbsRVal_struct));
	    _T67->tag = 5;
	    _T67->f1 = new_r;
	    _T21 = (struct Cyc_CfFlowInfo_UniquePtr_CfFlowInfo_AbsRVal_struct *)_T67;
	  }_T22 = (void *)_T21;
	  return _T22;
	}
      }_TL130: goto _LL9;
      _TL12E: _T23 = _T5F.f1;
      _T24 = (int *)_T23;
      _T25 = *_T24;
      if (_T25 != 6) { goto _TL134;
      }
      _T26 = _T5F.f0;
      { struct Cyc_List_List _T67 = *_T26;
	_T27 = _T67.hd;
	{ struct Cyc_CfFlowInfo_Dot_CfFlowInfo_PathCon_struct * _T68 = (struct Cyc_CfFlowInfo_Dot_CfFlowInfo_PathCon_struct *)_T27;
	  _T64 = _T68->f1;
	}_T62 = _T67.tl;
      }_T28 = _T5F.f1;
      { struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct * _T67 = (struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct *)_T28;
	_T29 = _T67->f1;
	_T63 = _T29.is_union;
	_T2A = _T67->f1;
	_T61 = _T2A.fieldnum;
	_T60 = _T67->f2;
      }{ int fnum = _T64;
	struct Cyc_List_List * tl = _T62;
	long is_union = _T63;
	int fldnum = _T61;
	struct _fat_ptr d = _T60;
	_T2B = env;
	_T2C = tl;
	_T2D = path_prefix + 1;
	_T2E = d;
	_T2F = fnum;
	_T30 = _check_fat_subscript(_T2E,sizeof(void *),_T2F);
	_T31 = (void * *)_T30;
	_T32 = *_T31;
	_T33 = newval;
	{ void * new_child = Cyc_CfFlowInfo_assign_place_outer(_T2B,_T2C,
							       _T2D,_T32,
							       _T33);
	  struct _fat_ptr new_child_agg = Cyc_CfFlowInfo_aggr_dict_insert(d,
									  fnum,
									  new_child);
	  _T34 = new_child_agg;
	  _T35 = _T34.curr;
	  _T36 = (void * *)_T35;
	  _T37 = d;
	  _T38 = _T37.curr;
	  _T39 = (void * *)_T38;
	  if (_T36 != _T39) { goto _TL136;
	  }
	  _T3A = is_union;
	  if (_T3A) { goto _TL139;
	  }else { goto _TL138;
	  }
	  _TL139: if (fldnum == fnum) { goto _TL138;
	  }else { goto _TL136;
	  }
	  _TL138: _T3B = oldval;
	  return _T3B;
	  _TL136: d = new_child_agg;
	  _T3C = is_union;
	  if (! _T3C) { goto _TL13A;
	  }
	  { long changed = 0;
	    _T3D = d;
	    _T3E = _get_fat_size(_T3D,sizeof(void *));
	    { int sz = (int)_T3E;
	      { int i = 0;
		_TL13F: if (i < sz) { goto _TL13D;
		}else { goto _TL13E;
		}
		_TL13D: if (i == fnum) { goto _TL140;
		}
		_T3F = d;
		_T40 = i;
		_T41 = env;
		_T42 = _T41->fenv;
		_T43 = _T42->unknown_all;
		_T44 = d;
		_T45 = _T44.curr;
		_T46 = (void * *)_T45;
		_T47 = _check_null(_T46);
		_T48 = i;
		_T49 = _T47[_T48];
		_T4A = Cyc_CfFlowInfo_insert_place_inner(_T43,_T49);
		{ struct _fat_ptr new_d = Cyc_CfFlowInfo_aggr_dict_insert(_T3F,
									  _T40,
									  _T4A);
		  _T4B = new_d;
		  _T4C = _T4B.curr;
		  _T4D = (void * *)_T4C;
		  _T4E = d;
		  _T4F = _T4E.curr;
		  _T50 = (void * *)_T4F;
		  if (_T4D == _T50) { goto _TL142;
		  }
		  d = new_d;
		  changed = 1;
		  goto _TL143;
		  _TL142: _TL143: ;
		}goto _TL141;
		_TL140: _TL141: i = i + 1;
		goto _TL13F;
		_TL13E: ;
	      }_T51 = changed;
	      if (! _T51) { goto _TL144;
	      }
	      _T52 = env;
	      { struct Cyc_CfFlowInfo_Place * _T67 = _T52->root_place;
		struct Cyc_List_List * _T68;
		void * _T69;
		{ struct Cyc_CfFlowInfo_Place _T6A = *_T67;
		  _T69 = _T6A.root;
		  _T68 = _T6A.path;
		}{ void * root = _T69;
		  struct Cyc_List_List * path = _T68;
		  _T54 = Cyc_List_filter_c;
		  { struct Cyc_List_List * (* _T6A)(long (*)(int *,void *),
						    int *,struct Cyc_List_List *) = (struct Cyc_List_List * (*)(long (*)(int *,
															 void *),
														int *,
														struct Cyc_List_List *))_T54;
		    _T53 = _T6A;
		  }{ int * _T6A = _cycalloc_atomic(sizeof(int));
		    *_T6A = path_prefix;
		    _T55 = (int *)_T6A;
		  }_T56 = path;
		  { struct Cyc_List_List * new_path = _T53(Cyc_CfFlowInfo_nprefix,
							   _T55,_T56);
		    struct Cyc_CfFlowInfo_Place * curr_place;
		    curr_place = _cycalloc(sizeof(struct Cyc_CfFlowInfo_Place));
		    _T57 = curr_place;
		    _T57->root = root;
		    _T58 = curr_place;
		    _T58->path = new_path;
		  }
		}
	      }goto _TL145;
	      _TL144: _TL145: ;
	    }
	  }goto _TL13B;
	  _TL13A: _TL13B: { struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct * _T67 = _cycalloc(sizeof(struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct));
	    _T67->tag = 6;
	    (_T67->f1).is_union = is_union;
	    (_T67->f1).fieldnum = fnum;
	    _T67->f2 = d;
	    _T59 = (struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct *)_T67;
	  }_T5A = (void *)_T59;
	  return _T5A;
	}
      }_TL134: goto _LL9;
      _TL12C: _LL9: _T5C = Cyc_Warn_impos;
      { int (* _T67)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								 struct _fat_ptr))_T5C;
	_T5B = _T67;
      }_T5D = _tag_fat("bad assign place",sizeof(char),17U);
      _T5E = _tag_fat(0U,sizeof(void *),0);
      _T5B(_T5D,_T5E);
      ;
    }
    ;
  }
}
struct Cyc_Dict_Dict Cyc_CfFlowInfo_assign_place(struct Cyc_CfFlowInfo_FlowEnv * fenv,
						 unsigned int loc,struct Cyc_Dict_Dict d,
						 struct Cyc_CfFlowInfo_Place * place,
						 void * r) {
  struct Cyc_CfFlowInfo_Place * _T0;
  struct Cyc_CfFlowInfo_AssignEnv _T1;
  struct Cyc_CfFlowInfo_EscPile * _T2;
  struct Cyc_CfFlowInfo_AssignEnv * _T3;
  struct Cyc_CfFlowInfo_AssignEnv * _T4;
  struct Cyc_List_List * _T5;
  void * _T6;
  void * _T7;
  struct Cyc_CfFlowInfo_FlowEnv * _T8;
  struct Cyc_CfFlowInfo_AssignEnv _T9;
  struct Cyc_CfFlowInfo_EscPile * _TA;
  struct Cyc_Dict_Dict _TB;
  struct Cyc_Dict_Dict _TC;
  struct Cyc_List_List * _TD;
  void * _TE;
  _T0 = place;
  { struct Cyc_CfFlowInfo_Place _TF = *_T0;
    _TE = _TF.root;
    _TD = _TF.path;
  }{ void * root = _TE;
    struct Cyc_List_List * path = _TD;
    { struct Cyc_CfFlowInfo_AssignEnv _TF;
      _TF.fenv = fenv;
      { struct Cyc_CfFlowInfo_EscPile * _T10 = _cycalloc(sizeof(struct Cyc_CfFlowInfo_EscPile));
	_T10->places = 0;
	_T2 = (struct Cyc_CfFlowInfo_EscPile *)_T10;
      }_TF.pile = _T2;
      _TF.d = d;
      _TF.loc = loc;
      _TF.root_place = place;
      _T1 = _TF;
    }{ struct Cyc_CfFlowInfo_AssignEnv env = _T1;
      _T3 = &env;
      _T4 = (struct Cyc_CfFlowInfo_AssignEnv *)_T3;
      _T5 = path;
      _T6 = Cyc_Dict_lookup(d,root);
      _T7 = r;
      { void * newval = Cyc_CfFlowInfo_assign_place_outer(_T4,_T5,0,_T6,_T7);
	_T8 = fenv;
	_T9 = env;
	_TA = _T9.pile;
	_TB = Cyc_Dict_insert(d,root,newval);
	_TC = Cyc_CfFlowInfo_escape_these(_T8,_TA,_TB);
	return _TC;
      }
    }
  }
}
 struct Cyc_CfFlowInfo_JoinEnv {
  struct Cyc_CfFlowInfo_FlowEnv * fenv;
  struct Cyc_CfFlowInfo_EscPile * pile;
  struct Cyc_Dict_Dict d1;
  struct Cyc_Dict_Dict d2;
  long is_try_flow;
};
static long Cyc_CfFlowInfo_absRval_lessthan_approx(void *,void *,void *);
static long Cyc_CfFlowInfo_contains_local_consumed(void * r) {
  void * _T0;
  int * _T1;
  unsigned int _T2;
  void * _T3;
  long _T4;
  void * _T5;
  void * _T6;
  long _T7;
  void * _T8;
  void * _T9;
  long _TA;
  void * _TB;
  long _TC;
  _T0 = r;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  switch (_T2) {
  case 7: 
    _T3 = r;
    { struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct * _TD = (struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct *)_T3;
      _TC = _TD->f4;
    }{ long l = _TC;
      _T4 = l;
      return _T4;
    }
  case 5: 
    _T5 = r;
    { struct Cyc_CfFlowInfo_UniquePtr_CfFlowInfo_AbsRVal_struct * _TD = (struct Cyc_CfFlowInfo_UniquePtr_CfFlowInfo_AbsRVal_struct *)_T5;
      _T6 = _TD->f1;
      _TB = (void *)_T6;
    }{ void * r1 = _TB;
      _T7 = Cyc_CfFlowInfo_contains_local_consumed(r1);
      return _T7;
    }
  case 8: 
    _T8 = r;
    { struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct * _TD = (struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct *)_T8;
      _T9 = _TD->f2;
      _TB = (void *)_T9;
    }{ void * ac = _TB;
      _TA = Cyc_CfFlowInfo_contains_local_consumed(ac);
      return _TA;
    }
  case 6: 
    return 0;
  default: 
    return 0;
  }
  ;
}
static void * Cyc_CfFlowInfo_join_absRval(struct Cyc_CfFlowInfo_JoinEnv *,
					  void *,void *,void *);
 struct _tuple19 {
  long f0;
  long f1;
};
static void * Cyc_CfFlowInfo_join_absRval_tryflow(struct Cyc_CfFlowInfo_JoinEnv * env,
						  void * a,void * r1,void * r2) {
  void * _T0;
  struct _tuple19 _T1;
  long _T2;
  int _T3;
  long _T4;
  void * _T5;
  long _T6;
  void * _T7;
  void * _T8;
  if (r1 != r2) { goto _TL147;
  }
  _T0 = r1;
  return _T0;
  _TL147: { struct _tuple19 _T9;
    _T9.f0 = Cyc_CfFlowInfo_contains_local_consumed(r1);
    _T9.f1 = Cyc_CfFlowInfo_contains_local_consumed(r2);
    _T1 = _T9;
  }{ struct _tuple19 _T9 = _T1;
    _T2 = _T9.f0;
    _T3 = (int)_T2;
    switch (_T3) {
    case 1: 
      _T4 = _T9.f1;
      if (_T4 != 0) { goto _TL14A;
      }
      _T5 = r2;
      return _T5;
      _TL14A: goto _LL5;
    case 0: 
      _T6 = _T9.f1;
      if (_T6 != 1) { goto _TL14C;
      }
      _T7 = r1;
      return _T7;
      _TL14C: goto _LL5;
    default: 
      _LL5: _T8 = Cyc_CfFlowInfo_join_absRval(env,a,r1,r2);
      return _T8;
    }
    ;
  }
}
 struct _tuple20 {
  enum Cyc_CfFlowInfo_InitLevel f0;
  enum Cyc_CfFlowInfo_InitLevel f1;
};
static void * Cyc_CfFlowInfo_join_absRval(struct Cyc_CfFlowInfo_JoinEnv * env,
					  void * a,void * r1,void * r2) {
  void * _T0;
  struct _tuple13 _T1;
  void * _T2;
  int * _T3;
  int _T4;
  void * _T5;
  int * _T6;
  int _T7;
  void * _T8;
  void * _T9;
  void * _TA;
  void * _TB;
  struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct * _TC;
  void * _TD;
  void * _TE;
  void * _TF;
  void * _T10;
  void * _T11;
  void * _T12;
  int * _T13;
  int _T14;
  void * _T15;
  void * _T16;
  void * _T17;
  void * _T18;
  int * _T19;
  int _T1A;
  void * _T1B;
  int * _T1C;
  int _T1D;
  void * _T1E;
  void * _T1F;
  void * _T20;
  void * _T21;
  struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct * _T22;
  int _T23;
  long _T24;
  void * _T25;
  void * _T26;
  int * _T27;
  int _T28;
  void * _T29;
  struct Cyc_CfFlowInfo_JoinEnv * _T2A;
  struct Cyc_CfFlowInfo_EscPile * _T2B;
  struct Cyc_CfFlowInfo_Place * _T2C;
  void * _T2D;
  int * _T2E;
  int _T2F;
  void * _T30;
  struct Cyc_CfFlowInfo_JoinEnv * _T31;
  struct Cyc_CfFlowInfo_EscPile * _T32;
  struct Cyc_CfFlowInfo_Place * _T33;
  void * _T34;
  void * _T35;
  struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct * _T36;
  void * _T37;
  void * _T38;
  int * _T39;
  int _T3A;
  void * _T3B;
  void * _T3C;
  struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct * _T3D;
  void * _T3E;
  void * _T3F;
  int * _T40;
  unsigned int _T41;
  void * _T42;
  int * _T43;
  unsigned int _T44;
  void * _T45;
  void * _T46;
  int _T47;
  void * _T48;
  struct Cyc_CfFlowInfo_JoinEnv * _T49;
  struct Cyc_CfFlowInfo_EscPile * _T4A;
  struct Cyc_CfFlowInfo_Place * _T4B;
  struct Cyc_CfFlowInfo_JoinEnv * _T4C;
  struct Cyc_CfFlowInfo_EscPile * _T4D;
  struct Cyc_CfFlowInfo_Place * _T4E;
  void * _T4F;
  struct Cyc_CfFlowInfo_JoinEnv * _T50;
  struct Cyc_CfFlowInfo_EscPile * _T51;
  struct Cyc_CfFlowInfo_Place * _T52;
  struct Cyc_CfFlowInfo_JoinEnv * _T53;
  struct Cyc_CfFlowInfo_FlowEnv * _T54;
  struct Cyc_CfFlowInfo_JoinEnv * _T55;
  struct Cyc_Dict_Dict _T56;
  void * _T57;
  struct Cyc_CfFlowInfo_JoinEnv * _T58;
  struct Cyc_CfFlowInfo_FlowEnv * _T59;
  void * _T5A;
  struct Cyc_CfFlowInfo_JoinEnv * _T5B;
  struct Cyc_CfFlowInfo_FlowEnv * _T5C;
  void * _T5D;
  void * _T5E;
  struct Cyc_CfFlowInfo_JoinEnv * _T5F;
  struct Cyc_CfFlowInfo_EscPile * _T60;
  struct Cyc_CfFlowInfo_Place * _T61;
  void * _T62;
  int * _T63;
  unsigned int _T64;
  void * _T65;
  struct Cyc_CfFlowInfo_JoinEnv * _T66;
  struct Cyc_CfFlowInfo_EscPile * _T67;
  struct Cyc_CfFlowInfo_Place * _T68;
  struct Cyc_CfFlowInfo_JoinEnv * _T69;
  struct Cyc_CfFlowInfo_FlowEnv * _T6A;
  struct Cyc_CfFlowInfo_JoinEnv * _T6B;
  struct Cyc_Dict_Dict _T6C;
  void * _T6D;
  struct Cyc_CfFlowInfo_JoinEnv * _T6E;
  struct Cyc_CfFlowInfo_FlowEnv * _T6F;
  void * _T70;
  struct Cyc_CfFlowInfo_JoinEnv * _T71;
  struct Cyc_CfFlowInfo_FlowEnv * _T72;
  void * _T73;
  void * _T74;
  void * _T75;
  struct Cyc_CfFlowInfo_JoinEnv * _T76;
  struct Cyc_CfFlowInfo_FlowEnv * _T77;
  struct Cyc_CfFlowInfo_JoinEnv * _T78;
  struct Cyc_Dict_Dict _T79;
  void * _T7A;
  struct Cyc_CfFlowInfo_JoinEnv * _T7B;
  struct Cyc_CfFlowInfo_FlowEnv * _T7C;
  void * _T7D;
  struct Cyc_CfFlowInfo_JoinEnv * _T7E;
  struct Cyc_CfFlowInfo_FlowEnv * _T7F;
  void * _T80;
  void * _T81;
  int * _T82;
  unsigned int _T83;
  void * _T84;
  void * _T85;
  void * _T86;
  void * _T87;
  struct Cyc_CfFlowInfo_UniquePtr_CfFlowInfo_AbsRVal_struct * _T88;
  void * _T89;
  void * _T8A;
  void * _T8B;
  struct Cyc_CfFlowInfo_JoinEnv * _T8C;
  struct Cyc_CfFlowInfo_FlowEnv * _T8D;
  struct Cyc_CfFlowInfo_JoinEnv * _T8E;
  struct Cyc_Dict_Dict _T8F;
  void * _T90;
  struct Cyc_CfFlowInfo_JoinEnv * _T91;
  struct Cyc_CfFlowInfo_FlowEnv * _T92;
  void * _T93;
  struct Cyc_CfFlowInfo_JoinEnv * _T94;
  struct Cyc_CfFlowInfo_FlowEnv * _T95;
  void * _T96;
  void * _T97;
  int * _T98;
  int _T99;
  void * _T9A;
  struct Cyc_CfFlowInfo_JoinEnv * _T9B;
  struct Cyc_CfFlowInfo_EscPile * _T9C;
  struct Cyc_CfFlowInfo_Place * _T9D;
  void * _T9E;
  int * _T9F;
  int _TA0;
  void * _TA1;
  int * _TA2;
  int _TA3;
  void * _TA4;
  struct Cyc_CfFlowInfo_UnionRInfo _TA5;
  struct Cyc_CfFlowInfo_UnionRInfo _TA6;
  void * _TA7;
  struct Cyc_CfFlowInfo_UnionRInfo _TA8;
  struct Cyc_CfFlowInfo_UnionRInfo _TA9;
  struct _fat_ptr _TAA;
  struct _fat_ptr _TAB;
  void * * _TAC;
  unsigned int _TAD;
  struct Cyc_CfFlowInfo_JoinEnv * _TAE;
  long _TAF;
  unsigned int _TB0;
  void * (* _TB1)(struct Cyc_CfFlowInfo_JoinEnv *,int,void *,void *);
  struct Cyc_CfFlowInfo_JoinEnv * _TB2;
  struct _fat_ptr _TB3;
  unsigned int _TB4;
  int _TB5;
  unsigned char * _TB6;
  void * * _TB7;
  void * _TB8;
  struct _fat_ptr _TB9;
  unsigned int _TBA;
  int _TBB;
  unsigned char * _TBC;
  void * * _TBD;
  void * _TBE;
  unsigned int _TBF;
  struct Cyc_CfFlowInfo_JoinEnv * _TC0;
  void * _TC1;
  struct _fat_ptr _TC2;
  unsigned int _TC3;
  int _TC4;
  unsigned char * _TC5;
  void * * _TC6;
  void * _TC7;
  struct _fat_ptr _TC8;
  unsigned int _TC9;
  int _TCA;
  unsigned char * _TCB;
  void * * _TCC;
  void * _TCD;
  int _TCE;
  unsigned int _TCF;
  struct _fat_ptr _TD0;
  unsigned int _TD1;
  struct _fat_ptr _TD2;
  int _TD3;
  unsigned char * _TD4;
  void * * _TD5;
  void * _TD6;
  struct _fat_ptr _TD7;
  unsigned char * _TD8;
  void * * _TD9;
  void * * _TDA;
  int _TDB;
  void * _TDC;
  long _TDD;
  long _TDE;
  void * _TDF;
  int _TE0;
  unsigned int _TE1;
  struct _fat_ptr _TE2;
  unsigned int _TE3;
  struct _fat_ptr _TE4;
  int _TE5;
  unsigned char * _TE6;
  void * * _TE7;
  void * _TE8;
  struct _fat_ptr _TE9;
  int _TEA;
  unsigned char * _TEB;
  void * * _TEC;
  void * _TED;
  long _TEE;
  long _TEF;
  void * _TF0;
  struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct * _TF1;
  void * _TF2;
  struct Cyc_CfFlowInfo_JoinEnv * _TF3;
  struct Cyc_CfFlowInfo_FlowEnv * _TF4;
  struct Cyc_CfFlowInfo_JoinEnv * _TF5;
  struct Cyc_Dict_Dict _TF6;
  void * _TF7;
  struct Cyc_CfFlowInfo_JoinEnv * _TF8;
  struct Cyc_CfFlowInfo_FlowEnv * _TF9;
  struct Cyc_CfFlowInfo_JoinEnv * _TFA;
  struct Cyc_Dict_Dict _TFB;
  void * _TFC;
  struct _tuple13 _TFD;
  void * _TFE;
  int * _TFF;
  int _T100;
  void * _T101;
  int * _T102;
  int _T103;
  struct _tuple20 _T104;
  enum Cyc_CfFlowInfo_InitLevel _T105;
  enum Cyc_CfFlowInfo_InitLevel _T106;
  struct Cyc_CfFlowInfo_JoinEnv * _T107;
  struct Cyc_CfFlowInfo_FlowEnv * _T108;
  void * _T109;
  struct Cyc_CfFlowInfo_JoinEnv * _T10A;
  struct Cyc_CfFlowInfo_FlowEnv * _T10B;
  void * _T10C;
  struct _tuple20 _T10D;
  enum Cyc_CfFlowInfo_InitLevel _T10E;
  enum Cyc_CfFlowInfo_InitLevel _T10F;
  struct Cyc_CfFlowInfo_JoinEnv * _T110;
  struct Cyc_CfFlowInfo_FlowEnv * _T111;
  void * _T112;
  struct Cyc_CfFlowInfo_JoinEnv * _T113;
  struct Cyc_CfFlowInfo_FlowEnv * _T114;
  void * _T115;
  if (r1 != r2) { goto _TL14E;
  }
  _T0 = r1;
  return _T0;
  _TL14E: { struct _tuple13 _T116;
    _T116.f0 = r1;
    _T116.f1 = r2;
    _T1 = _T116;
  }{ struct _tuple13 _T116 = _T1;
    struct _fat_ptr _T117;
    struct _fat_ptr _T118;
    struct Cyc_CfFlowInfo_Place * _T119;
    int _T11A;
    long _T11B;
    struct Cyc_Absyn_Exp * _T11C;
    int _T11D;
    long _T11E;
    void * _T11F;
    void * _T120;
    void * _T121;
    void * _T122;
    _T2 = _T116.f0;
    _T3 = (int *)_T2;
    _T4 = *_T3;
    if (_T4 != 8) { goto _TL150;
    }
    _T5 = _T116.f1;
    _T6 = (int *)_T5;
    _T7 = *_T6;
    if (_T7 != 8) { goto _TL152;
    }
    _T8 = _T116.f0;
    { struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct * _T123 = (struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct *)_T8;
      _T122 = _T123->f1;
      _T9 = _T123->f2;
      _T121 = (void *)_T9;
    }_TA = _T116.f1;
    { struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct * _T123 = (struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct *)_TA;
      _T120 = _T123->f1;
      _TB = _T123->f2;
      _T11F = (void *)_TB;
    }{ struct Cyc_Absyn_Vardecl * n1 = _T122;
      void * r1 = _T121;
      struct Cyc_Absyn_Vardecl * n2 = _T120;
      void * r2 = _T11F;
      if (n1 != n2) { goto _TL154;
      }
      { struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct * _T123 = _cycalloc(sizeof(struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct));
	_T123->tag = 8;
	_T123->f1 = n1;
	_T123->f2 = Cyc_CfFlowInfo_join_absRval(env,a,r1,r2);
	_TC = (struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct *)_T123;
      }_TD = (void *)_TC;
      return _TD;
      _TL154: _TE = Cyc_CfFlowInfo_join_absRval(env,a,r1,r2);
      return _TE;
    }_TL152: _TF = _T116.f0;
    { struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct * _T123 = (struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct *)_TF;
      _T122 = _T123->f1;
      _T10 = _T123->f2;
      _T121 = (void *)_T10;
    }{ struct Cyc_Absyn_Vardecl * n1 = _T122;
      void * r1 = _T121;
      _T11 = Cyc_CfFlowInfo_join_absRval(env,a,r1,r2);
      return _T11;
    }_TL150: _T12 = _T116.f1;
    _T13 = (int *)_T12;
    _T14 = *_T13;
    if (_T14 != 8) { goto _TL156;
    }
    _T15 = _T116.f1;
    { struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct * _T123 = (struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct *)_T15;
      _T122 = _T123->f1;
      _T16 = _T123->f2;
      _T121 = (void *)_T16;
    }{ struct Cyc_Absyn_Vardecl * n2 = _T122;
      void * r2 = _T121;
      _T17 = Cyc_CfFlowInfo_join_absRval(env,a,r1,r2);
      return _T17;
    }_TL156: _T18 = _T116.f0;
    _T19 = (int *)_T18;
    _T1A = *_T19;
    if (_T1A != 7) { goto _TL158;
    }
    _T1B = _T116.f1;
    _T1C = (int *)_T1B;
    _T1D = *_T1C;
    if (_T1D != 7) { goto _TL15A;
    }
    _T1E = _T116.f0;
    { struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct * _T123 = (struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct *)_T1E;
      _T122 = _T123->f1;
      _T11E = _T123->f2;
      _T1F = _T123->f3;
      _T121 = (void *)_T1F;
      _T11D = _T123->f4;
    }_T20 = _T116.f1;
    { struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct * _T123 = (struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct *)_T20;
      _T11C = _T123->f1;
      _T11B = _T123->f2;
      _T21 = _T123->f3;
      _T120 = (void *)_T21;
      _T11A = _T123->f4;
    }{ struct Cyc_Absyn_Exp * e1 = _T122;
      int i1 = _T11E;
      void * r1 = _T121;
      long l1 = _T11D;
      struct Cyc_Absyn_Exp * e2 = _T11C;
      int i2 = _T11B;
      void * r2 = _T120;
      long l2 = _T11A;
      if (e1 != e2) { goto _TL15C;
      }
      { struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct * _T123 = _cycalloc(sizeof(struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct));
	_T123->tag = 7;
	_T123->f1 = e1;
	if (i1 <= i2) { goto _TL15E;
	}
	_T123->f2 = i1;
	goto _TL15F;
	_TL15E: _T123->f2 = i2;
	_TL15F: _T123->f3 = Cyc_CfFlowInfo_join_absRval(env,a,r1,r2);
	_T24 = l1;
	if (! _T24) { goto _TL160;
	}
	_T23 = l2;
	goto _TL161;
	_TL160: _T23 = 0;
	_TL161: _T123->f4 = _T23;
	_T22 = (struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct *)_T123;
      }_T25 = (void *)_T22;
      return _T25;
      _TL15C: { struct Cyc_CfFlowInfo_Place * _T123;
	_T26 = r1;
	_T27 = (int *)_T26;
	_T28 = *_T27;
	if (_T28 != 4) { goto _TL162;
	}
	_T29 = r1;
	{ struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct * _T124 = (struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct *)_T29;
	  _T123 = _T124->f1;
	}{ struct Cyc_CfFlowInfo_Place * p = _T123;
	  _T2A = env;
	  _T2B = _T2A->pile;
	  _T2C = p;
	  Cyc_CfFlowInfo_add_place(_T2B,_T2C);
	  goto _LL21;
	}_TL162: goto _LL21;
	_LL21: ;
      }{ struct Cyc_CfFlowInfo_Place * _T123;
	_T2D = r2;
	_T2E = (int *)_T2D;
	_T2F = *_T2E;
	if (_T2F != 4) { goto _TL164;
	}
	_T30 = r2;
	{ struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct * _T124 = (struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct *)_T30;
	  _T123 = _T124->f1;
	}{ struct Cyc_CfFlowInfo_Place * p = _T123;
	  _T31 = env;
	  _T32 = _T31->pile;
	  _T33 = p;
	  Cyc_CfFlowInfo_add_place(_T32,_T33);
	  goto _LL26;
	}_TL164: goto _LL26;
	_LL26: ;
      }goto _LL0;
    }_TL15A: _T34 = _T116.f0;
    { struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct * _T123 = (struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct *)_T34;
      _T122 = _T123->f1;
      _T11E = _T123->f2;
      _T35 = _T123->f3;
      _T121 = (void *)_T35;
      _T11D = _T123->f4;
    }{ struct Cyc_Absyn_Exp * e1 = _T122;
      int i1 = _T11E;
      void * r1 = _T121;
      long l1 = _T11D;
      { struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct * _T123 = _cycalloc(sizeof(struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct));
	_T123->tag = 7;
	_T123->f1 = e1;
	_T123->f2 = i1;
	_T123->f3 = Cyc_CfFlowInfo_join_absRval(env,a,r1,r2);
	_T123->f4 = l1;
	_T36 = (struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct *)_T123;
      }_T37 = (void *)_T36;
      return _T37;
    }_TL158: _T38 = _T116.f1;
    _T39 = (int *)_T38;
    _T3A = *_T39;
    if (_T3A != 7) { goto _TL166;
    }
    _T3B = _T116.f1;
    { struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct * _T123 = (struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct *)_T3B;
      _T122 = _T123->f1;
      _T11E = _T123->f2;
      _T3C = _T123->f3;
      _T121 = (void *)_T3C;
      _T11D = _T123->f4;
    }{ struct Cyc_Absyn_Exp * e2 = _T122;
      int i2 = _T11E;
      void * r2 = _T121;
      long l2 = _T11D;
      { struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct * _T123 = _cycalloc(sizeof(struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct));
	_T123->tag = 7;
	_T123->f1 = e2;
	_T123->f2 = i2;
	_T123->f3 = Cyc_CfFlowInfo_join_absRval(env,a,r1,r2);
	_T123->f4 = l2;
	_T3D = (struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct *)_T123;
      }_T3E = (void *)_T3D;
      return _T3E;
    }_TL166: _T3F = _T116.f0;
    _T40 = (int *)_T3F;
    _T41 = *_T40;
    switch (_T41) {
    case 4: 
      _T42 = _T116.f1;
      _T43 = (int *)_T42;
      _T44 = *_T43;
      switch (_T44) {
      case 4: 
	_T45 = _T116.f0;
	{ struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct * _T123 = (struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct *)_T45;
	  _T122 = _T123->f1;
	}_T46 = _T116.f1;
	{ struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct * _T123 = (struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct *)_T46;
	  _T121 = _T123->f1;
	}{ struct Cyc_CfFlowInfo_Place * p1 = _T122;
	  struct Cyc_CfFlowInfo_Place * p2 = _T121;
	  _T47 = Cyc_CfFlowInfo_place_cmp(p1,p2);
	  if (_T47 != 0) { goto _TL16A;
	  }
	  _T48 = r1;
	  return _T48;
	  _TL16A: _T49 = env;
	  _T4A = _T49->pile;
	  _T4B = p1;
	  Cyc_CfFlowInfo_add_place(_T4A,_T4B);
	  _T4C = env;
	  _T4D = _T4C->pile;
	  _T4E = p2;
	  Cyc_CfFlowInfo_add_place(_T4D,_T4E);
	  goto _LL0;
	}
      case 1: 
	_T4F = _T116.f0;
	{ struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct * _T123 = (struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct *)_T4F;
	  _T122 = _T123->f1;
	}{ struct Cyc_CfFlowInfo_Place * p = _T122;
	  _T50 = env;
	  _T51 = _T50->pile;
	  _T52 = p;
	  Cyc_CfFlowInfo_add_place(_T51,_T52);
	  _T53 = env;
	  _T54 = _T53->fenv;
	  _T55 = env;
	  _T56 = _T55->d1;
	  _T57 = r1;
	  { enum Cyc_CfFlowInfo_InitLevel _T123 = Cyc_CfFlowInfo_initlevel(_T54,
									   _T56,
									   _T57);
	    if (_T123 != Cyc_CfFlowInfo_AllIL) { goto _TL16C;
	    }
	    _T58 = env;
	    _T59 = _T58->fenv;
	    _T5A = _T59->notzeroall;
	    return _T5A;
	    _TL16C: _T5B = env;
	    _T5C = _T5B->fenv;
	    _T5D = _T5C->unknown_none;
	    return _T5D;
	    ;
	  }
	}
      default: 
	_T5E = _T116.f0;
	{ struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct * _T123 = (struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct *)_T5E;
	  _T122 = _T123->f1;
	}{ struct Cyc_CfFlowInfo_Place * p = _T122;
	  _T5F = env;
	  _T60 = _T5F->pile;
	  _T61 = p;
	  Cyc_CfFlowInfo_add_place(_T60,_T61);
	  goto _LL0;
	}
      }
      ;
    case 1: 
      _T62 = _T116.f1;
      _T63 = (int *)_T62;
      _T64 = *_T63;
      switch (_T64) {
      case 4: 
	_T65 = _T116.f1;
	{ struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct * _T123 = (struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct *)_T65;
	  _T122 = _T123->f1;
	}{ struct Cyc_CfFlowInfo_Place * p = _T122;
	  _T66 = env;
	  _T67 = _T66->pile;
	  _T68 = p;
	  Cyc_CfFlowInfo_add_place(_T67,_T68);
	  _T69 = env;
	  _T6A = _T69->fenv;
	  _T6B = env;
	  _T6C = _T6B->d2;
	  _T6D = r2;
	  { enum Cyc_CfFlowInfo_InitLevel _T123 = Cyc_CfFlowInfo_initlevel(_T6A,
									   _T6C,
									   _T6D);
	    if (_T123 != Cyc_CfFlowInfo_AllIL) { goto _TL16F;
	    }
	    _T6E = env;
	    _T6F = _T6E->fenv;
	    _T70 = _T6F->notzeroall;
	    return _T70;
	    _TL16F: _T71 = env;
	    _T72 = _T71->fenv;
	    _T73 = _T72->unknown_none;
	    return _T73;
	    ;
	  }
	}
      case 5: 
	_T74 = _T116.f1;
	{ struct Cyc_CfFlowInfo_UniquePtr_CfFlowInfo_AbsRVal_struct * _T123 = (struct Cyc_CfFlowInfo_UniquePtr_CfFlowInfo_AbsRVal_struct *)_T74;
	  _T75 = _T123->f1;
	  _T122 = (void *)_T75;
	}{ void * r2 = _T122;
	  _T76 = env;
	  _T77 = _T76->fenv;
	  _T78 = env;
	  _T79 = _T78->d2;
	  _T7A = r2;
	  { enum Cyc_CfFlowInfo_InitLevel _T123 = Cyc_CfFlowInfo_initlevel(_T77,
									   _T79,
									   _T7A);
	    if (_T123 != Cyc_CfFlowInfo_AllIL) { goto _TL171;
	    }
	    _T7B = env;
	    _T7C = _T7B->fenv;
	    _T7D = _T7C->notzeroall;
	    return _T7D;
	    _TL171: _T7E = env;
	    _T7F = _T7E->fenv;
	    _T80 = _T7F->unknown_none;
	    return _T80;
	    ;
	  }
	}
      default: 
	goto _LL1F;
      }
      ;
    case 5: 
      _T81 = _T116.f1;
      _T82 = (int *)_T81;
      _T83 = *_T82;
      switch (_T83) {
      case 5: 
	_T84 = _T116.f0;
	{ struct Cyc_CfFlowInfo_UniquePtr_CfFlowInfo_AbsRVal_struct * _T123 = (struct Cyc_CfFlowInfo_UniquePtr_CfFlowInfo_AbsRVal_struct *)_T84;
	  _T85 = _T123->f1;
	  _T122 = (void *)_T85;
	}_T86 = _T116.f1;
	{ struct Cyc_CfFlowInfo_UniquePtr_CfFlowInfo_AbsRVal_struct * _T123 = (struct Cyc_CfFlowInfo_UniquePtr_CfFlowInfo_AbsRVal_struct *)_T86;
	  _T87 = _T123->f1;
	  _T121 = (void *)_T87;
	}{ void * r1 = _T122;
	  void * r2 = _T121;
	  { struct Cyc_CfFlowInfo_UniquePtr_CfFlowInfo_AbsRVal_struct * _T123 = _cycalloc(sizeof(struct Cyc_CfFlowInfo_UniquePtr_CfFlowInfo_AbsRVal_struct));
	    _T123->tag = 5;
	    _T123->f1 = Cyc_CfFlowInfo_join_absRval(env,a,r1,r2);
	    _T88 = (struct Cyc_CfFlowInfo_UniquePtr_CfFlowInfo_AbsRVal_struct *)_T123;
	  }_T89 = (void *)_T88;
	  return _T89;
	}
      case 1: 
	_T8A = _T116.f0;
	{ struct Cyc_CfFlowInfo_UniquePtr_CfFlowInfo_AbsRVal_struct * _T123 = (struct Cyc_CfFlowInfo_UniquePtr_CfFlowInfo_AbsRVal_struct *)_T8A;
	  _T8B = _T123->f1;
	  _T122 = (void *)_T8B;
	}{ void * r1 = _T122;
	  _T8C = env;
	  _T8D = _T8C->fenv;
	  _T8E = env;
	  _T8F = _T8E->d1;
	  _T90 = r1;
	  { enum Cyc_CfFlowInfo_InitLevel _T123 = Cyc_CfFlowInfo_initlevel(_T8D,
									   _T8F,
									   _T90);
	    if (_T123 != Cyc_CfFlowInfo_AllIL) { goto _TL174;
	    }
	    _T91 = env;
	    _T92 = _T91->fenv;
	    _T93 = _T92->notzeroall;
	    return _T93;
	    _TL174: _T94 = env;
	    _T95 = _T94->fenv;
	    _T96 = _T95->unknown_none;
	    return _T96;
	    ;
	  }
	}
      case 4: 
	goto _LL1B;
      default: 
	goto _LL1F;
      }
      ;
    default: 
      _T97 = _T116.f1;
      _T98 = (int *)_T97;
      _T99 = *_T98;
      if (_T99 != 4) { goto _TL176;
      }
      _LL1B: _T9A = _T116.f1;
      { struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct * _T123 = (struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct *)_T9A;
	_T119 = _T123->f1;
      }{ struct Cyc_CfFlowInfo_Place * p = _T119;
	_T9B = env;
	_T9C = _T9B->pile;
	_T9D = p;
	Cyc_CfFlowInfo_add_place(_T9C,_T9D);
	goto _LL0;
      }_TL176: _T9E = _T116.f0;
      _T9F = (int *)_T9E;
      _TA0 = *_T9F;
      if (_TA0 != 6) { goto _TL178;
      }
      _TA1 = _T116.f1;
      _TA2 = (int *)_TA1;
      _TA3 = *_TA2;
      if (_TA3 != 6) { goto _TL17A;
      }
      _TA4 = _T116.f0;
      { struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct * _T123 = (struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct *)_TA4;
	_TA5 = _T123->f1;
	_T11E = _TA5.is_union;
	_TA6 = _T123->f1;
	_T11D = _TA6.fieldnum;
	_T118 = _T123->f2;
      }_TA7 = _T116.f1;
      { struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct * _T123 = (struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct *)_TA7;
	_TA8 = _T123->f1;
	_T11B = _TA8.is_union;
	_TA9 = _T123->f1;
	_T11A = _TA9.fieldnum;
	_T117 = _T123->f2;
      }{ long is_union1 = _T11E;
	int field_no1 = _T11D;
	struct _fat_ptr d1 = _T118;
	long is_union2 = _T11B;
	int field_no2 = _T11A;
	struct _fat_ptr d2 = _T117;
	_TAB = d1;
	{ unsigned int _T123 = _get_fat_size(_TAB,sizeof(void *));
	  _TAD = _check_times(_T123,sizeof(void *));
	  { void * * _T124 = _cycalloc(_TAD);
	    { unsigned int _T125 = _T123;
	      unsigned int i;
	      i = 0;
	      _TL17F: if (i < _T125) { goto _TL17D;
	      }else { goto _TL17E;
	      }
	      _TL17D: _TAE = env;
	      _TAF = _TAE->is_try_flow;
	      if (! _TAF) { goto _TL180;
	      }
	      _TB0 = i;
	      { void * (* _T126)(struct Cyc_CfFlowInfo_JoinEnv *,int,void *,
				 void *) = (void * (*)(struct Cyc_CfFlowInfo_JoinEnv *,
						       int,void *,void *))Cyc_CfFlowInfo_join_absRval_tryflow;
		_TB1 = _T126;
	      }_TB2 = env;
	      _TB3 = d1;
	      _TB4 = i;
	      _TB5 = (int)_TB4;
	      _TB6 = _check_fat_subscript(_TB3,sizeof(void *),_TB5);
	      _TB7 = (void * *)_TB6;
	      _TB8 = *_TB7;
	      _TB9 = d2;
	      _TBA = i;
	      _TBB = (int)_TBA;
	      _TBC = _check_fat_subscript(_TB9,sizeof(void *),_TBB);
	      _TBD = (void * *)_TBC;
	      _TBE = *_TBD;
	      _T124[_TB0] = _TB1(_TB2,0,_TB8,_TBE);
	      goto _TL181;
	      _TL180: _TBF = i;
	      _TC0 = env;
	      _TC1 = a;
	      _TC2 = d1;
	      _TC3 = i;
	      _TC4 = (int)_TC3;
	      _TC5 = _check_fat_subscript(_TC2,sizeof(void *),_TC4);
	      _TC6 = (void * *)_TC5;
	      _TC7 = *_TC6;
	      _TC8 = d2;
	      _TC9 = i;
	      _TCA = (int)_TC9;
	      _TCB = _check_fat_subscript(_TC8,sizeof(void *),_TCA);
	      _TCC = (void * *)_TCB;
	      _TCD = *_TCC;
	      _T124[_TBF] = Cyc_CfFlowInfo_join_absRval(_TC0,_TC1,_TC7,_TCD);
	      _TL181: i = i + 1;
	      goto _TL17F;
	      _TL17E: ;
	    }_TAC = (void * *)_T124;
	  }_TAA = _tag_fat(_TAC,sizeof(void *),_T123);
	}{ struct _fat_ptr new_d = _TAA;
	  long change = 0;
	  { int i = 0;
	    _TL185: _TCE = i;
	    _TCF = (unsigned int)_TCE;
	    _TD0 = d1;
	    _TD1 = _get_fat_size(_TD0,sizeof(void *));
	    if (_TCF < _TD1) { goto _TL183;
	    }else { goto _TL184;
	    }
	    _TL183: _TD2 = new_d;
	    _TD3 = i;
	    _TD4 = _check_fat_subscript(_TD2,sizeof(void *),_TD3);
	    _TD5 = (void * *)_TD4;
	    _TD6 = *_TD5;
	    _TD7 = d1;
	    _TD8 = _TD7.curr;
	    _TD9 = (void * *)_TD8;
	    _TDA = _check_null(_TD9);
	    _TDB = i;
	    _TDC = _TDA[_TDB];
	    if (_TD6 == _TDC) { goto _TL186;
	    }
	    change = 1;
	    goto _TL184;
	    _TL186: i = i + 1;
	    goto _TL185;
	    _TL184: ;
	  }_TDD = change;
	  if (_TDD) { goto _TL188;
	  }else { goto _TL18A;
	  }
	  _TL18A: _TDE = is_union1;
	  if (_TDE) { goto _TL18B;
	  }else { goto _TL18D;
	  }
	  _TL18D: _TDF = r1;
	  return _TDF;
	  _TL18B: new_d = d1;
	  goto _TL189;
	  _TL188: change = 0;
	  { int i = 0;
	    _TL191: _TE0 = i;
	    _TE1 = (unsigned int)_TE0;
	    _TE2 = d1;
	    _TE3 = _get_fat_size(_TE2,sizeof(void *));
	    if (_TE1 < _TE3) { goto _TL18F;
	    }else { goto _TL190;
	    }
	    _TL18F: _TE4 = new_d;
	    _TE5 = i;
	    _TE6 = _check_fat_subscript(_TE4,sizeof(void *),_TE5);
	    _TE7 = (void * *)_TE6;
	    _TE8 = *_TE7;
	    _TE9 = d2;
	    _TEA = i;
	    _TEB = _check_fat_subscript(_TE9,sizeof(void *),_TEA);
	    _TEC = (void * *)_TEB;
	    _TED = *_TEC;
	    if (_TE8 == _TED) { goto _TL192;
	    }
	    change = 1;
	    goto _TL190;
	    _TL192: i = i + 1;
	    goto _TL191;
	    _TL190: ;
	  }_TEE = change;
	  if (_TEE) { goto _TL194;
	  }else { goto _TL196;
	  }
	  _TL196: _TEF = is_union1;
	  if (_TEF) { goto _TL197;
	  }else { goto _TL199;
	  }
	  _TL199: _TF0 = r2;
	  return _TF0;
	  _TL197: new_d = d2;
	  goto _TL195;
	  _TL194: _TL195: _TL189: { struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct * _T123 = _cycalloc(sizeof(struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct));
	    _T123->tag = 6;
	    (_T123->f1).is_union = is_union1;
	    if (field_no1 != field_no2) { goto _TL19A;
	    }
	    (_T123->f1).fieldnum = field_no1;
	    goto _TL19B;
	    _TL19A: (_T123->f1).fieldnum = - 1;
	    _TL19B: _T123->f2 = new_d;
	    _TF1 = (struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct *)_T123;
	  }_TF2 = (void *)_TF1;
	  return _TF2;
	}
      }_TL17A: goto _LL1F;
      _TL178: _LL1F: goto _LL0;
    }
    _LL0: ;
  }_TF3 = env;
  _TF4 = _TF3->fenv;
  _TF5 = env;
  _TF6 = _TF5->d1;
  _TF7 = r1;
  { enum Cyc_CfFlowInfo_InitLevel il1 = Cyc_CfFlowInfo_initlevel(_TF4,_TF6,
								 _TF7);
    _TF8 = env;
    _TF9 = _TF8->fenv;
    _TFA = env;
    _TFB = _TFA->d2;
    _TFC = r2;
    { enum Cyc_CfFlowInfo_InitLevel il2 = Cyc_CfFlowInfo_initlevel(_TF9,_TFB,
								   _TFC);
      { struct _tuple13 _T116;
	_T116.f0 = r1;
	_T116.f1 = r2;
	_TFD = _T116;
      }{ struct _tuple13 _T116 = _TFD;
	_TFE = _T116.f0;
	_TFF = (int *)_TFE;
	_T100 = *_TFF;
	if (_T100 != 3) { goto _TL19C;
	}
	goto _LL43;
	_TL19C: _T101 = _T116.f1;
	_T102 = (int *)_T101;
	_T103 = *_T102;
	if (_T103 != 3) { goto _TL19E;
	}
	_LL43: { struct _tuple20 _T117;
	  _T117.f0 = il1;
	  _T117.f1 = il2;
	  _T104 = _T117;
	}{ struct _tuple20 _T117 = _T104;
	  _T105 = _T117.f1;
	  if (_T105 != Cyc_CfFlowInfo_NoneIL) { goto _TL1A0;
	  }
	  goto _LL4A;
	  _TL1A0: _T106 = _T117.f0;
	  if (_T106 != Cyc_CfFlowInfo_NoneIL) { goto _TL1A2;
	  }
	  _LL4A: _T107 = env;
	  _T108 = _T107->fenv;
	  _T109 = _T108->esc_none;
	  return _T109;
	  _TL1A2: _T10A = env;
	  _T10B = _T10A->fenv;
	  _T10C = _T10B->esc_all;
	  return _T10C;
	  ;
	}goto _TL19F;
	_TL19E: { struct _tuple20 _T117;
	  _T117.f0 = il1;
	  _T117.f1 = il2;
	  _T10D = _T117;
	}{ struct _tuple20 _T117 = _T10D;
	  _T10E = _T117.f1;
	  if (_T10E != Cyc_CfFlowInfo_NoneIL) { goto _TL1A4;
	  }
	  goto _LL51;
	  _TL1A4: _T10F = _T117.f0;
	  if (_T10F != Cyc_CfFlowInfo_NoneIL) { goto _TL1A6;
	  }
	  _LL51: _T110 = env;
	  _T111 = _T110->fenv;
	  _T112 = _T111->unknown_none;
	  return _T112;
	  _TL1A6: _T113 = env;
	  _T114 = _T113->fenv;
	  _T115 = _T114->unknown_all;
	  return _T115;
	  ;
	}_TL19F: ;
      }
    }
  }
}
 struct _tuple21 {
  union Cyc_CfFlowInfo_FlowInfo f0;
  union Cyc_CfFlowInfo_FlowInfo f1;
};
union Cyc_CfFlowInfo_FlowInfo Cyc_CfFlowInfo_join_tryflow(struct Cyc_CfFlowInfo_FlowEnv * fenv,
							  union Cyc_CfFlowInfo_FlowInfo newflow,
							  union Cyc_CfFlowInfo_FlowInfo oldflow) {
  struct _tuple21 _T0;
  union Cyc_CfFlowInfo_FlowInfo _T1;
  struct _union_FlowInfo_BottomFL _T2;
  unsigned int _T3;
  union Cyc_CfFlowInfo_FlowInfo _T4;
  union Cyc_CfFlowInfo_FlowInfo _T5;
  struct _union_FlowInfo_BottomFL _T6;
  unsigned int _T7;
  union Cyc_CfFlowInfo_FlowInfo _T8;
  union Cyc_CfFlowInfo_FlowInfo _T9;
  struct _union_FlowInfo_ReachableFL _TA;
  union Cyc_CfFlowInfo_FlowInfo _TB;
  struct _union_FlowInfo_ReachableFL _TC;
  struct Cyc_Dict_Dict _TD;
  const struct Cyc_Dict_T * _TE;
  struct Cyc_Dict_Dict _TF;
  const struct Cyc_Dict_T * _T10;
  union Cyc_CfFlowInfo_FlowInfo _T11;
  long _T12;
  union Cyc_CfFlowInfo_FlowInfo _T13;
  long _T14;
  union Cyc_CfFlowInfo_FlowInfo _T15;
  struct Cyc_CfFlowInfo_JoinEnv _T16;
  struct Cyc_CfFlowInfo_EscPile * _T17;
  struct Cyc_Dict_Dict (* _T18)(void * (*)(struct Cyc_CfFlowInfo_JoinEnv *,
					   void *,void *,void *),struct Cyc_CfFlowInfo_JoinEnv *,
				struct Cyc_Dict_Dict,struct Cyc_Dict_Dict);
  struct Cyc_Dict_Dict (* _T19)(void * (*)(void *,void *,void *,void *),void *,
				struct Cyc_Dict_Dict,struct Cyc_Dict_Dict);
  struct Cyc_CfFlowInfo_JoinEnv * _T1A;
  struct Cyc_CfFlowInfo_JoinEnv * _T1B;
  struct Cyc_Dict_Dict _T1C;
  struct Cyc_Dict_Dict _T1D;
  struct Cyc_CfFlowInfo_FlowEnv * _T1E;
  struct Cyc_CfFlowInfo_JoinEnv _T1F;
  struct Cyc_CfFlowInfo_EscPile * _T20;
  struct Cyc_Dict_Dict _T21;
  struct Cyc_Dict_Dict _T22;
  union Cyc_CfFlowInfo_FlowInfo _T23;
  { struct _tuple21 _T24;
    _T24.f0 = newflow;
    _T24.f1 = oldflow;
    _T0 = _T24;
  }{ struct _tuple21 _T24 = _T0;
    struct Cyc_Dict_Dict _T25;
    struct Cyc_Dict_Dict _T26;
    _T1 = _T24.f0;
    _T2 = _T1.BottomFL;
    _T3 = _T2.tag;
    if (_T3 != 1) { goto _TL1A8;
    }
    _T4 = oldflow;
    return _T4;
    _TL1A8: _T5 = _T24.f1;
    _T6 = _T5.BottomFL;
    _T7 = _T6.tag;
    if (_T7 != 1) { goto _TL1AA;
    }
    _T8 = newflow;
    return _T8;
    _TL1AA: _T9 = _T24.f0;
    _TA = _T9.ReachableFL;
    _T26 = _TA.val;
    _TB = _T24.f1;
    _TC = _TB.ReachableFL;
    _T25 = _TC.val;
    { struct Cyc_Dict_Dict d1 = _T26;
      struct Cyc_Dict_Dict d2 = _T25;
      _TD = d1;
      _TE = _TD.t;
      _TF = d2;
      _T10 = _TF.t;
      if (_TE != _T10) { goto _TL1AC;
      }
      _T11 = newflow;
      return _T11;
      _TL1AC: _T12 = Cyc_CfFlowInfo_flow_lessthan_approx(newflow,oldflow);
      if (! _T12) { goto _TL1AE;
      }
      _T13 = oldflow;
      return _T13;
      _TL1AE: _T14 = Cyc_CfFlowInfo_flow_lessthan_approx(oldflow,newflow);
      if (! _T14) { goto _TL1B0;
      }
      _T15 = newflow;
      return _T15;
      _TL1B0: { struct Cyc_CfFlowInfo_JoinEnv _T27;
	_T27.fenv = fenv;
	{ struct Cyc_CfFlowInfo_EscPile * _T28 = _cycalloc(sizeof(struct Cyc_CfFlowInfo_EscPile));
	  _T28->places = 0;
	  _T17 = (struct Cyc_CfFlowInfo_EscPile *)_T28;
	}_T27.pile = _T17;
	_T27.d1 = d1;
	_T27.d2 = d2;
	_T27.is_try_flow = 1;
	_T16 = _T27;
      }{ struct Cyc_CfFlowInfo_JoinEnv env = _T16;
	_T19 = Cyc_Dict_intersect_c;
	{ struct Cyc_Dict_Dict (* _T27)(void * (*)(struct Cyc_CfFlowInfo_JoinEnv *,
						   void *,void *,void *),
					struct Cyc_CfFlowInfo_JoinEnv *,struct Cyc_Dict_Dict,
					struct Cyc_Dict_Dict) = (struct Cyc_Dict_Dict (*)(void * (*)(struct Cyc_CfFlowInfo_JoinEnv *,
												     void *,
												     void *,
												     void *),
											  struct Cyc_CfFlowInfo_JoinEnv *,
											  struct Cyc_Dict_Dict,
											  struct Cyc_Dict_Dict))_T19;
	  _T18 = _T27;
	}_T1A = &env;
	_T1B = (struct Cyc_CfFlowInfo_JoinEnv *)_T1A;
	_T1C = d1;
	_T1D = d2;
	{ struct Cyc_Dict_Dict outdict = _T18(Cyc_CfFlowInfo_join_absRval_tryflow,
					      _T1B,_T1C,_T1D);
	  _T1E = fenv;
	  _T1F = env;
	  _T20 = _T1F.pile;
	  _T21 = outdict;
	  _T22 = Cyc_CfFlowInfo_escape_these(_T1E,_T20,_T21);
	  _T23 = Cyc_CfFlowInfo_ReachableFL(_T22);
	  return _T23;
	}
      }
    };
  }
}
union Cyc_CfFlowInfo_FlowInfo Cyc_CfFlowInfo_join_flow(struct Cyc_CfFlowInfo_FlowEnv * fenv,
						       union Cyc_CfFlowInfo_FlowInfo f1,
						       union Cyc_CfFlowInfo_FlowInfo f2) {
  struct _tuple21 _T0;
  union Cyc_CfFlowInfo_FlowInfo _T1;
  struct _union_FlowInfo_BottomFL _T2;
  unsigned int _T3;
  union Cyc_CfFlowInfo_FlowInfo _T4;
  union Cyc_CfFlowInfo_FlowInfo _T5;
  struct _union_FlowInfo_BottomFL _T6;
  unsigned int _T7;
  union Cyc_CfFlowInfo_FlowInfo _T8;
  union Cyc_CfFlowInfo_FlowInfo _T9;
  struct _union_FlowInfo_ReachableFL _TA;
  union Cyc_CfFlowInfo_FlowInfo _TB;
  struct _union_FlowInfo_ReachableFL _TC;
  struct Cyc_Dict_Dict _TD;
  const struct Cyc_Dict_T * _TE;
  struct Cyc_Dict_Dict _TF;
  const struct Cyc_Dict_T * _T10;
  union Cyc_CfFlowInfo_FlowInfo _T11;
  long _T12;
  union Cyc_CfFlowInfo_FlowInfo _T13;
  long _T14;
  union Cyc_CfFlowInfo_FlowInfo _T15;
  struct Cyc_CfFlowInfo_JoinEnv _T16;
  struct Cyc_CfFlowInfo_EscPile * _T17;
  struct Cyc_Dict_Dict (* _T18)(void * (*)(struct Cyc_CfFlowInfo_JoinEnv *,
					   void *,void *,void *),struct Cyc_CfFlowInfo_JoinEnv *,
				struct Cyc_Dict_Dict,struct Cyc_Dict_Dict);
  struct Cyc_Dict_Dict (* _T19)(void * (*)(void *,void *,void *,void *),void *,
				struct Cyc_Dict_Dict,struct Cyc_Dict_Dict);
  struct Cyc_CfFlowInfo_JoinEnv * _T1A;
  struct Cyc_CfFlowInfo_JoinEnv * _T1B;
  struct Cyc_Dict_Dict _T1C;
  struct Cyc_Dict_Dict _T1D;
  struct Cyc_CfFlowInfo_FlowEnv * _T1E;
  struct Cyc_CfFlowInfo_JoinEnv _T1F;
  struct Cyc_CfFlowInfo_EscPile * _T20;
  struct Cyc_Dict_Dict _T21;
  struct Cyc_Dict_Dict _T22;
  union Cyc_CfFlowInfo_FlowInfo _T23;
  { struct _tuple21 _T24;
    _T24.f0 = f1;
    _T24.f1 = f2;
    _T0 = _T24;
  }{ struct _tuple21 _T24 = _T0;
    struct Cyc_Dict_Dict _T25;
    struct Cyc_Dict_Dict _T26;
    _T1 = _T24.f0;
    _T2 = _T1.BottomFL;
    _T3 = _T2.tag;
    if (_T3 != 1) { goto _TL1B2;
    }
    _T4 = f2;
    return _T4;
    _TL1B2: _T5 = _T24.f1;
    _T6 = _T5.BottomFL;
    _T7 = _T6.tag;
    if (_T7 != 1) { goto _TL1B4;
    }
    _T8 = f1;
    return _T8;
    _TL1B4: _T9 = _T24.f0;
    _TA = _T9.ReachableFL;
    _T26 = _TA.val;
    _TB = _T24.f1;
    _TC = _TB.ReachableFL;
    _T25 = _TC.val;
    { struct Cyc_Dict_Dict d1 = _T26;
      struct Cyc_Dict_Dict d2 = _T25;
      _TD = d1;
      _TE = _TD.t;
      _TF = d2;
      _T10 = _TF.t;
      if (_TE != _T10) { goto _TL1B6;
      }
      _T11 = f1;
      return _T11;
      _TL1B6: _T12 = Cyc_CfFlowInfo_flow_lessthan_approx(f1,f2);
      if (! _T12) { goto _TL1B8;
      }
      _T13 = f2;
      return _T13;
      _TL1B8: _T14 = Cyc_CfFlowInfo_flow_lessthan_approx(f2,f1);
      if (! _T14) { goto _TL1BA;
      }
      _T15 = f1;
      return _T15;
      _TL1BA: { struct Cyc_CfFlowInfo_JoinEnv _T27;
	_T27.fenv = fenv;
	{ struct Cyc_CfFlowInfo_EscPile * _T28 = _cycalloc(sizeof(struct Cyc_CfFlowInfo_EscPile));
	  _T28->places = 0;
	  _T17 = (struct Cyc_CfFlowInfo_EscPile *)_T28;
	}_T27.pile = _T17;
	_T27.d1 = d1;
	_T27.d2 = d2;
	_T27.is_try_flow = 0;
	_T16 = _T27;
      }{ struct Cyc_CfFlowInfo_JoinEnv env = _T16;
	_T19 = Cyc_Dict_intersect_c;
	{ struct Cyc_Dict_Dict (* _T27)(void * (*)(struct Cyc_CfFlowInfo_JoinEnv *,
						   void *,void *,void *),
					struct Cyc_CfFlowInfo_JoinEnv *,struct Cyc_Dict_Dict,
					struct Cyc_Dict_Dict) = (struct Cyc_Dict_Dict (*)(void * (*)(struct Cyc_CfFlowInfo_JoinEnv *,
												     void *,
												     void *,
												     void *),
											  struct Cyc_CfFlowInfo_JoinEnv *,
											  struct Cyc_Dict_Dict,
											  struct Cyc_Dict_Dict))_T19;
	  _T18 = _T27;
	}_T1A = &env;
	_T1B = (struct Cyc_CfFlowInfo_JoinEnv *)_T1A;
	_T1C = d1;
	_T1D = d2;
	{ struct Cyc_Dict_Dict outdict = _T18(Cyc_CfFlowInfo_join_absRval,
					      _T1B,_T1C,_T1D);
	  _T1E = fenv;
	  _T1F = env;
	  _T20 = _T1F.pile;
	  _T21 = outdict;
	  _T22 = Cyc_CfFlowInfo_escape_these(_T1E,_T20,_T21);
	  _T23 = Cyc_CfFlowInfo_ReachableFL(_T22);
	  return _T23;
	}
      }
    };
  }
}
 struct _tuple22 {
  union Cyc_CfFlowInfo_FlowInfo f0;
  void * f1;
};
 struct _tuple23 {
  union Cyc_CfFlowInfo_FlowInfo f0;
  union Cyc_CfFlowInfo_FlowInfo f1;
  union Cyc_CfFlowInfo_FlowInfo f2;
};
struct _tuple22 Cyc_CfFlowInfo_join_flow_and_rval(struct Cyc_CfFlowInfo_FlowEnv * fenv,
						  struct _tuple22 pr1,struct _tuple22 pr2) {
  struct _tuple22 _T0;
  struct _tuple22 _T1;
  struct _tuple22 _T2;
  struct _tuple22 _T3;
  struct _tuple23 _T4;
  union Cyc_CfFlowInfo_FlowInfo _T5;
  struct _union_FlowInfo_BottomFL _T6;
  unsigned int _T7;
  struct _tuple22 _T8;
  union Cyc_CfFlowInfo_FlowInfo _T9;
  struct _union_FlowInfo_BottomFL _TA;
  unsigned int _TB;
  struct _tuple22 _TC;
  union Cyc_CfFlowInfo_FlowInfo _TD;
  struct _union_FlowInfo_ReachableFL _TE;
  unsigned int _TF;
  union Cyc_CfFlowInfo_FlowInfo _T10;
  struct _union_FlowInfo_ReachableFL _T11;
  union Cyc_CfFlowInfo_FlowInfo _T12;
  struct _union_FlowInfo_ReachableFL _T13;
  union Cyc_CfFlowInfo_FlowInfo _T14;
  struct _union_FlowInfo_ReachableFL _T15;
  long (* _T16)(int,void *,void *);
  long (* _T17)(void *,void *,void *);
  long _T18;
  struct _tuple22 _T19;
  long (* _T1A)(int,void *,void *);
  long (* _T1B)(void *,void *,void *);
  long _T1C;
  struct _tuple22 _T1D;
  struct Cyc_CfFlowInfo_JoinEnv _T1E;
  struct Cyc_CfFlowInfo_EscPile * _T1F;
  void * (* _T20)(struct Cyc_CfFlowInfo_JoinEnv *,int,void *,void *);
  struct Cyc_CfFlowInfo_JoinEnv * _T21;
  struct Cyc_CfFlowInfo_JoinEnv * _T22;
  void * _T23;
  void * _T24;
  struct _tuple22 _T25;
  struct Cyc_CfFlowInfo_FlowEnv * _T26;
  struct Cyc_CfFlowInfo_JoinEnv _T27;
  struct Cyc_CfFlowInfo_EscPile * _T28;
  struct Cyc_Dict_Dict _T29;
  struct Cyc_Dict_Dict _T2A;
  int (* _T2B)(struct _fat_ptr,struct _fat_ptr);
  void * (* _T2C)(struct _fat_ptr,struct _fat_ptr);
  struct _fat_ptr _T2D;
  struct _fat_ptr _T2E;
  void * _T2F;
  union Cyc_CfFlowInfo_FlowInfo _T30;
  _T0 = pr1;
  _T30 = _T0.f0;
  _T1 = pr1;
  _T2F = _T1.f1;
  { union Cyc_CfFlowInfo_FlowInfo f1 = _T30;
    void * r1 = _T2F;
    void * _T31;
    union Cyc_CfFlowInfo_FlowInfo _T32;
    _T2 = pr2;
    _T32 = _T2.f0;
    _T3 = pr2;
    _T31 = _T3.f1;
    { union Cyc_CfFlowInfo_FlowInfo f2 = _T32;
      void * r2 = _T31;
      union Cyc_CfFlowInfo_FlowInfo outflow = Cyc_CfFlowInfo_join_flow(fenv,
								       f1,
								       f2);
      { struct _tuple23 _T33;
	_T33.f0 = f1;
	_T33.f1 = f2;
	_T33.f2 = outflow;
	_T4 = _T33;
      }{ struct _tuple23 _T33 = _T4;
	struct Cyc_Dict_Dict _T34;
	struct Cyc_Dict_Dict _T35;
	struct Cyc_Dict_Dict _T36;
	_T5 = _T33.f0;
	_T6 = _T5.BottomFL;
	_T7 = _T6.tag;
	if (_T7 != 1) { goto _TL1BC;
	}
	{ struct _tuple22 _T37;
	  _T37.f0 = outflow;
	  _T37.f1 = r2;
	  _T8 = _T37;
	}return _T8;
	_TL1BC: _T9 = _T33.f1;
	_TA = _T9.BottomFL;
	_TB = _TA.tag;
	if (_TB != 1) { goto _TL1BE;
	}
	{ struct _tuple22 _T37;
	  _T37.f0 = outflow;
	  _T37.f1 = r1;
	  _TC = _T37;
	}return _TC;
	_TL1BE: _TD = _T33.f2;
	_TE = _TD.ReachableFL;
	_TF = _TE.tag;
	if (_TF != 2) { goto _TL1C0;
	}
	_T10 = _T33.f0;
	_T11 = _T10.ReachableFL;
	_T36 = _T11.val;
	_T12 = _T33.f1;
	_T13 = _T12.ReachableFL;
	_T35 = _T13.val;
	_T14 = _T33.f2;
	_T15 = _T14.ReachableFL;
	_T34 = _T15.val;
	{ struct Cyc_Dict_Dict d1 = _T36;
	  struct Cyc_Dict_Dict d2 = _T35;
	  struct Cyc_Dict_Dict outd = _T34;
	  _T17 = Cyc_CfFlowInfo_absRval_lessthan_approx;
	  { long (* _T37)(int,void *,void *) = (long (*)(int,void *,void *))_T17;
	    _T16 = _T37;
	  }_T18 = _T16(0,r1,r2);
	  if (! _T18) { goto _TL1C2;
	  }
	  { struct _tuple22 _T37;
	    _T37.f0 = outflow;
	    _T37.f1 = r2;
	    _T19 = _T37;
	  }return _T19;
	  _TL1C2: _T1B = Cyc_CfFlowInfo_absRval_lessthan_approx;
	  { long (* _T37)(int,void *,void *) = (long (*)(int,void *,void *))_T1B;
	    _T1A = _T37;
	  }_T1C = _T1A(0,r2,r1);
	  if (! _T1C) { goto _TL1C4;
	  }
	  { struct _tuple22 _T37;
	    _T37.f0 = outflow;
	    _T37.f1 = r1;
	    _T1D = _T37;
	  }return _T1D;
	  _TL1C4: { struct Cyc_CfFlowInfo_JoinEnv _T37;
	    _T37.fenv = fenv;
	    { struct Cyc_CfFlowInfo_EscPile * _T38 = _cycalloc(sizeof(struct Cyc_CfFlowInfo_EscPile));
	      _T38->places = 0;
	      _T1F = (struct Cyc_CfFlowInfo_EscPile *)_T38;
	    }_T37.pile = _T1F;
	    _T37.d1 = d1;
	    _T37.d2 = d2;
	    _T37.is_try_flow = 0;
	    _T1E = _T37;
	  }{ struct Cyc_CfFlowInfo_JoinEnv env = _T1E;
	    { void * (* _T37)(struct Cyc_CfFlowInfo_JoinEnv *,int,void *,
			      void *) = (void * (*)(struct Cyc_CfFlowInfo_JoinEnv *,
						    int,void *,void *))Cyc_CfFlowInfo_join_absRval;
	      _T20 = _T37;
	    }_T21 = &env;
	    _T22 = (struct Cyc_CfFlowInfo_JoinEnv *)_T21;
	    _T23 = r1;
	    _T24 = r2;
	    { void * outr = _T20(_T22,0,_T23,_T24);
	      { struct _tuple22 _T37;
		_T26 = fenv;
		_T27 = env;
		_T28 = _T27.pile;
		_T29 = outd;
		_T2A = Cyc_CfFlowInfo_escape_these(_T26,_T28,_T29);
		_T37.f0 = Cyc_CfFlowInfo_ReachableFL(_T2A);
		_T37.f1 = outr;
		_T25 = _T37;
	      }return _T25;
	    }
	  }
	}_TL1C0: _T2C = Cyc_Warn_impos;
	{ int (* _T37)(struct _fat_ptr,struct _fat_ptr) = (int (*)(struct _fat_ptr,
								   struct _fat_ptr))_T2C;
	  _T2B = _T37;
	}_T2D = _tag_fat("join_flow_and_rval: BottomFL outflow",sizeof(char),
			 37U);
	_T2E = _tag_fat(0U,sizeof(void *),0);
	_T2B(_T2D,_T2E);
	;
      }
    }
  }
}
static long Cyc_CfFlowInfo_absRval_lessthan_approx(void * ignore,void * r1,
						   void * r2) {
  struct _tuple13 _T0;
  void * _T1;
  int * _T2;
  int _T3;
  void * _T4;
  int * _T5;
  int _T6;
  void * _T7;
  void * _T8;
  void * _T9;
  void * _TA;
  int _TB;
  void * _TC;
  int * _TD;
  int _TE;
  void * _TF;
  int * _T10;
  int _T11;
  void * _T12;
  int * _T13;
  int _T14;
  void * _T15;
  void * _T16;
  int _T17;
  int _T18;
  void * _T19;
  int * _T1A;
  int _T1B;
  void * _T1C;
  int * _T1D;
  int _T1E;
  void * _T1F;
  int * _T20;
  int _T21;
  void * _T22;
  void * _T23;
  void * _T24;
  void * _T25;
  long _T26;
  void * _T27;
  int * _T28;
  int _T29;
  void * _T2A;
  int * _T2B;
  int _T2C;
  void * _T2D;
  int * _T2E;
  unsigned int _T2F;
  void * _T30;
  struct Cyc_CfFlowInfo_UnionRInfo _T31;
  struct Cyc_CfFlowInfo_UnionRInfo _T32;
  void * _T33;
  struct Cyc_CfFlowInfo_UnionRInfo _T34;
  struct Cyc_CfFlowInfo_UnionRInfo _T35;
  long _T36;
  struct _fat_ptr _T37;
  unsigned char * _T38;
  void * * _T39;
  struct _fat_ptr _T3A;
  unsigned char * _T3B;
  void * * _T3C;
  int _T3D;
  unsigned int _T3E;
  struct _fat_ptr _T3F;
  unsigned int _T40;
  long (* _T41)(int,void *,void *);
  struct _fat_ptr _T42;
  unsigned char * _T43;
  void * * _T44;
  void * * _T45;
  int _T46;
  void * _T47;
  struct _fat_ptr _T48;
  int _T49;
  unsigned char * _T4A;
  void * * _T4B;
  void * _T4C;
  long _T4D;
  void * _T4E;
  int * _T4F;
  unsigned int _T50;
  void * _T51;
  int * _T52;
  int _T53;
  void * _T54;
  int * _T55;
  int _T56;
  struct _tuple20 _T57;
  enum Cyc_CfFlowInfo_InitLevel _T58;
  enum Cyc_CfFlowInfo_InitLevel _T59;
  if (r1 != r2) { goto _TL1C6;
  }
  return 1;
  _TL1C6: { struct _tuple13 _T5A;
    _T5A.f0 = r1;
    _T5A.f1 = r2;
    _T0 = _T5A;
  }{ struct _tuple13 _T5A = _T0;
    struct _fat_ptr _T5B;
    int _T5C;
    long _T5D;
    struct _fat_ptr _T5E;
    int _T5F;
    long _T60;
    void * _T61;
    struct Cyc_Absyn_Vardecl * _T62;
    void * _T63;
    void * _T64;
    _T1 = _T5A.f0;
    _T2 = (int *)_T1;
    _T3 = *_T2;
    if (_T3 != 8) { goto _TL1C8;
    }
    _T4 = _T5A.f1;
    _T5 = (int *)_T4;
    _T6 = *_T5;
    if (_T6 != 8) { goto _TL1CA;
    }
    _T7 = _T5A.f0;
    { struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct * _T65 = (struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct *)_T7;
      _T64 = _T65->f1;
      _T8 = _T65->f2;
      _T63 = (void *)_T8;
    }_T9 = _T5A.f1;
    { struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct * _T65 = (struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct *)_T9;
      _T62 = _T65->f1;
      _TA = _T65->f2;
      _T61 = (void *)_TA;
    }{ struct Cyc_Absyn_Vardecl * n1 = _T64;
      void * r1 = _T63;
      struct Cyc_Absyn_Vardecl * n2 = _T62;
      void * r2 = _T61;
      if (n1 != n2) { goto _TL1CC;
      }
      _TB = Cyc_CfFlowInfo_absRval_lessthan_approx(ignore,r1,r2);
      goto _TL1CD;
      _TL1CC: _TB = 0;
      _TL1CD: return _TB;
    }_TL1CA: goto _LL6;
    _TL1C8: _TC = _T5A.f1;
    _TD = (int *)_TC;
    _TE = *_TD;
    if (_TE != 8) { goto _TL1CE;
    }
    _LL6: return 0;
    _TL1CE: _TF = _T5A.f0;
    _T10 = (int *)_TF;
    _T11 = *_T10;
    if (_T11 != 4) { goto _TL1D0;
    }
    _T12 = _T5A.f1;
    _T13 = (int *)_T12;
    _T14 = *_T13;
    if (_T14 != 4) { goto _TL1D2;
    }
    _T15 = _T5A.f0;
    { struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct * _T65 = (struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct *)_T15;
      _T64 = _T65->f1;
    }_T16 = _T5A.f1;
    { struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct * _T65 = (struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct *)_T16;
      _T63 = _T65->f1;
    }{ struct Cyc_CfFlowInfo_Place * p1 = _T64;
      struct Cyc_CfFlowInfo_Place * p2 = _T63;
      _T17 = Cyc_CfFlowInfo_place_cmp(p1,p2);
      _T18 = _T17 == 0;
      return _T18;
    }_TL1D2: goto _LLC;
    _TL1D0: _T19 = _T5A.f1;
    _T1A = (int *)_T19;
    _T1B = *_T1A;
    if (_T1B != 4) { goto _TL1D4;
    }
    _LLC: return 0;
    _TL1D4: _T1C = _T5A.f0;
    _T1D = (int *)_T1C;
    _T1E = *_T1D;
    if (_T1E != 5) { goto _TL1D6;
    }
    _T1F = _T5A.f1;
    _T20 = (int *)_T1F;
    _T21 = *_T20;
    if (_T21 != 5) { goto _TL1D8;
    }
    _T22 = _T5A.f0;
    { struct Cyc_CfFlowInfo_UniquePtr_CfFlowInfo_AbsRVal_struct * _T65 = (struct Cyc_CfFlowInfo_UniquePtr_CfFlowInfo_AbsRVal_struct *)_T22;
      _T23 = _T65->f1;
      _T64 = (void *)_T23;
    }_T24 = _T5A.f1;
    { struct Cyc_CfFlowInfo_UniquePtr_CfFlowInfo_AbsRVal_struct * _T65 = (struct Cyc_CfFlowInfo_UniquePtr_CfFlowInfo_AbsRVal_struct *)_T24;
      _T25 = _T65->f1;
      _T63 = (void *)_T25;
    }{ void * r1 = _T64;
      void * r2 = _T63;
      _T26 = Cyc_CfFlowInfo_absRval_lessthan_approx(ignore,r1,r2);
      return _T26;
    }_TL1D8: goto _LL12;
    _TL1D6: _T27 = _T5A.f1;
    _T28 = (int *)_T27;
    _T29 = *_T28;
    if (_T29 != 5) { goto _TL1DA;
    }
    _LL12: return 0;
    _TL1DA: _T2A = _T5A.f0;
    _T2B = (int *)_T2A;
    _T2C = *_T2B;
    if (_T2C != 6) { goto _TL1DC;
    }
    _T2D = _T5A.f1;
    _T2E = (int *)_T2D;
    _T2F = *_T2E;
    switch (_T2F) {
    case 6: 
      _T30 = _T5A.f0;
      { struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct * _T65 = (struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct *)_T30;
	_T31 = _T65->f1;
	_T60 = _T31.is_union;
	_T32 = _T65->f1;
	_T5F = _T32.fieldnum;
	_T5E = _T65->f2;
      }_T33 = _T5A.f1;
      { struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct * _T65 = (struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct *)_T33;
	_T34 = _T65->f1;
	_T5D = _T34.is_union;
	_T35 = _T65->f1;
	_T5C = _T35.fieldnum;
	_T5B = _T65->f2;
      }{ long is_union1 = _T60;
	int fld1 = _T5F;
	struct _fat_ptr d1 = _T5E;
	long is_union2 = _T5D;
	int fld2 = _T5C;
	struct _fat_ptr d2 = _T5B;
	_T36 = is_union1;
	if (! _T36) { goto _TL1DF;
	}
	if (fld1 == fld2) { goto _TL1DF;
	}
	return 0;
	_TL1DF: _T37 = d1;
	_T38 = _T37.curr;
	_T39 = (void * *)_T38;
	_T3A = d2;
	_T3B = _T3A.curr;
	_T3C = (void * *)_T3B;
	if (_T39 != _T3C) { goto _TL1E1;
	}
	return 1;
	_TL1E1: { int i = 0;
	  _TL1E6: _T3D = i;
	  _T3E = (unsigned int)_T3D;
	  _T3F = d1;
	  _T40 = _get_fat_size(_T3F,sizeof(void *));
	  if (_T3E < _T40) { goto _TL1E4;
	  }else { goto _TL1E5;
	  }
	  _TL1E4: { long (* _T65)(int,void *,void *) = (long (*)(int,void *,
								 void *))Cyc_CfFlowInfo_absRval_lessthan_approx;
	    _T41 = _T65;
	  }_T42 = d1;
	  _T43 = _T42.curr;
	  _T44 = (void * *)_T43;
	  _T45 = _check_null(_T44);
	  _T46 = i;
	  _T47 = _T45[_T46];
	  _T48 = d2;
	  _T49 = i;
	  _T4A = _check_fat_subscript(_T48,sizeof(void *),_T49);
	  _T4B = (void * *)_T4A;
	  _T4C = *_T4B;
	  _T4D = _T41(0,_T47,_T4C);
	  if (_T4D) { goto _TL1E7;
	  }else { goto _TL1E9;
	  }
	  _TL1E9: return 0;
	  _TL1E7: i = i + 1;
	  goto _TL1E6;
	  _TL1E5: ;
	}return 1;
      }
    case 0: 
      goto _LL15;
    case 1: 
      goto _LL17;
    default: 
      goto _LL1D;
    }
    goto _TL1DD;
    _TL1DC: _T4E = _T5A.f1;
    _T4F = (int *)_T4E;
    _T50 = *_T4F;
    switch (_T50) {
    case 0: 
      _LL15: goto _LL18;
    case 1: 
      _LL17: _LL18: return 0;
    default: 
      _T51 = _T5A.f0;
      _T52 = (int *)_T51;
      _T53 = *_T52;
      if (_T53 != 3) { goto _TL1EB;
      }
      _T54 = _T5A.f1;
      _T55 = (int *)_T54;
      _T56 = *_T55;
      if (_T56 != 3) { goto _TL1ED;
      }
      goto _LL0;
      _TL1ED: return 0;
      _TL1EB: _LL1D: goto _LL0;
    }
    _TL1DD: _LL0: ;
  }{ struct _tuple20 _T5A;
    _T5A.f0 = Cyc_CfFlowInfo_initlevel_approx(r1);
    _T5A.f1 = Cyc_CfFlowInfo_initlevel_approx(r2);
    _T57 = _T5A;
  }{ struct _tuple20 _T5A = _T57;
    _T58 = _T5A.f0;
    if (_T58 != Cyc_CfFlowInfo_AllIL) { goto _TL1EF;
    }
    goto _LL23;
    _TL1EF: _T59 = _T5A.f1;
    if (_T59 != Cyc_CfFlowInfo_NoneIL) { goto _TL1F1;
    }
    _LL23: return 1;
    _TL1F1: return 0;
    ;
  }
}
long Cyc_CfFlowInfo_flow_lessthan_approx(union Cyc_CfFlowInfo_FlowInfo f1,
					 union Cyc_CfFlowInfo_FlowInfo f2) {
  struct _tuple21 _T0;
  union Cyc_CfFlowInfo_FlowInfo _T1;
  struct _union_FlowInfo_BottomFL _T2;
  unsigned int _T3;
  union Cyc_CfFlowInfo_FlowInfo _T4;
  struct _union_FlowInfo_BottomFL _T5;
  unsigned int _T6;
  union Cyc_CfFlowInfo_FlowInfo _T7;
  struct _union_FlowInfo_ReachableFL _T8;
  union Cyc_CfFlowInfo_FlowInfo _T9;
  struct _union_FlowInfo_ReachableFL _TA;
  struct Cyc_Dict_Dict _TB;
  const struct Cyc_Dict_T * _TC;
  struct Cyc_Dict_Dict _TD;
  const struct Cyc_Dict_T * _TE;
  struct Cyc_Dict_Dict _TF;
  struct Cyc_Dict_Dict _T10;
  long _T11;
  { struct _tuple21 _T12;
    _T12.f0 = f1;
    _T12.f1 = f2;
    _T0 = _T12;
  }{ struct _tuple21 _T12 = _T0;
    struct Cyc_Dict_Dict _T13;
    struct Cyc_Dict_Dict _T14;
    _T1 = _T12.f0;
    _T2 = _T1.BottomFL;
    _T3 = _T2.tag;
    if (_T3 != 1) { goto _TL1F3;
    }
    return 1;
    _TL1F3: _T4 = _T12.f1;
    _T5 = _T4.BottomFL;
    _T6 = _T5.tag;
    if (_T6 != 1) { goto _TL1F5;
    }
    return 0;
    _TL1F5: _T7 = _T12.f0;
    _T8 = _T7.ReachableFL;
    _T14 = _T8.val;
    _T9 = _T12.f1;
    _TA = _T9.ReachableFL;
    _T13 = _TA.val;
    { struct Cyc_Dict_Dict d1 = _T14;
      struct Cyc_Dict_Dict d2 = _T13;
      _TB = d1;
      _TC = _TB.t;
      _TD = d2;
      _TE = _TD.t;
      if (_TC != _TE) { goto _TL1F7;
      }
      return 1;
      _TL1F7: _TF = d1;
      _T10 = d2;
      _T11 = Cyc_Dict_forall_intersect(Cyc_CfFlowInfo_absRval_lessthan_approx,
				       _TF,_T10);
      return _T11;
    };
  }
}
 struct _tuple24 {
  void * f0;
  struct Cyc_List_List * f1;
};
struct _tuple24 Cyc_CfFlowInfo_unname_rval(void * rv) {
  void * _T0;
  int * _T1;
  int _T2;
  void * _T3;
  void * _T4;
  struct Cyc_List_List * _T5;
  struct _tuple24 _T6;
  struct Cyc_List_List * names = 0;
  _TL1F9: if (1) { goto _TL1FA;
  }else { goto _TL1FB;
  }
  _TL1FA: { void * _T7;
    struct Cyc_Absyn_Vardecl * _T8;
    _T0 = rv;
    _T1 = (int *)_T0;
    _T2 = *_T1;
    if (_T2 != 8) { goto _TL1FC;
    }
    _T3 = rv;
    { struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct * _T9 = (struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct *)_T3;
      _T8 = _T9->f1;
      _T4 = _T9->f2;
      _T7 = (void *)_T4;
    }{ struct Cyc_Absyn_Vardecl * vd = _T8;
      void * rv2 = _T7;
      { struct Cyc_List_List * _T9 = _cycalloc(sizeof(struct Cyc_List_List));
	_T9->hd = vd;
	_T9->tl = names;
	_T5 = (struct Cyc_List_List *)_T9;
      }names = _T5;
      rv = rv2;
      goto _LL0;
    }_TL1FC: { struct _tuple24 _T9;
      _T9.f0 = rv;
      _T9.f1 = names;
      _T6 = _T9;
    }return _T6;
    _LL0: ;
  }goto _TL1F9;
  _TL1FB: ;
}
void Cyc_CfFlowInfo_print_initlevel(enum Cyc_CfFlowInfo_InitLevel il) {
  enum Cyc_CfFlowInfo_InitLevel _T0;
  struct Cyc___cycFILE * _T1;
  struct _fat_ptr _T2;
  struct _fat_ptr _T3;
  struct Cyc___cycFILE * _T4;
  struct _fat_ptr _T5;
  struct _fat_ptr _T6;
  _T0 = il;
  if (_T0 != Cyc_CfFlowInfo_NoneIL) { goto _TL1FE;
  }
  _T1 = Cyc_stderr;
  _T2 = _tag_fat("uninitialized",sizeof(char),14U);
  _T3 = _tag_fat(0U,sizeof(void *),0);
  Cyc_fprintf(_T1,_T2,_T3);
  goto _LL0;
  _TL1FE: _T4 = Cyc_stderr;
  _T5 = _tag_fat("all-initialized",sizeof(char),16U);
  _T6 = _tag_fat(0U,sizeof(void *),0);
  Cyc_fprintf(_T4,_T5,_T6);
  goto _LL0;
  _LL0: ;
}
void Cyc_CfFlowInfo_print_root(void * root) {
  void * _T0;
  int * _T1;
  unsigned int _T2;
  void * _T3;
  struct Cyc_String_pa_PrintArg_struct _T4;
  struct Cyc_Absyn_Vardecl * _T5;
  struct _tuple0 * _T6;
  struct Cyc___cycFILE * _T7;
  struct _fat_ptr _T8;
  struct _fat_ptr _T9;
  void * _TA;
  void * _TB;
  struct Cyc_String_pa_PrintArg_struct _TC;
  struct Cyc_String_pa_PrintArg_struct _TD;
  struct Cyc___cycFILE * _TE;
  struct _fat_ptr _TF;
  struct _fat_ptr _T10;
  struct Cyc___cycFILE * _T11;
  struct _fat_ptr _T12;
  struct _fat_ptr _T13;
  struct Cyc_Absyn_Exp * _T14;
  void * _T15;
  _T0 = root;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  switch (_T2) {
  case 0: 
    _T3 = root;
    { struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct * _T16 = (struct Cyc_CfFlowInfo_VarRoot_CfFlowInfo_Root_struct *)_T3;
      _T15 = _T16->f1;
    }{ struct Cyc_Absyn_Vardecl * vd = _T15;
      { struct Cyc_String_pa_PrintArg_struct _T16;
	_T16.tag = 0;
	_T5 = vd;
	_T6 = _T5->name;
	_T16.f1 = Cyc_Absynpp_qvar2string(_T6);
	_T4 = _T16;
      }{ struct Cyc_String_pa_PrintArg_struct _T16 = _T4;
	void * _T17[1];
	_T17[0] = &_T16;
	_T7 = Cyc_stderr;
	_T8 = _tag_fat("Root(%s)",sizeof(char),9U);
	_T9 = _tag_fat(_T17,sizeof(void *),1);
	Cyc_fprintf(_T7,_T8,_T9);
      }goto _LL0;
    }
  case 1: 
    _TA = root;
    { struct Cyc_CfFlowInfo_MallocPt_CfFlowInfo_Root_struct * _T16 = (struct Cyc_CfFlowInfo_MallocPt_CfFlowInfo_Root_struct *)_TA;
      _T14 = _T16->f1;
      _TB = _T16->f2;
      _T15 = (void *)_TB;
    }{ struct Cyc_Absyn_Exp * e = _T14;
      void * t = _T15;
      { struct Cyc_String_pa_PrintArg_struct _T16;
	_T16.tag = 0;
	_T16.f1 = Cyc_Absynpp_exp2string(e);
	_TC = _T16;
      }{ struct Cyc_String_pa_PrintArg_struct _T16 = _TC;
	{ struct Cyc_String_pa_PrintArg_struct _T17;
	  _T17.tag = 0;
	  _T17.f1 = Cyc_Absynpp_typ2string(t);
	  _TD = _T17;
	}{ struct Cyc_String_pa_PrintArg_struct _T17 = _TD;
	  void * _T18[2];
	  _T18[0] = &_T16;
	  _T18[1] = &_T17;
	  _TE = Cyc_stderr;
	  _TF = _tag_fat("MallocPt(%s,%s)",sizeof(char),16U);
	  _T10 = _tag_fat(_T18,sizeof(void *),2);
	  Cyc_fprintf(_TE,_TF,_T10);
	}
      }goto _LL0;
    }
  default: 
    _T11 = Cyc_stderr;
    _T12 = _tag_fat("InitParam(_,_)",sizeof(char),15U);
    _T13 = _tag_fat(0U,sizeof(void *),0);
    Cyc_fprintf(_T11,_T12,_T13);
    goto _LL0;
  }
  _LL0: ;
}
void Cyc_CfFlowInfo_print_path(struct Cyc_List_List * p) {
  struct Cyc_List_List * _T0;
  int * _T1;
  int _T2;
  struct Cyc_Int_pa_PrintArg_struct _T3;
  int _T4;
  struct Cyc___cycFILE * _T5;
  struct _fat_ptr _T6;
  struct _fat_ptr _T7;
  struct Cyc_List_List * _T8;
  struct Cyc_List_List * _T9;
  struct Cyc_List_List * _TA;
  struct Cyc_List_List * _TB;
  int * _TC;
  int _TD;
  struct Cyc_List_List * _TE;
  struct Cyc_Int_pa_PrintArg_struct _TF;
  int _T10;
  struct Cyc___cycFILE * _T11;
  struct _fat_ptr _T12;
  struct _fat_ptr _T13;
  struct Cyc___cycFILE * _T14;
  struct _fat_ptr _T15;
  struct _fat_ptr _T16;
  struct Cyc_List_List * _T17;
  struct Cyc___cycFILE * _T18;
  struct _fat_ptr _T19;
  struct _fat_ptr _T1A;
  { struct Cyc_List_List * x = p;
    _TL204: if (x != 0) { goto _TL202;
    }else { goto _TL203;
    }
    _TL202: _T0 = x;
    { void * _T1B = _T0->hd;
      int _T1C;
      _T1 = (int *)_T1B;
      _T2 = *_T1;
      if (_T2 != 0) { goto _TL205;
      }
      { struct Cyc_CfFlowInfo_Dot_CfFlowInfo_PathCon_struct * _T1D = (struct Cyc_CfFlowInfo_Dot_CfFlowInfo_PathCon_struct *)_T1B;
	_T1C = _T1D->f1;
      }{ int i = _T1C;
	{ struct Cyc_Int_pa_PrintArg_struct _T1D;
	  _T1D.tag = 1;
	  _T4 = i;
	  _T1D.f1 = (unsigned long)_T4;
	  _T3 = _T1D;
	}{ struct Cyc_Int_pa_PrintArg_struct _T1D = _T3;
	  void * _T1E[1];
	  _T1E[0] = &_T1D;
	  _T5 = Cyc_stderr;
	  _T6 = _tag_fat(".%d",sizeof(char),4U);
	  _T7 = _tag_fat(_T1E,sizeof(void *),1);
	  Cyc_fprintf(_T5,_T6,_T7);
	}goto _LL0;
      }_TL205: _T8 = x;
      _T9 = _T8->tl;
      if (_T9 == 0) { goto _TL207;
      }
      _TA = x;
      _TB = _TA->tl;
      { void * _T1D = _TB->hd;
	int _T1E;
	_TC = (int *)_T1D;
	_TD = *_TC;
	if (_TD != 0) { goto _TL209;
	}
	{ struct Cyc_CfFlowInfo_Dot_CfFlowInfo_PathCon_struct * _T1F = (struct Cyc_CfFlowInfo_Dot_CfFlowInfo_PathCon_struct *)_T1D;
	  _T1E = _T1F->f1;
	}{ int i = _T1E;
	  _TE = x;
	  x = _TE->tl;
	  { struct Cyc_Int_pa_PrintArg_struct _T1F;
	    _T1F.tag = 1;
	    _T10 = i;
	    _T1F.f1 = (unsigned long)_T10;
	    _TF = _T1F;
	  }{ struct Cyc_Int_pa_PrintArg_struct _T1F = _TF;
	    void * _T20[1];
	    _T20[0] = &_T1F;
	    _T11 = Cyc_stderr;
	    _T12 = _tag_fat("->%d",sizeof(char),5U);
	    _T13 = _tag_fat(_T20,sizeof(void *),1);
	    Cyc_fprintf(_T11,_T12,_T13);
	  }goto _TL201;
	}_TL209: goto _LL5;
	_LL5: ;
      }goto _TL208;
      _TL207: _TL208: _T14 = Cyc_stderr;
      _T15 = _tag_fat("*",sizeof(char),2U);
      _T16 = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T14,_T15,_T16);
      _LL0: ;
    }_TL201: _T17 = _check_null(x);
    x = _T17->tl;
    goto _TL204;
    _TL203: ;
  }_T18 = Cyc_stderr;
  _T19 = _tag_fat(" ",sizeof(char),2U);
  _T1A = _tag_fat(0U,sizeof(void *),0);
  Cyc_fprintf(_T18,_T19,_T1A);
}
void Cyc_CfFlowInfo_print_place(struct Cyc_CfFlowInfo_Place * p) {
  struct Cyc_CfFlowInfo_Place * _T0;
  void * _T1;
  struct Cyc_CfFlowInfo_Place * _T2;
  struct Cyc_List_List * _T3;
  _T0 = p;
  _T1 = _T0->root;
  Cyc_CfFlowInfo_print_root(_T1);
  _T2 = p;
  _T3 = _T2->path;
  Cyc_CfFlowInfo_print_path(_T3);
}
void Cyc_CfFlowInfo_print_list(struct Cyc_List_List * x,void (* pr)(void *)) {
  long _T0;
  struct Cyc___cycFILE * _T1;
  struct _fat_ptr _T2;
  struct _fat_ptr _T3;
  struct Cyc_List_List * _T4;
  void * _T5;
  struct Cyc_List_List * _T6;
  struct Cyc___cycFILE * _T7;
  struct _fat_ptr _T8;
  struct _fat_ptr _T9;
  long first = 1;
  _TL20B: if (x != 0) { goto _TL20C;
  }else { goto _TL20D;
  }
  _TL20C: _T0 = first;
  if (_T0) { goto _TL20E;
  }else { goto _TL210;
  }
  _TL210: _T1 = Cyc_stderr;
  _T2 = _tag_fat(", ",sizeof(char),3U);
  _T3 = _tag_fat(0U,sizeof(void *),0);
  Cyc_fprintf(_T1,_T2,_T3);
  first = 0;
  goto _TL20F;
  _TL20E: _TL20F: _T4 = x;
  _T5 = _T4->hd;
  pr(_T5);
  _T6 = x;
  x = _T6->tl;
  goto _TL20B;
  _TL20D: _T7 = Cyc_stderr;
  _T8 = _tag_fat("\n",sizeof(char),2U);
  _T9 = _tag_fat(0U,sizeof(void *),0);
  Cyc_fprintf(_T7,_T8,_T9);
}
void Cyc_CfFlowInfo_print_absrval(void * rval) {
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
  struct Cyc___cycFILE * _TA;
  struct _fat_ptr _TB;
  struct _fat_ptr _TC;
  struct Cyc___cycFILE * _TD;
  struct _fat_ptr _TE;
  struct _fat_ptr _TF;
  void * _T10;
  struct Cyc___cycFILE * _T11;
  struct _fat_ptr _T12;
  struct _fat_ptr _T13;
  struct Cyc___cycFILE * _T14;
  struct _fat_ptr _T15;
  struct _fat_ptr _T16;
  void * _T17;
  struct Cyc___cycFILE * _T18;
  struct _fat_ptr _T19;
  struct _fat_ptr _T1A;
  struct Cyc___cycFILE * _T1B;
  struct _fat_ptr _T1C;
  struct _fat_ptr _T1D;
  void * _T1E;
  void * _T1F;
  struct Cyc___cycFILE * _T20;
  struct _fat_ptr _T21;
  struct _fat_ptr _T22;
  struct Cyc___cycFILE * _T23;
  struct _fat_ptr _T24;
  struct _fat_ptr _T25;
  void * _T26;
  struct Cyc_CfFlowInfo_UnionRInfo _T27;
  struct Cyc_CfFlowInfo_UnionRInfo _T28;
  long _T29;
  struct Cyc___cycFILE * _T2A;
  struct _fat_ptr _T2B;
  struct _fat_ptr _T2C;
  int _T2D;
  int _T2E;
  struct Cyc_Int_pa_PrintArg_struct _T2F;
  int _T30;
  struct Cyc___cycFILE * _T31;
  struct _fat_ptr _T32;
  struct _fat_ptr _T33;
  struct Cyc___cycFILE * _T34;
  struct _fat_ptr _T35;
  struct _fat_ptr _T36;
  int _T37;
  unsigned int _T38;
  struct _fat_ptr _T39;
  unsigned int _T3A;
  struct _fat_ptr _T3B;
  unsigned char * _T3C;
  void * * _T3D;
  void * * _T3E;
  int _T3F;
  void * _T40;
  int _T41;
  unsigned int _T42;
  struct _fat_ptr _T43;
  unsigned int _T44;
  struct Cyc___cycFILE * _T45;
  struct _fat_ptr _T46;
  struct _fat_ptr _T47;
  struct Cyc___cycFILE * _T48;
  struct _fat_ptr _T49;
  struct _fat_ptr _T4A;
  void * _T4B;
  void * _T4C;
  struct Cyc_String_pa_PrintArg_struct _T4D;
  struct Cyc_Int_pa_PrintArg_struct _T4E;
  int _T4F;
  struct Cyc___cycFILE * _T50;
  struct _fat_ptr _T51;
  struct _fat_ptr _T52;
  struct Cyc_String_pa_PrintArg_struct _T53;
  long _T54;
  struct Cyc___cycFILE * _T55;
  struct _fat_ptr _T56;
  struct _fat_ptr _T57;
  void * _T58;
  void * _T59;
  struct Cyc_String_pa_PrintArg_struct _T5A;
  struct Cyc_Absyn_Vardecl * _T5B;
  struct _tuple0 * _T5C;
  struct Cyc___cycFILE * _T5D;
  struct _fat_ptr _T5E;
  struct _fat_ptr _T5F;
  struct Cyc___cycFILE * _T60;
  struct _fat_ptr _T61;
  struct _fat_ptr _T62;
  struct Cyc_Absyn_Vardecl * _T63;
  void * _T64;
  struct _fat_ptr _T65;
  long _T66;
  int _T67;
  void * _T68;
  enum Cyc_CfFlowInfo_InitLevel _T69;
  _T0 = rval;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  switch (_T2) {
  case 0: 
    _T3 = Cyc_stderr;
    _T4 = _tag_fat("Zero",sizeof(char),5U);
    _T5 = _tag_fat(0U,sizeof(void *),0);
    Cyc_fprintf(_T3,_T4,_T5);
    goto _LL0;
  case 1: 
    _T6 = Cyc_stderr;
    _T7 = _tag_fat("NotZeroAll",sizeof(char),11U);
    _T8 = _tag_fat(0U,sizeof(void *),0);
    Cyc_fprintf(_T6,_T7,_T8);
    goto _LL0;
  case 2: 
    _T9 = rval;
    { struct Cyc_CfFlowInfo_UnknownR_CfFlowInfo_AbsRVal_struct * _T6A = (struct Cyc_CfFlowInfo_UnknownR_CfFlowInfo_AbsRVal_struct *)_T9;
      _T69 = _T6A->f1;
    }{ enum Cyc_CfFlowInfo_InitLevel il = _T69;
      _TA = Cyc_stderr;
      _TB = _tag_fat("Unknown(",sizeof(char),9U);
      _TC = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_TA,_TB,_TC);
      Cyc_CfFlowInfo_print_initlevel(il);
      _TD = Cyc_stderr;
      _TE = _tag_fat(")",sizeof(char),2U);
      _TF = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_TD,_TE,_TF);
      goto _LL0;
    }
  case 3: 
    _T10 = rval;
    { struct Cyc_CfFlowInfo_Esc_CfFlowInfo_AbsRVal_struct * _T6A = (struct Cyc_CfFlowInfo_Esc_CfFlowInfo_AbsRVal_struct *)_T10;
      _T69 = _T6A->f1;
    }{ enum Cyc_CfFlowInfo_InitLevel il = _T69;
      _T11 = Cyc_stderr;
      _T12 = _tag_fat("Esc(",sizeof(char),5U);
      _T13 = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T11,_T12,_T13);
      Cyc_CfFlowInfo_print_initlevel(il);
      _T14 = Cyc_stderr;
      _T15 = _tag_fat(")",sizeof(char),2U);
      _T16 = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T14,_T15,_T16);
      goto _LL0;
    }
  case 4: 
    _T17 = rval;
    { struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct * _T6A = (struct Cyc_CfFlowInfo_AddressOf_CfFlowInfo_AbsRVal_struct *)_T17;
      _T68 = _T6A->f1;
    }{ struct Cyc_CfFlowInfo_Place * p = _T68;
      _T18 = Cyc_stderr;
      _T19 = _tag_fat("AddrOf(",sizeof(char),8U);
      _T1A = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T18,_T19,_T1A);
      Cyc_CfFlowInfo_print_place(p);
      _T1B = Cyc_stderr;
      _T1C = _tag_fat(")",sizeof(char),2U);
      _T1D = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T1B,_T1C,_T1D);
      goto _LL0;
    }
  case 5: 
    _T1E = rval;
    { struct Cyc_CfFlowInfo_UniquePtr_CfFlowInfo_AbsRVal_struct * _T6A = (struct Cyc_CfFlowInfo_UniquePtr_CfFlowInfo_AbsRVal_struct *)_T1E;
      _T1F = _T6A->f1;
      _T68 = (void *)_T1F;
    }{ void * r = _T68;
      _T20 = Cyc_stderr;
      _T21 = _tag_fat("UniquePtr(",sizeof(char),11U);
      _T22 = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T20,_T21,_T22);
      Cyc_CfFlowInfo_print_absrval(r);
      _T23 = Cyc_stderr;
      _T24 = _tag_fat(")",sizeof(char),2U);
      _T25 = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T23,_T24,_T25);
      goto _LL0;
    }
  case 6: 
    _T26 = rval;
    { struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct * _T6A = (struct Cyc_CfFlowInfo_Aggregate_CfFlowInfo_AbsRVal_struct *)_T26;
      _T27 = _T6A->f1;
      _T67 = _T27.is_union;
      _T28 = _T6A->f1;
      _T66 = _T28.fieldnum;
      _T65 = _T6A->f2;
    }{ long is_union = _T67;
      int f = _T66;
      struct _fat_ptr d = _T65;
      _T29 = is_union;
      if (! _T29) { goto _TL212;
      }
      _T2A = Cyc_stderr;
      _T2B = _tag_fat("AggrUnion{",sizeof(char),11U);
      _T2C = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T2A,_T2B,_T2C);
      _T2D = f;
      _T2E = - 1;
      if (_T2D == _T2E) { goto _TL214;
      }
      { struct Cyc_Int_pa_PrintArg_struct _T6A;
	_T6A.tag = 1;
	_T30 = f;
	_T6A.f1 = (unsigned long)_T30;
	_T2F = _T6A;
      }{ struct Cyc_Int_pa_PrintArg_struct _T6A = _T2F;
	void * _T6B[1];
	_T6B[0] = &_T6A;
	_T31 = Cyc_stderr;
	_T32 = _tag_fat("tag == %d;",sizeof(char),11U);
	_T33 = _tag_fat(_T6B,sizeof(void *),1);
	Cyc_fprintf(_T31,_T32,_T33);
      }goto _TL215;
      _TL214: _TL215: goto _TL213;
      _TL212: _T34 = Cyc_stderr;
      _T35 = _tag_fat("AggrStruct{",sizeof(char),12U);
      _T36 = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T34,_T35,_T36);
      _TL213: { int i = 0;
	_TL219: _T37 = i;
	_T38 = (unsigned int)_T37;
	_T39 = d;
	_T3A = _get_fat_size(_T39,sizeof(void *));
	if (_T38 < _T3A) { goto _TL217;
	}else { goto _TL218;
	}
	_TL217: _T3B = d;
	_T3C = _T3B.curr;
	_T3D = (void * *)_T3C;
	_T3E = _check_null(_T3D);
	_T3F = i;
	_T40 = _T3E[_T3F];
	Cyc_CfFlowInfo_print_absrval(_T40);
	_T41 = i + 1;
	_T42 = (unsigned int)_T41;
	_T43 = d;
	_T44 = _get_fat_size(_T43,sizeof(void *));
	if (_T42 >= _T44) { goto _TL21A;
	}
	_T45 = Cyc_stderr;
	_T46 = _tag_fat(",",sizeof(char),2U);
	_T47 = _tag_fat(0U,sizeof(void *),0);
	Cyc_fprintf(_T45,_T46,_T47);
	goto _TL21B;
	_TL21A: _TL21B: i = i + 1;
	goto _TL219;
	_TL218: ;
      }_T48 = Cyc_stderr;
      _T49 = _tag_fat("}",sizeof(char),2U);
      _T4A = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T48,_T49,_T4A);
      goto _LL0;
    }
  case 7: 
    _T4B = rval;
    { struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct * _T6A = (struct Cyc_CfFlowInfo_Consumed_CfFlowInfo_AbsRVal_struct *)_T4B;
      _T68 = _T6A->f1;
      _T67 = _T6A->f2;
      _T4C = _T6A->f3;
      _T64 = (void *)_T4C;
      _T66 = _T6A->f4;
    }{ struct Cyc_Absyn_Exp * e = _T68;
      int i = _T67;
      void * r = _T64;
      long l = _T66;
      { struct Cyc_String_pa_PrintArg_struct _T6A;
	_T6A.tag = 0;
	_T6A.f1 = Cyc_Absynpp_exp2string(e);
	_T4D = _T6A;
      }{ struct Cyc_String_pa_PrintArg_struct _T6A = _T4D;
	{ struct Cyc_Int_pa_PrintArg_struct _T6B;
	  _T6B.tag = 1;
	  _T4F = i;
	  _T6B.f1 = (unsigned long)_T4F;
	  _T4E = _T6B;
	}{ struct Cyc_Int_pa_PrintArg_struct _T6B = _T4E;
	  void * _T6C[2];
	  _T6C[0] = &_T6A;
	  _T6C[1] = &_T6B;
	  _T50 = Cyc_stderr;
	  _T51 = _tag_fat("[Consumed(%s,%d,",sizeof(char),17U);
	  _T52 = _tag_fat(_T6C,sizeof(void *),2);
	  Cyc_fprintf(_T50,_T51,_T52);
	}
      }Cyc_CfFlowInfo_print_absrval(r);
      { struct Cyc_String_pa_PrintArg_struct _T6A;
	_T6A.tag = 0;
	_T54 = l;
	if (! _T54) { goto _TL21C;
	}
	_T6A.f1 = _tag_fat("local",sizeof(char),6U);
	goto _TL21D;
	_TL21C: _T6A.f1 = _tag_fat("",sizeof(char),1U);
	_TL21D: _T53 = _T6A;
      }{ struct Cyc_String_pa_PrintArg_struct _T6A = _T53;
	void * _T6B[1];
	_T6B[0] = &_T6A;
	_T55 = Cyc_stderr;
	_T56 = _tag_fat(",%s)]",sizeof(char),6U);
	_T57 = _tag_fat(_T6B,sizeof(void *),1);
	Cyc_fprintf(_T55,_T56,_T57);
      }goto _LL0;
    }
  default: 
    _T58 = rval;
    { struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct * _T6A = (struct Cyc_CfFlowInfo_NamedLocation_CfFlowInfo_AbsRVal_struct *)_T58;
      _T63 = _T6A->f1;
      _T59 = _T6A->f2;
      _T68 = (void *)_T59;
    }{ struct Cyc_Absyn_Vardecl * n = _T63;
      void * r = _T68;
      { struct Cyc_String_pa_PrintArg_struct _T6A;
	_T6A.tag = 0;
	_T5B = n;
	_T5C = _T5B->name;
	_T6A.f1 = Cyc_Absynpp_qvar2string(_T5C);
	_T5A = _T6A;
      }{ struct Cyc_String_pa_PrintArg_struct _T6A = _T5A;
	void * _T6B[1];
	_T6B[0] = &_T6A;
	_T5D = Cyc_stderr;
	_T5E = _tag_fat("[NamedLocation(%s,",sizeof(char),19U);
	_T5F = _tag_fat(_T6B,sizeof(void *),1);
	Cyc_fprintf(_T5D,_T5E,_T5F);
      }Cyc_CfFlowInfo_print_absrval(r);
      _T60 = Cyc_stderr;
      _T61 = _tag_fat(")]",sizeof(char),3U);
      _T62 = _tag_fat(0U,sizeof(void *),0);
      Cyc_fprintf(_T60,_T61,_T62);
      goto _LL0;
    }
  }
  _LL0: ;
}
static void Cyc_CfFlowInfo_print_flow_mapping(void * root,void * rval) {
  struct Cyc___cycFILE * _T0;
  struct _fat_ptr _T1;
  struct _fat_ptr _T2;
  struct Cyc___cycFILE * _T3;
  struct _fat_ptr _T4;
  struct _fat_ptr _T5;
  struct Cyc___cycFILE * _T6;
  struct _fat_ptr _T7;
  struct _fat_ptr _T8;
  _T0 = Cyc_stderr;
  _T1 = _tag_fat("    ",sizeof(char),5U);
  _T2 = _tag_fat(0U,sizeof(void *),0);
  Cyc_fprintf(_T0,_T1,_T2);
  Cyc_CfFlowInfo_print_root(root);
  _T3 = Cyc_stderr;
  _T4 = _tag_fat(" --> ",sizeof(char),6U);
  _T5 = _tag_fat(0U,sizeof(void *),0);
  Cyc_fprintf(_T3,_T4,_T5);
  Cyc_CfFlowInfo_print_absrval(rval);
  _T6 = Cyc_stderr;
  _T7 = _tag_fat("\n",sizeof(char),2U);
  _T8 = _tag_fat(0U,sizeof(void *),0);
  Cyc_fprintf(_T6,_T7,_T8);
}
void Cyc_CfFlowInfo_print_flowdict(struct Cyc_Dict_Dict d) {
  struct Cyc_Dict_Dict _T0;
  _T0 = d;
  Cyc_Dict_iter(Cyc_CfFlowInfo_print_flow_mapping,_T0);
}
void Cyc_CfFlowInfo_print_flow(union Cyc_CfFlowInfo_FlowInfo f) {
  union Cyc_CfFlowInfo_FlowInfo _T0;
  struct _union_FlowInfo_BottomFL _T1;
  unsigned int _T2;
  struct Cyc___cycFILE * _T3;
  struct _fat_ptr _T4;
  struct _fat_ptr _T5;
  union Cyc_CfFlowInfo_FlowInfo _T6;
  struct _union_FlowInfo_ReachableFL _T7;
  struct Cyc___cycFILE * _T8;
  struct _fat_ptr _T9;
  struct _fat_ptr _TA;
  struct Cyc___cycFILE * _TB;
  struct _fat_ptr _TC;
  struct _fat_ptr _TD;
  struct Cyc_Dict_Dict _TE;
  _T0 = f;
  _T1 = _T0.BottomFL;
  _T2 = _T1.tag;
  if (_T2 != 1) { goto _TL21E;
  }
  _T3 = Cyc_stderr;
  _T4 = _tag_fat("  BottomFL\n",sizeof(char),12U);
  _T5 = _tag_fat(0U,sizeof(void *),0);
  Cyc_fprintf(_T3,_T4,_T5);
  goto _LL0;
  _TL21E: _T6 = f;
  _T7 = _T6.ReachableFL;
  _TE = _T7.val;
  { struct Cyc_Dict_Dict fd = _TE;
    _T8 = Cyc_stderr;
    _T9 = _tag_fat("  ReachableFL:\n",sizeof(char),16U);
    _TA = _tag_fat(0U,sizeof(void *),0);
    Cyc_fprintf(_T8,_T9,_TA);
    Cyc_CfFlowInfo_print_flowdict(fd);
    _TB = Cyc_stderr;
    _TC = _tag_fat("\n",sizeof(char),2U);
    _TD = _tag_fat(0U,sizeof(void *),0);
    Cyc_fprintf(_TB,_TC,_TD);
    goto _LL0;
  }_LL0: ;
}
