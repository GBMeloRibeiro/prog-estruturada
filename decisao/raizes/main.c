#include <math.h>
#include <stdio.h>

int main() {
  float a, b, c;
  scanf("%f %f %f", &a, &b, &c);
  float descriminante;
  float raiz1, raiz2;
  descriminante = (b * b) - (4 * a * c);
  switch (descriminante > 0) {
  case 1:
    raiz1 = (-b + sqrt(descriminante)) / (2 * a);
    raiz2 = (-b - sqrt(descriminante)) / (2 * a);
    printf("%.2f %.2f\n\n", raiz1, raiz2);
    break;
  case 0:
    switch (descriminante < 0) {
    case 1:
      printf("sem raizes reais\n\n");
      break;
    case 0:
      raiz1 = raiz2 = -b / (2 * a);
      printf("%f %f\n\n", raiz1, raiz2);
      break;
    }
  }
  return 0;
}
