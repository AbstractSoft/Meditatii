// Cuvinte
//
// Se citeste de la tastatura o propozitie constituita din cuvinte separate prin unul sau mai multe spatii.
// Sfarsitul propozitiei este marcat de intalnirea caracterului '.'.
// Scrieti un program care determina si afiseaza numarul de cuvinte din propozitie.

#include <iostream>

int main() {
    char ch, ch_anterior = ' ';
    int contor_ch = 0;
    bool este_cuvant = false;

    std::cout << "Introduceti propozitia: ";

    do {
        ch = getchar();

        if (ch_anterior == ' ' && ch != ' ') {
            ++contor_ch;
        }

        ch_anterior = ch;
    } while (ch != '.');

    std::cout << "Numarul de cuvinte este: " << contor_ch << '\n';

    return 0;
}