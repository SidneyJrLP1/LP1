#include <stdio.h>
#include <stdlib.h>
struct Turma {
   struct Aluno a1;
   struct Aluno a2;
   struct Aluno a3;
};

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

void preenche2(struct Turma* A) {
  preenche(&(A.a1));
  preenche(&(A.a2));
  preenche(&(A.a3));
  

int main(void) {
  struct Turma A;
  preenche2(&A);
  int i;
  for (i = 1;i < 4; i++) { 
     printf("Nota da P1: %.2f\n Nota da P2: %.2f\n Frequência: %.2f\n", ai.p1, ai.p2, ai.freq);
    }
  return 0;
}
