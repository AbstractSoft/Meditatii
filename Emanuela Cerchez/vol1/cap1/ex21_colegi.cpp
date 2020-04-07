// Doi colegi (Vasilica si Ionica) pleaca simultan din orasele in care locuiesc,
// unul catre celalalt. Stiind ca distanta dintre cele doua orase este D, ca
// Vasilica merge cu viteza vl, iar Ionica merge cu viteza v2 (D, v1, v2
// sunt numere reale), scrieti un program care calculeaza dupa cat timp se
// intalnesc cei doi colegi si la ce distanta de orasul in care locuieste
// Vasilica

#include <iomanip>
#include <iostream>

int main() {
  const size_t secunde_per_ora = 3600;
  const size_t metri_per_km = 1000;

  float D, v1, v2;
  std::cout << "Distanta [km]: ";
  std::cin >> D;

  std::cout << "Viteza lui Vasilica [m/s]: ";
  std::cin >> v1;

  std::cout << "Viteza lui Ionica [m/s]: ";
  std::cin >> v2;

  // D = d1 + d2;
  // d1 = v1 * t
  // d2 = v2 * t
  // Deci, D = v1 * t + v2 * t => D = t * (v1 + v2) => t = D / (v1 + v2);

  float t = D * metri_per_km / (v1 + v2);

  std::cout << std::setprecision(4);
  std::cout << "Cei doi se intalnesc dupa " << t << " secunde ("
            << t / 3600 * 60 << " minute).\n";
  std::cout << "Distanta fata de orasul lui Vasile este: " << v1 * t
            << " metri.\n";

  return 0;
}