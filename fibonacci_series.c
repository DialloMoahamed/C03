#include <stdio.h>

int main(void) {
  int a = 0, b = 1, n;
  scanf("%d", &n);

  if (a <= n) {
    printf("%d", a); 
  }

  while (b <= n) {
    printf(" %d", b);
    int temp = b;
    b = a + b;
    a = temp;
  } 
  return 0;
}
