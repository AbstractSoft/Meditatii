#include <cmath>
#include <iostream>
using namespace std;
int main() {
  int x, y;
  cin >> x >> y;
  if (x > 0 && y > 0) {
    cout << (x + y) / (5 * x * y);
  } else if (x == 0 || y == 0) {
    cout << min(x, y);
  }

  else {
    cout << (1 / x + 1 / y) * (1 / x + 1 / y + pow(x, 2) + pow(y, 2));
  }

  return 0;
}