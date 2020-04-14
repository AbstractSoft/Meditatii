// Se dau trei numere reale x, y, z. Sa se verifice daca aceste numere pot fi
// laturile unui triunghi. Daca da, programul se va termina cu succes si va
// afisa aria triunghiului. Daca nu, programul va returna un cod de eroare
// specific erorii aparute.
//
// Laturile se noteaza cu a=BC, b=CA, c=AB si verifica inegalitatile:
// a < b + c, b < c + a, c < a + b
// a > |b − c|, b > |c − a|, c > |a − b|
#include <cmath>
#include <iostream>

int main() {
  float x, y, z;
  std::cout << "Introduceti valoarea numarului real x:";
  std::cin >> x;
  std::cout << "Introduceti valoarea numarului real y:";
  std::cin >> y;
  std::cout << "Introduceti valoarea numarului real z:";
  std::cin >> y;

  if (x < 0 || y < 0 || z < 0) {
    std::cout << "Numerele nu pot fi mai mici decat zero!";
    std::exit(1);
  }

  if ((x > y + z) || (y > z + x) || (z > x + y)) {
    std::cout << "Numerele nu pot fi lungimile laturilor unui triunghi!";
    std::exit(2);
  }

  // Aplicam formula lui Heron pentru calculul ariei:
  // p = semiperimetrul triunghiului

  float p = (x + y + z) / 2;

  float s = std::sqrt(p * (p - x) * (p - y) * (p - z));

  std::cout << "Aria triunghiului este: " << s << '\n';

  return 0;
}
