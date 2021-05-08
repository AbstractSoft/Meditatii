#include <iostream>

void fct(int x[], int size) {
  for (int i = 0; i < size; ++i) {
    x[i] = ++x[i];
  }
}

int main() {
  int x[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  size_t size = sizeof(x) / sizeof(x[0]);

  std::cout << "Size of x: " << size << '\n';

  fct(x, size);

  for (int i = 0; i < size; ++i) {
    std::cout << x[i] << '\n';
  }
}