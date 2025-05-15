#include <stdio.h>

int main() {
  int n;
  int count = 0;
  printf("Entrer un entier :");
  scanf("%d", &n);
 
  while (n != 0) {
    n /= 10;
    count++;
  }

  printf("le nombre de chiffre(s) est %d.",count);
}
