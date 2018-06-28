typedef enum { false, true } bool;

namespace Core
{
  extern region_t<`H> heap_region;
  extern aqual_t<UNIQUE> unique_qual;

#define unew qnew (Core::unique_qual)
#define umalloc(arg) qmalloc (Core::heap_region, Core::unique_qual,  arg)
  void ufree(`a::A\T *@aqual(UNIQUE) `H ptr) __attribute__((noliveunique(1)));
}
