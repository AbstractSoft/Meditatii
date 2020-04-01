// Împărțirea a două numere prin scăderi repetate.
#include <iostream>

using namespace std;

int main() {

  size_t deimpartit;
  size_t impartitor;

  cout << "Introduceti deimpartitul: ";
  cin >> deimpartit;
  cout << "Introduceti impartitor: ";
  cin >> impartitor;

  size_t result = 0;

  for (int iter = deimpartit; iter > 0; iter -=impartitor) {
    ++result;
  }

  cout << "Rezultatul este: " << result;

  return 0;
}