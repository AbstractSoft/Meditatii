#include <iostream>
using namespace std;

int m;
struct reper {
  int lungime = 0, bucati = 0;
};
reper *repere = nullptr;

void taie(int k, int &n) {
  if (n == 0) {
    return;
  }

  if (k + 1 > m) {
    k = 0;
  }

  if (repere[k].lungime < n) {
    n -= repere[k].lungime;
    ++repere[k].bucati;
  }
  taie(k + 1, n);
}

int main() {
  int n = 370;
  m = 4;
  // cin >> n;
  // cin >> m;

  repere = new reper[m]{{20, 0}, {40, 0}, {35, 0}, {45, 0}};

  for (int i = 0; i < m; ++i) {
    // cin >> repere[i].lungime;
    n -= repere[i].lungime;
    ++repere[i].bucati;

    if (n == 0) {
      break;
    }
  }

  taie(0, n);
  for (int i = 0; i < m; ++i) {
    cout << "Din elementul " << i + 1 << " au fost taiate " << repere[i].bucati
         << " bucati" << endl;
  }

  delete[] repere;
  return 0;
}
