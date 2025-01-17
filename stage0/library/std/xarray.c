#include <cyc_include.h>
extern char Cyc_Core_Invalid_argument[17U];
 struct Cyc_Core_Invalid_argument_exn_struct {
  char * tag;
  struct _fat_ptr f1;
};
extern struct _RegionHandle * Cyc_Core_heap_region;
extern unsigned int Cyc_Core_unique_qual;
void Cyc_Core_ufree(void *);
 struct Cyc_Xarray_Xarray {
  struct _fat_ptr elmts;
  int num_elmts;
};
int Cyc_Xarray_length(struct Cyc_Xarray_Xarray * xarr) {
  struct Cyc_Xarray_Xarray * _T0;
  int _T1;
  _T0 = xarr;
  _T1 = _T0->num_elmts;
  return _T1;
}
void * Cyc_Xarray_get(struct Cyc_Xarray_Xarray * xarr,int i) {
  int _T0;
  struct Cyc_Xarray_Xarray * _T1;
  int _T2;
  struct Cyc_Core_Invalid_argument_exn_struct * _T3;
  void * _T4;
  struct Cyc_Xarray_Xarray * _T5;
  struct _fat_ptr _T6;
  int _T7;
  unsigned char * _T8;
  void * * _T9;
  void * _TA;
  if (i < 0) { goto _TL2;
  }else { goto _TL3;
  }
  _TL3: _T0 = i;
  _T1 = xarr;
  _T2 = _T1->num_elmts;
  if (_T0 >= _T2) { goto _TL2;
  }else { goto _TL0;
  }
  _TL2: { struct Cyc_Core_Invalid_argument_exn_struct * _TB = _cycalloc(sizeof(struct Cyc_Core_Invalid_argument_exn_struct));
    _TB->tag = Cyc_Core_Invalid_argument;
    _TB->f1 = _tag_fat("Xarray::get: bad index",sizeof(char),23U);
    _T3 = (struct Cyc_Core_Invalid_argument_exn_struct *)_TB;
  }_T4 = (void *)_T3;
  _throw(_T4);
  goto _TL1;
  _TL0: _TL1: _T5 = xarr;
  _T6 = _T5->elmts;
  _T7 = i;
  _T8 = _check_fat_subscript(_T6,sizeof(void *),_T7);
  _T9 = (void * *)_T8;
  _TA = *_T9;
  return _TA;
}
void Cyc_Xarray_set(struct Cyc_Xarray_Xarray * xarr,int i,void * a) {
  int _T0;
  struct Cyc_Xarray_Xarray * _T1;
  int _T2;
  struct Cyc_Core_Invalid_argument_exn_struct * _T3;
  void * _T4;
  struct Cyc_Xarray_Xarray * _T5;
  struct _fat_ptr _T6;
  int _T7;
  unsigned char * _T8;
  void * * _T9;
  if (i < 0) { goto _TL6;
  }else { goto _TL7;
  }
  _TL7: _T0 = i;
  _T1 = xarr;
  _T2 = _T1->num_elmts;
  if (_T0 >= _T2) { goto _TL6;
  }else { goto _TL4;
  }
  _TL6: { struct Cyc_Core_Invalid_argument_exn_struct * _TA = _cycalloc(sizeof(struct Cyc_Core_Invalid_argument_exn_struct));
    _TA->tag = Cyc_Core_Invalid_argument;
    _TA->f1 = _tag_fat("Xarray::set: bad index",sizeof(char),23U);
    _T3 = (struct Cyc_Core_Invalid_argument_exn_struct *)_TA;
  }_T4 = (void *)_T3;
  _throw(_T4);
  goto _TL5;
  _TL4: _TL5: _T5 = xarr;
  _T6 = _T5->elmts;
  _T7 = i;
  _T8 = _check_fat_subscript(_T6,sizeof(void *),_T7);
  _T9 = (void * *)_T8;
  *_T9 = a;
}
struct Cyc_Xarray_Xarray * Cyc_Xarray_rcreate_empty(struct _RegionHandle * r) {
  struct Cyc_Xarray_Xarray * _T0;
  struct _RegionHandle * _T1;
  struct _fat_ptr x = _tag_fat(0,0,0);
  _T1 = r;
  { struct Cyc_Xarray_Xarray * _T2 = _region_malloc(_T1,0U,sizeof(struct Cyc_Xarray_Xarray));
    _T2->elmts = x;
    _T2->num_elmts = 0;
    _T0 = (struct Cyc_Xarray_Xarray *)_T2;
  }return _T0;
}
struct Cyc_Xarray_Xarray * Cyc_Xarray_create_empty() {
  struct Cyc_Xarray_Xarray * _T0;
  _T0 = Cyc_Xarray_rcreate_empty(Cyc_Core_heap_region);
  return _T0;
}
struct Cyc_Xarray_Xarray * Cyc_Xarray_rcreate(struct _RegionHandle * r,int len,
					      void * a) {
  struct Cyc_Core_Invalid_argument_exn_struct * _T0;
  void * _T1;
  struct Cyc_Xarray_Xarray * _T2;
  struct _RegionHandle * _T3;
  struct _fat_ptr _T4;
  int _T5;
  void * * _T6;
  unsigned int _T7;
  unsigned int _T8;
  unsigned int _T9;
  if (len >= 0) { goto _TL8;
  }
  { struct Cyc_Core_Invalid_argument_exn_struct * _TA = _cycalloc(sizeof(struct Cyc_Core_Invalid_argument_exn_struct));
    _TA->tag = Cyc_Core_Invalid_argument;
    _TA->f1 = _tag_fat("xarrays must have a non-negative size buffer",sizeof(char),
		       45U);
    _T0 = (struct Cyc_Core_Invalid_argument_exn_struct *)_TA;
  }_T1 = (void *)_T0;
  _throw(_T1);
  goto _TL9;
  _TL8: _TL9: _T3 = r;
  { struct Cyc_Xarray_Xarray * _TA = _region_malloc(_T3,0U,sizeof(struct Cyc_Xarray_Xarray));
    _T5 = len;
    { unsigned int _TB = (unsigned int)_T5;
      _T7 = Cyc_Core_unique_qual;
      _T8 = _check_times(_TB,sizeof(void *));
      { void * * _TC = _aqual_malloc(_T7,_T8);
	{ unsigned int _TD = _TB;
	  unsigned int i;
	  i = 0;
	  _TLD: if (i < _TD) { goto _TLB;
	  }else { goto _TLC;
	  }
	  _TLB: _T9 = i;
	  _TC[_T9] = a;
	  i = i + 1;
	  goto _TLD;
	  _TLC: ;
	}_T6 = (void * *)_TC;
      }_T4 = _tag_fat(_T6,sizeof(void *),_TB);
    }_TA->elmts = _T4;
    _TA->num_elmts = 0;
    _T2 = (struct Cyc_Xarray_Xarray *)_TA;
  }return _T2;
}
struct Cyc_Xarray_Xarray * Cyc_Xarray_create(int len,void * a) {
  struct Cyc_Xarray_Xarray * _T0;
  _T0 = Cyc_Xarray_rcreate(Cyc_Core_heap_region,len,a);
  return _T0;
}
struct Cyc_Xarray_Xarray * Cyc_Xarray_rsingleton(struct _RegionHandle * r,
						 int len,void * a) {
  struct Cyc_Core_Invalid_argument_exn_struct * _T0;
  void * _T1;
  struct Cyc_Xarray_Xarray * _T2;
  struct Cyc_Xarray_Xarray * _T3;
  if (len >= 1) { goto _TLE;
  }
  { struct Cyc_Core_Invalid_argument_exn_struct * _T4 = _cycalloc(sizeof(struct Cyc_Core_Invalid_argument_exn_struct));
    _T4->tag = Cyc_Core_Invalid_argument;
    _T4->f1 = _tag_fat("singleton xarray must have size >=1",sizeof(char),
		       36U);
    _T0 = (struct Cyc_Core_Invalid_argument_exn_struct *)_T4;
  }_T1 = (void *)_T0;
  _throw(_T1);
  goto _TLF;
  _TLE: _TLF: { struct Cyc_Xarray_Xarray * x = Cyc_Xarray_rcreate(r,len,a);
    _T2 = x;
    _T2->num_elmts = 1;
    _T3 = x;
    return _T3;
  }
}
struct Cyc_Xarray_Xarray * Cyc_Xarray_singleton(int len,void * a) {
  struct Cyc_Xarray_Xarray * _T0;
  _T0 = Cyc_Xarray_rsingleton(Cyc_Core_heap_region,len,a);
  return _T0;
}
void Cyc_Xarray_add(struct Cyc_Xarray_Xarray * xarr,void * a) {
  struct Cyc_Xarray_Xarray * _T0;
  int _T1;
  unsigned int _T2;
  struct Cyc_Xarray_Xarray * _T3;
  struct _fat_ptr _T4;
  unsigned int _T5;
  struct Cyc_Xarray_Xarray * _T6;
  int _T7;
  struct Cyc_Xarray_Xarray * _T8;
  void * * _T9;
  void * * _TA;
  unsigned int _TB;
  unsigned int _TC;
  unsigned int _TD;
  struct _fat_ptr _TE;
  struct Cyc_Xarray_Xarray * _TF;
  int _T10;
  int _T11;
  void * * _T12;
  unsigned int _T13;
  unsigned int _T14;
  unsigned int _T15;
  struct Cyc_Xarray_Xarray * _T16;
  struct _fat_ptr _T17;
  unsigned char * _T18;
  void * * _T19;
  void * * _T1A;
  int _T1B;
  struct Cyc_Xarray_Xarray * _T1C;
  int _T1D;
  struct _fat_ptr _T1E;
  int _T1F;
  unsigned char * _T20;
  void * * _T21;
  struct Cyc_Xarray_Xarray * _T22;
  struct _fat_ptr _T23;
  int _T24;
  unsigned char * _T25;
  void * * _T26;
  struct Cyc_Xarray_Xarray * _T27;
  struct Cyc_Xarray_Xarray * _T28;
  void (* _T29)(void * *);
  void (* _T2A)(void *);
  struct _fat_ptr _T2B;
  unsigned char * _T2C;
  void * * _T2D;
  struct Cyc_Xarray_Xarray * _T2E;
  struct _fat_ptr _T2F;
  unsigned char * _T30;
  void * * _T31;
  struct Cyc_Xarray_Xarray * _T32;
  int _T33;
  int _T34;
  _T0 = xarr;
  _T1 = _T0->num_elmts;
  _T2 = (unsigned int)_T1;
  _T3 = xarr;
  _T4 = _T3->elmts;
  _T5 = _get_fat_size(_T4,sizeof(void *));
  if (_T2 != _T5) { goto _TL10;
  }
  _T6 = xarr;
  _T7 = _T6->num_elmts;
  if (_T7 != 0) { goto _TL12;
  }
  _T8 = xarr;
  { unsigned int _T35 = 10U;
    _TB = Cyc_Core_unique_qual;
    _TC = _check_times(_T35,sizeof(void *));
    { void * * _T36 = _aqual_malloc(_TB,_TC);
      { unsigned int _T37 = _T35;
	unsigned int i;
	i = 0;
	_TL17: if (i < _T37) { goto _TL15;
	}else { goto _TL16;
	}
	_TL15: _TD = i;
	_T36[_TD] = a;
	i = i + 1;
	goto _TL17;
	_TL16: ;
      }_TA = (void * *)_T36;
    }_T9 = _TA;
  }_T8->elmts = _tag_fat(_T9,sizeof(void *),10U);
  goto _TL13;
  _TL12: _TF = xarr;
  _T10 = _TF->num_elmts;
  _T11 = _T10 * 2;
  { unsigned int _T35 = (unsigned int)_T11;
    _T13 = Cyc_Core_unique_qual;
    _T14 = _check_times(_T35,sizeof(void *));
    { void * * _T36 = _aqual_malloc(_T13,_T14);
      { unsigned int _T37 = _T35;
	unsigned int i;
	i = 0;
	_TL1B: if (i < _T37) { goto _TL19;
	}else { goto _TL1A;
	}
	_TL19: _T15 = i;
	_T16 = xarr;
	_T17 = _T16->elmts;
	_T18 = _T17.curr;
	_T19 = (void * *)_T18;
	_T1A = _check_null(_T19);
	_T36[_T15] = _T1A[0];
	i = i + 1;
	goto _TL1B;
	_TL1A: ;
      }_T12 = (void * *)_T36;
    }_TE = _tag_fat(_T12,sizeof(void *),_T35);
  }{ struct _fat_ptr newarr = _TE;
    { int i = 1;
      _TL1F: _T1B = i;
      _T1C = xarr;
      _T1D = _T1C->num_elmts;
      if (_T1B < _T1D) { goto _TL1D;
      }else { goto _TL1E;
      }
      _TL1D: _T1E = newarr;
      _T1F = i;
      _T20 = _check_fat_subscript(_T1E,sizeof(void *),_T1F);
      _T21 = (void * *)_T20;
      _T22 = xarr;
      _T23 = _T22->elmts;
      _T24 = i;
      _T25 = _check_fat_subscript(_T23,sizeof(void *),_T24);
      _T26 = (void * *)_T25;
      *_T21 = *_T26;
      i = i + 1;
      goto _TL1F;
      _TL1E: ;
    }_T27 = xarr;
    { struct _fat_ptr _T35 = _T27->elmts;
      struct _fat_ptr _T36 = newarr;
      _T28 = xarr;
      _T28->elmts = _T36;
      newarr = _T35;
    }_T2A = Cyc_Core_ufree;
    { void (* _T35)(void * *) = (void (*)(void * *))_T2A;
      _T29 = _T35;
    }_T2B = newarr;
    _T2C = _untag_fat_ptr_check_bound(_T2B,sizeof(void *),1U);
    _T2D = (void * *)_T2C;
    _T29(_T2D);
  }_TL13: goto _TL11;
  _TL10: _TL11: _T2E = xarr;
  _T2F = _T2E->elmts;
  _T30 = _T2F.curr;
  _T31 = (void * *)_T30;
  _T32 = xarr;
  _T33 = _T32->num_elmts;
  _T32->num_elmts = _T33 + 1;
  _T34 = _T33;
  _T31[_T34] = a;
}
int Cyc_Xarray_add_ind(struct Cyc_Xarray_Xarray * xarr,void * a) {
  struct Cyc_Xarray_Xarray * _T0;
  int _T1;
  int _T2;
  Cyc_Xarray_add(xarr,a);
  _T0 = xarr;
  _T1 = _T0->num_elmts;
  _T2 = _T1 - 1;
  return _T2;
}
struct _fat_ptr Cyc_Xarray_rto_array(struct _RegionHandle * r,struct Cyc_Xarray_Xarray * xarr) {
  struct Cyc_Xarray_Xarray * _T0;
  int _T1;
  void * * _T2;
  void * * _T3;
  struct _RegionHandle * _T4;
  unsigned int _T5;
  struct _fat_ptr _T6;
  struct _fat_ptr _T7;
  struct Cyc_Xarray_Xarray * _T8;
  int _T9;
  void * * _TA;
  struct _RegionHandle * _TB;
  unsigned int _TC;
  unsigned int _TD;
  struct Cyc_Xarray_Xarray * _TE;
  struct _fat_ptr _TF;
  unsigned int _T10;
  int _T11;
  unsigned char * _T12;
  void * * _T13;
  struct _fat_ptr _T14;
  _T0 = xarr;
  _T1 = _T0->num_elmts;
  if (_T1 != 0) { goto _TL20;
  }
  { unsigned int _T15 = 0;
    _T4 = r;
    _T5 = _check_times(_T15,sizeof(void *));
    { void * * _T16 = _region_malloc(_T4,0U,_T5);
      *_T16 = 0;
      _T3 = (void * *)_T16;
    }_T2 = _T3;
  }_T6 = _tag_fat(_T2,sizeof(void *),0U);
  return _T6;
  _TL20: _T8 = xarr;
  _T9 = _T8->num_elmts;
  { unsigned int _T15 = (unsigned int)_T9;
    _TB = r;
    _TC = _check_times(_T15,sizeof(void *));
    { void * * _T16 = _region_malloc(_TB,0U,_TC);
      { unsigned int _T17 = _T15;
	unsigned int i;
	i = 0;
	_TL25: if (i < _T17) { goto _TL23;
	}else { goto _TL24;
	}
	_TL23: _TD = i;
	_TE = xarr;
	_TF = _TE->elmts;
	_T10 = i;
	_T11 = (int)_T10;
	_T12 = _check_fat_subscript(_TF,sizeof(void *),_T11);
	_T13 = (void * *)_T12;
	_T16[_TD] = *_T13;
	i = i + 1;
	goto _TL25;
	_TL24: ;
      }_TA = (void * *)_T16;
    }_T7 = _tag_fat(_TA,sizeof(void *),_T15);
  }{ struct _fat_ptr ans = _T7;
    _T14 = ans;
    return _T14;
  }
}
struct _fat_ptr Cyc_Xarray_to_array(struct Cyc_Xarray_Xarray * xarr) {
  struct _fat_ptr _T0;
  _T0 = Cyc_Xarray_rto_array(Cyc_Core_heap_region,xarr);
  return _T0;
}
struct Cyc_Xarray_Xarray * Cyc_Xarray_rfrom_array(struct _RegionHandle * r,
						  struct _fat_ptr arr) {
  struct _fat_ptr _T0;
  unsigned int _T1;
  struct Cyc_Xarray_Xarray * _T2;
  struct _RegionHandle * _T3;
  struct Cyc_Xarray_Xarray * _T4;
  struct _fat_ptr _T5;
  struct _fat_ptr _T6;
  void * * _T7;
  unsigned int _T8;
  unsigned int _T9;
  unsigned int _TA;
  struct _fat_ptr _TB;
  unsigned char * _TC;
  void * * _TD;
  void * * _TE;
  unsigned int _TF;
  int _T10;
  struct Cyc_Xarray_Xarray * _T11;
  struct _fat_ptr _T12;
  unsigned int _T13;
  struct Cyc_Xarray_Xarray * _T14;
  _T0 = arr;
  _T1 = _get_fat_size(_T0,sizeof(void *));
  if (_T1 != 0U) { goto _TL26;
  }
  _T2 = Cyc_Xarray_rcreate_empty(r);
  return _T2;
  _TL26: { struct Cyc_Xarray_Xarray * ans;
    _T3 = r;
    ans = _region_malloc(_T3,0U,sizeof(struct Cyc_Xarray_Xarray));
    _T4 = ans;
    _T6 = arr;
    { unsigned int _T15 = _get_fat_size(_T6,sizeof(void *));
      _T8 = Cyc_Core_unique_qual;
      _T9 = _check_times(_T15,sizeof(void *));
      { void * * _T16 = _aqual_malloc(_T8,_T9);
	{ unsigned int _T17 = _T15;
	  unsigned int i;
	  i = 0;
	  _TL2B: if (i < _T17) { goto _TL29;
	  }else { goto _TL2A;
	  }
	  _TL29: _TA = i;
	  _TB = arr;
	  _TC = _TB.curr;
	  _TD = (void * *)_TC;
	  _TE = _check_null(_TD);
	  _TF = i;
	  _T10 = (int)_TF;
	  _T16[_TA] = _TE[_T10];
	  i = i + 1;
	  goto _TL2B;
	  _TL2A: ;
	}_T7 = (void * *)_T16;
      }_T5 = _tag_fat(_T7,sizeof(void *),_T15);
    }_T4->elmts = _T5;
    _T11 = ans;
    _T12 = arr;
    _T13 = _get_fat_size(_T12,sizeof(void *));
    _T11->num_elmts = (int)_T13;
    _T14 = ans;
    return _T14;
  }
}
struct Cyc_Xarray_Xarray * Cyc_Xarray_from_array(struct _fat_ptr arr) {
  struct Cyc_Xarray_Xarray * _T0;
  _T0 = Cyc_Xarray_rfrom_array(Cyc_Core_heap_region,arr);
  return _T0;
}
struct Cyc_Xarray_Xarray * Cyc_Xarray_rappend(struct _RegionHandle * r,struct Cyc_Xarray_Xarray * xarr1,
					      struct Cyc_Xarray_Xarray * xarr2) {
  struct Cyc_Xarray_Xarray * _T0;
  struct _fat_ptr _T1;
  unsigned int _T2;
  struct Cyc_Xarray_Xarray * _T3;
  struct _fat_ptr _T4;
  unsigned int _T5;
  unsigned int _T6;
  struct Cyc_Xarray_Xarray * _T7;
  void * _T8;
  struct Cyc_Xarray_Xarray * _T9;
  struct _fat_ptr _TA;
  unsigned int _TB;
  struct Cyc_Xarray_Xarray * _TC;
  struct _fat_ptr _TD;
  unsigned char * _TE;
  void * * _TF;
  void * * _T10;
  struct Cyc_Xarray_Xarray * _T11;
  struct _fat_ptr _T12;
  unsigned char * _T13;
  void * * _T14;
  void * * _T15;
  struct _RegionHandle * _T16;
  struct Cyc_Xarray_Xarray * _T17;
  struct _fat_ptr _T18;
  int _T19;
  void * * _T1A;
  unsigned int _T1B;
  unsigned int _T1C;
  unsigned int _T1D;
  struct Cyc_Xarray_Xarray * _T1E;
  int _T1F;
  struct Cyc_Xarray_Xarray * _T20;
  int _T21;
  struct Cyc_Xarray_Xarray * _T22;
  struct Cyc_Xarray_Xarray * _T23;
  struct _fat_ptr _T24;
  int _T25;
  unsigned char * _T26;
  void * * _T27;
  void * _T28;
  int _T29;
  struct Cyc_Xarray_Xarray * _T2A;
  int _T2B;
  struct Cyc_Xarray_Xarray * _T2C;
  struct Cyc_Xarray_Xarray * _T2D;
  struct _fat_ptr _T2E;
  int _T2F;
  unsigned char * _T30;
  void * * _T31;
  void * _T32;
  struct Cyc_Xarray_Xarray * _T33;
  _T0 = xarr1;
  _T1 = _T0->elmts;
  _T2 = _get_fat_size(_T1,sizeof(void *));
  _T3 = xarr2;
  _T4 = _T3->elmts;
  _T5 = _get_fat_size(_T4,sizeof(void *));
  _T6 = _T2 + _T5;
  { int newsz = (int)_T6;
    if (newsz != 0) { goto _TL2C;
    }
    _T7 = Cyc_Xarray_rcreate_empty(r);
    return _T7;
    _TL2C: _T9 = xarr1;
    _TA = _T9->elmts;
    _TB = _get_fat_size(_TA,sizeof(void *));
    if (_TB != 0U) { goto _TL2E;
    }
    _TC = xarr2;
    _TD = _TC->elmts;
    _TE = _TD.curr;
    _TF = (void * *)_TE;
    _T10 = _check_null(_TF);
    _T8 = _T10[0];
    goto _TL2F;
    _TL2E: _T11 = xarr1;
    _T12 = _T11->elmts;
    _T13 = _T12.curr;
    _T14 = (void * *)_T13;
    _T15 = _check_null(_T14);
    _T8 = _T15[0];
    _TL2F: { void * init = _T8;
      struct Cyc_Xarray_Xarray * ans;
      _T16 = r;
      ans = _region_malloc(_T16,0U,sizeof(struct Cyc_Xarray_Xarray));
      _T17 = ans;
      _T19 = newsz;
      { unsigned int _T34 = (unsigned int)_T19;
	_T1B = Cyc_Core_unique_qual;
	_T1C = _check_times(_T34,sizeof(void *));
	{ void * * _T35 = _aqual_malloc(_T1B,_T1C);
	  { unsigned int _T36 = _T34;
	    unsigned int i;
	    i = 0;
	    _TL33: if (i < _T36) { goto _TL31;
	    }else { goto _TL32;
	    }
	    _TL31: _T1D = i;
	    _T35[_T1D] = init;
	    i = i + 1;
	    goto _TL33;
	    _TL32: ;
	  }_T1A = (void * *)_T35;
	}_T18 = _tag_fat(_T1A,sizeof(void *),_T34);
      }_T17->elmts = _T18;
      _T1E = ans;
      _T1E->num_elmts = 0;
      { int i = 0;
	_TL37: _T1F = i;
	_T20 = xarr1;
	_T21 = _T20->num_elmts;
	if (_T1F < _T21) { goto _TL35;
	}else { goto _TL36;
	}
	_TL35: _T22 = ans;
	_T23 = xarr1;
	_T24 = _T23->elmts;
	_T25 = i;
	_T26 = _check_fat_subscript(_T24,sizeof(void *),_T25);
	_T27 = (void * *)_T26;
	_T28 = *_T27;
	Cyc_Xarray_add(_T22,_T28);
	i = i + 1;
	goto _TL37;
	_TL36: ;
      }{ int i = 0;
	_TL3B: _T29 = i;
	_T2A = xarr2;
	_T2B = _T2A->num_elmts;
	if (_T29 < _T2B) { goto _TL39;
	}else { goto _TL3A;
	}
	_TL39: _T2C = ans;
	_T2D = xarr2;
	_T2E = _T2D->elmts;
	_T2F = i;
	_T30 = _check_fat_subscript(_T2E,sizeof(void *),_T2F);
	_T31 = (void * *)_T30;
	_T32 = *_T31;
	Cyc_Xarray_add(_T2C,_T32);
	i = i + 1;
	goto _TL3B;
	_TL3A: ;
      }_T33 = ans;
      return _T33;
    }
  }
}
struct Cyc_Xarray_Xarray * Cyc_Xarray_append(struct Cyc_Xarray_Xarray * xarr1,
					     struct Cyc_Xarray_Xarray * xarr2) {
  struct Cyc_Xarray_Xarray * _T0;
  _T0 = Cyc_Xarray_rappend(Cyc_Core_heap_region,xarr1,xarr2);
  return _T0;
}
void Cyc_Xarray_app(void * (* f)(void *),struct Cyc_Xarray_Xarray * xarr) {
  int _T0;
  struct Cyc_Xarray_Xarray * _T1;
  int _T2;
  struct Cyc_Xarray_Xarray * _T3;
  struct _fat_ptr _T4;
  int _T5;
  unsigned char * _T6;
  void * * _T7;
  void * _T8;
  int i = 0;
  _TL3F: _T0 = i;
  _T1 = xarr;
  _T2 = _T1->num_elmts;
  if (_T0 < _T2) { goto _TL3D;
  }else { goto _TL3E;
  }
  _TL3D: _T3 = xarr;
  _T4 = _T3->elmts;
  _T5 = i;
  _T6 = _check_fat_subscript(_T4,sizeof(void *),_T5);
  _T7 = (void * *)_T6;
  _T8 = *_T7;
  f(_T8);
  i = i + 1;
  goto _TL3F;
  _TL3E: ;
}
void Cyc_Xarray_app_c(void * (* f)(void *,void *),void * env,struct Cyc_Xarray_Xarray * xarr) {
  int _T0;
  struct Cyc_Xarray_Xarray * _T1;
  int _T2;
  void * _T3;
  struct Cyc_Xarray_Xarray * _T4;
  struct _fat_ptr _T5;
  int _T6;
  unsigned char * _T7;
  void * * _T8;
  void * _T9;
  int i = 0;
  _TL43: _T0 = i;
  _T1 = xarr;
  _T2 = _T1->num_elmts;
  if (_T0 < _T2) { goto _TL41;
  }else { goto _TL42;
  }
  _TL41: _T3 = env;
  _T4 = xarr;
  _T5 = _T4->elmts;
  _T6 = i;
  _T7 = _check_fat_subscript(_T5,sizeof(void *),_T6);
  _T8 = (void * *)_T7;
  _T9 = *_T8;
  f(_T3,_T9);
  i = i + 1;
  goto _TL43;
  _TL42: ;
}
void Cyc_Xarray_iter(void (* f)(void *),struct Cyc_Xarray_Xarray * xarr) {
  int _T0;
  struct Cyc_Xarray_Xarray * _T1;
  int _T2;
  struct Cyc_Xarray_Xarray * _T3;
  struct _fat_ptr _T4;
  int _T5;
  unsigned char * _T6;
  void * * _T7;
  void * _T8;
  int i = 0;
  _TL47: _T0 = i;
  _T1 = xarr;
  _T2 = _T1->num_elmts;
  if (_T0 < _T2) { goto _TL45;
  }else { goto _TL46;
  }
  _TL45: _T3 = xarr;
  _T4 = _T3->elmts;
  _T5 = i;
  _T6 = _check_fat_subscript(_T4,sizeof(void *),_T5);
  _T7 = (void * *)_T6;
  _T8 = *_T7;
  f(_T8);
  i = i + 1;
  goto _TL47;
  _TL46: ;
}
void Cyc_Xarray_iter_c(void (* f)(void *,void *),void * env,struct Cyc_Xarray_Xarray * xarr) {
  int _T0;
  struct Cyc_Xarray_Xarray * _T1;
  int _T2;
  void * _T3;
  struct Cyc_Xarray_Xarray * _T4;
  struct _fat_ptr _T5;
  int _T6;
  unsigned char * _T7;
  void * * _T8;
  void * _T9;
  int i = 0;
  _TL4B: _T0 = i;
  _T1 = xarr;
  _T2 = _T1->num_elmts;
  if (_T0 < _T2) { goto _TL49;
  }else { goto _TL4A;
  }
  _TL49: _T3 = env;
  _T4 = xarr;
  _T5 = _T4->elmts;
  _T6 = i;
  _T7 = _check_fat_subscript(_T5,sizeof(void *),_T6);
  _T8 = (void * *)_T7;
  _T9 = *_T8;
  f(_T3,_T9);
  i = i + 1;
  goto _TL4B;
  _TL4A: ;
}
struct Cyc_Xarray_Xarray * Cyc_Xarray_rmap(struct _RegionHandle * r,void * (* f)(void *),
					   struct Cyc_Xarray_Xarray * xarr) {
  struct Cyc_Xarray_Xarray * _T0;
  int _T1;
  struct Cyc_Xarray_Xarray * _T2;
  struct _RegionHandle * _T3;
  struct Cyc_Xarray_Xarray * _T4;
  struct _fat_ptr _T5;
  struct Cyc_Xarray_Xarray * _T6;
  struct _fat_ptr _T7;
  void * * _T8;
  unsigned int _T9;
  unsigned int _TA;
  unsigned int _TB;
  struct Cyc_Xarray_Xarray * _TC;
  struct _fat_ptr _TD;
  unsigned char * _TE;
  void * * _TF;
  void * * _T10;
  void * _T11;
  struct Cyc_Xarray_Xarray * _T12;
  struct Cyc_Xarray_Xarray * _T13;
  int _T14;
  struct Cyc_Xarray_Xarray * _T15;
  int _T16;
  struct Cyc_Xarray_Xarray * _T17;
  struct _fat_ptr _T18;
  int _T19;
  unsigned char * _T1A;
  void * * _T1B;
  struct Cyc_Xarray_Xarray * _T1C;
  struct _fat_ptr _T1D;
  int _T1E;
  unsigned char * _T1F;
  void * * _T20;
  void * _T21;
  struct Cyc_Xarray_Xarray * _T22;
  _T0 = xarr;
  _T1 = _T0->num_elmts;
  if (_T1 != 0) { goto _TL4C;
  }
  _T2 = Cyc_Xarray_rcreate_empty(r);
  return _T2;
  _TL4C: { struct Cyc_Xarray_Xarray * ans;
    _T3 = r;
    ans = _region_malloc(_T3,0U,sizeof(struct Cyc_Xarray_Xarray));
    _T4 = ans;
    _T6 = xarr;
    _T7 = _T6->elmts;
    { unsigned int _T23 = _get_fat_size(_T7,sizeof(void *));
      _T9 = Cyc_Core_unique_qual;
      _TA = _check_times(_T23,sizeof(void *));
      { void * * _T24 = _aqual_malloc(_T9,_TA);
	{ unsigned int _T25 = _T23;
	  unsigned int i;
	  i = 0;
	  _TL51: if (i < _T25) { goto _TL4F;
	  }else { goto _TL50;
	  }
	  _TL4F: _TB = i;
	  _TC = xarr;
	  _TD = _TC->elmts;
	  _TE = _TD.curr;
	  _TF = (void * *)_TE;
	  _T10 = _check_null(_TF);
	  _T11 = _T10[0];
	  _T24[_TB] = f(_T11);
	  i = i + 1;
	  goto _TL51;
	  _TL50: ;
	}_T8 = (void * *)_T24;
      }_T5 = _tag_fat(_T8,sizeof(void *),_T23);
    }_T4->elmts = _T5;
    _T12 = ans;
    _T13 = xarr;
    _T12->num_elmts = _T13->num_elmts;
    { int i = 1;
      _TL55: _T14 = i;
      _T15 = xarr;
      _T16 = _T15->num_elmts;
      if (_T14 < _T16) { goto _TL53;
      }else { goto _TL54;
      }
      _TL53: _T17 = ans;
      _T18 = _T17->elmts;
      _T19 = i;
      _T1A = _check_fat_subscript(_T18,sizeof(void *),_T19);
      _T1B = (void * *)_T1A;
      _T1C = xarr;
      _T1D = _T1C->elmts;
      _T1E = i;
      _T1F = _check_fat_subscript(_T1D,sizeof(void *),_T1E);
      _T20 = (void * *)_T1F;
      _T21 = *_T20;
      *_T1B = f(_T21);
      i = i + 1;
      goto _TL55;
      _TL54: ;
    }_T22 = ans;
    return _T22;
  }
}
struct Cyc_Xarray_Xarray * Cyc_Xarray_map(void * (* f)(void *),struct Cyc_Xarray_Xarray * xarr) {
  struct _RegionHandle * _T0;
  void * (* _T1)(void *);
  struct Cyc_Xarray_Xarray * _T2;
  struct Cyc_Xarray_Xarray * _T3;
  _T0 = Cyc_Core_heap_region;
  _T1 = f;
  _T2 = xarr;
  _T3 = Cyc_Xarray_rmap(_T0,_T1,_T2);
  return _T3;
}
struct Cyc_Xarray_Xarray * Cyc_Xarray_rmap_c(struct _RegionHandle * r,void * (* f)(void *,
										   void *),
					     void * env,struct Cyc_Xarray_Xarray * xarr) {
  struct Cyc_Xarray_Xarray * _T0;
  int _T1;
  struct Cyc_Xarray_Xarray * _T2;
  struct _RegionHandle * _T3;
  struct Cyc_Xarray_Xarray * _T4;
  struct _fat_ptr _T5;
  struct Cyc_Xarray_Xarray * _T6;
  struct _fat_ptr _T7;
  void * * _T8;
  unsigned int _T9;
  unsigned int _TA;
  unsigned int _TB;
  void * _TC;
  struct Cyc_Xarray_Xarray * _TD;
  struct _fat_ptr _TE;
  unsigned char * _TF;
  void * * _T10;
  void * * _T11;
  void * _T12;
  struct Cyc_Xarray_Xarray * _T13;
  struct Cyc_Xarray_Xarray * _T14;
  int _T15;
  struct Cyc_Xarray_Xarray * _T16;
  int _T17;
  struct Cyc_Xarray_Xarray * _T18;
  struct _fat_ptr _T19;
  int _T1A;
  unsigned char * _T1B;
  void * * _T1C;
  void * _T1D;
  struct Cyc_Xarray_Xarray * _T1E;
  struct _fat_ptr _T1F;
  int _T20;
  unsigned char * _T21;
  void * * _T22;
  void * _T23;
  struct Cyc_Xarray_Xarray * _T24;
  _T0 = xarr;
  _T1 = _T0->num_elmts;
  if (_T1 != 0) { goto _TL56;
  }
  _T2 = Cyc_Xarray_rcreate_empty(r);
  return _T2;
  _TL56: { struct Cyc_Xarray_Xarray * ans;
    _T3 = r;
    ans = _region_malloc(_T3,0U,sizeof(struct Cyc_Xarray_Xarray));
    _T4 = ans;
    _T6 = xarr;
    _T7 = _T6->elmts;
    { unsigned int _T25 = _get_fat_size(_T7,sizeof(void *));
      _T9 = Cyc_Core_unique_qual;
      _TA = _check_times(_T25,sizeof(void *));
      { void * * _T26 = _aqual_malloc(_T9,_TA);
	{ unsigned int _T27 = _T25;
	  unsigned int i;
	  i = 0;
	  _TL5B: if (i < _T27) { goto _TL59;
	  }else { goto _TL5A;
	  }
	  _TL59: _TB = i;
	  _TC = env;
	  _TD = xarr;
	  _TE = _TD->elmts;
	  _TF = _TE.curr;
	  _T10 = (void * *)_TF;
	  _T11 = _check_null(_T10);
	  _T12 = _T11[0];
	  _T26[_TB] = f(_TC,_T12);
	  i = i + 1;
	  goto _TL5B;
	  _TL5A: ;
	}_T8 = (void * *)_T26;
      }_T5 = _tag_fat(_T8,sizeof(void *),_T25);
    }_T4->elmts = _T5;
    _T13 = ans;
    _T14 = xarr;
    _T13->num_elmts = _T14->num_elmts;
    { int i = 1;
      _TL5F: _T15 = i;
      _T16 = xarr;
      _T17 = _T16->num_elmts;
      if (_T15 < _T17) { goto _TL5D;
      }else { goto _TL5E;
      }
      _TL5D: _T18 = ans;
      _T19 = _T18->elmts;
      _T1A = i;
      _T1B = _check_fat_subscript(_T19,sizeof(void *),_T1A);
      _T1C = (void * *)_T1B;
      _T1D = env;
      _T1E = xarr;
      _T1F = _T1E->elmts;
      _T20 = i;
      _T21 = _check_fat_subscript(_T1F,sizeof(void *),_T20);
      _T22 = (void * *)_T21;
      _T23 = *_T22;
      *_T1C = f(_T1D,_T23);
      i = i + 1;
      goto _TL5F;
      _TL5E: ;
    }_T24 = ans;
    return _T24;
  }
}
struct Cyc_Xarray_Xarray * Cyc_Xarray_map_c(void * (* f)(void *,void *),void * env,
					    struct Cyc_Xarray_Xarray * xarr) {
  struct _RegionHandle * _T0;
  void * (* _T1)(void *,void *);
  void * _T2;
  struct Cyc_Xarray_Xarray * _T3;
  struct Cyc_Xarray_Xarray * _T4;
  _T0 = Cyc_Core_heap_region;
  _T1 = f;
  _T2 = env;
  _T3 = xarr;
  _T4 = Cyc_Xarray_rmap_c(_T0,_T1,_T2,_T3);
  return _T4;
}
void Cyc_Xarray_reuse(struct Cyc_Xarray_Xarray * xarr) {
  struct Cyc_Xarray_Xarray * _T0;
  struct Cyc_Xarray_Xarray * _T1;
  struct Cyc_Xarray_Xarray * _T2;
  void (* _T3)(void * *);
  void (* _T4)(void *);
  struct _fat_ptr _T5;
  unsigned char * _T6;
  void * * _T7;
  struct _fat_ptr newarr = _tag_fat(0,0,0);
  { struct _fat_ptr _T8 = newarr;
    _T0 = xarr;
    { struct _fat_ptr _T9 = _T0->elmts;
      newarr = _T9;
      _T1 = xarr;
      _T1->elmts = _T8;
    }
  }_T2 = xarr;
  _T2->num_elmts = 0;
  _T4 = Cyc_Core_ufree;
  { void (* _T8)(void * *) = (void (*)(void * *))_T4;
    _T3 = _T8;
  }_T5 = newarr;
  _T6 = _untag_fat_ptr_check_bound(_T5,sizeof(void *),1U);
  _T7 = (void * *)_T6;
  _T3(_T7);
}
void Cyc_Xarray_delete(struct Cyc_Xarray_Xarray * xarr,int num) {
  int _T0;
  int _T1;
  struct Cyc_Core_Invalid_argument_exn_struct * _T2;
  void * _T3;
  struct Cyc_Xarray_Xarray * _T4;
  int _T5;
  _T0 = num;
  _T1 = Cyc_Xarray_length(xarr);
  if (_T0 <= _T1) { goto _TL60;
  }
  { struct Cyc_Core_Invalid_argument_exn_struct * _T6 = _cycalloc(sizeof(struct Cyc_Core_Invalid_argument_exn_struct));
    _T6->tag = Cyc_Core_Invalid_argument;
    _T6->f1 = _tag_fat("number deleted is greater than length of xarray",
		       sizeof(char),48U);
    _T2 = (struct Cyc_Core_Invalid_argument_exn_struct *)_T6;
  }_T3 = (void *)_T2;
  _throw(_T3);
  goto _TL61;
  _TL60: _TL61: _T4 = xarr;
  _T5 = num;
  _T4->num_elmts = _T4->num_elmts - _T5;
}
void Cyc_Xarray_remove(struct Cyc_Xarray_Xarray * xarr,int i) {
  int _T0;
  struct Cyc_Xarray_Xarray * _T1;
  int _T2;
  int _T3;
  struct Cyc_Core_Invalid_argument_exn_struct * _T4;
  void * _T5;
  int _T6;
  struct Cyc_Xarray_Xarray * _T7;
  int _T8;
  int _T9;
  struct Cyc_Xarray_Xarray * _TA;
  struct _fat_ptr _TB;
  int _TC;
  unsigned char * _TD;
  void * * _TE;
  struct Cyc_Xarray_Xarray * _TF;
  struct _fat_ptr _T10;
  int _T11;
  unsigned char * _T12;
  void * * _T13;
  struct Cyc_Xarray_Xarray * _T14;
  if (i < 0) { goto _TL64;
  }else { goto _TL65;
  }
  _TL65: _T0 = i;
  _T1 = xarr;
  _T2 = _T1->num_elmts;
  _T3 = _T2 - 1;
  if (_T0 > _T3) { goto _TL64;
  }else { goto _TL62;
  }
  _TL64: { struct Cyc_Core_Invalid_argument_exn_struct * _T15 = _cycalloc(sizeof(struct Cyc_Core_Invalid_argument_exn_struct));
    _T15->tag = Cyc_Core_Invalid_argument;
    _T15->f1 = _tag_fat("xarray index out of bounds",sizeof(char),27U);
    _T4 = (struct Cyc_Core_Invalid_argument_exn_struct *)_T15;
  }_T5 = (void *)_T4;
  _throw(_T5);
  goto _TL63;
  _TL62: _TL63: { int j = i;
    _TL69: _T6 = j;
    _T7 = xarr;
    _T8 = _T7->num_elmts;
    _T9 = _T8 - 1;
    if (_T6 < _T9) { goto _TL67;
    }else { goto _TL68;
    }
    _TL67: _TA = xarr;
    _TB = _TA->elmts;
    _TC = j;
    _TD = _check_fat_subscript(_TB,sizeof(void *),_TC);
    _TE = (void * *)_TD;
    _TF = xarr;
    _T10 = _TF->elmts;
    _T11 = j + 1;
    _T12 = _check_fat_subscript(_T10,sizeof(void *),_T11);
    _T13 = (void * *)_T12;
    *_TE = *_T13;
    j = j + 1;
    goto _TL69;
    _TL68: ;
  }_T14 = xarr;
  _T14->num_elmts = _T14->num_elmts + -1;
}
