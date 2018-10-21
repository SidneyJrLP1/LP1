#include <stdio.h>
int main(void) {
  int n1;
  int n2;
  int i;
  printf("Valor inicial: ");
  scanf("%d", &n1);
  printf("Valor final: ");
  scanf("%d", &n2);
  printf("Valores entre %d e %d\n", n1, n2);
  for(i = n1 + 1; i < n2; i++) {
    printf("%d\n", i);
    }
  return 0;
  }
