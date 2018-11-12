#include <stdio.h>
void preenche (int Vec[50], int n) {
  int i;
  for (i = 0; i < n; i++) {
     printf("vec[%d]: ", i);
     scanf("%d", (Vec + i));
     }
  }
float media(int Vec[50], int n) {
  int i;
  float soma = 0;
  for(i = 0; i < n; i++) {
     soma += *(Vec + i);
     }
  printf("Soma dos valores do vetor: %f\n", soma);
  float m = soma/n;
  return m;
}
int main(void) {
  int vec[50];
  int N,i;
  printf("Valores a serem escritos: ");
  scanf("%d",&N);
  preenche(vec,N);
  printf("Vetor preenchido\n");
  for(i = 0; i < N; i++) {
    printf("vec[%d]: %d\n", i, *(vec + i));
    }
  float med = media(vec,N);
  printf("Media dos valores: %.2f\n", med);
  return 0;
}
