#include <iostream>

// Functie pentru cautare binara. Intoarce locatia lui x intr-un vector dat
// arr[l..r] daca este prezent, -1 in caz contrar
int cautare_binara(int arr[], int l, int r, int x) {
  if (r >= l) {
    int mid = l + (r - l) / 2;

    // Daca valoarea cautata este egala cu cea a elementului central
    if (arr[mid] == x) {
      return mid;
    }

    // Daca valoarea cautata este mai mica decat elementul central,
    // atunci ea s-ar putea afla numai in sub-vectorul din stanga
    if (arr[mid] > x) {
      return cautare_binara(arr, l, mid - 1, x);
    }

    // Daca nu, atunci ea s-ar putea afla numai in sub-vectorul din dreapta
    return cautare_binara(arr, mid + 1, r, x);
  }

  // Daca valoarea nu este prezenta in vector
  return -1;
}

int main(void) {
  int arr[] = {2, 3, 4, 10, 40};
  int x = 10;
  int n = sizeof(arr) / sizeof(arr[0]);

  int result = cautare_binara(arr, 0, n - 1, x);

  (result == -1) ? std::cout << "Elementul nu este prezent in vector"
                 : std::cout << "Element este prezent la indexul " << result;

  return 0;
}
