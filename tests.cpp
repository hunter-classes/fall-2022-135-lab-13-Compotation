#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "funcs.h"

TEST_CASE("task a") {
  CHECK_EQ(printRange(-2, 10), "-2 -1 0 1 2 3 4 5 6 7 8 9 10");
  CHECK_EQ(printRange(8, 8), "8");
  CHECK_EQ(printRange(10, -1), "");
  CHECK_EQ(printRange(-10, -9), "-10 -9");
}