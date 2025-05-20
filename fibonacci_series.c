#include <stdio.h>

int main() {
   unsigned int limite;
   unsigned int terme1 = 0;
   unsigned int terme2 = 1;
   unsigned int suivant;

   scanf("%u", &limite);

   if (terme1 <= limite) {
      printf("%u ", terme1);
   }
   if (terme2 <= limite) {
      printf(" %u ", terme2);
   }

   while (1) {
      suivant = terme1 + terme2;
      if (suivant > limite) {
         break;
      }
      printf(" %u ", suivant);
      terme1 = terme2;
      terme2 = suivant;
   }

   printf("\n");
   return 0;
}
