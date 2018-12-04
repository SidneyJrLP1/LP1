#include <stdio.h>
struct Mago {
  int atq;
  int def;
  int vig;
};

struct Guerreiro {
  int atq;
  int def;
  int vig;
};

struct Ladino {
  int atq;
  int def;
  int vig;
};

union Classe {
   struct Mago m;
   struct Guerreiro g;
   struct Ladino l;
};

struct Avatar {
   char nome[20];
   char raca[20];
   union Classe X;
};


void preenche(union Classe* A, int I) {
  if (I == 1) {
    printf("Classe escolhida: Mago\n");
  }else if(I == 2) {
    printf("Classe escolhida: Guerreiro\n");
  }else if(I == 3) {
    printf("Classe escolhida: Ladino\n");
  }
}   
void preenche2(struct Avatar* a) {
  printf("Nome: ");
  scanf("%s", ((*a).nome));
  printf("Raca: ");
  scanf("%s", ((*a).raca));
}  


int main(void) {
printf("CRIE SEU AVATAR\n");
struct Avatar a1;
preenche2(&a1);
printf("ESCOLHA SUA CLASSE\n 1 = Mago\n 2 = Guerreiro\n 3 = Ladino\n");
int i;
scanf("%d", &i);
preenche(&(a1).X, i);
printf(" Nome: %s\n Raca: %s\n", a1.nome, a1.raca);
if (i == 1) { 
   printf(" Classe: Mago\n");
   a1.X.m.atq = 50;
   a1.X.m.def = 40;
   a1.X.m.vig = 20;
   printf("--STATUS DO PERSONAGEM--\n Ataque: %d\n Defesa: %d\n Vigor: %d\n", a1.X.m.atq, a1.X.m.def, a1.X.m.vig);
}else if (i == 2) {
   printf(" Classe: Guerreiro\n");
   a1.X.m.atq = 40;
   a1.X.m.def = 60;
   a1.X.m.vig = 30;
   printf("--STATUS DO PERSONAGEM--\n Ataque: %d\n Defesa: %d\n Vigor: %d\n", a1.X.g.atq, a1.X.g.def, a1.X.g.vig);
}else if (i == 3) {
   printf(" Classe: Ladino\n");
   a1.X.m.atq = 30;
   a1.X.m.def = 20;
   a1.X.m.vig = 50;
   printf("--STATUS DO PERSONAGEM--\n Ataque: %d\n Defesa: %d\n Vigor: %d\n", a1.X.l.atq, a1.X.l.def, a1.X.l.vig);
}
return 0;
}
