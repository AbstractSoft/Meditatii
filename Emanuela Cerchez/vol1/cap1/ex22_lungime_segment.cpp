// Fie A si B doua puncte in plan, specificate prin coordonatele lor carteziene.
// Sa se scrie un program care sa calculeze si sa afiseze lungimea segmentului
// AB

#include <iostream>
#include <cmath>

struct Punct {
  size_t x;
  size_t y;
};

int main() {
  Punct A, B;

  std::cout << "Introduceti abscisa și ordonata punctului A: ";
  std::cin >> A.x >> A.y;

  std::cout << "Introduceti abscisa și ordonata punctului B: ";
  std::cin >> B.x >> B.y;

  std::cout << "Lungimea segmentului AB este: "
            << sqrt((B.x - A.x) * (B.x - A.x) + (B.y - A.y) * (B.y - A.y));

  return 0;
}