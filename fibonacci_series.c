#include <stdio.h>

int main(void) {
  int limite, a = 0, b = 1, c, i;

  scanf("%d", &limite);

  printf("%d %d ", a, b);
  for (i = 2; ; i++) {
    c = a + b;
    if (c > limite) {
      break;
    }
    printf("%d ", c);
    a = b;
    b = c;
  }
  printf("\n");

  return 0;
}