// Scrieti un program care sa citeasca doua numere naturale nenule a si b si
// care sa genereze si sa afiseze:
//
// a. un numar natural aleator mai mic decat a;
// b. un numar intreg aleator din intervalul [-a, b];
// c. un numar natural aleator din intervalul [a, b];
// d. un numar real aleator din intervalul [-a, b]

#include <iostream>
#include <random>

int main() {
  //
  std::random_device rd;  // obtain a random number from hardware
  std::mt19937 eng(rd()); // seed the generator
  std::uniform_int_distribution<> distr(25, 63); // define the range

  return 0;
}