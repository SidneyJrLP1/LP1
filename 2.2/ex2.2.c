#include <stdio.h>
int main(void) {
  int n1;
  int n2;
  int i;
  int maior,menor;
  printf("Valor 1: ");
  scanf("%d", &n1);
  printf("Valor 2: ");
  scanf("%d", &n2);
  printf("Valores entre %d e %d\n", n1, n2);
  if(n1 > n2) {
    maior = n1;
    menor = n2;
  }else {
    maior = n2;
    menor = n1;
  }
  for(i = menor + 1; i < maior; i++) {
    printf("%d\n", i);
    }
  return 0;
}
