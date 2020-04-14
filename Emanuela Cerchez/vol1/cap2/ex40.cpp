// Cifre nenule
//
// Se citeste un numar natural nenul n, apoi se citesc succesiv n valori
// intregi. Sa se verifice daca oricare dintre cele n valori citite are exact 3
// cifre nenule.

#include <iostream>

using namespace std;

bool contor_cifre_nenule(int);

int main() {
  // nr are 3 cifre nenule;
  int n;
  cout << "Introduceti nr de elemente:";
  cin >> n;

  for (int i = 0; i < n; ++i) {
    int numar;
    cout << "Introduceti elementul [" << i + 1 << "] :";
    cin >> numar;
    cout << n
         << (contor_cifre_nenule(numar) ? "are 3 cifre nenule"
                                        : "nu are 3 cifre nenule")
         << endl;
  }

  return 0;
}

bool contor_cifre_nenule(int numar) {
  int ct;
  while (numar != 0) {
    if (numar % 10 != 0) {
      ++ct;
      numar /= 10;
    }
  }

  return ct == 3;
}