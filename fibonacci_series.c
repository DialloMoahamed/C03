#include <stdio.h>

int main() {
  int a = 0, b = 1, c = 0, n, first = 1;
  scanf("%d", &n);

  while (c <= n) {
    if (!first) printf(" ");
    printf("%d", c);
    first = 0;

    a = b;
    b = c;
    c = a + b;
  }
  return 0;
}
