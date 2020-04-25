// Stiind ca valoarea initiala a variabilei intregi i este mai mare decat 10,
// stabiliti care este valoarea expresiei abs(3 - i) la sfarsitul executlirii
// urmatoarei instructiuni.
// while (i > 4) i--;

#include <cmath>
#include <iostream>

int main() {
  int i = 11;
  
  while (i > 4) {
    i--;
  }

  std::cout << abs(3 - i); // 1

  return 0;
}