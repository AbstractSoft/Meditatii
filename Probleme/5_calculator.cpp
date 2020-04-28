// Scrieți un program care simulează un calculator electronic pentru numere
// întregi: se introduc două numere întregi și o operație care poate fi
// +, -, *, /, reprezentând adunarea, scăderea, înmulțirea și câtul.

#include <iostream>
#include <process.h>

using namespace std;

int main() {
  int nr_1, nr_2;
  unsigned char op;

  cout << "Introduceti primul numar: ";
  cin >> nr_1;
  cout << "Introduceti al doilea numar: ";
  cin >> nr_2;
  cout << "Introduceti operatorul (+, -, *, /): ";
  cin >> op;

  long long result = 0;

  switch (op) {
  case '+':
    result = nr_1 + nr_2;
    break;
  case '-':
    result = nr_1 - nr_2;
    break;
  case '*':
    result = nr_1 * nr_2;
    break;
  case '/':
    result = nr_1 / nr_2;
    break;
    default:
      cout << "Operatie invalida!";
      exit(1);
  }

  cout << "Rezultatul este: " << result;
}