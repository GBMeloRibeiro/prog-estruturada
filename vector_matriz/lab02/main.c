#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, somanum;
  scanf("%d", &n);
  int vet1[100];
  int vet2[100];
  int soma[100];
  int resto = 0;
  printf("insira os valores do primeiro vector:\n");
  for (int i = 1; i <= n; i++) {
    scanf("%d", &vet1[i]);
  }
  vet1[0] = 0;
  printf("insira os valores do segundo vector:\n");
  for (int i = 1; i <= n; i++) {
    scanf("%d", &vet2[i]);
  }
  vet2[0] = 0;
  for (int i = n; i >= 1; i--) {
    somanum = vet1[i] + vet2[i] + resto;
    soma[i] = somanum % 10;
    resto = somanum / 10;
  }
  soma[0] = resto;
  printf("soma = ");
  for (int i = 0; i <= n; i++) {
    printf("%d", soma[i]);
  }
  printf("\n");
  return 0;
}
