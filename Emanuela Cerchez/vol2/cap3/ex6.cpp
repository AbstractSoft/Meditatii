// ex 6, pag. 119

#include <cmath>
#include <iostream>

void gaseste_numere(const size_t &, const size_t &);
size_t calcul_suma_cifre(size_t);

bool *numere_gasite;

int main() {

  size_t s;
  std::cout << "Introduceti valoarea sumei numerelor: ";
  std::cin >> s;

  size_t max = std::pow(10, s);

  numere_gasite = new bool[max]{};

  for (int i = 1; i <= s; ++i) {
    gaseste_numere(i, s);
  }

  for (int i = 0; i < max; ++i) {
    if (numere_gasite[i]) {
      std::cout << i << '\n';
    }
  }

  delete[] numere_gasite;
}

void gaseste_numere(const size_t &val_start, const size_t &suma_cifre) {
  for (int i = 0; i < suma_cifre; ++i) {
    for (int j = 0; j < 100; ++j) {

      size_t numar = val_start * std::pow(10, i) + j;

      if (calcul_suma_cifre(numar) == suma_cifre) {
        if (!numere_gasite[numar]) {
          numere_gasite[numar] = true;
        }
      }
    }
  }
}

size_t calcul_suma_cifre(size_t numar) {

  size_t rezultat{};
  bool cifre[10]{};

  while (numar > 0) {
    size_t cifra = numar % 10;

    if (cifre[cifra]) {
      return 0;
    }

    cifre[cifra] = true;

    rezultat += cifra;
    numar /= 10;
  }

  return rezultat;
}