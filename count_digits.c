#include <stdio.h>

int main() {
  long long n;
  int count = 0;
  printf("Entrer un entier :");
  scanf("%lld", &n);
 
  while (n != 0) {
    n /= 10;
    count++;
  }

  printf("%d contient %d chiffre(s).",n , count);
}
