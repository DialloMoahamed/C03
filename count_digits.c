#include <stdio.h>

int main() {
  int n, a;
  int count = 0;
  scanf("%d", &n);
  a = n;
 
  while (n != 0) {
    n /= 10;
    count++;
  }

  printf("%d contient %d chiffre(s).", a, count);
  return 0;
}
