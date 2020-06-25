#include <cstdint>
#include <cstdlib>
#include <iostream>

void verifica_elem_prime(int *const, const uint16_t &);
bool este_nr_prim(int);
void verifica_palidrom(int *const, const uint16_t &);
int sterge_num_impare(int **, const uint16_t &);
bool este_nr_par(int num);
int inserare_1_dupa_0(int **, const uint16_t &);

int main() {
  //   uint16_t nr_elem;

  //   std::cout << "Introduceti numarul de elemente al vectorului [1-50]: ";
  //   std::cin >> nr_elem;

  //   int *vector = new int[nr_elem];

  //   for (uint16_t i = 0; i < nr_elem; ++i) {
  //     std::cout << "introduceti valoarea elementului " << i;
  //     std::cin >> vector[i];
  //   }

  constexpr uint16_t nr_elem = 15;
  int *vector = new int[nr_elem]{1, 2, 3, 4, 5, 6, 7, 8, 7, 6, 5, 4, 3, 2, 1};

  //   verifica_elem_prime(vector, nr_elem);
  //   verifica_palidrom(vector, nr_elem);

  int nr_elem_pare = sterge_num_impare(&vector, nr_elem);
  for (uint16_t i = 0; i < nr_elem_pare; ++i) {
    std::cout << "Elementul [" << i << "] este: " << vector[i] << "\n";
  }

  // int nr_elem_1_si_0 = inserare_1_dupa_0(&vector, nr_elem);
  // for (uint16_t i = 0; i < nr_elem_1_si_0; ++i) {
  //   std::cout << "Elementul [" << i << "] este: " << vector[i] << "\n";
  // }

  delete[] vector;

  return 0;
}

void verifica_elem_prime(int *const vector, const uint16_t &nr_elem) {
  for (uint16_t i = 0; i < nr_elem; ++i) {
    if (!este_nr_prim(vector[i])) {
      return;
    }
  }

  std::cout << "Vectorul are toate elementele prime\n";
}

bool este_nr_prim(int num) {
  if (num < 2) {
    return false; // 0 si 1 nu sunt prime
  }

  for (int d = 2; d * d <= num; ++d) {
    if (num % d == 0) {
      return false;
    }
  }

  return true;
}

void verifica_palidrom(int *const vector, const uint16_t &nr_elem) {
  uint16_t limita = nr_elem / 2;

  for (uint16_t i = 0; i < limita; ++i) {
    if (vector[i] != vector[nr_elem - 1 - i]) {
      return;
    }
  }

  std::cout << "Vectorul este palidrom de numere\n";
}

int sterge_num_impare(int **vector, const uint16_t &nr_elem) {
  int *buffer = (int *)std::malloc(sizeof(int));
  uint16_t contor = 0;

  for (uint16_t i = 0; i < nr_elem; ++i) {
    if (este_nr_par((*vector)[i])) {
      buffer[contor] = (*vector)[i];
      buffer = (int *)std::realloc(buffer, sizeof(buffer) + 1);
      if (buffer == NULL) {
        exit(1);
      }

      ++contor;
    }
  }

  delete[] * vector;

  *vector = buffer;

  return contor;
}

bool este_nr_par(int num) { return num % 2 == 0; }

int inserare_1_dupa_0(int **vector, const uint16_t &nr_elem) {
  int *buffer = (int *)std::malloc(sizeof(int));
  uint16_t contor = 0;

  for (uint16_t i = 0; i < nr_elem; ++i) {
    buffer[contor] = (*vector)[i];
    if ((*vector)[i] == 0) {
      buffer = (int *)realloc(buffer, sizeof(buffer) + 1);

      if (buffer == NULL) {
        exit(1);
      }

      buffer[++contor] = 1;
    }
    ++contor;
  }

  delete[] * vector;

  *vector = buffer;

  return contor;
}