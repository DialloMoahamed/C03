#include <stdio.h>

int main() {
   unsigned int limite;
   unsigned int a = 0, b = 1;

   scanf("%u", &limite);

   if (a <= limite) {
      printf("%u", a);
   }

   while (b <= limite) {
      printf(" %u", b);
      unsigned int temp = a + b;
      a = b;
      b = temp;
   }

   printf("\n");
   return 0;
}
