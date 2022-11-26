#include <iostream>
#include "funcs.h"

int main() {
  std::cout << printRange(-2, 10) << "\n";
  std::cout << sumRange(1, 3) << "\n";

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

  std::cout << sumArray(arr, size) << "\n";
  delete[] arr;

  std::cout << isAlphanumeric("ABCD") << "\n";
  return 0;
}