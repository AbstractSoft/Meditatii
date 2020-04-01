// Fie x un numar natural format din 6 cifre (X5 X4 X3 X2 X1 XO). Sa se afiseze
// un triunghi format din cifrele numarului x astfel:
// - pe prima linie(in varful triunghiului) se va afla cifra din mijloc(X3 x2);
// - pe linia a doua se vor afla cifrele X4 X3 X2 Xl;
// - pe a treia linie se vor afla toate cifrele lui x.
// De exemplu, daca x = 152894, triunghiul va arata astfel :
//    28
//   5289
//  152894

#include <iomanip>
#include <iostream>

int main() {

  unsigned numar;
  std::cout << "Introduceti un numar natural (cu 6 cifre): ";
  std::cin >> numar;

  unsigned linie_1 = numar / 100 % 100;
  unsigned linie_2 = numar % 100000 / 10;

  std::cout << std::setw(4) << linie_1 << '\n';
  std::cout << std::setw(5) << linie_2 << '\n';
  std::cout << numar << '\n';

  return 0;
}