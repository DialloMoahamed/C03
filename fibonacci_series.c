#include <stdio.h>

int main() {
  int a = 0, b = 1, c, n;
  scanf("%d", &n);

  // On affiche d'abord le premier terme
  if (n >= 0) printf("%d ", a);
  if (n >= 1) printf("%d ", b);

  c = a + b;
  while (c <= n) {
    printf("%d ", c);
    a = b;
    b = c;
    c = a + b;
  }
  return 0;
}

