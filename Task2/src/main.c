#include <stdio.h>
#define N 5

void init_array(int* arr, int n);
void print_reversed_array(int* arr, int n);

int main() {
  int arr[N];

  init_array(arr, N);
  print_reversed_array(arr, N);

  return 0;
}

void init_array(int* arr, int n) {
  printf("Введите элементы массива (%d):\n", n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
}

void print_reversed_array(int* arr, int n) {
  for (int i = n - 1; i >= 0; i--) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}