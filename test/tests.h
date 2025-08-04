#ifndef TESTS_H
#define TESTS_H

#include <stdio.h>
#include <stdlib.h>
#include "min_max.h"

#define ASSERT_TRUE(b) { \
  if (!(b)) { \
    fprintf(stderr, "FAIL: in file %s on line %d\n", __FILE__, __LINE__); \
    return EXIT_FAILURE; \
  } \
} \

int test_min_max();

#endif
