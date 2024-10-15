#include <stdio.h>
#include <stdlib.h>

int main() {
  int cont;
  int numero;
  int sequencia[8];
  printf("digite uma sequencia de 8 numeros inteiros: \n");
  for (int i = 0; i < 8; i++) {
    scanf("%d", &sequencia[i]);
  }
  for (int i = 0; i < 8; i++) {
    if (sequencia[i] >= 0) {
      cont = 0;
      numero = sequencia[i];
      for (int j = 0; j < 8; j++) {
        if (numero == sequencia[j]) {
          cont++;
          sequencia[j] = -1;
        }
      }
      printf("O numero %d aparece %d na sequencia.\n", numero, cont);
    }
  }
  return 0;
}
