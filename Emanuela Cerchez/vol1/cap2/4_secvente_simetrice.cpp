// Fie n un numar natural nenul. Sa se afiseze pe ecran o secventa de lungime n,
// construita dupa procedeul ilustrat in exemplele urmatoare
//
// n=7 -> 1234321
// n=8 -> 12344321

#include <iostream>

int main() {
  unsigned int n;
  std::cout << "Introduceti valoarea numarului natural nenul n: ";
  std::cin >> n;

  int jumatate = n / 2;

  // stanga
  for (int index = 1; index <= jumatate; ++index) {
    std::cout << index;
  }

  // dreapta
  if (n % 2 != 0) {
    ++jumatate;
  }

  for (int index = jumatate; index >= 1; --index) {
    std::cout << index;
  }

  return 0;
}