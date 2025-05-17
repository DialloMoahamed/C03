// #include <stdio.h>

// int main(void) {
//     int n, i, b = 0, c = 1;
//     scanf("%d", &n);
//     for (i = 0; i <= n; ++i) {
//         printf("%d ", i);
//         c = i + b;
//         i = b;
//         b = c;
//     }

//     return 0;
// }

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