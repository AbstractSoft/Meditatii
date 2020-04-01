// Un iepuras zglobiu iesi din padure si incepu sa alerge pe campie cu o viteza
// constanta de v1 m/s. Dupa un timp t0, apare la marginea padurii un leu. Leul
// zari iepurasul si incepu sa alerge dupa el cu o viteza constanta de v2 m/s.
// Scrieti un program care sa afiseze dupa cate secunde prinde leul iepurele sau
// valoarea -1 daca leul nu prinde iepurele.

#include <iostream>

int main() {
  unsigned v1, v2, t0;

  std::cout << "Viteza iepure: ";
  std::cin >> v1;

  std::cout << "Viteza leu: ";
  std::cin >> v2;

  std::cout << "Timpul dupa care apare Leul: ";
  std::cin >> t0;

  if (v2 <= v1) {
    std::cout << -1;
    return 0;
  }

  unsigned t1 = v1 * t0 / (v2 - v1);

  std::cout << t1;

  return 0;
}