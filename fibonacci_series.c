#include <stdio.h>

int main() {

    int n, a = 0, b = 1, c;
    printf("Entrez le nombre de termes: ");
    scanf("%d", &n);
    printf("Série de Fibonacci: ");

       for (int i = 1; i < n; i++)
       {
        if (a < n)
        {
            printf("%d ", a);
            c = a + b;
            a = b;
            b = c;
        }
        
       }
        
        
         
    return 0;
}