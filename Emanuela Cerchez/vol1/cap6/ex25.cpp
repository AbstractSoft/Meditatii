#include <cstdint>
#include <fstream>
#include <iostream>

struct sticla {
  uint16_t decilitri = 0;
  uint16_t disponibil = 0;
};

uint16_t index_minim_local(const sticla *sticle, const uint16_t nr_sticle,
                           const uint16_t index_vechi = UINT16_MAX);

constexpr std::string_view nume_fisier_in{"pepsi2.in"};
constexpr std::string_view nume_fisier_out{"pepsi2.out"};

int main() {
  std::ifstream in(
      std::string("Emanuela Cerchez/vol1/cap6/bin/").append(nume_fisier_in));
  if (!in.is_open()) {
    std::cerr << "Fisierul cu numele '" << nume_fisier_in
              << "' nu poate fi accesat!\n";
    std::exit(1);
  }

  std::ofstream out(
      std::string("Emanuela Cerchez/vol1/cap6/bin/").append(nume_fisier_out));
  if (!out.is_open()) {
    std::cerr << "Fisierul cu numele '" << nume_fisier_out
              << "' nu poate fi accesat!\n";
    std::exit(1);
  }

  uint16_t N, M, K;
  in >> N; // nr persoane
  in >> M; // nr sticle
  in >> K; // nr decilitri

  char *tip_persoane = new char[N];
  sticla *sticle = new sticla[M];

  for (int i = 0; i < N; ++i) {
    in >> tip_persoane[i];
  }
  for (int i = 0; i < M; ++i) {
    in >> sticle[i].decilitri;
    sticle[i].disponibil = K - sticle[i].decilitri;
  }

  uint16_t index = index_minim_local(sticle, M);
  bool minim_gasit = false;

  // Se parcurge lista de persoane (econom, risipitor)
  for (int i = 0; i < N; ++i) {
    if (sticle[index].disponibil == 0) {
      --i;
      index = index_minim_local(sticle, M);
      if (tip_persoane[i] == 'R') {
        minim_gasit = true;
      }
      continue;
    }
    if (tip_persoane[i] == 'R') {
      if (minim_gasit) {
        index = index_minim_local(sticle, M, index);
        minim_gasit = false;
      } else {
        index = index_minim_local(sticle, M);
        minim_gasit = true;
      }
    }
    out << index + 1 << " " << std::flush;
    --sticle[index].disponibil;
  }

  // Inchidem fisierele
  in.close();
  out.close();

  // Dealocam memoria alocata dinamic (heap)
  delete[] tip_persoane;
  delete[] sticle;

  return 0;
}

uint16_t index_minim_local(const sticla *sticle, const uint16_t nr_sticle,
                           const uint16_t index_vechi) {

  uint16_t min = sticle[0].decilitri;
  uint16_t index_min = 0;

  for (int j = 1; j < nr_sticle; ++j) {
    if (sticle[j].disponibil == 0 || index_vechi == j) {
      continue;
    }

    if (sticle[j].decilitri < min) {
      min = sticle[j].decilitri;
      index_min = j;
      if (index_min < sticle[j + 1].decilitri) {
        break;
      }
    }
  }

  return index_min;
}