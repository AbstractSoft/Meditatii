// Care este valoarea variabilei intregi a pentru care urmatoarea secventa de
// program va afisa exact un caracter 'A'?
// a =
// a. 12
// b. 5
// c. 6 x
// d. 4
// e. 1
#include <iostream>

int main() {

  int x = 5;
  int a = 6;
  do {
    std::cout << 'A';
    x++;
  } while (x > a);

  return 0;
}