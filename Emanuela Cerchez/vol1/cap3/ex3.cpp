#include <fstream>
#include <iostream>

std::ifstream::pos_type file_size(const string &);

int main() {
  std::string nume1, nume2;

  std::cout << "Introduceti numele primului fisier: ";
  std::cin >> nume1;
  std::cout << "Introduceti numele fisierului 2: ";
  std::cin >> nume2;

  std::ifstream::pos_type size_1 = file_size(nume1);
  std::ifstream::pos_type size_2 = file_size(nume2);

  if (size_1 == -1) {
    std::cout << "Fisierul cu calea " << nume1
              << " nu poate fi gasit sau nu este accesibil";
  }

  if (size_2 == -1) {
    std::cout << "Fisierul cu calea " << nume2
              << " nu poate fi gasit sau nu este accesibil";
  }

  if (size_1 != size_2) {
    std::cout << "Fisierele nu sunt identice";
    exit(1);
  }

  std::ifstream f1(nume1);
  std::ifstream f2(nume2);

  while (!f1.eof() && !f2.eof()) {
    char ch1;
    char ch2;

    f1.get(ch1);
    f1.get(ch2);
    if (ch1 != ch2) {
      std::cout << "Fisierele nu sunt identice";
      exit(1);
    }
  }
  std::cout << "Fisierele sunt identice";

  f1.close();
  f2.close();

  return 0;
}

std::ifstream::pos_type file_size(const string &filename) {
  std::ifstream in(filename, std::ifstream::ate | std::ifstream::binary);
  if (in.is_open()) {
    std::ifstream::pos_type result = in.tellg();
    in.close();
    return result;
  }
  return -1;
}