// lonel are H1 cm, Gigel are H2 cm, iar Danut are H3 cm. Scrieti un program
// care sa afiseze numele celor trei copii in ordinea crescatoare a inaltimii.

#include <cstdint>
#include <cstdlib>
#include <cstring>
#include <iostream>

struct Copil {
  Copil(const char *const valoare) {
    // Aloca memorie pentru sirul de caractere continut in
    // valoare(terminat cu '\0'-> null)
    nume = (char *)std::malloc(sizeof(valoare));
    std::strcpy(nume, valoare);
  }
  
  char *nume = nullptr;
  std::uint16_t inaltime;

  ~Copil() {
    if (nume != nullptr) {
      std::free(nume);
    }
  }
};

int main() {
  constexpr std::uint16_t nr_copii = 3;

  Copil copii[nr_copii]{"Ionel", "Gigel", "Danut"};

  std::cout << "Introduceti inaltimea H1: ";
  std::cin >> copii[0].inaltime;

  std::cout << "Introduceti inaltimea H2: ";
  std::cin >> copii[1].inaltime;

  std::cout << "Introduceti inaltimea H3: ";
  std::cin >> copii[2].inaltime;

  // sortam vectorul pe baza inaltimii
  bool gata = false;
  while (!gata) {
    gata = true;
    for (int i = 0; i <= nr_copii - 2; i++) {
      if (copii[i].inaltime > copii[i + 1].inaltime) {
        // ineficient, se creaza copii ale obiectelor, dar e ok pentru moment
        Copil aux = copii[i];
        copii[i] = copii[i + 1];
        copii[i + 1] = aux;

        // aux este variabila automatica si va fi stearsa de pe stiva
        // in momentul inchiderii blocului de cod in care se afla;
        // continutul memoriei alocate pentru nume nu va fi insa sters
        // dupa dealocare din motive de performanta, de aceea e nevoie sa
        // initializam manual memoria respectiva
        aux.nume = nullptr;

        gata = false;
      }
    }
  }

  for (int i = 0; i < nr_copii; ++i) {
    std::cout << i + 1 << ". " << copii[i].nume
              << ", cu inaltimea: " << copii[i].inaltime << '\n';
  }

  return 0;
}