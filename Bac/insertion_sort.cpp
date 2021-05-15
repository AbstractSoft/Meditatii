#include <iostream>

void sortare_prin_insertie(int v[], const int n) {
  for (int i = 1; i < n; ++i) {
    int valoare = v[i];
    int index_cautare = i - 1;
    while (valoare < v[index_cautare]) {
      v[index_cautare + 1] = v[index_cautare];
      --index_cautare;
    }
    v[index_cautare + 1] = valoare;
  }
}

int main() {
  int v[]{10, 6, 100, 2, 5, 7, 56, 3};

  const int size = sizeof(v) / sizeof(int);

  sortare_prin_insertie(v, size);

  for (int i = 0; i < size; ++i) {
    std::cout << v[i] << " ";
  }
  return 0;
}
