// 17. Operatii cu multimi, pag. 258

#include <iostream>

constexpr uint16_t nr_elem = 10; // 1024

void populare_vector_caracteristic(std::string, bool *);
void intersectie(bool **, const uint16_t &);

int main() {
  uint16_t nr_multimi;

  std::cout << "Introduceti numarul de multimi: ";
  std::cin >> nr_multimi;

  bool **multimi = new bool *[nr_multimi];
  for (int i = 0; i < nr_multimi; ++i) {
    multimi[i] = new bool[nr_elem]{};
  }

  std::cin.ignore(); // necesar pentru a elimina caracterele nedorite ramase in
                     // stream
  for (int i = 0; i < nr_multimi; ++i) {
    std::string linie{};
    std::cout << "Introduceti elementele multimii " << i + 1
              << " (separate prin spatii): ";

    std::getline(std::cin, linie);
    populare_vector_caracteristic(linie, multimi[i]);
  }

  intersectie(multimi, nr_multimi);
  // reuniune
  // ...

  for (int i = 0; i < nr_multimi; ++i) {
    delete[] multimi[i];
  }
  delete[] multimi;

  return 0;
}

void populare_vector_caracteristic(std::string linie,
                                   bool *vector_caracteristic) {
  int pozitie_separator = 0;
  int pozitie_curenta = 0;
  int index_vector_caracteristic = 0;
  int pozitie_anterioara = 0;
  std::string separator = " ";

  do {
    pozitie_separator = linie.find(separator, pozitie_curenta);

    if (pozitie_separator >= 0) {
      pozitie_curenta = pozitie_separator;
      index_vector_caracteristic = std::stoi(linie.substr(
          pozitie_anterioara, pozitie_curenta - pozitie_anterioara));

      vector_caracteristic[index_vector_caracteristic] = true;

      pozitie_curenta++;
      pozitie_anterioara = pozitie_curenta;
      index_vector_caracteristic++;
    }

  } while (pozitie_separator >= 0);

  index_vector_caracteristic =
      std::stoi(linie.substr(pozitie_anterioara, linie.length()));
  vector_caracteristic[index_vector_caracteristic] = true;
}

void intersectie(bool **multimi, const uint16_t &nr_multimi) {
  
  std::cout << "Intersectia contine elementele:\n";

  for (int index = 0; index < nr_elem; ++index) {
    bool membru_intersectie = true;
    for (int index_multime = 0; index_multime < nr_multimi; ++index_multime) {
      membru_intersectie &= multimi[index_multime][index];
    }

    if (membru_intersectie) {
      std::cout << index << " " << std::flush;
    }
  }

  std::cout << std::endl;
}