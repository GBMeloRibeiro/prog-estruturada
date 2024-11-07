#include <stdio.h>
#include <stdlib.h>

int func(int *vector, int num, int i) {
  if (i == num - 1) {
    return vector[i];
  }
  int maior = func(vector, num, i + 1);
  if (vector[i] > maior)
    return vector[i];
  else {
    return maior;
  }

  return (maior);
}
int main() {
  int n;
  scanf("%d", &n);
  // aloca vetor de n inteiros
  int *vet = (int *)malloc(n * sizeof(int));
  for (int i; i < n; i++) {
    scanf("%d", &vet[i]);
  }
  int maior = func(vet, n, 0);
  printf("%d\n", maior);
  free(vet);
  return 0;
}
