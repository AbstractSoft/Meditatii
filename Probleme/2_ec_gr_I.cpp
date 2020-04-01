// Implementati un program pentru rezolvarea ecuatiei
// de gr. I (ax + b = 0), unde a, b sunt numere reale

#include <iostream>

int main() {
  float a, b, x;

  std::cout << "Rezolvarea ecuatiei ax + b = 0\n";
  std::cout << "Introduceti a: ";
  std::cin >> a;
  std::cout << "Introduceti b: ";
  std::cin >> b;

  if (a != 0) {
    x = b == 0 ? 0 : -b / a;
    std::cout << "Rezultatul ecuatiei este: " << x;
  } else if (b == 0)
    std::cout << "Exista o infinitate de solutii";
  else
    std::cout << "Ecuatia nu are solutie";

  return 0;
}