#include <fstream>
#include <iostream>

using namespace std;
int main() {
  int linie = 1, ct = 0;
  char x;

  ifstream f1("nr.in");
  while (!f1.eof()) {
    f1.get(x);
    if (x != ' ' && x != '\n') {
      ++ct;
    }
    if (x == ' ') {
      continue;
    }
    if (x == '\n') {
      cout << " Pe linia " << linie << " sunt " << ct << " numere" << endl;
      ++linie;
      ct = 0;
    }
  }
  f1.close();

  return 0;
}