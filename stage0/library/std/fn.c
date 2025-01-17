#include <cyc_include.h>
 struct Cyc_List_List {
  void * hd;
  struct Cyc_List_List * tl;
};
extern struct Cyc_List_List * Cyc_List_imp_rev(struct Cyc_List_List *);
 struct Cyc_Fn_Function {
  void * (* f)(void *,void *);
  void * env;
};
struct Cyc_Fn_Function * Cyc_Fn_make_fn(void * (* f)(void *,void *),void * x) {
  struct Cyc_Fn_Function * _T0;
  { struct Cyc_Fn_Function * _T1 = _cycalloc(sizeof(struct Cyc_Fn_Function));
    _T1->f = f;
    _T1->env = x;
    _T0 = (struct Cyc_Fn_Function *)_T1;
  }return _T0;
}
static void * Cyc_Fn_fp_apply(void * (* f)(void *),void * x) {
  void * _T0;
  _T0 = f(x);
  return _T0;
}
struct Cyc_Fn_Function * Cyc_Fn_fp2fn(void * (* f)(void *)) {
  struct Cyc_Fn_Function * (* _T0)(void * (*)(void * (*)(void *),void *),
				   void * (*)(void *));
  void * (* _T1)(void *);
  struct Cyc_Fn_Function * _T2;
  { struct Cyc_Fn_Function * (* _T3)(void * (*)(void * (*)(void *),void *),
				     void * (*)(void *)) = (struct Cyc_Fn_Function * (*)(void * (*)(void * (*)(void *),
												    void *),
											 void * (*)(void *)))Cyc_Fn_make_fn;
    _T0 = _T3;
  }_T1 = f;
  _T2 = _T0(Cyc_Fn_fp_apply,_T1);
  return _T2;
}
void * Cyc_Fn_apply(struct Cyc_Fn_Function * f,void * x) {
  struct Cyc_Fn_Function * _T0;
  void * _T1;
  void * _T2;
  void * _T3;
  void * (* _T4)(void *,void *);
  _T0 = f;
  { struct Cyc_Fn_Function _T5 = *_T0;
    _T4 = _T5.f;
    _T1 = _T5.env;
    _T3 = (void *)_T1;
  }{ void * (* code)(void *,void *) = _T4;
    void * env = _T3;
    _T2 = code(env,x);
    return _T2;
  }
}
 struct _tuple0 {
  struct Cyc_Fn_Function * f0;
  struct Cyc_Fn_Function * f1;
};
static void * Cyc_Fn_fn_compose(struct _tuple0 * f_and_g,void * arg) {
  struct _tuple0 * _T0;
  struct Cyc_Fn_Function * _T1;
  void * _T2;
  void * _T3;
  struct Cyc_Fn_Function * _T4;
  struct Cyc_Fn_Function * _T5;
  _T0 = f_and_g;
  { struct _tuple0 _T6 = *_T0;
    _T5 = _T6.f0;
    _T4 = _T6.f1;
  }{ struct Cyc_Fn_Function * f = _T5;
    struct Cyc_Fn_Function * g = _T4;
    _T1 = f;
    _T2 = Cyc_Fn_apply(g,arg);
    _T3 = Cyc_Fn_apply(_T1,_T2);
    return _T3;
  }
}
struct Cyc_Fn_Function * Cyc_Fn_compose(struct Cyc_Fn_Function * g,struct Cyc_Fn_Function * f) {
  struct Cyc_Fn_Function * (* _T0)(void * (*)(struct _tuple0 *,void *),struct _tuple0 *);
  struct _tuple0 * _T1;
  struct Cyc_Fn_Function * _T2;
  { struct Cyc_Fn_Function * (* _T3)(void * (*)(struct _tuple0 *,void *),
				     struct _tuple0 *) = (struct Cyc_Fn_Function * (*)(void * (*)(struct _tuple0 *,
												  void *),
										       struct _tuple0 *))Cyc_Fn_make_fn;
    _T0 = _T3;
  }{ struct _tuple0 * _T3 = _cycalloc(sizeof(struct _tuple0));
    _T3->f0 = f;
    _T3->f1 = g;
    _T1 = (struct _tuple0 *)_T3;
  }_T2 = _T0(Cyc_Fn_fn_compose,_T1);
  return _T2;
}
 struct _tuple1 {
  struct Cyc_Fn_Function * f0;
  void * f1;
};
 struct _tuple2 {
  void * f0;
  void * f1;
};
static void * Cyc_Fn_inner(struct _tuple1 * env,void * second) {
  void * (* _T0)(struct Cyc_Fn_Function *,struct _tuple2 *);
  struct _tuple1 * _T1;
  struct _tuple1 _T2;
  struct Cyc_Fn_Function * _T3;
  struct _tuple2 * _T4;
  struct _tuple1 * _T5;
  struct _tuple1 _T6;
  void * _T7;
  { void * (* _T8)(struct Cyc_Fn_Function *,struct _tuple2 *) = (void * (*)(struct Cyc_Fn_Function *,
									    struct _tuple2 *))Cyc_Fn_apply;
    _T0 = _T8;
  }_T1 = env;
  _T2 = *_T1;
  _T3 = _T2.f0;
  { struct _tuple2 * _T8 = _cycalloc(sizeof(struct _tuple2));
    _T5 = env;
    _T6 = *_T5;
    _T8->f0 = _T6.f1;
    _T8->f1 = second;
    _T4 = (struct _tuple2 *)_T8;
  }_T7 = _T0(_T3,_T4);
  return _T7;
}
static struct Cyc_Fn_Function * Cyc_Fn_outer(struct Cyc_Fn_Function * f,void * first) {
  struct Cyc_Fn_Function * (* _T0)(void * (*)(struct _tuple1 *,void *),struct _tuple1 *);
  struct _tuple1 * _T1;
  struct Cyc_Fn_Function * _T2;
  { struct Cyc_Fn_Function * (* _T3)(void * (*)(struct _tuple1 *,void *),
				     struct _tuple1 *) = (struct Cyc_Fn_Function * (*)(void * (*)(struct _tuple1 *,
												  void *),
										       struct _tuple1 *))Cyc_Fn_make_fn;
    _T0 = _T3;
  }{ struct _tuple1 * _T3 = _cycalloc(sizeof(struct _tuple1));
    _T3->f0 = f;
    _T3->f1 = first;
    _T1 = (struct _tuple1 *)_T3;
  }_T2 = _T0(Cyc_Fn_inner,_T1);
  return _T2;
}
struct Cyc_Fn_Function * Cyc_Fn_curry(struct Cyc_Fn_Function * f) {
  struct Cyc_Fn_Function * (* _T0)(struct Cyc_Fn_Function * (*)(struct Cyc_Fn_Function *,
								void *),struct Cyc_Fn_Function *);
  struct Cyc_Fn_Function * _T1;
  struct Cyc_Fn_Function * _T2;
  { struct Cyc_Fn_Function * (* _T3)(struct Cyc_Fn_Function * (*)(struct Cyc_Fn_Function *,
								  void *),
				     struct Cyc_Fn_Function *) = (struct Cyc_Fn_Function * (*)(struct Cyc_Fn_Function * (*)(struct Cyc_Fn_Function *,
															    void *),
											       struct Cyc_Fn_Function *))Cyc_Fn_make_fn;
    _T0 = _T3;
  }_T1 = f;
  _T2 = _T0(Cyc_Fn_outer,_T1);
  return _T2;
}
static void * Cyc_Fn_lambda(struct Cyc_Fn_Function * f,struct _tuple2 * arg) {
  struct Cyc_Fn_Function * (* _T0)(struct Cyc_Fn_Function *,void *);
  struct Cyc_Fn_Function * _T1;
  struct _tuple2 * _T2;
  struct _tuple2 _T3;
  void * _T4;
  struct Cyc_Fn_Function * _T5;
  struct _tuple2 * _T6;
  struct _tuple2 _T7;
  void * _T8;
  void * _T9;
  { struct Cyc_Fn_Function * (* _TA)(struct Cyc_Fn_Function *,void *) = (struct Cyc_Fn_Function * (*)(struct Cyc_Fn_Function *,
												      void *))Cyc_Fn_apply;
    _T0 = _TA;
  }_T1 = f;
  _T2 = arg;
  _T3 = *_T2;
  _T4 = _T3.f0;
  _T5 = _T0(_T1,_T4);
  _T6 = arg;
  _T7 = *_T6;
  _T8 = _T7.f1;
  _T9 = Cyc_Fn_apply(_T5,_T8);
  return _T9;
}
struct Cyc_Fn_Function * Cyc_Fn_uncurry(struct Cyc_Fn_Function * f) {
  struct Cyc_Fn_Function * (* _T0)(void * (*)(struct Cyc_Fn_Function *,struct _tuple2 *),
				   struct Cyc_Fn_Function *);
  struct Cyc_Fn_Function * _T1;
  struct Cyc_Fn_Function * _T2;
  { struct Cyc_Fn_Function * (* _T3)(void * (*)(struct Cyc_Fn_Function *,
						struct _tuple2 *),struct Cyc_Fn_Function *) = (struct Cyc_Fn_Function * (*)(void * (*)(struct Cyc_Fn_Function *,
																       struct _tuple2 *),
															    struct Cyc_Fn_Function *))Cyc_Fn_make_fn;
    _T0 = _T3;
  }_T1 = f;
  _T2 = _T0(Cyc_Fn_lambda,_T1);
  return _T2;
}
struct Cyc_List_List * Cyc_Fn_map_fn(struct Cyc_Fn_Function * f,struct Cyc_List_List * x) {
  struct Cyc_List_List * _T0;
  struct Cyc_Fn_Function * _T1;
  struct Cyc_List_List * _T2;
  void * _T3;
  struct Cyc_List_List * _T4;
  struct Cyc_List_List * _T5;
  struct Cyc_List_List * res = 0;
  _TL3: if (x != 0) { goto _TL1;
  }else { goto _TL2;
  }
  _TL1: { struct Cyc_List_List * _T6 = _cycalloc(sizeof(struct Cyc_List_List));
    _T1 = f;
    _T2 = x;
    _T3 = _T2->hd;
    _T6->hd = Cyc_Fn_apply(_T1,_T3);
    _T6->tl = res;
    _T0 = (struct Cyc_List_List *)_T6;
  }res = _T0;
  _T4 = x;
  x = _T4->tl;
  goto _TL3;
  _TL2: _T5 = Cyc_List_imp_rev(res);
  return _T5;
}
