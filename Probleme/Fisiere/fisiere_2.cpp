// Sa se interschimbe valorile a 2 numere citite din fisierul a.txt.
// Valorile de dupa schimbare vor fi rescrise in acelasi fisier.

#include <fstream>
#include <iostream>

using namespace std;

int main() {

  fstream f1;

  f1.open("/Users/eduardghergu/Cursuri/C++/Meditatii/Probleme/Fisiere/a.txt",
          ios::in | ios::out);

  if (!f1.is_open()) {
    std::cerr << "Fisierul nu poate fi deschis";
  }

  int x1, x2;
  f1 >> x1 >> x2;

  int aux = x1;
  x1 = x2;
  x2 = aux;

  f1.seekg(0); // "seek get" -> pozitioneaza cursorul la inceputul fisierului

  f1 << x1 << ' ' << x2;
  f1.flush();
  f1.close();

  return 0;
}