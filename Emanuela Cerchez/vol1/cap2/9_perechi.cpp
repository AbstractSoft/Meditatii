// Fie n un nurnar natural nenul. Sa se genereze toate perechile (a, b), cu
// proprietatea ca a | b, unde a si b sunt numere naturale nenule mai mici dedit
// n.

#include <iostream>

int main() {
  unsigned n;
  unsigned a, b;

  std::cout << "Introduceti un numar natural, n: ";
  std::cin >> n;

  for (b = 1; b < n; ++b) {
    for (int multiplu = 1; b * multiplu < n; ++multiplu) {
      a = b * multiplu;
      std::cout << "(" << a << ", " << b << ")" << '\n';
    }
  }

  return 0;
}