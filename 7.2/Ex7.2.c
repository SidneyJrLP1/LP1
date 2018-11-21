#include <stdio.h>

struct Raca {
   int vigor;
   int def;
   int atq;
};

struct Avatar {
   char nome[256];
   char classe[20];
   struct Raca raca;
};


void preenche(struct Raca* A) {
  char r[20];
  printf("Raça: ");
  scanf("%s", r);
  printf("Vigor: ");
  scanf("%d", &((*A).vigor));
  printf("Defesa: ");
  scanf("%d", &((*A).def));
  printf("Ataque: ");
  scanf("%d", &((*A).atq));
}
  
  
  
void preenche2(struct Avatar* a) {
  printf("Nome: ");
  scanf("%s", ((*a).nome));
  printf("Classe: ");
  scanf("%s", ((*a).classe));
  preenche(&(*a).raca);
}  


int main(void) {
printf("CRIE SEU AVATAR\n");
struct Avatar a1;
preenche2(&a1);
printf(" Nome: %s\n Classe: %s\n", a1.nome, a1.classe);
printf("status da raça\n Vigor: %d\n Defesa: %d\n Ataque: %d\n", a1.raca.vigor, a1.raca.def, a1.raca.atq);
return 0;
}
