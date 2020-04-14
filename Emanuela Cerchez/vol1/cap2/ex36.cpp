// Expresii
// Fie n un numar natural si x un numar real, citite de la tastatura.
// Sa se calculeze valoarea expresiei.

#include <cmath>
#include <iostream>

using namespace std;

int factorial(int x) {
  int i, factor = 1;
  for (i = 1; i <= x; ++i) {
    factor *= i;
  }
  return factor;
}

int main() {
  int n;
  double x;
  double result = 0;

  std::cout << "Introduceti numarul natural n: ";
  std::cin >> n;

  std::cout << "Introduceti numarul real x: ";
  std::cin >> x;

  for (int i = 0; i < n; ++i) {
    result += pow(-1, i) * pow(x, 2 * i + 1) / factorial(2 * i + 1);
  }

  cout << result;

  return 0;
}