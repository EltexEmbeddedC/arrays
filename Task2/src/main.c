#include <stdio.h>
#define N 5

void init_array(int* arr, int n);
void reverse_array(int* arr, int n);
void print_array(int* arr, int n);

int main() {
  int arr[N];

  init_array(arr, N);

  printf("Ввод -> ");
  print_array(arr, N);

  reverse_array(arr, N);

  printf("Вывод -> ");
  print_array(arr, N);

  return 0;
}

void init_array(int* arr, int n) {
  for (int i = 0; i < n; i++) {
    arr[i] = i + 1;
  }
}

void reverse_array(int* arr, int n) {
  for (int i = 0; i < n / 2; i++) {
    int temp = arr[i];
    arr[i] = arr[n - i - 1];
    arr[n - i - 1] = temp;
  }
}

void print_array(int* arr, int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}
