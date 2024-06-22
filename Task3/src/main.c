#include <stdio.h>
#define N 5

void print_matrix(int rows, int columns, int matrix[][columns]);
void init_triangular_matrix(int n, int matrix[][n]);

int main() {
  int matrix[N][N];

  init_triangular_matrix(N, matrix);
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

void init_triangular_matrix(int n, int matrix[][n]) {
  for (int i = 0; i < n; i++) {
    int counter = n - i;
    for (int j = 0; j < n; j++) {
      matrix[i][j] = (j < counter) ? 1 : 0;
    }
  }
}
