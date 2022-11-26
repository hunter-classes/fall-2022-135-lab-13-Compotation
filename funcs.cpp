#include "funcs.h"

std::string printRange(int left, int right) {
  if (left > right) {
    return "";
  }

  // remove extra space at end
  if (left == right) {
    return std::to_string(left);
  }
  return std::to_string(left) + " " + printRange(left+1, right);
}
