
/* I include these since they are used all over all the tests, but
they should really be moved to each individual test so they are self
contained.
*/

#include "cyclone/library/std/core.h"
#include <stdio.h>
#include "cyclone/library/std/list.h"
#include "cyclone/library/std/set.h"
#include "cyclone/library/std/hashtable.h"
#include <string.h>
#include <strings.h>
#include "cyclone/library/std/buffer.h"
#include "cyclone/library/std/queue.h"
#include "cyclone/library/std/rope.h"
#include "cyclone/library/std/dict.h"
#include <ctype.h>
#include "cyclone/library/std/xarray.h"
#include "cyclone/library/std/bitvec.h"
#include "cyclone/library/std/filename.h"
#include "cyclone/library/std/fn.h"
#include "cyclone/library/std/pp.h"
#include "cyclone/library/std/array.h"
#include "cyclone/library/std/arg.h"
#include <errno.h>
#include <sys/types.h>
#include <signal.h>

using List;
using Set;
using Dict;
using Hashtable;
using Xarray;
using Bitvec;
using Fn;
using Array;

/*** SUPPORT FUNCTIONS ****/

#define allocstr(s) ((stringptr_t) (new (string_t)s))


void eqstrings(string_t s1,string_t s2) {
  int i = strcmp(s1,s2);
  if (i != 0)
    fprintf(stderr,"%s != %s",s1,s2);
  CT_ASSERT(i == 0);
}

int test_list_cmp(int cmp(`a,`a),list_t<`a> x,list_t<`a> y) {
  if (x == NULL)
    if (y == NULL) return 0;
    else return -1;
  if (y == NULL) return 1;
  int c = cmp(x->hd,y->hd);
  if (c != 0) return c;
  return test_list_cmp(cmp,x->tl,y->tl);
}

int array_cmp(int cmp(`a,`a),`a ?x,`a ?y) {
  int sx = numelts(x);
  int sy = numelts(y);
  if (sx > sy) return 1;
  if (sx < sy) return -1;
  int c;
  for(int i = 0; i < sx; i++) {
    c = cmp(x[i],y[i]);
    if (c != 0) return c;
  }
  return 0;
}


void pr_string(string_t s) {
  printf("%s; ",s);
}

void pr_int(int i) {
  printf("%d;",i);
}

void pr_list(list_t<int> x) {
  printf("[");
  List::iter(pr_int,x);
  printf("]\n");
}

void pr_array(int ?x) {
  printf("[|");
  Array::iter(pr_int,x);
  printf("|]\n");
}

int intptr_cmp(int @a, int @b) {
  if (*a == *b) return 0;
  if (*a < *b) return -1;
  return 1;
}

int int_cmp(int a, int b) {
  if (a == b) return 0;
  if (a < b) return -1;
  return 1;
}

intptr_t intptr_t_cmp(intptr_t a, intptr_t b) {
  if (a == b) return 0;
  if (a < b) return -1;
  return 1;
}

int my_add(int i, int j) { return i+j; }
int add2(int i) { return i+2; }
bool odd(int i) { return (1 == (i % 2)); }
bool even(int i) { return (0 == (i % 2)); }
