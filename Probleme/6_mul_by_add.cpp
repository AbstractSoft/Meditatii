// Înmulțirea a două numere naturale prin adunări repetate.

#include <iostream>

using namespace std;

int main() {

  size_t deinmultit;
  size_t inmultitor;
  
  cout << "Introduceti deinmultitul: ";
  cin >> deinmultit;
  cout << "Introduceti inmultitor: ";
  cin >> inmultitor;

  size_t result = deinmultit;

  for (int iter = 1; iter < inmultitor; ++iter) {
    result += deinmultit;
  }

  cout << "Rezultatul este: " << result;

  return 0;
}