#include <cyc_include.h>
int Cyc_Core_intcmp(int,int);
struct Cyc___cycFILE;
extern int Cyc_fprintf(struct Cyc___cycFILE *,struct _fat_ptr,struct _fat_ptr);
 struct Cyc_List_List {
  void * hd;
  struct Cyc_List_List * tl;
};
extern int Cyc_List_length(struct Cyc_List_List *);
struct Cyc_Dict_T;
 struct Cyc_Dict_Dict {
  int (* rel)(void *,void *);
  struct _RegionHandle * r;
  const struct Cyc_Dict_T * t;
};
extern struct Cyc_Dict_Dict Cyc_Dict_empty(int (*)(void *,void *));
extern long Cyc_Dict_member(struct Cyc_Dict_Dict,void *);
extern struct Cyc_Dict_Dict Cyc_Dict_insert(struct Cyc_Dict_Dict,void *,void *);
extern void * Cyc_Dict_lookup(struct Cyc_Dict_Dict,void *);
extern void * * Cyc_Dict_lookup_opt(struct Cyc_Dict_Dict,void *);
extern struct Cyc_List_List * Cyc_Dict_to_list(struct Cyc_Dict_Dict);
extern struct Cyc_Dict_Dict Cyc_Dict_delete(struct Cyc_Dict_Dict,void *);
struct Cyc_Set_Set;
extern struct Cyc_Set_Set * Cyc_Set_empty(int (*)(void *,void *));
extern struct Cyc_Set_Set * Cyc_Set_insert(struct Cyc_Set_Set *,void *);
extern struct Cyc_Set_Set * Cyc_Set_union_two(struct Cyc_Set_Set *,struct Cyc_Set_Set *);
extern struct Cyc_Set_Set * Cyc_Set_diff(struct Cyc_Set_Set *,struct Cyc_Set_Set *);
extern struct Cyc_Set_Set * Cyc_Set_delete(struct Cyc_Set_Set *,void *);
extern long Cyc_Set_is_empty(struct Cyc_Set_Set *);
extern long Cyc_Set_member(struct Cyc_Set_Set *,void *);
extern void * Cyc_Set_choose(struct Cyc_Set_Set *);
struct Cyc_Dict_Dict Cyc_Graph_empty(int (* cmp)(void *,void *)) {
  int (* _T0)(void *,void *);
  struct Cyc_Dict_Dict _T1;
  _T0 = cmp;
  _T1 = Cyc_Dict_empty(_T0);
  return _T1;
}
struct Cyc_Set_Set * Cyc_Graph_get_targets(struct Cyc_Dict_Dict g,void * source) {
  struct Cyc_Set_Set * * (* _T0)(struct Cyc_Dict_Dict,void *);
  void * * (* _T1)(struct Cyc_Dict_Dict,void *);
  struct Cyc_Dict_Dict _T2;
  int (* _T3)(void *,void *);
  struct Cyc_Set_Set * _T4;
  struct Cyc_Set_Set * _T5;
  _T1 = Cyc_Dict_lookup_opt;
  { struct Cyc_Set_Set * * (* _T6)(struct Cyc_Dict_Dict,void *) = (struct Cyc_Set_Set * * (*)(struct Cyc_Dict_Dict,
											      void *))_T1;
    _T0 = _T6;
  }{ struct Cyc_Set_Set * * _T6 = _T0(g,source);
    struct Cyc_Set_Set * _T7;
    if (_T6 != 0) { goto _TL0;
    }
    _T2 = g;
    _T3 = _T2.rel;
    _T4 = Cyc_Set_empty(_T3);
    return _T4;
    _TL0: { struct Cyc_Set_Set * _T8 = *_T6;
      _T7 = _T8;
    }{ struct Cyc_Set_Set * targets = _T7;
      _T5 = targets;
      return _T5;
    };
  }
}
struct Cyc_Dict_Dict Cyc_Graph_add_node(struct Cyc_Dict_Dict g,void * source) {
  long _T0;
  struct Cyc_Dict_Dict _T1;
  struct Cyc_Dict_Dict (* _T2)(struct Cyc_Dict_Dict,void *,struct Cyc_Set_Set *);
  struct Cyc_Dict_Dict (* _T3)(struct Cyc_Dict_Dict,void *,void *);
  struct Cyc_Dict_Dict _T4;
  void * _T5;
  struct Cyc_Dict_Dict _T6;
  int (* _T7)(void *,void *);
  struct Cyc_Set_Set * _T8;
  struct Cyc_Dict_Dict _T9;
  _T0 = Cyc_Dict_member(g,source);
  if (! _T0) { goto _TL2;
  }
  _T1 = g;
  return _T1;
  _TL2: _T3 = Cyc_Dict_insert;
  { struct Cyc_Dict_Dict (* _TA)(struct Cyc_Dict_Dict,void *,struct Cyc_Set_Set *) = (struct Cyc_Dict_Dict (*)(struct Cyc_Dict_Dict,
													       void *,
													       struct Cyc_Set_Set *))_T3;
    _T2 = _TA;
  }_T4 = g;
  _T5 = source;
  _T6 = g;
  _T7 = _T6.rel;
  _T8 = Cyc_Set_empty(_T7);
  _T9 = _T2(_T4,_T5,_T8);
  return _T9;
}
struct Cyc_Dict_Dict Cyc_Graph_add_edge(struct Cyc_Dict_Dict g,void * source,
					void * target) {
  struct Cyc_Dict_Dict (* _T0)(struct Cyc_Dict_Dict,void *,struct Cyc_Set_Set *);
  struct Cyc_Dict_Dict (* _T1)(struct Cyc_Dict_Dict,void *,void *);
  struct Cyc_Dict_Dict _T2;
  void * _T3;
  struct Cyc_Set_Set * _T4;
  struct Cyc_Dict_Dict _T5;
  struct Cyc_Set_Set * sourceTargets = Cyc_Graph_get_targets(g,source);
  _T1 = Cyc_Dict_insert;
  { struct Cyc_Dict_Dict (* _T6)(struct Cyc_Dict_Dict,void *,struct Cyc_Set_Set *) = (struct Cyc_Dict_Dict (*)(struct Cyc_Dict_Dict,
													       void *,
													       struct Cyc_Set_Set *))_T1;
    _T0 = _T6;
  }_T2 = g;
  _T3 = source;
  _T4 = Cyc_Set_insert(sourceTargets,target);
  _T5 = _T0(_T2,_T3,_T4);
  return _T5;
}
struct Cyc_Dict_Dict Cyc_Graph_add_edges(struct Cyc_Dict_Dict g,void * source,
					 struct Cyc_Set_Set * targets) {
  struct Cyc_Dict_Dict (* _T0)(struct Cyc_Dict_Dict,void *,struct Cyc_Set_Set *);
  struct Cyc_Dict_Dict (* _T1)(struct Cyc_Dict_Dict,void *,void *);
  struct Cyc_Dict_Dict _T2;
  void * _T3;
  struct Cyc_Set_Set * _T4;
  struct Cyc_Dict_Dict _T5;
  struct Cyc_Set_Set * sourceTargets = Cyc_Graph_get_targets(g,source);
  _T1 = Cyc_Dict_insert;
  { struct Cyc_Dict_Dict (* _T6)(struct Cyc_Dict_Dict,void *,struct Cyc_Set_Set *) = (struct Cyc_Dict_Dict (*)(struct Cyc_Dict_Dict,
													       void *,
													       struct Cyc_Set_Set *))_T1;
    _T0 = _T6;
  }_T2 = g;
  _T3 = source;
  _T4 = Cyc_Set_union_two(sourceTargets,targets);
  _T5 = _T0(_T2,_T3,_T4);
  return _T5;
}
struct Cyc_Dict_Dict Cyc_Graph_remove_edge(struct Cyc_Dict_Dict g,void * source,
					   void * target) {
  struct Cyc_Dict_Dict (* _T0)(struct Cyc_Dict_Dict,void *,struct Cyc_Set_Set *);
  struct Cyc_Dict_Dict (* _T1)(struct Cyc_Dict_Dict,void *,void *);
  struct Cyc_Dict_Dict _T2;
  void * _T3;
  struct Cyc_Set_Set * _T4;
  struct Cyc_Dict_Dict _T5;
  struct Cyc_Set_Set * sourceTargets = Cyc_Graph_get_targets(g,source);
  _T1 = Cyc_Dict_insert;
  { struct Cyc_Dict_Dict (* _T6)(struct Cyc_Dict_Dict,void *,struct Cyc_Set_Set *) = (struct Cyc_Dict_Dict (*)(struct Cyc_Dict_Dict,
													       void *,
													       struct Cyc_Set_Set *))_T1;
    _T0 = _T6;
  }_T2 = g;
  _T3 = source;
  _T4 = Cyc_Set_delete(sourceTargets,target);
  _T5 = _T0(_T2,_T3,_T4);
  return _T5;
}
struct Cyc_Dict_Dict Cyc_Graph_remove_edges(struct Cyc_Dict_Dict g,void * source,
					    struct Cyc_Set_Set * targets) {
  struct Cyc_Dict_Dict (* _T0)(struct Cyc_Dict_Dict,void *,struct Cyc_Set_Set *);
  struct Cyc_Dict_Dict (* _T1)(struct Cyc_Dict_Dict,void *,void *);
  struct Cyc_Dict_Dict _T2;
  void * _T3;
  struct Cyc_Set_Set * _T4;
  struct Cyc_Dict_Dict _T5;
  struct Cyc_Set_Set * sourceTargets = Cyc_Graph_get_targets(g,source);
  _T1 = Cyc_Dict_insert;
  { struct Cyc_Dict_Dict (* _T6)(struct Cyc_Dict_Dict,void *,struct Cyc_Set_Set *) = (struct Cyc_Dict_Dict (*)(struct Cyc_Dict_Dict,
													       void *,
													       struct Cyc_Set_Set *))_T1;
    _T0 = _T6;
  }_T2 = g;
  _T3 = source;
  _T4 = Cyc_Set_diff(sourceTargets,targets);
  _T5 = _T0(_T2,_T3,_T4);
  return _T5;
}
static struct Cyc_List_List * Cyc_Graph_to_list(struct Cyc_Set_Set * ts) {
  long _T0;
  struct Cyc_List_List * _T1;
  struct Cyc_List_List * _T2;
  struct Cyc_List_List * result = 0;
  _TL4: _T0 = Cyc_Set_is_empty(ts);
  if (_T0) { goto _TL6;
  }else { goto _TL5;
  }
  _TL5: { void * z = Cyc_Set_choose(ts);
    ts = Cyc_Set_delete(ts,z);
    { struct Cyc_List_List * _T3 = _cycalloc(sizeof(struct Cyc_List_List));
      _T3->hd = z;
      _T3->tl = result;
      _T1 = (struct Cyc_List_List *)_T3;
    }result = _T1;
  }goto _TL4;
  _TL6: _T2 = result;
  return _T2;
}
int Cyc_Graph_is_edge(struct Cyc_Dict_Dict g,void * source,void * target) {
  struct Cyc_Set_Set * * (* _T0)(struct Cyc_Dict_Dict,void *);
  void * * (* _T1)(struct Cyc_Dict_Dict,void *);
  long _T2;
  _T1 = Cyc_Dict_lookup_opt;
  { struct Cyc_Set_Set * * (* _T3)(struct Cyc_Dict_Dict,void *) = (struct Cyc_Set_Set * * (*)(struct Cyc_Dict_Dict,
											      void *))_T1;
    _T0 = _T3;
  }{ struct Cyc_Set_Set * * _T3 = _T0(g,source);
    struct Cyc_Set_Set * _T4;
    if (_T3 != 0) { goto _TL7;
    }
    return 0;
    _TL7: { struct Cyc_Set_Set * _T5 = *_T3;
      _T4 = _T5;
    }{ struct Cyc_Set_Set * sourceTargets = _T4;
      _T2 = Cyc_Set_member(sourceTargets,target);
      return _T2;
    };
  }
}
 struct _tuple0 {
  void * f0;
  struct Cyc_Set_Set * f1;
};
void Cyc_Graph_print(struct Cyc___cycFILE * f,struct Cyc_Dict_Dict g,void (* nodeprint)(struct Cyc___cycFILE *,
											void *)) {
  struct Cyc___cycFILE * _T0;
  struct _fat_ptr _T1;
  struct _fat_ptr _T2;
  struct Cyc_List_List * _T3;
  unsigned int _T4;
  struct Cyc_List_List * _T5;
  void * _T6;
  void * _T7;
  struct Cyc_List_List * _T8;
  unsigned int _T9;
  struct Cyc_List_List * _TA;
  unsigned int _TB;
  struct Cyc___cycFILE * _TC;
  struct _fat_ptr _TD;
  struct _fat_ptr _TE;
  struct Cyc___cycFILE * _TF;
  struct Cyc_List_List * _T10;
  void * _T11;
  struct Cyc___cycFILE * _T12;
  struct _fat_ptr _T13;
  struct _fat_ptr _T14;
  struct Cyc_List_List * _T15;
  struct Cyc___cycFILE * _T16;
  struct _fat_ptr _T17;
  struct _fat_ptr _T18;
  struct Cyc_List_List * _T19;
  struct Cyc___cycFILE * _T1A;
  struct _fat_ptr _T1B;
  struct _fat_ptr _T1C;
  _T0 = f;
  _T1 = _tag_fat("digraph {\n",sizeof(char),11U);
  _T2 = _tag_fat(0U,sizeof(void *),0);
  Cyc_fprintf(_T0,_T1,_T2);
  { struct Cyc_List_List * edges = Cyc_Dict_to_list(g);
    _TLC: _T3 = edges;
    _T4 = (unsigned int)_T3;
    if (_T4) { goto _TLA;
    }else { goto _TLB;
    }
    _TLA: _T5 = edges;
    _T6 = _T5->hd;
    { struct _tuple0 * _T1D = (struct _tuple0 *)_T6;
      struct Cyc_Set_Set * _T1E;
      void * _T1F;
      { struct _tuple0 _T20 = *_T1D;
	_T7 = _T20.f0;
	_T1F = (void *)_T7;
	_T1E = _T20.f1;
      }{ void * s = _T1F;
	struct Cyc_Set_Set * ts = _T1E;
	struct Cyc_List_List * tslist = Cyc_Graph_to_list(ts);
	_T8 = tslist;
	_T9 = (unsigned int)_T8;
	if (! _T9) { goto _TLD;
	}
	_TL12: _TA = tslist;
	_TB = (unsigned int)_TA;
	if (_TB) { goto _TL10;
	}else { goto _TL11;
	}
	_TL10: nodeprint(f,s);
	_TC = f;
	_TD = _tag_fat(" -> ",sizeof(char),5U);
	_TE = _tag_fat(0U,sizeof(void *),0);
	Cyc_fprintf(_TC,_TD,_TE);
	_TF = f;
	_T10 = tslist;
	_T11 = _T10->hd;
	nodeprint(_TF,_T11);
	_T12 = f;
	_T13 = _tag_fat(";\n",sizeof(char),3U);
	_T14 = _tag_fat(0U,sizeof(void *),0);
	Cyc_fprintf(_T12,_T13,_T14);
	_T15 = tslist;
	tslist = _T15->tl;
	goto _TL12;
	_TL11: goto _TLE;
	_TLD: nodeprint(f,s);
	_T16 = f;
	_T17 = _tag_fat("; // no targets\n",sizeof(char),17U);
	_T18 = _tag_fat(0U,sizeof(void *),0);
	Cyc_fprintf(_T16,_T17,_T18);
	_TLE: ;
      }
    }_T19 = edges;
    edges = _T19->tl;
    goto _TLC;
    _TLB: _T1A = f;
    _T1B = _tag_fat("}\n",sizeof(char),3U);
    _T1C = _tag_fat(0U,sizeof(void *),0);
    Cyc_fprintf(_T1A,_T1B,_T1C);
  }
}
static struct Cyc_List_List * Cyc_Graph_sourcesOf(struct Cyc_Dict_Dict g,
						  void * node) {
  struct Cyc_List_List * _T0;
  unsigned int _T1;
  struct Cyc_List_List * _T2;
  void * _T3;
  void * _T4;
  long _T5;
  struct Cyc_List_List * _T6;
  struct Cyc_List_List * _T7;
  struct Cyc_List_List * _T8;
  struct Cyc_List_List * result = 0;
  { struct Cyc_List_List * edges = Cyc_Dict_to_list(g);
    _TL16: _T0 = edges;
    _T1 = (unsigned int)_T0;
    if (_T1) { goto _TL14;
    }else { goto _TL15;
    }
    _TL14: _T2 = edges;
    _T3 = _T2->hd;
    { struct _tuple0 * _T9 = (struct _tuple0 *)_T3;
      struct Cyc_Set_Set * _TA;
      void * _TB;
      { struct _tuple0 _TC = *_T9;
	_T4 = _TC.f0;
	_TB = (void *)_T4;
	_TA = _TC.f1;
      }{ void * s = _TB;
	struct Cyc_Set_Set * ts = _TA;
	_T5 = Cyc_Set_member(ts,node);
	if (! _T5) { goto _TL17;
	}
	{ struct Cyc_List_List * _TC = _cycalloc(sizeof(struct Cyc_List_List));
	  _TC->hd = s;
	  _TC->tl = result;
	  _T6 = (struct Cyc_List_List *)_TC;
	}result = _T6;
	goto _TL18;
	_TL17: _TL18: ;
      }
    }_T7 = edges;
    edges = _T7->tl;
    goto _TL16;
    _TL15: ;
  }_T8 = result;
  return _T8;
}
 struct _tuple1 {
  struct Cyc_Set_Set * f0;
  struct Cyc_Dict_Dict f1;
};
static struct _tuple1 Cyc_Graph_divideGraph(struct Cyc_Dict_Dict g,void * source) {
  struct Cyc_Set_Set * * (* _T0)(struct Cyc_Dict_Dict,void *);
  void * * (* _T1)(struct Cyc_Dict_Dict,void *);
  struct _tuple1 _T2;
  struct Cyc_Dict_Dict _T3;
  int (* _T4)(void *,void *);
  struct _tuple1 _T5;
  _T1 = Cyc_Dict_lookup_opt;
  { struct Cyc_Set_Set * * (* _T6)(struct Cyc_Dict_Dict,void *) = (struct Cyc_Set_Set * * (*)(struct Cyc_Dict_Dict,
											      void *))_T1;
    _T0 = _T6;
  }{ struct Cyc_Set_Set * * _T6 = _T0(g,source);
    struct Cyc_Set_Set * _T7;
    if (_T6 != 0) { goto _TL19;
    }
    { struct _tuple1 _T8;
      _T3 = g;
      _T4 = _T3.rel;
      _T8.f0 = Cyc_Set_empty(_T4);
      _T8.f1 = g;
      _T2 = _T8;
    }return _T2;
    _TL19: { struct Cyc_Set_Set * _T8 = *_T6;
      _T7 = _T8;
    }{ struct Cyc_Set_Set * sourceTargets = _T7;
      { struct _tuple1 _T8;
	_T8.f0 = sourceTargets;
	_T8.f1 = Cyc_Dict_delete(g,source);
	_T5 = _T8;
      }return _T5;
    };
  }
}
static struct Cyc_Dict_Dict Cyc_Graph_add_edgeTc(struct Cyc_Dict_Dict g,void * source,
						 void * target) {
  struct Cyc_Set_Set * _T0;
  void * _T1;
  struct Cyc_Dict_Dict (* _T2)(struct Cyc_Dict_Dict,void *,struct Cyc_Set_Set *);
  struct Cyc_Dict_Dict (* _T3)(struct Cyc_Dict_Dict,void *,void *);
  struct Cyc_List_List * _T4;
  unsigned int _T5;
  struct Cyc_Dict_Dict _T6;
  struct Cyc_List_List * _T7;
  void * _T8;
  struct Cyc_Set_Set * _T9;
  struct Cyc_List_List * _TA;
  struct Cyc_Dict_Dict _TB;
  struct Cyc_Set_Set * targetTargets = Cyc_Graph_get_targets(g,target);
  struct _tuple1 _TC = Cyc_Graph_divideGraph(g,source);
  struct Cyc_Dict_Dict _TD;
  struct Cyc_Set_Set * _TE;
  _TE = _TC.f0;
  _TD = _TC.f1;
  { struct Cyc_Set_Set * sourceTargets = _TE;
    struct Cyc_Dict_Dict graphWithoutSource = _TD;
    struct Cyc_List_List * sourceSources = Cyc_Graph_sourcesOf(graphWithoutSource,
							       source);
    _T0 = Cyc_Set_union_two(sourceTargets,targetTargets);
    _T1 = target;
    { struct Cyc_Set_Set * newSourceTargets = Cyc_Set_insert(_T0,_T1);
      _T3 = Cyc_Dict_insert;
      { struct Cyc_Dict_Dict (* _TF)(struct Cyc_Dict_Dict,void *,struct Cyc_Set_Set *) = (struct Cyc_Dict_Dict (*)(struct Cyc_Dict_Dict,
														   void *,
														   struct Cyc_Set_Set *))_T3;
	_T2 = _TF;
      }{ struct Cyc_Dict_Dict result = _T2(graphWithoutSource,source,newSourceTargets);
	{ struct Cyc_List_List * s = sourceSources;
	  _TL1E: _T4 = s;
	  _T5 = (unsigned int)_T4;
	  if (_T5) { goto _TL1C;
	  }else { goto _TL1D;
	  }
	  _TL1C: _T6 = result;
	  _T7 = s;
	  _T8 = _T7->hd;
	  _T9 = newSourceTargets;
	  result = Cyc_Graph_add_edges(_T6,_T8,_T9);
	  _TA = s;
	  s = _TA->tl;
	  goto _TL1E;
	  _TL1D: ;
	}_TB = result;
	return _TB;
      }
    }
  }
}
struct Cyc_Dict_Dict Cyc_Graph_tc_slow(struct Cyc_Dict_Dict g) {
  struct Cyc_Dict_Dict _T0;
  int (* _T1)(void *,void *);
  struct Cyc_List_List * _T2;
  unsigned int _T3;
  struct Cyc_List_List * _T4;
  void * _T5;
  void * _T6;
  struct Cyc_List_List * _T7;
  unsigned int _T8;
  struct Cyc_List_List * _T9;
  unsigned int _TA;
  struct Cyc_Dict_Dict _TB;
  void * _TC;
  struct Cyc_List_List * _TD;
  void * _TE;
  struct Cyc_List_List * _TF;
  struct Cyc_List_List * _T10;
  struct Cyc_Dict_Dict _T11;
  _T0 = g;
  _T1 = _T0.rel;
  { struct Cyc_Dict_Dict result = Cyc_Graph_empty(_T1);
    struct Cyc_List_List * edges = Cyc_Dict_to_list(g);
    _TL22: _T2 = edges;
    _T3 = (unsigned int)_T2;
    if (_T3) { goto _TL20;
    }else { goto _TL21;
    }
    _TL20: _T4 = edges;
    _T5 = _T4->hd;
    { struct _tuple0 * _T12 = (struct _tuple0 *)_T5;
      struct Cyc_Set_Set * _T13;
      void * _T14;
      { struct _tuple0 _T15 = *_T12;
	_T6 = _T15.f0;
	_T14 = (void *)_T6;
	_T13 = _T15.f1;
      }{ void * source = _T14;
	struct Cyc_Set_Set * targets = _T13;
	struct Cyc_List_List * tslist = Cyc_Graph_to_list(targets);
	_T7 = tslist;
	_T8 = (unsigned int)_T7;
	if (! _T8) { goto _TL23;
	}
	{ struct Cyc_List_List * t = tslist;
	  _TL28: _T9 = t;
	  _TA = (unsigned int)_T9;
	  if (_TA) { goto _TL26;
	  }else { goto _TL27;
	  }
	  _TL26: _TB = result;
	  _TC = source;
	  _TD = t;
	  _TE = _TD->hd;
	  result = Cyc_Graph_add_edgeTc(_TB,_TC,_TE);
	  _TF = t;
	  t = _TF->tl;
	  goto _TL28;
	  _TL27: ;
	}goto _TL24;
	_TL23: result = Cyc_Graph_add_node(result,source);
	_TL24: ;
      }
    }_T10 = edges;
    edges = _T10->tl;
    goto _TL22;
    _TL21: _T11 = result;
    return _T11;
  }
}
struct Cyc_Dict_Dict Cyc_Graph_tkernel(struct Cyc_Dict_Dict g) {
  struct Cyc_Dict_Dict _T0;
  int (* _T1)(void *,void *);
  int (* _T2)(void *,void *);
  struct Cyc_List_List * _T3;
  unsigned int _T4;
  struct Cyc_List_List * _T5;
  void * _T6;
  void * _T7;
  long _T8;
  int _T9;
  struct Cyc_List_List * _TA;
  struct Cyc_Dict_Dict _TB;
  _T0 = g;
  { int (* cmp)(void *,void *) = _T0.rel;
    _T1 = cmp;
    { struct Cyc_Dict_Dict closure = Cyc_Graph_empty(_T1);
      _T2 = cmp;
      { struct Cyc_Dict_Dict result = Cyc_Graph_empty(_T2);
	{ struct Cyc_List_List * edges = Cyc_Dict_to_list(g);
	  _TL2C: _T3 = edges;
	  _T4 = (unsigned int)_T3;
	  if (_T4) { goto _TL2A;
	  }else { goto _TL2B;
	  }
	  _TL2A: _T5 = edges;
	  _T6 = _T5->hd;
	  { struct _tuple0 * _TC = (struct _tuple0 *)_T6;
	    struct Cyc_Set_Set * _TD;
	    void * _TE;
	    { struct _tuple0 _TF = *_TC;
	      _T7 = _TF.f0;
	      _TE = (void *)_T7;
	      _TD = _TF.f1;
	    }{ void * source = _TE;
	      struct Cyc_Set_Set * targets = _TD;
	      _TL2D: _T8 = Cyc_Set_is_empty(targets);
	      if (_T8) { goto _TL2F;
	      }else { goto _TL2E;
	      }
	      _TL2E: { void * target = Cyc_Set_choose(targets);
		targets = Cyc_Set_delete(targets,target);
		_T9 = Cyc_Graph_is_edge(closure,source,target);
		if (! _T9) { goto _TL30;
		}
		goto _TL2D;
		_TL30: closure = Cyc_Graph_add_edgeTc(closure,source,target);
		result = Cyc_Graph_add_edge(result,source,target);
	      }goto _TL2D;
	      _TL2F: ;
	    }
	  }_TA = edges;
	  edges = _TA->tl;
	  goto _TL2C;
	  _TL2B: ;
	}_TB = result;
	return _TB;
      }
    }
  }
}
 struct Cyc_Graph_nodestate {
  void * root;
  int C;
  int visitindex;
};
 struct Cyc_Graph_componentstate {
  struct Cyc_Set_Set * Succ;
  struct Cyc_Set_Set * nodes;
};
 struct Cyc_Graph_tcstate {
  struct Cyc_Set_Set * visited;
  int visitindex;
  struct Cyc_Dict_Dict ns;
  struct Cyc_Dict_Dict cs;
  int Cindex;
  struct Cyc_List_List * nstack;
  struct Cyc_List_List * cstack;
};
static void Cyc_Graph_comp_tc(struct Cyc_Graph_tcstate * ts,struct Cyc_Dict_Dict g,
			      void * v) {
  struct Cyc_Dict_Dict _T0;
  struct Cyc_Graph_tcstate * _T1;
  struct Cyc_Graph_tcstate * _T2;
  struct Cyc_Set_Set * _T3;
  void * _T4;
  struct Cyc_Graph_nodestate * _T5;
  struct Cyc_Graph_nodestate * _T6;
  struct Cyc_Graph_nodestate * _T7;
  struct Cyc_Graph_tcstate * _T8;
  int _T9;
  struct Cyc_Graph_tcstate * _TA;
  struct Cyc_Dict_Dict (* _TB)(struct Cyc_Dict_Dict,void *,struct Cyc_Graph_nodestate *);
  struct Cyc_Dict_Dict (* _TC)(struct Cyc_Dict_Dict,void *,void *);
  struct Cyc_Graph_tcstate * _TD;
  struct Cyc_Dict_Dict _TE;
  void * _TF;
  struct Cyc_Graph_nodestate * _T10;
  struct Cyc_Graph_tcstate * _T11;
  struct Cyc_List_List * _T12;
  struct Cyc_Graph_tcstate * _T13;
  struct Cyc_Graph_tcstate * _T14;
  struct Cyc_List_List * _T15;
  long _T16;
  int _T17;
  struct Cyc_Graph_tcstate * _T18;
  struct Cyc_Set_Set * _T19;
  void * _T1A;
  long _T1B;
  struct Cyc_Graph_nodestate * (* _T1C)(struct Cyc_Dict_Dict,void *);
  void * (* _T1D)(struct Cyc_Dict_Dict,void *);
  struct Cyc_Graph_tcstate * _T1E;
  struct Cyc_Dict_Dict _T1F;
  void * _T20;
  int _T21;
  struct Cyc_Graph_nodestate * _T22;
  int _T23;
  struct Cyc_Graph_nodestate * _T24;
  int _T25;
  struct Cyc_Graph_nodestate * (* _T26)(struct Cyc_Dict_Dict,void *);
  void * (* _T27)(struct Cyc_Dict_Dict,void *);
  struct Cyc_Graph_tcstate * _T28;
  struct Cyc_Dict_Dict _T29;
  void * _T2A;
  struct Cyc_Graph_nodestate * _T2B;
  struct Cyc_Graph_nodestate * (* _T2C)(struct Cyc_Dict_Dict,void *);
  void * (* _T2D)(struct Cyc_Dict_Dict,void *);
  struct Cyc_Graph_tcstate * _T2E;
  struct Cyc_Dict_Dict _T2F;
  struct Cyc_Graph_nodestate * _T30;
  void * _T31;
  struct Cyc_Graph_nodestate * (* _T32)(struct Cyc_Dict_Dict,void *);
  void * (* _T33)(struct Cyc_Dict_Dict,void *);
  struct Cyc_Graph_tcstate * _T34;
  struct Cyc_Dict_Dict _T35;
  struct Cyc_Graph_nodestate * _T36;
  void * _T37;
  struct Cyc_Graph_nodestate * _T38;
  int _T39;
  struct Cyc_Graph_nodestate * _T3A;
  int _T3B;
  struct Cyc_Graph_nodestate * _T3C;
  struct Cyc_Graph_nodestate * _T3D;
  int _T3E;
  struct Cyc_Graph_tcstate * _T3F;
  struct Cyc_List_List * _T40;
  int _T41;
  struct Cyc_Graph_tcstate * _T42;
  struct Cyc_Graph_nodestate * _T43;
  void * _T44;
  void * _T45;
  int _T46;
  struct Cyc_Graph_tcstate * _T47;
  int _T48;
  struct Cyc_Graph_componentstate * _T49;
  struct Cyc_Set_Set * (* _T4A)(int (*)(int,int));
  struct Cyc_Set_Set * (* _T4B)(int (*)(void *,void *));
  int (* _T4C)(int,int);
  struct Cyc_Graph_componentstate * _T4D;
  int (* _T4E)(void *,void *);
  struct Cyc_Graph_tcstate * _T4F;
  struct Cyc_Dict_Dict (* _T50)(struct Cyc_Dict_Dict,int,struct Cyc_Graph_componentstate *);
  struct Cyc_Dict_Dict (* _T51)(struct Cyc_Dict_Dict,void *,void *);
  struct Cyc_Graph_tcstate * _T52;
  struct Cyc_Dict_Dict _T53;
  int _T54;
  struct Cyc_Graph_componentstate * _T55;
  struct Cyc_Graph_tcstate * _T56;
  void * _T57;
  int _T58;
  int _T59;
  struct Cyc_Graph_componentstate * _T5A;
  struct Cyc_Set_Set * (* _T5B)(struct Cyc_Set_Set *,int);
  struct Cyc_Set_Set * (* _T5C)(struct Cyc_Set_Set *,void *);
  struct Cyc_Graph_componentstate * _T5D;
  struct Cyc_Set_Set * _T5E;
  int _T5F;
  struct Cyc_Graph_tcstate * _T60;
  struct Cyc_List_List * _T61;
  struct Cyc_Graph_tcstate * _T62;
  struct Cyc_List_List * _T63;
  struct Cyc_List_List * _T64;
  void * _T65;
  struct Cyc_Graph_tcstate * _T66;
  struct Cyc_Graph_tcstate * _T67;
  struct Cyc_List_List * _T68;
  long (* _T69)(struct Cyc_Set_Set *,int);
  long (* _T6A)(struct Cyc_Set_Set *,void *);
  struct Cyc_Graph_componentstate * _T6B;
  struct Cyc_Set_Set * _T6C;
  int _T6D;
  long _T6E;
  struct Cyc_Set_Set * (* _T6F)(struct Cyc_Set_Set *,int);
  struct Cyc_Set_Set * (* _T70)(struct Cyc_Set_Set *,void *);
  struct Cyc_Graph_componentstate * _T71;
  struct Cyc_Set_Set * _T72;
  int _T73;
  struct Cyc_Set_Set * _T74;
  struct Cyc_Graph_componentstate * (* _T75)(struct Cyc_Dict_Dict,int);
  void * (* _T76)(struct Cyc_Dict_Dict,void *);
  struct Cyc_Graph_tcstate * _T77;
  struct Cyc_Dict_Dict _T78;
  int _T79;
  struct Cyc_Graph_componentstate * _T7A;
  struct Cyc_Set_Set * _T7B;
  struct Cyc_Graph_componentstate * _T7C;
  struct Cyc_Graph_tcstate * _T7D;
  struct Cyc_List_List * _T7E;
  unsigned int _T7F;
  struct Cyc_Graph_tcstate * _T80;
  struct Cyc_List_List * _T81;
  struct Cyc_Graph_tcstate * _T82;
  struct Cyc_Graph_tcstate * _T83;
  struct Cyc_List_List * _T84;
  struct Cyc_Graph_nodestate * (* _T85)(struct Cyc_Dict_Dict,void *);
  void * (* _T86)(struct Cyc_Dict_Dict,void *);
  struct Cyc_Graph_tcstate * _T87;
  struct Cyc_Dict_Dict _T88;
  void * _T89;
  struct Cyc_Graph_nodestate * _T8A;
  struct Cyc_Graph_componentstate * _T8B;
  struct Cyc_Graph_componentstate * _T8C;
  struct Cyc_Set_Set * _T8D;
  void * _T8E;
  int _T8F;
  _T0 = g;
  { int (* cmp)(void *,void *) = _T0.rel;
    _T1 = ts;
    _T2 = ts;
    _T3 = _T2->visited;
    _T4 = v;
    _T1->visited = Cyc_Set_insert(_T3,_T4);
    { struct Cyc_Graph_nodestate * nsv;
      nsv = _cycalloc(sizeof(struct Cyc_Graph_nodestate));
      _T5 = nsv;
      _T5->root = v;
      _T6 = nsv;
      _T6->C = 0;
      _T7 = nsv;
      _T8 = ts;
      _T9 = _T8->visitindex;
      _T8->visitindex = _T9 + 1;
      _T7->visitindex = _T9;
      _TA = ts;
      _TC = Cyc_Dict_insert;
      { struct Cyc_Dict_Dict (* _T90)(struct Cyc_Dict_Dict,void *,struct Cyc_Graph_nodestate *) = (struct Cyc_Dict_Dict (*)(struct Cyc_Dict_Dict,
															    void *,
															    struct Cyc_Graph_nodestate *))_TC;
	_TB = _T90;
      }_TD = ts;
      _TE = _TD->ns;
      _TF = v;
      _T10 = nsv;
      _TA->ns = _TB(_TE,_TF,_T10);
      _T11 = ts;
      { struct Cyc_List_List * _T90 = _cycalloc(sizeof(struct Cyc_List_List));
	_T90->hd = v;
	_T13 = ts;
	_T90->tl = _T13->nstack;
	_T12 = (struct Cyc_List_List *)_T90;
      }_T11->nstack = _T12;
      _T14 = ts;
      _T15 = _T14->cstack;
      { int hsaved = Cyc_List_length(_T15);
	struct Cyc_Set_Set * targets = Cyc_Graph_get_targets(g,v);
	_TL32: _T16 = Cyc_Set_is_empty(targets);
	if (_T16) { goto _TL34;
	}else { goto _TL33;
	}
	_TL33: { void * w = Cyc_Set_choose(targets);
	  targets = Cyc_Set_delete(targets,w);
	  _T17 = cmp(v,w);
	  if (_T17 != 0) { goto _TL35;
	  }
	  goto _TL32;
	  _TL35: { int is_forward_edge;
	    struct Cyc_Graph_nodestate * nsw;
	    _T18 = ts;
	    _T19 = _T18->visited;
	    _T1A = w;
	    _T1B = Cyc_Set_member(_T19,_T1A);
	    if (! _T1B) { goto _TL37;
	    }
	    _T1D = Cyc_Dict_lookup;
	    { struct Cyc_Graph_nodestate * (* _T90)(struct Cyc_Dict_Dict,
						    void *) = (struct Cyc_Graph_nodestate * (*)(struct Cyc_Dict_Dict,
												void *))_T1D;
	      _T1C = _T90;
	    }_T1E = ts;
	    _T1F = _T1E->ns;
	    _T20 = w;
	    nsw = _T1C(_T1F,_T20);
	    _T22 = nsw;
	    _T23 = _T22->visitindex;
	    _T24 = nsv;
	    _T25 = _T24->visitindex;
	    if (_T23 >= _T25) { goto _TL39;
	    }
	    _T21 = 0;
	    goto _TL3A;
	    _TL39: _T21 = 1;
	    _TL3A: is_forward_edge = _T21;
	    goto _TL38;
	    _TL37: is_forward_edge = 0;
	    Cyc_Graph_comp_tc(ts,g,w);
	    _T27 = Cyc_Dict_lookup;
	    { struct Cyc_Graph_nodestate * (* _T90)(struct Cyc_Dict_Dict,
						    void *) = (struct Cyc_Graph_nodestate * (*)(struct Cyc_Dict_Dict,
												void *))_T27;
	      _T26 = _T90;
	    }_T28 = ts;
	    _T29 = _T28->ns;
	    _T2A = w;
	    nsw = _T26(_T29,_T2A);
	    _TL38: _T2B = nsw;
	    { int Cw = _T2B->C;
	      if (Cw != 0) { goto _TL3B;
	      }
	      _T2D = Cyc_Dict_lookup;
	      { struct Cyc_Graph_nodestate * (* _T90)(struct Cyc_Dict_Dict,
						      void *) = (struct Cyc_Graph_nodestate * (*)(struct Cyc_Dict_Dict,
												  void *))_T2D;
		_T2C = _T90;
	      }_T2E = ts;
	      _T2F = _T2E->ns;
	      _T30 = nsv;
	      _T31 = _T30->root;
	      { struct Cyc_Graph_nodestate * nsrootv = _T2C(_T2F,_T31);
		_T33 = Cyc_Dict_lookup;
		{ struct Cyc_Graph_nodestate * (* _T90)(struct Cyc_Dict_Dict,
							void *) = (struct Cyc_Graph_nodestate * (*)(struct Cyc_Dict_Dict,
												    void *))_T33;
		  _T32 = _T90;
		}_T34 = ts;
		_T35 = _T34->ns;
		_T36 = nsw;
		_T37 = _T36->root;
		{ struct Cyc_Graph_nodestate * nsrootw = _T32(_T35,_T37);
		  _T38 = nsrootv;
		  _T39 = _T38->visitindex;
		  _T3A = nsrootw;
		  _T3B = _T3A->visitindex;
		  if (_T39 <= _T3B) { goto _TL3D;
		  }
		  _T3C = nsv;
		  _T3D = nsw;
		  _T3C->root = _T3D->root;
		  goto _TL3E;
		  _TL3D: _TL3E: ;
		}
	      }goto _TL3C;
	      _TL3B: _T3E = is_forward_edge;
	      if (_T3E) { goto _TL3F;
	      }else { goto _TL41;
	      }
	      _TL41: _T3F = ts;
	      { struct Cyc_List_List * _T90 = _cycalloc(sizeof(struct Cyc_List_List));
		_T41 = Cw;
		_T90->hd = (void *)_T41;
		_T42 = ts;
		_T90->tl = _T42->cstack;
		_T40 = (struct Cyc_List_List *)_T90;
	      }_T3F->cstack = _T40;
	      goto _TL40;
	      _TL3F: _TL40: _TL3C: ;
	    }
	  }
	}goto _TL32;
	_TL34: _T43 = nsv;
	_T44 = _T43->root;
	_T45 = v;
	_T46 = cmp(_T44,_T45);
	if (_T46 == 0) { goto _TL42;
	}
	return;
	_TL42: _T47 = ts;
	_T48 = _T47->Cindex;
	_T47->Cindex = _T48 + 1;
	{ int Cnew = _T48;
	  struct Cyc_Graph_componentstate * csCnew;
	  csCnew = _cycalloc(sizeof(struct Cyc_Graph_componentstate));
	  _T49 = csCnew;
	  _T4B = Cyc_Set_empty;
	  { struct Cyc_Set_Set * (* _T90)(int (*)(int,int)) = (struct Cyc_Set_Set * (*)(int (*)(int,
												int)))_T4B;
	    _T4A = _T90;
	  }_T4C = Cyc_Core_intcmp;
	  _T49->Succ = _T4A(_T4C);
	  _T4D = csCnew;
	  _T4E = cmp;
	  _T4D->nodes = Cyc_Set_empty(_T4E);
	  _T4F = ts;
	  _T51 = Cyc_Dict_insert;
	  { struct Cyc_Dict_Dict (* _T90)(struct Cyc_Dict_Dict,int,struct Cyc_Graph_componentstate *) = (struct Cyc_Dict_Dict (*)(struct Cyc_Dict_Dict,
																  int,
																  struct Cyc_Graph_componentstate *))_T51;
	    _T50 = _T90;
	  }_T52 = ts;
	  _T53 = _T52->cs;
	  _T54 = Cnew;
	  _T55 = csCnew;
	  _T4F->cs = _T50(_T53,_T54,_T55);
	  _T56 = ts;
	  { struct Cyc_List_List * _T90 = _T56->nstack;
	    void * _T91;
	    if (_T90 != 0) { goto _TL44;
	    }
	    goto _LL0;
	    _TL44: { struct Cyc_List_List _T92 = *_T90;
	      _T57 = _T92.hd;
	      _T91 = (void *)_T57;
	    }{ void * top = _T91;
	      _T58 = cmp(top,v);
	      if (_T58 != 0) { goto _TL48;
	      }else { goto _TL49;
	      }
	      _TL49: _T59 = Cyc_Graph_is_edge(g,v,v);
	      if (_T59) { goto _TL48;
	      }else { goto _TL46;
	      }
	      _TL48: _T5A = csCnew;
	      _T5C = Cyc_Set_insert;
	      { struct Cyc_Set_Set * (* _T92)(struct Cyc_Set_Set *,int) = (struct Cyc_Set_Set * (*)(struct Cyc_Set_Set *,
												    int))_T5C;
		_T5B = _T92;
	      }_T5D = csCnew;
	      _T5E = _T5D->Succ;
	      _T5F = Cnew;
	      _T5A->Succ = _T5B(_T5E,_T5F);
	      goto _TL47;
	      _TL46: _TL47: goto _LL0;
	    }_LL0: ;
	  }_T60 = ts;
	  _T61 = _T60->cstack;
	  { int hnow = Cyc_List_length(_T61);
	    _TL4D: if (hnow > hsaved) { goto _TL4B;
	    }else { goto _TL4C;
	    }
	    _TL4B: _T62 = ts;
	    _T63 = _T62->cstack;
	    _T64 = _check_null(_T63);
	    _T65 = _T64->hd;
	    { int X = (int)_T65;
	      _T66 = ts;
	      _T67 = ts;
	      _T68 = _T67->cstack;
	      _T66->cstack = _T68->tl;
	      _T6A = Cyc_Set_member;
	      { long (* _T90)(struct Cyc_Set_Set *,int) = (long (*)(struct Cyc_Set_Set *,
								    int))_T6A;
		_T69 = _T90;
	      }_T6B = csCnew;
	      _T6C = _T6B->Succ;
	      _T6D = X;
	      _T6E = _T69(_T6C,_T6D);
	      if (_T6E) { goto _TL4E;
	      }else { goto _TL50;
	      }
	      _TL50: _T70 = Cyc_Set_insert;
	      { struct Cyc_Set_Set * (* _T90)(struct Cyc_Set_Set *,int) = (struct Cyc_Set_Set * (*)(struct Cyc_Set_Set *,
												    int))_T70;
		_T6F = _T90;
	      }_T71 = csCnew;
	      _T72 = _T71->Succ;
	      _T73 = X;
	      { struct Cyc_Set_Set * s = _T6F(_T72,_T73);
		_T74 = s;
		_T76 = Cyc_Dict_lookup;
		{ struct Cyc_Graph_componentstate * (* _T90)(struct Cyc_Dict_Dict,
							     int) = (struct Cyc_Graph_componentstate * (*)(struct Cyc_Dict_Dict,
													   int))_T76;
		  _T75 = _T90;
		}_T77 = ts;
		_T78 = _T77->cs;
		_T79 = X;
		_T7A = _T75(_T78,_T79);
		_T7B = _T7A->Succ;
		s = Cyc_Set_union_two(_T74,_T7B);
		_T7C = csCnew;
		_T7C->Succ = s;
	      }goto _TL4F;
	      _TL4E: _TL4F: ;
	    }hnow = hnow + -1;
	    goto _TL4D;
	    _TL4C: ;
	  }_TL51: _T7D = ts;
	  _T7E = _T7D->nstack;
	  _T7F = (unsigned int)_T7E;
	  if (_T7F) { goto _TL52;
	  }else { goto _TL53;
	  }
	  _TL52: _T80 = ts;
	  _T81 = _T80->nstack;
	  { void * w = _T81->hd;
	    _T82 = ts;
	    _T83 = ts;
	    _T84 = _T83->nstack;
	    _T82->nstack = _T84->tl;
	    _T86 = Cyc_Dict_lookup;
	    { struct Cyc_Graph_nodestate * (* _T90)(struct Cyc_Dict_Dict,
						    void *) = (struct Cyc_Graph_nodestate * (*)(struct Cyc_Dict_Dict,
												void *))_T86;
	      _T85 = _T90;
	    }_T87 = ts;
	    _T88 = _T87->ns;
	    _T89 = w;
	    { struct Cyc_Graph_nodestate * nsw = _T85(_T88,_T89);
	      _T8A = nsw;
	      _T8A->C = Cnew;
	      _T8B = csCnew;
	      _T8C = csCnew;
	      _T8D = _T8C->nodes;
	      _T8E = w;
	      _T8B->nodes = Cyc_Set_insert(_T8D,_T8E);
	      _T8F = cmp(w,v);
	      if (_T8F != 0) { goto _TL54;
	      }
	      goto _TL53;
	      _TL54: ;
	    }
	  }goto _TL51;
	  _TL53: ;
	}
      }
    }
  }
}
struct Cyc_Dict_Dict Cyc_Graph_tc(struct Cyc_Dict_Dict g) {
  struct Cyc_Dict_Dict _T0;
  struct Cyc_Graph_tcstate * _T1;
  int (* _T2)(void *,void *);
  struct Cyc_Graph_tcstate * _T3;
  struct Cyc_Graph_tcstate * _T4;
  int (* _T5)(void *,void *);
  struct Cyc_Graph_tcstate * _T6;
  struct Cyc_Dict_Dict (* _T7)(int (*)(int,int));
  struct Cyc_Dict_Dict (* _T8)(int (*)(void *,void *));
  int (* _T9)(int,int);
  struct Cyc_Graph_tcstate * _TA;
  struct Cyc_Graph_tcstate * _TB;
  struct Cyc_Graph_tcstate * _TC;
  struct Cyc_List_List * _TD;
  unsigned int _TE;
  struct Cyc_List_List * _TF;
  void * _T10;
  void * _T11;
  struct Cyc_Graph_tcstate * _T12;
  struct Cyc_Set_Set * _T13;
  void * _T14;
  long _T15;
  struct Cyc_List_List * _T16;
  int (* _T17)(void *,void *);
  int _T18;
  struct Cyc_Graph_tcstate * _T19;
  int _T1A;
  struct Cyc_Graph_componentstate * (* _T1B)(struct Cyc_Dict_Dict,int);
  void * (* _T1C)(struct Cyc_Dict_Dict,void *);
  struct Cyc_Graph_tcstate * _T1D;
  struct Cyc_Dict_Dict _T1E;
  int _T1F;
  int (* _T20)(void *,void *);
  struct Cyc_Graph_componentstate * _T21;
  long _T22;
  int (* _T23)(struct Cyc_Set_Set *);
  void * (* _T24)(struct Cyc_Set_Set *);
  struct Cyc_Set_Set * (* _T25)(struct Cyc_Set_Set *,int);
  struct Cyc_Set_Set * (* _T26)(struct Cyc_Set_Set *,void *);
  struct Cyc_Set_Set * _T27;
  struct Cyc_Graph_componentstate * (* _T28)(struct Cyc_Dict_Dict,int);
  void * (* _T29)(struct Cyc_Dict_Dict,void *);
  struct Cyc_Graph_tcstate * _T2A;
  struct Cyc_Dict_Dict _T2B;
  int _T2C;
  struct Cyc_Graph_componentstate * _T2D;
  struct Cyc_Set_Set * _T2E;
  struct Cyc_Graph_componentstate * _T2F;
  long _T30;
  struct Cyc_Dict_Dict _T31;
  _T0 = g;
  { int (* cmp)(void *,void *) = _T0.rel;
    struct Cyc_Graph_tcstate * ts;
    ts = _cycalloc(sizeof(struct Cyc_Graph_tcstate));
    _T1 = ts;
    _T2 = cmp;
    _T1->visited = Cyc_Set_empty(_T2);
    _T3 = ts;
    _T3->visitindex = 1;
    _T4 = ts;
    _T5 = cmp;
    _T4->ns = Cyc_Dict_empty(_T5);
    _T6 = ts;
    _T8 = Cyc_Dict_empty;
    { struct Cyc_Dict_Dict (* _T32)(int (*)(int,int)) = (struct Cyc_Dict_Dict (*)(int (*)(int,
											  int)))_T8;
      _T7 = _T32;
    }_T9 = Cyc_Core_intcmp;
    _T6->cs = _T7(_T9);
    _TA = ts;
    _TA->Cindex = 1;
    _TB = ts;
    _TB->nstack = 0;
    _TC = ts;
    _TC->cstack = 0;
    { struct Cyc_List_List * edges = Cyc_Dict_to_list(g);
      _TL59: _TD = edges;
      _TE = (unsigned int)_TD;
      if (_TE) { goto _TL57;
      }else { goto _TL58;
      }
      _TL57: _TF = edges;
      _T10 = _TF->hd;
      { struct _tuple0 * _T32 = (struct _tuple0 *)_T10;
	struct Cyc_Set_Set * _T33;
	void * _T34;
	{ struct _tuple0 _T35 = *_T32;
	  _T11 = _T35.f0;
	  _T34 = (void *)_T11;
	  _T33 = _T35.f1;
	}{ void * source = _T34;
	  struct Cyc_Set_Set * targets = _T33;
	  _T12 = ts;
	  _T13 = _T12->visited;
	  _T14 = source;
	  _T15 = Cyc_Set_member(_T13,_T14);
	  if (_T15) { goto _TL5A;
	  }else { goto _TL5C;
	  }
	  _TL5C: Cyc_Graph_comp_tc(ts,g,source);
	  goto _TL5B;
	  _TL5A: _TL5B: ;
	}
      }_T16 = edges;
      edges = _T16->tl;
      goto _TL59;
      _TL58: ;
    }_T17 = cmp;
    { struct Cyc_Dict_Dict result = Cyc_Graph_empty(_T17);
      { int C = 1;
	_TL60: _T18 = C;
	_T19 = ts;
	_T1A = _T19->Cindex;
	if (_T18 < _T1A) { goto _TL5E;
	}else { goto _TL5F;
	}
	_TL5E: _T1C = Cyc_Dict_lookup;
	{ struct Cyc_Graph_componentstate * (* _T32)(struct Cyc_Dict_Dict,
						     int) = (struct Cyc_Graph_componentstate * (*)(struct Cyc_Dict_Dict,
												   int))_T1C;
	  _T1B = _T32;
	}_T1D = ts;
	_T1E = _T1D->cs;
	_T1F = C;
	{ struct Cyc_Graph_componentstate * cs = _T1B(_T1E,_T1F);
	  _T20 = cmp;
	  { struct Cyc_Set_Set * targets = Cyc_Set_empty(_T20);
	    _T21 = cs;
	    { struct Cyc_Set_Set * Succ = _T21->Succ;
	      _TL61: _T22 = Cyc_Set_is_empty(Succ);
	      if (_T22) { goto _TL63;
	      }else { goto _TL62;
	      }
	      _TL62: _T24 = Cyc_Set_choose;
	      { int (* _T32)(struct Cyc_Set_Set *) = (int (*)(struct Cyc_Set_Set *))_T24;
		_T23 = _T32;
	      }{ int C2 = _T23(Succ);
		_T26 = Cyc_Set_delete;
		{ struct Cyc_Set_Set * (* _T32)(struct Cyc_Set_Set *,int) = (struct Cyc_Set_Set * (*)(struct Cyc_Set_Set *,
												      int))_T26;
		  _T25 = _T32;
		}Succ = _T25(Succ,C2);
		_T27 = targets;
		_T29 = Cyc_Dict_lookup;
		{ struct Cyc_Graph_componentstate * (* _T32)(struct Cyc_Dict_Dict,
							     int) = (struct Cyc_Graph_componentstate * (*)(struct Cyc_Dict_Dict,
													   int))_T29;
		  _T28 = _T32;
		}_T2A = ts;
		_T2B = _T2A->cs;
		_T2C = C2;
		_T2D = _T28(_T2B,_T2C);
		_T2E = _T2D->nodes;
		targets = Cyc_Set_union_two(_T27,_T2E);
	      }goto _TL61;
	      _TL63: _T2F = cs;
	      { struct Cyc_Set_Set * nodes = _T2F->nodes;
		_TL64: _T30 = Cyc_Set_is_empty(nodes);
		if (_T30) { goto _TL66;
		}else { goto _TL65;
		}
		_TL65: { void * v = Cyc_Set_choose(nodes);
		  nodes = Cyc_Set_delete(nodes,v);
		  result = Cyc_Graph_add_edges(result,v,targets);
		}goto _TL64;
		_TL66: ;
	      }
	    }
	  }
	}C = C + 1;
	goto _TL60;
	_TL5F: ;
      }_T31 = result;
      return _T31;
    }
  }
}
static void Cyc_Graph_traverse(struct Cyc_Dict_Dict input,struct Cyc_Dict_Dict * output,
			       struct Cyc_Dict_Dict * N,struct Cyc_List_List * * S,
			       void * x,unsigned int k) {
  struct Cyc_List_List * * _T0;
  struct Cyc_List_List * _T1;
  struct Cyc_List_List * * _T2;
  struct Cyc_Dict_Dict * _T3;
  struct Cyc_Dict_Dict (* _T4)(struct Cyc_Dict_Dict,void *,unsigned int);
  struct Cyc_Dict_Dict (* _T5)(struct Cyc_Dict_Dict,void *,void *);
  struct Cyc_Dict_Dict * _T6;
  struct Cyc_Dict_Dict _T7;
  void * _T8;
  unsigned int _T9;
  long _TA;
  unsigned int (* _TB)(struct Cyc_Dict_Dict,void *);
  void * (* _TC)(struct Cyc_Dict_Dict,void *);
  struct Cyc_Dict_Dict * _TD;
  struct Cyc_Dict_Dict _TE;
  void * _TF;
  unsigned int _T10;
  struct Cyc_Dict_Dict _T11;
  struct Cyc_Dict_Dict * _T12;
  struct Cyc_Dict_Dict * _T13;
  struct Cyc_List_List * * _T14;
  void * _T15;
  unsigned int _T16;
  unsigned int (* _T17)(struct Cyc_Dict_Dict,void *);
  void * (* _T18)(struct Cyc_Dict_Dict,void *);
  struct Cyc_Dict_Dict * _T19;
  struct Cyc_Dict_Dict _T1A;
  void * _T1B;
  unsigned int _T1C;
  unsigned int (* _T1D)(struct Cyc_Dict_Dict,void *);
  void * (* _T1E)(struct Cyc_Dict_Dict,void *);
  struct Cyc_Dict_Dict * _T1F;
  struct Cyc_Dict_Dict _T20;
  void * _T21;
  unsigned int _T22;
  struct Cyc_Dict_Dict * _T23;
  struct Cyc_Dict_Dict (* _T24)(struct Cyc_Dict_Dict,void *,unsigned int);
  struct Cyc_Dict_Dict (* _T25)(struct Cyc_Dict_Dict,void *,void *);
  struct Cyc_Dict_Dict * _T26;
  struct Cyc_Dict_Dict _T27;
  void * _T28;
  unsigned int _T29;
  unsigned int (* _T2A)(struct Cyc_Dict_Dict,void *);
  void * (* _T2B)(struct Cyc_Dict_Dict,void *);
  struct Cyc_Dict_Dict * _T2C;
  struct Cyc_Dict_Dict _T2D;
  void * _T2E;
  unsigned int _T2F;
  unsigned int _T30;
  struct Cyc_Dict_Dict * _T31;
  struct Cyc_Dict_Dict _T32;
  int (* _T33)(void *,void *);
  struct Cyc_List_List * * _T34;
  struct Cyc_List_List * _T35;
  unsigned int _T36;
  struct Cyc_List_List * _T37;
  int _T38;
  struct Cyc_List_List * _T39;
  struct Cyc_List_List * * _T3A;
  struct Cyc_List_List * _T3B;
  unsigned int _T3C;
  struct Cyc_List_List * * _T3D;
  struct Cyc_List_List * _T3E;
  struct Cyc_Dict_Dict * _T3F;
  struct Cyc_Dict_Dict (* _T40)(struct Cyc_Dict_Dict,void *,unsigned int);
  struct Cyc_Dict_Dict (* _T41)(struct Cyc_Dict_Dict,void *,void *);
  struct Cyc_Dict_Dict * _T42;
  struct Cyc_Dict_Dict _T43;
  void * _T44;
  struct Cyc_Dict_Dict * _T45;
  struct Cyc_Dict_Dict * _T46;
  struct Cyc_Dict_Dict _T47;
  void * _T48;
  struct Cyc_Dict_Dict * _T49;
  struct Cyc_Dict_Dict * _T4A;
  struct Cyc_Dict_Dict _T4B;
  void * _T4C;
  struct Cyc_Set_Set * _T4D;
  int _T4E;
  struct Cyc_List_List * * _T4F;
  struct Cyc_List_List * * _T50;
  struct Cyc_List_List * _T51;
  struct Cyc_List_List * _T52;
  struct Cyc_List_List * * _T53;
  struct Cyc_List_List * * _T54;
  struct Cyc_List_List * _T55;
  struct Cyc_List_List * _T56;
  _T0 = S;
  { struct Cyc_List_List * _T57 = _cycalloc(sizeof(struct Cyc_List_List));
    _T57->hd = x;
    _T2 = S;
    _T57->tl = *_T2;
    _T1 = (struct Cyc_List_List *)_T57;
  }*_T0 = _T1;
  _T3 = N;
  _T5 = Cyc_Dict_insert;
  { struct Cyc_Dict_Dict (* _T57)(struct Cyc_Dict_Dict,void *,unsigned int) = (struct Cyc_Dict_Dict (*)(struct Cyc_Dict_Dict,
													void *,
													unsigned int))_T5;
    _T4 = _T57;
  }_T6 = N;
  _T7 = *_T6;
  _T8 = x;
  _T9 = k;
  *_T3 = _T4(_T7,_T8,_T9);
  { struct Cyc_Set_Set * targets = Cyc_Graph_get_targets(input,x);
    _TL6A: _TA = Cyc_Set_is_empty(targets);
    if (_TA) { goto _TL69;
    }else { goto _TL68;
    }
    _TL68: { void * y = Cyc_Set_choose(targets);
      targets = Cyc_Set_delete(targets,y);
      _TC = Cyc_Dict_lookup;
      { unsigned int (* _T57)(struct Cyc_Dict_Dict,void *) = (unsigned int (*)(struct Cyc_Dict_Dict,
									       void *))_TC;
	_TB = _T57;
      }_TD = N;
      _TE = *_TD;
      _TF = y;
      _T10 = _TB(_TE,_TF);
      if (_T10 != 0U) { goto _TL6B;
      }
      _T11 = input;
      _T12 = output;
      _T13 = N;
      _T14 = S;
      _T15 = y;
      _T16 = k + 1U;
      Cyc_Graph_traverse(_T11,_T12,_T13,_T14,_T15,_T16);
      goto _TL6C;
      _TL6B: _TL6C: _T18 = Cyc_Dict_lookup;
      { unsigned int (* _T57)(struct Cyc_Dict_Dict,void *) = (unsigned int (*)(struct Cyc_Dict_Dict,
									       void *))_T18;
	_T17 = _T57;
      }_T19 = N;
      _T1A = *_T19;
      _T1B = y;
      { unsigned int Ny = _T17(_T1A,_T1B);
	_T1C = Ny;
	_T1E = Cyc_Dict_lookup;
	{ unsigned int (* _T57)(struct Cyc_Dict_Dict,void *) = (unsigned int (*)(struct Cyc_Dict_Dict,
										 void *))_T1E;
	  _T1D = _T57;
	}_T1F = N;
	_T20 = *_T1F;
	_T21 = x;
	_T22 = _T1D(_T20,_T21);
	if (_T1C >= _T22) { goto _TL6D;
	}
	_T23 = N;
	_T25 = Cyc_Dict_insert;
	{ struct Cyc_Dict_Dict (* _T57)(struct Cyc_Dict_Dict,void *,unsigned int) = (struct Cyc_Dict_Dict (*)(struct Cyc_Dict_Dict,
													      void *,
													      unsigned int))_T25;
	  _T24 = _T57;
	}_T26 = N;
	_T27 = *_T26;
	_T28 = x;
	_T29 = Ny;
	*_T23 = _T24(_T27,_T28,_T29);
	goto _TL6E;
	_TL6D: _TL6E: ;
      }
    }goto _TL6A;
    _TL69: ;
  }_T2B = Cyc_Dict_lookup;
  { unsigned int (* _T57)(struct Cyc_Dict_Dict,void *) = (unsigned int (*)(struct Cyc_Dict_Dict,
									   void *))_T2B;
    _T2A = _T57;
  }_T2C = N;
  _T2D = *_T2C;
  _T2E = x;
  _T2F = _T2A(_T2D,_T2E);
  _T30 = k;
  if (_T2F != _T30) { goto _TL6F;
  }
  _T31 = output;
  _T32 = *_T31;
  { int (* cmp)(void *,void *) = _T32.rel;
    _T33 = cmp;
    { struct Cyc_Set_Set * component = Cyc_Set_empty(_T33);
      _T34 = S;
      { struct Cyc_List_List * s = *_T34;
	_TL74: _T35 = s;
	_T36 = (unsigned int)_T35;
	if (_T36) { goto _TL72;
	}else { goto _TL73;
	}
	_TL72: _T37 = s;
	{ void * top = _T37->hd;
	  component = Cyc_Set_insert(component,top);
	  _T38 = cmp(top,x);
	  if (_T38 != 0) { goto _TL75;
	  }
	  goto _TL73;
	  _TL75: ;
	}_T39 = s;
	s = _T39->tl;
	goto _TL74;
	_TL73: ;
      }_TL7A: _T3A = S;
      _T3B = *_T3A;
      _T3C = (unsigned int)_T3B;
      if (_T3C) { goto _TL78;
      }else { goto _TL79;
      }
      _TL78: _T3D = S;
      _T3E = *_T3D;
      { void * top = _T3E->hd;
	_T3F = N;
	_T41 = Cyc_Dict_insert;
	{ struct Cyc_Dict_Dict (* _T57)(struct Cyc_Dict_Dict,void *,unsigned int) = (struct Cyc_Dict_Dict (*)(struct Cyc_Dict_Dict,
													      void *,
													      unsigned int))_T41;
	  _T40 = _T57;
	}_T42 = N;
	_T43 = *_T42;
	_T44 = top;
	*_T3F = _T40(_T43,_T44,4294967295U);
	_T45 = output;
	_T46 = output;
	_T47 = *_T46;
	_T48 = top;
	*_T45 = Cyc_Graph_add_node(_T47,_T48);
	_T49 = output;
	_T4A = output;
	_T4B = *_T4A;
	_T4C = top;
	_T4D = component;
	*_T49 = Cyc_Graph_add_edges(_T4B,_T4C,_T4D);
	_T4E = cmp(top,x);
	if (_T4E != 0) { goto _TL7B;
	}
	_T4F = S;
	_T50 = S;
	_T51 = *_T50;
	_T52 = _check_null(_T51);
	*_T4F = _T52->tl;
	goto _TL79;
	_TL7B: ;
      }_T53 = S;
      _T54 = S;
      _T55 = *_T54;
      _T56 = _check_null(_T55);
      *_T53 = _T56->tl;
      goto _TL7A;
      _TL79: ;
    }
  }goto _TL70;
  _TL6F: _TL70: ;
}
struct Cyc_Dict_Dict Cyc_Graph_scc(struct Cyc_Dict_Dict input) {
  struct Cyc_Dict_Dict _T0;
  int (* _T1)(void *,void *);
  int (* _T2)(void *,void *);
  struct Cyc_List_List * _T3;
  unsigned int _T4;
  struct Cyc_List_List * _T5;
  void * _T6;
  void * _T7;
  struct Cyc_Dict_Dict (* _T8)(struct Cyc_Dict_Dict,void *,unsigned int);
  struct Cyc_Dict_Dict (* _T9)(struct Cyc_Dict_Dict,void *,void *);
  struct Cyc_List_List * _TA;
  struct Cyc_List_List * _TB;
  unsigned int _TC;
  struct Cyc_List_List * _TD;
  void * _TE;
  void * _TF;
  unsigned int (* _T10)(struct Cyc_Dict_Dict,void *);
  void * (* _T11)(struct Cyc_Dict_Dict,void *);
  unsigned int _T12;
  struct Cyc_Dict_Dict _T13;
  struct Cyc_Dict_Dict * _T14;
  struct Cyc_Dict_Dict * _T15;
  struct Cyc_Dict_Dict * _T16;
  struct Cyc_Dict_Dict * _T17;
  struct Cyc_List_List * * _T18;
  void * _T19;
  struct Cyc_List_List * _T1A;
  struct Cyc_Dict_Dict _T1B;
  _T0 = input;
  { int (* cmp)(void *,void *) = _T0.rel;
    struct Cyc_List_List * edges = Cyc_Dict_to_list(input);
    _T1 = cmp;
    { struct Cyc_Dict_Dict output = Cyc_Graph_empty(_T1);
      struct Cyc_List_List * S = 0;
      _T2 = cmp;
      { struct Cyc_Dict_Dict N = Cyc_Dict_empty(_T2);
	{ struct Cyc_List_List * e = edges;
	  _TL80: _T3 = e;
	  _T4 = (unsigned int)_T3;
	  if (_T4) { goto _TL7E;
	  }else { goto _TL7F;
	  }
	  _TL7E: _T5 = e;
	  _T6 = _T5->hd;
	  { struct _tuple0 * _T1C = (struct _tuple0 *)_T6;
	    void * _T1D;
	    { struct _tuple0 _T1E = *_T1C;
	      _T7 = _T1E.f0;
	      _T1D = (void *)_T7;
	    }{ void * x = _T1D;
	      _T9 = Cyc_Dict_insert;
	      { struct Cyc_Dict_Dict (* _T1E)(struct Cyc_Dict_Dict,void *,
					      unsigned int) = (struct Cyc_Dict_Dict (*)(struct Cyc_Dict_Dict,
											void *,
											unsigned int))_T9;
		_T8 = _T1E;
	      }N = _T8(N,x,0U);
	    }
	  }_TA = e;
	  e = _TA->tl;
	  goto _TL80;
	  _TL7F: ;
	}{ struct Cyc_List_List * e = edges;
	  _TL84: _TB = e;
	  _TC = (unsigned int)_TB;
	  if (_TC) { goto _TL82;
	  }else { goto _TL83;
	  }
	  _TL82: _TD = e;
	  _TE = _TD->hd;
	  { struct _tuple0 * _T1C = (struct _tuple0 *)_TE;
	    void * _T1D;
	    { struct _tuple0 _T1E = *_T1C;
	      _TF = _T1E.f0;
	      _T1D = (void *)_TF;
	    }{ void * x = _T1D;
	      _T11 = Cyc_Dict_lookup;
	      { unsigned int (* _T1E)(struct Cyc_Dict_Dict,void *) = (unsigned int (*)(struct Cyc_Dict_Dict,
										       void *))_T11;
		_T10 = _T1E;
	      }_T12 = _T10(N,x);
	      if (_T12 != 0U) { goto _TL85;
	      }
	      _T13 = input;
	      _T14 = &output;
	      _T15 = (struct Cyc_Dict_Dict *)_T14;
	      _T16 = &N;
	      _T17 = (struct Cyc_Dict_Dict *)_T16;
	      _T18 = &S;
	      _T19 = x;
	      Cyc_Graph_traverse(_T13,_T15,_T17,_T18,_T19,1U);
	      goto _TL86;
	      _TL85: _TL86: ;
	    }
	  }_T1A = e;
	  e = _T1A->tl;
	  goto _TL84;
	  _TL83: ;
	}_T1B = output;
	return _T1B;
      }
    }
  }
}
static void Cyc_Graph_tsort0(struct Cyc_Dict_Dict input,struct Cyc_List_List * * output,
			     struct Cyc_Dict_Dict * N,struct Cyc_List_List * * S,
			     void * x,unsigned int k) {
  struct Cyc_List_List * * _T0;
  struct Cyc_List_List * _T1;
  struct Cyc_List_List * * _T2;
  struct Cyc_Dict_Dict * _T3;
  struct Cyc_Dict_Dict (* _T4)(struct Cyc_Dict_Dict,void *,unsigned int);
  struct Cyc_Dict_Dict (* _T5)(struct Cyc_Dict_Dict,void *,void *);
  struct Cyc_Dict_Dict * _T6;
  struct Cyc_Dict_Dict _T7;
  void * _T8;
  unsigned int _T9;
  long _TA;
  unsigned int (* _TB)(struct Cyc_Dict_Dict,void *);
  void * (* _TC)(struct Cyc_Dict_Dict,void *);
  struct Cyc_Dict_Dict * _TD;
  struct Cyc_Dict_Dict _TE;
  void * _TF;
  unsigned int _T10;
  struct Cyc_Dict_Dict _T11;
  struct Cyc_List_List * * _T12;
  struct Cyc_Dict_Dict * _T13;
  struct Cyc_List_List * * _T14;
  void * _T15;
  unsigned int _T16;
  unsigned int (* _T17)(struct Cyc_Dict_Dict,void *);
  void * (* _T18)(struct Cyc_Dict_Dict,void *);
  struct Cyc_Dict_Dict * _T19;
  struct Cyc_Dict_Dict _T1A;
  void * _T1B;
  unsigned int _T1C;
  unsigned int (* _T1D)(struct Cyc_Dict_Dict,void *);
  void * (* _T1E)(struct Cyc_Dict_Dict,void *);
  struct Cyc_Dict_Dict * _T1F;
  struct Cyc_Dict_Dict _T20;
  void * _T21;
  unsigned int _T22;
  struct Cyc_Dict_Dict * _T23;
  struct Cyc_Dict_Dict (* _T24)(struct Cyc_Dict_Dict,void *,unsigned int);
  struct Cyc_Dict_Dict (* _T25)(struct Cyc_Dict_Dict,void *,void *);
  struct Cyc_Dict_Dict * _T26;
  struct Cyc_Dict_Dict _T27;
  void * _T28;
  unsigned int _T29;
  unsigned int (* _T2A)(struct Cyc_Dict_Dict,void *);
  void * (* _T2B)(struct Cyc_Dict_Dict,void *);
  struct Cyc_Dict_Dict * _T2C;
  struct Cyc_Dict_Dict _T2D;
  void * _T2E;
  unsigned int _T2F;
  unsigned int _T30;
  struct Cyc_Dict_Dict _T31;
  int (* _T32)(void *,void *);
  struct Cyc_List_List * * _T33;
  struct Cyc_List_List * _T34;
  unsigned int _T35;
  struct Cyc_List_List * _T36;
  int _T37;
  struct Cyc_List_List * _T38;
  struct Cyc_List_List * * _T39;
  struct Cyc_List_List * _T3A;
  unsigned int _T3B;
  struct Cyc_List_List * * _T3C;
  struct Cyc_List_List * _T3D;
  struct Cyc_Dict_Dict * _T3E;
  struct Cyc_Dict_Dict (* _T3F)(struct Cyc_Dict_Dict,void *,unsigned int);
  struct Cyc_Dict_Dict (* _T40)(struct Cyc_Dict_Dict,void *,void *);
  struct Cyc_Dict_Dict * _T41;
  struct Cyc_Dict_Dict _T42;
  void * _T43;
  struct Cyc_List_List * * _T44;
  struct Cyc_List_List * _T45;
  struct Cyc_List_List * * _T46;
  int _T47;
  struct Cyc_List_List * * _T48;
  struct Cyc_List_List * * _T49;
  struct Cyc_List_List * _T4A;
  struct Cyc_List_List * _T4B;
  struct Cyc_List_List * * _T4C;
  struct Cyc_List_List * * _T4D;
  struct Cyc_List_List * _T4E;
  struct Cyc_List_List * _T4F;
  _T0 = S;
  { struct Cyc_List_List * _T50 = _cycalloc(sizeof(struct Cyc_List_List));
    _T50->hd = x;
    _T2 = S;
    _T50->tl = *_T2;
    _T1 = (struct Cyc_List_List *)_T50;
  }*_T0 = _T1;
  _T3 = N;
  _T5 = Cyc_Dict_insert;
  { struct Cyc_Dict_Dict (* _T50)(struct Cyc_Dict_Dict,void *,unsigned int) = (struct Cyc_Dict_Dict (*)(struct Cyc_Dict_Dict,
													void *,
													unsigned int))_T5;
    _T4 = _T50;
  }_T6 = N;
  _T7 = *_T6;
  _T8 = x;
  _T9 = k;
  *_T3 = _T4(_T7,_T8,_T9);
  { struct Cyc_Set_Set * targets = Cyc_Graph_get_targets(input,x);
    _TL8A: _TA = Cyc_Set_is_empty(targets);
    if (_TA) { goto _TL89;
    }else { goto _TL88;
    }
    _TL88: { void * y = Cyc_Set_choose(targets);
      targets = Cyc_Set_delete(targets,y);
      _TC = Cyc_Dict_lookup;
      { unsigned int (* _T50)(struct Cyc_Dict_Dict,void *) = (unsigned int (*)(struct Cyc_Dict_Dict,
									       void *))_TC;
	_TB = _T50;
      }_TD = N;
      _TE = *_TD;
      _TF = y;
      _T10 = _TB(_TE,_TF);
      if (_T10 != 0U) { goto _TL8B;
      }
      _T11 = input;
      _T12 = output;
      _T13 = N;
      _T14 = S;
      _T15 = y;
      _T16 = k + 1U;
      Cyc_Graph_tsort0(_T11,_T12,_T13,_T14,_T15,_T16);
      goto _TL8C;
      _TL8B: _TL8C: _T18 = Cyc_Dict_lookup;
      { unsigned int (* _T50)(struct Cyc_Dict_Dict,void *) = (unsigned int (*)(struct Cyc_Dict_Dict,
									       void *))_T18;
	_T17 = _T50;
      }_T19 = N;
      _T1A = *_T19;
      _T1B = y;
      { unsigned int Ny = _T17(_T1A,_T1B);
	_T1C = Ny;
	_T1E = Cyc_Dict_lookup;
	{ unsigned int (* _T50)(struct Cyc_Dict_Dict,void *) = (unsigned int (*)(struct Cyc_Dict_Dict,
										 void *))_T1E;
	  _T1D = _T50;
	}_T1F = N;
	_T20 = *_T1F;
	_T21 = x;
	_T22 = _T1D(_T20,_T21);
	if (_T1C >= _T22) { goto _TL8D;
	}
	_T23 = N;
	_T25 = Cyc_Dict_insert;
	{ struct Cyc_Dict_Dict (* _T50)(struct Cyc_Dict_Dict,void *,unsigned int) = (struct Cyc_Dict_Dict (*)(struct Cyc_Dict_Dict,
													      void *,
													      unsigned int))_T25;
	  _T24 = _T50;
	}_T26 = N;
	_T27 = *_T26;
	_T28 = x;
	_T29 = Ny;
	*_T23 = _T24(_T27,_T28,_T29);
	goto _TL8E;
	_TL8D: _TL8E: ;
      }
    }goto _TL8A;
    _TL89: ;
  }_T2B = Cyc_Dict_lookup;
  { unsigned int (* _T50)(struct Cyc_Dict_Dict,void *) = (unsigned int (*)(struct Cyc_Dict_Dict,
									   void *))_T2B;
    _T2A = _T50;
  }_T2C = N;
  _T2D = *_T2C;
  _T2E = x;
  _T2F = _T2A(_T2D,_T2E);
  _T30 = k;
  if (_T2F != _T30) { goto _TL8F;
  }
  _T31 = input;
  { int (* cmp)(void *,void *) = _T31.rel;
    _T32 = cmp;
    { struct Cyc_Set_Set * component = Cyc_Set_empty(_T32);
      _T33 = S;
      { struct Cyc_List_List * s = *_T33;
	_TL94: _T34 = s;
	_T35 = (unsigned int)_T34;
	if (_T35) { goto _TL92;
	}else { goto _TL93;
	}
	_TL92: _T36 = s;
	{ void * top = _T36->hd;
	  component = Cyc_Set_insert(component,top);
	  _T37 = cmp(top,x);
	  if (_T37 != 0) { goto _TL95;
	  }
	  goto _TL93;
	  _TL95: ;
	}_T38 = s;
	s = _T38->tl;
	goto _TL94;
	_TL93: ;
      }_TL9A: _T39 = S;
      _T3A = *_T39;
      _T3B = (unsigned int)_T3A;
      if (_T3B) { goto _TL98;
      }else { goto _TL99;
      }
      _TL98: _T3C = S;
      _T3D = *_T3C;
      { void * top = _T3D->hd;
	_T3E = N;
	_T40 = Cyc_Dict_insert;
	{ struct Cyc_Dict_Dict (* _T50)(struct Cyc_Dict_Dict,void *,unsigned int) = (struct Cyc_Dict_Dict (*)(struct Cyc_Dict_Dict,
													      void *,
													      unsigned int))_T40;
	  _T3F = _T50;
	}_T41 = N;
	_T42 = *_T41;
	_T43 = top;
	*_T3E = _T3F(_T42,_T43,4294967295U);
	_T44 = output;
	{ struct Cyc_List_List * _T50 = _cycalloc(sizeof(struct Cyc_List_List));
	  _T50->hd = top;
	  _T46 = output;
	  _T50->tl = *_T46;
	  _T45 = (struct Cyc_List_List *)_T50;
	}*_T44 = _T45;
	_T47 = cmp(top,x);
	if (_T47 != 0) { goto _TL9B;
	}
	_T48 = S;
	_T49 = S;
	_T4A = *_T49;
	_T4B = _check_null(_T4A);
	*_T48 = _T4B->tl;
	goto _TL99;
	_TL9B: ;
      }_T4C = S;
      _T4D = S;
      _T4E = *_T4D;
      _T4F = _check_null(_T4E);
      *_T4C = _T4F->tl;
      goto _TL9A;
      _TL99: ;
    }
  }goto _TL90;
  _TL8F: _TL90: ;
}
struct Cyc_List_List * Cyc_Graph_tsort(struct Cyc_Dict_Dict input) {
  struct Cyc_Dict_Dict _T0;
  int (* _T1)(void *,void *);
  struct Cyc_List_List * _T2;
  unsigned int _T3;
  struct Cyc_List_List * _T4;
  void * _T5;
  void * _T6;
  struct Cyc_Dict_Dict (* _T7)(struct Cyc_Dict_Dict,void *,unsigned int);
  struct Cyc_Dict_Dict (* _T8)(struct Cyc_Dict_Dict,void *,void *);
  struct Cyc_List_List * _T9;
  struct Cyc_List_List * _TA;
  unsigned int _TB;
  struct Cyc_List_List * _TC;
  void * _TD;
  void * _TE;
  unsigned int (* _TF)(struct Cyc_Dict_Dict,void *);
  void * (* _T10)(struct Cyc_Dict_Dict,void *);
  unsigned int _T11;
  struct Cyc_Dict_Dict _T12;
  struct Cyc_List_List * * _T13;
  struct Cyc_Dict_Dict * _T14;
  struct Cyc_Dict_Dict * _T15;
  struct Cyc_List_List * * _T16;
  void * _T17;
  struct Cyc_List_List * _T18;
  struct Cyc_List_List * _T19;
  _T0 = input;
  { int (* cmp)(void *,void *) = _T0.rel;
    struct Cyc_List_List * edges = Cyc_Dict_to_list(input);
    struct Cyc_List_List * output = 0;
    struct Cyc_List_List * S = 0;
    _T1 = cmp;
    { struct Cyc_Dict_Dict N = Cyc_Dict_empty(_T1);
      { struct Cyc_List_List * e = edges;
	_TLA0: _T2 = e;
	_T3 = (unsigned int)_T2;
	if (_T3) { goto _TL9E;
	}else { goto _TL9F;
	}
	_TL9E: _T4 = e;
	_T5 = _T4->hd;
	{ struct _tuple0 * _T1A = (struct _tuple0 *)_T5;
	  void * _T1B;
	  { struct _tuple0 _T1C = *_T1A;
	    _T6 = _T1C.f0;
	    _T1B = (void *)_T6;
	  }{ void * x = _T1B;
	    _T8 = Cyc_Dict_insert;
	    { struct Cyc_Dict_Dict (* _T1C)(struct Cyc_Dict_Dict,void *,unsigned int) = (struct Cyc_Dict_Dict (*)(struct Cyc_Dict_Dict,
														  void *,
														  unsigned int))_T8;
	      _T7 = _T1C;
	    }N = _T7(N,x,0U);
	  }
	}_T9 = e;
	e = _T9->tl;
	goto _TLA0;
	_TL9F: ;
      }{ struct Cyc_List_List * e = edges;
	_TLA4: _TA = e;
	_TB = (unsigned int)_TA;
	if (_TB) { goto _TLA2;
	}else { goto _TLA3;
	}
	_TLA2: _TC = e;
	_TD = _TC->hd;
	{ struct _tuple0 * _T1A = (struct _tuple0 *)_TD;
	  void * _T1B;
	  { struct _tuple0 _T1C = *_T1A;
	    _TE = _T1C.f0;
	    _T1B = (void *)_TE;
	  }{ void * x = _T1B;
	    _T10 = Cyc_Dict_lookup;
	    { unsigned int (* _T1C)(struct Cyc_Dict_Dict,void *) = (unsigned int (*)(struct Cyc_Dict_Dict,
										     void *))_T10;
	      _TF = _T1C;
	    }_T11 = _TF(N,x);
	    if (_T11 != 0U) { goto _TLA5;
	    }
	    _T12 = input;
	    _T13 = &output;
	    _T14 = &N;
	    _T15 = (struct Cyc_Dict_Dict *)_T14;
	    _T16 = &S;
	    _T17 = x;
	    Cyc_Graph_tsort0(_T12,_T13,_T15,_T16,_T17,1U);
	    goto _TLA6;
	    _TLA5: _TLA6: ;
	  }
	}_T18 = e;
	e = _T18->tl;
	goto _TLA4;
	_TLA3: ;
      }_T19 = output;
      return _T19;
    }
  }
}
