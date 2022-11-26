#include "funcs.h"

std::string printRange(int left, int right) {
  if (left > right) {
    return "";
  }

  // remove extra space at end
  if (left == right) {
    return std::to_string(left);
  }
  return std::to_string(left) + " " + printRange(left + 1, right);
}

int sumRange(int left, int right) {
  if (left <= right) {
    return left + sumRange(left + 1, right);
  }

  return 0;
}

int sumArray(int *arr, int size) {
  if (size == 0) {
    return 0;
  }
  return *arr + sumArray(arr + 1, size - 1);
}

bool isAlphanumeric(std::string s) {
  if (s.empty()) {
    return true;
  }

  return std::isalnum(s[0]) && isAlphanumeric(s.substr(1, s.size() - 1));
}

bool nestedParens(const std::string &s) {
  if (s.empty()) {
    return true;
  }
  return s[0] == '(' && s[s.size() - 1] == ')' && nestedParens(s.substr(1, s.size() - 2));
}

bool divisible(int *prices, int size) {
  int sum = sumArray(prices, size);
  if (sum % 2 == 0) {
    return divisible(prices, size, sum / 2, sum / 2);
  }
  return false;
}

bool divisible(int *prices, int size, int aliceHas, int bobHas) {
  if (size == 0) {
    return aliceHas == 0 && bobHas == 0;
  }

  return divisible((prices + 1), size - 1, aliceHas - *prices, bobHas) ||
         divisible((prices + 1), size - 1, aliceHas, bobHas - *prices);
}
