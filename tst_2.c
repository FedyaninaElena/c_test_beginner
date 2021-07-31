#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include "cmocka\include\cmocka.h"

int predmax_4(int a, int b, int c, int d, int max, int pmax);

static void test_1(void **state) {

  int result = predmax_4(55, 5, 36, 65, 0, 0);
  assert_int_equal(result, 55);
}

static void test_2(void **state) {

  int result = predmax_4(80, -5, 36, 65, 0, 0);
  assert_int_equal(result, 65);
}

static void test_3(void **state) {

  int result = predmax_4(80, 90, 36, -5, 0, 0);
  assert_int_equal(result, 80);
}

static void test_4(void **state) {

  int result = predmax_4(-5, 25, 36, -2, 0, 0);
  assert_int_equal(result, 25);
}

static void test_5(void **state) {

  int result = predmax_4(65, 5, -6, 85, 0, 0);
  assert_int_equal(result, 65);
}

int main(void) {
    const struct CMUnitTest tests[] = {
        cmocka_unit_test( test_1 ),
        cmocka_unit_test( test_2 ),
        cmocka_unit_test( test_3 ),
        cmocka_unit_test( test_4 ),
        cmocka_unit_test( test_5 ),
    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}
