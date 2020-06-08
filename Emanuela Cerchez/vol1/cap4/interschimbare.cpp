#include <iostream>

int main() {

  constexpr int n = 3;
  constexpr int m = 4;

  int a[n]{1, 3, 5};
  int b[m]{2, 4, 6, 7};
  int c[n + m];

  int i, j, k;

  for (i = j = k = 0; i < n && j < m;) {
    if (a[i] < b[j]) {
      c[k++] = a[i++];
    } else {
      c[k++] = b[j++];
    }
  }

  for (; i < n; i++) {
    c[k++] = a[i];
  }

  for (; j < m; j++) {
    c[k++] = b[j];
  }

  for(int i=0; i< n+m;++i) {
      std::cout << "Elementul [" << i << "] este: " << c[i] << '\n';
  }
}