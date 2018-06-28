#include <cyc_include.h>
extern char Cyc_Core_Invalid_argument[17U];
 struct Cyc_Core_Invalid_argument_exn_struct {
  char * tag;
  struct _fat_ptr f1;
};
extern struct _RegionHandle * Cyc_Core_heap_region;
 struct Cyc_List_List {
  void * hd;
  struct Cyc_List_List * tl;
};
struct Cyc_Splay_node;
 struct Cyc_Splay_noderef {
  struct Cyc_Splay_node * v;
};
 struct Cyc_Splay_Node_Splay_tree_struct {
  int tag;
  struct Cyc_Splay_noderef * f1;
};
 struct Cyc_Splay_node {
  void * key;
  void * data;
  void * left;
  void * right;
};
enum Cyc_Splay_direction {
  Cyc_Splay_LEFT = 0U,
  Cyc_Splay_RIGHT = 1U
};
static void Cyc_Splay_rotate_left(struct _RegionHandle * r,struct Cyc_Splay_noderef * nr) {
  struct Cyc_Splay_noderef * _T0;
  struct Cyc_Splay_node * _T1;
  int * _T2;
  int _T3;
  struct Cyc_Splay_noderef * _T4;
  struct _RegionHandle * _T5;
  struct Cyc_Splay_Node_Splay_tree_struct * _T6;
  struct Cyc_Splay_Node_Splay_tree_struct * _T7;
  struct Cyc_Splay_noderef * _T8;
  struct _RegionHandle * _T9;
  struct Cyc_Splay_node * _TA;
  struct _RegionHandle * _TB;
  struct Cyc_Splay_node * _TC;
  struct Cyc_Splay_node * _TD;
  struct Cyc_Splay_node * _TE;
  struct Cyc_Splay_node * _TF;
  struct Cyc_Splay_noderef * _T10;
  struct Cyc_Splay_node * _T11;
  struct _RegionHandle * _T12;
  struct Cyc_Splay_node * _T13;
  struct Cyc_Splay_node * _T14;
  struct Cyc_Splay_node * _T15;
  struct Cyc_Splay_Node_Splay_tree_struct * _T16;
  struct Cyc_Core_Invalid_argument_exn_struct * _T17;
  void * _T18;
  _T0 = nr;
  { struct Cyc_Splay_node * n = _T0->v;
    _T1 = n;
    { void * _T19 = _T1->left;
      struct Cyc_Splay_noderef * _T1A;
      _T2 = (int *)_T19;
      _T3 = *_T2;
      if (_T3 != 1) { goto _TL0;
      }
      { struct Cyc_Splay_Node_Splay_tree_struct * _T1B = (struct Cyc_Splay_Node_Splay_tree_struct *)_T19;
	_T1A = _T1B->f1;
      }{ struct Cyc_Splay_noderef * nr2 = _T1A;
	_T4 = nr2;
	{ struct Cyc_Splay_node * n2 = _T4->v;
	  struct Cyc_Splay_Node_Splay_tree_struct * t;
	  _T5 = r;
	  t = _region_malloc(_T5,0U,sizeof(struct Cyc_Splay_Node_Splay_tree_struct));
	  _T6 = t;
	  _T6->tag = 1;
	  _T7 = t;
	  _T9 = r;
	  { struct Cyc_Splay_noderef * _T1B = _region_malloc(_T9,0U,sizeof(struct Cyc_Splay_noderef));
	    _TB = r;
	    { struct Cyc_Splay_node * _T1C = _region_malloc(_TB,0U,sizeof(struct Cyc_Splay_node));
	      _TC = n;
	      _T1C->key = _TC->key;
	      _TD = n;
	      _T1C->data = _TD->data;
	      _TE = n2;
	      _T1C->left = _TE->right;
	      _TF = n;
	      _T1C->right = _TF->right;
	      _TA = (struct Cyc_Splay_node *)_T1C;
	    }_T1B->v = _TA;
	    _T8 = (struct Cyc_Splay_noderef *)_T1B;
	  }_T7->f1 = _T8;
	  _T10 = nr;
	  _T12 = r;
	  { struct Cyc_Splay_node * _T1B = _region_malloc(_T12,0U,sizeof(struct Cyc_Splay_node));
	    _T13 = n2;
	    _T1B->key = _T13->key;
	    _T14 = n2;
	    _T1B->data = _T14->data;
	    _T15 = n2;
	    _T1B->left = _T15->left;
	    _T16 = t;
	    _T1B->right = (void *)_T16;
	    _T11 = (struct Cyc_Splay_node *)_T1B;
	  }_T10->v = _T11;
	  goto _LL0;
	}
      }_TL0: { struct Cyc_Core_Invalid_argument_exn_struct * _T1B = _cycalloc(sizeof(struct Cyc_Core_Invalid_argument_exn_struct));
	_T1B->tag = Cyc_Core_Invalid_argument;
	_T1B->f1 = _tag_fat("Splay::rotate_left",sizeof(char),19U);
	_T17 = (struct Cyc_Core_Invalid_argument_exn_struct *)_T1B;
      }_T18 = (void *)_T17;
      _throw(_T18);
      _LL0: ;
    }
  }
}
static void Cyc_Splay_rotate_right(struct _RegionHandle * r,struct Cyc_Splay_noderef * nr) {
  struct Cyc_Splay_noderef * _T0;
  struct Cyc_Splay_node * _T1;
  int * _T2;
  int _T3;
  struct Cyc_Splay_noderef * _T4;
  struct _RegionHandle * _T5;
  struct Cyc_Splay_Node_Splay_tree_struct * _T6;
  struct Cyc_Splay_Node_Splay_tree_struct * _T7;
  struct Cyc_Splay_noderef * _T8;
  struct _RegionHandle * _T9;
  struct Cyc_Splay_node * _TA;
  struct _RegionHandle * _TB;
  struct Cyc_Splay_node * _TC;
  struct Cyc_Splay_node * _TD;
  struct Cyc_Splay_node * _TE;
  struct Cyc_Splay_node * _TF;
  struct Cyc_Splay_noderef * _T10;
  struct Cyc_Splay_node * _T11;
  struct _RegionHandle * _T12;
  struct Cyc_Splay_node * _T13;
  struct Cyc_Splay_node * _T14;
  struct Cyc_Splay_Node_Splay_tree_struct * _T15;
  struct Cyc_Splay_node * _T16;
  struct Cyc_Core_Invalid_argument_exn_struct * _T17;
  void * _T18;
  _T0 = nr;
  { struct Cyc_Splay_node * n = _T0->v;
    _T1 = n;
    { void * _T19 = _T1->right;
      struct Cyc_Splay_noderef * _T1A;
      _T2 = (int *)_T19;
      _T3 = *_T2;
      if (_T3 != 1) { goto _TL2;
      }
      { struct Cyc_Splay_Node_Splay_tree_struct * _T1B = (struct Cyc_Splay_Node_Splay_tree_struct *)_T19;
	_T1A = _T1B->f1;
      }{ struct Cyc_Splay_noderef * nr2 = _T1A;
	_T4 = nr2;
	{ struct Cyc_Splay_node * n2 = _T4->v;
	  struct Cyc_Splay_Node_Splay_tree_struct * t;
	  _T5 = r;
	  t = _region_malloc(_T5,0U,sizeof(struct Cyc_Splay_Node_Splay_tree_struct));
	  _T6 = t;
	  _T6->tag = 1;
	  _T7 = t;
	  _T9 = r;
	  { struct Cyc_Splay_noderef * _T1B = _region_malloc(_T9,0U,sizeof(struct Cyc_Splay_noderef));
	    _TB = r;
	    { struct Cyc_Splay_node * _T1C = _region_malloc(_TB,0U,sizeof(struct Cyc_Splay_node));
	      _TC = n;
	      _T1C->key = _TC->key;
	      _TD = n;
	      _T1C->data = _TD->data;
	      _TE = n;
	      _T1C->left = _TE->left;
	      _TF = n2;
	      _T1C->right = _TF->left;
	      _TA = (struct Cyc_Splay_node *)_T1C;
	    }_T1B->v = _TA;
	    _T8 = (struct Cyc_Splay_noderef *)_T1B;
	  }_T7->f1 = _T8;
	  _T10 = nr;
	  _T12 = r;
	  { struct Cyc_Splay_node * _T1B = _region_malloc(_T12,0U,sizeof(struct Cyc_Splay_node));
	    _T13 = n2;
	    _T1B->key = _T13->key;
	    _T14 = n2;
	    _T1B->data = _T14->data;
	    _T15 = t;
	    _T1B->left = (void *)_T15;
	    _T16 = n2;
	    _T1B->right = _T16->right;
	    _T11 = (struct Cyc_Splay_node *)_T1B;
	  }_T10->v = _T11;
	  goto _LL0;
	}
      }_TL2: { struct Cyc_Core_Invalid_argument_exn_struct * _T1B = _cycalloc(sizeof(struct Cyc_Core_Invalid_argument_exn_struct));
	_T1B->tag = Cyc_Core_Invalid_argument;
	_T1B->f1 = _tag_fat("Splay::rotate_right",sizeof(char),20U);
	_T17 = (struct Cyc_Core_Invalid_argument_exn_struct *)_T1B;
      }_T18 = (void *)_T17;
      _throw(_T18);
      _LL0: ;
    }
  }
}
 struct _tuple0 {
  enum Cyc_Splay_direction f0;
  struct Cyc_Splay_noderef * f1;
};
static void Cyc_Splay_lift(struct _RegionHandle * r,struct Cyc_List_List * dnl) {
  struct Cyc_List_List * _T0;
  struct Cyc_List_List * _T1;
  struct Cyc_List_List * _T2;
  void * _T3;
  struct _tuple0 * _T4;
  enum Cyc_Splay_direction _T5;
  struct Cyc_List_List * _T6;
  void * _T7;
  struct Cyc_List_List * _T8;
  struct Cyc_List_List * _T9;
  void * _TA;
  struct Cyc_List_List * _TB;
  struct Cyc_List_List * _TC;
  enum Cyc_Splay_direction _TD;
  enum Cyc_Splay_direction _TE;
  enum Cyc_Splay_direction _TF;
  _TL4: if (dnl != 0) { goto _TL5;
  }else { goto _TL6;
  }
  _TL5: _T0 = dnl;
  _T1 = _T0->tl;
  if (_T1 != 0) { goto _TL7;
  }
  _T2 = dnl;
  _T3 = _T2->hd;
  { struct _tuple0 * _T10 = (struct _tuple0 *)_T3;
    struct Cyc_Splay_noderef * _T11;
    _T4 = (struct _tuple0 *)_T10;
    _T5 = _T4->f0;
    if (_T5 != Cyc_Splay_LEFT) { goto _TL9;
    }
    { struct _tuple0 _T12 = *_T10;
      _T11 = _T12.f1;
    }{ struct Cyc_Splay_noderef * nr = _T11;
      Cyc_Splay_rotate_left(r,nr);
      goto _LL0;
    }_TL9: { struct _tuple0 _T12 = *_T10;
      _T11 = _T12.f1;
    }{ struct Cyc_Splay_noderef * nr = _T11;
      Cyc_Splay_rotate_right(r,nr);
      goto _LL0;
    }_LL0: ;
  }return;
  _TL7: _T6 = dnl;
  _T7 = _T6->hd;
  { struct _tuple0 * _T10 = (struct _tuple0 *)_T7;
    struct Cyc_Splay_noderef * _T11;
    enum Cyc_Splay_direction _T12;
    { struct _tuple0 _T13 = *_T10;
      _T12 = _T13.f0;
      _T11 = _T13.f1;
    }{ enum Cyc_Splay_direction parent_dir = _T12;
      struct Cyc_Splay_noderef * parent = _T11;
      _T8 = dnl;
      _T9 = _T8->tl;
      _TA = _T9->hd;
      { struct _tuple0 * _T13 = (struct _tuple0 *)_TA;
	struct Cyc_Splay_noderef * _T14;
	enum Cyc_Splay_direction _T15;
	{ struct _tuple0 _T16 = *_T13;
	  _T15 = _T16.f0;
	  _T14 = _T16.f1;
	}{ enum Cyc_Splay_direction grandparent_dir = _T15;
	  struct Cyc_Splay_noderef * grandparent = _T14;
	  _TB = dnl;
	  _TC = _TB->tl;
	  dnl = _TC->tl;
	  _TD = parent_dir;
	  if (_TD != Cyc_Splay_LEFT) { goto _TLB;
	  }
	  _TE = grandparent_dir;
	  if (_TE != Cyc_Splay_LEFT) { goto _TLD;
	  }
	  Cyc_Splay_rotate_left(r,grandparent);
	  Cyc_Splay_rotate_left(r,grandparent);
	  goto _LL10;
	  _TLD: Cyc_Splay_rotate_left(r,parent);
	  Cyc_Splay_rotate_right(r,grandparent);
	  goto _LL10;
	  _LL10: goto _LLB;
	  _TLB: _TF = grandparent_dir;
	  if (_TF != Cyc_Splay_LEFT) { goto _TLF;
	  }
	  Cyc_Splay_rotate_right(r,parent);
	  Cyc_Splay_rotate_left(r,grandparent);
	  goto _LL15;
	  _TLF: Cyc_Splay_rotate_right(r,grandparent);
	  Cyc_Splay_rotate_right(r,grandparent);
	  goto _LL15;
	  _LL15: goto _LLB;
	  _LLB: ;
	}
      }
    }
  }goto _TL4;
  _TL6: ;
}
long Cyc_Splay_rsplay(struct _RegionHandle * r,int (* reln)(void *,void *),
		      void * reln_first_arg,void * tree) {
  void * _T0;
  int * _T1;
  int _T2;
  void * _T3;
  struct Cyc_Splay_noderef * _T4;
  void * _T5;
  struct Cyc_Splay_node * _T6;
  void * _T7;
  struct Cyc_List_List * _T8;
  struct _RegionHandle * _T9;
  struct _tuple0 * _TA;
  struct _RegionHandle * _TB;
  struct Cyc_Splay_node * _TC;
  struct Cyc_List_List * _TD;
  struct _RegionHandle * _TE;
  struct _tuple0 * _TF;
  struct _RegionHandle * _T10;
  struct Cyc_Splay_node * _T11;
  struct _RegionHandle * _T12;
  struct Cyc_List_List * _T13;
  struct Cyc_List_List * _T14;
  struct _RegionHandle _T15 = _new_region(0U,"temp");
  struct _RegionHandle * temp = &_T15;
  _push_region(temp);
  { struct Cyc_List_List * path = 0;
    _TL11: if (1) { goto _TL12;
    }else { goto _TL13;
    }
    _TL12: { struct Cyc_Splay_noderef * _T16;
      _T0 = tree;
      _T1 = (int *)_T0;
      _T2 = *_T1;
      if (_T2 != 1) { goto _TL14;
      }
      _T3 = tree;
      { struct Cyc_Splay_Node_Splay_tree_struct * _T17 = (struct Cyc_Splay_Node_Splay_tree_struct *)_T3;
	_T16 = _T17->f1;
      }{ struct Cyc_Splay_noderef * nr = _T16;
	_T4 = nr;
	{ struct Cyc_Splay_node * n = _T4->v;
	  _T5 = reln_first_arg;
	  _T6 = n;
	  _T7 = _T6->key;
	  { int comp = reln(_T5,_T7);
	    if (comp != 0) { goto _TL16;
	    }
	    Cyc_Splay_lift(r,path);
	    { long _T17 = 1;
	      _npop_handler(0);
	      return _T17;
	    }_TL16: if (comp >= 0) { goto _TL18;
	    }
	    _T9 = temp;
	    { struct Cyc_List_List * _T17 = _region_malloc(_T9,0U,sizeof(struct Cyc_List_List));
	      _TB = temp;
	      { struct _tuple0 * _T18 = _region_malloc(_TB,0U,sizeof(struct _tuple0));
		_T18->f0 = 0U;
		_T18->f1 = nr;
		_TA = (struct _tuple0 *)_T18;
	      }_T17->hd = _TA;
	      _T17->tl = path;
	      _T8 = (struct Cyc_List_List *)_T17;
	    }path = _T8;
	    _TC = n;
	    tree = _TC->left;
	    goto _TL19;
	    _TL18: _TE = temp;
	    { struct Cyc_List_List * _T17 = _region_malloc(_TE,0U,sizeof(struct Cyc_List_List));
	      _T10 = temp;
	      { struct _tuple0 * _T18 = _region_malloc(_T10,0U,sizeof(struct _tuple0));
		_T18->f0 = 1U;
		_T18->f1 = nr;
		_TF = (struct _tuple0 *)_T18;
	      }_T17->hd = _TF;
	      _T17->tl = path;
	      _TD = (struct Cyc_List_List *)_T17;
	    }path = _TD;
	    _T11 = n;
	    tree = _T11->right;
	    _TL19: goto _LL0;
	  }
	}
      }_TL14: if (path == 0) { goto _TL1A;
      }
      _T12 = r;
      _T13 = path;
      _T14 = _T13->tl;
      Cyc_Splay_lift(_T12,_T14);
      goto _TL1B;
      _TL1A: _TL1B: { long _T17 = 0;
	_npop_handler(0);
	return _T17;
      }_LL0: ;
    }goto _TL11;
    _TL13: ;
  }_pop_region();
}
long Cyc_Splay_splay(int (* reln)(void *,void *),void * reln_first_arg,void * tree) {
  struct _RegionHandle * _T0;
  int (* _T1)(void *,void *);
  void * _T2;
  void * _T3;
  long _T4;
  _T0 = Cyc_Core_heap_region;
  _T1 = reln;
  _T2 = reln_first_arg;
  _T3 = tree;
  _T4 = Cyc_Splay_rsplay(_T0,_T1,_T2,_T3);
  return _T4;
}
