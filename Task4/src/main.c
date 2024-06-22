#include <stdio.h>
#define N 5

void print_matrix(int rows, int columns, int matrix[][columns]);
void init_matrix(int n, int matrix[][n]);

int main() {
  int matrix[N][N];

  init_matrix(N, matrix);
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

void init_matrix(int n, int matrix[][n]) {
  int value = 1;
  int top = 0, bottom = n - 1;
  int left = 0, right = n - 1;

  while (value <= n * n) {
    for (int i = left; i <= right; i++) {
      matrix[top][i] = value++;
    }
    top++;

    for (int i = top; i <= bottom; i++) {
      matrix[i][right] = value++;
    }
    right--;

    for (int i = right; i >= left; i--) {
      matrix[bottom][i] = value++;
    }
    bottom--;

    for (int i = bottom; i >= top; i--) {
      matrix[i][left] = value++;
    }
    left++;
  }
}
