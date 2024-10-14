#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  for (int h = 5; h <= n; h++) {
    for (int c1 = 1; c1 < h; c1++) {
      for (int c2 = 1; c2 < h; c2++)
        if ((h * h) == (c1 * c1) + (c2 * c2)) {
          printf("hipotenusa = %d, catetos %d e %d\n", h, c1, c2);
        }
    }
  }

  return 0;
}
