// Un grup de cercetatori studiaza un compus chimic descoperit pe planeta Marte.
// In urma analizezor efectuate, au dedus ca o molecula din acest campus este
// formata din nC atomi de carbon, nO atomi de oxigen si nH atomi de hidrogen,
// Stiind ca masa atomului de carbon este 12, masa atomului de oxigen este 16,
// iar masa atomului de hidrogen este 1, sa se scrie un program care sa
// calculeze si sa afiseze masa moleculara a acestui compus.

#include <cstddef>
#include <iostream>

int main() {

  constexpr std::uint8_t masaC{12}; // std::uint8_t este definit in cstdint
  constexpr std::uint8_t masaO{16};
  constexpr std::uint8_t masaH{1};

  std::uint8_t nC;
  std::uint8_t nO;
  std::uint8_t nH;

  std::cout << "Introduceti numarul atomilor de Carbon: ";
  std::cin >> nC;

  std::cout << "Introduceti numarul atomilor de Oxigen: ";
  std::cin >> nO;

  std::cout << "Introduceti numarul atomilor de Hidrogen: ";
  std::cin >> nH;

  std::cout << "Masa moleculara este: " << nC * masaC + nO * masaO + nH * masaH;

  return 0;
}