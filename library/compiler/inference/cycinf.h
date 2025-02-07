/*

DO NOT edit this file

*/
#ifndef CYCINF_H
#define CYCINF_H
#include "list.h"
#include <stdio.h>
#include "bool.h"
#include "linkage.h"
#include "hash.h"
extern int flag_hash_cons;

EXTERN_C_BEGIN

typedef struct ptrbnd_* ptrbnd;
typedef struct effect_* effect;
typedef struct zeroterm_* zeroterm;
typedef struct intlit_* intlit;
typedef struct intbound_* intbound;

extern bool flag_occurs_check;
DECLARE_LIST(ptrbnd_list,ptrbnd);
ptrbnd ptrbnd_zero(void);
ptrbnd ptrbnd_one(void);
ptrbnd ptrbnd_wild(void);
ptrbnd ptrbnd_fresh(const char *name);
ptrbnd ptrbnd_constant(const char *name) ;
bool ptrbnd_is_constant(ptrbnd e,const char *name);
void ptrbnd_unify(ptrbnd e1, ptrbnd e2) ;
void ptrbnd_cunify(ptrbnd e1,ptrbnd e2) ;
ptrbnd ptrbnd_ecr(ptrbnd e) ;

         ptrbnd ptrbnd_cmp(const ptrbnd e1,const ptrbnd e2);

         ptrbnd ptrbnd_eq(ptrbnd e1, ptrbnd e2);

ptrbnd atomic(void);
bool ptrbnd_is_atomic(ptrbnd arg1);
bool ptrbnd_is_numelts(ptrbnd e);
ptrbnd numelts(intbound arg1);
struct numelts_decon numelts_decon(ptrbnd arg1);
struct numelts_decon
{
intbound f0;
};
void ptrbnd_print(FILE* arg1,ptrbnd arg2);
extern bool flag_merge_projections;
extern bool flag_eliminate_cycles;
DECLARE_LIST(effect_list,effect);
effect effect_zero(void);
effect effect_one(void);
effect effect_wild(void);
effect effect_fresh(const char *name);
effect effect_union(effect_list exprs);
effect effect_inter(effect_list exprs);
effect effect_constant(const char *name);
bool effect_eq(effect e1, effect e2);
int effect_cmp(const effect e1,const effect e2);
bool effect_is_constant(effect e,const char *name);
void effect_inclusion(effect e1,effect e2);
void effect_unify(effect e1,effect e2);
effect_list effect_tlb(effect e);

void effect_print(FILE* arg1,effect arg2);
DECLARE_LIST(zeroterm_list,zeroterm);
zeroterm zeroterm_zero(void);
zeroterm zeroterm_one(void);
zeroterm zeroterm_wild(void);
zeroterm zeroterm_fresh(const char *name);
zeroterm zeroterm_constant(const char *name) ;
bool zeroterm_is_constant(zeroterm e,const char *name);
void zeroterm_unify(zeroterm e1, zeroterm e2) ;
void zeroterm_cunify(zeroterm e1,zeroterm e2) ;
zeroterm zeroterm_ecr(zeroterm e) ;

         zeroterm zeroterm_cmp(const zeroterm e1,const zeroterm e2);

         zeroterm zeroterm_eq(zeroterm e1, zeroterm e2);

void zeroterm_print(FILE* arg1,zeroterm arg2);
DECLARE_LIST(intlit_list,intlit);
intlit intlit_zero(void);
intlit intlit_one(void);
intlit intlit_wild(void);
intlit intlit_fresh(const char *name);
intlit intlit_constant(const char *name) ;
bool intlit_is_constant(intlit e,const char *name);
void intlit_unify(intlit e1, intlit e2) ;
void intlit_cunify(intlit e1,intlit e2) ;
intlit intlit_ecr(intlit e) ;

         intlit intlit_cmp(const intlit e1,const intlit e2);

         intlit intlit_eq(intlit e1, intlit e2);

void intlit_print(FILE* arg1,intlit arg2);
DECLARE_LIST(intbound_list,intbound);
intbound intbound_zero(void);
intbound intbound_one(void);
intbound intbound_wild(void);
intbound intbound_fresh(const char *name);
intbound intbound_constant(const char *name) ;
bool intbound_is_constant(intbound e,const char *name);
void intbound_unify(intbound e1, intbound e2) ;
void intbound_cunify(intbound e1,intbound e2) ;
intbound intbound_ecr(intbound e) ;

         intbound intbound_cmp(const intbound e1,const intbound e2);

         intbound intbound_eq(intbound e1, intbound e2);

bool intbound_is_eq(intbound e);
intbound eq(intlit arg1);
struct eq_decon eq_decon(intbound arg1);
struct eq_decon
{
intlit f0;
};
bool intbound_is_geq(intbound e);
intbound geq(intlit arg1);
struct geq_decon geq_decon(intbound arg1);
struct geq_decon
{
intlit f0;
};
void intbound_print(FILE* arg1,intbound arg2);
/*

Init/reset engine, print constraint graphs

*/
void cycinf_init(void);
void cycinf_reset(void);
void cycinf_stats(FILE * arg1);
void cycinf_print_graph(FILE * arg1);
EXTERN_C_END
#endif
