#include <cyc_include.h>
extern struct _RegionHandle * Cyc_Core_heap_region;
 struct Cyc_List_List {
  void * hd;
  struct Cyc_List_List * tl;
};
struct Cyc_Queue_Queue;
extern char Cyc_Queue_Empty[6U];
 struct Cyc_Queue_Empty_exn_struct {
  char * tag;
};
 struct Cyc_Queue_Queue {
  struct Cyc_List_List * front;
  struct Cyc_List_List * rear;
  unsigned int len;
};
long Cyc_Queue_is_empty(struct Cyc_Queue_Queue * q) {
  struct Cyc_Queue_Queue * _T0;
  struct Cyc_List_List * _T1;
  int _T2;
  _T0 = q;
  _T1 = _T0->front;
  _T2 = _T1 == 0;
  return _T2;
}
char Cyc_Queue_Empty[6U] = "Empty";
struct Cyc_Queue_Empty_exn_struct Cyc_Queue_Empty_val = {Cyc_Queue_Empty};
struct Cyc_Queue_Queue * Cyc_Queue_create() {
  struct Cyc_Queue_Queue * _T0;
  { struct Cyc_Queue_Queue * _T1 = _cycalloc(sizeof(struct Cyc_Queue_Queue));
    _T1->front = 0;
    _T1->rear = 0;
    _T1->len = 0U;
    _T0 = (struct Cyc_Queue_Queue *)_T1;
  }return _T0;
}
struct Cyc_Queue_Queue * Cyc_Queue_rcreate(struct _RegionHandle * r) {
  struct Cyc_Queue_Queue * _T0;
  struct _RegionHandle * _T1;
  _T1 = r;
  { struct Cyc_Queue_Queue * _T2 = _region_malloc(_T1,0U,sizeof(struct Cyc_Queue_Queue));
    _T2->front = 0;
    _T2->rear = 0;
    _T2->len = 0U;
    _T0 = (struct Cyc_Queue_Queue *)_T2;
  }return _T0;
}
void Cyc_Queue_radd(struct _RegionHandle * r,struct Cyc_Queue_Queue * q,void * x) {
  struct _RegionHandle * _T0;
  struct Cyc_List_List * _T1;
  struct Cyc_List_List * _T2;
  struct Cyc_Queue_Queue * _T3;
  struct Cyc_List_List * _T4;
  struct Cyc_Queue_Queue * _T5;
  struct Cyc_Queue_Queue * _T6;
  struct Cyc_Queue_Queue * _T7;
  struct Cyc_List_List * _T8;
  struct Cyc_List_List * _T9;
  struct Cyc_Queue_Queue * _TA;
  struct Cyc_Queue_Queue * _TB;
  struct Cyc_List_List * cell;
  _T0 = r;
  cell = _region_malloc(_T0,0U,sizeof(struct Cyc_List_List));
  _T1 = cell;
  _T1->hd = x;
  _T2 = cell;
  _T2->tl = 0;
  _T3 = q;
  _T4 = _T3->front;
  if (_T4 != 0) { goto _TL0;
  }
  _T5 = q;
  _T5->front = cell;
  _T6 = q;
  _T6->rear = cell;
  goto _TL1;
  _TL0: _T7 = q;
  _T8 = _T7->rear;
  _T9 = _check_null(_T8);
  _T9->tl = cell;
  _TA = q;
  _TA->rear = cell;
  _TL1: _TB = q;
  _TB->len = _TB->len + 1;
}
void Cyc_Queue_add(struct Cyc_Queue_Queue * q,void * x) {
  Cyc_Queue_radd(Cyc_Core_heap_region,q,x);
}
void Cyc_Queue_rpush(struct _RegionHandle * r,struct Cyc_Queue_Queue * q,
		     void * x) {
  struct Cyc_Queue_Queue * _T0;
  struct Cyc_List_List * _T1;
  struct _RegionHandle * _T2;
  struct Cyc_Queue_Queue * _T3;
  struct Cyc_Queue_Queue * _T4;
  struct Cyc_List_List * _T5;
  struct Cyc_Queue_Queue * _T6;
  struct Cyc_Queue_Queue * _T7;
  struct Cyc_Queue_Queue * _T8;
  _T0 = q;
  _T2 = r;
  { struct Cyc_List_List * _T9 = _region_malloc(_T2,0U,sizeof(struct Cyc_List_List));
    _T9->hd = x;
    _T3 = q;
    _T9->tl = _T3->front;
    _T1 = (struct Cyc_List_List *)_T9;
  }_T0->front = _T1;
  _T4 = q;
  _T5 = _T4->rear;
  if (_T5 != 0) { goto _TL2;
  }
  _T6 = q;
  _T7 = q;
  _T6->rear = _T7->front;
  goto _TL3;
  _TL2: _TL3: _T8 = q;
  _T8->len = _T8->len + 1;
}
void Cyc_Queue_push(struct Cyc_Queue_Queue * q,void * x) {
  Cyc_Queue_rpush(Cyc_Core_heap_region,q,x);
}
void * Cyc_Queue_take(struct Cyc_Queue_Queue * q) {
  struct Cyc_Queue_Queue * _T0;
  struct Cyc_List_List * _T1;
  struct Cyc_Queue_Empty_exn_struct * _T2;
  struct Cyc_Queue_Empty_exn_struct * _T3;
  struct Cyc_Queue_Queue * _T4;
  struct Cyc_List_List * _T5;
  struct Cyc_Queue_Queue * _T6;
  struct Cyc_Queue_Queue * _T7;
  struct Cyc_List_List * _T8;
  struct Cyc_Queue_Queue * _T9;
  struct Cyc_List_List * _TA;
  struct Cyc_Queue_Queue * _TB;
  struct Cyc_Queue_Queue * _TC;
  void * _TD;
  _T0 = q;
  _T1 = _T0->front;
  if (_T1 != 0) { goto _TL4;
  }
  _T2 = &Cyc_Queue_Empty_val;
  _T3 = (struct Cyc_Queue_Empty_exn_struct *)_T2;
  _throw(_T3);
  goto _TL5;
  _TL4: _TL5: _T4 = q;
  _T5 = _T4->front;
  { void * x = _T5->hd;
    _T6 = q;
    _T7 = q;
    _T8 = _T7->front;
    _T6->front = _T8->tl;
    _T9 = q;
    _TA = _T9->front;
    if (_TA != 0) { goto _TL6;
    }
    _TB = q;
    _TB->rear = 0;
    goto _TL7;
    _TL6: _TL7: _TC = q;
    _TC->len = _TC->len + -1;
    _TD = x;
    return _TD;
  }
}
void * Cyc_Queue_noalias_take(struct Cyc_Queue_Queue * q,void * null_elem) {
  struct Cyc_Queue_Queue * _T0;
  struct Cyc_List_List * _T1;
  struct Cyc_Queue_Empty_exn_struct * _T2;
  struct Cyc_Queue_Empty_exn_struct * _T3;
  struct Cyc_Queue_Queue * _T4;
  struct Cyc_List_List * _T5;
  struct Cyc_Queue_Queue * _T6;
  struct Cyc_List_List * _T7;
  struct Cyc_Queue_Queue * _T8;
  struct Cyc_Queue_Queue * _T9;
  struct Cyc_List_List * _TA;
  struct Cyc_List_List * _TB;
  struct Cyc_Queue_Queue * _TC;
  struct Cyc_List_List * _TD;
  struct Cyc_Queue_Queue * _TE;
  struct Cyc_Queue_Queue * _TF;
  void * _T10;
  _T0 = q;
  _T1 = _T0->front;
  if (_T1 != 0) { goto _TL8;
  }
  _T2 = &Cyc_Queue_Empty_val;
  _T3 = (struct Cyc_Queue_Empty_exn_struct *)_T2;
  _throw(_T3);
  goto _TL9;
  _TL8: _TL9: { void * _T11 = null_elem;
    _T4 = q;
    _T5 = _T4->front;
    { void * _T12 = _T5->hd;
      null_elem = _T12;
      _T6 = q;
      _T7 = _T6->front;
      _T7->hd = _T11;
    }
  }_T8 = q;
  _T9 = q;
  _TA = _T9->front;
  _TB = _check_null(_TA);
  _T8->front = _TB->tl;
  _TC = q;
  _TD = _TC->front;
  if (_TD != 0) { goto _TLA;
  }
  _TE = q;
  _TE->rear = 0;
  goto _TLB;
  _TLA: _TLB: _TF = q;
  _TF->len = _TF->len + -1;
  _T10 = null_elem;
  return _T10;
}
void * Cyc_Queue_ptr_take(struct Cyc_Queue_Queue * q) {
  void * _T0;
  _T0 = Cyc_Queue_noalias_take(q,0);
  return _T0;
}
void * Cyc_Queue_peek(struct Cyc_Queue_Queue * q) {
  struct Cyc_Queue_Queue * _T0;
  struct Cyc_List_List * _T1;
  struct Cyc_Queue_Empty_exn_struct * _T2;
  struct Cyc_Queue_Empty_exn_struct * _T3;
  struct Cyc_Queue_Queue * _T4;
  struct Cyc_List_List * _T5;
  void * _T6;
  _T0 = q;
  _T1 = _T0->front;
  if (_T1 != 0) { goto _TLC;
  }
  _T2 = &Cyc_Queue_Empty_val;
  _T3 = (struct Cyc_Queue_Empty_exn_struct *)_T2;
  _throw(_T3);
  goto _TLD;
  _TLC: _TLD: _T4 = q;
  _T5 = _T4->front;
  _T6 = _T5->hd;
  return _T6;
}
void Cyc_Queue_clear(struct Cyc_Queue_Queue * q) {
  struct Cyc_Queue_Queue * _T0;
  struct Cyc_Queue_Queue * _T1;
  struct Cyc_Queue_Queue * _T2;
  _T0 = q;
  _T0->front = 0;
  _T1 = q;
  _T1->rear = 0;
  _T2 = q;
  _T2->len = 0U;
}
void Cyc_Queue_remove(struct Cyc_Queue_Queue * q,void * v) {
  struct Cyc_Queue_Queue * _T0;
  struct Cyc_List_List * _T1;
  void * _T2;
  void * _T3;
  struct Cyc_Queue_Queue * _T4;
  struct Cyc_Queue_Queue * _T5;
  struct Cyc_List_List * _T6;
  struct Cyc_List_List * _T7;
  struct Cyc_Queue_Queue * _T8;
  struct Cyc_List_List * _T9;
  struct Cyc_List_List * _TA;
  struct Cyc_List_List * _TB;
  struct Cyc_Queue_Queue * _TC;
  struct Cyc_List_List * _TD;
  struct Cyc_List_List * _TE;
  struct Cyc_Queue_Queue * _TF;
  struct Cyc_List_List * _T10;
  struct Cyc_List_List * x;
  struct Cyc_List_List * y;
  _T0 = q;
  x = _T0->front;
  y = 0;
  _TL11: if (x != 0) { goto _TLF;
  }else { goto _TL10;
  }
  _TLF: _T1 = x;
  _T2 = _T1->hd;
  _T3 = v;
  if (_T2 != _T3) { goto _TL12;
  }
  _T4 = q;
  _T4->len = _T4->len + -1;
  _T5 = q;
  _T6 = _T5->front;
  _T7 = x;
  if (_T6 != _T7) { goto _TL14;
  }
  _T8 = q;
  _T9 = x;
  _T8->front = _T9->tl;
  goto _TL15;
  _TL14: _TA = _check_null(y);
  _TB = x;
  _TA->tl = _TB->tl;
  _TL15: _TC = q;
  _TD = _TC->rear;
  _TE = x;
  if (_TD != _TE) { goto _TL16;
  }
  _TF = q;
  _TF->rear = y;
  goto _TL17;
  _TL16: _TL17: goto _TL10;
  _TL12: y = x;
  _T10 = x;
  x = _T10->tl;
  goto _TL11;
  _TL10: ;
}
void * Cyc_Queue_take_match(struct _RegionHandle * r,struct Cyc_Queue_Queue * q,
			    long (* f)(void *,void *),void * env) {
  long _T0;
  long _T1;
  long _T2;
  long _T3;
  void * _T4;
  long _T5;
  long _T6;
  struct _RegionHandle * _T7;
  struct Cyc_Queue_Queue * _T8;
  void * _T9;
  struct _RegionHandle _TA = _new_region(0U,"g");
  struct _RegionHandle * g = &_TA;
  _push_region(g);
  { struct Cyc_Queue_Queue * saveq = Cyc_Queue_rcreate(g);
    void * x = 0;
    long ok = 0;
    _T0 = Cyc_Queue_is_empty(q);
    if (! _T0) { goto _TL18;
    }
    { void * _TB = 0;
      _npop_handler(0);
      return _TB;
    }_TL18: _TL1A: x = Cyc_Queue_ptr_take(q);
    _T1 = f(env,x);
    if (! _T1) { goto _TL1C;
    }
    ok = 1;
    goto _TL1D;
    _TL1C: _TL1D: Cyc_Queue_rpush(g,saveq,x);
    _T2 = ok;
    if (! _T2) { goto _TL1E;
    }
    goto _TL1B;
    _TL1E: _T3 = Cyc_Queue_is_empty(q);
    if (_T3) { goto _TL1B;
    }else { goto _TL1A;
    }
    _TL1B: _T5 = ok;
    if (! _T5) { goto _TL20;
    }
    _T4 = Cyc_Queue_ptr_take(saveq);
    goto _TL21;
    _TL20: _T4 = 0;
    _TL21: x = _T4;
    _TL22: _T6 = Cyc_Queue_is_empty(saveq);
    if (_T6) { goto _TL24;
    }else { goto _TL23;
    }
    _TL23: _T7 = r;
    _T8 = q;
    _T9 = Cyc_Queue_ptr_take(saveq);
    Cyc_Queue_rpush(_T7,_T8,_T9);
    goto _TL22;
    _TL24: { void * _TB = x;
      _npop_handler(0);
      return _TB;
    }
  }_pop_region();
}
int Cyc_Queue_length(struct Cyc_Queue_Queue * q) {
  struct Cyc_Queue_Queue * _T0;
  unsigned int _T1;
  int _T2;
  _T0 = q;
  _T1 = _T0->len;
  _T2 = (int)_T1;
  return _T2;
}
void Cyc_Queue_iter(void (* f)(void *),struct Cyc_Queue_Queue * q) {
  struct Cyc_Queue_Queue * _T0;
  struct Cyc_List_List * _T1;
  void * _T2;
  struct Cyc_List_List * _T3;
  _T0 = q;
  { struct Cyc_List_List * x = _T0->front;
    _TL28: if (x != 0) { goto _TL26;
    }else { goto _TL27;
    }
    _TL26: _T1 = x;
    _T2 = _T1->hd;
    f(_T2);
    _T3 = x;
    x = _T3->tl;
    goto _TL28;
    _TL27: ;
  }
}
void Cyc_Queue_app(void * (* f)(void *),struct Cyc_Queue_Queue * q) {
  struct Cyc_Queue_Queue * _T0;
  struct Cyc_List_List * _T1;
  void * _T2;
  struct Cyc_List_List * _T3;
  _T0 = q;
  { struct Cyc_List_List * x = _T0->front;
    _TL2C: if (x != 0) { goto _TL2A;
    }else { goto _TL2B;
    }
    _TL2A: _T1 = x;
    _T2 = _T1->hd;
    f(_T2);
    _T3 = x;
    x = _T3->tl;
    goto _TL2C;
    _TL2B: ;
  }
}
