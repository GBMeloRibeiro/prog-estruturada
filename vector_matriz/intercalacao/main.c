#include <stdio.h>
#include <stdlib.h>

int main() {
  int A, B, menor;
  int inicio = 0;
  printf("valores de A e B:\n");
  scanf("%d %d", &A, &B);
  int a[A];
  int b[B];
  int c[A + B];
  printf("Valores de A:\n");
  for (int i = 0; i < A; i++) {
    scanf("%d", &a[i]);
  }
  printf("Valores de B:\n");
  for (int i = 0; i < B; i++) {
    scanf("%d", &b[i]);
  }
  printf("A = ");
  for (int j = 0; j < A; j++) {
    printf("%d ", a[j]);
  }
  printf("\n");
  printf("B = ");
  for (int j = 0; j < B; j++) {
    printf("%d ", b[j]);
  }
  printf("\n");
  if (A < B)
    menor = A;
  else
    menor = B;
  for (int i = 0; i < menor; i++) {
    c[inicio++] = a[i];
    c[inicio++] = b[i];
  }

  if (menor == A) {
    for (int i = menor; i < A + B; i++) {
      c[inicio++] = b[i];
    }
  } else {
    for (int i = menor; i < A + B; i++) {
      c[inicio++] = a[i];
    }
  }
  printf("\n");
  printf("C = ");
  for (int i = 0; i < A + B; i++) {
    printf("%d ", c[i]);
  }
  printf("\n");
  return 0;
}
