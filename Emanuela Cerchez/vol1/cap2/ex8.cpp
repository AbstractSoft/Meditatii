#include <iostream>

using namespace std;

int main() {
  // suma a doua unghiuri in grade, minute, secunde-pag 90- ex8;
  int g1, m1, s1, g2, m2, s2;
  cin >> g1 >> m1 >> s1;
  cin >> g2 >> m2 >> s2;
  s1 += s2;
  
  m1 += m2;
  g1 += g2;
  while (s1 >= 60) {
    ++m1;
    s1 -= 60;
  }
  while (m1 >= 60) {
    ++g1;
    m1 -= 60;
  }
  cout << g1 << "grade" << ' ' << m1 << "minute" << ' ' << s1 << "secunde";
  return 0;
}