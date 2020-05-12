// Plata sumei
//
// Se citesc de la tastatura doua numere naturale S si x (0 < S <= 10000, 0 < x <= 100). 
// S reprezinta o suma pe care trebuie sa o platim, utilizand un numar minim de bancnote.
// Bancnotele au ca valori numai puteri ale lui x (1, X, x^2, x^3, ... ) si presupunem ca 
// dispunem de un numar suficient de mare de bancnote. Scrieti un program care afiseaza
// pe ecran o modalitate de a plati suma, utilizand un numar minim de bancnote. De exemplu, 
// pentru S=107 si x=5, veti afisa: 
// 4 bancnote cu valoarea 25
// 1 bancnote cu valoarea 5
// 2 bancnote cu valoarea 1

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int s, x, max;
    cin>>s>>x; 

    while(s!=0)
    {
        int i=0;
        while (pow(x,i) < s) 
        {
            max=i;
            ++i;
        }

        int putere=pow(x,max);

        cout<<(s/putere)<<" bancnote de "<<putere<<endl;
        s %= putere;
    }
    return 0;
}