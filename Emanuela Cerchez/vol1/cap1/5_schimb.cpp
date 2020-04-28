// Se introduc de la tastarura numerele reale a si b. Sa se interschimbe
// valorile variabilelor a si b, apoi sa se afiseze

#include <iostream>

void swap(float **, float **);

int main() {

  float a, b;
  std::cout << "Introduceti numarul real a: ";
  std::cin >> a;

  std::cout << "Introduceti numarul real b: ";
  std::cin >> b;

  float *pa = new float{a};
  float *pb = new float{b};

  swap(&pa, &pb);

  std::cout << "a: " << *pa << ", b: " << *pb << '\n';

  return 0;
}

void swap(float **a, float **b) {
  float *tmp = *a;
  *a = *b;
  *b = tmp;
}