// Palindrom prim
//
// Se citeste de la tastatura un numar natural nenul n, apoi se citesc
// succesiv n valori naturale. Sa se verifice daca printre valorile citite
// exista un palindrom prim.

#include <iostream>

using namespace std;

bool palindrom(int x) {
  int aux = 0, y;
  y = x;
  while (x != 0) {
    aux = aux * 10 + x % 10;
    x /= 10;
  }
  return (aux == y);
}

bool prim(int x) {
  int i, ct = 0;
  for (i = 1; i < x; ++i) {
    if (x % i == 0) {
      ++ct;
    }
  }
  return (ct == 1 || ct == 2);
}

int main() {
  // palindrom prim;
  int n;
  cout << "Introduceti nr de elemente:";
  cin >> n;

  for (int i = 0; i < n; ++i) {
    int numar;
    cout << "Introduceti elementul [" << i + 1 << "] :";
    cin >> numar;

    if (palindrom(numar) && prim(numar)) {
      cout << "Numarul " << numar << " este palindrom prim." << endl;
    }
  }

  return 0;
}