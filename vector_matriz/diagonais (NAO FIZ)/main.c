#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, cont;
  scanf("%d", &n);
  int mat[n][n];
  int linha, coluna;
  for (linha = 0; linha < n; linha++) {
    for (coluna = 0; coluna < n; coluna++) {
      scanf("%d", &mat[linha][coluna]);
    }
  }
  for (linha = 0; linha < n; linha++) {
    cont = mat[linha][linha];
    mat[linha][linha] = mat[linha][(n - linha) - 1];
    mat[linha][(n - linha) - 1] = cont;
  }
  for (linha = 0; linha < n; linha++) {
    for (coluna = 0; coluna < n; coluna++) {
      printf("%d", mat[linha][coluna]);
    }
    printf("\n");
  }

  return 0;
}
