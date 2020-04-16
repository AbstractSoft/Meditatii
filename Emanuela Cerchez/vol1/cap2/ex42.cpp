// Cifra de control
//
// Fie n un nurnar natural, citit de la tastatura. Scrieti un program care
// calculeaza si afiseaza cifra de control a lui n.
// Cifra de control a unui numar natural se obtine calculand suma cifrelor
// numarului, apoi suma cifrelor sumei, s.a.m.d. pana la obtinerea unei singure
// cifre. De exemplu, pentru n = 293 calculam suma cifrelor 2 + 9 + 3 = 14. Cum
// suma nu este formata dintr-o singura cifra, repetam procedeul: l + 4 = 5.
// Deci 5 este cifra de control a lui 293.

#include <iostream>

using namespace std;

int calcul_cifra_control(int);

int main() {
  int n;

  cout << "Introduceti un numar natural: ";
  cin >> n;

  cout << "Cifra de control este " << calcul_cifra_control(n);

  return 0;
}

int calcul_cifra_control(int numar) {
  int sum = 0;
  while (numar != 0) {
    sum += numar % 10;
    numar /= 10;
  }

  if (sum > 10) {
    return calcul_cifra_control(sum);
  }
  return sum;
}