#include <stdio.h>
int main() {
  int a = 0, b = 1, c = 0, n;
  scanf("%d", &n);

  while (c <= n) {
    printf("%d ", c);
    a = b;
    b = c;
    c = a + b;
  } 
  return 0;
}
