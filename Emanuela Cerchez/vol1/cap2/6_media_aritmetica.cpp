// Se citeste de la tastatura un numar natural nenul n, apoi se citesc succesiv
// n valori reale. Scrieti un program care determina si afiseaza media
// aritrnetica a valorilor strict pozitive.

#include <iostream>

int main() {
  unsigned n;
  unsigned contor_nr_poz = 0;
  double medie{0.0};

  std::cout << "Introduceti un numar natural nenul, n: ";
  std::cin >> n;

  for (int i = 0; i < n; ++i) {
    double numar;
    std::cout << "Introduceti un numar real: ";
    std::cin >> numar;
    if (numar > 0) {
      medie += numar;
      ++contor_nr_poz;
    }
  }

  std::cout << "Valoarea mediei nr pozitive este: " << medie / contor_nr_poz;

  return 0;
}