// pag. 259

#include <iomanip>
#include <iostream>

constexpr uint16_t nr_vecini{8};
constexpr uint16_t nr_linii{20};
constexpr uint16_t nr_coloane{20};

struct celula {
  bool vie{false};
  uint16_t linie{0};
  uint16_t coloana{0};
  celula *(*tabla)[nr_linii][nr_coloane]{};

  celula(celula *(*tabla)[nr_linii][nr_coloane], const uint16_t linie,
         const uint16_t coloana, bool vie = false /* parametru optional */) {
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
        tabla[linie][coloana]->actualizare();
        if (tabla[linie][coloana]->vie) {
          std::cout << std::setw(nr_coloane) << "x" << std::flush;
        }
      }
    }

    for (uint16_t linii_ecran = 0; linii_ecran < nr_linii; ++linii_ecran) {
      std::cout << std::endl; // ???
    }
  }

  return 0;
}