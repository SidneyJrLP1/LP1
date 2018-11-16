#include <stdio.h>
struct Ponto {
  int x;
  int y;
};

void preenche(struct Ponto* p) {
  printf("Ponto no eixo x: ");
  scanf("%d", &((*p).x));
  printf("Ponto no eixo y: ");
  scanf("%d", &((*p).y));
  printf("Coordenadas do ponto: %d,%d\n", ((*p).x), ((*p).y));
}

void preenche2(struct Ponto Vec[10]) {
  int i;
  struct Ponto p;
  for (i =0; i <10; i++) {
    preenche(&p);
    Vec[i] = p;
    }
}

int main(void) {
  struct Ponto vec[10];
  int i;
  struct Ponto p;
  for (i = 0; i <10; i++) {
    preenche(vec);
    printf("vec[%d]: %d,%d\n", i, p.x, p.y);
   }
  return 0;
}  
