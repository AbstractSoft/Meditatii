#include <cstdint>
#include <iostream>

void afisare_vector(const int16_t[], const int16_t);

int main() {
  constexpr int16_t numar_elemente = 10;
  int16_t vector[numar_elemente]{10, 6, 23, 3, 99, 73, 64, 1, 0, 50};

  /*
   1. se compara primul element al vectorului (index 0) cu urmatoarele si,
   pentru cazul in care conditia este indeplinita, schimba intre ele valorile
   celor 2 elemente ale vectorului; in urma executiei, primul element va fi
   cel mai mic (sau cel mai mare) din vector.
   2. Se compara cel de-al doilea element (index 1) cu urmatoarele si se
   repeta logica de la punctul 1 s.a.m.d.

   Nota: La fiecare iteratie, numarul de pasi este tot mai mic, deoarece tot
   mai multe numere sortate ocupa pozitiile de la inceputul vectorului
  */
  for (int16_t i = 0; i < numar_elemente; ++i) { // referinta
    for (int16_t j = i + 1; j < numar_elemente; ++j) {
      // conditia pentru sortare (aici, in ordine crescatoare)
      if (vector[i] > vector[j]) {
        int16_t aux = vector[i];
        vector[i] = vector[j];
        vector[j] = aux;
      }
    }
  }

  afisare_vector(vector, numar_elemente);

  return 0;
}

void afisare_vector(const int16_t vector[], const int16_t numar_elemente) {
  for (int16_t i = 0; i < numar_elemente; i++) {
    std::cout << "Elementul [" << i + 1 << "] = " << vector[i] << '\n';
  }
}