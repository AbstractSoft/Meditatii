// Se consideră subprogramul divizori, cu patru parametri:
// • n, prin care primeşte un număr natural(n∈[2, 10^6]);
// • x, y și z, prin care furnizează câte un divizor al lui
// n(0 < x < y < z) cu proprietatea că x + y + z = n,
// sau valoarea 0, pentru fiecare dintre aceștia, dacă n nu are
// astfel de divizori. Scrieţi definiţia completă a subprogramului.
// Exemplu: pentru numărul n = 24, în urma apelului, x = 4, y = 8 şi z = 12,
// iar pentru numărul n = 9, în urma apelului, x = 0, y = 0 şi z = 0.

#include <cinttypes>
#include <cstdlib>
#include <iostream>

void divizori(const uint16_t &n, uint16_t &x, uint16_t &y, uint16_t &z);

int main() {
  uint16_t x = 0;
  uint16_t y = 0;
  uint16_t z = 0;
  uint16_t n = 0;

  std::cout << "Valoarea lui n este: ";
  std::cin >> n;

  divizori(n, x, y, z);

  std::cout << "Valoarea lui x este: " << x << '\n';
  std::cout << "Valoarea lui y este: " << y << '\n';
  std::cout << "Valoarea lui z este: " << z << '\n';

  return EXIT_SUCCESS;
}

void divizori(const uint16_t &n, uint16_t &x, uint16_t &y, uint16_t &z) {
  uint16_t num_div{};

  for (int d = n - 1; d > 1; --d) {
    if (n % d == 0) {
      ++num_div;
    }
  }

  if (num_div == 0) {
    return;
  }

  uint16_t *v_div = new uint16_t[num_div]{};

  uint16_t cnt{};

  for (int d = n - 1; d > 1; --d) {
    if (n % d == 0) {
      v_div[cnt++] = d;
    }
  }

  for (int i = 0; i < num_div - 1; ++i) {
    for (int j = i + 1; j < num_div - 1; ++j) {
      for (int k = j + 1; k < num_div - 1; ++k) {
        if (v_div[i] + v_div[j] + v_div[k] == n) {
          z = v_div[i];
          y = v_div[j];
          x = v_div[k];
        }
      }
    }
  }

  delete[] v_div;
}