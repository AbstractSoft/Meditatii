#include <iostream>
#include <string>

struct CFoo {
  CFoo(const std::string &strValue) { std::cout << strValue; }
  CFoo(bool bValue) { std::cout << " bool"; }
};

int main() {

  CFoo foo("Baba Safta"); // -> bool
  // CFoo foo(std::string("Baba Safta")); // -> Baba Safta

  return 0;
}