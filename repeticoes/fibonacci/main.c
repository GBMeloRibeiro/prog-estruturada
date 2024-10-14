#include <stdio.h>

int main() {
  int c, n;
  int a = 0;
  int b = 1;
  scanf("%d", &n);
  while (n < 0) {
    printf("digite um valor positivo\n");
    scanf("%d", &n);
  }
  while ((a != n) && (a < n)) {
    printf("%d\n", a);
    c = a + b;
    a = b;
    b = c;
  }

  if (a == n) {
    printf("%d\n", n);
  }
  return 0;
}
