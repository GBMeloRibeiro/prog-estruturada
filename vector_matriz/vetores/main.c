#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, m, cont;
  printf("tamanho dos vetores\n");
  scanf("%d", &n);
  m = n;
  int vetn[n];
  int vetm[m];
  printf("numeros dentro dos vetores\n");
  for (int i = 0; i < n; i++) {
    printf("VECTOR 1:\n");
    scanf("%d", &vetn[i]);
  }
  for (int i = 0; i < m; i++) {
    printf("VECTOR 2:\n");
    scanf("%d", &vetm[i]);
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (vetn[i] == vetm[j]) {
        cont++;
        printf("%d,", vetn[i]);
      } else
        continue;
    }
  }
  printf("\n");
  printf("%d numeros\n", cont);

  return 0;
}
