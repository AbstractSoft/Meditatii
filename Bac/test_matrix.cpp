#include <iostream>

int main() {

  // initializare
  int v[3][3]{{0, 0, 0}, {1, 1, 1}, {2, 2, 2}};
  int v1[2][3]{{0, 0, 0}, {1, 1, 1}};
  int v2[4][2]{{0, 0}, {1, 1}, {2, 2}, {3, 3}};

  int v4[3][3]{{1, 5, 7}, {4, 8, 6}, {3, 9, 24}};

  // dereferentiere
  std::cout << v4[1][2] << '\n';
  std::cout << *(*(v4 + 1) + 2) << '\n';

  return 0;
}