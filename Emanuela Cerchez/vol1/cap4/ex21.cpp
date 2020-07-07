#include <fstream>
#include <iostream>

struct aparitie {
  char litera = '\0';
  uint16_t nr_aparitii = 0;
};

constexpr char nume_fisier[] = "/Users/eduardghergu/Cursuri/C++/Meditatii/"
                               "Emanuela Cerchez/vol1/cap4/bin/BAC2000.TXT";
constexpr uint16_t nr_max_litere = 25;

aparitie aparitii[nr_max_litere];

uint16_t cauta_caracter(const char, bool &);

int main() {
  uint16_t k = 0;
  bool input_ok = false;

  while (!input_ok) {
    std::cout << "Introduceti numarul de repetitii ale unei litere: ";
    std::cin >> k;

    input_ok = !(k == 0 || k >= 2000);

    if (!input_ok) {
      std::cerr << "Valoarea numarul de repetitii ale unei litere trebuie sa "
                   "fie mai mare decat 0 si mai mica decat 2000!\n\n";

      char raspuns = '\0';

      while (raspuns == '\0') {
        std::cout << "Doriti sa incercati din nou? (y/n)\n";
        std::cin >> raspuns;

        raspuns = std::tolower(raspuns);

        if (raspuns != 'y' && raspuns != 'n') {
          std::cerr << "Raspuns incorect!\n";
          raspuns = '\0';
        }
      }

      if (raspuns == 'n') {
        std::cout << "La revedere!\n";
        std::exit(0);
      }
    }
  }

  std::ifstream f1(nume_fisier);
  if (!f1.is_open()) {
    std::cerr << "Fisierul cu numele '" << nume_fisier
              << "' nu poate fi accesat!\n";
    std::exit(1);
  }

  while (!f1.eof()) {
    char x = '\0';

    f1.get(x);
    if (x != '\0' && x != ' ' && x != '\n') {
      bool gasit = false;
      uint16_t index_caracter = cauta_caracter(x, gasit);

      if (!gasit) {
        aparitii[index_caracter].litera = x;
      }
      aparitii[index_caracter].nr_aparitii += 1;
    }
  }

  f1.close();

  for (uint16_t i = 0; i < nr_max_litere && aparitii[i].litera != '\0'; ++i) {
    if (aparitii[i].nr_aparitii == k) {
      std::cout << "Da\n";
      std::exit(0);
    }
  }

  std::cout << "Nu\n";

  return 0;
}

// Cauta caracterul si intoarce indexul la care se afla, daca il gaseste, sau
// indexul disponibil pentru pentru adaugare, daca nu il gaseste. Parametrul
// 'gasit' este folosit pentru a sti daca indexul este al caracterului gasit
// sau al pozitiei disponibile
uint16_t cauta_caracter(const char x, bool &gasit) {
  uint16_t i = 0;
  gasit = false;

  while (i < nr_max_litere && aparitii[i].litera != '\0') {
    if (aparitii[i].litera == x) {
      gasit = true;
      return i;
    }

    ++i;
  }

  return i;
}