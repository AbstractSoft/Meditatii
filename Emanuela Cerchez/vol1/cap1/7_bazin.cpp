// Un bazin se umple cu apa cu ajutorul a doua robinete. Daca lasam primul
// robinet deschis timp de h1 ore si al doilea timp de h2 ore, in bazin vor fi x
// litri de apa. Daca lasam primul robinet deschis timp de h1 + 1
// ore si al doilea timp de h2 - 1 ore, in bazin vor fi y Iitri de apa. Scrieti
// un program care sa determine cati Iitri de apa curg prin fiecare robinet
// intr-o ora.

#include <iostream>

int main() {
  unsigned h1, h2, x, y;

  std::cout << "Durata h1: ";
  std::cin >> h1;

  std::cout << "Durata h2: ";
  std::cin >> h2;

  std::cout << "Cantitatea x: ";
  std::cin >> x;

  std::cout << "Cantitatea y: ";
  std::cin >> y;

  unsigned d2 = (x - h1 * (y - x)) / (h1 + h2);
  unsigned d1 = d2 - x + y;

  std::cout << "Litri de apa care curg prin robinetul 1: " << d1 << '\n';
  std::cout << "Litri de apa care curg prin robinetul 2: " << d2 << '\n';

  return 0;
}