#include <stdio.h>
struct Caixa {
   int valor;
   struct Caixa* prox;
  };
int main(void) {
   struct Caixa c1;
   struct Caixa c2;
   struct Caixa c3;
   struct Caixa c4;
   struct Caixa c5;
   scanf("%d", &(c1.valor));
   c1.prox = &c2;	
   scanf("%d", &(c2.valor));
   c2.prox = &c3;
   scanf("%d", &(c3.valor));
   c3.prox = &c4;
   scanf("%d", &(c4.valor));
   c4.prox = &c5;			
   scanf("%d", &(c5.valor));
   c5.prox = NULL;
   struct Caixa* lista = &c1;
   printf("%d->%d->%d->%d->%d", lista->valor, lista->prox->valor, lista->prox->prox->valor, lista->prox->prox->prox->valor, lista->prox->prox->prox->prox->valor);
   return 0;
}
