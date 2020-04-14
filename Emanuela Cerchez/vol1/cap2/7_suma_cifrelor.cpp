// Se citeste de la tastatura un nurnar natural n. Sa se calculeze suma cifrelor
// lui n.

#include <iostream>

int main() {
  unsigned n;
  size_t suma = 0;

  std::cout << "Introduceti un numar natural, n: ";
  std::cin >> n;

  while (n != 0) {
    unsigned ultima_cifra = n % 10;
    suma += ultima_cifra;
    n /= 10;
  }

  std::cout << "Suma cifrelor lui n este: " << suma;

  return 0;
}