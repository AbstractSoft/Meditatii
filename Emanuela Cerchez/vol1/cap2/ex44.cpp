// Patrate perfecte
//
// Se citeste de la tastatura un numar natural n. Scrieti un program eficient
// care sa afiseze toate patratele perfecte mai mici decat n.

#include <cmath>
#include <iostream>

int main() {
  size_t n;

  std::cout << "Introduceti numarul natural n: ";
  std::cin >> n;

  for (size_t i = 1; i <= n; ++i) {
    double x = sqrt(i);
    if (x == static_cast<size_t>(x)) {
      std::cout << i << '\n';
    }
  }

  return 0;
}