// Fie r un numar real, citit de la tastatura, care reprezinta lungimea razei
// unui cerc. Sa se scrie un program care sa calculeze si sa afiseze aria si
// perimetrul discului de raza r.

#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>

int main() {
  float r;
  std::cout << "Introduceti raza cercului: ";
  std::cin >> r;

  std::cout << "Aria cercului este: " << M_PI * r * r << '\n';
  std::cout << "Perimetrul cercului este: " << 2 * M_PI * r << '\n';

  return 0;
}