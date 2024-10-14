#include <stdio.h>

int main() {
  int n, num, somap, soma3, cont;
  float media3;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    scanf("%d", &num);
    if (num % 2 == 0) {
      somap = somap + num;
    } else if (num % 3 == 0) {
      soma3 = soma3 + num;
      cont++;
    }
  }
  media3 = soma3 / cont;
  printf("%d\n", somap);
  printf("%f\n", media3);
  return 0;
}
