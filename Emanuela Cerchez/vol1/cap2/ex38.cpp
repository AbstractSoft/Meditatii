// Suma si produs
//
// Se citeste de la tastatura un nurnar natural nenul n, apoi se citesc succesiv
// n valori intregi, Scrieti un program care determina si afiseaza suma
// valorilor pare citite si produsul valorilor nenule.

#include <iostream>

using namespace std;

int main() {
  // n numere-suma numere pare, produs numere nenule;
  int n, sumpar = 0, produs = 1;

  cout << "Introduceti nr de elemente:";
  cin >> n;

  for (int i = 0; i < n; ++i) {
    int numar;
    cout << "Introduceti elementul [" << i + 1 << "] :";
    cin >> numar;

    if (numar % 2 == 0) {
      sumpar += numar;
    }

    if (numar != 0) {
      produs *= numar;
    }
  }

  cout << "Suma numerelor pare este " << sumpar << endl
       << "Produsul numerelor nenule este:" << produs;

  return 0;
}