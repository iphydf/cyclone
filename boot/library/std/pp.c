#include <cyc_include.h>
struct _fat_ptr Cyc_Core_new_string(unsigned int);
void * Cyc_Core_identity(void *);
int Cyc_Core_intcmp(int,int);
extern char Cyc_Core_Failure[8U];
 struct Cyc_Core_Failure_exn_struct {
  char * tag;
  struct _fat_ptr f1;
};
extern char Cyc_Core_Not_found[10U];
 struct Cyc_Core_Not_found_exn_struct {
  char * tag;
};
struct Cyc___cycFILE;
 struct Cyc_String_pa_PrintArg_struct {
  int tag;
  struct _fat_ptr f1;
};
extern int Cyc_fprintf(struct Cyc___cycFILE *,struct _fat_ptr,struct _fat_ptr);
 struct Cyc_List_List {
  void * hd;
  struct Cyc_List_List * tl;
};
extern int Cyc_List_length(struct Cyc_List_List *);
 struct Cyc_Fn_Function {
  void * (* f)(void *,void *);
  void * env;
};
extern struct Cyc_Fn_Function * Cyc_Fn_make_fn(void * (*)(void *,void *),
					       void *);
extern struct Cyc_Fn_Function * Cyc_Fn_fp2fn(void * (*)(void *));
extern void * Cyc_Fn_apply(struct Cyc_Fn_Function *,void *);
struct Cyc_Hashtable_Table;
extern struct Cyc_Hashtable_Table * Cyc_Hashtable_create(int,int (*)(void *,
								     void *),
							 int (*)(void *));
extern void Cyc_Hashtable_insert(struct Cyc_Hashtable_Table *,void *,void *);
extern void * Cyc_Hashtable_lookup(struct Cyc_Hashtable_Table *,void *);
extern int Cyc_Hashtable_hash_stringptr(struct _fat_ptr *);
extern int Cyc_PP_tex_output;
struct Cyc_PP_Ppstate;
struct Cyc_PP_Out;
struct Cyc_PP_Doc;
extern unsigned long Cyc_strlen(struct _fat_ptr);
extern int Cyc_zstrptrcmp(struct _fat_ptr *,struct _fat_ptr *);
extern struct _fat_ptr Cyc_str_sepstr(struct Cyc_List_List *,struct _fat_ptr);
 struct Cyc_Xarray_Xarray {
  struct _fat_ptr elmts;
  int num_elmts;
};
extern int Cyc_Xarray_length(struct Cyc_Xarray_Xarray *);
extern void * Cyc_Xarray_get(struct Cyc_Xarray_Xarray *,int);
extern void Cyc_Xarray_set(struct Cyc_Xarray_Xarray *,int,void *);
extern struct Cyc_Xarray_Xarray * Cyc_Xarray_create(int,void *);
extern void Cyc_Xarray_add(struct Cyc_Xarray_Xarray *,void *);
extern void Cyc_Xarray_reuse(struct Cyc_Xarray_Xarray *);
 struct Cyc_PP_Empty_PP_Alist_struct {
  int tag;
};
 struct Cyc_PP_Single_PP_Alist_struct {
  int tag;
  void * f1;
};
 struct Cyc_PP_Append_PP_Alist_struct {
  int tag;
  void * f1;
  void * f2;
};
struct Cyc_PP_Empty_PP_Alist_struct Cyc_PP_Empty_stringptr = {0};
struct Cyc_PP_Empty_PP_Alist_struct Cyc_PP_Empty_link = {0};
 struct _tuple0 {
  void * f0;
  void * f1;
};
void * Cyc_PP_append(void * a1,void * a2) {
  struct _tuple0 _T0;
  void * _T1;
  int * _T2;
  int _T3;
  void * _T4;
  void * _T5;
  int * _T6;
  int _T7;
  void * _T8;
  struct Cyc_PP_Append_PP_Alist_struct * _T9;
  void * _TA;
  { struct _tuple0 _TB;
    _TB.f0 = a1;
    _TB.f1 = a2;
    _T0 = _TB;
  }{ struct _tuple0 _TB = _T0;
    _T1 = _TB.f0;
    _T2 = (int *)_T1;
    _T3 = *_T2;
    if (_T3 != 0) { goto _TL0;
    }
    _T4 = a2;
    return _T4;
    _TL0: _T5 = _TB.f1;
    _T6 = (int *)_T5;
    _T7 = *_T6;
    if (_T7 != 0) { goto _TL2;
    }
    _T8 = a1;
    return _T8;
    _TL2: { struct Cyc_PP_Append_PP_Alist_struct * _TC = _cycalloc(sizeof(struct Cyc_PP_Append_PP_Alist_struct));
      _TC->tag = 2;
      _TC->f1 = a1;
      _TC->f2 = a2;
      _T9 = (struct Cyc_PP_Append_PP_Alist_struct *)_TC;
    }_TA = (void *)_T9;
    return _TA;
    ;
  }
}
struct Cyc_List_List * Cyc_PP_list_of_alist_f(void * y,struct Cyc_List_List * l) {
  void * _T0;
  int * _T1;
  unsigned int _T2;
  struct Cyc_List_List * _T3;
  void * _T4;
  void * _T5;
  struct Cyc_List_List * _T6;
  void * _T7;
  void * _T8;
  void * _T9;
  void * _TA;
  struct Cyc_List_List * _TB;
  struct Cyc_List_List * _TC;
  void * _TD;
  void * _TE;
  _T0 = y;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  switch (_T2) {
  case 0: 
    _T3 = l;
    return _T3;
  case 1: 
    _T4 = y;
    { struct Cyc_PP_Single_PP_Alist_struct * _TF = (struct Cyc_PP_Single_PP_Alist_struct *)_T4;
      _T5 = _TF->f1;
      _TE = (void *)_T5;
    }{ void * z = _TE;
      { struct Cyc_List_List * _TF = _cycalloc(sizeof(struct Cyc_List_List));
	_TF->hd = z;
	_TF->tl = l;
	_T6 = (struct Cyc_List_List *)_TF;
      }return _T6;
    }
  default: 
    _T7 = y;
    { struct Cyc_PP_Append_PP_Alist_struct * _TF = (struct Cyc_PP_Append_PP_Alist_struct *)_T7;
      _T8 = _TF->f1;
      _TE = (void *)_T8;
      _T9 = _TF->f2;
      _TD = (void *)_T9;
    }{ void * a1 = _TE;
      void * a2 = _TD;
      _TA = a1;
      _TB = Cyc_PP_list_of_alist_f(a2,l);
      _TC = Cyc_PP_list_of_alist_f(_TA,_TB);
      return _TC;
    }
  }
  ;
}
struct Cyc_List_List * Cyc_PP_list_of_alist(void * x) {
  struct Cyc_List_List * _T0;
  _T0 = Cyc_PP_list_of_alist_f(x,0);
  return _T0;
}
 struct Cyc_PP_Ppstate {
  int ci;
  int cc;
  int cl;
  int pw;
  int epw;
};
 struct Cyc_PP_Out {
  int newcc;
  int newcl;
  void * ppout;
  void * links;
};
 struct Cyc_PP_Doc {
  int mwo;
  int mw;
  struct Cyc_Fn_Function * f;
};
static void Cyc_PP_dump_out(struct Cyc___cycFILE * f,void * al) {
  int * _T0;
  unsigned int _T1;
  struct _fat_ptr * _T2;
  struct Cyc_String_pa_PrintArg_struct _T3;
  struct _fat_ptr * _T4;
  struct Cyc___cycFILE * _T5;
  struct _fat_ptr _T6;
  struct _fat_ptr _T7;
  void * _T8;
  void * _T9;
  int _TA;
  int _TB;
  int _TC;
  struct Cyc_Xarray_Xarray * _TD;
  int _TE;
  void * _TF;
  struct Cyc_Xarray_Xarray * xarr = Cyc_Xarray_create(16,al);
  Cyc_Xarray_add(xarr,al);
  { int last = 0;
    _TL5: if (last >= 0) { goto _TL6;
    }else { goto _TL7;
    }
    _TL6: { void * _T10 = Cyc_Xarray_get(xarr,last);
      void * _T11;
      void * _T12;
      _T0 = (int *)_T10;
      _T1 = *_T0;
      switch (_T1) {
      case 0: 
	last = last + -1;
	goto _LL0;
      case 1: 
	{ struct Cyc_PP_Single_PP_Alist_struct * _T13 = (struct Cyc_PP_Single_PP_Alist_struct *)_T10;
	  _T2 = _T13->f1;
	  _T12 = (struct _fat_ptr *)_T2;
	}{ struct _fat_ptr * s = _T12;
	  last = last + -1;
	  { struct Cyc_String_pa_PrintArg_struct _T13;
	    _T13.tag = 0;
	    _T4 = s;
	    _T13.f1 = *_T4;
	    _T3 = _T13;
	  }{ struct Cyc_String_pa_PrintArg_struct _T13 = _T3;
	    void * _T14[1];
	    _T14[0] = &_T13;
	    _T5 = f;
	    _T6 = _tag_fat("%s",sizeof(char),3U);
	    _T7 = _tag_fat(_T14,sizeof(void *),1);
	    Cyc_fprintf(_T5,_T6,_T7);
	  }goto _LL0;
	}
      default: 
	{ struct Cyc_PP_Append_PP_Alist_struct * _T13 = (struct Cyc_PP_Append_PP_Alist_struct *)_T10;
	  _T8 = _T13->f1;
	  _T12 = (void *)_T8;
	  _T9 = _T13->f2;
	  _T11 = (void *)_T9;
	}{ void * a1 = _T12;
	  void * a2 = _T11;
	  Cyc_Xarray_set(xarr,last,a2);
	  _TA = last;
	  _TB = Cyc_Xarray_length(xarr);
	  _TC = _TB - 1;
	  if (_TA != _TC) { goto _TL9;
	  }
	  Cyc_Xarray_add(xarr,a1);
	  goto _TLA;
	  _TL9: _TD = xarr;
	  _TE = last + 1;
	  _TF = a1;
	  Cyc_Xarray_set(_TD,_TE,_TF);
	  _TLA: last = last + 1;
	  goto _LL0;
	}
      }
      _LL0: ;
    }goto _TL5;
    _TL7: Cyc_Xarray_reuse(xarr);
  }
}
void Cyc_PP_file_of_doc(struct Cyc_PP_Doc * d,int w,struct Cyc___cycFILE * f) {
  struct Cyc_PP_Out * (* _T0)(struct Cyc_Fn_Function *,struct Cyc_PP_Ppstate *);
  void * (* _T1)(struct Cyc_Fn_Function *,void *);
  struct Cyc_PP_Doc * _T2;
  struct Cyc_Fn_Function * _T3;
  struct Cyc_PP_Ppstate * _T4;
  struct Cyc___cycFILE * _T5;
  struct Cyc_PP_Out * _T6;
  void * _T7;
  if (w < 0) { goto _TLB;
  }
  goto _TLC;
  _TLB: _throw_assert();
  _TLC: _T1 = Cyc_Fn_apply;
  { struct Cyc_PP_Out * (* _T8)(struct Cyc_Fn_Function *,struct Cyc_PP_Ppstate *) = (struct Cyc_PP_Out * (*)(struct Cyc_Fn_Function *,
													     struct Cyc_PP_Ppstate *))_T1;
    _T0 = _T8;
  }_T2 = d;
  _T3 = _T2->f;
  { struct Cyc_PP_Ppstate * _T8 = _cycalloc(sizeof(struct Cyc_PP_Ppstate));
    _T8->ci = 0;
    _T8->cc = 0;
    _T8->cl = 1;
    _T8->pw = w;
    _T8->epw = w;
    _T4 = (struct Cyc_PP_Ppstate *)_T8;
  }{ struct Cyc_PP_Out * o = _T0(_T3,_T4);
    _T5 = f;
    _T6 = o;
    _T7 = _T6->ppout;
    Cyc_PP_dump_out(_T5,_T7);
  }
}
struct _fat_ptr Cyc_PP_string_of_doc(struct Cyc_PP_Doc * d,int w) {
  struct Cyc_PP_Out * (* _T0)(struct Cyc_Fn_Function *,struct Cyc_PP_Ppstate *);
  void * (* _T1)(struct Cyc_Fn_Function *,void *);
  struct Cyc_PP_Doc * _T2;
  struct Cyc_Fn_Function * _T3;
  struct Cyc_PP_Ppstate * _T4;
  struct Cyc_PP_Out * _T5;
  void * _T6;
  struct Cyc_List_List * _T7;
  struct _fat_ptr _T8;
  struct _fat_ptr _T9;
  if (w < 0) { goto _TLD;
  }
  goto _TLE;
  _TLD: _throw_assert();
  _TLE: _T1 = Cyc_Fn_apply;
  { struct Cyc_PP_Out * (* _TA)(struct Cyc_Fn_Function *,struct Cyc_PP_Ppstate *) = (struct Cyc_PP_Out * (*)(struct Cyc_Fn_Function *,
													     struct Cyc_PP_Ppstate *))_T1;
    _T0 = _TA;
  }_T2 = d;
  _T3 = _T2->f;
  { struct Cyc_PP_Ppstate * _TA = _cycalloc(sizeof(struct Cyc_PP_Ppstate));
    _TA->ci = 0;
    _TA->cc = 0;
    _TA->cl = 1;
    _TA->pw = w;
    _TA->epw = w;
    _T4 = (struct Cyc_PP_Ppstate *)_TA;
  }{ struct Cyc_PP_Out * o = _T0(_T3,_T4);
    _T5 = o;
    _T6 = _T5->ppout;
    _T7 = Cyc_PP_list_of_alist(_T6);
    _T8 = _tag_fat("",sizeof(char),1U);
    _T9 = Cyc_str_sepstr(_T7,_T8);
    return _T9;
  }
}
 struct _tuple1 {
  struct _fat_ptr f0;
  struct Cyc_List_List * f1;
};
struct _tuple1 * Cyc_PP_string_and_links(struct Cyc_PP_Doc * d,int w) {
  struct Cyc_PP_Out * (* _T0)(struct Cyc_Fn_Function *,struct Cyc_PP_Ppstate *);
  void * (* _T1)(struct Cyc_Fn_Function *,void *);
  struct Cyc_PP_Doc * _T2;
  struct Cyc_Fn_Function * _T3;
  struct Cyc_PP_Ppstate * _T4;
  struct _tuple1 * _T5;
  struct Cyc_PP_Out * _T6;
  void * _T7;
  struct Cyc_List_List * _T8;
  struct _fat_ptr _T9;
  struct _fat_ptr _TA;
  struct Cyc_PP_Out * _TB;
  void * _TC;
  if (w < 0) { goto _TLF;
  }
  goto _TL10;
  _TLF: _throw_assert();
  _TL10: _T1 = Cyc_Fn_apply;
  { struct Cyc_PP_Out * (* _TD)(struct Cyc_Fn_Function *,struct Cyc_PP_Ppstate *) = (struct Cyc_PP_Out * (*)(struct Cyc_Fn_Function *,
													     struct Cyc_PP_Ppstate *))_T1;
    _T0 = _TD;
  }_T2 = d;
  _T3 = _T2->f;
  { struct Cyc_PP_Ppstate * _TD = _cycalloc(sizeof(struct Cyc_PP_Ppstate));
    _TD->ci = 0;
    _TD->cc = 0;
    _TD->cl = 1;
    _TD->pw = w;
    _TD->epw = w;
    _T4 = (struct Cyc_PP_Ppstate *)_TD;
  }{ struct Cyc_PP_Out * o = _T0(_T3,_T4);
    { struct _tuple1 * _TD = _cycalloc(sizeof(struct _tuple1));
      _T6 = o;
      _T7 = _T6->ppout;
      _T8 = Cyc_PP_list_of_alist(_T7);
      _T9 = _tag_fat("",sizeof(char),1U);
      _TA = Cyc_str_sepstr(_T8,_T9);
      _TD->f0 = _TA;
      _TB = o;
      _TC = _TB->links;
      _TD->f1 = Cyc_PP_list_of_alist(_TC);
      _T5 = (struct _tuple1 *)_TD;
    }return _T5;
  }
}
int Cyc_PP_tex_output = 0;
static struct Cyc_Hashtable_Table * Cyc_PP_init_table(struct Cyc_Hashtable_Table * * tbl,
						      int (* cmp)(void *,
								  void *),
						      int (* hash)(void *)) {
  struct Cyc_Hashtable_Table * * _T0;
  struct Cyc_Hashtable_Table * _T1;
  struct Cyc_Hashtable_Table * * _T2;
  int (* _T3)(void *,void *);
  int (* _T4)(void *);
  struct Cyc_Hashtable_Table * * _T5;
  struct Cyc_Hashtable_Table * _T6;
  _T0 = tbl;
  _T1 = *_T0;
  if (_T1 != 0) { goto _TL11;
  }
  _T2 = tbl;
  _T3 = cmp;
  _T4 = hash;
  *_T2 = Cyc_Hashtable_create(101,_T3,_T4);
  goto _TL12;
  _TL11: _TL12: _T5 = tbl;
  _T6 = *_T5;
  return _T6;
}
struct _fat_ptr Cyc_PP_nlblanks(int i) {
  struct Cyc_Hashtable_Table * (* _T0)(struct Cyc_Hashtable_Table * *,int (*)(int,
									      int),
				       int (*)(int));
  struct Cyc_Hashtable_Table * * _T1;
  int (* _T2)(int,int);
  int (* _T3)(int);
  void * (* _T4)(void *);
  struct Cyc_Core_Failure_exn_struct * _T5;
  void * _T6;
  struct _handler_cons * _T7;
  int _T8;
  struct _fat_ptr * (* _T9)(struct Cyc_Hashtable_Table *,int);
  void * (* _TA)(struct Cyc_Hashtable_Table *,void *);
  struct _fat_ptr * _TB;
  void * _TC;
  struct Cyc_Core_Not_found_exn_struct * _TD;
  char * _TE;
  char * _TF;
  int _T10;
  int _T11;
  int _T12;
  int _T13;
  unsigned int _T14;
  struct _fat_ptr _T15;
  unsigned char * _T16;
  char * _T17;
  unsigned int _T18;
  unsigned char * _T19;
  char * _T1A;
  struct _fat_ptr _T1B;
  int _T1C;
  unsigned char * _T1D;
  char * _T1E;
  unsigned int _T1F;
  unsigned char * _T20;
  char * _T21;
  struct _fat_ptr _T22;
  int _T23;
  int _T24;
  int _T25;
  unsigned char * _T26;
  char * _T27;
  unsigned int _T28;
  unsigned char * _T29;
  char * _T2A;
  void (* _T2B)(struct Cyc_Hashtable_Table *,int,struct _fat_ptr *);
  void (* _T2C)(struct Cyc_Hashtable_Table *,void *,void *);
  struct Cyc_Hashtable_Table * _T2D;
  int _T2E;
  struct _fat_ptr * _T2F;
  struct _fat_ptr * _T30;
  unsigned int _T31;
  struct _fat_ptr _T32;
  struct _fat_ptr _T33;
  int _T34;
  unsigned int _T35;
  struct _fat_ptr _T36;
  unsigned char * _T37;
  char * _T38;
  char * _T39;
  unsigned int _T3A;
  unsigned char * _T3B;
  char * _T3C;
  struct _fat_ptr _T3D;
  unsigned char * _T3E;
  char * _T3F;
  unsigned int _T40;
  unsigned char * _T41;
  char * _T42;
  struct _fat_ptr _T43;
  unsigned char * _T44;
  char * _T45;
  unsigned int _T46;
  unsigned char * _T47;
  char * _T48;
  struct _fat_ptr _T49;
  int _T4A;
  unsigned char * _T4B;
  char * _T4C;
  unsigned int _T4D;
  unsigned char * _T4E;
  char * _T4F;
  void (* _T50)(struct Cyc_Hashtable_Table *,int,struct _fat_ptr *);
  void (* _T51)(struct Cyc_Hashtable_Table *,void *,void *);
  struct Cyc_Hashtable_Table * _T52;
  int _T53;
  struct _fat_ptr * _T54;
  struct _fat_ptr * _T55;
  unsigned int _T56;
  struct _fat_ptr _T57;
  struct _fat_ptr _T58;
  static struct Cyc_Hashtable_Table * bhashtbl = 0;
  { struct Cyc_Hashtable_Table * (* _T59)(struct Cyc_Hashtable_Table * *,
					  int (*)(int,int),int (*)(int)) = (struct Cyc_Hashtable_Table * (*)(struct Cyc_Hashtable_Table * *,
													     int (*)(int,
														     int),
													     int (*)(int)))Cyc_PP_init_table;
    _T0 = _T59;
  }_T1 = &bhashtbl;
  _T2 = Cyc_Core_intcmp;
  _T4 = Cyc_Core_identity;
  { int (* _T59)(int) = (int (*)(int))_T4;
    _T3 = _T59;
  }{ struct Cyc_Hashtable_Table * t = _T0(_T1,_T2,_T3);
    if (i >= 0) { goto _TL13;
    }
    { struct Cyc_Core_Failure_exn_struct * _T59 = _cycalloc(sizeof(struct Cyc_Core_Failure_exn_struct));
      _T59->tag = Cyc_Core_Failure;
      _T59->f1 = _tag_fat("nlblanks",sizeof(char),9U);
      _T5 = (struct Cyc_Core_Failure_exn_struct *)_T59;
    }_T6 = (void *)_T5;
    _throw(_T6);
    goto _TL14;
    _TL13: _TL14: { struct _handler_cons _T59;
      _T7 = &_T59;
      _push_handler(_T7);
      { int _T5A = 0;
	_T8 = setjmp(_T59.handler);
	if (! _T8) { goto _TL15;
	}
	_T5A = 1;
	goto _TL16;
	_TL15: _TL16: if (_T5A) { goto _TL17;
	}else { goto _TL19;
	}
	_TL19: _TA = Cyc_Hashtable_lookup;
	{ struct _fat_ptr * (* _T5B)(struct Cyc_Hashtable_Table *,int) = (struct _fat_ptr * (*)(struct Cyc_Hashtable_Table *,
												int))_TA;
	  _T9 = _T5B;
	}_TB = _T9(t,i);
	{ struct _fat_ptr _T5B = *_TB;
	  _npop_handler(0);
	  return _T5B;
	}_pop_handler();
	goto _TL18;
	_TL17: _TC = Cyc_Core_get_exn_thrown();
	{ void * _T5B = (void *)_TC;
	  void * _T5C;
	  _TD = (struct Cyc_Core_Not_found_exn_struct *)_T5B;
	  _TE = _TD->tag;
	  _TF = Cyc_Core_Not_found;
	  if (_TE != _TF) { goto _TL1A;
	  }
	  _T10 = Cyc_PP_tex_output;
	  if (_T10) { goto _TL1C;
	  }else { goto _TL1E;
	  }
	  _TL1E: { int num_tabs = i / 8;
	    int num_spaces = i % 8;
	    _T11 = 2 + num_tabs;
	    _T12 = num_spaces;
	    { int total = _T11 + _T12;
	      _T13 = total;
	      _T14 = (unsigned int)_T13;
	      { struct _fat_ptr nlb = Cyc_Core_new_string(_T14);
		_T15 = nlb;
		{ struct _fat_ptr _T5D = _fat_ptr_plus(_T15,sizeof(char),
						       0);
		  _T16 = _check_fat_subscript(_T5D,sizeof(char),0U);
		  _T17 = (char *)_T16;
		  { char _T5E = *_T17;
		    char _T5F = '\n';
		    _T18 = _get_fat_size(_T5D,sizeof(char));
		    if (_T18 != 1U) { goto _TL1F;
		    }
		    if (_T5E != 0) { goto _TL1F;
		    }
		    if (_T5F == 0) { goto _TL1F;
		    }
		    _throw_arraybounds();
		    goto _TL20;
		    _TL1F: _TL20: _T19 = _T5D.curr;
		    _T1A = (char *)_T19;
		    *_T1A = _T5F;
		  }
		}{ int j = 0;
		  _TL24: if (j < num_tabs) { goto _TL22;
		  }else { goto _TL23;
		  }
		  _TL22: _T1B = nlb;
		  _T1C = j + 1;
		  { struct _fat_ptr _T5D = _fat_ptr_plus(_T1B,sizeof(char),
							 _T1C);
		    _T1D = _check_fat_subscript(_T5D,sizeof(char),0U);
		    _T1E = (char *)_T1D;
		    { char _T5E = *_T1E;
		      char _T5F = '\t';
		      _T1F = _get_fat_size(_T5D,sizeof(char));
		      if (_T1F != 1U) { goto _TL25;
		      }
		      if (_T5E != 0) { goto _TL25;
		      }
		      if (_T5F == 0) { goto _TL25;
		      }
		      _throw_arraybounds();
		      goto _TL26;
		      _TL25: _TL26: _T20 = _T5D.curr;
		      _T21 = (char *)_T20;
		      *_T21 = _T5F;
		    }
		  }j = j + 1;
		  goto _TL24;
		  _TL23: ;
		}{ int j = 0;
		  _TL2A: if (j < num_spaces) { goto _TL28;
		  }else { goto _TL29;
		  }
		  _TL28: _T22 = nlb;
		  _T23 = j + 1;
		  _T24 = num_tabs;
		  _T25 = _T23 + _T24;
		  { struct _fat_ptr _T5D = _fat_ptr_plus(_T22,sizeof(char),
							 _T25);
		    _T26 = _check_fat_subscript(_T5D,sizeof(char),0U);
		    _T27 = (char *)_T26;
		    { char _T5E = *_T27;
		      char _T5F = ' ';
		      _T28 = _get_fat_size(_T5D,sizeof(char));
		      if (_T28 != 1U) { goto _TL2B;
		      }
		      if (_T5E != 0) { goto _TL2B;
		      }
		      if (_T5F == 0) { goto _TL2B;
		      }
		      _throw_arraybounds();
		      goto _TL2C;
		      _TL2B: _TL2C: _T29 = _T5D.curr;
		      _T2A = (char *)_T29;
		      *_T2A = _T5F;
		    }
		  }j = j + 1;
		  goto _TL2A;
		  _TL29: ;
		}_T2C = Cyc_Hashtable_insert;
		{ void (* _T5D)(struct Cyc_Hashtable_Table *,int,struct _fat_ptr *) = (void (*)(struct Cyc_Hashtable_Table *,
												int,
												struct _fat_ptr *))_T2C;
		  _T2B = _T5D;
		}_T2D = t;
		_T2E = i;
		{ unsigned int _T5D = 1;
		  _T31 = _check_times(_T5D,sizeof(struct _fat_ptr));
		  { struct _fat_ptr * _T5E = _cycalloc(_T31);
		    _T32 = nlb;
		    _T5E[0] = _T32;
		    _T30 = (struct _fat_ptr *)_T5E;
		  }_T2F = _T30;
		}_T2B(_T2D,_T2E,_T2F);
		_T33 = nlb;
		return _T33;
	      }
	    }
	  }_TL1C: { int total = 3 + i;
	    _T34 = total + 1;
	    _T35 = (unsigned int)_T34;
	    { struct _fat_ptr nlb = Cyc_Core_new_string(_T35);
	      _T36 = nlb;
	      { struct _fat_ptr _T5D = _fat_ptr_plus(_T36,sizeof(char),0);
		_T37 = _T5D.curr;
		_T38 = (char *)_T37;
		_T39 = _check_null(_T38);
		{ char _T5E = *_T39;
		  char _T5F = '\\';
		  _T3A = _get_fat_size(_T5D,sizeof(char));
		  if (_T3A != 1U) { goto _TL2D;
		  }
		  if (_T5E != 0) { goto _TL2D;
		  }
		  if (_T5F == 0) { goto _TL2D;
		  }
		  _throw_arraybounds();
		  goto _TL2E;
		  _TL2D: _TL2E: _T3B = _T5D.curr;
		  _T3C = (char *)_T3B;
		  *_T3C = _T5F;
		}
	      }_T3D = nlb;
	      { struct _fat_ptr _T5D = _fat_ptr_plus(_T3D,sizeof(char),1);
		_T3E = _T5D.curr;
		_T3F = (char *)_T3E;
		{ char _T5E = *_T3F;
		  char _T5F = '\\';
		  _T40 = _get_fat_size(_T5D,sizeof(char));
		  if (_T40 != 1U) { goto _TL2F;
		  }
		  if (_T5E != 0) { goto _TL2F;
		  }
		  if (_T5F == 0) { goto _TL2F;
		  }
		  _throw_arraybounds();
		  goto _TL30;
		  _TL2F: _TL30: _T41 = _T5D.curr;
		  _T42 = (char *)_T41;
		  *_T42 = _T5F;
		}
	      }_T43 = nlb;
	      { struct _fat_ptr _T5D = _fat_ptr_plus(_T43,sizeof(char),2);
		_T44 = _T5D.curr;
		_T45 = (char *)_T44;
		{ char _T5E = *_T45;
		  char _T5F = '\n';
		  _T46 = _get_fat_size(_T5D,sizeof(char));
		  if (_T46 != 1U) { goto _TL31;
		  }
		  if (_T5E != 0) { goto _TL31;
		  }
		  if (_T5F == 0) { goto _TL31;
		  }
		  _throw_arraybounds();
		  goto _TL32;
		  _TL31: _TL32: _T47 = _T5D.curr;
		  _T48 = (char *)_T47;
		  *_T48 = _T5F;
		}
	      }{ int j = 3;
		_TL36: if (j < total) { goto _TL34;
		}else { goto _TL35;
		}
		_TL34: _T49 = nlb;
		_T4A = j;
		{ struct _fat_ptr _T5D = _fat_ptr_plus(_T49,sizeof(char),
						       _T4A);
		  _T4B = _T5D.curr;
		  _T4C = (char *)_T4B;
		  { char _T5E = *_T4C;
		    char _T5F = '~';
		    _T4D = _get_fat_size(_T5D,sizeof(char));
		    if (_T4D != 1U) { goto _TL37;
		    }
		    if (_T5E != 0) { goto _TL37;
		    }
		    if (_T5F == 0) { goto _TL37;
		    }
		    _throw_arraybounds();
		    goto _TL38;
		    _TL37: _TL38: _T4E = _T5D.curr;
		    _T4F = (char *)_T4E;
		    *_T4F = _T5F;
		  }
		}j = j + 1;
		goto _TL36;
		_TL35: ;
	      }_T51 = Cyc_Hashtable_insert;
	      { void (* _T5D)(struct Cyc_Hashtable_Table *,int,struct _fat_ptr *) = (void (*)(struct Cyc_Hashtable_Table *,
											      int,
											      struct _fat_ptr *))_T51;
		_T50 = _T5D;
	      }_T52 = t;
	      _T53 = i;
	      { unsigned int _T5D = 1;
		_T56 = _check_times(_T5D,sizeof(struct _fat_ptr));
		{ struct _fat_ptr * _T5E = _cycalloc(_T56);
		  _T57 = nlb;
		  _T5E[0] = _T57;
		  _T55 = (struct _fat_ptr *)_T5E;
		}_T54 = _T55;
	      }_T50(_T52,_T53,_T54);
	      _T58 = nlb;
	      return _T58;
	    }
	  }_TL1A: _T5C = _T5B;
	  { void * exn = _T5C;
	    _rethrow(exn);
	  };
	}_TL18: ;
      }
    }
  }
}
static const int Cyc_PP_infinity = 9999999;
 struct _tuple2 {
  int f0;
  struct _fat_ptr f1;
};
static struct Cyc_PP_Out * Cyc_PP_text_doc_f(struct _tuple2 * clo,struct Cyc_PP_Ppstate * st) {
  struct _tuple2 * _T0;
  struct Cyc_PP_Out * _T1;
  struct Cyc_PP_Ppstate * _T2;
  int _T3;
  int _T4;
  struct Cyc_PP_Ppstate * _T5;
  struct Cyc_PP_Single_PP_Alist_struct * _T6;
  struct _fat_ptr * _T7;
  struct _fat_ptr * _T8;
  unsigned int _T9;
  struct Cyc_PP_Empty_PP_Alist_struct * _TA;
  struct Cyc_PP_Empty_PP_Alist_struct * _TB;
  struct _fat_ptr _TC;
  int _TD;
  _T0 = clo;
  { struct _tuple2 _TE = *_T0;
    _TD = _TE.f0;
    _TC = _TE.f1;
  }{ int slen = _TD;
    struct _fat_ptr s = _TC;
    { struct Cyc_PP_Out * _TE = _cycalloc(sizeof(struct Cyc_PP_Out));
      _T2 = st;
      _T3 = _T2->cc;
      _T4 = slen;
      _TE->newcc = _T3 + _T4;
      _T5 = st;
      _TE->newcl = _T5->cl;
      { struct Cyc_PP_Single_PP_Alist_struct * _TF = _cycalloc(sizeof(struct Cyc_PP_Single_PP_Alist_struct));
	_TF->tag = 1;
	{ unsigned int _T10 = 1;
	  _T9 = _check_times(_T10,sizeof(struct _fat_ptr));
	  { struct _fat_ptr * _T11 = _cycalloc(_T9);
	    _T11[0] = s;
	    _T8 = (struct _fat_ptr *)_T11;
	  }_T7 = _T8;
	}_TF->f1 = _T7;
	_T6 = (struct Cyc_PP_Single_PP_Alist_struct *)_TF;
      }_TE->ppout = (void *)_T6;
      _TA = &Cyc_PP_Empty_link;
      _TB = (struct Cyc_PP_Empty_PP_Alist_struct *)_TA;
      _TE->links = (void *)_TB;
      _T1 = (struct Cyc_PP_Out *)_TE;
    }return _T1;
  }
}
static struct Cyc_PP_Doc * Cyc_PP_text_doc(struct _fat_ptr s) {
  unsigned long _T0;
  struct Cyc_PP_Doc * _T1;
  struct Cyc_Fn_Function * (* _T2)(struct Cyc_PP_Out * (*)(struct _tuple2 *,
							   struct Cyc_PP_Ppstate *),
				   struct _tuple2 *);
  struct Cyc_Fn_Function * (* _T3)(void * (*)(void *,void *),void *);
  struct _tuple2 * _T4;
  _T0 = Cyc_strlen(s);
  { int slen = (int)_T0;
    { struct Cyc_PP_Doc * _T5 = _cycalloc(sizeof(struct Cyc_PP_Doc));
      _T5->mwo = slen;
      _T5->mw = Cyc_PP_infinity;
      _T3 = Cyc_Fn_make_fn;
      { struct Cyc_Fn_Function * (* _T6)(struct Cyc_PP_Out * (*)(struct _tuple2 *,
								 struct Cyc_PP_Ppstate *),
					 struct _tuple2 *) = (struct Cyc_Fn_Function * (*)(struct Cyc_PP_Out * (*)(struct _tuple2 *,
														   struct Cyc_PP_Ppstate *),
											   struct _tuple2 *))_T3;
	_T2 = _T6;
      }{ struct _tuple2 * _T6 = _cycalloc(sizeof(struct _tuple2));
	_T6->f0 = slen;
	_T6->f1 = s;
	_T4 = (struct _tuple2 *)_T6;
      }_T5->f = _T2(Cyc_PP_text_doc_f,_T4);
      _T1 = (struct Cyc_PP_Doc *)_T5;
    }return _T1;
  }
}
struct Cyc_PP_Doc * Cyc_PP_text(struct _fat_ptr s) {
  struct Cyc_Hashtable_Table * (* _T0)(struct Cyc_Hashtable_Table * *,int (*)(struct _fat_ptr *,
									      struct _fat_ptr *),
				       int (*)(struct _fat_ptr *));
  struct Cyc_Hashtable_Table * * _T1;
  int (* _T2)(struct _fat_ptr *,struct _fat_ptr *);
  int (* _T3)(struct _fat_ptr *);
  struct _fat_ptr * _T4;
  struct _handler_cons * _T5;
  int _T6;
  struct Cyc_PP_Doc * (* _T7)(struct Cyc_Hashtable_Table *,struct _fat_ptr *);
  void * (* _T8)(struct Cyc_Hashtable_Table *,void *);
  void * _T9;
  struct Cyc_Core_Not_found_exn_struct * _TA;
  char * _TB;
  char * _TC;
  void (* _TD)(struct Cyc_Hashtable_Table *,struct _fat_ptr *,struct Cyc_PP_Doc *);
  void (* _TE)(struct Cyc_Hashtable_Table *,void *,void *);
  struct Cyc_PP_Doc * _TF;
  static struct Cyc_Hashtable_Table * str_hashtbl = 0;
  { struct Cyc_Hashtable_Table * (* _T10)(struct Cyc_Hashtable_Table * *,
					  int (*)(struct _fat_ptr *,struct _fat_ptr *),
					  int (*)(struct _fat_ptr *)) = (struct Cyc_Hashtable_Table * (*)(struct Cyc_Hashtable_Table * *,
													  int (*)(struct _fat_ptr *,
														  struct _fat_ptr *),
													  int (*)(struct _fat_ptr *)))Cyc_PP_init_table;
    _T0 = _T10;
  }_T1 = &str_hashtbl;
  _T2 = Cyc_zstrptrcmp;
  _T3 = Cyc_Hashtable_hash_stringptr;
  { struct Cyc_Hashtable_Table * t = _T0(_T1,_T2,_T3);
    struct _fat_ptr * p;
    p = _cycalloc(sizeof(struct _fat_ptr));
    _T4 = p;
    *_T4 = s;
    { struct _handler_cons _T10;
      _T5 = &_T10;
      _push_handler(_T5);
      { int _T11 = 0;
	_T6 = setjmp(_T10.handler);
	if (! _T6) { goto _TL39;
	}
	_T11 = 1;
	goto _TL3A;
	_TL39: _TL3A: if (_T11) { goto _TL3B;
	}else { goto _TL3D;
	}
	_TL3D: _T8 = Cyc_Hashtable_lookup;
	{ struct Cyc_PP_Doc * (* _T12)(struct Cyc_Hashtable_Table *,struct _fat_ptr *) = (struct Cyc_PP_Doc * (*)(struct Cyc_Hashtable_Table *,
														  struct _fat_ptr *))_T8;
	  _T7 = _T12;
	}{ struct Cyc_PP_Doc * _T12 = _T7(t,p);
	  _npop_handler(0);
	  return _T12;
	}_pop_handler();
	goto _TL3C;
	_TL3B: _T9 = Cyc_Core_get_exn_thrown();
	{ void * _T12 = (void *)_T9;
	  void * _T13;
	  _TA = (struct Cyc_Core_Not_found_exn_struct *)_T12;
	  _TB = _TA->tag;
	  _TC = Cyc_Core_Not_found;
	  if (_TB != _TC) { goto _TL3E;
	  }
	  { struct Cyc_PP_Doc * d = Cyc_PP_text_doc(s);
	    _TE = Cyc_Hashtable_insert;
	    { void (* _T14)(struct Cyc_Hashtable_Table *,struct _fat_ptr *,
			    struct Cyc_PP_Doc *) = (void (*)(struct Cyc_Hashtable_Table *,
							     struct _fat_ptr *,
							     struct Cyc_PP_Doc *))_TE;
	      _TD = _T14;
	    }_TD(t,p,d);
	    _TF = d;
	    return _TF;
	  }_TL3E: _T13 = _T12;
	  { void * exn = _T13;
	    _rethrow(exn);
	  };
	}_TL3C: ;
      }
    }
  }
}
struct Cyc_PP_Doc * Cyc_PP_textptr(struct _fat_ptr * s) {
  struct _fat_ptr * _T0;
  struct _fat_ptr _T1;
  struct Cyc_PP_Doc * _T2;
  _T0 = s;
  _T1 = *_T0;
  _T2 = Cyc_PP_text(_T1);
  return _T2;
}
static struct Cyc_PP_Doc * Cyc_PP_text_width_doc(struct _fat_ptr s,int slen) {
  struct Cyc_PP_Doc * _T0;
  struct Cyc_Fn_Function * (* _T1)(struct Cyc_PP_Out * (*)(struct _tuple2 *,
							   struct Cyc_PP_Ppstate *),
				   struct _tuple2 *);
  struct Cyc_Fn_Function * (* _T2)(void * (*)(void *,void *),void *);
  struct _tuple2 * _T3;
  { struct Cyc_PP_Doc * _T4 = _cycalloc(sizeof(struct Cyc_PP_Doc));
    _T4->mwo = slen;
    _T4->mw = Cyc_PP_infinity;
    _T2 = Cyc_Fn_make_fn;
    { struct Cyc_Fn_Function * (* _T5)(struct Cyc_PP_Out * (*)(struct _tuple2 *,
							       struct Cyc_PP_Ppstate *),
				       struct _tuple2 *) = (struct Cyc_Fn_Function * (*)(struct Cyc_PP_Out * (*)(struct _tuple2 *,
														 struct Cyc_PP_Ppstate *),
											 struct _tuple2 *))_T2;
      _T1 = _T5;
    }{ struct _tuple2 * _T5 = _cycalloc(sizeof(struct _tuple2));
      _T5->f0 = slen;
      _T5->f1 = s;
      _T3 = (struct _tuple2 *)_T5;
    }_T4->f = _T1(Cyc_PP_text_doc_f,_T3);
    _T0 = (struct Cyc_PP_Doc *)_T4;
  }return _T0;
}
struct Cyc_PP_Doc * Cyc_PP_text_width(struct _fat_ptr s,int slen) {
  struct Cyc_Hashtable_Table * (* _T0)(struct Cyc_Hashtable_Table * *,int (*)(struct _fat_ptr *,
									      struct _fat_ptr *),
				       int (*)(struct _fat_ptr *));
  struct Cyc_Hashtable_Table * * _T1;
  int (* _T2)(struct _fat_ptr *,struct _fat_ptr *);
  int (* _T3)(struct _fat_ptr *);
  struct _fat_ptr * _T4;
  struct _handler_cons * _T5;
  int _T6;
  struct Cyc_PP_Doc * (* _T7)(struct Cyc_Hashtable_Table *,struct _fat_ptr *);
  void * (* _T8)(struct Cyc_Hashtable_Table *,void *);
  void * _T9;
  struct Cyc_Core_Not_found_exn_struct * _TA;
  char * _TB;
  char * _TC;
  void (* _TD)(struct Cyc_Hashtable_Table *,struct _fat_ptr *,struct Cyc_PP_Doc *);
  void (* _TE)(struct Cyc_Hashtable_Table *,void *,void *);
  struct Cyc_PP_Doc * _TF;
  static struct Cyc_Hashtable_Table * str_hashtbl = 0;
  { struct Cyc_Hashtable_Table * (* _T10)(struct Cyc_Hashtable_Table * *,
					  int (*)(struct _fat_ptr *,struct _fat_ptr *),
					  int (*)(struct _fat_ptr *)) = (struct Cyc_Hashtable_Table * (*)(struct Cyc_Hashtable_Table * *,
													  int (*)(struct _fat_ptr *,
														  struct _fat_ptr *),
													  int (*)(struct _fat_ptr *)))Cyc_PP_init_table;
    _T0 = _T10;
  }_T1 = &str_hashtbl;
  _T2 = Cyc_zstrptrcmp;
  _T3 = Cyc_Hashtable_hash_stringptr;
  { struct Cyc_Hashtable_Table * t = _T0(_T1,_T2,_T3);
    struct _fat_ptr * p;
    p = _cycalloc(sizeof(struct _fat_ptr));
    _T4 = p;
    *_T4 = s;
    { struct _handler_cons _T10;
      _T5 = &_T10;
      _push_handler(_T5);
      { int _T11 = 0;
	_T6 = setjmp(_T10.handler);
	if (! _T6) { goto _TL40;
	}
	_T11 = 1;
	goto _TL41;
	_TL40: _TL41: if (_T11) { goto _TL42;
	}else { goto _TL44;
	}
	_TL44: _T8 = Cyc_Hashtable_lookup;
	{ struct Cyc_PP_Doc * (* _T12)(struct Cyc_Hashtable_Table *,struct _fat_ptr *) = (struct Cyc_PP_Doc * (*)(struct Cyc_Hashtable_Table *,
														  struct _fat_ptr *))_T8;
	  _T7 = _T12;
	}{ struct Cyc_PP_Doc * _T12 = _T7(t,p);
	  _npop_handler(0);
	  return _T12;
	}_pop_handler();
	goto _TL43;
	_TL42: _T9 = Cyc_Core_get_exn_thrown();
	{ void * _T12 = (void *)_T9;
	  void * _T13;
	  _TA = (struct Cyc_Core_Not_found_exn_struct *)_T12;
	  _TB = _TA->tag;
	  _TC = Cyc_Core_Not_found;
	  if (_TB != _TC) { goto _TL45;
	  }
	  { struct Cyc_PP_Doc * d = Cyc_PP_text_width_doc(s,slen);
	    _TE = Cyc_Hashtable_insert;
	    { void (* _T14)(struct Cyc_Hashtable_Table *,struct _fat_ptr *,
			    struct Cyc_PP_Doc *) = (void (*)(struct Cyc_Hashtable_Table *,
							     struct _fat_ptr *,
							     struct Cyc_PP_Doc *))_TE;
	      _TD = _T14;
	    }_TD(t,p,d);
	    _TF = d;
	    return _TF;
	  }_TL45: _T13 = _T12;
	  { void * exn = _T13;
	    _rethrow(exn);
	  };
	}_TL43: ;
      }
    }
  }
}
static struct Cyc_PP_Doc * Cyc_PP_nil_doc_opt = 0;
struct Cyc_PP_Doc * Cyc_PP_nil_doc() {
  struct _fat_ptr _T0;
  struct Cyc_PP_Doc * _T1;
  if (Cyc_PP_nil_doc_opt != 0) { goto _TL47;
  }
  _T0 = _tag_fat("",sizeof(char),1U);
  Cyc_PP_nil_doc_opt = Cyc_PP_text(_T0);
  goto _TL48;
  _TL47: _TL48: _T1 = Cyc_PP_nil_doc_opt;
  return _T1;
}
struct Cyc_PP_Doc * Cyc_PP_blank_doc() {
  struct _fat_ptr _T0;
  struct Cyc_PP_Doc * _T1;
  static struct Cyc_PP_Doc * blank_doc_opt = 0;
  if (blank_doc_opt != 0) { goto _TL49;
  }
  _T0 = _tag_fat(" ",sizeof(char),2U);
  blank_doc_opt = Cyc_PP_text(_T0);
  goto _TL4A;
  _TL49: _TL4A: _T1 = blank_doc_opt;
  return _T1;
}
 struct _tuple3 {
  int f0;
  struct _fat_ptr f1;
  struct _fat_ptr f2;
};
 struct _tuple4 {
  int f0;
  int f1;
  int f2;
  struct _fat_ptr f3;
};
static struct Cyc_PP_Out * Cyc_PP_hyperlink_f(struct _tuple3 * clo,struct Cyc_PP_Ppstate * st) {
  struct _tuple3 * _T0;
  struct Cyc_PP_Out * _T1;
  struct Cyc_PP_Ppstate * _T2;
  int _T3;
  int _T4;
  struct Cyc_PP_Ppstate * _T5;
  struct Cyc_PP_Single_PP_Alist_struct * _T6;
  struct _fat_ptr * _T7;
  struct _fat_ptr * _T8;
  unsigned int _T9;
  struct Cyc_PP_Single_PP_Alist_struct * _TA;
  struct _tuple4 * _TB;
  struct Cyc_PP_Ppstate * _TC;
  struct Cyc_PP_Ppstate * _TD;
  struct _fat_ptr _TE;
  struct _fat_ptr _TF;
  int _T10;
  _T0 = clo;
  { struct _tuple3 _T11 = *_T0;
    _T10 = _T11.f0;
    _TF = _T11.f1;
    _TE = _T11.f2;
  }{ int slen = _T10;
    struct _fat_ptr shrt = _TF;
    struct _fat_ptr full = _TE;
    { struct Cyc_PP_Out * _T11 = _cycalloc(sizeof(struct Cyc_PP_Out));
      _T2 = st;
      _T3 = _T2->cc;
      _T4 = slen;
      _T11->newcc = _T3 + _T4;
      _T5 = st;
      _T11->newcl = _T5->cl;
      { struct Cyc_PP_Single_PP_Alist_struct * _T12 = _cycalloc(sizeof(struct Cyc_PP_Single_PP_Alist_struct));
	_T12->tag = 1;
	{ unsigned int _T13 = 1;
	  _T9 = _check_times(_T13,sizeof(struct _fat_ptr));
	  { struct _fat_ptr * _T14 = _cycalloc(_T9);
	    _T14[0] = shrt;
	    _T8 = (struct _fat_ptr *)_T14;
	  }_T7 = _T8;
	}_T12->f1 = _T7;
	_T6 = (struct Cyc_PP_Single_PP_Alist_struct *)_T12;
      }_T11->ppout = (void *)_T6;
      { struct Cyc_PP_Single_PP_Alist_struct * _T12 = _cycalloc(sizeof(struct Cyc_PP_Single_PP_Alist_struct));
	_T12->tag = 1;
	{ struct _tuple4 * _T13 = _cycalloc(sizeof(struct _tuple4));
	  _TC = st;
	  _T13->f0 = _TC->cl;
	  _TD = st;
	  _T13->f1 = _TD->cc;
	  _T13->f2 = slen;
	  _T13->f3 = full;
	  _TB = (struct _tuple4 *)_T13;
	}_T12->f1 = _TB;
	_TA = (struct Cyc_PP_Single_PP_Alist_struct *)_T12;
      }_T11->links = (void *)_TA;
      _T1 = (struct Cyc_PP_Out *)_T11;
    }return _T1;
  }
}
struct Cyc_PP_Doc * Cyc_PP_hyperlink(struct _fat_ptr shrt,struct _fat_ptr full) {
  unsigned long _T0;
  struct Cyc_PP_Doc * _T1;
  struct Cyc_Fn_Function * (* _T2)(struct Cyc_PP_Out * (*)(struct _tuple3 *,
							   struct Cyc_PP_Ppstate *),
				   struct _tuple3 *);
  struct Cyc_Fn_Function * (* _T3)(void * (*)(void *,void *),void *);
  struct _tuple3 * _T4;
  _T0 = Cyc_strlen(shrt);
  { int slen = (int)_T0;
    { struct Cyc_PP_Doc * _T5 = _cycalloc(sizeof(struct Cyc_PP_Doc));
      _T5->mwo = slen;
      _T5->mw = Cyc_PP_infinity;
      _T3 = Cyc_Fn_make_fn;
      { struct Cyc_Fn_Function * (* _T6)(struct Cyc_PP_Out * (*)(struct _tuple3 *,
								 struct Cyc_PP_Ppstate *),
					 struct _tuple3 *) = (struct Cyc_Fn_Function * (*)(struct Cyc_PP_Out * (*)(struct _tuple3 *,
														   struct Cyc_PP_Ppstate *),
											   struct _tuple3 *))_T3;
	_T2 = _T6;
      }{ struct _tuple3 * _T6 = _cycalloc(sizeof(struct _tuple3));
	_T6->f0 = slen;
	_T6->f1 = shrt;
	_T6->f2 = full;
	_T4 = (struct _tuple3 *)_T6;
      }_T5->f = _T2(Cyc_PP_hyperlink_f,_T4);
      _T1 = (struct Cyc_PP_Doc *)_T5;
    }return _T1;
  }
}
static struct Cyc_PP_Out * Cyc_PP_line_f(struct Cyc_PP_Ppstate * st) {
  struct Cyc_PP_Out * _T0;
  struct Cyc_PP_Ppstate * _T1;
  struct Cyc_PP_Ppstate * _T2;
  int _T3;
  struct Cyc_PP_Single_PP_Alist_struct * _T4;
  struct _fat_ptr * _T5;
  struct _fat_ptr * _T6;
  unsigned int _T7;
  struct Cyc_PP_Ppstate * _T8;
  int _T9;
  struct Cyc_PP_Empty_PP_Alist_struct * _TA;
  struct Cyc_PP_Empty_PP_Alist_struct * _TB;
  { struct Cyc_PP_Out * _TC = _cycalloc(sizeof(struct Cyc_PP_Out));
    _T1 = st;
    _TC->newcc = _T1->ci;
    _T2 = st;
    _T3 = _T2->cl;
    _TC->newcl = _T3 + 1;
    { struct Cyc_PP_Single_PP_Alist_struct * _TD = _cycalloc(sizeof(struct Cyc_PP_Single_PP_Alist_struct));
      _TD->tag = 1;
      { unsigned int _TE = 1;
	_T7 = _check_times(_TE,sizeof(struct _fat_ptr));
	{ struct _fat_ptr * _TF = _cycalloc(_T7);
	  _T8 = st;
	  _T9 = _T8->ci;
	  _TF[0] = Cyc_PP_nlblanks(_T9);
	  _T6 = (struct _fat_ptr *)_TF;
	}_T5 = _T6;
      }_TD->f1 = _T5;
      _T4 = (struct Cyc_PP_Single_PP_Alist_struct *)_TD;
    }_TC->ppout = (void *)_T4;
    _TA = &Cyc_PP_Empty_link;
    _TB = (struct Cyc_PP_Empty_PP_Alist_struct *)_TA;
    _TC->links = (void *)_TB;
    _T0 = (struct Cyc_PP_Out *)_TC;
  }return _T0;
}
struct Cyc_PP_Doc * Cyc_PP_line_doc() {
  struct Cyc_PP_Doc * _T0;
  struct Cyc_Fn_Function * (* _T1)(struct Cyc_PP_Out * (*)(struct Cyc_PP_Ppstate *));
  struct Cyc_Fn_Function * (* _T2)(void * (*)(void *));
  struct Cyc_PP_Doc * _T3;
  static struct Cyc_PP_Doc * line_doc_opt = 0;
  if (line_doc_opt != 0) { goto _TL4B;
  }
  { struct Cyc_PP_Doc * _T4 = _cycalloc(sizeof(struct Cyc_PP_Doc));
    _T4->mwo = 0;
    _T4->mw = 0;
    _T2 = Cyc_Fn_fp2fn;
    { struct Cyc_Fn_Function * (* _T5)(struct Cyc_PP_Out * (*)(struct Cyc_PP_Ppstate *)) = (struct Cyc_Fn_Function * (*)(struct Cyc_PP_Out * (*)(struct Cyc_PP_Ppstate *)))_T2;
      _T1 = _T5;
    }_T4->f = _T1(Cyc_PP_line_f);
    _T0 = (struct Cyc_PP_Doc *)_T4;
  }line_doc_opt = _T0;
  goto _TL4C;
  _TL4B: _TL4C: _T3 = line_doc_opt;
  return _T3;
}
 struct _tuple5 {
  int f0;
  struct Cyc_PP_Doc * f1;
};
static struct Cyc_PP_Out * Cyc_PP_nest_f(struct _tuple5 * clo,struct Cyc_PP_Ppstate * st) {
  struct _tuple5 * _T0;
  struct Cyc_PP_Ppstate * _T1;
  struct Cyc_PP_Ppstate * _T2;
  int _T3;
  int _T4;
  struct Cyc_PP_Ppstate * _T5;
  struct Cyc_PP_Ppstate * _T6;
  struct Cyc_PP_Ppstate * _T7;
  struct Cyc_PP_Ppstate * _T8;
  struct Cyc_PP_Ppstate * _T9;
  struct Cyc_PP_Ppstate * _TA;
  struct Cyc_PP_Ppstate * _TB;
  struct Cyc_PP_Ppstate * _TC;
  struct Cyc_PP_Out * (* _TD)(struct Cyc_Fn_Function *,struct Cyc_PP_Ppstate *);
  void * (* _TE)(struct Cyc_Fn_Function *,void *);
  struct Cyc_PP_Doc * _TF;
  struct Cyc_Fn_Function * _T10;
  struct Cyc_PP_Ppstate * _T11;
  struct Cyc_PP_Out * _T12;
  struct Cyc_PP_Doc * _T13;
  int _T14;
  _T0 = clo;
  { struct _tuple5 _T15 = *_T0;
    _T14 = _T15.f0;
    _T13 = _T15.f1;
  }{ int k = _T14;
    struct Cyc_PP_Doc * d = _T13;
    if (k < 0) { goto _TL4D;
    }
    goto _TL4E;
    _TL4D: _throw_assert();
    _TL4E: { struct Cyc_PP_Ppstate * st2;
      st2 = _cycalloc(sizeof(struct Cyc_PP_Ppstate));
      _T1 = st2;
      _T2 = st;
      _T3 = _T2->ci;
      _T4 = k;
      _T1->ci = _T3 + _T4;
      _T5 = st2;
      _T6 = st;
      _T5->cc = _T6->cc;
      _T7 = st2;
      _T8 = st;
      _T7->cl = _T8->cl;
      _T9 = st2;
      _TA = st;
      _T9->pw = _TA->pw;
      _TB = st2;
      _TC = st;
      _TB->epw = _TC->epw;
      _TE = Cyc_Fn_apply;
      { struct Cyc_PP_Out * (* _T15)(struct Cyc_Fn_Function *,struct Cyc_PP_Ppstate *) = (struct Cyc_PP_Out * (*)(struct Cyc_Fn_Function *,
														  struct Cyc_PP_Ppstate *))_TE;
	_TD = _T15;
      }_TF = d;
      _T10 = _TF->f;
      _T11 = st2;
      _T12 = _TD(_T10,_T11);
      return _T12;
    }
  }
}
struct Cyc_PP_Doc * Cyc_PP_nest(int k,struct Cyc_PP_Doc * d) {
  struct Cyc_PP_Doc * _T0;
  struct Cyc_PP_Doc * _T1;
  struct Cyc_PP_Doc * _T2;
  struct Cyc_Fn_Function * (* _T3)(struct Cyc_PP_Out * (*)(struct _tuple5 *,
							   struct Cyc_PP_Ppstate *),
				   struct _tuple5 *);
  struct Cyc_Fn_Function * (* _T4)(void * (*)(void *,void *),void *);
  struct _tuple5 * _T5;
  { struct Cyc_PP_Doc * _T6 = _cycalloc(sizeof(struct Cyc_PP_Doc));
    _T1 = d;
    _T6->mwo = _T1->mwo;
    _T2 = d;
    _T6->mw = _T2->mw;
    _T4 = Cyc_Fn_make_fn;
    { struct Cyc_Fn_Function * (* _T7)(struct Cyc_PP_Out * (*)(struct _tuple5 *,
							       struct Cyc_PP_Ppstate *),
				       struct _tuple5 *) = (struct Cyc_Fn_Function * (*)(struct Cyc_PP_Out * (*)(struct _tuple5 *,
														 struct Cyc_PP_Ppstate *),
											 struct _tuple5 *))_T4;
      _T3 = _T7;
    }{ struct _tuple5 * _T7 = _cycalloc(sizeof(struct _tuple5));
      _T7->f0 = k;
      _T7->f1 = d;
      _T5 = (struct _tuple5 *)_T7;
    }_T6->f = _T3(Cyc_PP_nest_f,_T5);
    _T0 = (struct Cyc_PP_Doc *)_T6;
  }return _T0;
}
int Cyc_PP_min(int x,int y) {
  int _T0;
  int _T1;
  if (x > y) { goto _TL4F;
  }
  _T0 = x;
  return _T0;
  _TL4F: _T1 = y;
  return _T1;
}
int Cyc_PP_max(int x,int y) {
  int _T0;
  int _T1;
  if (x < y) { goto _TL51;
  }
  _T0 = x;
  return _T0;
  _TL51: _T1 = y;
  return _T1;
}
 struct _tuple6 {
  struct Cyc_PP_Doc * f0;
  struct Cyc_PP_Doc * f1;
};
static struct Cyc_PP_Out * Cyc_PP_concat_f(struct _tuple6 * clo,struct Cyc_PP_Ppstate * st) {
  struct _tuple6 * _T0;
  struct Cyc_PP_Ppstate * _T1;
  int _T2;
  struct Cyc_PP_Doc * _T3;
  int _T4;
  int _T5;
  struct Cyc_PP_Ppstate * _T6;
  int _T7;
  struct Cyc_PP_Doc * _T8;
  int _T9;
  int _TA;
  struct Cyc_PP_Ppstate * _TB;
  struct Cyc_PP_Ppstate * _TC;
  struct Cyc_PP_Ppstate * _TD;
  struct Cyc_PP_Ppstate * _TE;
  struct Cyc_PP_Ppstate * _TF;
  struct Cyc_PP_Ppstate * _T10;
  struct Cyc_PP_Ppstate * _T11;
  struct Cyc_PP_Ppstate * _T12;
  struct Cyc_PP_Ppstate * _T13;
  struct Cyc_PP_Out * (* _T14)(struct Cyc_Fn_Function *,struct Cyc_PP_Ppstate *);
  void * (* _T15)(struct Cyc_Fn_Function *,void *);
  struct Cyc_PP_Doc * _T16;
  struct Cyc_Fn_Function * _T17;
  struct Cyc_PP_Ppstate * _T18;
  struct Cyc_PP_Ppstate * _T19;
  struct Cyc_PP_Ppstate * _T1A;
  struct Cyc_PP_Ppstate * _T1B;
  struct Cyc_PP_Out * _T1C;
  struct Cyc_PP_Ppstate * _T1D;
  struct Cyc_PP_Out * _T1E;
  struct Cyc_PP_Ppstate * _T1F;
  struct Cyc_PP_Ppstate * _T20;
  struct Cyc_PP_Ppstate * _T21;
  struct Cyc_PP_Out * (* _T22)(struct Cyc_Fn_Function *,struct Cyc_PP_Ppstate *);
  void * (* _T23)(struct Cyc_Fn_Function *,void *);
  struct Cyc_PP_Doc * _T24;
  struct Cyc_Fn_Function * _T25;
  struct Cyc_PP_Ppstate * _T26;
  struct Cyc_PP_Out * _T27;
  struct Cyc_PP_Out * _T28;
  struct Cyc_PP_Out * _T29;
  struct Cyc_PP_Out * _T2A;
  struct Cyc_PP_Out * _T2B;
  struct Cyc_PP_Out * _T2C;
  void * _T2D;
  struct Cyc_PP_Out * _T2E;
  void * _T2F;
  struct Cyc_PP_Out * _T30;
  struct Cyc_PP_Out * _T31;
  void * _T32;
  struct Cyc_PP_Out * _T33;
  void * _T34;
  struct Cyc_PP_Out * _T35;
  struct Cyc_PP_Doc * _T36;
  struct Cyc_PP_Doc * _T37;
  _T0 = clo;
  { struct _tuple6 _T38 = *_T0;
    _T37 = _T38.f0;
    _T36 = _T38.f1;
  }{ struct Cyc_PP_Doc * d1 = _T37;
    struct Cyc_PP_Doc * d2 = _T36;
    if (d1 == Cyc_PP_nil_doc_opt) { goto _TL53;
    }
    goto _TL54;
    _TL53: _throw_assert();
    _TL54: if (d2 == Cyc_PP_nil_doc_opt) { goto _TL55;
    }
    goto _TL56;
    _TL55: _throw_assert();
    _TL56: _T1 = st;
    _T2 = _T1->pw;
    _T3 = d2;
    _T4 = _T3->mw;
    _T5 = _T2 - _T4;
    _T6 = st;
    _T7 = _T6->epw;
    _T8 = d1;
    _T9 = _T8->mwo;
    _TA = _T7 - _T9;
    { int epw2 = Cyc_PP_max(_T5,_TA);
      struct Cyc_PP_Ppstate * st2;
      st2 = _cycalloc(sizeof(struct Cyc_PP_Ppstate));
      _TB = st2;
      _TC = st;
      _TB->ci = _TC->ci;
      _TD = st2;
      _TE = st;
      _TD->cc = _TE->cc;
      _TF = st2;
      _T10 = st;
      _TF->cl = _T10->cl;
      _T11 = st2;
      _T12 = st;
      _T11->pw = _T12->pw;
      _T13 = st2;
      _T13->epw = epw2;
      _T15 = Cyc_Fn_apply;
      { struct Cyc_PP_Out * (* _T38)(struct Cyc_Fn_Function *,struct Cyc_PP_Ppstate *) = (struct Cyc_PP_Out * (*)(struct Cyc_Fn_Function *,
														  struct Cyc_PP_Ppstate *))_T15;
	_T14 = _T38;
      }_T16 = d1;
      _T17 = _T16->f;
      _T18 = st2;
      { struct Cyc_PP_Out * o1 = _T14(_T17,_T18);
	struct Cyc_PP_Ppstate * st3;
	st3 = _cycalloc(sizeof(struct Cyc_PP_Ppstate));
	_T19 = st3;
	_T1A = st;
	_T19->ci = _T1A->ci;
	_T1B = st3;
	_T1C = o1;
	_T1B->cc = _T1C->newcc;
	_T1D = st3;
	_T1E = o1;
	_T1D->cl = _T1E->newcl;
	_T1F = st3;
	_T20 = st;
	_T1F->pw = _T20->pw;
	_T21 = st3;
	_T21->epw = epw2;
	_T23 = Cyc_Fn_apply;
	{ struct Cyc_PP_Out * (* _T38)(struct Cyc_Fn_Function *,struct Cyc_PP_Ppstate *) = (struct Cyc_PP_Out * (*)(struct Cyc_Fn_Function *,
														    struct Cyc_PP_Ppstate *))_T23;
	  _T22 = _T38;
	}_T24 = d2;
	_T25 = _T24->f;
	_T26 = st3;
	{ struct Cyc_PP_Out * o2 = _T22(_T25,_T26);
	  struct Cyc_PP_Out * o3;
	  o3 = _cycalloc(sizeof(struct Cyc_PP_Out));
	  _T27 = o3;
	  _T28 = o2;
	  _T27->newcc = _T28->newcc;
	  _T29 = o3;
	  _T2A = o2;
	  _T29->newcl = _T2A->newcl;
	  _T2B = o3;
	  _T2C = o1;
	  _T2D = _T2C->ppout;
	  _T2E = o2;
	  _T2F = _T2E->ppout;
	  _T2B->ppout = Cyc_PP_append(_T2D,_T2F);
	  _T30 = o3;
	  _T31 = o1;
	  _T32 = _T31->links;
	  _T33 = o2;
	  _T34 = _T33->links;
	  _T30->links = Cyc_PP_append(_T32,_T34);
	  _T35 = o3;
	  return _T35;
	}
      }
    }
  }
}
static struct Cyc_PP_Doc * Cyc_PP_concat(struct Cyc_PP_Doc * d1,struct Cyc_PP_Doc * d2) {
  struct Cyc_PP_Doc * _T0;
  struct Cyc_PP_Doc * _T1;
  struct Cyc_PP_Doc * _T2;
  struct Cyc_PP_Doc * _T3;
  int _T4;
  struct Cyc_PP_Doc * _T5;
  int _T6;
  struct Cyc_PP_Doc * _T7;
  int _T8;
  int _T9;
  struct Cyc_PP_Doc * _TA;
  int _TB;
  struct Cyc_PP_Doc * _TC;
  int _TD;
  struct Cyc_PP_Doc * _TE;
  int _TF;
  int _T10;
  struct Cyc_Fn_Function * (* _T11)(struct Cyc_PP_Out * (*)(struct _tuple6 *,
							    struct Cyc_PP_Ppstate *),
				    struct _tuple6 *);
  struct Cyc_Fn_Function * (* _T12)(void * (*)(void *,void *),void *);
  struct _tuple6 * _T13;
  if (d1 != Cyc_PP_nil_doc_opt) { goto _TL57;
  }
  _T0 = d2;
  return _T0;
  _TL57: if (d2 != Cyc_PP_nil_doc_opt) { goto _TL59;
  }
  _T1 = d1;
  return _T1;
  _TL59: { struct Cyc_PP_Doc * _T14 = _cycalloc(sizeof(struct Cyc_PP_Doc));
    _T3 = d1;
    _T4 = _T3->mw;
    _T5 = d1;
    _T6 = _T5->mwo;
    _T7 = d2;
    _T8 = _T7->mwo;
    _T9 = _T6 + _T8;
    _T14->mwo = Cyc_PP_min(_T4,_T9);
    _TA = d1;
    _TB = _TA->mw;
    _TC = d1;
    _TD = _TC->mwo;
    _TE = d2;
    _TF = _TE->mw;
    _T10 = _TD + _TF;
    _T14->mw = Cyc_PP_min(_TB,_T10);
    _T12 = Cyc_Fn_make_fn;
    { struct Cyc_Fn_Function * (* _T15)(struct Cyc_PP_Out * (*)(struct _tuple6 *,
								struct Cyc_PP_Ppstate *),
					struct _tuple6 *) = (struct Cyc_Fn_Function * (*)(struct Cyc_PP_Out * (*)(struct _tuple6 *,
														  struct Cyc_PP_Ppstate *),
											  struct _tuple6 *))_T12;
      _T11 = _T15;
    }{ struct _tuple6 * _T15 = _cycalloc(sizeof(struct _tuple6));
      _T15->f0 = d1;
      _T15->f1 = d2;
      _T13 = (struct _tuple6 *)_T15;
    }_T14->f = _T11(Cyc_PP_concat_f,_T13);
    _T2 = (struct Cyc_PP_Doc *)_T14;
  }return _T2;
}
struct Cyc_PP_Doc * Cyc_PP_cat(struct _fat_ptr l) {
  struct _fat_ptr _T0;
  unsigned int _T1;
  unsigned int _T2;
  struct _fat_ptr _T3;
  unsigned char * _T4;
  struct Cyc_PP_Doc * * _T5;
  struct Cyc_PP_Doc * * _T6;
  int _T7;
  struct Cyc_PP_Doc * _T8;
  struct Cyc_PP_Doc * _T9;
  struct Cyc_PP_Doc * _TA;
  struct Cyc_PP_Doc * d = Cyc_PP_nil_doc();
  _T0 = l;
  _T1 = _get_fat_size(_T0,sizeof(struct Cyc_PP_Doc *));
  _T2 = _T1 - 1U;
  { int i = (int)_T2;
    _TL5E: if (i >= 0) { goto _TL5C;
    }else { goto _TL5D;
    }
    _TL5C: _T3 = l;
    _T4 = _T3.curr;
    _T5 = (struct Cyc_PP_Doc * *)_T4;
    _T6 = _check_null(_T5);
    _T7 = i;
    _T8 = _T6[_T7];
    _T9 = d;
    d = Cyc_PP_concat(_T8,_T9);
    i = i + -1;
    goto _TL5E;
    _TL5D: ;
  }_TA = d;
  return _TA;
}
static struct Cyc_PP_Out * Cyc_PP_long_cats_f(struct Cyc_List_List * ds0,
					      struct Cyc_PP_Ppstate * st) {
  struct Cyc_List_List * _T0;
  void * _T1;
  struct Cyc_PP_Out * (* _T2)(struct Cyc_Fn_Function *,struct Cyc_PP_Ppstate *);
  void * (* _T3)(struct Cyc_Fn_Function *,void *);
  struct Cyc_PP_Doc * _T4;
  struct Cyc_Fn_Function * _T5;
  struct Cyc_PP_Ppstate * _T6;
  struct Cyc_PP_Ppstate * _T7;
  struct Cyc_PP_Ppstate * _T8;
  struct Cyc_PP_Out * _T9;
  struct Cyc_PP_Out * _TA;
  struct Cyc_PP_Ppstate * _TB;
  struct Cyc_PP_Ppstate * _TC;
  int _TD;
  struct Cyc_PP_Doc * _TE;
  int _TF;
  struct Cyc_List_List * _T10;
  struct Cyc_List_List * _T11;
  struct Cyc_List_List * _T12;
  void * _T13;
  struct Cyc_PP_Out * _T14;
  struct Cyc_List_List * _T15;
  void * _T16;
  struct Cyc_PP_Out * _T17;
  struct Cyc_PP_Empty_PP_Alist_struct * _T18;
  struct Cyc_PP_Empty_PP_Alist_struct * _T19;
  struct Cyc_PP_Empty_PP_Alist_struct * _T1A;
  struct Cyc_PP_Empty_PP_Alist_struct * _T1B;
  struct Cyc_List_List * _T1C;
  void * _T1D;
  struct Cyc_PP_Out * _T1E;
  void * _T1F;
  void * _T20;
  struct Cyc_List_List * _T21;
  void * _T22;
  struct Cyc_PP_Out * _T23;
  void * _T24;
  void * _T25;
  struct Cyc_List_List * _T26;
  struct Cyc_PP_Out * _T27;
  struct Cyc_List_List * os = 0;
  { struct Cyc_List_List * ds = ds0;
    _TL62: if (ds != 0) { goto _TL60;
    }else { goto _TL61;
    }
    _TL60: _T0 = ds;
    _T1 = _T0->hd;
    { struct Cyc_PP_Doc * d = (struct Cyc_PP_Doc *)_T1;
      if (d != Cyc_PP_nil_doc_opt) { goto _TL63;
      }
      goto _TL5F;
      _TL63: _T3 = Cyc_Fn_apply;
      { struct Cyc_PP_Out * (* _T28)(struct Cyc_Fn_Function *,struct Cyc_PP_Ppstate *) = (struct Cyc_PP_Out * (*)(struct Cyc_Fn_Function *,
														  struct Cyc_PP_Ppstate *))_T3;
	_T2 = _T28;
      }_T4 = d;
      _T5 = _T4->f;
      _T6 = st;
      { struct Cyc_PP_Out * o = _T2(_T5,_T6);
	{ struct Cyc_PP_Ppstate * _T28 = _cycalloc(sizeof(struct Cyc_PP_Ppstate));
	  _T8 = st;
	  _T28->ci = _T8->ci;
	  _T9 = o;
	  _T28->cc = _T9->newcc;
	  _TA = o;
	  _T28->cl = _TA->newcl;
	  _TB = st;
	  _T28->pw = _TB->pw;
	  _TC = st;
	  _TD = _TC->epw;
	  _TE = d;
	  _TF = _TE->mwo;
	  _T28->epw = _TD - _TF;
	  _T7 = (struct Cyc_PP_Ppstate *)_T28;
	}st = _T7;
	{ struct Cyc_List_List * _T28 = _cycalloc(sizeof(struct Cyc_List_List));
	  _T28->hd = o;
	  _T28->tl = os;
	  _T10 = (struct Cyc_List_List *)_T28;
	}os = _T10;
      }
    }_TL5F: _T11 = ds;
    ds = _T11->tl;
    goto _TL62;
    _TL61: ;
  }_T12 = _check_null(os);
  _T13 = _T12->hd;
  _T14 = (struct Cyc_PP_Out *)_T13;
  { int newcc = _T14->newcc;
    _T15 = os;
    _T16 = _T15->hd;
    _T17 = (struct Cyc_PP_Out *)_T16;
    { int newcl = _T17->newcl;
      _T18 = &Cyc_PP_Empty_stringptr;
      _T19 = (struct Cyc_PP_Empty_PP_Alist_struct *)_T18;
      { void * s = (void *)_T19;
	_T1A = &Cyc_PP_Empty_link;
	_T1B = (struct Cyc_PP_Empty_PP_Alist_struct *)_T1A;
	{ void * links = (void *)_T1B;
	  _TL68: if (os != 0) { goto _TL66;
	  }else { goto _TL67;
	  }
	  _TL66: _T1C = os;
	  _T1D = _T1C->hd;
	  _T1E = (struct Cyc_PP_Out *)_T1D;
	  _T1F = _T1E->ppout;
	  _T20 = s;
	  s = Cyc_PP_append(_T1F,_T20);
	  _T21 = os;
	  _T22 = _T21->hd;
	  _T23 = (struct Cyc_PP_Out *)_T22;
	  _T24 = _T23->links;
	  _T25 = links;
	  links = Cyc_PP_append(_T24,_T25);
	  _T26 = os;
	  os = _T26->tl;
	  goto _TL68;
	  _TL67: { struct Cyc_PP_Out * _T28 = _cycalloc(sizeof(struct Cyc_PP_Out));
	    _T28->newcc = newcc;
	    _T28->newcl = newcl;
	    _T28->ppout = s;
	    _T28->links = links;
	    _T27 = (struct Cyc_PP_Out *)_T28;
	  }return _T27;
	}
      }
    }
  }
}
static struct Cyc_PP_Doc * Cyc_PP_long_cats(struct Cyc_List_List * doclist) {
  struct Cyc_List_List * _T0;
  void * _T1;
  struct Cyc_List_List * _T2;
  struct Cyc_PP_Doc * _T3;
  struct Cyc_PP_Doc * _T4;
  int _T5;
  int _T6;
  struct Cyc_List_List * _T7;
  void * _T8;
  struct Cyc_PP_Doc * _T9;
  int _TA;
  int _TB;
  int _TC;
  int _TD;
  struct Cyc_List_List * _TE;
  void * _TF;
  struct Cyc_PP_Doc * _T10;
  int _T11;
  int _T12;
  struct Cyc_List_List * _T13;
  struct Cyc_PP_Doc * _T14;
  struct Cyc_Fn_Function * (* _T15)(struct Cyc_PP_Out * (*)(struct Cyc_List_List *,
							    struct Cyc_PP_Ppstate *),
				    struct Cyc_List_List *);
  struct Cyc_Fn_Function * (* _T16)(void * (*)(void *,void *),void *);
  struct Cyc_List_List * _T17;
  struct Cyc_List_List * orig = doclist;
  _T0 = _check_null(doclist);
  _T1 = _T0->hd;
  { struct Cyc_PP_Doc * d = (struct Cyc_PP_Doc *)_T1;
    _T2 = doclist;
    doclist = _T2->tl;
    _T3 = d;
    { int mw = _T3->mw;
      _T4 = d;
      { int mwo = _T4->mw;
	{ struct Cyc_List_List * ds = doclist;
	  _TL6C: if (ds != 0) { goto _TL6A;
	  }else { goto _TL6B;
	  }
	  _TL6A: _T5 = mw;
	  _T6 = mwo;
	  _T7 = ds;
	  _T8 = _T7->hd;
	  _T9 = (struct Cyc_PP_Doc *)_T8;
	  _TA = _T9->mwo;
	  _TB = _T6 + _TA;
	  { int mw2 = Cyc_PP_min(_T5,_TB);
	    _TC = mw;
	    _TD = mwo;
	    _TE = ds;
	    _TF = _TE->hd;
	    _T10 = (struct Cyc_PP_Doc *)_TF;
	    _T11 = _T10->mw;
	    _T12 = _TD + _T11;
	    { int mwo2 = Cyc_PP_min(_TC,_T12);
	      mw = mw2;
	      mwo = mwo2;
	    }
	  }_T13 = ds;
	  ds = _T13->tl;
	  goto _TL6C;
	  _TL6B: ;
	}{ struct Cyc_PP_Doc * _T18 = _cycalloc(sizeof(struct Cyc_PP_Doc));
	  _T18->mwo = mw;
	  _T18->mw = mwo;
	  _T16 = Cyc_Fn_make_fn;
	  { struct Cyc_Fn_Function * (* _T19)(struct Cyc_PP_Out * (*)(struct Cyc_List_List *,
								      struct Cyc_PP_Ppstate *),
					      struct Cyc_List_List *) = (struct Cyc_Fn_Function * (*)(struct Cyc_PP_Out * (*)(struct Cyc_List_List *,
															      struct Cyc_PP_Ppstate *),
												      struct Cyc_List_List *))_T16;
	    _T15 = _T19;
	  }_T17 = orig;
	  _T18->f = _T15(Cyc_PP_long_cats_f,_T17);
	  _T14 = (struct Cyc_PP_Doc *)_T18;
	}return _T14;
      }
    }
  }
}
struct Cyc_PP_Doc * Cyc_PP_cats(struct Cyc_List_List * doclist) {
  struct Cyc_PP_Doc * _T0;
  struct Cyc_List_List * _T1;
  struct Cyc_List_List * _T2;
  struct Cyc_List_List * _T3;
  void * _T4;
  struct Cyc_PP_Doc * _T5;
  int _T6;
  struct Cyc_PP_Doc * _T7;
  struct Cyc_List_List * _T8;
  void * _T9;
  struct Cyc_PP_Doc * _TA;
  struct Cyc_List_List * _TB;
  struct Cyc_List_List * _TC;
  struct Cyc_PP_Doc * _TD;
  struct Cyc_PP_Doc * _TE;
  if (doclist != 0) { goto _TL6D;
  }
  _T0 = Cyc_PP_nil_doc();
  return _T0;
  _TL6D: _T1 = doclist;
  _T2 = _T1->tl;
  if (_T2 != 0) { goto _TL6F;
  }
  _T3 = doclist;
  _T4 = _T3->hd;
  _T5 = (struct Cyc_PP_Doc *)_T4;
  return _T5;
  _TL6F: _T6 = Cyc_List_length(doclist);
  if (_T6 <= 30) { goto _TL71;
  }
  _T7 = Cyc_PP_long_cats(doclist);
  return _T7;
  _TL71: _T8 = doclist;
  _T9 = _T8->hd;
  _TA = (struct Cyc_PP_Doc *)_T9;
  _TB = doclist;
  _TC = _TB->tl;
  _TD = Cyc_PP_cats(_TC);
  _TE = Cyc_PP_concat(_TA,_TD);
  return _TE;
}
static struct Cyc_PP_Out * Cyc_PP_cats_arr_f(struct _fat_ptr * docs_ptr,struct Cyc_PP_Ppstate * st) {
  struct _fat_ptr * _T0;
  struct _fat_ptr _T1;
  unsigned int _T2;
  struct _fat_ptr _T3;
  unsigned char * _T4;
  struct Cyc_PP_Doc * * _T5;
  struct Cyc_PP_Doc * * _T6;
  int _T7;
  struct Cyc_PP_Out * (* _T8)(struct Cyc_Fn_Function *,struct Cyc_PP_Ppstate *);
  void * (* _T9)(struct Cyc_Fn_Function *,void *);
  struct Cyc_PP_Doc * _TA;
  struct Cyc_Fn_Function * _TB;
  struct Cyc_PP_Ppstate * _TC;
  struct Cyc_PP_Ppstate * _TD;
  struct Cyc_PP_Ppstate * _TE;
  struct Cyc_PP_Out * _TF;
  struct Cyc_PP_Out * _T10;
  struct Cyc_PP_Ppstate * _T11;
  struct Cyc_PP_Ppstate * _T12;
  int _T13;
  struct Cyc_PP_Doc * _T14;
  int _T15;
  struct Cyc_List_List * _T16;
  struct Cyc_List_List * _T17;
  void * _T18;
  struct Cyc_PP_Out * _T19;
  struct Cyc_List_List * _T1A;
  void * _T1B;
  struct Cyc_PP_Out * _T1C;
  struct Cyc_PP_Empty_PP_Alist_struct * _T1D;
  struct Cyc_PP_Empty_PP_Alist_struct * _T1E;
  struct Cyc_PP_Empty_PP_Alist_struct * _T1F;
  struct Cyc_PP_Empty_PP_Alist_struct * _T20;
  struct Cyc_List_List * _T21;
  void * _T22;
  struct Cyc_PP_Out * _T23;
  void * _T24;
  void * _T25;
  struct Cyc_List_List * _T26;
  void * _T27;
  struct Cyc_PP_Out * _T28;
  void * _T29;
  void * _T2A;
  struct Cyc_List_List * _T2B;
  struct Cyc_PP_Out * _T2C;
  struct Cyc_List_List * os = 0;
  _T0 = docs_ptr;
  { struct _fat_ptr docs = *_T0;
    _T1 = docs;
    _T2 = _get_fat_size(_T1,sizeof(struct Cyc_PP_Doc *));
    { int sz = (int)_T2;
      { int i = 0;
	_TL76: if (i < sz) { goto _TL74;
	}else { goto _TL75;
	}
	_TL74: _T3 = docs;
	_T4 = _T3.curr;
	_T5 = (struct Cyc_PP_Doc * *)_T4;
	_T6 = _check_null(_T5);
	_T7 = i;
	{ struct Cyc_PP_Doc * d = _T6[_T7];
	  if (d == Cyc_PP_nil_doc_opt) { goto _TL77;
	  }
	  goto _TL78;
	  _TL77: _throw_assert();
	  _TL78: _T9 = Cyc_Fn_apply;
	  { struct Cyc_PP_Out * (* _T2D)(struct Cyc_Fn_Function *,struct Cyc_PP_Ppstate *) = (struct Cyc_PP_Out * (*)(struct Cyc_Fn_Function *,
														      struct Cyc_PP_Ppstate *))_T9;
	    _T8 = _T2D;
	  }_TA = d;
	  _TB = _TA->f;
	  _TC = st;
	  { struct Cyc_PP_Out * o = _T8(_TB,_TC);
	    { struct Cyc_PP_Ppstate * _T2D = _cycalloc(sizeof(struct Cyc_PP_Ppstate));
	      _TE = st;
	      _T2D->ci = _TE->ci;
	      _TF = o;
	      _T2D->cc = _TF->newcc;
	      _T10 = o;
	      _T2D->cl = _T10->newcl;
	      _T11 = st;
	      _T2D->pw = _T11->pw;
	      _T12 = st;
	      _T13 = _T12->epw;
	      _T14 = d;
	      _T15 = _T14->mwo;
	      _T2D->epw = _T13 - _T15;
	      _TD = (struct Cyc_PP_Ppstate *)_T2D;
	    }st = _TD;
	    { struct Cyc_List_List * _T2D = _cycalloc(sizeof(struct Cyc_List_List));
	      _T2D->hd = o;
	      _T2D->tl = os;
	      _T16 = (struct Cyc_List_List *)_T2D;
	    }os = _T16;
	  }
	}i = i + 1;
	goto _TL76;
	_TL75: ;
      }_T17 = _check_null(os);
      _T18 = _T17->hd;
      _T19 = (struct Cyc_PP_Out *)_T18;
      { int newcc = _T19->newcc;
	_T1A = os;
	_T1B = _T1A->hd;
	_T1C = (struct Cyc_PP_Out *)_T1B;
	{ int newcl = _T1C->newcl;
	  _T1D = &Cyc_PP_Empty_stringptr;
	  _T1E = (struct Cyc_PP_Empty_PP_Alist_struct *)_T1D;
	  { void * s = (void *)_T1E;
	    _T1F = &Cyc_PP_Empty_link;
	    _T20 = (struct Cyc_PP_Empty_PP_Alist_struct *)_T1F;
	    { void * links = (void *)_T20;
	      _TL7C: if (os != 0) { goto _TL7A;
	      }else { goto _TL7B;
	      }
	      _TL7A: _T21 = os;
	      _T22 = _T21->hd;
	      _T23 = (struct Cyc_PP_Out *)_T22;
	      _T24 = _T23->ppout;
	      _T25 = s;
	      s = Cyc_PP_append(_T24,_T25);
	      _T26 = os;
	      _T27 = _T26->hd;
	      _T28 = (struct Cyc_PP_Out *)_T27;
	      _T29 = _T28->links;
	      _T2A = links;
	      links = Cyc_PP_append(_T29,_T2A);
	      _T2B = os;
	      os = _T2B->tl;
	      goto _TL7C;
	      _TL7B: { struct Cyc_PP_Out * _T2D = _cycalloc(sizeof(struct Cyc_PP_Out));
		_T2D->newcc = newcc;
		_T2D->newcl = newcl;
		_T2D->ppout = s;
		_T2D->links = links;
		_T2C = (struct Cyc_PP_Out *)_T2D;
	      }return _T2C;
	    }
	  }
	}
      }
    }
  }
}
struct Cyc_PP_Doc * Cyc_PP_cats_arr(struct _fat_ptr docs) {
  struct _fat_ptr _T0;
  struct Cyc_Core_Failure_exn_struct * _T1;
  void * _T2;
  struct _fat_ptr _T3;
  unsigned char * _T4;
  struct Cyc_PP_Doc * * _T5;
  struct Cyc_PP_Doc * * _T6;
  struct Cyc_PP_Doc * _T7;
  struct Cyc_PP_Doc * _T8;
  int _T9;
  int _TA;
  struct _fat_ptr _TB;
  unsigned char * _TC;
  struct Cyc_PP_Doc * * _TD;
  unsigned long _TE;
  int _TF;
  struct Cyc_PP_Doc * _T10;
  int _T11;
  int _T12;
  int _T13;
  int _T14;
  struct _fat_ptr _T15;
  unsigned char * _T16;
  struct Cyc_PP_Doc * * _T17;
  unsigned long _T18;
  int _T19;
  struct Cyc_PP_Doc * _T1A;
  int _T1B;
  int _T1C;
  struct Cyc_PP_Doc * _T1D;
  struct Cyc_Fn_Function * (* _T1E)(struct Cyc_PP_Out * (*)(struct _fat_ptr *,
							    struct Cyc_PP_Ppstate *),
				    struct _fat_ptr *);
  struct Cyc_Fn_Function * (* _T1F)(void * (*)(void *,void *),void *);
  struct _fat_ptr * _T20;
  struct _fat_ptr * _T21;
  unsigned int _T22;
  _T0 = docs;
  { unsigned long sz = _get_fat_size(_T0,sizeof(struct Cyc_PP_Doc *));
    if (sz != 0U) { goto _TL7D;
    }
    { struct Cyc_Core_Failure_exn_struct * _T23 = _cycalloc(sizeof(struct Cyc_Core_Failure_exn_struct));
      _T23->tag = Cyc_Core_Failure;
      _T23->f1 = _tag_fat("cats_arr -- size zero array",sizeof(char),28U);
      _T1 = (struct Cyc_Core_Failure_exn_struct *)_T23;
    }_T2 = (void *)_T1;
    _throw(_T2);
    goto _TL7E;
    _TL7D: _TL7E: _T3 = docs;
    _T4 = _T3.curr;
    _T5 = (struct Cyc_PP_Doc * *)_T4;
    _T6 = _check_null(_T5);
    { struct Cyc_PP_Doc * d = _T6[0];
      _T7 = d;
      { int mw = _T7->mw;
	_T8 = d;
	{ int mwo = _T8->mw;
	  { unsigned long i = 1U;
	    _TL82: if (i < sz) { goto _TL80;
	    }else { goto _TL81;
	    }
	    _TL80: _T9 = mw;
	    _TA = mwo;
	    _TB = docs;
	    _TC = _TB.curr;
	    _TD = (struct Cyc_PP_Doc * *)_TC;
	    _TE = i;
	    _TF = (int)_TE;
	    _T10 = _TD[_TF];
	    _T11 = _T10->mwo;
	    _T12 = _TA + _T11;
	    { int mw2 = Cyc_PP_min(_T9,_T12);
	      _T13 = mw;
	      _T14 = mwo;
	      _T15 = docs;
	      _T16 = _T15.curr;
	      _T17 = (struct Cyc_PP_Doc * *)_T16;
	      _T18 = i;
	      _T19 = (int)_T18;
	      _T1A = _T17[_T19];
	      _T1B = _T1A->mw;
	      _T1C = _T14 + _T1B;
	      { int mwo2 = Cyc_PP_min(_T13,_T1C);
		mw = mw2;
		mwo = mwo2;
	      }
	    }i = i + 1;
	    goto _TL82;
	    _TL81: ;
	  }{ struct Cyc_PP_Doc * _T23 = _cycalloc(sizeof(struct Cyc_PP_Doc));
	    _T23->mwo = mw;
	    _T23->mw = mwo;
	    _T1F = Cyc_Fn_make_fn;
	    { struct Cyc_Fn_Function * (* _T24)(struct Cyc_PP_Out * (*)(struct _fat_ptr *,
									struct Cyc_PP_Ppstate *),
						struct _fat_ptr *) = (struct Cyc_Fn_Function * (*)(struct Cyc_PP_Out * (*)(struct _fat_ptr *,
															   struct Cyc_PP_Ppstate *),
												   struct _fat_ptr *))_T1F;
	      _T1E = _T24;
	    }{ unsigned int _T24 = 1;
	      _T22 = _check_times(_T24,sizeof(struct _fat_ptr));
	      { struct _fat_ptr * _T25 = _cycalloc(_T22);
		_T25[0] = docs;
		_T21 = (struct _fat_ptr *)_T25;
	      }_T20 = _T21;
	    }_T23->f = _T1E(Cyc_PP_cats_arr_f,_T20);
	    _T1D = (struct Cyc_PP_Doc *)_T23;
	  }return _T1D;
	}
      }
    }
  }
}
static struct Cyc_PP_Out * Cyc_PP_doc_union_f(struct _tuple6 * clo,struct Cyc_PP_Ppstate * st) {
  struct _tuple6 * _T0;
  int _T1;
  struct Cyc_PP_Ppstate * _T2;
  int _T3;
  struct Cyc_PP_Doc * _T4;
  int _T5;
  int _T6;
  struct Cyc_PP_Ppstate * _T7;
  int _T8;
  struct Cyc_PP_Ppstate * _T9;
  int _TA;
  struct Cyc_PP_Doc * _TB;
  int _TC;
  int _TD;
  struct Cyc_PP_Ppstate * _TE;
  int _TF;
  long _T10;
  struct Cyc_PP_Out * (* _T11)(struct Cyc_Fn_Function *,struct Cyc_PP_Ppstate *);
  void * (* _T12)(struct Cyc_Fn_Function *,void *);
  struct Cyc_PP_Doc * _T13;
  struct Cyc_Fn_Function * _T14;
  struct Cyc_PP_Ppstate * _T15;
  struct Cyc_PP_Out * _T16;
  struct Cyc_PP_Out * (* _T17)(struct Cyc_Fn_Function *,struct Cyc_PP_Ppstate *);
  void * (* _T18)(struct Cyc_Fn_Function *,void *);
  struct Cyc_PP_Doc * _T19;
  struct Cyc_Fn_Function * _T1A;
  struct Cyc_PP_Ppstate * _T1B;
  struct Cyc_PP_Out * _T1C;
  struct Cyc_PP_Doc * _T1D;
  struct Cyc_PP_Doc * _T1E;
  _T0 = clo;
  { struct _tuple6 _T1F = *_T0;
    _T1E = _T1F.f0;
    _T1D = _T1F.f1;
  }{ struct Cyc_PP_Doc * d = _T1E;
    struct Cyc_PP_Doc * d2 = _T1D;
    _T2 = st;
    _T3 = _T2->cc;
    _T4 = d;
    _T5 = _T4->mwo;
    _T6 = _T3 + _T5;
    _T7 = st;
    _T8 = _T7->epw;
    if (_T6 > _T8) { goto _TL83;
    }
    _T1 = 1;
    goto _TL84;
    _TL83: _T9 = st;
    _TA = _T9->cc;
    _TB = d;
    _TC = _TB->mw;
    _TD = _TA + _TC;
    _TE = st;
    _TF = _TE->pw;
    _T1 = _TD <= _TF;
    _TL84: { long dfits = _T1;
      _T10 = dfits;
      if (! _T10) { goto _TL85;
      }
      _T12 = Cyc_Fn_apply;
      { struct Cyc_PP_Out * (* _T1F)(struct Cyc_Fn_Function *,struct Cyc_PP_Ppstate *) = (struct Cyc_PP_Out * (*)(struct Cyc_Fn_Function *,
														  struct Cyc_PP_Ppstate *))_T12;
	_T11 = _T1F;
      }_T13 = d;
      _T14 = _T13->f;
      _T15 = st;
      _T16 = _T11(_T14,_T15);
      return _T16;
      _TL85: _T18 = Cyc_Fn_apply;
      { struct Cyc_PP_Out * (* _T1F)(struct Cyc_Fn_Function *,struct Cyc_PP_Ppstate *) = (struct Cyc_PP_Out * (*)(struct Cyc_Fn_Function *,
														  struct Cyc_PP_Ppstate *))_T18;
	_T17 = _T1F;
      }_T19 = d2;
      _T1A = _T19->f;
      _T1B = st;
      _T1C = _T17(_T1A,_T1B);
      return _T1C;
    }
  }
}
struct Cyc_PP_Doc * Cyc_PP_doc_union(struct Cyc_PP_Doc * d,struct Cyc_PP_Doc * d2) {
  struct Cyc_PP_Doc * _T0;
  struct Cyc_PP_Doc * _T1;
  int _T2;
  struct Cyc_PP_Doc * _T3;
  int _T4;
  struct Cyc_PP_Doc * _T5;
  int _T6;
  struct Cyc_PP_Doc * _T7;
  int _T8;
  struct Cyc_Fn_Function * (* _T9)(struct Cyc_PP_Out * (*)(struct _tuple6 *,
							   struct Cyc_PP_Ppstate *),
				   struct _tuple6 *);
  struct Cyc_Fn_Function * (* _TA)(void * (*)(void *,void *),void *);
  struct _tuple6 * _TB;
  { struct Cyc_PP_Doc * _TC = _cycalloc(sizeof(struct Cyc_PP_Doc));
    _T1 = d;
    _T2 = _T1->mwo;
    _T3 = d2;
    _T4 = _T3->mwo;
    _TC->mwo = Cyc_PP_min(_T2,_T4);
    _T5 = d;
    _T6 = _T5->mw;
    _T7 = d2;
    _T8 = _T7->mw;
    _TC->mw = Cyc_PP_min(_T6,_T8);
    _TA = Cyc_Fn_make_fn;
    { struct Cyc_Fn_Function * (* _TD)(struct Cyc_PP_Out * (*)(struct _tuple6 *,
							       struct Cyc_PP_Ppstate *),
				       struct _tuple6 *) = (struct Cyc_Fn_Function * (*)(struct Cyc_PP_Out * (*)(struct _tuple6 *,
														 struct Cyc_PP_Ppstate *),
											 struct _tuple6 *))_TA;
      _T9 = _TD;
    }{ struct _tuple6 * _TD = _cycalloc(sizeof(struct _tuple6));
      _TD->f0 = d;
      _TD->f1 = d2;
      _TB = (struct _tuple6 *)_TD;
    }_TC->f = _T9(Cyc_PP_doc_union_f,_TB);
    _T0 = (struct Cyc_PP_Doc *)_TC;
  }return _T0;
}
struct Cyc_PP_Doc * Cyc_PP_oline_doc() {
  struct Cyc_PP_Doc * _T0;
  struct Cyc_PP_Doc * _T1;
  struct Cyc_PP_Doc * _T2;
  _T0 = Cyc_PP_nil_doc();
  _T1 = Cyc_PP_line_doc();
  _T2 = Cyc_PP_doc_union(_T0,_T1);
  return _T2;
}
static struct Cyc_PP_Out * Cyc_PP_tab_f(struct Cyc_PP_Doc * d,struct Cyc_PP_Ppstate * st) {
  struct Cyc_PP_Ppstate * _T0;
  struct Cyc_PP_Ppstate * _T1;
  struct Cyc_PP_Ppstate * _T2;
  struct Cyc_PP_Ppstate * _T3;
  struct Cyc_PP_Ppstate * _T4;
  struct Cyc_PP_Ppstate * _T5;
  struct Cyc_PP_Ppstate * _T6;
  struct Cyc_PP_Ppstate * _T7;
  struct Cyc_PP_Ppstate * _T8;
  struct Cyc_PP_Ppstate * _T9;
  struct Cyc_PP_Out * (* _TA)(struct Cyc_Fn_Function *,struct Cyc_PP_Ppstate *);
  void * (* _TB)(struct Cyc_Fn_Function *,void *);
  struct Cyc_PP_Doc * _TC;
  struct Cyc_Fn_Function * _TD;
  struct Cyc_PP_Ppstate * _TE;
  struct Cyc_PP_Out * _TF;
  struct Cyc_PP_Ppstate * st2;
  st2 = _cycalloc(sizeof(struct Cyc_PP_Ppstate));
  _T0 = st2;
  _T1 = st;
  _T0->ci = _T1->cc;
  _T2 = st2;
  _T3 = st;
  _T2->cc = _T3->cc;
  _T4 = st2;
  _T5 = st;
  _T4->cl = _T5->cl;
  _T6 = st2;
  _T7 = st;
  _T6->pw = _T7->pw;
  _T8 = st2;
  _T9 = st;
  _T8->epw = _T9->epw;
  _TB = Cyc_Fn_apply;
  { struct Cyc_PP_Out * (* _T10)(struct Cyc_Fn_Function *,struct Cyc_PP_Ppstate *) = (struct Cyc_PP_Out * (*)(struct Cyc_Fn_Function *,
													      struct Cyc_PP_Ppstate *))_TB;
    _TA = _T10;
  }_TC = d;
  _TD = _TC->f;
  _TE = st2;
  _TF = _TA(_TD,_TE);
  return _TF;
}
struct Cyc_PP_Doc * Cyc_PP_tab(struct Cyc_PP_Doc * d) {
  struct Cyc_PP_Doc * _T0;
  struct Cyc_PP_Doc * _T1;
  struct Cyc_PP_Doc * _T2;
  struct Cyc_PP_Doc * _T3;
  struct Cyc_PP_Doc * _T4;
  struct Cyc_Fn_Function * (* _T5)(struct Cyc_PP_Out * (*)(struct Cyc_PP_Doc *,
							   struct Cyc_PP_Ppstate *),
				   struct Cyc_PP_Doc *);
  struct Cyc_Fn_Function * (* _T6)(void * (*)(void *,void *),void *);
  struct Cyc_PP_Doc * _T7;
  struct Cyc_PP_Doc * _T8;
  struct Cyc_PP_Doc * d2;
  d2 = _cycalloc(sizeof(struct Cyc_PP_Doc));
  _T0 = d2;
  _T1 = d;
  _T0->mwo = _T1->mwo;
  _T2 = d2;
  _T3 = d;
  _T2->mw = _T3->mw;
  _T4 = d2;
  _T6 = Cyc_Fn_make_fn;
  { struct Cyc_Fn_Function * (* _T9)(struct Cyc_PP_Out * (*)(struct Cyc_PP_Doc *,
							     struct Cyc_PP_Ppstate *),
				     struct Cyc_PP_Doc *) = (struct Cyc_Fn_Function * (*)(struct Cyc_PP_Out * (*)(struct Cyc_PP_Doc *,
														  struct Cyc_PP_Ppstate *),
											  struct Cyc_PP_Doc *))_T6;
    _T5 = _T9;
  }_T7 = d;
  _T4->f = _T5(Cyc_PP_tab_f,_T7);
  _T8 = d2;
  return _T8;
}
static struct Cyc_PP_Doc * Cyc_PP_ppseq_f(struct Cyc_PP_Doc * (* pp)(void *),
					  struct _fat_ptr sep,struct Cyc_List_List * l) {
  struct Cyc_PP_Doc * _T0;
  struct Cyc_List_List * _T1;
  struct Cyc_List_List * _T2;
  struct Cyc_List_List * _T3;
  void * _T4;
  struct Cyc_PP_Doc * _T5;
  struct Cyc_PP_Doc * _T6;
  struct Cyc_List_List * _T7;
  void * _T8;
  struct Cyc_PP_Doc * (* _T9)(void *);
  struct _fat_ptr _TA;
  struct Cyc_List_List * _TB;
  struct Cyc_List_List * _TC;
  struct _fat_ptr _TD;
  if (l != 0) { goto _TL87;
  }
  _T0 = Cyc_PP_nil_doc();
  return _T0;
  _TL87: _T1 = l;
  _T2 = _T1->tl;
  if (_T2 != 0) { goto _TL89;
  }
  _T3 = l;
  _T4 = _T3->hd;
  _T5 = pp(_T4);
  return _T5;
  _TL89: { struct Cyc_PP_Doc * _TE[4];
    _T7 = l;
    _T8 = _T7->hd;
    _TE[0] = pp(_T8);
    _TE[1] = Cyc_PP_text(sep);
    _TE[2] = Cyc_PP_oline_doc();
    _T9 = pp;
    _TA = sep;
    _TB = l;
    _TC = _TB->tl;
    _TE[3] = Cyc_PP_ppseq_f(_T9,_TA,_TC);
    _TD = _tag_fat(_TE,sizeof(struct Cyc_PP_Doc *),4);
    _T6 = Cyc_PP_cat(_TD);
  }return _T6;
}
struct Cyc_PP_Doc * Cyc_PP_ppseq(struct Cyc_PP_Doc * (* pp)(void *),struct _fat_ptr sep,
				 struct Cyc_List_List * l) {
  struct Cyc_PP_Doc * (* _T0)(void *);
  struct _fat_ptr _T1;
  struct Cyc_List_List * _T2;
  struct Cyc_PP_Doc * _T3;
  struct Cyc_PP_Doc * _T4;
  _T0 = pp;
  _T1 = sep;
  _T2 = l;
  _T3 = Cyc_PP_ppseq_f(_T0,_T1,_T2);
  _T4 = Cyc_PP_tab(_T3);
  return _T4;
}
struct Cyc_PP_Doc * Cyc_PP_seq_f(struct _fat_ptr sep,struct Cyc_List_List * l) {
  struct Cyc_PP_Doc * _T0;
  struct Cyc_List_List * _T1;
  struct Cyc_List_List * _T2;
  struct Cyc_List_List * _T3;
  void * _T4;
  struct Cyc_PP_Doc * _T5;
  struct Cyc_List_List * _T6;
  struct Cyc_List_List * _T7;
  struct Cyc_List_List * _T8;
  struct Cyc_List_List * _T9;
  struct Cyc_List_List * _TA;
  struct Cyc_List_List * _TB;
  struct Cyc_PP_Doc * _TC;
  if (l != 0) { goto _TL8B;
  }
  _T0 = Cyc_PP_nil_doc();
  return _T0;
  _TL8B: _T1 = l;
  _T2 = _T1->tl;
  if (_T2 != 0) { goto _TL8D;
  }
  _T3 = l;
  _T4 = _T3->hd;
  _T5 = (struct Cyc_PP_Doc *)_T4;
  return _T5;
  _TL8D: { struct Cyc_PP_Doc * sep2 = Cyc_PP_text(sep);
    struct Cyc_PP_Doc * oline = Cyc_PP_oline_doc();
    struct Cyc_List_List * x = l;
    _TL8F: _T6 = _check_null(x);
    _T7 = _T6->tl;
    if (_T7 != 0) { goto _TL90;
    }else { goto _TL91;
    }
    _TL90: _T8 = x;
    { struct Cyc_List_List * temp = _T8->tl;
      _T9 = x;
      { struct Cyc_List_List * _TD = _cycalloc(sizeof(struct Cyc_List_List));
	_TD->hd = sep2;
	{ struct Cyc_List_List * _TE = _cycalloc(sizeof(struct Cyc_List_List));
	  _TE->hd = oline;
	  _TE->tl = temp;
	  _TB = (struct Cyc_List_List *)_TE;
	}_TD->tl = _TB;
	_TA = (struct Cyc_List_List *)_TD;
      }_T9->tl = _TA;
      x = temp;
    }goto _TL8F;
    _TL91: _TC = Cyc_PP_cats(l);
    return _TC;
  }
}
struct Cyc_PP_Doc * Cyc_PP_seq(struct _fat_ptr sep,struct Cyc_List_List * l) {
  struct Cyc_PP_Doc * _T0;
  struct Cyc_PP_Doc * _T1;
  _T0 = Cyc_PP_seq_f(sep,l);
  _T1 = Cyc_PP_tab(_T0);
  return _T1;
}
struct Cyc_PP_Doc * Cyc_PP_ppseql_f(struct Cyc_PP_Doc * (* pp)(void *),struct _fat_ptr sep,
				    struct Cyc_List_List * l) {
  struct Cyc_PP_Doc * _T0;
  struct Cyc_List_List * _T1;
  struct Cyc_List_List * _T2;
  struct Cyc_List_List * _T3;
  void * _T4;
  struct Cyc_PP_Doc * _T5;
  struct Cyc_PP_Doc * _T6;
  struct Cyc_List_List * _T7;
  void * _T8;
  struct Cyc_PP_Doc * (* _T9)(void *);
  struct _fat_ptr _TA;
  struct Cyc_List_List * _TB;
  struct Cyc_List_List * _TC;
  struct _fat_ptr _TD;
  if (l != 0) { goto _TL92;
  }
  _T0 = Cyc_PP_nil_doc();
  return _T0;
  _TL92: _T1 = l;
  _T2 = _T1->tl;
  if (_T2 != 0) { goto _TL94;
  }
  _T3 = l;
  _T4 = _T3->hd;
  _T5 = pp(_T4);
  return _T5;
  _TL94: { struct Cyc_PP_Doc * _TE[4];
    _T7 = l;
    _T8 = _T7->hd;
    _TE[0] = pp(_T8);
    _TE[1] = Cyc_PP_text(sep);
    _TE[2] = Cyc_PP_line_doc();
    _T9 = pp;
    _TA = sep;
    _TB = l;
    _TC = _TB->tl;
    _TE[3] = Cyc_PP_ppseql_f(_T9,_TA,_TC);
    _TD = _tag_fat(_TE,sizeof(struct Cyc_PP_Doc *),4);
    _T6 = Cyc_PP_cat(_TD);
  }return _T6;
}
struct Cyc_PP_Doc * Cyc_PP_ppseql(struct Cyc_PP_Doc * (* pp)(void *),struct _fat_ptr sep,
				  struct Cyc_List_List * l) {
  struct Cyc_PP_Doc * (* _T0)(void *);
  struct _fat_ptr _T1;
  struct Cyc_List_List * _T2;
  struct Cyc_PP_Doc * _T3;
  struct Cyc_PP_Doc * _T4;
  _T0 = pp;
  _T1 = sep;
  _T2 = l;
  _T3 = Cyc_PP_ppseql_f(_T0,_T1,_T2);
  _T4 = Cyc_PP_tab(_T3);
  return _T4;
}
static struct Cyc_PP_Doc * Cyc_PP_seql_f(struct _fat_ptr sep,struct Cyc_List_List * l) {
  struct Cyc_PP_Doc * _T0;
  struct Cyc_List_List * _T1;
  struct Cyc_List_List * _T2;
  struct Cyc_List_List * _T3;
  void * _T4;
  struct Cyc_PP_Doc * _T5;
  struct Cyc_PP_Doc * _T6;
  struct Cyc_List_List * _T7;
  void * _T8;
  struct _fat_ptr _T9;
  struct Cyc_List_List * _TA;
  struct Cyc_List_List * _TB;
  struct _fat_ptr _TC;
  if (l != 0) { goto _TL96;
  }
  _T0 = Cyc_PP_nil_doc();
  return _T0;
  _TL96: _T1 = l;
  _T2 = _T1->tl;
  if (_T2 != 0) { goto _TL98;
  }
  _T3 = l;
  _T4 = _T3->hd;
  _T5 = (struct Cyc_PP_Doc *)_T4;
  return _T5;
  _TL98: { struct Cyc_PP_Doc * _TD[4];
    _T7 = l;
    _T8 = _T7->hd;
    _TD[0] = (struct Cyc_PP_Doc *)_T8;
    _TD[1] = Cyc_PP_text(sep);
    _TD[2] = Cyc_PP_line_doc();
    _T9 = sep;
    _TA = l;
    _TB = _TA->tl;
    _TD[3] = Cyc_PP_seql_f(_T9,_TB);
    _TC = _tag_fat(_TD,sizeof(struct Cyc_PP_Doc *),4);
    _T6 = Cyc_PP_cat(_TC);
  }return _T6;
}
struct Cyc_PP_Doc * Cyc_PP_seql(struct _fat_ptr sep,struct Cyc_List_List * l0) {
  struct Cyc_PP_Doc * _T0;
  struct Cyc_PP_Doc * _T1;
  _T0 = Cyc_PP_seql_f(sep,l0);
  _T1 = Cyc_PP_tab(_T0);
  return _T1;
}
struct Cyc_PP_Doc * Cyc_PP_group(struct _fat_ptr start,struct _fat_ptr stop,
				 struct _fat_ptr sep,struct Cyc_List_List * ss) {
  struct Cyc_PP_Doc * _T0;
  struct _fat_ptr _T1;
  { struct Cyc_PP_Doc * _T2[3];
    _T2[0] = Cyc_PP_text(start);
    _T2[1] = Cyc_PP_seq(sep,ss);
    _T2[2] = Cyc_PP_text(stop);
    _T1 = _tag_fat(_T2,sizeof(struct Cyc_PP_Doc *),3);
    _T0 = Cyc_PP_cat(_T1);
  }return _T0;
}
struct Cyc_PP_Doc * Cyc_PP_egroup(struct _fat_ptr start,struct _fat_ptr stop,
				  struct _fat_ptr sep,struct Cyc_List_List * ss) {
  struct Cyc_PP_Doc * _T0;
  struct Cyc_PP_Doc * _T1;
  struct _fat_ptr _T2;
  if (ss != 0) { goto _TL9A;
  }
  _T0 = Cyc_PP_nil_doc();
  return _T0;
  _TL9A: { struct Cyc_PP_Doc * _T3[3];
    _T3[0] = Cyc_PP_text(start);
    _T3[1] = Cyc_PP_seq(sep,ss);
    _T3[2] = Cyc_PP_text(stop);
    _T2 = _tag_fat(_T3,sizeof(struct Cyc_PP_Doc *),3);
    _T1 = Cyc_PP_cat(_T2);
  }return _T1;
}
struct Cyc_PP_Doc * Cyc_PP_groupl(struct _fat_ptr start,struct _fat_ptr stop,
				  struct _fat_ptr sep,struct Cyc_List_List * ss) {
  struct Cyc_PP_Doc * _T0;
  struct _fat_ptr _T1;
  { struct Cyc_PP_Doc * _T2[3];
    _T2[0] = Cyc_PP_text(start);
    _T2[1] = Cyc_PP_seql(sep,ss);
    _T2[2] = Cyc_PP_text(stop);
    _T1 = _tag_fat(_T2,sizeof(struct Cyc_PP_Doc *),3);
    _T0 = Cyc_PP_cat(_T1);
  }return _T0;
}
