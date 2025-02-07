/*
 * This is a test of a simple unit testing framework similar in design to CUT and others
 * but for Cyclone.
 */

#include "cyclone/library/std/queue.h"
#include <stdio.h>
#include <string.h>

namespace CycTest {
  typedef void (@test_runner)();

  struct Test {
    string_t name;
    test_runner runner;
    int failed;
  };

  typedef struct Test @`H test_t;

  struct TestSuite {
    string_t name;
    test_runner begin;
    test_runner end;
    Queue::queue_t<test_t, `H> testQueue;
  };

  typedef struct TestSuite *`H suite_t;

  struct Framework {
    Queue::queue_t<suite_t, `H> suiteQueue;
    int testFailureCount;
    int testErrorCount;
    int testCount;
    int suiteFailureCount;
    int suiteErrorCount;
    int suiteCount;
  };


  static struct Framework *defaultFramework = NULL;
  bool quiet = false;

  datatype exn { GeneralFailure(string_t, string_t, unsigned int, string_t) };

  suite_t create_suite(string_t<`H> name, test_runner begin, test_runner end) {
    return new TestSuite { name, begin, end, Queue::create() };
  }

  void add_suite(suite_t aSuite) {
    if(defaultFramework == NULL) {
      defaultFramework = new Framework { Queue::create(), 0, 0, 0, 0, 0, 0};
    }
    Queue::add(defaultFramework->suiteQueue, aSuite);
  }

  void add_test(suite_t aSuite, string_t<`H> name, test_runner runner) {
    Queue::add(aSuite->testQueue, new Test {name, runner, false });
  }

  int run(int print_level) {
    quiet = print_level == 0;
    while(!Queue::is_empty(defaultFramework->suiteQueue)) {
      suite_t aSuite = Queue::take(defaultFramework->suiteQueue);
      if (!quiet)
	printf("%15s: ", aSuite->name);
      try {
	defaultFramework->suiteCount++;
	aSuite->begin();

	while(!Queue::is_empty(aSuite->testQueue)) {
	  test_t aTest = Queue::take(aSuite->testQueue);

	  try {
	    defaultFramework->testCount++;
	    aTest->runner();
	  } catch {
	  case &GeneralFailure(cond, file, line, msg):
	    if (msg[0] != '\0')
	      printf("\n\tFAILED %s:%d %s(%s): %s\n", file, line, aTest->name, cond, msg);
	    else
	      printf("\n\tFAILED %s:%d %s(%s)\n", file, line, aTest->name, cond);
	    defaultFramework->testFailureCount++;
	    continue;
	  default:
	    printf("\n\tFAILED %s: Unknown exception\n", aTest->name);
	    defaultFramework->testErrorCount++;
	    continue;
	  }

	  /* if we reach this part then the test ran and "passed" */
	  if (!quiet)
	    printf(".");
	}
	aSuite->end();
      } catch {
      case &GeneralFailure(cond, file, line, msg):
	if (msg[0] != '\0')
	  printf("\n\tSUITE FAILURE %s:%d %s(%s): %s\n",
		 file, line, aSuite->name, cond, msg);
	else
	  printf("\n\tSUITE FAILURE %s:%d %s(%s)\n", file, line, aSuite->name, cond);
	defaultFramework->suiteFailureCount++;
	continue;
      default:
	printf("\n\tSUITE ERROR %s: Unknown exception\n", aSuite->name);
	defaultFramework->suiteErrorCount++;
	continue;
      }
      /* if we reach this part then the whole suite passed */
      if (!quiet) printf("\n");
    }

    /* see if any tests failed */
    int retc =
      defaultFramework->testFailureCount != 0 ||
      defaultFramework->suiteFailureCount != 0 ||
      defaultFramework->testFailureCount != 0 ||
      defaultFramework->suiteFailureCount != 0;

    /* and now we can print out some simple stats */
    if (print_level == 2) {
      printf("\n\n------ TEST STATS --------\n");
      printf("TOTAL SUITES:\t%d\n", defaultFramework->suiteCount);
      printf("TOTAL TESTS:\t%d\n", defaultFramework->testCount);
      printf("SUITE FAILURES:\t%d\n", defaultFramework->suiteFailureCount);
      printf("TEST FAILURES:\t%d\n", defaultFramework->testFailureCount);
      printf("SUITE ERRORS:\t%d\n", defaultFramework->suiteErrorCount);
      printf("TEST ERRORS:\t%d\n", defaultFramework->testErrorCount);
      printf("TEST SUCCESS RATIO:\t%f\n",
	     1.0f - ((float)defaultFramework->testFailureCount +
		     (float)defaultFramework->testErrorCount) /
	     (float)defaultFramework->testCount);
      printf("SUITE SUCCESS RATIO:\t%f\n",
	     1.0f - ((float)defaultFramework->suiteFailureCount +
		     (float)defaultFramework->suiteErrorCount) /
	     (float)defaultFramework->suiteCount);
    }
    else if (print_level == 1) {
      if (retc)
	printf("\nSome tests failed.\n");
      else
	printf("\nAll tests passed.\n");
    }
    return retc;
  }
}

#define CT_SUITE_BEGIN(N) namespace Suite ##N { \
    void begin(); \
    void end(); \
    static CycTest::suite_t theSuite = NULL; \
    string_t suite_name = "" #N;

#define CT_SUITE_INIT void init() { \
        theSuite = CycTest::create_suite(suite_name, begin, end); \
        CycTest::add_suite(theSuite);

#define CT_SUITE_END }}
#define CT_ADD_TEST(N) CycTest::add_test(theSuite, "" #N, N);

#define CT_SUITE_REGISTER(N) Suite ##N::init()


#define CT_FAILM(M) throw new CycTest::GeneralFailure("FAIL",__FILE__,__LINE__,M)
#define CT_ASSERTM(C,M) if(!(C)) { throw new CycTest::GeneralFailure("" #C, __FILE__,__LINE__,M); } else { if (!CycTest::quiet) printf("."); }
#define CT_EQM(A,B,M) if((A) != (B)) { throw new CycTest::GeneralFailure("EQUAL(" #A "," #B ")", __FILE__,__LINE__,M); } else { if (!CycTest::quiet) printf("."); }
#define CT_NEQM(A,B,M) if((A) == (B)) { throw new CycTest::GeneralFailure("NOT EQUAL(" #A "," #B ")", __FILE__,__LINE__,M); } else { if (!CycTest::quiet) printf("."); }
#define CT_OKM(M) printf("\nOK: " #M "\n")

#define CT_FAIL() throw new CycTest::GeneralFailure("FAIL",__FILE__,__LINE__,"")
#define CT_ASSERT(C) if(!(C)) { throw new CycTest::GeneralFailure("" #C, __FILE__,__LINE__,""); } else { if (!CycTest::quiet) printf("."); }
#define CT_EQ(A,B) if((A) != (B)) { throw new CycTest::GeneralFailure("EQUAL(" #A "," #B ")", __FILE__,__LINE__,""); } else { if (!CycTest::quiet) printf("."); }
#define CT_NEQ(A,B) if((A) == (B)) { throw new CycTest::GeneralFailure("NOT EQUAL(" #A "," #B ")", __FILE__,__LINE__,""); } else { if (!CycTest::quiet) printf("."); }
#define CT_OK() if (!CycTest::quiet) printf(".")

#define CT_MAIN_BEGIN(print_level)			\
void USAGE(const char ?name) __attribute__((noreturn))				\
{ 										\
  fprintf(stderr,"usage : %s [-q|-v]\n", name); 				\
  fprintf(stderr,"  -q     Quiet output (return code 0 indicates success)\n");	\
  fprintf(stderr,"  -v     Include statistics after the tests\n");		\
  exit(1); 									\
}										\
										\
int main(int argc, string_t<`H> ?`H argv) {					\
							\
  string_t<`H> ?`H arg;					\
  int print_level = 1;					\
							\
  arg = argv + 1;					\
  while (*arg != NULL) {				\
    if ((*arg)[0] == '-') {				\
      switch((*arg)[1]) {				\
        case 'q':					\
	  print_level = 0;				\
	  break;					\
							\
        case 'v':					\
	  print_level = 2;				\
	  break;					\
							\
        case '?':					\
          USAGE(argv[0]);				\
          						\
        default:					\
          fprintf(stderr,"Unknown option %s\n",*arg);	\
          USAGE(argv[0]);				\
     }							\
     arg++;						\
   }							\
   else							\
     break;						\
  }

#define CT_MAIN_END(level)				\
  return CycTest::run(level);				\
}
