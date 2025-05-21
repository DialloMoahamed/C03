#include <stdio.h>

int main() {
   unsigned int limite;
   unsigned int terme1 = 0, terme2 = 1, suivant;

   scanf("%u", &limite);

   if (limite >= 0) {
      printf("%u", terme1);
   }

   if (terme2 <= limite) {
     printf(" %u", terme2);
   }

   while (1) {
      suivant = terme1 + terme2;
      if (suivant > limite) {
         break;
      }
      printf(" %u", suivant);
      terme1 = terme2;
      terme2 = suivant;
   }

   return 0;
}
