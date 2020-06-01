// Sef
//
// O firma face angajari. Fiecarei persoane angajate ii corespunde un numar
// natural nenul a carui reprezentare binara ocupa 16 biti. Acest numar
// reprezinta codul persoanei in ierarhia firmei. Astfel, fiind date doua numere
// a si b, spunem ca a este "seful" lui b daca pentru orice pozitie binara 0 a
// lui a, pozitia corespunzatoare din b este 0. Evident, orice persoana este
// propriul ei sef. Se citeste n, un numar natural care reprezinta codul unei
// persoane. Se cere sa se afiseze numarul sefilor sai. De exemplu, pentru n =
// 255 veti afisa 256.

#include <iostream>

int main() {
  uint16_t n;
  std::cout << "Introduceti codul angajatului: ";
  std::cin >> n;

  return 0;
}