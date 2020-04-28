// Orice suma de bani S (S>7) poate fi platita numai cu monede de 3 lei si de 5
// lei. Dat fiind S > 7, scrieti un program care sa determine o modalitate de
// plata a sumei S numai cu monede de 3 lei si de 5 lei.
//
// S = 3 * x + 5 * y;

#include <iostream>

int main() {

  unsigned S;
  unsigned x = 0, y = 0;

  std::cout << "Introduceti suma S > 7: ";
  std::cin >> S;

  if (S <= 7) {
    std::cerr << "Valoarea introdusa este invalida!";
    std::exit(1);
  }

  switch (S % 3) {
  case 0:
    x = S / 3;
    y = 0;
    break;
  case 1:
    x = S / 3 - 3;
    y = 2;
    break;
  case 2:
    x = S / 3 - 1;
    y = 1;
    break;
  }

  std::cout << "Sunt necesare " << x << " fise de 3 lei si " << y
            << " fise de 5 lei.";

  return 0;
}