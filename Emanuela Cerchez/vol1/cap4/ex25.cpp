#include <iostream>

int main() {
  uint16_t m, n;

  std::cout << "Introduceti gradul polinomului P: ";
  std::cin >> n;

  std::cout << "Introduceti gradul polinomului Q: ";
  std::cin >> m;

  ++n;
  ++m;

  double *coef_P = new double[n]{2, 3, 4, 5};

  for (int i = n - 1; i > -1; --i) {
    std::cout << "Introduceti coef gradului " << i << " al polinomului P ";
    std::cin >> coef_P[i];
  }

  double *coef_Q = new double[m]{2, 3, 4, 5, 6, 7};

  for (int j = m - 1; j > -1; --j) {
    std::cout << "Introduceti coef gradului " << j << " al polinomului Q ";
    std::cin >> coef_Q[j];
  }

  if (n > m) {
    for (int i = n - 1; i > n - m + 1; --i) {
      std::cout << "Suma coef. de grad " << i << " este " << coef_P[i] << '\n';
      std::cout << "Produsul coef. de grad " << i << " este " << coef_P[i]
                << '\n';
      std::cout << "-----------------------------\n";
    }

    for (int j = m - 1; j > -1; --j) {
      std::cout << "Suma coef. de grad " << j << " este "
                << coef_P[j] + coef_Q[j] << '\n';
      std::cout << "Produsul coef. de grad " << j << " este "
                << coef_P[j] * coef_Q[j] << '\n';
      std::cout << "-----------------------------\n";
    }
  } else {
    for (int i = m - 1; i > m - n + 1; --i) {
      std::cout << "Suma coef. de grad " << i << " este " << coef_Q[i] << '\n';
      std::cout << "Produsul coef. de grad " << i << " este " << coef_Q[i]
                << '\n';
      std::cout << "-----------------------------\n";
    }

    for (int j = n - 1; j > -1; --j) {
      std::cout << "Suma coef. de grad " << j << " este "
                << coef_P[j] + coef_Q[j] << '\n';
      std::cout << "Produsul coef. de grad " << j << " este "
                << coef_P[j] * coef_Q[j] << '\n';
      std::cout << "-----------------------------\n";
    }
  }

  delete[] coef_P;
  delete[] coef_Q;

  return 0;
}