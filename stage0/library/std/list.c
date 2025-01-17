#include <cyc_include.h>
 struct Cyc_Core_Opt {
  void * v;
};
 struct Cyc_Core_Not_found_exn_struct {
  char * tag;
};
extern struct Cyc_Core_Not_found_exn_struct Cyc_Core_Not_found_val;
extern struct _RegionHandle * Cyc_Core_heap_region;
 struct Cyc_List_List {
  void * hd;
  struct Cyc_List_List * tl;
};
extern char Cyc_List_List_mismatch[14U];
 struct Cyc_List_List_mismatch_exn_struct {
  char * tag;
};
extern char Cyc_List_Nth[4U];
 struct Cyc_List_Nth_exn_struct {
  char * tag;
};
extern struct Cyc_List_List * Cyc_List_nth_tail(struct Cyc_List_List *,int);
 struct _tuple0 {
  struct Cyc_List_List * f0;
  struct Cyc_List_List * f1;
};
 struct _tuple1 {
  struct Cyc_List_List * f0;
  struct Cyc_List_List * f1;
  struct Cyc_List_List * f2;
};
extern struct Cyc_List_List * Cyc_List_from_array(struct _fat_ptr);
struct Cyc_List_List * Cyc_List_rfrom_array(struct _RegionHandle *,struct _fat_ptr);
int Cyc_List_length(struct Cyc_List_List * x) {
  struct Cyc_List_List * _T0;
  int _T1;
  int i = 0;
  _TL3: if (x != 0) { goto _TL1;
  }else { goto _TL2;
  }
  _TL1: i = i + 1;
  _T0 = x;
  x = _T0->tl;
  goto _TL3;
  _TL2: _T1 = i;
  return _T1;
}
void * Cyc_List_hd(struct Cyc_List_List * x) {
  struct Cyc_List_List * _T0;
  void * _T1;
  _T0 = x;
  _T1 = _T0->hd;
  return _T1;
}
struct Cyc_List_List * Cyc_List_tl(struct Cyc_List_List * x) {
  struct Cyc_List_List * _T0;
  struct Cyc_List_List * _T1;
  _T0 = x;
  _T1 = _T0->tl;
  return _T1;
}
struct Cyc_List_List * Cyc_List_rlist(struct _RegionHandle * r,struct _fat_ptr argv) {
  struct Cyc_List_List * _T0;
  _T0 = Cyc_List_rfrom_array(r,argv);
  return _T0;
}
struct Cyc_List_List * Cyc_List_list(struct _fat_ptr argv) {
  struct Cyc_List_List * _T0;
  _T0 = Cyc_List_from_array(argv);
  return _T0;
}
struct Cyc_List_List * Cyc_List_rcopy(struct _RegionHandle * r,struct Cyc_List_List * x) {
  struct Cyc_List_List * _T0;
  struct _RegionHandle * _T1;
  struct Cyc_List_List * _T2;
  struct Cyc_List_List * _T3;
  struct _RegionHandle * _T4;
  struct Cyc_List_List * _T5;
  struct Cyc_List_List * _T6;
  struct Cyc_List_List * _T7;
  struct Cyc_List_List * _T8;
  struct Cyc_List_List * _T9;
  struct Cyc_List_List * _TA;
  struct Cyc_List_List * result;
  struct Cyc_List_List * prev;
  if (x != 0) { goto _TL4;
  }
  return 0;
  _TL4: _T1 = r;
  { struct Cyc_List_List * _TB = _region_malloc(_T1,0U,sizeof(struct Cyc_List_List));
    _T2 = x;
    _TB->hd = _T2->hd;
    _TB->tl = 0;
    _T0 = (struct Cyc_List_List *)_TB;
  }result = _T0;
  prev = result;
  _T3 = x;
  x = _T3->tl;
  _TL9: if (x != 0) { goto _TL7;
  }else { goto _TL8;
  }
  _TL7: { struct Cyc_List_List * temp;
    _T4 = r;
    temp = _region_malloc(_T4,0U,sizeof(struct Cyc_List_List));
    _T5 = temp;
    _T6 = x;
    _T5->hd = _T6->hd;
    _T7 = temp;
    _T7->tl = 0;
    _T8 = prev;
    _T8->tl = temp;
    prev = temp;
  }_T9 = x;
  x = _T9->tl;
  goto _TL9;
  _TL8: _TA = result;
  return _TA;
}
struct Cyc_List_List * Cyc_List_copy(struct Cyc_List_List * x) {
  struct Cyc_List_List * _T0;
  _T0 = Cyc_List_rcopy(Cyc_Core_heap_region,x);
  return _T0;
}
struct Cyc_List_List * Cyc_List_rmap(struct _RegionHandle * r,void * (* f)(void *),
				     struct Cyc_List_List * x) {
  struct Cyc_List_List * _T0;
  struct _RegionHandle * _T1;
  struct Cyc_List_List * _T2;
  void * _T3;
  struct Cyc_List_List * _T4;
  struct _RegionHandle * _T5;
  struct Cyc_List_List * _T6;
  struct Cyc_List_List * _T7;
  void * _T8;
  struct Cyc_List_List * _T9;
  struct Cyc_List_List * _TA;
  struct Cyc_List_List * _TB;
  struct Cyc_List_List * _TC;
  struct Cyc_List_List * result;
  struct Cyc_List_List * prev;
  if (x != 0) { goto _TLA;
  }
  return 0;
  _TLA: _T1 = r;
  { struct Cyc_List_List * _TD = _region_malloc(_T1,0U,sizeof(struct Cyc_List_List));
    _T2 = x;
    _T3 = _T2->hd;
    _TD->hd = f(_T3);
    _TD->tl = 0;
    _T0 = (struct Cyc_List_List *)_TD;
  }result = _T0;
  prev = result;
  _T4 = x;
  x = _T4->tl;
  _TLF: if (x != 0) { goto _TLD;
  }else { goto _TLE;
  }
  _TLD: { struct Cyc_List_List * temp;
    _T5 = r;
    temp = _region_malloc(_T5,0U,sizeof(struct Cyc_List_List));
    _T6 = temp;
    _T7 = x;
    _T8 = _T7->hd;
    _T6->hd = f(_T8);
    _T9 = temp;
    _T9->tl = 0;
    _TA = prev;
    _TA->tl = temp;
    prev = temp;
  }_TB = x;
  x = _TB->tl;
  goto _TLF;
  _TLE: _TC = result;
  return _TC;
}
struct Cyc_List_List * Cyc_List_map(void * (* f)(void *),struct Cyc_List_List * x) {
  struct _RegionHandle * _T0;
  void * (* _T1)(void *);
  struct Cyc_List_List * _T2;
  struct Cyc_List_List * _T3;
  _T0 = Cyc_Core_heap_region;
  _T1 = f;
  _T2 = x;
  _T3 = Cyc_List_rmap(_T0,_T1,_T2);
  return _T3;
}
struct Cyc_List_List * Cyc_List_rmap_c(struct _RegionHandle * r,void * (* f)(void *,
									     void *),
				       void * env,struct Cyc_List_List * x) {
  struct Cyc_List_List * _T0;
  struct _RegionHandle * _T1;
  void * _T2;
  struct Cyc_List_List * _T3;
  void * _T4;
  struct Cyc_List_List * _T5;
  struct _RegionHandle * _T6;
  struct Cyc_List_List * _T7;
  void * _T8;
  struct Cyc_List_List * _T9;
  void * _TA;
  struct Cyc_List_List * _TB;
  struct Cyc_List_List * _TC;
  struct Cyc_List_List * _TD;
  struct Cyc_List_List * _TE;
  struct Cyc_List_List * result;
  struct Cyc_List_List * prev;
  if (x != 0) { goto _TL10;
  }
  return 0;
  _TL10: _T1 = r;
  { struct Cyc_List_List * _TF = _region_malloc(_T1,0U,sizeof(struct Cyc_List_List));
    _T2 = env;
    _T3 = x;
    _T4 = _T3->hd;
    _TF->hd = f(_T2,_T4);
    _TF->tl = 0;
    _T0 = (struct Cyc_List_List *)_TF;
  }result = _T0;
  prev = result;
  _T5 = x;
  x = _T5->tl;
  _TL15: if (x != 0) { goto _TL13;
  }else { goto _TL14;
  }
  _TL13: { struct Cyc_List_List * e;
    _T6 = r;
    e = _region_malloc(_T6,0U,sizeof(struct Cyc_List_List));
    _T7 = e;
    _T8 = env;
    _T9 = x;
    _TA = _T9->hd;
    _T7->hd = f(_T8,_TA);
    _TB = e;
    _TB->tl = 0;
    _TC = prev;
    _TC->tl = e;
    prev = e;
  }_TD = x;
  x = _TD->tl;
  goto _TL15;
  _TL14: _TE = result;
  return _TE;
}
struct Cyc_List_List * Cyc_List_map_c(void * (* f)(void *,void *),void * env,
				      struct Cyc_List_List * x) {
  struct _RegionHandle * _T0;
  void * (* _T1)(void *,void *);
  void * _T2;
  struct Cyc_List_List * _T3;
  struct Cyc_List_List * _T4;
  _T0 = Cyc_Core_heap_region;
  _T1 = f;
  _T2 = env;
  _T3 = x;
  _T4 = Cyc_List_rmap_c(_T0,_T1,_T2,_T3);
  return _T4;
}
char Cyc_List_List_mismatch[14U] = "List_mismatch";
struct Cyc_List_List_mismatch_exn_struct Cyc_List_List_mismatch_val = {Cyc_List_List_mismatch};
struct Cyc_List_List * Cyc_List_rmap2(struct _RegionHandle * r,void * (* f)(void *,
									    void *),
				      struct Cyc_List_List * x,struct Cyc_List_List * y) {
  struct Cyc_List_List_mismatch_exn_struct * _T0;
  struct Cyc_List_List_mismatch_exn_struct * _T1;
  struct Cyc_List_List * _T2;
  struct _RegionHandle * _T3;
  struct Cyc_List_List * _T4;
  void * _T5;
  struct Cyc_List_List * _T6;
  void * _T7;
  struct Cyc_List_List * _T8;
  struct Cyc_List_List * _T9;
  struct _RegionHandle * _TA;
  struct Cyc_List_List * _TB;
  struct Cyc_List_List * _TC;
  void * _TD;
  struct Cyc_List_List * _TE;
  void * _TF;
  struct Cyc_List_List * _T10;
  struct Cyc_List_List * _T11;
  struct Cyc_List_List * _T12;
  struct Cyc_List_List * _T13;
  struct Cyc_List_List_mismatch_exn_struct * _T14;
  struct Cyc_List_List_mismatch_exn_struct * _T15;
  struct Cyc_List_List * _T16;
  struct Cyc_List_List * result;
  struct Cyc_List_List * prev;
  if (x != 0) { goto _TL16;
  }
  if (y != 0) { goto _TL16;
  }
  return 0;
  _TL16: if (x == 0) { goto _TL1A;
  }else { goto _TL1B;
  }
  _TL1B: if (y == 0) { goto _TL1A;
  }else { goto _TL18;
  }
  _TL1A: _T0 = &Cyc_List_List_mismatch_val;
  _T1 = (struct Cyc_List_List_mismatch_exn_struct *)_T0;
  _throw(_T1);
  goto _TL19;
  _TL18: _TL19: _T3 = r;
  { struct Cyc_List_List * _T17 = _region_malloc(_T3,0U,sizeof(struct Cyc_List_List));
    _T4 = x;
    _T5 = _T4->hd;
    _T6 = y;
    _T7 = _T6->hd;
    _T17->hd = f(_T5,_T7);
    _T17->tl = 0;
    _T2 = (struct Cyc_List_List *)_T17;
  }result = _T2;
  prev = result;
  _T8 = x;
  x = _T8->tl;
  _T9 = y;
  y = _T9->tl;
  _TL1C: if (x != 0) { goto _TL1F;
  }else { goto _TL1E;
  }
  _TL1F: if (y != 0) { goto _TL1D;
  }else { goto _TL1E;
  }
  _TL1D: { struct Cyc_List_List * temp;
    _TA = r;
    temp = _region_malloc(_TA,0U,sizeof(struct Cyc_List_List));
    _TB = temp;
    _TC = x;
    _TD = _TC->hd;
    _TE = y;
    _TF = _TE->hd;
    _TB->hd = f(_TD,_TF);
    _T10 = temp;
    _T10->tl = 0;
    _T11 = prev;
    _T11->tl = temp;
    prev = temp;
    _T12 = x;
    x = _T12->tl;
    _T13 = y;
    y = _T13->tl;
  }goto _TL1C;
  _TL1E: if (x != 0) { goto _TL22;
  }else { goto _TL23;
  }
  _TL23: if (y != 0) { goto _TL22;
  }else { goto _TL20;
  }
  _TL22: _T14 = &Cyc_List_List_mismatch_val;
  _T15 = (struct Cyc_List_List_mismatch_exn_struct *)_T14;
  _throw(_T15);
  goto _TL21;
  _TL20: _TL21: _T16 = result;
  return _T16;
}
struct Cyc_List_List * Cyc_List_map2(void * (* f)(void *,void *),struct Cyc_List_List * x,
				     struct Cyc_List_List * y) {
  struct _RegionHandle * _T0;
  void * (* _T1)(void *,void *);
  struct Cyc_List_List * _T2;
  struct Cyc_List_List * _T3;
  struct Cyc_List_List * _T4;
  _T0 = Cyc_Core_heap_region;
  _T1 = f;
  _T2 = x;
  _T3 = y;
  _T4 = Cyc_List_rmap2(_T0,_T1,_T2,_T3);
  return _T4;
}
struct Cyc_List_List * Cyc_List_rmap3(struct _RegionHandle * r,void * (* f)(void *,
									    void *,
									    void *),
				      struct Cyc_List_List * x,struct Cyc_List_List * y,
				      struct Cyc_List_List * z) {
  struct Cyc_List_List_mismatch_exn_struct * _T0;
  struct Cyc_List_List_mismatch_exn_struct * _T1;
  struct Cyc_List_List * _T2;
  struct _RegionHandle * _T3;
  struct Cyc_List_List * _T4;
  void * _T5;
  struct Cyc_List_List * _T6;
  void * _T7;
  struct Cyc_List_List * _T8;
  void * _T9;
  struct Cyc_List_List * _TA;
  struct Cyc_List_List * _TB;
  struct Cyc_List_List * _TC;
  struct _RegionHandle * _TD;
  struct Cyc_List_List * _TE;
  struct Cyc_List_List * _TF;
  void * _T10;
  struct Cyc_List_List * _T11;
  void * _T12;
  struct Cyc_List_List * _T13;
  void * _T14;
  struct Cyc_List_List * _T15;
  struct Cyc_List_List * _T16;
  struct Cyc_List_List * _T17;
  struct Cyc_List_List * _T18;
  struct Cyc_List_List * _T19;
  struct Cyc_List_List_mismatch_exn_struct * _T1A;
  struct Cyc_List_List_mismatch_exn_struct * _T1B;
  struct Cyc_List_List * _T1C;
  struct Cyc_List_List * result;
  struct Cyc_List_List * prev;
  if (x != 0) { goto _TL24;
  }
  if (y != 0) { goto _TL24;
  }
  if (z != 0) { goto _TL24;
  }
  return 0;
  _TL24: if (x == 0) { goto _TL28;
  }else { goto _TL2A;
  }
  _TL2A: if (y == 0) { goto _TL28;
  }else { goto _TL29;
  }
  _TL29: if (z == 0) { goto _TL28;
  }else { goto _TL26;
  }
  _TL28: _T0 = &Cyc_List_List_mismatch_val;
  _T1 = (struct Cyc_List_List_mismatch_exn_struct *)_T0;
  _throw(_T1);
  goto _TL27;
  _TL26: _TL27: _T3 = r;
  { struct Cyc_List_List * _T1D = _region_malloc(_T3,0U,sizeof(struct Cyc_List_List));
    _T4 = x;
    _T5 = _T4->hd;
    _T6 = y;
    _T7 = _T6->hd;
    _T8 = z;
    _T9 = _T8->hd;
    _T1D->hd = f(_T5,_T7,_T9);
    _T1D->tl = 0;
    _T2 = (struct Cyc_List_List *)_T1D;
  }result = _T2;
  prev = result;
  _TA = x;
  x = _TA->tl;
  _TB = y;
  y = _TB->tl;
  _TC = z;
  z = _TC->tl;
  _TL2B: if (x != 0) { goto _TL2F;
  }else { goto _TL2D;
  }
  _TL2F: if (y != 0) { goto _TL2E;
  }else { goto _TL2D;
  }
  _TL2E: if (z != 0) { goto _TL2C;
  }else { goto _TL2D;
  }
  _TL2C: { struct Cyc_List_List * temp;
    _TD = r;
    temp = _region_malloc(_TD,0U,sizeof(struct Cyc_List_List));
    _TE = temp;
    _TF = x;
    _T10 = _TF->hd;
    _T11 = y;
    _T12 = _T11->hd;
    _T13 = z;
    _T14 = _T13->hd;
    _TE->hd = f(_T10,_T12,_T14);
    _T15 = temp;
    _T15->tl = 0;
    _T16 = prev;
    _T16->tl = temp;
    prev = temp;
    _T17 = x;
    x = _T17->tl;
    _T18 = y;
    y = _T18->tl;
    _T19 = z;
    z = _T19->tl;
  }goto _TL2B;
  _TL2D: if (x != 0) { goto _TL32;
  }else { goto _TL34;
  }
  _TL34: if (y != 0) { goto _TL32;
  }else { goto _TL33;
  }
  _TL33: if (z != 0) { goto _TL32;
  }else { goto _TL30;
  }
  _TL32: _T1A = &Cyc_List_List_mismatch_val;
  _T1B = (struct Cyc_List_List_mismatch_exn_struct *)_T1A;
  _throw(_T1B);
  goto _TL31;
  _TL30: _TL31: _T1C = result;
  return _T1C;
}
struct Cyc_List_List * Cyc_List_map3(void * (* f)(void *,void *,void *),struct Cyc_List_List * x,
				     struct Cyc_List_List * y,struct Cyc_List_List * z) {
  struct _RegionHandle * _T0;
  void * (* _T1)(void *,void *,void *);
  struct Cyc_List_List * _T2;
  struct Cyc_List_List * _T3;
  struct Cyc_List_List * _T4;
  struct Cyc_List_List * _T5;
  _T0 = Cyc_Core_heap_region;
  _T1 = f;
  _T2 = x;
  _T3 = y;
  _T4 = z;
  _T5 = Cyc_List_rmap3(_T0,_T1,_T2,_T3,_T4);
  return _T5;
}
void Cyc_List_app(void * (* f)(void *),struct Cyc_List_List * x) {
  struct Cyc_List_List * _T0;
  void * _T1;
  struct Cyc_List_List * _T2;
  _TL38: if (x != 0) { goto _TL36;
  }else { goto _TL37;
  }
  _TL36: _T0 = x;
  _T1 = _T0->hd;
  f(_T1);
  _T2 = x;
  x = _T2->tl;
  goto _TL38;
  _TL37: ;
}
void Cyc_List_app_c(void * (* f)(void *,void *),void * env,struct Cyc_List_List * x) {
  void * _T0;
  struct Cyc_List_List * _T1;
  void * _T2;
  struct Cyc_List_List * _T3;
  _TL3C: if (x != 0) { goto _TL3A;
  }else { goto _TL3B;
  }
  _TL3A: _T0 = env;
  _T1 = x;
  _T2 = _T1->hd;
  f(_T0,_T2);
  _T3 = x;
  x = _T3->tl;
  goto _TL3C;
  _TL3B: ;
}
void Cyc_List_iter(void (* f)(void *),struct Cyc_List_List * x) {
  struct Cyc_List_List * _T0;
  void * _T1;
  struct Cyc_List_List * _T2;
  _TL40: if (x != 0) { goto _TL3E;
  }else { goto _TL3F;
  }
  _TL3E: _T0 = x;
  _T1 = _T0->hd;
  f(_T1);
  _T2 = x;
  x = _T2->tl;
  goto _TL40;
  _TL3F: ;
}
void Cyc_List_iter_c(void (* f)(void *,void *),void * env,struct Cyc_List_List * x) {
  void * _T0;
  struct Cyc_List_List * _T1;
  void * _T2;
  struct Cyc_List_List * _T3;
  _TL44: if (x != 0) { goto _TL42;
  }else { goto _TL43;
  }
  _TL42: _T0 = env;
  _T1 = x;
  _T2 = _T1->hd;
  f(_T0,_T2);
  _T3 = x;
  x = _T3->tl;
  goto _TL44;
  _TL43: ;
}
void Cyc_List_app2(void * (* f)(void *,void *),struct Cyc_List_List * x,struct Cyc_List_List * y) {
  struct Cyc_List_List * _T0;
  void * _T1;
  struct Cyc_List_List * _T2;
  void * _T3;
  struct Cyc_List_List * _T4;
  struct Cyc_List_List * _T5;
  struct Cyc_List_List_mismatch_exn_struct * _T6;
  struct Cyc_List_List_mismatch_exn_struct * _T7;
  _TL48: if (x != 0) { goto _TL49;
  }else { goto _TL47;
  }
  _TL49: if (y != 0) { goto _TL46;
  }else { goto _TL47;
  }
  _TL46: _T0 = x;
  _T1 = _T0->hd;
  _T2 = y;
  _T3 = _T2->hd;
  f(_T1,_T3);
  _T4 = x;
  x = _T4->tl;
  _T5 = y;
  y = _T5->tl;
  goto _TL48;
  _TL47: if (x != 0) { goto _TL4C;
  }else { goto _TL4D;
  }
  _TL4D: if (y != 0) { goto _TL4C;
  }else { goto _TL4A;
  }
  _TL4C: _T6 = &Cyc_List_List_mismatch_val;
  _T7 = (struct Cyc_List_List_mismatch_exn_struct *)_T6;
  _throw(_T7);
  goto _TL4B;
  _TL4A: _TL4B: ;
}
void Cyc_List_app2_c(void * (* f)(void *,void *,void *),void * env,struct Cyc_List_List * x,
		     struct Cyc_List_List * y) {
  void * _T0;
  struct Cyc_List_List * _T1;
  void * _T2;
  struct Cyc_List_List * _T3;
  void * _T4;
  struct Cyc_List_List * _T5;
  struct Cyc_List_List * _T6;
  struct Cyc_List_List_mismatch_exn_struct * _T7;
  struct Cyc_List_List_mismatch_exn_struct * _T8;
  _TL51: if (x != 0) { goto _TL52;
  }else { goto _TL50;
  }
  _TL52: if (y != 0) { goto _TL4F;
  }else { goto _TL50;
  }
  _TL4F: _T0 = env;
  _T1 = x;
  _T2 = _T1->hd;
  _T3 = y;
  _T4 = _T3->hd;
  f(_T0,_T2,_T4);
  _T5 = x;
  x = _T5->tl;
  _T6 = y;
  y = _T6->tl;
  goto _TL51;
  _TL50: if (x != 0) { goto _TL55;
  }else { goto _TL56;
  }
  _TL56: if (y != 0) { goto _TL55;
  }else { goto _TL53;
  }
  _TL55: _T7 = &Cyc_List_List_mismatch_val;
  _T8 = (struct Cyc_List_List_mismatch_exn_struct *)_T7;
  _throw(_T8);
  goto _TL54;
  _TL53: _TL54: ;
}
void Cyc_List_iter2(void (* f)(void *,void *),struct Cyc_List_List * x,struct Cyc_List_List * y) {
  struct Cyc_List_List * _T0;
  void * _T1;
  struct Cyc_List_List * _T2;
  void * _T3;
  struct Cyc_List_List * _T4;
  struct Cyc_List_List * _T5;
  struct Cyc_List_List_mismatch_exn_struct * _T6;
  struct Cyc_List_List_mismatch_exn_struct * _T7;
  _TL5A: if (x != 0) { goto _TL5B;
  }else { goto _TL59;
  }
  _TL5B: if (y != 0) { goto _TL58;
  }else { goto _TL59;
  }
  _TL58: _T0 = x;
  _T1 = _T0->hd;
  _T2 = y;
  _T3 = _T2->hd;
  f(_T1,_T3);
  _T4 = x;
  x = _T4->tl;
  _T5 = y;
  y = _T5->tl;
  goto _TL5A;
  _TL59: if (x != 0) { goto _TL5E;
  }else { goto _TL5F;
  }
  _TL5F: if (y != 0) { goto _TL5E;
  }else { goto _TL5C;
  }
  _TL5E: _T6 = &Cyc_List_List_mismatch_val;
  _T7 = (struct Cyc_List_List_mismatch_exn_struct *)_T6;
  _throw(_T7);
  goto _TL5D;
  _TL5C: _TL5D: ;
}
void Cyc_List_iter2_c(void (* f)(void *,void *,void *),void * env,struct Cyc_List_List * x,
		      struct Cyc_List_List * y) {
  void * _T0;
  struct Cyc_List_List * _T1;
  void * _T2;
  struct Cyc_List_List * _T3;
  void * _T4;
  struct Cyc_List_List * _T5;
  struct Cyc_List_List * _T6;
  struct Cyc_List_List_mismatch_exn_struct * _T7;
  struct Cyc_List_List_mismatch_exn_struct * _T8;
  _TL63: if (x != 0) { goto _TL64;
  }else { goto _TL62;
  }
  _TL64: if (y != 0) { goto _TL61;
  }else { goto _TL62;
  }
  _TL61: _T0 = env;
  _T1 = x;
  _T2 = _T1->hd;
  _T3 = y;
  _T4 = _T3->hd;
  f(_T0,_T2,_T4);
  _T5 = x;
  x = _T5->tl;
  _T6 = y;
  y = _T6->tl;
  goto _TL63;
  _TL62: if (x != 0) { goto _TL67;
  }else { goto _TL68;
  }
  _TL68: if (y != 0) { goto _TL67;
  }else { goto _TL65;
  }
  _TL67: _T7 = &Cyc_List_List_mismatch_val;
  _T8 = (struct Cyc_List_List_mismatch_exn_struct *)_T7;
  _throw(_T8);
  goto _TL66;
  _TL65: _TL66: ;
}
void * Cyc_List_fold_left(void * (* f)(void *,void *),void * accum,struct Cyc_List_List * x) {
  void * _T0;
  struct Cyc_List_List * _T1;
  void * _T2;
  struct Cyc_List_List * _T3;
  void * _T4;
  _TL6C: if (x != 0) { goto _TL6A;
  }else { goto _TL6B;
  }
  _TL6A: _T0 = accum;
  _T1 = x;
  _T2 = _T1->hd;
  accum = f(_T0,_T2);
  _T3 = x;
  x = _T3->tl;
  goto _TL6C;
  _TL6B: _T4 = accum;
  return _T4;
}
void * Cyc_List_fold_left_c(void * (* f)(void *,void *,void *),void * env,
			    void * accum,struct Cyc_List_List * x) {
  void * _T0;
  void * _T1;
  struct Cyc_List_List * _T2;
  void * _T3;
  struct Cyc_List_List * _T4;
  void * _T5;
  _TL70: if (x != 0) { goto _TL6E;
  }else { goto _TL6F;
  }
  _TL6E: _T0 = env;
  _T1 = accum;
  _T2 = x;
  _T3 = _T2->hd;
  accum = f(_T0,_T1,_T3);
  _T4 = x;
  x = _T4->tl;
  goto _TL70;
  _TL6F: _T5 = accum;
  return _T5;
}
void * Cyc_List_fold_right(void * (* f)(void *,void *),struct Cyc_List_List * x,
			   void * accum) {
  void * _T0;
  struct Cyc_List_List * _T1;
  void * _T2;
  void * (* _T3)(void *,void *);
  struct Cyc_List_List * _T4;
  struct Cyc_List_List * _T5;
  void * _T6;
  void * _T7;
  void * _T8;
  if (x != 0) { goto _TL71;
  }
  _T0 = accum;
  return _T0;
  _TL71: _T1 = x;
  _T2 = _T1->hd;
  _T3 = f;
  _T4 = x;
  _T5 = _T4->tl;
  _T6 = accum;
  _T7 = Cyc_List_fold_right(_T3,_T5,_T6);
  _T8 = f(_T2,_T7);
  return _T8;
}
void * Cyc_List_fold_right_c(void * (* f)(void *,void *,void *),void * env,
			     struct Cyc_List_List * x,void * accum) {
  void * _T0;
  void * _T1;
  struct Cyc_List_List * _T2;
  void * _T3;
  void * (* _T4)(void *,void *,void *);
  void * _T5;
  struct Cyc_List_List * _T6;
  struct Cyc_List_List * _T7;
  void * _T8;
  void * _T9;
  void * _TA;
  if (x != 0) { goto _TL73;
  }
  _T0 = accum;
  return _T0;
  _TL73: _T1 = env;
  _T2 = x;
  _T3 = _T2->hd;
  _T4 = f;
  _T5 = env;
  _T6 = x;
  _T7 = _T6->tl;
  _T8 = accum;
  _T9 = Cyc_List_fold_right_c(_T4,_T5,_T7,_T8);
  _TA = f(_T1,_T3,_T9);
  return _TA;
}
struct Cyc_List_List * Cyc_List_rrevappend(struct _RegionHandle * r2,struct Cyc_List_List * x,
					   struct Cyc_List_List * y) {
  struct Cyc_List_List * _T0;
  struct _RegionHandle * _T1;
  struct Cyc_List_List * _T2;
  struct Cyc_List_List * _T3;
  struct Cyc_List_List * _T4;
  _TL78: if (x != 0) { goto _TL76;
  }else { goto _TL77;
  }
  _TL76: _T1 = r2;
  { struct Cyc_List_List * _T5 = _region_malloc(_T1,0U,sizeof(struct Cyc_List_List));
    _T2 = x;
    _T5->hd = _T2->hd;
    _T5->tl = y;
    _T0 = (struct Cyc_List_List *)_T5;
  }y = _T0;
  _T3 = x;
  x = _T3->tl;
  goto _TL78;
  _TL77: _T4 = y;
  return _T4;
}
struct Cyc_List_List * Cyc_List_revappend(struct Cyc_List_List * x,struct Cyc_List_List * y) {
  struct Cyc_List_List * _T0;
  _T0 = Cyc_List_rrevappend(Cyc_Core_heap_region,x,y);
  return _T0;
}
struct Cyc_List_List * Cyc_List_rrev(struct _RegionHandle * r2,struct Cyc_List_List * x) {
  struct Cyc_List_List * _T0;
  if (x != 0) { goto _TL79;
  }
  _T0 = 0;
  goto _TL7A;
  _TL79: _T0 = Cyc_List_rrevappend(r2,x,0);
  _TL7A: return _T0;
}
struct Cyc_List_List * Cyc_List_rev(struct Cyc_List_List * x) {
  struct Cyc_List_List * _T0;
  _T0 = Cyc_List_rrev(Cyc_Core_heap_region,x);
  return _T0;
}
struct Cyc_List_List * Cyc_List_imp_rev(struct Cyc_List_List * x) {
  struct Cyc_List_List * _T0;
  struct Cyc_List_List * _T1;
  struct Cyc_List_List * _T2;
  struct Cyc_List_List * _T3;
  struct Cyc_List_List * _T4;
  struct Cyc_List_List * _T5;
  if (x != 0) { goto _TL7B;
  }
  _T0 = x;
  return _T0;
  _TL7B: { struct Cyc_List_List * first = x;
    _T1 = x;
    { struct Cyc_List_List * second = _T1->tl;
      _T2 = x;
      _T2->tl = 0;
      _TL7D: if (second != 0) { goto _TL7E;
      }else { goto _TL7F;
      }
      _TL7E: _T3 = second;
      { struct Cyc_List_List * temp = _T3->tl;
	_T4 = second;
	_T4->tl = first;
	first = second;
	second = temp;
      }goto _TL7D;
      _TL7F: _T5 = first;
      return _T5;
    }
  }
}
struct Cyc_List_List * Cyc_List_rappend(struct _RegionHandle * r2,struct Cyc_List_List * x,
					struct Cyc_List_List * y) {
  struct Cyc_List_List * _T0;
  struct Cyc_List_List * _T1;
  struct Cyc_List_List * _T2;
  struct _RegionHandle * _T3;
  struct Cyc_List_List * _T4;
  struct Cyc_List_List * _T5;
  struct _RegionHandle * _T6;
  struct Cyc_List_List * _T7;
  struct Cyc_List_List * _T8;
  struct Cyc_List_List * _T9;
  struct Cyc_List_List * _TA;
  struct Cyc_List_List * _TB;
  struct Cyc_List_List * _TC;
  struct Cyc_List_List * _TD;
  struct Cyc_List_List * result;
  struct Cyc_List_List * prev;
  if (x != 0) { goto _TL80;
  }
  _T0 = y;
  return _T0;
  _TL80: if (y != 0) { goto _TL82;
  }
  _T1 = Cyc_List_rcopy(r2,x);
  return _T1;
  _TL82: _T3 = r2;
  { struct Cyc_List_List * _TE = _region_malloc(_T3,0U,sizeof(struct Cyc_List_List));
    _T4 = x;
    _TE->hd = _T4->hd;
    _TE->tl = 0;
    _T2 = (struct Cyc_List_List *)_TE;
  }result = _T2;
  prev = result;
  _T5 = x;
  x = _T5->tl;
  _TL87: if (x != 0) { goto _TL85;
  }else { goto _TL86;
  }
  _TL85: { struct Cyc_List_List * temp;
    _T6 = r2;
    temp = _region_malloc(_T6,0U,sizeof(struct Cyc_List_List));
    _T7 = temp;
    _T8 = x;
    _T7->hd = _T8->hd;
    _T9 = temp;
    _T9->tl = 0;
    _TA = prev;
    _TA->tl = temp;
    prev = temp;
  }_TB = x;
  x = _TB->tl;
  goto _TL87;
  _TL86: _TC = prev;
  _TC->tl = y;
  _TD = result;
  return _TD;
}
struct Cyc_List_List * Cyc_List_append(struct Cyc_List_List * x,struct Cyc_List_List * y) {
  struct Cyc_List_List * _T0;
  _T0 = Cyc_List_rappend(Cyc_Core_heap_region,x,y);
  return _T0;
}
struct Cyc_List_List * Cyc_List_imp_append(struct Cyc_List_List * x,struct Cyc_List_List * y) {
  struct Cyc_List_List * _T0;
  struct Cyc_List_List * _T1;
  struct Cyc_List_List * _T2;
  struct Cyc_List_List * _T3;
  struct Cyc_List_List * _T4;
  struct Cyc_List_List * _T5;
  struct Cyc_List_List * _T6;
  struct Cyc_List_List * z;
  if (x != 0) { goto _TL88;
  }
  _T0 = y;
  return _T0;
  _TL88: if (y != 0) { goto _TL8A;
  }
  _T1 = x;
  return _T1;
  _TL8A: z = x;
  _TL8F: if (1) { goto _TL90;
  }else { goto _TL8E;
  }
  _TL90: _T2 = z;
  _T3 = _T2->tl;
  if (_T3 != 0) { goto _TL8D;
  }else { goto _TL8E;
  }
  _TL8D: _T4 = z;
  z = _T4->tl;
  goto _TL8F;
  _TL8E: _T5 = z;
  _T5->tl = y;
  _T6 = x;
  return _T6;
}
struct Cyc_List_List * Cyc_List_rflatten(struct _RegionHandle * r,struct Cyc_List_List * x) {
  struct Cyc_List_List * (* _T0)(struct Cyc_List_List * (*)(struct _RegionHandle *,
							    struct Cyc_List_List *,
							    struct Cyc_List_List *),
				 struct _RegionHandle *,struct Cyc_List_List *,
				 struct Cyc_List_List *);
  struct _RegionHandle * _T1;
  struct Cyc_List_List * _T2;
  struct Cyc_List_List * _T3;
  { struct Cyc_List_List * (* _T4)(struct Cyc_List_List * (*)(struct _RegionHandle *,
							      struct Cyc_List_List *,
							      struct Cyc_List_List *),
				   struct _RegionHandle *,struct Cyc_List_List *,
				   struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_List_List * (*)(struct _RegionHandle *,
														    struct Cyc_List_List *,
														    struct Cyc_List_List *),
											 struct _RegionHandle *,
											 struct Cyc_List_List *,
											 struct Cyc_List_List *))Cyc_List_fold_right_c;
    _T0 = _T4;
  }_T1 = r;
  _T2 = x;
  _T3 = _T0(Cyc_List_rappend,_T1,_T2,0);
  return _T3;
}
struct Cyc_List_List * Cyc_List_flatten(struct Cyc_List_List * x) {
  struct Cyc_List_List * _T0;
  _T0 = Cyc_List_rflatten(Cyc_Core_heap_region,x);
  return _T0;
}
struct Cyc_List_List * Cyc_List_imp_merge(int (* less_eq)(void *,void *),
					  struct Cyc_List_List * a,struct Cyc_List_List * b) {
  struct Cyc_List_List * _T0;
  struct Cyc_List_List * _T1;
  struct Cyc_List_List * _T2;
  void * _T3;
  struct Cyc_List_List * _T4;
  void * _T5;
  int _T6;
  struct Cyc_List_List * _T7;
  struct Cyc_List_List * _T8;
  struct Cyc_List_List * _T9;
  void * _TA;
  struct Cyc_List_List * _TB;
  void * _TC;
  int _TD;
  struct Cyc_List_List * _TE;
  struct Cyc_List_List * _TF;
  struct Cyc_List_List * _T10;
  struct Cyc_List_List * _T11;
  struct Cyc_List_List * _T12;
  struct Cyc_List_List * _T13;
  struct Cyc_List_List * _T14;
  struct Cyc_List_List * c;
  struct Cyc_List_List * d;
  if (a != 0) { goto _TL91;
  }
  _T0 = b;
  return _T0;
  _TL91: if (b != 0) { goto _TL93;
  }
  _T1 = a;
  return _T1;
  _TL93: _T2 = a;
  _T3 = _T2->hd;
  _T4 = b;
  _T5 = _T4->hd;
  _T6 = less_eq(_T3,_T5);
  if (_T6 > 0) { goto _TL95;
  }
  c = a;
  _T7 = a;
  a = _T7->tl;
  goto _TL96;
  _TL95: c = b;
  _T8 = b;
  b = _T8->tl;
  _TL96: d = c;
  _TL97: if (a != 0) { goto _TL9A;
  }else { goto _TL99;
  }
  _TL9A: if (b != 0) { goto _TL98;
  }else { goto _TL99;
  }
  _TL98: _T9 = a;
  _TA = _T9->hd;
  _TB = b;
  _TC = _TB->hd;
  _TD = less_eq(_TA,_TC);
  if (_TD > 0) { goto _TL9B;
  }
  _TE = c;
  _TE->tl = a;
  c = a;
  _TF = a;
  a = _TF->tl;
  goto _TL9C;
  _TL9B: _T10 = c;
  _T10->tl = b;
  c = b;
  _T11 = b;
  b = _T11->tl;
  _TL9C: goto _TL97;
  _TL99: _T12 = c;
  if (a != 0) { goto _TL9D;
  }
  _T13 = b;
  goto _TL9E;
  _TL9D: _T13 = a;
  _TL9E: _T12->tl = _T13;
  _T14 = d;
  return _T14;
}
struct Cyc_List_List * Cyc_List_rimp_merge_sort(int (* less_eq)(void *,void *),
						struct Cyc_List_List * x) {
  struct Cyc_List_List * _T0;
  struct Cyc_List_List * _T1;
  struct Cyc_List_List * _T2;
  struct Cyc_List_List * _T3;
  struct Cyc_List_List * _T4;
  struct Cyc_List_List * _T5;
  struct Cyc_List_List * _T6;
  struct Cyc_List_List * _T7;
  struct Cyc_List_List * _T8;
  struct Cyc_List_List * _T9;
  int (* _TA)(void *,void *);
  int (* _TB)(void *,void *);
  struct Cyc_List_List * _TC;
  struct Cyc_List_List * _TD;
  int (* _TE)(void *,void *);
  struct Cyc_List_List * _TF;
  struct Cyc_List_List * _T10;
  struct Cyc_List_List * _T11;
  if (x != 0) { goto _TL9F;
  }
  _T0 = x;
  return _T0;
  _TL9F: _T1 = x;
  { struct Cyc_List_List * temp = _T1->tl;
    if (temp != 0) { goto _TLA1;
    }
    _T2 = x;
    return _T2;
    _TLA1: { struct Cyc_List_List * a = x;
      struct Cyc_List_List * aptr = a;
      struct Cyc_List_List * b = temp;
      struct Cyc_List_List * bptr = b;
      _T3 = b;
      x = _T3->tl;
      _TLA3: if (x != 0) { goto _TLA4;
      }else { goto _TLA5;
      }
      _TLA4: _T4 = aptr;
      _T4->tl = x;
      aptr = x;
      _T5 = x;
      x = _T5->tl;
      if (x == 0) { goto _TLA6;
      }
      _T6 = bptr;
      _T6->tl = x;
      bptr = x;
      _T7 = x;
      x = _T7->tl;
      goto _TLA7;
      _TLA6: _TLA7: goto _TLA3;
      _TLA5: _T8 = aptr;
      _T8->tl = 0;
      _T9 = bptr;
      _T9->tl = 0;
      _TA = less_eq;
      _TB = less_eq;
      _TC = a;
      _TD = Cyc_List_rimp_merge_sort(_TB,_TC);
      _TE = less_eq;
      _TF = b;
      _T10 = Cyc_List_rimp_merge_sort(_TE,_TF);
      _T11 = Cyc_List_imp_merge(_TA,_TD,_T10);
      return _T11;
    }
  }
}
struct Cyc_List_List * Cyc_List_rmerge_sort(struct _RegionHandle * r,int (* less_eq)(void *,
										     void *),
					    struct Cyc_List_List * x) {
  int (* _T0)(void *,void *);
  struct Cyc_List_List * _T1;
  struct Cyc_List_List * _T2;
  _T0 = less_eq;
  _T1 = Cyc_List_rcopy(r,x);
  _T2 = Cyc_List_rimp_merge_sort(_T0,_T1);
  return _T2;
}
struct Cyc_List_List * Cyc_List_rmerge(struct _RegionHandle * r,int (* less_eq)(void *,
										void *),
				       struct Cyc_List_List * a,struct Cyc_List_List * b) {
  struct Cyc_List_List * _T0;
  struct Cyc_List_List * _T1;
  struct Cyc_List_List * _T2;
  void * _T3;
  struct Cyc_List_List * _T4;
  void * _T5;
  int _T6;
  struct Cyc_List_List * _T7;
  struct _RegionHandle * _T8;
  struct Cyc_List_List * _T9;
  struct Cyc_List_List * _TA;
  struct Cyc_List_List * _TB;
  struct _RegionHandle * _TC;
  struct Cyc_List_List * _TD;
  struct Cyc_List_List * _TE;
  struct Cyc_List_List * _TF;
  void * _T10;
  struct Cyc_List_List * _T11;
  void * _T12;
  int _T13;
  struct Cyc_List_List * _T14;
  struct _RegionHandle * _T15;
  struct Cyc_List_List * _T16;
  struct Cyc_List_List * _T17;
  struct Cyc_List_List * _T18;
  struct Cyc_List_List * _T19;
  struct _RegionHandle * _T1A;
  struct Cyc_List_List * _T1B;
  struct Cyc_List_List * _T1C;
  struct Cyc_List_List * _T1D;
  struct Cyc_List_List * _T1E;
  struct Cyc_List_List * _T1F;
  struct Cyc_List_List * _T20;
  struct Cyc_List_List * c;
  struct Cyc_List_List * d;
  if (a != 0) { goto _TLA8;
  }
  _T0 = Cyc_List_rcopy(r,b);
  return _T0;
  _TLA8: if (b != 0) { goto _TLAA;
  }
  _T1 = Cyc_List_rcopy(r,a);
  return _T1;
  _TLAA: _T2 = a;
  _T3 = _T2->hd;
  _T4 = b;
  _T5 = _T4->hd;
  _T6 = less_eq(_T3,_T5);
  if (_T6 > 0) { goto _TLAC;
  }
  _T8 = r;
  { struct Cyc_List_List * _T21 = _region_malloc(_T8,0U,sizeof(struct Cyc_List_List));
    _T9 = a;
    _T21->hd = _T9->hd;
    _T21->tl = 0;
    _T7 = (struct Cyc_List_List *)_T21;
  }c = _T7;
  _TA = a;
  a = _TA->tl;
  goto _TLAD;
  _TLAC: _TC = r;
  { struct Cyc_List_List * _T21 = _region_malloc(_TC,0U,sizeof(struct Cyc_List_List));
    _TD = b;
    _T21->hd = _TD->hd;
    _T21->tl = 0;
    _TB = (struct Cyc_List_List *)_T21;
  }c = _TB;
  _TE = b;
  b = _TE->tl;
  _TLAD: d = c;
  _TLAE: if (a != 0) { goto _TLB1;
  }else { goto _TLB0;
  }
  _TLB1: if (b != 0) { goto _TLAF;
  }else { goto _TLB0;
  }
  _TLAF: { struct Cyc_List_List * temp;
    _TF = a;
    _T10 = _TF->hd;
    _T11 = b;
    _T12 = _T11->hd;
    _T13 = less_eq(_T10,_T12);
    if (_T13 > 0) { goto _TLB2;
    }
    _T15 = r;
    { struct Cyc_List_List * _T21 = _region_malloc(_T15,0U,sizeof(struct Cyc_List_List));
      _T16 = a;
      _T21->hd = _T16->hd;
      _T21->tl = 0;
      _T14 = (struct Cyc_List_List *)_T21;
    }temp = _T14;
    _T17 = c;
    _T17->tl = temp;
    c = temp;
    _T18 = a;
    a = _T18->tl;
    goto _TLB3;
    _TLB2: _T1A = r;
    { struct Cyc_List_List * _T21 = _region_malloc(_T1A,0U,sizeof(struct Cyc_List_List));
      _T1B = b;
      _T21->hd = _T1B->hd;
      _T21->tl = 0;
      _T19 = (struct Cyc_List_List *)_T21;
    }temp = _T19;
    _T1C = c;
    _T1C->tl = temp;
    c = temp;
    _T1D = b;
    b = _T1D->tl;
    _TLB3: ;
  }goto _TLAE;
  _TLB0: _T1E = c;
  if (a != 0) { goto _TLB4;
  }
  _T1F = Cyc_List_rcopy(r,b);
  goto _TLB5;
  _TLB4: _T1F = Cyc_List_rcopy(r,a);
  _TLB5: _T1E->tl = _T1F;
  _T20 = d;
  return _T20;
}
struct Cyc_List_List * Cyc_List_merge_sort(int (* less_eq)(void *,void *),
					   struct Cyc_List_List * x) {
  struct _RegionHandle * _T0;
  int (* _T1)(void *,void *);
  struct Cyc_List_List * _T2;
  struct Cyc_List_List * _T3;
  _T0 = Cyc_Core_heap_region;
  _T1 = less_eq;
  _T2 = x;
  _T3 = Cyc_List_rmerge_sort(_T0,_T1,_T2);
  return _T3;
}
struct Cyc_List_List * Cyc_List_merge(int (* less_eq)(void *,void *),struct Cyc_List_List * a,
				      struct Cyc_List_List * b) {
  struct _RegionHandle * _T0;
  int (* _T1)(void *,void *);
  struct Cyc_List_List * _T2;
  struct Cyc_List_List * _T3;
  struct Cyc_List_List * _T4;
  _T0 = Cyc_Core_heap_region;
  _T1 = less_eq;
  _T2 = a;
  _T3 = b;
  _T4 = Cyc_List_rmerge(_T0,_T1,_T2,_T3);
  return _T4;
}
char Cyc_List_Nth[4U] = "Nth";
struct Cyc_List_Nth_exn_struct Cyc_List_Nth_val = {Cyc_List_Nth};
void * Cyc_List_nth(struct Cyc_List_List * x,int i) {
  struct Cyc_List_List * _T0;
  struct Cyc_List_List * _T1;
  void * _T2;
  _T0 = Cyc_List_nth_tail(x,i);
  _T1 = _check_null(_T0);
  _T2 = _T1->hd;
  return _T2;
}
struct Cyc_List_List * Cyc_List_nth_tail(struct Cyc_List_List * x,int i) {
  struct Cyc_List_Nth_exn_struct * _T0;
  struct Cyc_List_Nth_exn_struct * _T1;
  struct Cyc_List_Nth_exn_struct * _T2;
  struct Cyc_List_Nth_exn_struct * _T3;
  struct Cyc_List_List * _T4;
  struct Cyc_List_List * _T5;
  if (i >= 0) { goto _TLB6;
  }
  _T0 = &Cyc_List_Nth_val;
  _T1 = (struct Cyc_List_Nth_exn_struct *)_T0;
  _throw(_T1);
  goto _TLB7;
  _TLB6: _TLB7: _TLBB: if (i > 0) { goto _TLB9;
  }else { goto _TLBA;
  }
  _TLB9: if (x != 0) { goto _TLBC;
  }
  _T2 = &Cyc_List_Nth_val;
  _T3 = (struct Cyc_List_Nth_exn_struct *)_T2;
  _throw(_T3);
  goto _TLBD;
  _TLBC: _TLBD: i = i + -1;
  _T4 = x;
  x = _T4->tl;
  goto _TLBB;
  _TLBA: _T5 = x;
  return _T5;
}
long Cyc_List_forall(long (* pred)(void *),struct Cyc_List_List * x) {
  struct Cyc_List_List * _T0;
  void * _T1;
  long _T2;
  struct Cyc_List_List * _T3;
  _TLC1: if (x != 0) { goto _TLBF;
  }else { goto _TLC0;
  }
  _TLBF: _T0 = x;
  _T1 = _T0->hd;
  _T2 = pred(_T1);
  if (_T2) { goto _TLC2;
  }else { goto _TLC4;
  }
  _TLC4: return 0;
  _TLC2: _T3 = x;
  x = _T3->tl;
  goto _TLC1;
  _TLC0: return 1;
}
long Cyc_List_forall_c(long (* pred)(void *,void *),void * env,struct Cyc_List_List * x) {
  void * _T0;
  struct Cyc_List_List * _T1;
  void * _T2;
  long _T3;
  struct Cyc_List_List * _T4;
  _TLC8: if (x != 0) { goto _TLC6;
  }else { goto _TLC7;
  }
  _TLC6: _T0 = env;
  _T1 = x;
  _T2 = _T1->hd;
  _T3 = pred(_T0,_T2);
  if (_T3) { goto _TLC9;
  }else { goto _TLCB;
  }
  _TLCB: return 0;
  _TLC9: _T4 = x;
  x = _T4->tl;
  goto _TLC8;
  _TLC7: return 1;
}
long Cyc_List_exists(long (* pred)(void *),struct Cyc_List_List * x) {
  struct Cyc_List_List * _T0;
  void * _T1;
  long _T2;
  struct Cyc_List_List * _T3;
  _TLCF: if (x != 0) { goto _TLCD;
  }else { goto _TLCE;
  }
  _TLCD: _T0 = x;
  _T1 = _T0->hd;
  _T2 = pred(_T1);
  if (! _T2) { goto _TLD0;
  }
  return 1;
  _TLD0: _T3 = x;
  x = _T3->tl;
  goto _TLCF;
  _TLCE: return 0;
}
long Cyc_List_exists_c(long (* pred)(void *,void *),void * env,struct Cyc_List_List * x) {
  void * _T0;
  struct Cyc_List_List * _T1;
  void * _T2;
  long _T3;
  struct Cyc_List_List * _T4;
  _TLD5: if (x != 0) { goto _TLD3;
  }else { goto _TLD4;
  }
  _TLD3: _T0 = env;
  _T1 = x;
  _T2 = _T1->hd;
  _T3 = pred(_T0,_T2);
  if (! _T3) { goto _TLD6;
  }
  return 1;
  _TLD6: _T4 = x;
  x = _T4->tl;
  goto _TLD5;
  _TLD4: return 0;
}
void * Cyc_List_find_c(void * (* pred)(void *,void *),void * env,struct Cyc_List_List * x) {
  void * _T0;
  struct Cyc_List_List * _T1;
  void * _T2;
  void * _T3;
  unsigned int _T4;
  void * _T5;
  struct Cyc_List_List * _T6;
  _TLDB: if (x != 0) { goto _TLD9;
  }else { goto _TLDA;
  }
  _TLD9: _T0 = env;
  _T1 = x;
  _T2 = _T1->hd;
  { void * v = pred(_T0,_T2);
    _T3 = v;
    _T4 = (unsigned int)_T3;
    if (! _T4) { goto _TLDC;
    }
    _T5 = v;
    return _T5;
    _TLDC: ;
  }_T6 = x;
  x = _T6->tl;
  goto _TLDB;
  _TLDA: return 0;
}
 struct _tuple2 {
  void * f0;
  void * f1;
};
struct Cyc_List_List * Cyc_List_rzip(struct _RegionHandle * r3,struct _RegionHandle * r4,
				     struct Cyc_List_List * x,struct Cyc_List_List * y) {
  struct Cyc_List_List_mismatch_exn_struct * _T0;
  struct Cyc_List_List_mismatch_exn_struct * _T1;
  struct Cyc_List_List * _T2;
  struct _RegionHandle * _T3;
  struct _tuple2 * _T4;
  struct _RegionHandle * _T5;
  struct Cyc_List_List * _T6;
  struct Cyc_List_List * _T7;
  struct Cyc_List_List * _T8;
  struct Cyc_List_List * _T9;
  struct Cyc_List_List * _TA;
  struct _RegionHandle * _TB;
  struct _tuple2 * _TC;
  struct _RegionHandle * _TD;
  struct Cyc_List_List * _TE;
  struct Cyc_List_List * _TF;
  struct Cyc_List_List * _T10;
  struct Cyc_List_List * _T11;
  struct Cyc_List_List * _T12;
  struct Cyc_List_List_mismatch_exn_struct * _T13;
  struct Cyc_List_List_mismatch_exn_struct * _T14;
  struct Cyc_List_List * _T15;
  struct Cyc_List_List * result;
  struct Cyc_List_List * prev;
  struct Cyc_List_List * temp;
  if (x != 0) { goto _TLDE;
  }
  if (y != 0) { goto _TLDE;
  }
  return 0;
  _TLDE: if (x == 0) { goto _TLE2;
  }else { goto _TLE3;
  }
  _TLE3: if (y == 0) { goto _TLE2;
  }else { goto _TLE0;
  }
  _TLE2: _T0 = &Cyc_List_List_mismatch_val;
  _T1 = (struct Cyc_List_List_mismatch_exn_struct *)_T0;
  _throw(_T1);
  goto _TLE1;
  _TLE0: _TLE1: _T3 = r3;
  { struct Cyc_List_List * _T16 = _region_malloc(_T3,0U,sizeof(struct Cyc_List_List));
    _T5 = r4;
    { struct _tuple2 * _T17 = _region_malloc(_T5,0U,sizeof(struct _tuple2));
      _T6 = x;
      _T17->f0 = _T6->hd;
      _T7 = y;
      _T17->f1 = _T7->hd;
      _T4 = (struct _tuple2 *)_T17;
    }_T16->hd = _T4;
    _T16->tl = 0;
    _T2 = (struct Cyc_List_List *)_T16;
  }result = _T2;
  prev = result;
  _T8 = x;
  x = _T8->tl;
  _T9 = y;
  y = _T9->tl;
  _TLE4: if (x != 0) { goto _TLE7;
  }else { goto _TLE6;
  }
  _TLE7: if (y != 0) { goto _TLE5;
  }else { goto _TLE6;
  }
  _TLE5: _TB = r3;
  { struct Cyc_List_List * _T16 = _region_malloc(_TB,0U,sizeof(struct Cyc_List_List));
    _TD = r4;
    { struct _tuple2 * _T17 = _region_malloc(_TD,0U,sizeof(struct _tuple2));
      _TE = x;
      _T17->f0 = _TE->hd;
      _TF = y;
      _T17->f1 = _TF->hd;
      _TC = (struct _tuple2 *)_T17;
    }_T16->hd = _TC;
    _T16->tl = 0;
    _TA = (struct Cyc_List_List *)_T16;
  }temp = _TA;
  _T10 = prev;
  _T10->tl = temp;
  prev = temp;
  _T11 = x;
  x = _T11->tl;
  _T12 = y;
  y = _T12->tl;
  goto _TLE4;
  _TLE6: if (x != 0) { goto _TLEA;
  }else { goto _TLEB;
  }
  _TLEB: if (y != 0) { goto _TLEA;
  }else { goto _TLE8;
  }
  _TLEA: _T13 = &Cyc_List_List_mismatch_val;
  _T14 = (struct Cyc_List_List_mismatch_exn_struct *)_T13;
  _throw(_T14);
  goto _TLE9;
  _TLE8: _TLE9: _T15 = result;
  return _T15;
}
struct Cyc_List_List * Cyc_List_zip(struct Cyc_List_List * x,struct Cyc_List_List * y) {
  struct Cyc_List_List * _T0;
  _T0 = Cyc_List_rzip(Cyc_Core_heap_region,Cyc_Core_heap_region,x,y);
  return _T0;
}
 struct _tuple3 {
  void * f0;
  void * f1;
  void * f2;
};
struct Cyc_List_List * Cyc_List_rzip3(struct _RegionHandle * r3,struct _RegionHandle * r4,
				      struct Cyc_List_List * x,struct Cyc_List_List * y,
				      struct Cyc_List_List * z) {
  struct Cyc_List_List_mismatch_exn_struct * _T0;
  struct Cyc_List_List_mismatch_exn_struct * _T1;
  struct Cyc_List_List * _T2;
  struct _RegionHandle * _T3;
  struct _tuple3 * _T4;
  struct _RegionHandle * _T5;
  struct Cyc_List_List * _T6;
  struct Cyc_List_List * _T7;
  struct Cyc_List_List * _T8;
  struct Cyc_List_List * _T9;
  struct Cyc_List_List * _TA;
  struct Cyc_List_List * _TB;
  struct Cyc_List_List * _TC;
  struct _RegionHandle * _TD;
  struct _tuple3 * _TE;
  struct _RegionHandle * _TF;
  struct Cyc_List_List * _T10;
  struct Cyc_List_List * _T11;
  struct Cyc_List_List * _T12;
  struct Cyc_List_List * _T13;
  struct Cyc_List_List * _T14;
  struct Cyc_List_List * _T15;
  struct Cyc_List_List * _T16;
  struct Cyc_List_List_mismatch_exn_struct * _T17;
  struct Cyc_List_List_mismatch_exn_struct * _T18;
  struct Cyc_List_List * _T19;
  struct Cyc_List_List * result;
  struct Cyc_List_List * prev;
  struct Cyc_List_List * temp;
  if (x != 0) { goto _TLEC;
  }
  if (y != 0) { goto _TLEC;
  }
  if (z != 0) { goto _TLEC;
  }
  return 0;
  _TLEC: if (x == 0) { goto _TLF0;
  }else { goto _TLF2;
  }
  _TLF2: if (y == 0) { goto _TLF0;
  }else { goto _TLF1;
  }
  _TLF1: if (z == 0) { goto _TLF0;
  }else { goto _TLEE;
  }
  _TLF0: _T0 = &Cyc_List_List_mismatch_val;
  _T1 = (struct Cyc_List_List_mismatch_exn_struct *)_T0;
  _throw(_T1);
  goto _TLEF;
  _TLEE: _TLEF: _T3 = r3;
  { struct Cyc_List_List * _T1A = _region_malloc(_T3,0U,sizeof(struct Cyc_List_List));
    _T5 = r4;
    { struct _tuple3 * _T1B = _region_malloc(_T5,0U,sizeof(struct _tuple3));
      _T6 = x;
      _T1B->f0 = _T6->hd;
      _T7 = y;
      _T1B->f1 = _T7->hd;
      _T8 = z;
      _T1B->f2 = _T8->hd;
      _T4 = (struct _tuple3 *)_T1B;
    }_T1A->hd = _T4;
    _T1A->tl = 0;
    _T2 = (struct Cyc_List_List *)_T1A;
  }result = _T2;
  prev = result;
  _T9 = x;
  x = _T9->tl;
  _TA = y;
  y = _TA->tl;
  _TB = z;
  z = _TB->tl;
  _TLF3: if (x != 0) { goto _TLF7;
  }else { goto _TLF5;
  }
  _TLF7: if (y != 0) { goto _TLF6;
  }else { goto _TLF5;
  }
  _TLF6: if (z != 0) { goto _TLF4;
  }else { goto _TLF5;
  }
  _TLF4: _TD = r3;
  { struct Cyc_List_List * _T1A = _region_malloc(_TD,0U,sizeof(struct Cyc_List_List));
    _TF = r4;
    { struct _tuple3 * _T1B = _region_malloc(_TF,0U,sizeof(struct _tuple3));
      _T10 = x;
      _T1B->f0 = _T10->hd;
      _T11 = y;
      _T1B->f1 = _T11->hd;
      _T12 = z;
      _T1B->f2 = _T12->hd;
      _TE = (struct _tuple3 *)_T1B;
    }_T1A->hd = _TE;
    _T1A->tl = 0;
    _TC = (struct Cyc_List_List *)_T1A;
  }temp = _TC;
  _T13 = prev;
  _T13->tl = temp;
  prev = temp;
  _T14 = x;
  x = _T14->tl;
  _T15 = y;
  y = _T15->tl;
  _T16 = z;
  z = _T16->tl;
  goto _TLF3;
  _TLF5: if (x != 0) { goto _TLFA;
  }else { goto _TLFC;
  }
  _TLFC: if (y != 0) { goto _TLFA;
  }else { goto _TLFB;
  }
  _TLFB: if (z != 0) { goto _TLFA;
  }else { goto _TLF8;
  }
  _TLFA: _T17 = &Cyc_List_List_mismatch_val;
  _T18 = (struct Cyc_List_List_mismatch_exn_struct *)_T17;
  _throw(_T18);
  goto _TLF9;
  _TLF8: _TLF9: _T19 = result;
  return _T19;
}
struct Cyc_List_List * Cyc_List_zip3(struct Cyc_List_List * x,struct Cyc_List_List * y,
				     struct Cyc_List_List * z) {
  struct Cyc_List_List * _T0;
  _T0 = Cyc_List_rzip3(Cyc_Core_heap_region,Cyc_Core_heap_region,x,y,z);
  return _T0;
}
struct _tuple0 Cyc_List_rsplit(struct _RegionHandle * r3,struct _RegionHandle * r4,
			       struct Cyc_List_List * x) {
  struct _tuple0 _T0;
  struct Cyc_List_List * _T1;
  struct _RegionHandle * _T2;
  struct Cyc_List_List * _T3;
  void * _T4;
  struct _tuple2 * _T5;
  struct _tuple2 _T6;
  struct Cyc_List_List * _T7;
  struct _RegionHandle * _T8;
  struct Cyc_List_List * _T9;
  void * _TA;
  struct _tuple2 * _TB;
  struct _tuple2 _TC;
  struct Cyc_List_List * _TD;
  struct Cyc_List_List * _TE;
  struct _RegionHandle * _TF;
  struct Cyc_List_List * _T10;
  void * _T11;
  struct _tuple2 * _T12;
  struct _tuple2 _T13;
  struct Cyc_List_List * _T14;
  struct _RegionHandle * _T15;
  struct Cyc_List_List * _T16;
  void * _T17;
  struct _tuple2 * _T18;
  struct _tuple2 _T19;
  struct Cyc_List_List * _T1A;
  struct Cyc_List_List * _T1B;
  struct Cyc_List_List * _T1C;
  struct _tuple0 _T1D;
  struct Cyc_List_List * result1;
  struct Cyc_List_List * prev1;
  struct Cyc_List_List * temp1;
  struct Cyc_List_List * result2;
  struct Cyc_List_List * prev2;
  struct Cyc_List_List * temp2;
  if (x != 0) { goto _TLFD;
  }
  { struct _tuple0 _T1E;
    _T1E.f0 = 0;
    _T1E.f1 = 0;
    _T0 = _T1E;
  }return _T0;
  _TLFD: _T2 = r3;
  { struct Cyc_List_List * _T1E = _region_malloc(_T2,0U,sizeof(struct Cyc_List_List));
    _T3 = x;
    _T4 = _T3->hd;
    _T5 = (struct _tuple2 *)_T4;
    _T6 = _T5[0];
    _T1E->hd = _T6.f0;
    _T1E->tl = 0;
    _T1 = (struct Cyc_List_List *)_T1E;
  }result1 = _T1;
  prev1 = result1;
  _T8 = r4;
  { struct Cyc_List_List * _T1E = _region_malloc(_T8,0U,sizeof(struct Cyc_List_List));
    _T9 = x;
    _TA = _T9->hd;
    _TB = (struct _tuple2 *)_TA;
    _TC = _TB[0];
    _T1E->hd = _TC.f1;
    _T1E->tl = 0;
    _T7 = (struct Cyc_List_List *)_T1E;
  }result2 = _T7;
  prev2 = result2;
  _TD = x;
  x = _TD->tl;
  _TL102: if (x != 0) { goto _TL100;
  }else { goto _TL101;
  }
  _TL100: _TF = r3;
  { struct Cyc_List_List * _T1E = _region_malloc(_TF,0U,sizeof(struct Cyc_List_List));
    _T10 = x;
    _T11 = _T10->hd;
    _T12 = (struct _tuple2 *)_T11;
    _T13 = _T12[0];
    _T1E->hd = _T13.f0;
    _T1E->tl = 0;
    _TE = (struct Cyc_List_List *)_T1E;
  }temp1 = _TE;
  _T15 = r4;
  { struct Cyc_List_List * _T1E = _region_malloc(_T15,0U,sizeof(struct Cyc_List_List));
    _T16 = x;
    _T17 = _T16->hd;
    _T18 = (struct _tuple2 *)_T17;
    _T19 = _T18[0];
    _T1E->hd = _T19.f1;
    _T1E->tl = 0;
    _T14 = (struct Cyc_List_List *)_T1E;
  }temp2 = _T14;
  _T1A = prev1;
  _T1A->tl = temp1;
  _T1B = prev2;
  _T1B->tl = temp2;
  prev1 = temp1;
  prev2 = temp2;
  _T1C = x;
  x = _T1C->tl;
  goto _TL102;
  _TL101: { struct _tuple0 _T1E;
    _T1E.f0 = result1;
    _T1E.f1 = result2;
    _T1D = _T1E;
  }return _T1D;
}
struct _tuple0 Cyc_List_split(struct Cyc_List_List * x) {
  struct _tuple0 _T0;
  _T0 = Cyc_List_rsplit(Cyc_Core_heap_region,Cyc_Core_heap_region,x);
  return _T0;
}
struct _tuple1 Cyc_List_rsplit3(struct _RegionHandle * r3,struct _RegionHandle * r4,
				struct _RegionHandle * r5,struct Cyc_List_List * x) {
  struct _tuple1 _T0;
  struct Cyc_List_List * _T1;
  struct _RegionHandle * _T2;
  struct Cyc_List_List * _T3;
  void * _T4;
  struct _tuple3 * _T5;
  struct _tuple3 _T6;
  struct Cyc_List_List * _T7;
  struct _RegionHandle * _T8;
  struct Cyc_List_List * _T9;
  void * _TA;
  struct _tuple3 * _TB;
  struct _tuple3 _TC;
  struct Cyc_List_List * _TD;
  struct _RegionHandle * _TE;
  struct Cyc_List_List * _TF;
  void * _T10;
  struct _tuple3 * _T11;
  struct _tuple3 _T12;
  struct Cyc_List_List * _T13;
  struct Cyc_List_List * _T14;
  struct _RegionHandle * _T15;
  struct Cyc_List_List * _T16;
  void * _T17;
  struct _tuple3 * _T18;
  struct _tuple3 _T19;
  struct Cyc_List_List * _T1A;
  struct _RegionHandle * _T1B;
  struct Cyc_List_List * _T1C;
  void * _T1D;
  struct _tuple3 * _T1E;
  struct _tuple3 _T1F;
  struct Cyc_List_List * _T20;
  struct _RegionHandle * _T21;
  struct Cyc_List_List * _T22;
  void * _T23;
  struct _tuple3 * _T24;
  struct _tuple3 _T25;
  struct Cyc_List_List * _T26;
  struct Cyc_List_List * _T27;
  struct Cyc_List_List * _T28;
  struct Cyc_List_List * _T29;
  struct _tuple1 _T2A;
  struct Cyc_List_List * result1;
  struct Cyc_List_List * prev1;
  struct Cyc_List_List * temp1;
  struct Cyc_List_List * result2;
  struct Cyc_List_List * prev2;
  struct Cyc_List_List * temp2;
  struct Cyc_List_List * result3;
  struct Cyc_List_List * prev3;
  struct Cyc_List_List * temp3;
  if (x != 0) { goto _TL103;
  }
  { struct _tuple1 _T2B;
    _T2B.f0 = 0;
    _T2B.f1 = 0;
    _T2B.f2 = 0;
    _T0 = _T2B;
  }return _T0;
  _TL103: _T2 = r3;
  { struct Cyc_List_List * _T2B = _region_malloc(_T2,0U,sizeof(struct Cyc_List_List));
    _T3 = x;
    _T4 = _T3->hd;
    _T5 = (struct _tuple3 *)_T4;
    _T6 = _T5[0];
    _T2B->hd = _T6.f0;
    _T2B->tl = 0;
    _T1 = (struct Cyc_List_List *)_T2B;
  }result1 = _T1;
  prev1 = result1;
  _T8 = r4;
  { struct Cyc_List_List * _T2B = _region_malloc(_T8,0U,sizeof(struct Cyc_List_List));
    _T9 = x;
    _TA = _T9->hd;
    _TB = (struct _tuple3 *)_TA;
    _TC = _TB[0];
    _T2B->hd = _TC.f1;
    _T2B->tl = 0;
    _T7 = (struct Cyc_List_List *)_T2B;
  }result2 = _T7;
  prev2 = result2;
  _TE = r5;
  { struct Cyc_List_List * _T2B = _region_malloc(_TE,0U,sizeof(struct Cyc_List_List));
    _TF = x;
    _T10 = _TF->hd;
    _T11 = (struct _tuple3 *)_T10;
    _T12 = _T11[0];
    _T2B->hd = _T12.f2;
    _T2B->tl = 0;
    _TD = (struct Cyc_List_List *)_T2B;
  }result3 = _TD;
  prev3 = result3;
  _T13 = x;
  x = _T13->tl;
  _TL108: if (x != 0) { goto _TL106;
  }else { goto _TL107;
  }
  _TL106: _T15 = r3;
  { struct Cyc_List_List * _T2B = _region_malloc(_T15,0U,sizeof(struct Cyc_List_List));
    _T16 = x;
    _T17 = _T16->hd;
    _T18 = (struct _tuple3 *)_T17;
    _T19 = _T18[0];
    _T2B->hd = _T19.f0;
    _T2B->tl = 0;
    _T14 = (struct Cyc_List_List *)_T2B;
  }temp1 = _T14;
  _T1B = r4;
  { struct Cyc_List_List * _T2B = _region_malloc(_T1B,0U,sizeof(struct Cyc_List_List));
    _T1C = x;
    _T1D = _T1C->hd;
    _T1E = (struct _tuple3 *)_T1D;
    _T1F = _T1E[0];
    _T2B->hd = _T1F.f1;
    _T2B->tl = 0;
    _T1A = (struct Cyc_List_List *)_T2B;
  }temp2 = _T1A;
  _T21 = r5;
  { struct Cyc_List_List * _T2B = _region_malloc(_T21,0U,sizeof(struct Cyc_List_List));
    _T22 = x;
    _T23 = _T22->hd;
    _T24 = (struct _tuple3 *)_T23;
    _T25 = _T24[0];
    _T2B->hd = _T25.f2;
    _T2B->tl = 0;
    _T20 = (struct Cyc_List_List *)_T2B;
  }temp3 = _T20;
  _T26 = prev1;
  _T26->tl = temp1;
  _T27 = prev2;
  _T27->tl = temp2;
  _T28 = prev3;
  _T28->tl = temp3;
  prev1 = temp1;
  prev2 = temp2;
  prev3 = temp3;
  _T29 = x;
  x = _T29->tl;
  goto _TL108;
  _TL107: { struct _tuple1 _T2B;
    _T2B.f0 = result1;
    _T2B.f1 = result2;
    _T2B.f2 = result3;
    _T2A = _T2B;
  }return _T2A;
}
struct _tuple1 Cyc_List_split3(struct Cyc_List_List * x) {
  struct _tuple1 _T0;
  _T0 = Cyc_List_rsplit3(Cyc_Core_heap_region,Cyc_Core_heap_region,Cyc_Core_heap_region,
			 x);
  return _T0;
}
long Cyc_List_memq(struct Cyc_List_List * l,void * x) {
  struct Cyc_List_List * _T0;
  void * _T1;
  void * _T2;
  struct Cyc_List_List * _T3;
  _TL10C: if (l != 0) { goto _TL10A;
  }else { goto _TL10B;
  }
  _TL10A: _T0 = l;
  _T1 = _T0->hd;
  _T2 = x;
  if (_T1 != _T2) { goto _TL10D;
  }
  return 1;
  _TL10D: _T3 = l;
  l = _T3->tl;
  goto _TL10C;
  _TL10B: return 0;
}
long Cyc_List_mem(int (* cmp)(void *,void *),struct Cyc_List_List * l,void * x) {
  struct Cyc_List_List * _T0;
  void * _T1;
  void * _T2;
  int _T3;
  struct Cyc_List_List * _T4;
  _TL112: if (l != 0) { goto _TL110;
  }else { goto _TL111;
  }
  _TL110: _T0 = l;
  _T1 = _T0->hd;
  _T2 = x;
  _T3 = cmp(_T1,_T2);
  if (_T3 != 0) { goto _TL113;
  }
  return 1;
  _TL113: _T4 = l;
  l = _T4->tl;
  goto _TL112;
  _TL111: return 0;
}
void * Cyc_List_assoc(struct Cyc_List_List * l,void * x) {
  struct Cyc_List_List * _T0;
  void * _T1;
  struct _tuple2 * _T2;
  struct _tuple2 _T3;
  void * _T4;
  void * _T5;
  struct Cyc_List_List * _T6;
  void * _T7;
  struct _tuple2 * _T8;
  struct _tuple2 _T9;
  void * _TA;
  struct Cyc_List_List * _TB;
  struct Cyc_Core_Not_found_exn_struct * _TC;
  struct Cyc_Core_Not_found_exn_struct * _TD;
  _TL118: if (l != 0) { goto _TL116;
  }else { goto _TL117;
  }
  _TL116: _T0 = l;
  _T1 = _T0->hd;
  _T2 = (struct _tuple2 *)_T1;
  _T3 = _T2[0];
  _T4 = _T3.f0;
  _T5 = x;
  if (_T4 != _T5) { goto _TL119;
  }
  _T6 = l;
  _T7 = _T6->hd;
  _T8 = (struct _tuple2 *)_T7;
  _T9 = _T8[0];
  _TA = _T9.f1;
  return _TA;
  _TL119: _TB = l;
  l = _TB->tl;
  goto _TL118;
  _TL117: _TC = &Cyc_Core_Not_found_val;
  _TD = (struct Cyc_Core_Not_found_exn_struct *)_TC;
  _throw(_TD);
}
void * Cyc_List_assoc_cmp(int (* cmp)(void *,void *),struct Cyc_List_List * l,
			  void * x) {
  struct Cyc_List_List * _T0;
  void * _T1;
  struct _tuple2 * _T2;
  struct _tuple2 _T3;
  void * _T4;
  void * _T5;
  int _T6;
  struct Cyc_List_List * _T7;
  void * _T8;
  struct _tuple2 * _T9;
  struct _tuple2 _TA;
  void * _TB;
  struct Cyc_List_List * _TC;
  struct Cyc_Core_Not_found_exn_struct * _TD;
  struct Cyc_Core_Not_found_exn_struct * _TE;
  _TL11E: if (l != 0) { goto _TL11C;
  }else { goto _TL11D;
  }
  _TL11C: _T0 = l;
  _T1 = _T0->hd;
  _T2 = (struct _tuple2 *)_T1;
  _T3 = *_T2;
  _T4 = _T3.f0;
  _T5 = x;
  _T6 = cmp(_T4,_T5);
  if (_T6 != 0) { goto _TL11F;
  }
  _T7 = l;
  _T8 = _T7->hd;
  _T9 = (struct _tuple2 *)_T8;
  _TA = *_T9;
  _TB = _TA.f1;
  return _TB;
  _TL11F: _TC = l;
  l = _TC->tl;
  goto _TL11E;
  _TL11D: _TD = &Cyc_Core_Not_found_val;
  _TE = (struct Cyc_Core_Not_found_exn_struct *)_TD;
  _throw(_TE);
}
struct Cyc_List_List * Cyc_List_delete_cmp(int (* cmp)(void *,void *),struct Cyc_List_List * l,
					   void * x) {
  struct Cyc_List_List * _T0;
  void * _T1;
  void * _T2;
  int _T3;
  struct Cyc_List_List * _T4;
  struct Cyc_List_List * _T5;
  struct Cyc_List_List * _T6;
  struct Cyc_List_List * _T7;
  struct Cyc_List_List * _T8;
  struct Cyc_List_List * _T9;
  struct Cyc_Core_Not_found_exn_struct * _TA;
  struct Cyc_Core_Not_found_exn_struct * _TB;
  struct Cyc_List_List * prev = 0;
  struct Cyc_List_List * iter = l;
  _TL121: if (iter != 0) { goto _TL122;
  }else { goto _TL123;
  }
  _TL122: _T0 = iter;
  _T1 = _T0->hd;
  _T2 = x;
  _T3 = cmp(_T1,_T2);
  if (_T3 != 0) { goto _TL124;
  }
  if (prev != 0) { goto _TL126;
  }
  _T4 = iter;
  _T5 = _T4->tl;
  return _T5;
  _TL126: _T6 = prev;
  _T7 = iter;
  _T6->tl = _T7->tl;
  _T8 = l;
  return _T8;
  _TL124: prev = iter;
  _T9 = iter;
  iter = _T9->tl;
  goto _TL121;
  _TL123: _TA = &Cyc_Core_Not_found_val;
  _TB = (struct Cyc_Core_Not_found_exn_struct *)_TA;
  _throw(_TB);
}
static int Cyc_List_ptrequal(void * x,void * y) {
  int _T0;
  int _T1;
  _T0 = x == y;
  _T1 = ! _T0;
  return _T1;
}
struct Cyc_List_List * Cyc_List_delete(struct Cyc_List_List * l,void * x) {
  struct Cyc_List_List * _T0;
  void * _T1;
  struct Cyc_List_List * _T2;
  _T0 = l;
  _T1 = x;
  _T2 = Cyc_List_delete_cmp(Cyc_List_ptrequal,_T0,_T1);
  return _T2;
}
long Cyc_List_mem_assoc(struct Cyc_List_List * l,void * x) {
  struct Cyc_List_List * _T0;
  void * _T1;
  struct _tuple2 * _T2;
  struct _tuple2 _T3;
  void * _T4;
  void * _T5;
  struct Cyc_List_List * _T6;
  _TL12B: if (l != 0) { goto _TL129;
  }else { goto _TL12A;
  }
  _TL129: _T0 = l;
  _T1 = _T0->hd;
  _T2 = (struct _tuple2 *)_T1;
  _T3 = _T2[0];
  _T4 = _T3.f0;
  _T5 = x;
  if (_T4 != _T5) { goto _TL12C;
  }
  return 1;
  _TL12C: _T6 = l;
  l = _T6->tl;
  goto _TL12B;
  _TL12A: return 0;
}
long Cyc_List_mem_assoc_cmp(int (* cmp)(void *,void *),struct Cyc_List_List * l,
			    void * x) {
  struct Cyc_List_List * _T0;
  void * _T1;
  struct _tuple2 * _T2;
  struct _tuple2 _T3;
  void * _T4;
  void * _T5;
  int _T6;
  struct Cyc_List_List * _T7;
  _TL131: if (l != 0) { goto _TL12F;
  }else { goto _TL130;
  }
  _TL12F: _T0 = l;
  _T1 = _T0->hd;
  _T2 = (struct _tuple2 *)_T1;
  _T3 = _T2[0];
  _T4 = _T3.f0;
  _T5 = x;
  _T6 = cmp(_T4,_T5);
  if (_T6 != 0) { goto _TL132;
  }
  return 1;
  _TL132: _T7 = l;
  l = _T7->tl;
  goto _TL131;
  _TL130: return 0;
}
struct Cyc_Core_Opt * Cyc_List_check_unique(int (* cmp)(void *,void *),struct Cyc_List_List * x) {
  struct Cyc_List_List * _T0;
  struct Cyc_List_List * _T1;
  void * _T2;
  struct Cyc_List_List * _T3;
  void * _T4;
  int _T5;
  struct Cyc_Core_Opt * _T6;
  _TL134: if (x != 0) { goto _TL135;
  }else { goto _TL136;
  }
  _TL135: _T0 = x;
  { void * hd = _T0->hd;
    _T1 = x;
    x = _T1->tl;
    if (x == 0) { goto _TL137;
    }
    _T2 = hd;
    _T3 = x;
    _T4 = _T3->hd;
    _T5 = cmp(_T2,_T4);
    if (_T5 != 0) { goto _TL137;
    }
    { struct Cyc_Core_Opt * _T7 = _cycalloc(sizeof(struct Cyc_Core_Opt));
      _T7->v = hd;
      _T6 = (struct Cyc_Core_Opt *)_T7;
    }return _T6;
    _TL137: ;
  }goto _TL134;
  _TL136: return 0;
}
struct _fat_ptr Cyc_List_rto_array(struct _RegionHandle * r2,struct Cyc_List_List * x) {
  struct _fat_ptr _T0;
  int _T1;
  void * * _T2;
  struct _RegionHandle * _T3;
  unsigned int _T4;
  unsigned int _T5;
  void * _T6;
  struct Cyc_List_List * _T7;
  struct Cyc_List_List * _T8;
  int s = Cyc_List_length(x);
  _T1 = s;
  { unsigned int _T9 = (unsigned int)_T1;
    _T3 = r2;
    _T4 = _check_times(_T9,sizeof(void *));
    { void * * _TA = _region_malloc(_T3,0U,_T4);
      { unsigned int _TB = _T9;
	unsigned int i;
	i = 0;
	_TL13C: if (i < _TB) { goto _TL13A;
	}else { goto _TL13B;
	}
	_TL13A: _T5 = i;
	_T7 = _check_null(x);
	{ void * v = _T7->hd;
	  _T8 = x;
	  x = _T8->tl;
	  _T6 = v;
	}_TA[_T5] = _T6;
	i = i + 1;
	goto _TL13C;
	_TL13B: ;
      }_T2 = (void * *)_TA;
    }_T0 = _tag_fat(_T2,sizeof(void *),_T9);
  }return _T0;
}
struct _fat_ptr Cyc_List_to_array(struct Cyc_List_List * x) {
  struct _fat_ptr _T0;
  _T0 = Cyc_List_rto_array(Cyc_Core_heap_region,x);
  return _T0;
}
struct Cyc_List_List * Cyc_List_rfrom_array(struct _RegionHandle * r2,struct _fat_ptr arr) {
  struct _fat_ptr _T0;
  struct Cyc_List_List * _T1;
  struct _RegionHandle * _T2;
  struct _fat_ptr _T3;
  unsigned char * _T4;
  void * * _T5;
  void * * _T6;
  unsigned int _T7;
  int _T8;
  struct Cyc_List_List * _T9;
  struct Cyc_List_List * ans = 0;
  _T0 = arr;
  { unsigned int n = _get_fat_size(_T0,sizeof(void *));
    { unsigned int i = n - 1U;
      _TL140: if (i < n) { goto _TL13E;
      }else { goto _TL13F;
      }
      _TL13E: _T2 = r2;
      { struct Cyc_List_List * _TA = _region_malloc(_T2,0U,sizeof(struct Cyc_List_List));
	_T3 = arr;
	_T4 = _T3.curr;
	_T5 = (void * *)_T4;
	_T6 = _check_null(_T5);
	_T7 = i;
	_T8 = (int)_T7;
	_TA->hd = _T6[_T8];
	_TA->tl = ans;
	_T1 = (struct Cyc_List_List *)_TA;
      }ans = _T1;
      i = i + -1;
      goto _TL140;
      _TL13F: ;
    }_T9 = ans;
    return _T9;
  }
}
struct Cyc_List_List * Cyc_List_from_array(struct _fat_ptr arr) {
  struct Cyc_List_List * _T0;
  _T0 = Cyc_List_rfrom_array(Cyc_Core_heap_region,arr);
  return _T0;
}
struct Cyc_List_List * Cyc_List_rtabulate(struct _RegionHandle * r,int n,
					  void * (* f)(int)) {
  struct Cyc_List_List * _T0;
  struct _RegionHandle * _T1;
  struct Cyc_List_List * _T2;
  struct Cyc_List_List * res = 0;
  { int i = 0;
    _TL144: if (i < n) { goto _TL142;
    }else { goto _TL143;
    }
    _TL142: _T1 = r;
    { struct Cyc_List_List * _T3 = _region_malloc(_T1,0U,sizeof(struct Cyc_List_List));
      _T3->hd = f(i);
      _T3->tl = res;
      _T0 = (struct Cyc_List_List *)_T3;
    }res = _T0;
    i = i + 1;
    goto _TL144;
    _TL143: ;
  }_T2 = Cyc_List_imp_rev(res);
  return _T2;
}
struct Cyc_List_List * Cyc_List_tabulate(int n,void * (* f)(int)) {
  struct _RegionHandle * _T0;
  int _T1;
  void * (* _T2)(int);
  struct Cyc_List_List * _T3;
  _T0 = Cyc_Core_heap_region;
  _T1 = n;
  _T2 = f;
  _T3 = Cyc_List_rtabulate(_T0,_T1,_T2);
  return _T3;
}
struct Cyc_List_List * Cyc_List_rtabulate_c(struct _RegionHandle * r,int n,
					    void * (* f)(void *,int),void * env) {
  struct Cyc_List_List * _T0;
  struct _RegionHandle * _T1;
  struct Cyc_List_List * _T2;
  struct Cyc_List_List * res = 0;
  { int i = 0;
    _TL148: if (i < n) { goto _TL146;
    }else { goto _TL147;
    }
    _TL146: _T1 = r;
    { struct Cyc_List_List * _T3 = _region_malloc(_T1,0U,sizeof(struct Cyc_List_List));
      _T3->hd = f(env,i);
      _T3->tl = res;
      _T0 = (struct Cyc_List_List *)_T3;
    }res = _T0;
    i = i + 1;
    goto _TL148;
    _TL147: ;
  }_T2 = Cyc_List_imp_rev(res);
  return _T2;
}
struct Cyc_List_List * Cyc_List_tabulate_c(int n,void * (* f)(void *,int),
					   void * env) {
  struct _RegionHandle * _T0;
  int _T1;
  void * (* _T2)(void *,int);
  void * _T3;
  struct Cyc_List_List * _T4;
  _T0 = Cyc_Core_heap_region;
  _T1 = n;
  _T2 = f;
  _T3 = env;
  _T4 = Cyc_List_rtabulate_c(_T0,_T1,_T2,_T3);
  return _T4;
}
int Cyc_List_list_cmp(int (* cmp)(void *,void *),struct Cyc_List_List * l1,
		      struct Cyc_List_List * l2) {
  struct Cyc_List_List * _T0;
  unsigned int _T1;
  struct Cyc_List_List * _T2;
  unsigned int _T3;
  struct Cyc_List_List * _T4;
  void * _T5;
  struct Cyc_List_List * _T6;
  void * _T7;
  int _T8;
  struct Cyc_List_List * _T9;
  struct Cyc_List_List * _TA;
  int _TB;
  _TL14C: if (l1 != 0) { goto _TL14D;
  }else { goto _TL14B;
  }
  _TL14D: if (l2 != 0) { goto _TL14A;
  }else { goto _TL14B;
  }
  _TL14A: _T0 = l1;
  _T1 = (unsigned int)_T0;
  _T2 = l2;
  _T3 = (unsigned int)_T2;
  if (_T1 != _T3) { goto _TL14E;
  }
  return 0;
  _TL14E: _T4 = l1;
  _T5 = _T4->hd;
  _T6 = l2;
  _T7 = _T6->hd;
  { int i = cmp(_T5,_T7);
    if (i == 0) { goto _TL150;
    }
    _T8 = i;
    return _T8;
    _TL150: ;
  }_T9 = l1;
  l1 = _T9->tl;
  _TA = l2;
  l2 = _TA->tl;
  goto _TL14C;
  _TL14B: if (l1 == 0) { goto _TL152;
  }
  return 1;
  _TL152: if (l2 == 0) { goto _TL154;
  }
  _TB = - 1;
  return _TB;
  _TL154: return 0;
}
long Cyc_List_list_prefix(int (* cmp)(void *,void *),struct Cyc_List_List * l1,
			  struct Cyc_List_List * l2) {
  struct Cyc_List_List * _T0;
  unsigned int _T1;
  struct Cyc_List_List * _T2;
  unsigned int _T3;
  struct Cyc_List_List * _T4;
  void * _T5;
  struct Cyc_List_List * _T6;
  void * _T7;
  int _T8;
  struct Cyc_List_List * _T9;
  struct Cyc_List_List * _TA;
  int _TB;
  _TL159: if (l1 != 0) { goto _TL15A;
  }else { goto _TL158;
  }
  _TL15A: if (l2 != 0) { goto _TL157;
  }else { goto _TL158;
  }
  _TL157: _T0 = l1;
  _T1 = (unsigned int)_T0;
  _T2 = l2;
  _T3 = (unsigned int)_T2;
  if (_T1 != _T3) { goto _TL15B;
  }
  return 1;
  _TL15B: _T4 = l1;
  _T5 = _T4->hd;
  _T6 = l2;
  _T7 = _T6->hd;
  _T8 = cmp(_T5,_T7);
  if (_T8 == 0) { goto _TL15D;
  }
  return 0;
  _TL15D: _T9 = l1;
  l1 = _T9->tl;
  _TA = l2;
  l2 = _TA->tl;
  goto _TL159;
  _TL158: _TB = l1 == 0;
  return _TB;
}
struct Cyc_List_List * Cyc_List_rfilter_c(struct _RegionHandle * r,long (* f)(void *,
									      void *),
					  void * env,struct Cyc_List_List * l) {
  struct _RegionHandle * _T0;
  struct Cyc_List_List * _T1;
  struct Cyc_List_List * _T2;
  struct Cyc_List_List * _T3;
  void * _T4;
  struct Cyc_List_List * _T5;
  void * _T6;
  long _T7;
  struct Cyc_List_List * _T8;
  struct _RegionHandle * _T9;
  struct Cyc_List_List * _TA;
  struct Cyc_List_List * _TB;
  struct Cyc_List_List * _TC;
  struct Cyc_List_List * _TD;
  struct Cyc_List_List * _TE;
  if (l != 0) { goto _TL15F;
  }
  return 0;
  _TL15F: { struct Cyc_List_List * result;
    _T0 = r;
    result = _region_malloc(_T0,0U,sizeof(struct Cyc_List_List));
    _T1 = result;
    _T2 = l;
    _T1->hd = _T2->hd;
    _T3 = result;
    _T3->tl = 0;
    { struct Cyc_List_List * end = result;
      struct Cyc_List_List * temp;
      _TL164: if (l != 0) { goto _TL162;
      }else { goto _TL163;
      }
      _TL162: _T4 = env;
      _T5 = l;
      _T6 = _T5->hd;
      _T7 = f(_T4,_T6);
      if (! _T7) { goto _TL165;
      }
      _T9 = r;
      { struct Cyc_List_List * _TF = _region_malloc(_T9,0U,sizeof(struct Cyc_List_List));
	_TA = l;
	_TF->hd = _TA->hd;
	_TF->tl = 0;
	_T8 = (struct Cyc_List_List *)_TF;
      }temp = _T8;
      _TB = end;
      _TB->tl = temp;
      end = temp;
      goto _TL166;
      _TL165: _TL166: _TC = l;
      l = _TC->tl;
      goto _TL164;
      _TL163: _TD = result;
      _TE = _TD->tl;
      return _TE;
    }
  }
}
struct Cyc_List_List * Cyc_List_filter_c(long (* f)(void *,void *),void * env,
					 struct Cyc_List_List * l) {
  struct _RegionHandle * _T0;
  long (* _T1)(void *,void *);
  void * _T2;
  struct Cyc_List_List * _T3;
  struct Cyc_List_List * _T4;
  _T0 = Cyc_Core_heap_region;
  _T1 = f;
  _T2 = env;
  _T3 = l;
  _T4 = Cyc_List_rfilter_c(_T0,_T1,_T2,_T3);
  return _T4;
}
struct Cyc_List_List * Cyc_List_rfilter(struct _RegionHandle * r,long (* f)(void *),
					struct Cyc_List_List * l) {
  struct _RegionHandle * _T0;
  struct Cyc_List_List * _T1;
  struct Cyc_List_List * _T2;
  struct Cyc_List_List * _T3;
  struct Cyc_List_List * _T4;
  void * _T5;
  long _T6;
  struct Cyc_List_List * _T7;
  struct _RegionHandle * _T8;
  struct Cyc_List_List * _T9;
  struct Cyc_List_List * _TA;
  struct Cyc_List_List * _TB;
  struct Cyc_List_List * _TC;
  struct Cyc_List_List * _TD;
  if (l != 0) { goto _TL167;
  }
  return 0;
  _TL167: { struct Cyc_List_List * result;
    _T0 = r;
    result = _region_malloc(_T0,0U,sizeof(struct Cyc_List_List));
    _T1 = result;
    _T2 = l;
    _T1->hd = _T2->hd;
    _T3 = result;
    _T3->tl = 0;
    { struct Cyc_List_List * end = result;
      struct Cyc_List_List * temp;
      _TL16C: if (l != 0) { goto _TL16A;
      }else { goto _TL16B;
      }
      _TL16A: _T4 = l;
      _T5 = _T4->hd;
      _T6 = f(_T5);
      if (! _T6) { goto _TL16D;
      }
      _T8 = r;
      { struct Cyc_List_List * _TE = _region_malloc(_T8,0U,sizeof(struct Cyc_List_List));
	_T9 = l;
	_TE->hd = _T9->hd;
	_TE->tl = 0;
	_T7 = (struct Cyc_List_List *)_TE;
      }temp = _T7;
      _TA = end;
      _TA->tl = temp;
      end = temp;
      goto _TL16E;
      _TL16D: _TL16E: _TB = l;
      l = _TB->tl;
      goto _TL16C;
      _TL16B: _TC = result;
      _TD = _TC->tl;
      return _TD;
    }
  }
}
struct Cyc_List_List * Cyc_List_filter(long (* f)(void *),struct Cyc_List_List * l) {
  struct _RegionHandle * _T0;
  long (* _T1)(void *);
  struct Cyc_List_List * _T2;
  struct Cyc_List_List * _T3;
  _T0 = Cyc_Core_heap_region;
  _T1 = f;
  _T2 = l;
  _T3 = Cyc_List_rfilter(_T0,_T1,_T2);
  return _T3;
}
