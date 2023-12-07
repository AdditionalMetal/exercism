#include "test-framework/unity.h"
#include "helper_functions.h"

void setUp(void){
}

void tearDown(void){
}

static void test_one_digit_numbers(void)  { TEST_ASSERT_EQUAL_INT(_number_of_digits(   9), 1);} 
static void test_two_digit_numbers(void)  { TEST_ASSERT_EQUAL_INT(_number_of_digits(  12), 2);}
static void test_three_digit_numbers(void){ TEST_ASSERT_EQUAL_INT(_number_of_digits( 987), 3);}
static void test_four_digit_numbers(void) { TEST_ASSERT_EQUAL_INT(_number_of_digits(5682), 4);}

static void test_ipow_1_7(void)  { TEST_ASSERT_EQUAL_INT(_ipow(  1,  7),    1);}
static void test_ipow_2_7(void)  { TEST_ASSERT_EQUAL_INT(_ipow(  2,  7),  128);}
static void test_ipow_12_3(void) { TEST_ASSERT_EQUAL_INT(_ipow( 12,  3), 1728);}

int main(void){
  UnityBegin("test_helper_functions.c");

  RUN_TEST(test_one_digit_numbers);
  RUN_TEST(test_two_digit_numbers);
  RUN_TEST(test_three_digit_numbers);
  RUN_TEST(test_four_digit_numbers);

  RUN_TEST(test_ipow_1_7)  ;
  RUN_TEST(test_ipow_2_7)  ;
  RUN_TEST(test_ipow_12_3) ;
  
  return UnityEnd();
}
