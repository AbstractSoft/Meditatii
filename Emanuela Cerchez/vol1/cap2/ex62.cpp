// Euro-dolar

#include <cstdint>
#include <iostream>

struct curs_valutar {
  float dolari;
  float euro;
};

int main() {
  size_t n = 8, D, E;

  // std::cout << "Introduceti numarul de zile: ";
  // std::cin >> n;

  // curs_valutar *cursuri_valutare = new curs_valutar[n]{};

  // for (int i = 1; i <= n; ++i) {
  //   std::cout << "Introduceti valoare in Dolari: ";
  //   std::cin >> D;
  //   std::cout << "Introduceti valoare in EUR: ";
  //   std::cin >> E;
  //   cursuri_valutare[i].dolari = D;
  //   cursuri_valutare[i].euro = E;
  // }

  curs_valutar *cursuri_valutare =
      new curs_valutar[n]{{218, 219}, {228, 231}, {227, 235}, {205, 213},
                          {230, 232}, {239, 239}, {251, 258}, {205, 213}};

  curs_valutar sume{0, 100};

  constexpr int window_size = 4;

  for (int i = 0; i < n; i += window_size) {
    int index_max = 0;
    int index_min = 0;

    int max = 0;
    int min = 1000;

    for (int j = 0; j < window_size; ++j) {
      if (cursuri_valutare[i + j].dolari > max) {
        max = cursuri_valutare[i + j].dolari;
        index_max = i + j;
      }
      if (cursuri_valutare[i + j].dolari < min) {
        min = cursuri_valutare[i + j].dolari;
        index_min = i + j;
      }
    }

    if (index_max < index_min) {
      sume.dolari = sume.euro * cursuri_valutare[index_max].dolari / 100;
      sume.euro = sume.dolari * 100 / cursuri_valutare[index_min].euro;
      sume.dolari = 0;
    } else {
      sume.euro = sume.dolari * 100 / cursuri_valutare[index_min].euro;
      sume.dolari = sume.euro * cursuri_valutare[index_max].dolari / 100;
      sume.euro = 0;
    }
  }

  std::cout << "Suma in EUR: " << sume.euro << '\n';

  return 0;
}
