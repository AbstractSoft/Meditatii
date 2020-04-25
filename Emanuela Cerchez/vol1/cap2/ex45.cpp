// Numere piramidale
//
// Numerele piramidale se definesc ca fiind sumele partiale ale sirului
// patratelor perfecte 1, 4, 9, 16, 25 ... De exemplu, primele 5 numere
// piramidale sunt 1, 5, 14, 30, 55. Scrieti un program care sa aflseze prirnele
// n numere piramidale.

#include <cmath>
#include <iostream>

int main() {
  size_t n;
  size_t nr_piramidal = 0;

  std::cout << "Introduceti numarul natural n: ";
  std::cin >> n;

  for (size_t i = 1; n > 0; ++i) {
    double x = sqrt(i);
    if (x == static_cast<size_t>(x)) {
      nr_piramidal += i;
      --n;

      std::cout << nr_piramidal << '\n';
    }
  }

  return 0;
}