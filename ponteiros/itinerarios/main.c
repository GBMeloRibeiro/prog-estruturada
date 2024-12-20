#include <stdio.h>
#include <stdlib.h>

int main() {
  int **M;
  M = (int **)malloc(4 * sizeof(int *));
  for (int i = 0; i < 4; i++) {
    M[i] = (int *)malloc(4 * sizeof(int));
  }
  M[0][0] = 0;
  M[0][1] = 4;
  M[0][2] = 9;
  M[0][3] = 3;
  M[1][0] = 5;
  M[1][1] = 0;
  M[1][2] = 1;
  M[1][3] = 400;
  M[2][0] = 2;
  M[2][1] = 1;
  M[2][2] = 0;
  M[2][3] = 8;
  M[3][0] = 7;
  M[3][1] = 5;
  M[3][2] = 2;
  M[3][3] = 0;

  int valor, was, going;
  int n;
  printf("How many cities do you passed\n");
  scanf("%d", &n);
  printf("Wich city are you was?\n");
  scanf("%d", &was);
  for (int i = 0; i < n - 1; i++) {
    printf("wich city are you going\n");
    scanf("%d", &going);
    valor += M[was][going];
    was = going;
  }
  valor = valor - 10;
  free(M);
  printf("%d", valor);
  printf("\n");
  return 0;
}
