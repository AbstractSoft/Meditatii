// pagina 193
#include <cmath>
#include <iostream>

using namespace std;

struct melc {
  int h, h_zi, h_noapte, index;
  int nr_zile() {
    return std::ceil((double)(h - h_zi) / (h_zi - h_noapte)) + 1;
  }
};

int main() {
  int n, i, pi, qi;

  //   cout << "Introduceti nr de stalpi: ";
  //   cin >> n;
  n = 5;

  melc *ierarhie = new melc[n];

  //   for (i = 0; i < n; ++i) {

  //     melc x;
  //     x.index = i;

  //     cout << "Introduceti inaltimea stalpului: " << i + 1;
  //     cin >> x.h;
  //     cout << " Cati metri urca melcul ziua? ";
  //     cin >> pi;
  //     cout << " Cati metri coboara melcul noaptea? ";
  //     cin >> qi;

  //     x.inaltime = pi - qi;
  //     ierarhie[i] = x;
  //   }

  ierarhie[0] = melc{2, 1, 0, 1};
  ierarhie[1] = melc{4, 4, 1, 2};
  ierarhie[2] = melc{5, 1, 0, 3};
  ierarhie[3] = melc{8, 5, 3, 4};
  ierarhie[4] = melc{10, 4, 1, 5};

  bool schimbat = true;

  while (schimbat) {
    for (i = 1; i < n; ++i) {
      if (ierarhie[i].nr_zile() < ierarhie[i - 1].nr_zile()) {
        melc min = ierarhie[i];
        ierarhie[i] = ierarhie[i - 1];
        ierarhie[i - 1] = min;

        schimbat = true;
      } else {
        schimbat = false;
      }
    }
  }

  for (i = 0; i < n; ++i) {
    cout << ierarhie[i].index << " (" << ierarhie[i].nr_zile() << ")\n";
  }
}