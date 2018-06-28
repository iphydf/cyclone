#include <cyc_include.h>
 struct Cyc_Core_Opt {
  void * v;
};
extern char Cyc_Core_Impossible[11U];
 struct Cyc_Core_Impossible_exn_struct {
  char * tag;
  struct _fat_ptr f1;
};
 struct Cyc_List_List {
  void * hd;
  struct Cyc_List_List * tl;
};
struct Cyc_SlowDict_Dict;
extern char Cyc_SlowDict_Present[8U];
 struct Cyc_SlowDict_Present_exn_struct {
  char * tag;
};
extern char Cyc_SlowDict_Absent[7U];
 struct Cyc_SlowDict_Absent_exn_struct {
  char * tag;
};
struct Cyc_Splay_node;
 struct Cyc_Splay_noderef {
  struct Cyc_Splay_node * v;
};
 struct Cyc_Splay_Leaf_Splay_tree_struct {
  int tag;
  int f1;
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
extern long Cyc_Splay_splay(int (*)(void *,void *),void *,void *);
char Cyc_SlowDict_Absent[7U] = "Absent";
char Cyc_SlowDict_Present[8U] = "Present";
struct Cyc_SlowDict_Absent_exn_struct Cyc_SlowDict_Absent_val = {Cyc_SlowDict_Absent};
struct Cyc_SlowDict_Present_exn_struct Cyc_SlowDict_Present_val = {Cyc_SlowDict_Present};
 struct Cyc_SlowDict_Dict {
  int (* reln)(void *,void *);
  void * tree;
};
struct Cyc_SlowDict_Dict * Cyc_SlowDict_empty(int (* comp)(void *,void *)) {
  struct Cyc_Splay_Leaf_Splay_tree_struct * _T0;
  struct Cyc_SlowDict_Dict * _T1;
  { struct Cyc_Splay_Leaf_Splay_tree_struct * _T2 = _cycalloc(sizeof(struct Cyc_Splay_Leaf_Splay_tree_struct));
    _T2->tag = 0;
    _T2->f1 = 0;
    _T0 = (struct Cyc_Splay_Leaf_Splay_tree_struct *)_T2;
  }{ void * t = (void *)_T0;
    { struct Cyc_SlowDict_Dict * _T2 = _cycalloc(sizeof(struct Cyc_SlowDict_Dict));
      _T2->reln = comp;
      _T2->tree = t;
      _T1 = (struct Cyc_SlowDict_Dict *)_T2;
    }return _T1;
  }
}
long Cyc_SlowDict_is_empty(struct Cyc_SlowDict_Dict * d) {
  struct Cyc_SlowDict_Dict * _T0;
  int * _T1;
  int _T2;
  _T0 = d;
  { void * _T3 = _T0->tree;
    _T1 = (int *)_T3;
    _T2 = *_T1;
    if (_T2 != 0) { goto _TL0;
    }
    return 1;
    _TL0: return 0;
    ;
  }
}
long Cyc_SlowDict_member(struct Cyc_SlowDict_Dict * d,void * key) {
  struct Cyc_SlowDict_Dict * _T0;
  int (* _T1)(void *,void *);
  void * _T2;
  struct Cyc_SlowDict_Dict * _T3;
  void * _T4;
  long _T5;
  _T0 = d;
  _T1 = _T0->reln;
  _T2 = key;
  _T3 = d;
  _T4 = _T3->tree;
  _T5 = Cyc_Splay_splay(_T1,_T2,_T4);
  return _T5;
}
struct Cyc_SlowDict_Dict * Cyc_SlowDict_insert(struct Cyc_SlowDict_Dict * d,
					       void * key,void * data) {
  struct Cyc_Splay_Leaf_Splay_tree_struct * _T0;
  struct Cyc_SlowDict_Dict * _T1;
  int (* _T2)(void *,void *);
  void * _T3;
  struct Cyc_SlowDict_Dict * _T4;
  void * _T5;
  long _T6;
  struct Cyc_SlowDict_Dict * _T7;
  int * _T8;
  int _T9;
  struct Cyc_Splay_noderef * _TA;
  struct Cyc_Splay_node * _TB;
  struct Cyc_Splay_noderef * _TC;
  struct Cyc_Splay_node * _TD;
  struct Cyc_SlowDict_Dict * _TE;
  int * _TF;
  int _T10;
  struct Cyc_Splay_noderef * _T11;
  struct Cyc_SlowDict_Dict * _T12;
  int (* _T13)(void *,void *);
  void * _T14;
  struct Cyc_Splay_node * _T15;
  void * _T16;
  int _T17;
  struct Cyc_Splay_node * _T18;
  struct Cyc_Splay_Node_Splay_tree_struct * _T19;
  struct Cyc_Splay_noderef * _T1A;
  struct Cyc_Splay_node * _T1B;
  struct Cyc_Splay_node * _T1C;
  struct Cyc_Splay_node * _T1D;
  struct Cyc_Splay_node * _T1E;
  struct Cyc_Splay_Node_Splay_tree_struct * _T1F;
  struct Cyc_Splay_noderef * _T20;
  struct Cyc_Splay_node * _T21;
  struct Cyc_Splay_node * _T22;
  struct Cyc_Splay_node * _T23;
  struct Cyc_Splay_node * _T24;
  struct Cyc_Splay_node * _T25;
  struct Cyc_SlowDict_Dict * _T26;
  struct Cyc_SlowDict_Dict * _T27;
  struct Cyc_Splay_Node_Splay_tree_struct * _T28;
  struct Cyc_Splay_noderef * _T29;
  struct Cyc_Splay_node * _T2A;
  { struct Cyc_Splay_Leaf_Splay_tree_struct * _T2B = _cycalloc(sizeof(struct Cyc_Splay_Leaf_Splay_tree_struct));
    _T2B->tag = 0;
    _T2B->f1 = 0;
    _T0 = (struct Cyc_Splay_Leaf_Splay_tree_struct *)_T2B;
  }{ void * leaf = (void *)_T0;
    void * newleft = leaf;
    void * newright = leaf;
    _T1 = d;
    _T2 = _T1->reln;
    _T3 = key;
    _T4 = d;
    _T5 = _T4->tree;
    _T6 = Cyc_Splay_splay(_T2,_T3,_T5);
    if (! _T6) { goto _TL2;
    }
    _T7 = d;
    { void * _T2B = _T7->tree;
      struct Cyc_Splay_noderef * _T2C;
      _T8 = (int *)_T2B;
      _T9 = *_T8;
      if (_T9 != 1) { goto _TL4;
      }
      { struct Cyc_Splay_Node_Splay_tree_struct * _T2D = (struct Cyc_Splay_Node_Splay_tree_struct *)_T2B;
	_T2C = _T2D->f1;
      }{ struct Cyc_Splay_noderef * n = _T2C;
	_TA = n;
	_TB = _TA->v;
	newleft = _TB->left;
	_TC = n;
	_TD = _TC->v;
	newright = _TD->right;
	goto _LL0;
      }_TL4: goto _LL0;
      _LL0: ;
    }goto _TL3;
    _TL2: _TE = d;
    { void * _T2B = _TE->tree;
      struct Cyc_Splay_noderef * _T2C;
      _TF = (int *)_T2B;
      _T10 = *_TF;
      if (_T10 != 1) { goto _TL6;
      }
      { struct Cyc_Splay_Node_Splay_tree_struct * _T2D = (struct Cyc_Splay_Node_Splay_tree_struct *)_T2B;
	_T2C = _T2D->f1;
      }{ struct Cyc_Splay_noderef * nr = _T2C;
	_T11 = nr;
	{ struct Cyc_Splay_node * n = _T11->v;
	  _T12 = d;
	  _T13 = _T12->reln;
	  _T14 = key;
	  _T15 = n;
	  _T16 = _T15->key;
	  _T17 = _T13(_T14,_T16);
	  if (_T17 >= 0) { goto _TL8;
	  }
	  _T18 = n;
	  newleft = _T18->left;
	  { struct Cyc_Splay_Node_Splay_tree_struct * _T2D = _cycalloc(sizeof(struct Cyc_Splay_Node_Splay_tree_struct));
	    _T2D->tag = 1;
	    { struct Cyc_Splay_noderef * _T2E = _cycalloc(sizeof(struct Cyc_Splay_noderef));
	      { struct Cyc_Splay_node * _T2F = _cycalloc(sizeof(struct Cyc_Splay_node));
		_T1C = n;
		_T2F->key = _T1C->key;
		_T1D = n;
		_T2F->data = _T1D->data;
		_T2F->left = leaf;
		_T1E = n;
		_T2F->right = _T1E->right;
		_T1B = (struct Cyc_Splay_node *)_T2F;
	      }_T2E->v = _T1B;
	      _T1A = (struct Cyc_Splay_noderef *)_T2E;
	    }_T2D->f1 = _T1A;
	    _T19 = (struct Cyc_Splay_Node_Splay_tree_struct *)_T2D;
	  }newright = (void *)_T19;
	  goto _TL9;
	  _TL8: { struct Cyc_Splay_Node_Splay_tree_struct * _T2D = _cycalloc(sizeof(struct Cyc_Splay_Node_Splay_tree_struct));
	    _T2D->tag = 1;
	    { struct Cyc_Splay_noderef * _T2E = _cycalloc(sizeof(struct Cyc_Splay_noderef));
	      { struct Cyc_Splay_node * _T2F = _cycalloc(sizeof(struct Cyc_Splay_node));
		_T22 = n;
		_T2F->key = _T22->key;
		_T23 = n;
		_T2F->data = _T23->data;
		_T24 = n;
		_T2F->left = _T24->left;
		_T2F->right = leaf;
		_T21 = (struct Cyc_Splay_node *)_T2F;
	      }_T2E->v = _T21;
	      _T20 = (struct Cyc_Splay_noderef *)_T2E;
	    }_T2D->f1 = _T20;
	    _T1F = (struct Cyc_Splay_Node_Splay_tree_struct *)_T2D;
	  }newleft = (void *)_T1F;
	  _T25 = n;
	  newright = _T25->right;
	  _TL9: goto _LL5;
	}
      }_TL6: goto _LL5;
      _LL5: ;
    }_TL3: { struct Cyc_SlowDict_Dict * _T2B = _cycalloc(sizeof(struct Cyc_SlowDict_Dict));
      _T27 = d;
      _T2B->reln = _T27->reln;
      { struct Cyc_Splay_Node_Splay_tree_struct * _T2C = _cycalloc(sizeof(struct Cyc_Splay_Node_Splay_tree_struct));
	_T2C->tag = 1;
	{ struct Cyc_Splay_noderef * _T2D = _cycalloc(sizeof(struct Cyc_Splay_noderef));
	  { struct Cyc_Splay_node * _T2E = _cycalloc(sizeof(struct Cyc_Splay_node));
	    _T2E->key = key;
	    _T2E->data = data;
	    _T2E->left = newleft;
	    _T2E->right = newright;
	    _T2A = (struct Cyc_Splay_node *)_T2E;
	  }_T2D->v = _T2A;
	  _T29 = (struct Cyc_Splay_noderef *)_T2D;
	}_T2C->f1 = _T29;
	_T28 = (struct Cyc_Splay_Node_Splay_tree_struct *)_T2C;
      }_T2B->tree = (void *)_T28;
      _T26 = (struct Cyc_SlowDict_Dict *)_T2B;
    }return _T26;
  }
}
struct Cyc_SlowDict_Dict * Cyc_SlowDict_insert_new(struct Cyc_SlowDict_Dict * d,
						   void * key,void * data) {
  struct Cyc_SlowDict_Dict * _T0;
  int (* _T1)(void *,void *);
  void * _T2;
  struct Cyc_SlowDict_Dict * _T3;
  void * _T4;
  long _T5;
  struct Cyc_SlowDict_Present_exn_struct * _T6;
  struct Cyc_SlowDict_Present_exn_struct * _T7;
  struct Cyc_SlowDict_Dict * _T8;
  _T0 = d;
  _T1 = _T0->reln;
  _T2 = key;
  _T3 = d;
  _T4 = _T3->tree;
  _T5 = Cyc_Splay_splay(_T1,_T2,_T4);
  if (! _T5) { goto _TLA;
  }
  _T6 = &Cyc_SlowDict_Present_val;
  _T7 = (struct Cyc_SlowDict_Present_exn_struct *)_T6;
  _throw(_T7);
  goto _TLB;
  _TLA: _TLB: _T8 = Cyc_SlowDict_insert(d,key,data);
  return _T8;
}
 struct _tuple0 {
  void * f0;
  void * f1;
};
struct Cyc_SlowDict_Dict * Cyc_SlowDict_inserts(struct Cyc_SlowDict_Dict * d,
						struct Cyc_List_List * kds) {
  struct Cyc_SlowDict_Dict * _T0;
  struct Cyc_List_List * _T1;
  void * _T2;
  struct _tuple0 * _T3;
  struct _tuple0 _T4;
  void * _T5;
  struct Cyc_List_List * _T6;
  void * _T7;
  struct _tuple0 * _T8;
  struct _tuple0 _T9;
  void * _TA;
  struct Cyc_List_List * _TB;
  struct Cyc_SlowDict_Dict * _TC;
  _TLF: if (kds != 0) { goto _TLD;
  }else { goto _TLE;
  }
  _TLD: _T0 = d;
  _T1 = kds;
  _T2 = _T1->hd;
  _T3 = (struct _tuple0 *)_T2;
  _T4 = *_T3;
  _T5 = _T4.f0;
  _T6 = kds;
  _T7 = _T6->hd;
  _T8 = (struct _tuple0 *)_T7;
  _T9 = *_T8;
  _TA = _T9.f1;
  d = Cyc_SlowDict_insert(_T0,_T5,_TA);
  _TB = kds;
  kds = _TB->tl;
  goto _TLF;
  _TLE: _TC = d;
  return _TC;
}
struct Cyc_SlowDict_Dict * Cyc_SlowDict_singleton(int (* comp)(void *,void *),
						  void * key,void * data) {
  struct Cyc_Splay_Leaf_Splay_tree_struct * _T0;
  struct Cyc_Splay_Leaf_Splay_tree_struct * _T1;
  struct Cyc_SlowDict_Dict * _T2;
  struct Cyc_Splay_Node_Splay_tree_struct * _T3;
  struct Cyc_Splay_noderef * _T4;
  struct Cyc_Splay_node * _T5;
  struct Cyc_Splay_Leaf_Splay_tree_struct * _T6;
  struct Cyc_Splay_Leaf_Splay_tree_struct * _T7;
  struct Cyc_Splay_Leaf_Splay_tree_struct * leaf;
  leaf = _cycalloc(sizeof(struct Cyc_Splay_Leaf_Splay_tree_struct));
  _T0 = leaf;
  _T0->tag = 0;
  _T1 = leaf;
  _T1->f1 = 0;
  { struct Cyc_SlowDict_Dict * _T8 = _cycalloc(sizeof(struct Cyc_SlowDict_Dict));
    _T8->reln = comp;
    { struct Cyc_Splay_Node_Splay_tree_struct * _T9 = _cycalloc(sizeof(struct Cyc_Splay_Node_Splay_tree_struct));
      _T9->tag = 1;
      { struct Cyc_Splay_noderef * _TA = _cycalloc(sizeof(struct Cyc_Splay_noderef));
	{ struct Cyc_Splay_node * _TB = _cycalloc(sizeof(struct Cyc_Splay_node));
	  _TB->key = key;
	  _TB->data = data;
	  _T6 = leaf;
	  _TB->left = (void *)_T6;
	  _T7 = leaf;
	  _TB->right = (void *)_T7;
	  _T5 = (struct Cyc_Splay_node *)_TB;
	}_TA->v = _T5;
	_T4 = (struct Cyc_Splay_noderef *)_TA;
      }_T9->f1 = _T4;
      _T3 = (struct Cyc_Splay_Node_Splay_tree_struct *)_T9;
    }_T8->tree = (void *)_T3;
    _T2 = (struct Cyc_SlowDict_Dict *)_T8;
  }return _T2;
}
void * Cyc_SlowDict_lookup(struct Cyc_SlowDict_Dict * d,void * key) {
  struct Cyc_SlowDict_Dict * _T0;
  int (* _T1)(void *,void *);
  void * _T2;
  struct Cyc_SlowDict_Dict * _T3;
  void * _T4;
  long _T5;
  struct Cyc_SlowDict_Dict * _T6;
  int * _T7;
  int _T8;
  struct Cyc_Splay_noderef * _T9;
  struct Cyc_Splay_node * _TA;
  void * _TB;
  struct Cyc_Core_Impossible_exn_struct * _TC;
  void * _TD;
  struct Cyc_SlowDict_Absent_exn_struct * _TE;
  struct Cyc_SlowDict_Absent_exn_struct * _TF;
  _T0 = d;
  _T1 = _T0->reln;
  _T2 = key;
  _T3 = d;
  _T4 = _T3->tree;
  _T5 = Cyc_Splay_splay(_T1,_T2,_T4);
  if (! _T5) { goto _TL10;
  }
  _T6 = d;
  { void * _T10 = _T6->tree;
    struct Cyc_Splay_noderef * _T11;
    _T7 = (int *)_T10;
    _T8 = *_T7;
    if (_T8 != 1) { goto _TL12;
    }
    { struct Cyc_Splay_Node_Splay_tree_struct * _T12 = (struct Cyc_Splay_Node_Splay_tree_struct *)_T10;
      _T11 = _T12->f1;
    }{ struct Cyc_Splay_noderef * nr = _T11;
      _T9 = nr;
      _TA = _T9->v;
      _TB = _TA->data;
      return _TB;
    }_TL12: { struct Cyc_Core_Impossible_exn_struct * _T12 = _cycalloc(sizeof(struct Cyc_Core_Impossible_exn_struct));
      _T12->tag = Cyc_Core_Impossible;
      _T12->f1 = _tag_fat("Dict::lookup",sizeof(char),13U);
      _TC = (struct Cyc_Core_Impossible_exn_struct *)_T12;
    }_TD = (void *)_TC;
    _throw(_TD);
    ;
  }goto _TL11;
  _TL10: _TL11: _TE = &Cyc_SlowDict_Absent_val;
  _TF = (struct Cyc_SlowDict_Absent_exn_struct *)_TE;
  _throw(_TF);
}
struct Cyc_Core_Opt * Cyc_SlowDict_lookup_opt(struct Cyc_SlowDict_Dict * d,
					      void * key) {
  struct Cyc_SlowDict_Dict * _T0;
  int (* _T1)(void *,void *);
  void * _T2;
  struct Cyc_SlowDict_Dict * _T3;
  void * _T4;
  long _T5;
  struct Cyc_SlowDict_Dict * _T6;
  int * _T7;
  int _T8;
  struct Cyc_Core_Opt * _T9;
  struct Cyc_Splay_noderef * _TA;
  struct Cyc_Splay_node * _TB;
  struct Cyc_Core_Impossible_exn_struct * _TC;
  void * _TD;
  _T0 = d;
  _T1 = _T0->reln;
  _T2 = key;
  _T3 = d;
  _T4 = _T3->tree;
  _T5 = Cyc_Splay_splay(_T1,_T2,_T4);
  if (! _T5) { goto _TL14;
  }
  _T6 = d;
  { void * _TE = _T6->tree;
    struct Cyc_Splay_noderef * _TF;
    _T7 = (int *)_TE;
    _T8 = *_T7;
    if (_T8 != 1) { goto _TL16;
    }
    { struct Cyc_Splay_Node_Splay_tree_struct * _T10 = (struct Cyc_Splay_Node_Splay_tree_struct *)_TE;
      _TF = _T10->f1;
    }{ struct Cyc_Splay_noderef * nr = _TF;
      { struct Cyc_Core_Opt * _T10 = _cycalloc(sizeof(struct Cyc_Core_Opt));
	_TA = nr;
	_TB = _TA->v;
	_T10->v = _TB->data;
	_T9 = (struct Cyc_Core_Opt *)_T10;
      }return _T9;
    }_TL16: { struct Cyc_Core_Impossible_exn_struct * _T10 = _cycalloc(sizeof(struct Cyc_Core_Impossible_exn_struct));
      _T10->tag = Cyc_Core_Impossible;
      _T10->f1 = _tag_fat("Dict::lookup",sizeof(char),13U);
      _TC = (struct Cyc_Core_Impossible_exn_struct *)_T10;
    }_TD = (void *)_TC;
    _throw(_TD);
    ;
  }goto _TL15;
  _TL14: _TL15: return 0;
}
static int Cyc_SlowDict_get_largest(void * x,void * y) {
  return 1;
}
struct Cyc_SlowDict_Dict * Cyc_SlowDict_delete(struct Cyc_SlowDict_Dict * d,
					       void * key) {
  struct Cyc_SlowDict_Dict * _T0;
  int (* _T1)(void *,void *);
  void * _T2;
  struct Cyc_SlowDict_Dict * _T3;
  void * _T4;
  long _T5;
  struct Cyc_SlowDict_Dict * _T6;
  int * _T7;
  int _T8;
  struct Cyc_Core_Impossible_exn_struct * _T9;
  void * _TA;
  struct Cyc_Splay_noderef * _TB;
  struct Cyc_Splay_node * _TC;
  int * _TD;
  int _TE;
  struct Cyc_SlowDict_Dict * _TF;
  struct Cyc_SlowDict_Dict * _T10;
  struct Cyc_Splay_node * _T11;
  struct Cyc_Splay_node * _T12;
  int * _T13;
  int _T14;
  struct Cyc_SlowDict_Dict * _T15;
  struct Cyc_SlowDict_Dict * _T16;
  struct Cyc_Splay_node * _T17;
  void * _T18;
  struct Cyc_Splay_node * _T19;
  void * _T1A;
  struct Cyc_Splay_noderef * _T1B;
  struct Cyc_SlowDict_Dict * _T1C;
  struct Cyc_SlowDict_Dict * _T1D;
  struct Cyc_Splay_Node_Splay_tree_struct * _T1E;
  struct Cyc_Splay_noderef * _T1F;
  struct Cyc_Splay_node * _T20;
  struct Cyc_Splay_node * _T21;
  struct Cyc_Splay_node * _T22;
  struct Cyc_Splay_node * _T23;
  struct Cyc_Splay_node * _T24;
  struct Cyc_SlowDict_Dict * _T25;
  _T0 = d;
  _T1 = _T0->reln;
  _T2 = key;
  _T3 = d;
  _T4 = _T3->tree;
  _T5 = Cyc_Splay_splay(_T1,_T2,_T4);
  if (! _T5) { goto _TL18;
  }
  _T6 = d;
  { void * _T26 = _T6->tree;
    struct Cyc_Splay_noderef * _T27;
    _T7 = (int *)_T26;
    _T8 = *_T7;
    if (_T8 != 0) { goto _TL1A;
    }
    { struct Cyc_Core_Impossible_exn_struct * _T28 = _cycalloc(sizeof(struct Cyc_Core_Impossible_exn_struct));
      _T28->tag = Cyc_Core_Impossible;
      _T28->f1 = _tag_fat("Dict::lookup",sizeof(char),13U);
      _T9 = (struct Cyc_Core_Impossible_exn_struct *)_T28;
    }_TA = (void *)_T9;
    _throw(_TA);
    goto _TL1B;
    _TL1A: { struct Cyc_Splay_Node_Splay_tree_struct * _T28 = (struct Cyc_Splay_Node_Splay_tree_struct *)_T26;
      _T27 = _T28->f1;
    }{ struct Cyc_Splay_noderef * nr = _T27;
      _TB = nr;
      { struct Cyc_Splay_node * n = _TB->v;
	_TC = n;
	{ void * _T28 = _TC->left;
	  struct Cyc_Splay_noderef * _T29;
	  _TD = (int *)_T28;
	  _TE = *_TD;
	  if (_TE != 0) { goto _TL1C;
	  }
	  { struct Cyc_SlowDict_Dict * _T2A = _cycalloc(sizeof(struct Cyc_SlowDict_Dict));
	    _T10 = d;
	    _T2A->reln = _T10->reln;
	    _T11 = n;
	    _T2A->tree = _T11->right;
	    _TF = (struct Cyc_SlowDict_Dict *)_T2A;
	  }return _TF;
	  _TL1C: { struct Cyc_Splay_Node_Splay_tree_struct * _T2A = (struct Cyc_Splay_Node_Splay_tree_struct *)_T28;
	    _T29 = _T2A->f1;
	  }{ struct Cyc_Splay_noderef * noderef_left = _T29;
	    _T12 = n;
	    { void * _T2A = _T12->right;
	      struct Cyc_Splay_noderef * _T2B;
	      _T13 = (int *)_T2A;
	      _T14 = *_T13;
	      if (_T14 != 0) { goto _TL1E;
	      }
	      { struct Cyc_SlowDict_Dict * _T2C = _cycalloc(sizeof(struct Cyc_SlowDict_Dict));
		_T16 = d;
		_T2C->reln = _T16->reln;
		_T17 = n;
		_T2C->tree = _T17->left;
		_T15 = (struct Cyc_SlowDict_Dict *)_T2C;
	      }return _T15;
	      _TL1E: { struct Cyc_Splay_Node_Splay_tree_struct * _T2C = (struct Cyc_Splay_Node_Splay_tree_struct *)_T2A;
		_T2B = _T2C->f1;
	      }{ struct Cyc_Splay_noderef * node_ref_right = _T2B;
		_T18 = key;
		_T19 = n;
		_T1A = _T19->left;
		Cyc_Splay_splay(Cyc_SlowDict_get_largest,_T18,_T1A);
		_T1B = noderef_left;
		{ struct Cyc_Splay_node * newtop = _T1B->v;
		  { struct Cyc_SlowDict_Dict * _T2C = _cycalloc(sizeof(struct Cyc_SlowDict_Dict));
		    _T1D = d;
		    _T2C->reln = _T1D->reln;
		    { struct Cyc_Splay_Node_Splay_tree_struct * _T2D = _cycalloc(sizeof(struct Cyc_Splay_Node_Splay_tree_struct));
		      _T2D->tag = 1;
		      { struct Cyc_Splay_noderef * _T2E = _cycalloc(sizeof(struct Cyc_Splay_noderef));
			{ struct Cyc_Splay_node * _T2F = _cycalloc(sizeof(struct Cyc_Splay_node));
			  _T21 = newtop;
			  _T2F->key = _T21->key;
			  _T22 = newtop;
			  _T2F->data = _T22->data;
			  _T23 = newtop;
			  _T2F->left = _T23->left;
			  _T24 = n;
			  _T2F->right = _T24->right;
			  _T20 = (struct Cyc_Splay_node *)_T2F;
			}_T2E->v = _T20;
			_T1F = (struct Cyc_Splay_noderef *)_T2E;
		      }_T2D->f1 = _T1F;
		      _T1E = (struct Cyc_Splay_Node_Splay_tree_struct *)_T2D;
		    }_T2C->tree = (void *)_T1E;
		    _T1C = (struct Cyc_SlowDict_Dict *)_T2C;
		  }return _T1C;
		}
	      };
	    }
	  };
	}
      }
    }_TL1B: ;
  }goto _TL19;
  _TL18: _T25 = d;
  return _T25;
  _TL19: ;
}
struct Cyc_SlowDict_Dict * Cyc_SlowDict_delete_present(struct Cyc_SlowDict_Dict * d,
						       void * key) {
  struct Cyc_SlowDict_Absent_exn_struct * _T0;
  struct Cyc_SlowDict_Absent_exn_struct * _T1;
  struct Cyc_SlowDict_Dict * _T2;
  struct Cyc_SlowDict_Dict * d2 = Cyc_SlowDict_delete(d,key);
  if (d != d2) { goto _TL20;
  }
  _T0 = &Cyc_SlowDict_Absent_val;
  _T1 = (struct Cyc_SlowDict_Absent_exn_struct *)_T0;
  _throw(_T1);
  goto _TL21;
  _TL20: _TL21: _T2 = d2;
  return _T2;
}
static void * Cyc_SlowDict_fold_tree(void * (* f)(void *,void *,void *),void * t,
				     void * accum) {
  void * _T0;
  int * _T1;
  int _T2;
  void * _T3;
  void * _T4;
  struct Cyc_Splay_noderef * _T5;
  struct Cyc_Splay_node * _T6;
  void * _T7;
  struct Cyc_Splay_node * _T8;
  void * _T9;
  void * (* _TA)(void *,void *,void *);
  struct Cyc_Splay_node * _TB;
  void * _TC;
  void * (* _TD)(void *,void *,void *);
  struct Cyc_Splay_node * _TE;
  void * _TF;
  void * _T10;
  void * _T11;
  void * _T12;
  void * _T13;
  struct Cyc_Splay_noderef * _T14;
  _T0 = t;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  if (_T2 != 0) { goto _TL22;
  }
  _T3 = accum;
  return _T3;
  _TL22: _T4 = t;
  { struct Cyc_Splay_Node_Splay_tree_struct * _T15 = (struct Cyc_Splay_Node_Splay_tree_struct *)_T4;
    _T14 = _T15->f1;
  }{ struct Cyc_Splay_noderef * nr = _T14;
    _T5 = nr;
    { struct Cyc_Splay_node * n = _T5->v;
      _T6 = n;
      _T7 = _T6->key;
      _T8 = n;
      _T9 = _T8->data;
      _TA = f;
      _TB = n;
      _TC = _TB->left;
      _TD = f;
      _TE = n;
      _TF = _TE->right;
      _T10 = accum;
      _T11 = Cyc_SlowDict_fold_tree(_TD,_TF,_T10);
      _T12 = Cyc_SlowDict_fold_tree(_TA,_TC,_T11);
      _T13 = f(_T7,_T9,_T12);
      return _T13;
    }
  };
}
void * Cyc_SlowDict_fold(void * (* f)(void *,void *,void *),struct Cyc_SlowDict_Dict * d,
			 void * accum) {
  void * (* _T0)(void *,void *,void *);
  struct Cyc_SlowDict_Dict * _T1;
  void * _T2;
  void * _T3;
  void * _T4;
  _T0 = f;
  _T1 = d;
  _T2 = _T1->tree;
  _T3 = accum;
  _T4 = Cyc_SlowDict_fold_tree(_T0,_T2,_T3);
  return _T4;
}
static void * Cyc_SlowDict_fold_tree_c(void * (* f)(void *,void *,void *,
						    void *),void * env,void * t,
				       void * accum) {
  void * _T0;
  int * _T1;
  int _T2;
  void * _T3;
  void * _T4;
  struct Cyc_Splay_noderef * _T5;
  void * _T6;
  struct Cyc_Splay_node * _T7;
  void * _T8;
  struct Cyc_Splay_node * _T9;
  void * _TA;
  void * (* _TB)(void *,void *,void *,void *);
  void * _TC;
  struct Cyc_Splay_node * _TD;
  void * _TE;
  void * (* _TF)(void *,void *,void *,void *);
  void * _T10;
  struct Cyc_Splay_node * _T11;
  void * _T12;
  void * _T13;
  void * _T14;
  void * _T15;
  void * _T16;
  struct Cyc_Splay_noderef * _T17;
  _T0 = t;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  if (_T2 != 0) { goto _TL24;
  }
  _T3 = accum;
  return _T3;
  _TL24: _T4 = t;
  { struct Cyc_Splay_Node_Splay_tree_struct * _T18 = (struct Cyc_Splay_Node_Splay_tree_struct *)_T4;
    _T17 = _T18->f1;
  }{ struct Cyc_Splay_noderef * nr = _T17;
    _T5 = nr;
    { struct Cyc_Splay_node * n = _T5->v;
      _T6 = env;
      _T7 = n;
      _T8 = _T7->key;
      _T9 = n;
      _TA = _T9->data;
      _TB = f;
      _TC = env;
      _TD = n;
      _TE = _TD->left;
      _TF = f;
      _T10 = env;
      _T11 = n;
      _T12 = _T11->right;
      _T13 = accum;
      _T14 = Cyc_SlowDict_fold_tree_c(_TF,_T10,_T12,_T13);
      _T15 = Cyc_SlowDict_fold_tree_c(_TB,_TC,_TE,_T14);
      _T16 = f(_T6,_T8,_TA,_T15);
      return _T16;
    }
  };
}
void * Cyc_SlowDict_fold_c(void * (* f)(void *,void *,void *,void *),void * env,
			   struct Cyc_SlowDict_Dict * dict,void * accum) {
  void * (* _T0)(void *,void *,void *,void *);
  void * _T1;
  struct Cyc_SlowDict_Dict * _T2;
  void * _T3;
  void * _T4;
  void * _T5;
  _T0 = f;
  _T1 = env;
  _T2 = dict;
  _T3 = _T2->tree;
  _T4 = accum;
  _T5 = Cyc_SlowDict_fold_tree_c(_T0,_T1,_T3,_T4);
  return _T5;
}
static void Cyc_SlowDict_app_tree(void * (* f)(void *,void *),void * t) {
  void * _T0;
  int * _T1;
  int _T2;
  void * _T3;
  struct Cyc_Splay_noderef * _T4;
  void * (* _T5)(void *,void *);
  struct Cyc_Splay_node * _T6;
  void * _T7;
  struct Cyc_Splay_node * _T8;
  void * _T9;
  struct Cyc_Splay_node * _TA;
  void * _TB;
  void * (* _TC)(void *,void *);
  struct Cyc_Splay_node * _TD;
  void * _TE;
  struct Cyc_Splay_noderef * _TF;
  _T0 = t;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  if (_T2 != 0) { goto _TL26;
  }
  goto _LL0;
  _TL26: _T3 = t;
  { struct Cyc_Splay_Node_Splay_tree_struct * _T10 = (struct Cyc_Splay_Node_Splay_tree_struct *)_T3;
    _TF = _T10->f1;
  }{ struct Cyc_Splay_noderef * nr = _TF;
    _T4 = nr;
    { struct Cyc_Splay_node * n = _T4->v;
      _T5 = f;
      _T6 = n;
      _T7 = _T6->left;
      Cyc_SlowDict_app_tree(_T5,_T7);
      _T8 = n;
      _T9 = _T8->key;
      _TA = n;
      _TB = _TA->data;
      f(_T9,_TB);
      _TC = f;
      _TD = n;
      _TE = _TD->right;
      Cyc_SlowDict_app_tree(_TC,_TE);
      goto _LL0;
    }
  }_LL0: ;
}
void Cyc_SlowDict_app(void * (* f)(void *,void *),struct Cyc_SlowDict_Dict * d) {
  void * (* _T0)(void *,void *);
  struct Cyc_SlowDict_Dict * _T1;
  void * _T2;
  _T0 = f;
  _T1 = d;
  _T2 = _T1->tree;
  Cyc_SlowDict_app_tree(_T0,_T2);
}
static void Cyc_SlowDict_iter_tree(void (* f)(void *,void *),void * t) {
  void * _T0;
  int * _T1;
  int _T2;
  void * _T3;
  struct Cyc_Splay_noderef * _T4;
  void (* _T5)(void *,void *);
  struct Cyc_Splay_node * _T6;
  void * _T7;
  struct Cyc_Splay_node * _T8;
  void * _T9;
  struct Cyc_Splay_node * _TA;
  void * _TB;
  void (* _TC)(void *,void *);
  struct Cyc_Splay_node * _TD;
  void * _TE;
  struct Cyc_Splay_noderef * _TF;
  _T0 = t;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  if (_T2 != 0) { goto _TL28;
  }
  goto _LL0;
  _TL28: _T3 = t;
  { struct Cyc_Splay_Node_Splay_tree_struct * _T10 = (struct Cyc_Splay_Node_Splay_tree_struct *)_T3;
    _TF = _T10->f1;
  }{ struct Cyc_Splay_noderef * nr = _TF;
    _T4 = nr;
    { struct Cyc_Splay_node * n = _T4->v;
      _T5 = f;
      _T6 = n;
      _T7 = _T6->left;
      Cyc_SlowDict_iter_tree(_T5,_T7);
      _T8 = n;
      _T9 = _T8->key;
      _TA = n;
      _TB = _TA->data;
      f(_T9,_TB);
      _TC = f;
      _TD = n;
      _TE = _TD->right;
      Cyc_SlowDict_iter_tree(_TC,_TE);
      goto _LL0;
    }
  }_LL0: ;
}
void Cyc_SlowDict_iter(void (* f)(void *,void *),struct Cyc_SlowDict_Dict * d) {
  void (* _T0)(void *,void *);
  struct Cyc_SlowDict_Dict * _T1;
  void * _T2;
  _T0 = f;
  _T1 = d;
  _T2 = _T1->tree;
  Cyc_SlowDict_iter_tree(_T0,_T2);
}
static void Cyc_SlowDict_app_tree_c(void * (* f)(void *,void *,void *),void * env,
				    void * t) {
  void * _T0;
  int * _T1;
  int _T2;
  void * _T3;
  struct Cyc_Splay_noderef * _T4;
  void * (* _T5)(void *,void *,void *);
  void * _T6;
  struct Cyc_Splay_node * _T7;
  void * _T8;
  void * _T9;
  struct Cyc_Splay_node * _TA;
  void * _TB;
  struct Cyc_Splay_node * _TC;
  void * _TD;
  void * (* _TE)(void *,void *,void *);
  void * _TF;
  struct Cyc_Splay_node * _T10;
  void * _T11;
  struct Cyc_Splay_noderef * _T12;
  _T0 = t;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  if (_T2 != 0) { goto _TL2A;
  }
  goto _LL0;
  _TL2A: _T3 = t;
  { struct Cyc_Splay_Node_Splay_tree_struct * _T13 = (struct Cyc_Splay_Node_Splay_tree_struct *)_T3;
    _T12 = _T13->f1;
  }{ struct Cyc_Splay_noderef * nr = _T12;
    _T4 = nr;
    { struct Cyc_Splay_node * n = _T4->v;
      _T5 = f;
      _T6 = env;
      _T7 = n;
      _T8 = _T7->left;
      Cyc_SlowDict_app_tree_c(_T5,_T6,_T8);
      _T9 = env;
      _TA = n;
      _TB = _TA->key;
      _TC = n;
      _TD = _TC->data;
      f(_T9,_TB,_TD);
      _TE = f;
      _TF = env;
      _T10 = n;
      _T11 = _T10->right;
      Cyc_SlowDict_app_tree_c(_TE,_TF,_T11);
      goto _LL0;
    }
  }_LL0: ;
}
void Cyc_SlowDict_app_c(void * (* f)(void *,void *,void *),void * env,struct Cyc_SlowDict_Dict * d) {
  void * (* _T0)(void *,void *,void *);
  void * _T1;
  struct Cyc_SlowDict_Dict * _T2;
  void * _T3;
  _T0 = f;
  _T1 = env;
  _T2 = d;
  _T3 = _T2->tree;
  Cyc_SlowDict_app_tree_c(_T0,_T1,_T3);
}
static void Cyc_SlowDict_iter_tree_c(void (* f)(void *,void *,void *),void * env,
				     void * t) {
  void * _T0;
  int * _T1;
  int _T2;
  void * _T3;
  struct Cyc_Splay_noderef * _T4;
  void (* _T5)(void *,void *,void *);
  void * _T6;
  struct Cyc_Splay_node * _T7;
  void * _T8;
  void * _T9;
  struct Cyc_Splay_node * _TA;
  void * _TB;
  struct Cyc_Splay_node * _TC;
  void * _TD;
  void (* _TE)(void *,void *,void *);
  void * _TF;
  struct Cyc_Splay_node * _T10;
  void * _T11;
  struct Cyc_Splay_noderef * _T12;
  _T0 = t;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  if (_T2 != 0) { goto _TL2C;
  }
  goto _LL0;
  _TL2C: _T3 = t;
  { struct Cyc_Splay_Node_Splay_tree_struct * _T13 = (struct Cyc_Splay_Node_Splay_tree_struct *)_T3;
    _T12 = _T13->f1;
  }{ struct Cyc_Splay_noderef * nr = _T12;
    _T4 = nr;
    { struct Cyc_Splay_node * n = _T4->v;
      _T5 = f;
      _T6 = env;
      _T7 = n;
      _T8 = _T7->left;
      Cyc_SlowDict_iter_tree_c(_T5,_T6,_T8);
      _T9 = env;
      _TA = n;
      _TB = _TA->key;
      _TC = n;
      _TD = _TC->data;
      f(_T9,_TB,_TD);
      _TE = f;
      _TF = env;
      _T10 = n;
      _T11 = _T10->right;
      Cyc_SlowDict_iter_tree_c(_TE,_TF,_T11);
      goto _LL0;
    }
  }_LL0: ;
}
void Cyc_SlowDict_iter_c(void (* f)(void *,void *,void *),void * env,struct Cyc_SlowDict_Dict * d) {
  void (* _T0)(void *,void *,void *);
  void * _T1;
  struct Cyc_SlowDict_Dict * _T2;
  void * _T3;
  _T0 = f;
  _T1 = env;
  _T2 = d;
  _T3 = _T2->tree;
  Cyc_SlowDict_iter_tree_c(_T0,_T1,_T3);
}
static void * Cyc_SlowDict_map_tree(void * (* f)(void *),void * t) {
  void * _T0;
  int * _T1;
  int _T2;
  struct Cyc_Splay_Leaf_Splay_tree_struct * _T3;
  void * _T4;
  void * _T5;
  struct Cyc_Splay_noderef * _T6;
  struct Cyc_Splay_Node_Splay_tree_struct * _T7;
  struct Cyc_Splay_noderef * _T8;
  struct Cyc_Splay_node * _T9;
  struct Cyc_Splay_node * _TA;
  struct Cyc_Splay_node * _TB;
  void * _TC;
  void * (* _TD)(void *);
  struct Cyc_Splay_node * _TE;
  void * _TF;
  void * (* _T10)(void *);
  struct Cyc_Splay_node * _T11;
  void * _T12;
  void * _T13;
  struct Cyc_Splay_noderef * _T14;
  _T0 = t;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  if (_T2 != 0) { goto _TL2E;
  }
  { struct Cyc_Splay_Leaf_Splay_tree_struct * _T15 = _cycalloc(sizeof(struct Cyc_Splay_Leaf_Splay_tree_struct));
    _T15->tag = 0;
    _T15->f1 = 0;
    _T3 = (struct Cyc_Splay_Leaf_Splay_tree_struct *)_T15;
  }_T4 = (void *)_T3;
  return _T4;
  _TL2E: _T5 = t;
  { struct Cyc_Splay_Node_Splay_tree_struct * _T15 = (struct Cyc_Splay_Node_Splay_tree_struct *)_T5;
    _T14 = _T15->f1;
  }{ struct Cyc_Splay_noderef * nr = _T14;
    _T6 = nr;
    { struct Cyc_Splay_node * n = _T6->v;
      { struct Cyc_Splay_Node_Splay_tree_struct * _T15 = _cycalloc(sizeof(struct Cyc_Splay_Node_Splay_tree_struct));
	_T15->tag = 1;
	{ struct Cyc_Splay_noderef * _T16 = _cycalloc(sizeof(struct Cyc_Splay_noderef));
	  { struct Cyc_Splay_node * _T17 = _cycalloc(sizeof(struct Cyc_Splay_node));
	    _TA = n;
	    _T17->key = _TA->key;
	    _TB = n;
	    _TC = _TB->data;
	    _T17->data = f(_TC);
	    _TD = f;
	    _TE = n;
	    _TF = _TE->left;
	    _T17->left = Cyc_SlowDict_map_tree(_TD,_TF);
	    _T10 = f;
	    _T11 = n;
	    _T12 = _T11->right;
	    _T17->right = Cyc_SlowDict_map_tree(_T10,_T12);
	    _T9 = (struct Cyc_Splay_node *)_T17;
	  }_T16->v = _T9;
	  _T8 = (struct Cyc_Splay_noderef *)_T16;
	}_T15->f1 = _T8;
	_T7 = (struct Cyc_Splay_Node_Splay_tree_struct *)_T15;
      }_T13 = (void *)_T7;
      return _T13;
    }
  };
}
struct Cyc_SlowDict_Dict * Cyc_SlowDict_map(void * (* f)(void *),struct Cyc_SlowDict_Dict * d) {
  struct Cyc_SlowDict_Dict * _T0;
  struct Cyc_SlowDict_Dict * _T1;
  void * (* _T2)(void *);
  struct Cyc_SlowDict_Dict * _T3;
  void * _T4;
  { struct Cyc_SlowDict_Dict * _T5 = _cycalloc(sizeof(struct Cyc_SlowDict_Dict));
    _T1 = d;
    _T5->reln = _T1->reln;
    _T2 = f;
    _T3 = d;
    _T4 = _T3->tree;
    _T5->tree = Cyc_SlowDict_map_tree(_T2,_T4);
    _T0 = (struct Cyc_SlowDict_Dict *)_T5;
  }return _T0;
}
static void * Cyc_SlowDict_map_tree_c(void * (* f)(void *,void *),void * env,
				      void * t) {
  void * _T0;
  int * _T1;
  int _T2;
  struct Cyc_Splay_Leaf_Splay_tree_struct * _T3;
  void * _T4;
  void * _T5;
  struct Cyc_Splay_noderef * _T6;
  struct Cyc_Splay_Node_Splay_tree_struct * _T7;
  struct Cyc_Splay_noderef * _T8;
  struct Cyc_Splay_node * _T9;
  struct Cyc_Splay_node * _TA;
  void * _TB;
  struct Cyc_Splay_node * _TC;
  void * _TD;
  void * (* _TE)(void *,void *);
  void * _TF;
  struct Cyc_Splay_node * _T10;
  void * _T11;
  void * (* _T12)(void *,void *);
  void * _T13;
  struct Cyc_Splay_node * _T14;
  void * _T15;
  void * _T16;
  struct Cyc_Splay_noderef * _T17;
  _T0 = t;
  _T1 = (int *)_T0;
  _T2 = *_T1;
  if (_T2 != 0) { goto _TL30;
  }
  { struct Cyc_Splay_Leaf_Splay_tree_struct * _T18 = _cycalloc(sizeof(struct Cyc_Splay_Leaf_Splay_tree_struct));
    _T18->tag = 0;
    _T18->f1 = 0;
    _T3 = (struct Cyc_Splay_Leaf_Splay_tree_struct *)_T18;
  }_T4 = (void *)_T3;
  return _T4;
  _TL30: _T5 = t;
  { struct Cyc_Splay_Node_Splay_tree_struct * _T18 = (struct Cyc_Splay_Node_Splay_tree_struct *)_T5;
    _T17 = _T18->f1;
  }{ struct Cyc_Splay_noderef * nr = _T17;
    _T6 = nr;
    { struct Cyc_Splay_node * n = _T6->v;
      { struct Cyc_Splay_Node_Splay_tree_struct * _T18 = _cycalloc(sizeof(struct Cyc_Splay_Node_Splay_tree_struct));
	_T18->tag = 1;
	{ struct Cyc_Splay_noderef * _T19 = _cycalloc(sizeof(struct Cyc_Splay_noderef));
	  { struct Cyc_Splay_node * _T1A = _cycalloc(sizeof(struct Cyc_Splay_node));
	    _TA = n;
	    _T1A->key = _TA->key;
	    _TB = env;
	    _TC = n;
	    _TD = _TC->data;
	    _T1A->data = f(_TB,_TD);
	    _TE = f;
	    _TF = env;
	    _T10 = n;
	    _T11 = _T10->left;
	    _T1A->left = Cyc_SlowDict_map_tree_c(_TE,_TF,_T11);
	    _T12 = f;
	    _T13 = env;
	    _T14 = n;
	    _T15 = _T14->right;
	    _T1A->right = Cyc_SlowDict_map_tree_c(_T12,_T13,_T15);
	    _T9 = (struct Cyc_Splay_node *)_T1A;
	  }_T19->v = _T9;
	  _T8 = (struct Cyc_Splay_noderef *)_T19;
	}_T18->f1 = _T8;
	_T7 = (struct Cyc_Splay_Node_Splay_tree_struct *)_T18;
      }_T16 = (void *)_T7;
      return _T16;
    }
  };
}
struct Cyc_SlowDict_Dict * Cyc_SlowDict_map_c(void * (* f)(void *,void *),
					      void * env,struct Cyc_SlowDict_Dict * d) {
  struct Cyc_SlowDict_Dict * _T0;
  struct Cyc_SlowDict_Dict * _T1;
  void * (* _T2)(void *,void *);
  void * _T3;
  struct Cyc_SlowDict_Dict * _T4;
  void * _T5;
  { struct Cyc_SlowDict_Dict * _T6 = _cycalloc(sizeof(struct Cyc_SlowDict_Dict));
    _T1 = d;
    _T6->reln = _T1->reln;
    _T2 = f;
    _T3 = env;
    _T4 = d;
    _T5 = _T4->tree;
    _T6->tree = Cyc_SlowDict_map_tree_c(_T2,_T3,_T5);
    _T0 = (struct Cyc_SlowDict_Dict *)_T6;
  }return _T0;
}
struct _tuple0 * Cyc_SlowDict_choose(struct Cyc_SlowDict_Dict * d) {
  struct Cyc_SlowDict_Dict * _T0;
  int * _T1;
  int _T2;
  struct Cyc_SlowDict_Absent_exn_struct * _T3;
  struct Cyc_SlowDict_Absent_exn_struct * _T4;
  struct _tuple0 * _T5;
  struct Cyc_Splay_noderef * _T6;
  struct Cyc_Splay_node * _T7;
  struct Cyc_Splay_noderef * _T8;
  struct Cyc_Splay_node * _T9;
  _T0 = d;
  { void * _TA = _T0->tree;
    struct Cyc_Splay_noderef * _TB;
    _T1 = (int *)_TA;
    _T2 = *_T1;
    if (_T2 != 0) { goto _TL32;
    }
    _T3 = &Cyc_SlowDict_Absent_val;
    _T4 = (struct Cyc_SlowDict_Absent_exn_struct *)_T3;
    _throw(_T4);
    goto _TL33;
    _TL32: { struct Cyc_Splay_Node_Splay_tree_struct * _TC = (struct Cyc_Splay_Node_Splay_tree_struct *)_TA;
      _TB = _TC->f1;
    }{ struct Cyc_Splay_noderef * nr = _TB;
      { struct _tuple0 * _TC = _cycalloc(sizeof(struct _tuple0));
	_T6 = nr;
	_T7 = _T6->v;
	_TC->f0 = _T7->key;
	_T8 = nr;
	_T9 = _T8->v;
	_TC->f1 = _T9->data;
	_T5 = (struct _tuple0 *)_TC;
      }return _T5;
    }_TL33: ;
  }
}
struct Cyc_List_List * Cyc_SlowDict_to_list_f(void * k,void * v,struct Cyc_List_List * accum) {
  struct Cyc_List_List * _T0;
  struct _tuple0 * _T1;
  { struct Cyc_List_List * _T2 = _cycalloc(sizeof(struct Cyc_List_List));
    { struct _tuple0 * _T3 = _cycalloc(sizeof(struct _tuple0));
      _T3->f0 = k;
      _T3->f1 = v;
      _T1 = (struct _tuple0 *)_T3;
    }_T2->hd = _T1;
    _T2->tl = accum;
    _T0 = (struct Cyc_List_List *)_T2;
  }return _T0;
}
struct Cyc_List_List * Cyc_SlowDict_to_list(struct Cyc_SlowDict_Dict * d) {
  struct Cyc_List_List * (* _T0)(struct Cyc_List_List * (*)(void *,void *,
							    struct Cyc_List_List *),
				 struct Cyc_SlowDict_Dict *,struct Cyc_List_List *);
  struct Cyc_SlowDict_Dict * _T1;
  struct Cyc_List_List * _T2;
  { struct Cyc_List_List * (* _T3)(struct Cyc_List_List * (*)(void *,void *,
							      struct Cyc_List_List *),
				   struct Cyc_SlowDict_Dict *,struct Cyc_List_List *) = (struct Cyc_List_List * (*)(struct Cyc_List_List * (*)(void *,
																	       void *,
																	       struct Cyc_List_List *),
														    struct Cyc_SlowDict_Dict *,
														    struct Cyc_List_List *))Cyc_SlowDict_fold;
    _T0 = _T3;
  }_T1 = d;
  _T2 = _T0(Cyc_SlowDict_to_list_f,_T1,0);
  return _T2;
}
