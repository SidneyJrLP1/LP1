#include <stdio.h>
#include <string.h>
int main(void) {
  char s[25];
  int i;
  printf("Mensagem: ");
  scanf("%s", s);
  FILE* f = fopen("/tmp/arq-01.txt", "w");
  for (i = 0; i < strlen(s); i++) {
    fputc(s[i], f);
  }
  fclose(f);
  char x[25];
  fopen("/tmp/arq-01.txt", "r");
  for (i = 0; i < strlen(s); i++) {
     x[i] = fgetc(f);
     printf("%s", (x+i));
  }
  fclose(f);
  printf("\n");
  return 0;
}
