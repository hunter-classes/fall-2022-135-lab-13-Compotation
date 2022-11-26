#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "funcs.h"

TEST_CASE("task a") {
  CHECK_EQ(printRange(-2, 10), "-2 -1 0 1 2 3 4 5 6 7 8 9 10");
  CHECK_EQ(printRange(8, 8), "8");
  CHECK_EQ(printRange(10, -1), "");
  CHECK_EQ(printRange(-10, -9), "-10 -9");
}

TEST_CASE("task b") {
  CHECK_EQ(sumRange(1, 3), 6);
  CHECK_EQ(sumRange(-2, 10), 52);
  CHECK_EQ(sumRange(-9, -10), 0);
  CHECK_EQ(sumRange(11, 10), 0);
  CHECK_EQ(sumRange(8, 8), 8);
}

TEST_CASE("task c") {
  int size = 10;
  int *arr = new int[size]; // allocate array dynamically
  arr[0] = 12;
  arr[1] = 17;
  arr[2] = -5;
  arr[3] = 3;
  arr[4] = 7;
  arr[5] = -15;
  arr[6] = 27;
  arr[7] = 5;
  arr[8] = 13;
  arr[9] = -21;

  CHECK_EQ(sumArray(arr, size), 43);
  CHECK_EQ(sumArray(arr, 5), 34);
  CHECK_EQ(sumArray(arr, 0), 0);
  CHECK_EQ(sumArray(arr, 1), 12);
  delete[] arr;
}

TEST_CASE("task d") {
  CHECK(isAlphanumeric("ABCD"));
  CHECK(isAlphanumeric("Abcd1234xyz"));
  CHECK_FALSE(isAlphanumeric("KLMN 8-7-6"));
  CHECK(isAlphanumeric(""));
}

TEST_CASE("task e") {
  CHECK(nestedParens("((()))"));
  CHECK(nestedParens("()"));
  CHECK(nestedParens(""));

  CHECK_FALSE(nestedParens("((("));
  CHECK_FALSE(nestedParens("(()"));
  CHECK_FALSE(nestedParens(")("));
  CHECK_FALSE(nestedParens("a(b)c"));
}

TEST_CASE("task f") {
  int prices1[] = {10, 15, 12, 18, 19, 17, 13, 35, 33};
  CHECK(divisible(prices1, 9));

  int prices2[] = {4};
  CHECK_FALSE(divisible(prices2, 1));

  int prices3[] = {};
  CHECK(divisible(prices3, 0));

  int prices4[] = {8, 4};
  CHECK_FALSE(divisible(prices4, 2));

  int prices5[] = {2, 2};
  CHECK(divisible(prices5, 2));

  int prices6[] = {4, 1, 2, 5, 6, 7, 8, 2, 10, 5};
  CHECK(divisible(prices6, 10));

  int prices7[] = {6, 9, 5};
  CHECK_FALSE(divisible(prices7, 3));

  int prices8[] = {4, 2, 5, 6, 7, 8, 2, 10, 5};
  CHECK_FALSE(divisible(prices8, 9));
}