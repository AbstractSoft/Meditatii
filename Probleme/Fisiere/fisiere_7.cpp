#include <cmath>
#include <fstream>
#include <iostream>

using namespace std;

struct punct {
  int x, y;
};

struct segment {
  punct inceput;
  punct sfarsit;

  size_t lungime() {
    return sqrt(pow(sfarsit.x - inceput.x, 2) + pow(sfarsit.y - inceput.y, 2));
  };
};

int main() {
  ifstream f1;
  ofstream f2;
  f1.open("segmente.txt");
  f2.open("rezultat.txt");
  int x, i = 0;

  segment segmente[2];
  for (int counter = 0; counter < 2; ++counter) {
    f1 >> segmente[counter].inceput.x >> segmente[counter].inceput.y;
    f1 >> segmente[counter].sfarsit.x >> segmente[counter].sfarsit.y;
  }

  if (segmente[0].lungime() > segmente[1].lungime()) {
    f2 << segmente[0].lungime() << " AB > CD";
  } else {
    f2 << segmente[1].lungime() << " CD > AB";
  }

  f1.close();
  f2.close();

  return 0;
}