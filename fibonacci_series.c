#include <stdio.h>

int main() {

    int n, a = 0, b = 1, c;
    scanf("%d", &n);
    printf("la série de Fibonacci : ");
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