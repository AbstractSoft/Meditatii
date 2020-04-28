// Scrieți un program care primește la intrare un număr de secunde și întoarce
// numărul maxim de ore, de minute, de secunde care este echivalent ca timp.

#include <iostream>

using namespace std;

int main() {

  size_t nr_secunde = 7835;
  size_t nr_sec = 0, nr_min = 0, nr_ore = 0;

  cout << "Introduceti numarul de secunde: ";
  cin >> nr_secunde;

  nr_sec = nr_secunde % 60;
  nr_min = ((nr_secunde - nr_sec) / 60) % 60;
  nr_ore = (nr_secunde - nr_min * 60 - nr_sec) / 3600;

  return 0;
}