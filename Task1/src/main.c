#include <stdio.h>
#define N 5

void print_matrix(int rows, int columns, int matrix[][columns]);
void init_matrix(int rows, int columns, int matrix[][columns]);

int main() {
  int matrix[N][N];

  init_matrix(N, N, matrix);
  print_matrix(N, N, matrix);

  return 0;
}

void print_matrix(int rows, int columns, int matrix[][columns]) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }
}

void init_matrix(int rows, int columns, int matrix[][columns]) {
  int value = 1;
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      matrix[i][j] = value;
      value++;
    }
  }
}
