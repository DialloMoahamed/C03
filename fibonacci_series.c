#include <stdio.h>
int main() {
  int t1 = 0, t2 = 1, nextTerm = 0, n;
  printf("Entrer un nombre positif : ");
  scanf("%d", &n);

  printf("La série de Fibonacci : %d %d ", t1, t2);
  nextTerm = t1 + t2;

  while (nextTerm <= n) {
    printf("%d ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }

  return 0;
}
