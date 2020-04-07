// O broasca testoasa parcurge o distanta de D kilometri in H ore. Sa se scrie
// un program care sa calculeze si sa afiseze viteza cu care se deplaseaza
// broasca testoasa(exprimata in metri / secunda)

#include <iostream>

int main() {
  const size_t secunde_per_ora = 3600;
  const size_t metri_per_km = 1000;

  float D, H;
  std::cout << "Distanta [km]: ";
  std::cin >> D;

  std::cout << "Intervalul de timp [ore]: ";
  std::cin >> H;

  std::cout << "Viteza este: " << ((D * metri_per_km) / (H * secunde_per_ora))
            << "[m/s]\n";

  return 0;
}