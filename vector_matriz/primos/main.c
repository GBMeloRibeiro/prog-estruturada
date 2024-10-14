#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, primo;
  scanf("%d", &n);
  int primos[50];
  int cont = 0;
  int test = 0;
  for (int i = 2; i <= n; i++) {
    test = 1;
    for (int j = 2; j < i; j++) {
      if (i % j == 0) {
        test = 0;
        break;
      }
    }
    if (test == 1) {
      primos[cont] = i;
      cont++;
    }
  }
  for (int k = 0; k < cont; k++) {
    printf("%i  ", primos[k]);
  }
  printf("\n");
  return 0;
}
