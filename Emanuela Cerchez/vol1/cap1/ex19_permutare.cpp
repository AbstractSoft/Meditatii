// Fie x1, x2, x3, x4, x5 cinci valori reale. Scrieti un program care sa
// foloseasca o singura variabila suplimentara pentru a permuta circular
// valorile celor cinci variabile (adica in final xl sa aiba valoarea initiala a
// variabilei x2, x2 valoarea initiala a variabilei x3, x3 valoarea initiala a
// variabilei x4, x4 valoarea initiala a variabilei x5, iar x5 valoarea initiala
// a variabilei x1)

#include <iostream>

void citire_elemente(float *, const size_t *const);
void afisare_elemente(float *, const size_t *const);
void permutare_circulara(float *, const size_t *const);

int main() {

  const size_t nr_elem = 5;
  float *v = new float[nr_elem];

  citire_elemente(v, &nr_elem);
  permutare_circulara(v, &nr_elem);
  afisare_elemente(v, &nr_elem);

  delete[] v;

  return 0;
}

void citire_elemente(float *v, const size_t *const nr_elem) {
  for (size_t i = 0; i < *nr_elem; ++i) {
    std::cout << "Elementul " << i + 1 << ": ";
    std::cin >> v[i];
  }
}

void afisare_elemente(float *v, const size_t *const nr_elem) {
  for (size_t i = 0; i < *nr_elem; ++i) {
    std::cout << "Elementul " << i + 1 << " este: " << v[i] << '\n';
  }
  std::cout << '\n';
}

void permutare_circulara(float *v, const size_t *const nr_elem) {
  float tmp = 0;
  for (size_t i = 0; i < *nr_elem; ++i) {
    if (0 == i) {
      tmp = v[i];
      continue;
    }

    if (*nr_elem - 1 == i) {
      v[i] = tmp;
      continue;
    }

    v[i - 1] = v[i];
  }
}