#include <iostream>

using namespace std;

int main() {
  constexpr int n = 5;
  int i, j;
  //   cout << "Introduceti nr de elemente: " << endl;
  //   cin >> n;

  //   int **M = new int *[n];
  //   for (int i = 0; i < n; ++i) {
  //     M[i] = new int[n];
  //   }

  //   for (int i = 0; i < 5; ++i) {
  //     for (int j = 0; j < 5; ++j) {
  //       cout << "Introduceti elementul de la linia: " << i + 1
  //            << " si coloana: " << j + 1 << " ";
  //       cin >> M[i][j];
  //     }
  //   }

// #define punct_a
// #define punct_b
// #define punct_c
#define punct_d

  int M[n][n]{1, 2, 9, 0, 3, 9, 0, 7, 6, 4, 8, 7, 1,
              2, 0, 3, 6, 2, 0, 9, 1, 3, 7, 0, 0};

#ifdef punct_a
  // inferior triunghiular
  for (i = 0; i < n; ++i) {
    for (j = i + 1; j < n; ++j) {
      if (M[i][j] != 0) {
        cout << " Matricea nu este inferior triunghiulara\n";
        std::exit(1);
      }
    }
  }

  cout << "Matricea este inferior triunghiulara\n";
#endif

#ifdef punct_b
  // simetrie fata de diagonala principala

  for (i = 0; i < n - 1; ++i) {
    for (j = 0; j < n - i - 1; ++j) {
      if (M[i][i + j + 1] != M[i + j + 1][i]) {
        cout << " Matricea nu este simetrica fata de diagonala\n";
        std::exit(1);
      }
    }
  }

  cout << "Matricea este simetrica fata de diagonala\n";
#endif

#ifdef punct_c
  // elemente impare sub diagonala secundara

  int sum = 0;
  for (i = 1; i < n; ++i) {
    for (j = n - 1; j > n - i - 1; --j) {
      if (M[i][j] % 2 != 0) {
        sum += M[i][j];
      }
    }
  }

  cout << "Suma elementelor impare de sub diagonala secundara este: " << sum
       << "\n";
#endif

#ifdef punct_d

  int nr_sum = 0;
  // chenare concentrice
  if (n % 2 == 0) {
    nr_sum = n / 2;
  } else {
    nr_sum = (n / 2) + 1;
  }

  for (int count = 0; count < nr_sum; ++count) {
    int sum = 0;

    for (i = count; i < n - count; ++i) {
      for (j = count; j < n - count; ++j) {
        if (i == count || i == n - count - 1) {
          sum += M[i][j];
        } else {
          if (j == count || j == n - count - 1) {
            sum += M[i][j];
          }
        }
      }
    }
    cout << "Suma patratului concentric " << count << " este " << sum << "\n";
  }

#endif

  return 0;
}