#include <cmath>
#include <iostream>

using namespace std;

int main() {
  // determina daca a,b,c pot fi laturile unui triunghi dreptunghic + calculeaza
  // aria-pag 90-ex9
  int a, b, c, aria;
  cout << "Introduceti numerele in ordine descrescatoare";
  cin >> a >> b >> c;
  if (pow(a, 2) == pow(b + c, 2)) {
    cout << "Triunghiul este dreptunghic";
    aria = (b * c) / 2;
    cout << "Aria este " << aria;
  } else {
    cout << "Triunghiul nu este dreptunghic";
  }

  return 0;
}