// Se citeste de la tastatura un numar natural nenul n, apoi se citesc succesiv
// n valori reale. Scrieti un program care determina si afiseaza cea mai mare
// valoare reala citita.

#include <iostream>

int main() {
  unsigned n;
  double max{0.0};

  std::cout << "Introduceti un numar natural nenul, n: ";
  std::cin >> n;

  for (int i = 0; i < n; ++i) {
    double numar;
    std::cout << "Introduceti un numar real: ";
    std::cin >> numar;

    if (numar > max) {
      max = numar;
    }
  }

  std::cout << "Valoarea maxima este: " << max;

  return 0;
}