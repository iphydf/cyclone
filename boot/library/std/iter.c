#include <cyc_include.h>
 struct Cyc_Iter_Iter {
  void * env;
  long (* next)(void *,void *);
};
long Cyc_Iter_next(struct Cyc_Iter_Iter iter,void * dest) {
  struct Cyc_Iter_Iter _T0;
  void * _T1;
  struct Cyc_Iter_Iter _T2;
  long _T3;
  long (* _T4)(void *,void *);
  void * _T5;
  _T0 = iter;
  _T1 = _T0.env;
  _T5 = (void *)_T1;
  _T2 = iter;
  _T4 = _T2.next;
  { void * env = _T5;
    long (* f)(void *,void *) = _T4;
    _T3 = f(env,dest);
    return _T3;
  }
}
