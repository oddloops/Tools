#include <stdio.h>
#include "CUnit.h"
#include "Basic.h"
#include "" // header file of file to test

/* Run Test(s) helper function(s) implicit declaration */

// ex: runTest(int, int)

/* The actual unit tests.
 * Each of the unit test functions calls a helper function
 * to set up and perform the test (see below).
 */

// ex: test(void) { runTest(1, 2); }

/* The helper functions to actually test*/

// void runTest(int a, int expected) {
//  int actual = function to test(a);
//  CU_ASSERT_EQUAL(actual, expected);
//}

/* The main() function for setting up and running the tests.
 * Returns a CUE_SUCCESS on successful running, another
 * CUnit error code on failure.
 */
int main()
{
   CU_pSuite pSuite = NULL;

   /* initialize the CUnit test registry */
   if (CUE_SUCCESS != CU_initialize_registry()) { return CU_get_error(); }

   /* add a suite to the registry */
   pSuite = CU_add_suite("Suite_1", NULL, NULL);
   if (NULL == pSuite) {
      CU_cleanup_registry();
      return CU_get_error();
   }

   /* add the tests to the suite */
   if (
          (NULL == CU_add_test(pSuite, "Name of test", test))
       // || (NULL == CU_add_test(pSuite, "Name of test", test))
      )
   {
      CU_cleanup_registry();
      return CU_get_error();
   }

   /* Run all tests using the CUnit Basic interface */
   CU_basic_set_mode(CU_BRM_VERBOSE);
   CU_basic_run_tests();
   CU_cleanup_registry();
   return CU_get_error();
}
