// pag. 259

#include <iomanip>
#include <iostream>

/*
Any live cell with two or three live neighbours survives.
Any dead cell with three live neighbours becomes a live cell.
All other live cells die in the next generation. Similarly, all other dead cells
stay dead.
*/

void clearScreen(void);

constexpr uint16_t nr_vecini{8};
constexpr uint16_t nr_linii{20};
constexpr uint16_t nr_coloane{20};

struct celula {
  bool vie{false};
  uint16_t linie{0};
  uint16_t coloana{0};
  celula *(*tabla)[nr_linii][nr_coloane]{};

  celula(celula *(*tabla)[nr_linii][nr_coloane], const uint16_t linie,
         const uint16_t coloana, bool vie = false) {
    this->tabla = tabla;
    this->linie = linie;
    this->coloana = coloana;
    this->vie = vie;
  }

  void actualizare() {
    uint16_t nr_vecini_vii = 0;

    if (linie - 1 >= 0) {
      if (coloana - 1 >= 0) {
        if ((*(*tabla)[linie - 1][coloana - 1]).vie) {
          ++nr_vecini_vii;
        }
      }

      if ((*(*tabla)[linie - 1][coloana]).vie) {
        ++nr_vecini_vii;
      }

      if (coloana + 1 < nr_coloane) {
        if ((*(*tabla)[linie - 1][coloana + 1]).vie) {
          ++nr_vecini_vii;
        }
      }
    }

    if (coloana + 1 < nr_coloane) {
      if ((*(*tabla)[linie][coloana + 1]).vie) {
        ++nr_vecini_vii;
      }
    }

    if (coloana - 1 >= 0) {
      if ((*(*tabla)[linie][coloana - 1]).vie) {
        ++nr_vecini_vii;
      }
    }

    if (linie + 1 < nr_linii) {
      if ((*(*tabla)[linie + 1][coloana]).vie) {
        ++nr_vecini_vii;
      }

      if (coloana + 1 < nr_coloane) {
        if ((*(*tabla)[linie + 1][coloana + 1]).vie) {
          ++nr_vecini_vii;
        }
      }

      if (coloana - 1 >= 0) {

        if ((*(*tabla)[linie + 1][coloana - 1]).vie) {
          ++nr_vecini_vii;
        }
      }
    }

    vie = !(nr_vecini_vii < 2 || nr_vecini_vii > 3);
  }
};

int main() {
  celula *tabla[nr_linii][nr_coloane]{};
  for (uint16_t linie = 0; linie < nr_linii; ++linie) {
    for (uint16_t coloana = 0; coloana < nr_coloane; ++coloana) {
      tabla[linie][coloana] = new celula(&tabla, linie, coloana);
    }
  }

  tabla[9][7]->vie = true;
  tabla[10][9]->vie = true;
  tabla[11][8]->vie = true;
  tabla[11][7]->vie = true;

  while (true) {
    uint16_t linie{0};

    for (; linie < nr_linii; ++linie) {
      for (uint16_t coloana = 0; coloana < nr_coloane; ++coloana) {
        if (tabla[linie][coloana]->vie) {
          std::cout << std::setw(nr_coloane) << "x" << std::flush;
        }
      }
    }

    for (uint16_t linii_ecran = 0; linii_ecran < 40; ++linii_ecran) {
      std::cout << std::endl;
    }
  }

  return 0;
}

void clearScreen(void) {
// Tested and working on Ubuntu and Cygwin
#if defined(OS_WIN)
  HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
  CONSOLE_SCREEN_BUFFER_INFO csbi;
  DWORD count;
  DWORD cellCount;
  COORD homeCoords = {0, 0};

  if (hStdOut == INVALID_HANDLE_VALUE)
    return;

  /* Get the number of cells in the current buffer */
  GetConsoleScreenBufferInfo(hStdOut, &csbi);
  cellCount = csbi.dwSize.X * csbi.dwSize.Y;

  /* Fill the entire buffer with spaces */
  FillConsoleOutputCharacter(hStdOut, (TCHAR)' ', cellCount, homeCoords,
                             &count);

  /* Fill the entire buffer with the current colors and attributes */
  FillConsoleOutputAttribute(hStdOut, csbi.wAttributes, cellCount, homeCoords,
                             &count);

  SetConsoleCursorPosition(hStdOut, homeCoords);

#elif defined(OS_LINUX) || defined(OS_MAC)
  cout << "\033[2J;"
       << "\033[1;1H"; // Clears screen and moves cursor to home pos on POSIX
                       // systems
#endif
}
