#include "tests.h"

int test_min_max() {
  printf("=== BEGIN TEXT MIN MAX ===\n");

  // INT tests
  int int_arr[5] = {5,3,1,2,4};

  ASSERT_TRUE(int_max_element(int_arr, 5) == 5);
  ASSERT_TRUE(int_min_element(int_arr, 5) ==  1);

  ASSERT_TRUE(int_min(int_arr[0], int_arr[1]) == int_arr[1]);
  ASSERT_TRUE(int_max(int_arr[0], int_arr[1]) == int_arr[0]);

  // DOUBLE tests
  double double_arr[5] = {5.0, 3.0, 1.0, 2.0, 4.0};

  ASSERT_TRUE(double_max_element(double_arr, 5) == 5);
  ASSERT_TRUE(double_min_element(double_arr, 5) ==  1);

  ASSERT_TRUE(double_min(double_arr[0], double_arr[1]) == double_arr[1]);
  ASSERT_TRUE(double_max(double_arr[0], double_arr[1]) == double_arr[0]);

  printf("=== END TEXT MIN MAX ===\n");
  return EXIT_SUCCESS;
}
