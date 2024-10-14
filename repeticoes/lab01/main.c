#include <stdio.h>

int main() {
  int n, i, j, cont, cont2, test;
  scanf("%d", &n);
  for (int i = 2; i < n / 2; i++) {
    cont = i;
    cont2 = n - i;
    int primo = 0;
    for (j = 2; j < cont; j++) {
      if (cont % j == 0) {
        primo++;
        break;
      }
    }
    if (primo == 0) {
      for (j = 2; j < cont2; j++) {
        if (cont2 % j == 0) {
          primo++;
          break;
        }
      }
      if (primo == 0) {
        printf("%d pode ser escrito como %d + %d\n", n, cont, cont2);
        test = 1;
      }
    }
  }
  if (test == 0)
    printf("nao achei\n");
  return 0;
}
