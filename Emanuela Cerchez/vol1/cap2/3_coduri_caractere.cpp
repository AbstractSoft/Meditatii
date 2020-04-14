// Scrieti un program care sa afiseze toate caracterele din codul ASCII, precum
// si codul lor. Se va scrie mai intai caracterul, apoi codul ASCII
// corespunzator separat printr-un spatiu, cate doua grupe cod-caracter pe o
// linie, separate prin tab.

#include <iostream>

int main() {

  for (int index = 0; index < 128; ++index) {
    std::cout.flush();

    switch (index) {
    case 7:
      std::cout << "\\a ";
      break;
    case 8:
      std::cout << "\\b ";
      break;
    case 9:
      std::cout << "\\t ";
      break;
    case 10:
      std::cout << "\\l ";
      break;
    case 11:
      std::cout << "\\v ";
      break;
    case 12:
      std::cout << "\\f ";
      break;
    case 13:
      std::cout << "\\r ";
      break;
    case 26:
      std::cout << "eof ";
      break;
    case 27:
      std::cout << "esc ";
      break;
    case 32:
      std::cout << "space ";
      break;
    case 127:
      std::cout << "del ";
      break;
    default:
      if (index < 32) {
        std::cout << "\\" << index;
      } else {
        std::cout << (unsigned char)index;
      }

      std::cout << " ";
    }
    std::cout << index << '\t' << (unsigned char)(index + 128) << " "
              << index + 128 << std::endl;
  }

  return 0;
}