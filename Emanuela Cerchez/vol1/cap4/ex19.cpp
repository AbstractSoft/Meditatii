#include <iostream>
using namespace std;

#define punct_a

int main() {
  int n, m, lin, col;

  cout << "Introduceti numarul de linii: ";
  cin >> n;
  cout << "Introduceti numarul de coloane: ";
  cin >> m;

  int **M = new int *[n];
  for (int i = 0; i < n; ++i) {
    M[i] = new int[m];
  }

  for (lin = 0; lin < n; ++lin) {
    for (col = 0; col < m; ++col) {
      cout << "Introduceti elementul de la linia: " << lin + 1
           << " si coloana: " << col + 1 << " ";
      cin >> M[lin][col];
    }
  }

#ifdef punct_a
  // coloana cu elemente nule
  for (col = 0; col < m; ++col) {
    bool ok = true;
    for (lin = 0; lin < n; ++lin) {
      if (M[lin][col] != 0) {

        ok = false;
        break;
      }
    }
    if (ok) {
      cout << "Coloana " << col + 1 << " are doar elemente nule" << '\n';
    }
  }
#endif

#ifdef punct_b

  // produs elem nenule de pe fiecare linie
  int prod = 1;
  for (lin = 0; lin < n; ++lin) {
    for (col = 0; col < n; ++col) {
      if (M[lin][col] != 0) {
        prod *= M[lin][col];
      }
    }
  }
  cout << "Produs elementelor nenule de pe fiecare linie este " << prod;
#endif

#ifdef punct_c

  // vecini pari

  for (lin = 1; lin < n - 1; ++lin) {
    for (col = 1; col < m - 1; ++col) {
      if (M[lin - 1][col] % 2 == 0 && M[lin + 1][col] % 2 == 0) // linii
      {
        ++ct;
      } else if (M[lin][col - 1] % 2 == 0 &&
                 M[lin][col + 1] % 2 == 0) // coloane
      {
        ++ct;
      }
    }
  }
  cout << ct << " elemente au ca vecini doar numere pare";
#endif

  // Marcarea memoriei alocate ca fiind disponibila pentru realocare
  for (int i = 0; i < n; ++i) {
    delete[] M[i];
  }
  delete[] M;

  return 0;
}