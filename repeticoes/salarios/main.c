#include <stdio.h>

int main() {
  double salario = 1000;
  float aumento = 0.1;

  for (int i = 1996; i <= 2024; i++) {
    salario = salario + (salario * (aumento / 100));
    aumento = aumento * 2;
    printf("Ano: %d, Salario: R$ %2lf , Aumento: %f\n", i, salario, aumento);
  }

  return 0;
}
