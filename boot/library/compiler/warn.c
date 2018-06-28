#include <cyc_include.h>
extern char Cyc_Core_Impossible[11U];
 struct Cyc_Core_Impossible_exn_struct {
  char * tag;
  struct _fat_ptr f1;
};
extern struct _RegionHandle * Cyc_Core_heap_region;
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
extern int Cyc_fflush(struct Cyc___cycFILE *);
extern int Cyc_fprintf(struct Cyc___cycFILE *,struct _fat_ptr,struct _fat_ptr);
extern int Cyc_vfprintf(struct Cyc___cycFILE *,struct _fat_ptr,struct _fat_ptr);
extern struct _fat_ptr Cyc_vrprintf(struct _RegionHandle *,struct _fat_ptr,
				    struct _fat_ptr);
 struct Cyc_List_List {
  void * hd;
  struct Cyc_List_List * tl;
};
extern struct Cyc_List_List * Cyc_List_list(struct _fat_ptr);
extern struct Cyc_List_List * Cyc_List_imp_rev(struct Cyc_List_List *);
extern struct Cyc_List_List * Cyc_List_append(struct Cyc_List_List *,struct Cyc_List_List *);
extern unsigned long Cyc_strlen(struct _fat_ptr);
extern struct _fat_ptr Cyc_strconcat(struct _fat_ptr,struct _fat_ptr);
extern struct _fat_ptr Cyc_strconcat_l(struct Cyc_List_List *);
extern void Cyc_Position_reset_position(struct _fat_ptr);
extern struct _fat_ptr Cyc_Position_string_of_segment(unsigned int);
extern struct Cyc_List_List * Cyc_Position_strings_of_segments(struct Cyc_List_List *);
struct Cyc_Position_Error;
extern struct Cyc_Position_Error * Cyc_Position_mk_err(unsigned int,struct _fat_ptr);
extern unsigned int Cyc_Position_get_seg(struct Cyc_Position_Error *);
extern struct _fat_ptr Cyc_Position_get_desc(struct Cyc_Position_Error *);
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
struct _fat_ptr Cyc_Absynpp_typ2string(void *);
struct _fat_ptr Cyc_Absynpp_kind2string(struct Cyc_Absyn_Kind *);
struct _fat_ptr Cyc_Absynpp_attribute2string(void *);
struct _fat_ptr Cyc_Absynpp_kindbound2string(void *);
struct _fat_ptr Cyc_Absynpp_exp2string(struct Cyc_Absyn_Exp *);
struct _fat_ptr Cyc_Absynpp_stmt2string(struct Cyc_Absyn_Stmt *);
struct _fat_ptr Cyc_Absynpp_qvar2string(struct _tuple0 *);
struct Cyc___cycFILE;
extern struct Cyc___cycFILE * Cyc_stdout;
extern struct Cyc___cycFILE * Cyc_stderr;
extern struct _fat_ptr Cyc_aprintf(struct _fat_ptr,struct _fat_ptr);
extern int Cyc_fflush(struct Cyc___cycFILE *);
extern int Cyc_fprintf(struct Cyc___cycFILE *,struct _fat_ptr,struct _fat_ptr);
extern int Cyc_vfprintf(struct Cyc___cycFILE *,struct _fat_ptr,struct _fat_ptr);
extern struct _fat_ptr Cyc_vrprintf(struct _RegionHandle *,struct _fat_ptr,
				    struct _fat_ptr);
extern int Cyc_Warn_print_warnings;
extern int Cyc_Warn_num_errors;
extern int Cyc_Warn_max_errors;
 struct Cyc_Warn_String_Warn_Warg_struct {
  int tag;
  struct _fat_ptr f1;
};
 struct Cyc_Warn_Qvar_Warn_Warg_struct {
  int tag;
  struct _tuple0 * f1;
};
 struct Cyc_Warn_Typ_Warn_Warg_struct {
  int tag;
  void * f1;
};
 struct Cyc_Warn_TypOpt_Warn_Warg_struct {
  int tag;
  void * f1;
};
 struct Cyc_Warn_Exp_Warn_Warg_struct {
  int tag;
  struct Cyc_Absyn_Exp * f1;
};
 struct Cyc_Warn_Stmt_Warn_Warg_struct {
  int tag;
  struct Cyc_Absyn_Stmt * f1;
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
 struct Cyc_Warn_Attribute_Warn_Warg_struct {
  int tag;
  void * f1;
};
 struct Cyc_Warn_Vardecl_Warn_Warg_struct {
  int tag;
  struct Cyc_Absyn_Vardecl * f1;
};
 struct Cyc_Warn_Int_Warn_Warg_struct {
  int tag;
  int f1;
};
int Cyc_Warn_print_warnings = 1;
static int Cyc_Warn_pr(struct _fat_ptr fmt,struct _fat_ptr ap) {
  int _T0;
  int _T1;
  _T0 = Cyc_Warn_print_warnings;
  if (! _T0) { goto _TL0;
  }
  _T1 = Cyc_vfprintf(Cyc_stderr,fmt,ap);
  return _T1;
  _TL0: return 0;
}
static int Cyc_Warn_flush() {
  int _T0;
  _T0 = Cyc_fflush(Cyc_stderr);
  return _T0;
}
static struct Cyc_List_List * Cyc_Warn_warning_segs = 0;
static struct Cyc_List_List * Cyc_Warn_warning_msgs = 0;
void Cyc_Warn_vwarn(unsigned int loc,struct _fat_ptr fmt,struct _fat_ptr ap) {
  struct Cyc_List_List * _T0;
  unsigned int _T1;
  struct Cyc_List_List * _T2;
  struct _fat_ptr * _T3;
  struct _fat_ptr msg = Cyc_vrprintf(Cyc_Core_heap_region,fmt,ap);
  { struct Cyc_List_List * _T4 = _cycalloc(sizeof(struct Cyc_List_List));
    _T1 = loc;
    _T4->hd = (void *)_T1;
    _T4->tl = Cyc_Warn_warning_segs;
    _T0 = (struct Cyc_List_List *)_T4;
  }Cyc_Warn_warning_segs = _T0;
  { struct Cyc_List_List * _T4 = _cycalloc(sizeof(struct Cyc_List_List));
    { struct _fat_ptr * _T5 = _cycalloc(sizeof(struct _fat_ptr));
      *_T5 = msg;
      _T3 = (struct _fat_ptr *)_T5;
    }_T4->hd = _T3;
    _T4->tl = Cyc_Warn_warning_msgs;
    _T2 = (struct Cyc_List_List *)_T4;
  }Cyc_Warn_warning_msgs = _T2;
}
void Cyc_Warn_warn(unsigned int loc,struct _fat_ptr fmt,struct _fat_ptr ap) {
  Cyc_Warn_vwarn(loc,fmt,ap);
}
void Cyc_Warn_flush_warnings() {
  struct _fat_ptr _T0;
  struct _fat_ptr _T1;
  struct Cyc_String_pa_PrintArg_struct _T2;
  struct Cyc_List_List * _T3;
  void * _T4;
  struct _fat_ptr * _T5;
  struct Cyc_String_pa_PrintArg_struct _T6;
  struct Cyc_List_List * _T7;
  void * _T8;
  struct _fat_ptr * _T9;
  struct _fat_ptr _TA;
  struct _fat_ptr _TB;
  struct Cyc_List_List * _TC;
  struct Cyc_List_List * _TD;
  struct _fat_ptr _TE;
  struct _fat_ptr _TF;
  if (Cyc_Warn_warning_segs != 0) { goto _TL2;
  }
  return;
  _TL2: _T0 = _tag_fat("***Warnings***\n",sizeof(char),16U);
  _T1 = _tag_fat(0U,sizeof(void *),0);
  Cyc_Warn_pr(_T0,_T1);
  { struct Cyc_List_List * seg_strs = Cyc_Position_strings_of_segments(Cyc_Warn_warning_segs);
    Cyc_Warn_warning_segs = 0;
    Cyc_Warn_warning_msgs = Cyc_List_imp_rev(Cyc_Warn_warning_msgs);
    _TL4: if (Cyc_Warn_warning_msgs != 0) { goto _TL5;
    }else { goto _TL6;
    }
    _TL5: { struct Cyc_String_pa_PrintArg_struct _T10;
      _T10.tag = 0;
      _T3 = _check_null(seg_strs);
      _T4 = _T3->hd;
      _T5 = (struct _fat_ptr *)_T4;
      _T10.f1 = *_T5;
      _T2 = _T10;
    }{ struct Cyc_String_pa_PrintArg_struct _T10 = _T2;
      { struct Cyc_String_pa_PrintArg_struct _T11;
	_T11.tag = 0;
	_T7 = Cyc_Warn_warning_msgs;
	_T8 = _T7->hd;
	_T9 = (struct _fat_ptr *)_T8;
	_T11.f1 = *_T9;
	_T6 = _T11;
      }{ struct Cyc_String_pa_PrintArg_struct _T11 = _T6;
	void * _T12[2];
	_T12[0] = &_T10;
	_T12[1] = &_T11;
	_TA = _tag_fat("%s: %s\n",sizeof(char),8U);
	_TB = _tag_fat(_T12,sizeof(void *),2);
	Cyc_Warn_pr(_TA,_TB);
      }
    }_TC = seg_strs;
    seg_strs = _TC->tl;
    _TD = _check_null(Cyc_Warn_warning_msgs);
    Cyc_Warn_warning_msgs = _TD->tl;
    goto _TL4;
    _TL6: _TE = _tag_fat("**************\n",sizeof(char),16U);
    _TF = _tag_fat(0U,sizeof(void *),0);
    Cyc_Warn_pr(_TE,_TF);
    Cyc_Warn_flush();
  }
}
static long Cyc_Warn_error_b = 0;
void Cyc_Warn_reset(struct _fat_ptr f) {
  Cyc_Position_reset_position(f);
  Cyc_Warn_error_b = 0;
}
long Cyc_Warn_error_p() {
  long _T0;
  _T0 = Cyc_Warn_error_b;
  return _T0;
}
long Cyc_Warn_first_error = 1;
int Cyc_Warn_num_errors = 0;
int Cyc_Warn_max_errors = 10;
void Cyc_Warn_post_error(struct Cyc_Position_Error * e) {
  int _T0;
  long _T1;
  struct Cyc___cycFILE * _T2;
  struct _fat_ptr _T3;
  struct _fat_ptr _T4;
  struct Cyc_String_pa_PrintArg_struct _T5;
  unsigned int _T6;
  struct Cyc_String_pa_PrintArg_struct _T7;
  struct Cyc___cycFILE * _T8;
  struct _fat_ptr _T9;
  struct _fat_ptr _TA;
  struct Cyc___cycFILE * _TB;
  struct _fat_ptr _TC;
  struct _fat_ptr _TD;
  _T0 = Cyc_Warn_print_warnings;
  if (_T0) { goto _TL7;
  }else { goto _TL9;
  }
  _TL9: return;
  _TL7: Cyc_Warn_error_b = 1;
  Cyc_fflush(Cyc_stdout);
  _T1 = Cyc_Warn_first_error;
  if (! _T1) { goto _TLA;
  }
  _T2 = Cyc_stderr;
  _T3 = _tag_fat("\n",sizeof(char),2U);
  _T4 = _tag_fat(0U,sizeof(void *),0);
  Cyc_fprintf(_T2,_T3,_T4);
  Cyc_Warn_first_error = 0;
  goto _TLB;
  _TLA: _TLB: if (Cyc_Warn_num_errors > Cyc_Warn_max_errors) { goto _TLC;
  }
  { struct Cyc_String_pa_PrintArg_struct _TE;
    _TE.tag = 0;
    _T6 = Cyc_Position_get_seg(e);
    _TE.f1 = Cyc_Position_string_of_segment(_T6);
    _T5 = _TE;
  }{ struct Cyc_String_pa_PrintArg_struct _TE = _T5;
    { struct Cyc_String_pa_PrintArg_struct _TF;
      _TF.tag = 0;
      _TF.f1 = Cyc_Position_get_desc(e);
      _T7 = _TF;
    }{ struct Cyc_String_pa_PrintArg_struct _TF = _T7;
      void * _T10[2];
      _T10[0] = &_TE;
      _T10[1] = &_TF;
      _T8 = Cyc_stderr;
      _T9 = _tag_fat("%s: %s\n",sizeof(char),8U);
      _TA = _tag_fat(_T10,sizeof(void *),2);
      Cyc_fprintf(_T8,_T9,_TA);
    }
  }goto _TLD;
  _TLC: _TLD: if (Cyc_Warn_num_errors != Cyc_Warn_max_errors) { goto _TLE;
  }
  _TB = Cyc_stderr;
  _TC = _tag_fat("Too many error messages!\n",sizeof(char),26U);
  _TD = _tag_fat(0U,sizeof(void *),0);
  Cyc_fprintf(_TB,_TC,_TD);
  goto _TLF;
  _TLE: _TLF: Cyc_fflush(Cyc_stderr);
  Cyc_Warn_num_errors = Cyc_Warn_num_errors + 1;
}
void Cyc_Warn_verr(unsigned int loc,struct _fat_ptr fmt,struct _fat_ptr ap) {
  unsigned int _T0;
  struct _fat_ptr _T1;
  struct Cyc_Position_Error * _T2;
  _T0 = loc;
  _T1 = Cyc_vrprintf(Cyc_Core_heap_region,fmt,ap);
  _T2 = Cyc_Position_mk_err(_T0,_T1);
  Cyc_Warn_post_error(_T2);
}
void Cyc_Warn_err(unsigned int loc,struct _fat_ptr fmt,struct _fat_ptr ap) {
  Cyc_Warn_verr(loc,fmt,ap);
}
void * Cyc_Warn_vimpos(struct _fat_ptr fmt,struct _fat_ptr ap) {
  long _T0;
  struct Cyc_String_pa_PrintArg_struct _T1;
  struct _fat_ptr _T2;
  struct _fat_ptr _T3;
  struct Cyc_Core_Impossible_exn_struct * _T4;
  void * _T5;
  struct _fat_ptr msg = Cyc_vrprintf(Cyc_Core_heap_region,fmt,ap);
  _T0 = Cyc_Warn_error_p();
  if (_T0) { goto _TL10;
  }else { goto _TL12;
  }
  _TL12: { struct Cyc_String_pa_PrintArg_struct _T6;
    _T6.tag = 0;
    _T6.f1 = msg;
    _T1 = _T6;
  }{ struct Cyc_String_pa_PrintArg_struct _T6 = _T1;
    void * _T7[1];
    _T7[0] = &_T6;
    _T2 = _tag_fat("Compiler Error: %s\n",sizeof(char),20U);
    _T3 = _tag_fat(_T7,sizeof(void *),1);
    Cyc_Warn_pr(_T2,_T3);
  }Cyc_Warn_flush();
  goto _TL11;
  _TL10: _TL11: { struct Cyc_Core_Impossible_exn_struct * _T6 = _cycalloc(sizeof(struct Cyc_Core_Impossible_exn_struct));
    _T6->tag = Cyc_Core_Impossible;
    _T6->f1 = msg;
    _T4 = (struct Cyc_Core_Impossible_exn_struct *)_T6;
  }_T5 = (void *)_T4;
  _throw(_T5);
}
void * Cyc_Warn_impos(struct _fat_ptr fmt,struct _fat_ptr ap) {
  Cyc_Warn_vimpos(fmt,ap);
}
void * Cyc_Warn_vimpos_loc(unsigned int loc,struct _fat_ptr fmt,struct _fat_ptr ap) {
  long _T0;
  struct _fat_ptr _T1;
  struct _fat_ptr _T2;
  struct Cyc_Core_Impossible_exn_struct * _T3;
  void * _T4;
  _T0 = Cyc_Warn_error_p();
  if (_T0) { goto _TL13;
  }else { goto _TL15;
  }
  _TL15: _T1 = _tag_fat("Compiler Error: \n",sizeof(char),18U);
  _T2 = _tag_fat(0U,sizeof(void *),0);
  Cyc_Warn_pr(_T1,_T2);
  Cyc_Warn_verr(loc,fmt,ap);
  goto _TL14;
  _TL13: _TL14: { struct Cyc_Core_Impossible_exn_struct * _T5 = _cycalloc(sizeof(struct Cyc_Core_Impossible_exn_struct));
    _T5->tag = Cyc_Core_Impossible;
    _T5->f1 = _tag_fat("Compiler Error",sizeof(char),15U);
    _T3 = (struct Cyc_Core_Impossible_exn_struct *)_T5;
  }_T4 = (void *)_T3;
  _throw(_T4);
}
void * Cyc_Warn_impos_loc(unsigned int loc,struct _fat_ptr fmt,struct _fat_ptr ap) {
  Cyc_Warn_vimpos_loc(loc,fmt,ap);
}
static struct _fat_ptr Cyc_Warn_args2string(struct _fat_ptr args) {
  int _T0;
  unsigned int _T1;
  struct _fat_ptr _T2;
  unsigned int _T3;
  struct _fat_ptr _T4;
  unsigned char * _T5;
  void * * _T6;
  void * * _T7;
  int _T8;
  int * _T9;
  unsigned int _TA;
  void * _TB;
  void * _TC;
  unsigned int _TD;
  void * _TE;
  struct _fat_ptr _TF;
  struct Cyc_Absyn_Aggrdecl * _T10;
  enum Cyc_Absyn_AggrKind _T11;
  int _T12;
  struct Cyc_Absyn_Aggrdecl * _T13;
  struct _tuple0 * _T14;
  struct _fat_ptr _T15;
  struct Cyc_Absyn_Tvar * _T16;
  struct _fat_ptr * _T17;
  void * _T18;
  void * _T19;
  struct Cyc_Absyn_Vardecl * _T1A;
  struct _tuple0 * _T1B;
  struct _fat_ptr _T1C;
  struct Cyc_Int_pa_PrintArg_struct _T1D;
  int _T1E;
  struct _fat_ptr _T1F;
  struct _fat_ptr _T20;
  unsigned long _T21;
  struct Cyc_List_List * _T22;
  struct _fat_ptr * _T23;
  struct _fat_ptr * _T24;
  struct _fat_ptr * _T25;
  struct _fat_ptr _T26;
  struct Cyc_List_List * _T27;
  int _T28;
  struct Cyc_List_List * _T29;
  struct _fat_ptr * _T2A;
  struct _fat_ptr * _T2B;
  struct _fat_ptr _T2C;
  struct Cyc_List_List * _T2D;
  struct Cyc_List_List * _T2E;
  struct _fat_ptr * _T2F;
  int _T30;
  struct Cyc_List_List * _T31;
  struct _fat_ptr _T32;
  struct Cyc_List_List * lst = 0;
  int curr_line_len = 0;
  { int i = 0;
    _TL19: _T0 = i;
    _T1 = (unsigned int)_T0;
    _T2 = args;
    _T3 = _get_fat_size(_T2,sizeof(void *));
    if (_T1 < _T3) { goto _TL17;
    }else { goto _TL18;
    }
    _TL17: { struct _fat_ptr s;
      _T4 = args;
      _T5 = _T4.curr;
      _T6 = (void * *)_T5;
      _T7 = _check_null(_T6);
      _T8 = i;
      { void * _T33 = _T7[_T8];
	int _T34;
	struct Cyc_Absyn_Vardecl * _T35;
	void * _T36;
	struct _fat_ptr _T37;
	_T9 = (int *)_T33;
	_TA = *_T9;
	switch (_TA) {
	case 0: 
	  { struct Cyc_Warn_String_Warn_Warg_struct * _T38 = (struct Cyc_Warn_String_Warn_Warg_struct *)_T33;
	    _T37 = _T38->f1;
	  }{ struct _fat_ptr s2 = _T37;
	    s = s2;
	    goto _LL0;
	  }
	case 4: 
	  { struct Cyc_Warn_Exp_Warn_Warg_struct * _T38 = (struct Cyc_Warn_Exp_Warn_Warg_struct *)_T33;
	    _T36 = _T38->f1;
	  }{ struct Cyc_Absyn_Exp * e = _T36;
	    s = Cyc_Absynpp_exp2string(e);
	    goto _LL0;
	  }
	case 3: 
	  { struct Cyc_Warn_TypOpt_Warn_Warg_struct * _T38 = (struct Cyc_Warn_TypOpt_Warn_Warg_struct *)_T33;
	    _TB = _T38->f1;
	    _T36 = (void *)_TB;
	  }{ void * t = _T36;
	    _TC = t;
	    _TD = (unsigned int)_TC;
	    if (! _TD) { goto _TL1B;
	    }
	    _T36 = t;
	    goto _LL8;
	    _TL1B: s = _tag_fat("<?>",sizeof(char),4U);
	    goto _LL0;
	  }
	case 2: 
	  { struct Cyc_Warn_Typ_Warn_Warg_struct * _T38 = (struct Cyc_Warn_Typ_Warn_Warg_struct *)_T33;
	    _TE = _T38->f1;
	    _T36 = (void *)_TE;
	  }_LL8: { void * t = _T36;
	    s = Cyc_Absynpp_typ2string(t);
	    goto _LL0;
	  }
	case 1: 
	  { struct Cyc_Warn_Qvar_Warn_Warg_struct * _T38 = (struct Cyc_Warn_Qvar_Warn_Warg_struct *)_T33;
	    _T36 = _T38->f1;
	  }{ struct _tuple0 * qv = _T36;
	    s = Cyc_Absynpp_qvar2string(qv);
	    goto _LL0;
	  }
	case 5: 
	  { struct Cyc_Warn_Stmt_Warn_Warg_struct * _T38 = (struct Cyc_Warn_Stmt_Warn_Warg_struct *)_T33;
	    _T36 = _T38->f1;
	  }{ struct Cyc_Absyn_Stmt * s2 = _T36;
	    s = Cyc_Absynpp_stmt2string(s2);
	    goto _LL0;
	  }
	case 6: 
	  { struct Cyc_Warn_Aggrdecl_Warn_Warg_struct * _T38 = (struct Cyc_Warn_Aggrdecl_Warn_Warg_struct *)_T33;
	    _T36 = _T38->f1;
	  }{ struct Cyc_Absyn_Aggrdecl * ad = _T36;
	    _T10 = ad;
	    _T11 = _T10->kind;
	    _T12 = (int)_T11;
	    if (_T12 != 1) { goto _TL1D;
	    }
	    _TF = _tag_fat("union ",sizeof(char),7U);
	    goto _TL1E;
	    _TL1D: _TF = _tag_fat("struct ",sizeof(char),8U);
	    _TL1E: _T13 = ad;
	    _T14 = _T13->name;
	    _T15 = Cyc_Absynpp_qvar2string(_T14);
	    s = Cyc_strconcat(_TF,_T15);
	    goto _LL0;
	  }
	case 7: 
	  { struct Cyc_Warn_Tvar_Warn_Warg_struct * _T38 = (struct Cyc_Warn_Tvar_Warn_Warg_struct *)_T33;
	    _T36 = _T38->f1;
	  }{ struct Cyc_Absyn_Tvar * tv = _T36;
	    _T16 = tv;
	    _T17 = _T16->name;
	    s = *_T17;
	    goto _LL0;
	  }
	case 9: 
	  { struct Cyc_Warn_Kind_Warn_Warg_struct * _T38 = (struct Cyc_Warn_Kind_Warn_Warg_struct *)_T33;
	    _T36 = _T38->f1;
	  }{ struct Cyc_Absyn_Kind * k = _T36;
	    s = Cyc_Absynpp_kind2string(k);
	    goto _LL0;
	  }
	case 8: 
	  { struct Cyc_Warn_KindBound_Warn_Warg_struct * _T38 = (struct Cyc_Warn_KindBound_Warn_Warg_struct *)_T33;
	    _T18 = _T38->f1;
	    _T36 = (void *)_T18;
	  }{ void * kb = _T36;
	    s = Cyc_Absynpp_kindbound2string(kb);
	    goto _LL0;
	  }
	case 10: 
	  { struct Cyc_Warn_Attribute_Warn_Warg_struct * _T38 = (struct Cyc_Warn_Attribute_Warn_Warg_struct *)_T33;
	    _T19 = _T38->f1;
	    _T36 = (void *)_T19;
	  }{ void * a = _T36;
	    s = Cyc_Absynpp_attribute2string(a);
	    goto _LL0;
	  }
	case 11: 
	  { struct Cyc_Warn_Vardecl_Warn_Warg_struct * _T38 = (struct Cyc_Warn_Vardecl_Warn_Warg_struct *)_T33;
	    _T35 = _T38->f1;
	  }{ struct Cyc_Absyn_Vardecl * vd = _T35;
	    _T1A = vd;
	    _T1B = _T1A->name;
	    s = Cyc_Absynpp_qvar2string(_T1B);
	    goto _LL0;
	  }
	default: 
	  { struct Cyc_Warn_Int_Warn_Warg_struct * _T38 = (struct Cyc_Warn_Int_Warn_Warg_struct *)_T33;
	    _T34 = _T38->f1;
	  }{ int i = _T34;
	    { struct Cyc_Int_pa_PrintArg_struct _T38;
	      _T38.tag = 1;
	      _T1E = i;
	      _T38.f1 = (unsigned long)_T1E;
	      _T1D = _T38;
	    }{ struct Cyc_Int_pa_PrintArg_struct _T38 = _T1D;
	      void * _T39[1];
	      _T39[0] = &_T38;
	      _T1F = _tag_fat("%d",sizeof(char),3U);
	      _T20 = _tag_fat(_T39,sizeof(void *),1);
	      _T1C = Cyc_aprintf(_T1F,_T20);
	    }s = _T1C;
	    goto _LL0;
	  }
	}
	_LL0: ;
      }_T21 = Cyc_strlen(s);
      { int s_len = (int)_T21;
	if (s_len < 80) { goto _TL1F;
	}
	{ struct _fat_ptr * _T33[3];
	  { struct _fat_ptr * _T34 = _cycalloc(sizeof(struct _fat_ptr));
	    *_T34 = _tag_fat("\n",sizeof(char),2U);
	    _T23 = (struct _fat_ptr *)_T34;
	  }_T33[0] = _T23;
	  { struct _fat_ptr * _T34 = _cycalloc(sizeof(struct _fat_ptr));
	    *_T34 = s;
	    _T24 = (struct _fat_ptr *)_T34;
	  }_T33[1] = _T24;
	  { struct _fat_ptr * _T34 = _cycalloc(sizeof(struct _fat_ptr));
	    *_T34 = _tag_fat("\n",sizeof(char),2U);
	    _T25 = (struct _fat_ptr *)_T34;
	  }_T33[2] = _T25;
	  _T26 = _tag_fat(_T33,sizeof(struct _fat_ptr *),3);
	  _T22 = Cyc_List_list(_T26);
	}_T27 = lst;
	lst = Cyc_List_append(_T22,_T27);
	curr_line_len = 0;
	goto _TL20;
	_TL1F: _T28 = curr_line_len + s_len;
	if (_T28 < 80) { goto _TL21;
	}
	{ struct _fat_ptr * _T33[2];
	  { struct _fat_ptr * _T34 = _cycalloc(sizeof(struct _fat_ptr));
	    *_T34 = _tag_fat("\n",sizeof(char),2U);
	    _T2A = (struct _fat_ptr *)_T34;
	  }_T33[0] = _T2A;
	  { struct _fat_ptr * _T34 = _cycalloc(sizeof(struct _fat_ptr));
	    *_T34 = s;
	    _T2B = (struct _fat_ptr *)_T34;
	  }_T33[1] = _T2B;
	  _T2C = _tag_fat(_T33,sizeof(struct _fat_ptr *),2);
	  _T29 = Cyc_List_list(_T2C);
	}_T2D = lst;
	lst = Cyc_List_append(_T29,_T2D);
	curr_line_len = s_len;
	goto _TL22;
	_TL21: { struct Cyc_List_List * _T33 = _cycalloc(sizeof(struct Cyc_List_List));
	  { struct _fat_ptr * _T34 = _cycalloc(sizeof(struct _fat_ptr));
	    *_T34 = s;
	    _T2F = (struct _fat_ptr *)_T34;
	  }_T33->hd = _T2F;
	  _T33->tl = lst;
	  _T2E = (struct Cyc_List_List *)_T33;
	}lst = _T2E;
	_T30 = s_len;
	curr_line_len = curr_line_len + _T30;
	_TL22: _TL20: ;
      }
    }i = i + 1;
    goto _TL19;
    _TL18: ;
  }_T31 = Cyc_List_imp_rev(lst);
  _T32 = Cyc_strconcat_l(_T31);
  return _T32;
}
void Cyc_Warn_verr2(unsigned int loc,struct _fat_ptr args) {
  unsigned int _T0;
  struct _fat_ptr _T1;
  struct Cyc_Position_Error * _T2;
  _T0 = loc;
  _T1 = Cyc_Warn_args2string(args);
  _T2 = Cyc_Position_mk_err(_T0,_T1);
  Cyc_Warn_post_error(_T2);
}
void Cyc_Warn_err2(unsigned int loc,struct _fat_ptr args) {
  Cyc_Warn_verr2(loc,args);
}
void Cyc_Warn_vwarn2(unsigned int loc,struct _fat_ptr args) {
  struct Cyc_List_List * _T0;
  unsigned int _T1;
  struct Cyc_List_List * _T2;
  struct _fat_ptr * _T3;
  struct _fat_ptr msg = Cyc_Warn_args2string(args);
  { struct Cyc_List_List * _T4 = _cycalloc(sizeof(struct Cyc_List_List));
    _T1 = loc;
    _T4->hd = (void *)_T1;
    _T4->tl = Cyc_Warn_warning_segs;
    _T0 = (struct Cyc_List_List *)_T4;
  }Cyc_Warn_warning_segs = _T0;
  { struct Cyc_List_List * _T4 = _cycalloc(sizeof(struct Cyc_List_List));
    { struct _fat_ptr * _T5 = _cycalloc(sizeof(struct _fat_ptr));
      *_T5 = msg;
      _T3 = (struct _fat_ptr *)_T5;
    }_T4->hd = _T3;
    _T4->tl = Cyc_Warn_warning_msgs;
    _T2 = (struct Cyc_List_List *)_T4;
  }Cyc_Warn_warning_msgs = _T2;
}
void Cyc_Warn_warn2(unsigned int loc,struct _fat_ptr args) {
  Cyc_Warn_vwarn2(loc,args);
}
void * Cyc_Warn_vimpos2(struct _fat_ptr args) {
  long _T0;
  struct Cyc_String_pa_PrintArg_struct _T1;
  struct _fat_ptr _T2;
  struct _fat_ptr _T3;
  struct Cyc_Core_Impossible_exn_struct * _T4;
  void * _T5;
  struct _fat_ptr msg = Cyc_Warn_args2string(args);
  _T0 = Cyc_Warn_error_p();
  if (_T0) { goto _TL23;
  }else { goto _TL25;
  }
  _TL25: { struct Cyc_String_pa_PrintArg_struct _T6;
    _T6.tag = 0;
    _T6.f1 = msg;
    _T1 = _T6;
  }{ struct Cyc_String_pa_PrintArg_struct _T6 = _T1;
    void * _T7[1];
    _T7[0] = &_T6;
    _T2 = _tag_fat("Compiler Error: %s\n",sizeof(char),20U);
    _T3 = _tag_fat(_T7,sizeof(void *),1);
    Cyc_Warn_pr(_T2,_T3);
  }Cyc_Warn_flush();
  goto _TL24;
  _TL23: _TL24: { struct Cyc_Core_Impossible_exn_struct * _T6 = _cycalloc(sizeof(struct Cyc_Core_Impossible_exn_struct));
    _T6->tag = Cyc_Core_Impossible;
    _T6->f1 = msg;
    _T4 = (struct Cyc_Core_Impossible_exn_struct *)_T6;
  }_T5 = (void *)_T4;
  _throw(_T5);
}
void * Cyc_Warn_impos2(struct _fat_ptr args) {
  Cyc_Warn_vimpos2(args);
}
void * Cyc_Warn_vimpos_loc2(unsigned int loc,struct _fat_ptr args) {
  long _T0;
  struct _fat_ptr _T1;
  struct _fat_ptr _T2;
  struct Cyc_Core_Impossible_exn_struct * _T3;
  void * _T4;
  struct _fat_ptr msg = Cyc_Warn_args2string(args);
  _T0 = Cyc_Warn_error_p();
  if (_T0) { goto _TL26;
  }else { goto _TL28;
  }
  _TL28: _T1 = _tag_fat("Compiler Error: \n",sizeof(char),18U);
  _T2 = _tag_fat(0U,sizeof(void *),0);
  Cyc_Warn_pr(_T1,_T2);
  Cyc_Warn_verr2(loc,args);
  Cyc_Warn_flush();
  goto _TL27;
  _TL26: _TL27: { struct Cyc_Core_Impossible_exn_struct * _T5 = _cycalloc(sizeof(struct Cyc_Core_Impossible_exn_struct));
    _T5->tag = Cyc_Core_Impossible;
    _T5->f1 = msg;
    _T3 = (struct Cyc_Core_Impossible_exn_struct *)_T5;
  }_T4 = (void *)_T3;
  _throw(_T4);
}
void * Cyc_Warn_impos_loc2(unsigned int loc,struct _fat_ptr args) {
  Cyc_Warn_vimpos_loc2(loc,args);
}
