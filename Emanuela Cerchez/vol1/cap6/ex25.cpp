#include <fstream>
#include <iostream>
using namespace std;

struct coada {
  char tip;
  int baut;
};

struct sticla {
  int decilitri, nr_sticla;
};

/*int econom(int M, sticla ramas[])
{
        int min = ramas[0].decilitri, poz = 0;
        for (int i = 1; i < M; ++i)
        {
                if (ramas[i].decilitri < min)
                {
                        min = ramas[i].decilitri;
                        poz = ramas[i].nr_sticla;
                }
        }
        return min;
}

int risipitor(int M, sticla ramas[])
{
        int max = ramas[0].decilitri, poz = 0;
        for (int i = 1; i < M; ++i)
        {
                if (ramas[i].decilitri > max)
                {
                        max = ramas[i].decilitri;
                        poz = ramas[i].nr_sticla;
                }
        }
        return max;
}

int pepsi(int N, int M, int K, coada persoane[], int ramas[])
{
        if (persoana[i].tip == 'E')
        {
                if()
        }
}*/

int main() {
  ifstream f1("pepsi1.in");
  ofstream("pepsi1.out");

  int N, M, K, dif;
  f1 >> N;
  f1 >> M;
  f1 >> K;

  coada *persoane = new coada[N];
  sticla *sticle = new sticla[M];

  for (int i = 0; i < N; ++i) {
    f1 >> persoane[i].tip;
  }
  for (int i = 0; i < M; ++i) {
    f1 >> sticle[i].decilitri;
    sticle[i].nr_sticla = i + 1;
  }

  /*for (int i = 0; i < M; ++i)
  {
          if (sticle[i].decilitri == K)
          {
                  continue;
          }
          dif = K - sticle[i].decilitri;
          for (int j= 0; j < dif; ++j)
          {
                  cout << sticle[i].nr_sticla<<' ';
          }	*/

  int poz, ct = K;
  for (int i = 0; i < N; ++i) {
    if (persoane[i].tip == 'E') {
      for (int j = 0; j < M; ++j) {
        if (sticle[j].decilitri == 0) {
          poz = j;
          break;
        }
      }
      --ct;
      cout << poz;
    } else
  }

  return 0;
}