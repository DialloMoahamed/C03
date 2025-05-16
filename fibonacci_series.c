// #include <stdio.h>

// int main() {

//     int n, a = 0, b = 1, c;
//     printf("Entrez le nombre de termes :");
//     scanf("%d", &n);
//     printf("Série de Fibonacci :");
//     for (int i = 1; i < n; i++)
//     {
//         if (a < n)
//         {
//             printf("%d ", a);
//             c = a + b;
//             a = b;
//             b = c;
//         }
//     }
         
//     return 0;
// }

#include <stdio.h>

int main()
{
    int limit;
    scanf("%d", &limit);

    int a = 0;
    int b = 1;

    if (limit >= 0)
        printf("0");

    if (limit >= 1)
        printf(" 1");

    int next = a + b;
    while (next <= limit)
    {
        printf(" %d", next);
        a = b;
        b = next;
        next = a + b;
    }

    printf("\n");
    return 0;
}
