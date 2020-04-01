#include <iostream>

using namespace std;

int main() {
  // se citesc 3 caractere, sa se determine cate caractere sunt distincte-pag
  // 90- ex 7;
  char a, b, c;
  cin >> a >> b >> c;
  if (a != b && b != c) {
    cout << "Sunt 3 caractere distincte";
  } else if (a == b || b == c || a == c) {
    cout << "Sunt 2 caractere distincte";
  }

  else if (a != b && b == c || b != c && a == c) {
    cout << "Este 1 caracter distinct";
  }

  else if (a == b && b == c) {
    cout << "Sunt 0 caractere distincte";
  }

  return 0;
}