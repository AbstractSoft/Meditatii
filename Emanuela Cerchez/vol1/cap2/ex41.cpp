// Cifra 0
//
// Scrieti un program care sa citeasca de la tastatura 0 succesiune de valori
// naturale, pana la citirea valorii - 1, si care sa determine de care ori apare
// cifra 0 In scrierea numerelor citite.

#include <iostream>

using namespace std;

int main() {
  int n, ct = 0;

  cout << "Introduceti un numar natural: ";
  cin >> n;

  while (n != -1) {
    if (n == 0) {
      ++ct;
      continue;
    }
    while (n != 0) {
      if (n % 10 == 0) {
        ++ct;
      }
      n /= 10;
    }

    cout << "Introduceti un numar natural: ";
    cin >> n;
  }

  cout << "Au fost citite " << ct << " zerouri";

  return 0;
}