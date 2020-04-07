// Fie C o variabila de tip char. Scrieti o expresie care, in cazul in care
// valoarea variabilei c este o litera mica, atribuie variabilei c majuscula
// corespunzatoare.

#include <iostream>

int main() {
  char c;
  std::cout << "Introduceti caracterul: ";
  std::cin >> c;

  if (isalpha(c) && c > 'Z') {
    std::cout << (char)(c - 32);
  } else {
    std::cout << c;
  }

  return 0;
}