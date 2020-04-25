#include <iostream>

#define C

int main() {
  int a, b, c = 0;

#ifdef A
  a = 14624;
  b = 8632;
#endif

#ifdef B
  a = 7382;
  b = 8392; // b = ?, c = 2938
#endif

#ifdef C
  a = 10; // a = ?
  b = 10; // b = ?, c = 1
#endif

  while (a && b) {
    if (a % 10 > b % 10) {
      c = c * 10 + a % 10;
    } else {
      c = c * 10 + b % 10;
    }
    a /= 10;
    b /= 10;
  }

#ifdef A
  std::cout << c; // 4368
#endif

#ifdef B
  std::cout << c; // 2938
#endif

#ifdef C
  std::cout << c; // 1
#endif

  return 0;
}