#include <iostream>
using namespace std;

int n, v[4] = {1, 2, 3, 4};

void generare_sir_impar() {
  for (int i = 0; i < 4; ++i) {
    if (v[i] % 2 != 0) {
      int nr = v[i] * pow(10, n - 1);

      for (int j = 0; j < 4; ++j) {
        int b = nr;
        if (v[j] % 2 != 0) {
          b += v[j] * pow(10, n - 2);

          for (int k = 0; k < 4; ++k) {
            int a = b;
            if (v[k] % 2 != 0) {
              a += v[k] * pow(10, n - 3);
              cout << a << endl;
            }
          }
        }
      }
    }
  }
}

void generare_sir_par() {
  for (int i = 0; i < 4; ++i) {
    if (v[i] % 2 == 0) {
      int nr = v[i] * pow(10, n - 1);
      for (int j = 0; j < 4; ++j) {
        int b = nr;
        if (v[j] % 2 == 0) {
          b += v[j] * pow(10, n - 2);

          for (int k = 0; k < 4; ++k) {
            int a = b;
            if (v[k] % 2 == 0) {
              a += v[k] * pow(10, n - 3);
              cout << a << endl;
            }
          }
        }
      }
    }
  }
}

int main() {
  cout << "Introduceti lungimea sirului: ";
  cin >> n;

  generare_sir_impar();
  generare_sir_par();

  return 0;
}