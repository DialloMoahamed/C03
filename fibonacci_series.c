#include <stdio.h>

int main()
{
   int prv=0, pre=1, trm, i, n;

   scanf("%d", &n);

   printf("%d %d ", prv, pre);

   for(i=3; i<=n; i++)
   {
     trm = prv + pre;
     printf("%d ", trm);
     prv = pre;
     pre = trm;
   }

   printf("\n");

   return 0;
}
