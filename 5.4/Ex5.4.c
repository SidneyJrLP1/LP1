#include <stdio.h>
void troca (int X, int Y, int* P1, int* P2) {
  int z;
  z = X;
  *P1 = Y;
  *P2 = z;
  }
int main(void) {
  int x = 10;
  int y = 20;
  int* p1;
  int* p2;
  p1 = &x;
  p2 = &y;
  troca(x, y, p1, p2);
  printf("%d %d\n", x, y);
  return 0;
}
