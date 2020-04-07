// Ex.17, pag.: 48

#include <bitset>
#include <iostream>

int main() {
  unsigned x, n;

  std::cout << "Introduceti numarul natural x: ";
  std::cin >> x;

  std::cout << "Introduceti n (0 <= n <= 15): ";
  std::cin >> n;

  /* a. */ // std::cout << "x * 2^n: " << (x << n) << '\n';

  /* b. */ // std::cout << "x / 2^n: " << (x >> n) << '\n';

  /* c. */ // std::cout << "x este impar? : " << (x &= 1) << '\n';

  /* d. */ // std::cout << "Valoarea bit-ului " << n
           //           << " este: " << ((x >> (n - 1)) & 1) << '\n';
  /* e. */
  // std::cout << std::bitset<16>(x) << '\n';
  // std::cout << std::bitset<16>(x & ~(1 << (n - 1))) << '\n';

  /* f. */
  // std::cout << std::bitset<16>(x) << '\n';
  // std::cout << std::bitset<16>(x | (1 << (n - 1))) << '\n';

  return 0;
}