#include <chrono>
#include <iostream>

void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

int partition(int arr[], const int low, const int high, const int pivot_index) {
  int pivot = arr[pivot_index];
  int i = low;
  int j = high;

  if (pivot_index == 0) {
    ++i;
  } else if (pivot_index == high) {
    --j;
  }

  do {
    // parcurge vectorul de la stanga spre dreapta, luand in considerare
    // elementele mai mari decat pivotul
    while (arr[i] <= pivot) {
      ++i;
    }

    // parcurge vectorul de la dreapta spre stanga, luand in considerare
    // elementele mai mici decat pivotul
    while (arr[j] > pivot) {
      --j;
    }

    if (i < j) {
      swap(&arr[i], &arr[j]);
    }
  } while (i < j);

  swap(&arr[pivot_index], &arr[j]);

  return j;
}

void quickSort(int arr[], int low, int high, const int pivot_index) {
  if (low < high) {
    int pi = partition(arr, low, high, pivot_index);

    quickSort(arr, low, pi - 1, pivot_index);
    quickSort(arr, pi + 1, high, pivot_index);
  }
}

void printArray(int arr[], int size) {
  int i;
  for (i = 0; i < size; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << '\n';
}

// Driver Code
int main() {
  int arr[] = {10, 3, 25, 12, 1, 5};
  int n = sizeof(arr) / sizeof(arr[0]);

  auto startTime = std::chrono::high_resolution_clock::now();

  quickSort(arr, 0, n - 1, 0);

  auto stopTime = std::chrono::high_resolution_clock::now();

  std::cout << "Sorted array: \n";

  printArray(arr, n);

  auto duration = std::chrono::duration_cast<std::chrono::microseconds>(
      stopTime - startTime);
  std::cout << '\n' << duration.count() << " ms" << '\n';

  return 0;
}