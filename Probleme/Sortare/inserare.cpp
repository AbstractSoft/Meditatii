#include <cstdint>
#include <iostream>

void afisare_vector(const int16_t[], const int16_t);

int main() {
  constexpr int16_t numar_elemente = 10;
  int16_t vector[numar_elemente]{10, 6, 23, 3, 99, 73, 64, 1, 0, 50};

  for (int16_t i = 0; i < numar_elemente; i++) {
    int16_t k = 0;
    int16_t x = vector[i];

    while (x > vector[k]) {
      k = k + 1;
    }

    for (int16_t j = i - 1; j >= k; j--) {
      vector[j + 1] = vector[j];
    }

    vector[k] = x;
  }

  afisare_vector(vector, numar_elemente);

  return 0;
}

void afisare_vector(const int16_t vector[], const int16_t numar_elemente) {
  for (int16_t i = 0; i < numar_elemente; i++) {
    std::cout << "Elementul [" << i + 1 << "] = " << vector[i] << '\n';
  }
}