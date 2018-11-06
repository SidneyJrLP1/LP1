#include <stdio.h>
void preenche (int Arr[50][50], int L, int C) {
  int i,j;
  for (i = 0; i < L; i++) {
    for (j = 0; j < C; j++) {   
     printf("vec[%d][%d]: ", i, j);
     scanf("%d", &Arr[i][j]);
     }
    }
  }
float media(int Arr[50][50], int L, int C) {
  int i,j;
  float soma = 0;
  for(i = 0; i < L; i++) {
    for (j = 0; j < C; j++) { 
     soma += Arr[i][j];
     }
    }
  printf("Soma dos valores do vetor: %f\n", soma);
  float m = soma/(L*C);
  printf("Media dos valores: %f\n", m);
  return m;
}
int main(void) {
  int arr[50][50];
  int l,c,i,j;
  printf("Quantidade de linhas: ");
  scanf("%d",&l);
  printf("Quantidade de colunas: ");
  scanf("%d",&c);
  preenche(arr,l,c);
  printf("Vetor preenchido\n");
  for(i = 0; i < l; i++) {
   for (j = 0; j < c; j++) { 
    printf("arr[%d][%d]: %d\n", i,j , arr[i][j]);
    }
   }
  media(arr,l,c);
  return 0;
}
