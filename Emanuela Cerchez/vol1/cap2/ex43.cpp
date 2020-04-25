// Cifre
//
// Fie N un numar natural nenul (N <= 1000000000). Scriind in ordine, unul dupa
// altul, toate numerele naturale de la 1 la N, obtinem o secventa de cifre. De
// exemplu, pentru N=22, obtinem: 12345678910111213141516171819202122. Scrieti
// un program eficient care sa determine numarul de cifre din secventa formata
// din numerele de la 1 la N.

#include <cmath>
#include <iostream>

int main() {
  size_t N;
  size_t contor_cifre = 0;

  std::cout << "Introduceti numarul N: ";
  std::cin >> N;

  for (size_t i = 1; i <= N; ++i) {
    // https://en.cppreference.com/w/cpp/language/static_cast
    contor_cifre += static_cast<size_t>(log10(i)) + 1;
  }

  std::cout << "Numarul de cifre este: " << contor_cifre;
}