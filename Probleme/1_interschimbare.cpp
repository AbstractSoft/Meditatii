// Interschimbați conținutul a două numere de tip întreg citite de la tastatură.

#include <iostream>

using namespace std;

void interschimbare1(int *, int *);
void interschimbare2(int &nr_1, int &nr_2);

int main() {

  int nr_1, nr_2;

  cout << "Introduceti primul numar: ";
  cin >> nr_1;
  cout << "Introduceti al doilea numar: ";
  cin >> nr_2;

  interschimbare1(&nr_1, &nr_2);

  cout << "Primul numar: " << nr_1 << endl;
  cout << "Al doilea numar: " << nr_2 << endl;

  interschimbare2(nr_1, nr_2);

  cout << "Primul numar: " << nr_1 << endl;
  cout << "Al doilea numar: " << nr_2 << endl;

  return 0;
}

void interschimbare1(int *nr_1, int *nr_2) {
  int tmp = *nr_1;
  *nr_1 = *nr_2;
  *nr_2 = tmp;
}

void interschimbare2(int &nr_1, int &nr_2) {
  int tmp = nr_1;
  nr_1 = nr_2;
  nr_2 = tmp;
}