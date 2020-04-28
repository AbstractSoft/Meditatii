// Scrieti un program care citeste de la tastatura lungimea laturii unui
// triunghi echilateral si afiseaza pe ecran lungimea ina1timii triunghiului si
// aria sa, pe linii diferite, insotite de mesaje explicative

#include <cmath>
#include <iostream>

int main() {
  float lungime;
  std::cout << "Lungimea laturii triunghiului echilateral: ";
  std::cin >> lungime;

  std::cout << "Inaltimea triunghiului echilateral: " << lungime / 2 * sqrt(3)
            << '\n';
  std::cout << "Aria triunghiului echilateral: "
            << lungime * lungime / 4 * sqrt(3) << '\n';

  return 0;
}