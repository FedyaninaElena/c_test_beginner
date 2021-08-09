#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include "cmocka\include\cmocka.h"

int fff(float arg1, float arg2, float tolerance)
{
  if((arg1 - tolerance) < arg2 && (arg1 + tolerance) > arg2)
  {
    return 1;
  } else
  {
    return 0;
  }
}

float f_003_004 (int side, int radius);

static void test_1(void **state)
{
    float res = f_003_004(10, 100);
    assert_int_equal((fff(res,0.01,0.1)),1);
}

static void test_2(void **state)
{
    float res = f_003_004(1000, 100);
    assert_int_equal((fff(res,3.017185,0.1)),1);
}

static void test_3(void **state)
{
    float res = f_003_004(10, 1);
    assert_int_equal((fff(res,0.000314,0.1)),1);
}

static void test_4(void **state)
{
    float res = f_003_004(0, 100);
    assert_int_equal(res,-1);
}

static void test_5(void **state)
{
    float res = f_003_004(10, 0);
    assert_int_equal(res,-1);
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
