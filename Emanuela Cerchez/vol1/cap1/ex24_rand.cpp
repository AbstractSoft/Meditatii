// Scrieti un program care sa citeasca doua numere naturale nenule a si b si
// care sa genereze si sa afiseze:
//
// a. un numar natural aleator mai mic decat a;
// b. un numar intreg aleator din intervalul [-a, b];
// c. un numar natural aleator din intervalul [a, b];
// d. un numar real aleator din intervalul [-a, b]

#include <iostream>
#include <random>

void citire_numar(const char *const, int *);

int main() {

  int a, b;

  citire_numar("a", &a);
  citire_numar("b", &b);

  std::random_device rd;  // obtain a random number from hardware
  std::mt19937 eng(rd()); // seed the generator

  std::uniform_int_distribution<unsigned> distr_a(0, a); // define the range
  std::cout << distr_a(eng) << '\n';                     // generate numbers

  std::uniform_int_distribution<int> distr_b(-a, b);
  std::cout << distr_b(eng) << '\n';

  std::uniform_int_distribution<unsigned> distr_c(a, b);
  std::cout << distr_c(eng) << '\n';

  std::uniform_real_distribution<> distr_d(-a, b);
  std::cout << distr_d(eng) << '\n';

  return 0;
}

void citire_numar(const char *const nume, int *val) {
  std::cout << "Introduceti numarul natural " << *nume << " > 0: ";
  std::cin >> *val;

  if (*val <= 0) {
    std::cerr << "Valoarea lui " << *nume << " este invalida!";
    std::exit(1);
  }
}