#include <iostream>
using namespace std;
int main() {
  // un nr de 3 cifre, sa se inlature o cifra astfel incat sa ramana un nr
  // maxim-pag 90- ex 6;
  int x, v[3], i;
  cin >> x;
  v[0] = x / 100;
  v[1] = (x % 100) / 10;
  v[2] = x % 10;
  if (v[0] > v[1] && v[1] > v[2]) {
    cout << v[0] << v[1];
  } else if (v[0] > v[1] && v[2] > v[1]) {
    cout << v[0] << v[2];
  } else if (v[1] > v[0] && v[2] > v[0]) {
    cout << v[1] << v[2];
  }
  return 0;
}