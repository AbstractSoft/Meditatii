// Implementati un program pentru rezolvarea ecuatiei
// de gr. II (a*x*x + b*x + c = 0), unde a, b si c
// sunt numere reale

// se citesc : a, b şi c de la tastatură
// se calculeaza delta si se verifică
// daca delta este mai mic decât zero, programul va afisa
// "Ecuatia nu are solutie"; daca delta este mai mare decât
// zero, programul va calcula si afisa x1 si x2

#include <cmath>
#include <iostream>

int main() {
  float a, b, c;

  std::cout << "Rezolvarea ecuatiei a*x*x + b*x + c = 0\n";
  std::cout << "Introduceti a: ";
  std::cin >> a;
  std::cout << "Introduceti b: ";
  std::cin >> b;
  std::cout << "Introduceti c: ";
  std::cin >> c;

  if (a == 0) {
    std::cout << "Ecuatia este de gr.I";
    return 0;
  }

  float delta = b * b - 4 * a * c;

  if (delta < 0) {
    std::cout << "Ecuatia nu are solutii";
  } else if (delta == 0) {
    std::cout << "x1 = x2: " << 0 << '\n';
  } else {
    float x1 = (-b + sqrt(delta)) / (2 * a);
    float x2 = (-b - sqrt(delta)) / (2 * a);

    std::cout << "x1: " << x1 << '\n';
    std::cout << "x2: " << x2 << '\n';
  }

  return 0;
}