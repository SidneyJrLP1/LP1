#include <stdio.h>
#include <stdlib.h>
struct Aluno {
  float p1;
  float p2;
  float freq;
};

void preenche(struct Aluno* a) {
  printf("Nota da P1: ");
  scanf("%f", &((*a).p1));
  printf("Nota da P2: ");
  scanf("%f", &((*a).p2));
  printf("Frequência: ");
  scanf("%f", &((*a).freq));
  if ((*a).freq > 1) {
    printf("ERRO: NÚMERO INVÁLIDO\n");
     exit (0);
   }
}

int main(void) {
  struct Aluno a1;
  preenche(&a1);
  printf("Nota da P1: %.2f\n Nota da P2: %.2f\n Frequência: %.2f\n", a1.p1, a1.p2, a1.freq);
  return 0;
}
