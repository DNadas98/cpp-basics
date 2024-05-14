#include <iostream>

template <typename T, typename U>

int max (T a, U b) {
  return (a > b ? a : b);
}

int main() {
  std::cout << max(3, 7.0) << std::endl;
  return 0;
}
