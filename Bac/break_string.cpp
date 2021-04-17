#include <cstdio>
#include <iostream>

int main() {

  int L = 0, start = 0, stop = 0;
  char str[10000]{"PROBLEMA DE LA EXAMEN NU MI SE PARE FOARTE GREU DE REZOLVAT "
                  "IN TIMPUL ACORDAT"};
  std::cout << "Introduceti L: ";
  std::cin >> L;
  std::cout << '\n';

  do {
    stop = start + L;
    for (int i = stop - 1; i >= start; i--) {
      if (str[i] == '\0') {
        printf("%s\n\n", str);
        return 0;
      }

      if (str[i] == ' ') {
        str[i] = '\n';
        start = i + 1;
        break;
      }
    }
  } while (true);

  return 0;
}