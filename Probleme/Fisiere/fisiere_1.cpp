// Sa se calculeze suma a 2 numere naturale care se citesc dintr-un fisier
// a.txt. Sa se calculeze suma celor 2 numere si sa se scrie in fisierul b.txt.

#include <fstream>
#include <iostream>
#include <string_view>

constexpr std::string_view nume_fisier_in = "a.txt";
constexpr std::string_view nume_fisier_out = "b.txt";

int main() {

    std::size_t numar_1;
    std::size_t numar_2;
    std::size_t suma;

    std::ifstream fisier_numere_in(nume_fisier_in);

    if (!fisier_numere_in) {
        std::cerr << "Eroare la deschiderea fisierului!" << '\n';
        exit(1);
    }

    fisier_numere_in >> numar_1;
    std::cout << "Primul numar este: " << numar_1;
    fisier_numere_in >> numar_2;
    std::cout << "Al doilea numar este: " << numar_2;

    fisier_numere_in.close();

    suma = numar_1 + numar_2;

    std::ofstream fisier_numere_out(nume_fisier_out);
    fisier_numere_out << numar_1 << ' '
                      << numar_2;

    return 0;
}