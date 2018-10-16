#include <stdio.h>
void compra(int* conta, int valor) {
   *conta = *conta - valor;
   printf("Compra bem sucedida\n");
   }
int main(void) {
  int c1,c2;
  scanf("%d %d", &c1, &c2);
  printf("Valor inicial da primeira conta: %d\nValor inicial da segunda conta: %d\n", c1, c2);
  int compras[] = { 100, 50, 80, 30, 20 };
  int* c;
  int i;
  for (i = 0; i < 5; i++) {
   if (c1 > c2) {
    c = &c1;
    compra(c,*(compras + i));
    printf("Saldo da primeira conta:%d\n Saldo da segunda conta:%d\n", *c, c2);
  }else if (c2 > c1) { 
    c = &c2;
    compra(c,*(compras + i));
    printf("Saldo da primeira conta:%d\n Saldo da segunda conta:%d\n\n", c1, *c);
  }
  }
  
   return 0;
}
