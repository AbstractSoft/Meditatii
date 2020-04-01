// Fie x un numar natural format din 5 cifre (X4 X3 X2 X1 XO). Sa se afiseze un
// triunghi format din cifrele numarului x astfel:
// - pe prima linie(in varful triunghiului) se va afla cifra din mijloc(x2);
// - pe linia a doua se vor afla cifrele X3 X2 Xl;
// - pe a treia linie se vor afla toate cifrele lui x.
// De exemplu, daca x = 15289, triunghiul va arata astfel :
//    2
//   528
//  15289

#include <iomanip>
#include <iostream>

int main() {

  unsigned numar;
  std::cout << "Introduceti un numar natural (cu 5 cifre): ";
  std::cin >> numar;

  unsigned linie_1 = numar / 100 % 10;
  unsigned linie_2 = numar % 10000 / 10;

  std::cout << std::setw(3) << linie_1 << '\n';
  std::cout << std::setw(4) << linie_2 << '\n';
  std::cout << numar << '\n';

  return 0;
}