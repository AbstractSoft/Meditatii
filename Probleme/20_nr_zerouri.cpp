#include <iostream>

using namespace std;

int nr_zerouri();

int main() {

  int nr_0 = nr_zerouri();

  cout << "Numarul de zerouri al produsului este: " << nr_0 << endl;

  return 0;
}

int nr_zerouri() {

  int nr, n;

  int nr_2, nr_5, nr_0;
  nr_2 = nr_5 = nr_0 = 0;

  cout << "Numarul de numere naturale: ";
  cin >> nr;

  for (int i = 0; i < nr; ++i) {

    cout << "Numarul " << i + 1 << ": ";
    cin >> n;

    // cat timp numarul este divizibil cu 2, incrementam contorul corespunzator
    while (n % 2 == 0) {
      ++nr_2;
      n = n / 2;
    }

    // cat timp numarul este divizibil cu 5, incrementam contorul corespunzator
    while (n % 5 == 0) {
      nr_5++;
      n /= 5;
    }

    // se ia in considerare valoarea minima
    if (nr_2 < nr_5) {
      nr_0 = nr_2;
    } else {
      nr_0 = nr_5;
    }
  }

  return nr_0;
}