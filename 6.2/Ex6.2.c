#include <stdio.h>
void compra(int* conta, int valor) {
   *conta = *conta - valor;
   printf("Compra bem sucedida\n");
   }
int main(void) {
  int c1,c2;
  scanf("%d %d", &c1, &c2);
  int* c;
  if (c1 > c2) {
    c = &c1;
    compra(c,500);
    printf("Saldo da primeira conta:%d\n Saldo da segunda conta:%d\n", *c, c2);
  }else if (c2 > c1) { 
    c = &c2;
    compra(c,500);
    printf("Saldo da primeira conta:%d\n Saldo da segunda conta:%d\n\n", c1, *c);
  }
   return 0;
}
  
