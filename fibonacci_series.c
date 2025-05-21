#include <stdio.h>

int main(void)
{
    unsigned int n;
    unsigned int fib[100];
    int i = 2;

    scanf("%u", &n);

    fib[0] = 0;
    fib[1] = 1;

    printf("%u", fib[0]);
    if (n >= 1)
        printf(" %u", fib[1]);

    while (1)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
        if (fib[i] > n)
            break;
        printf(" %u", fib[i]);
        i++;
    }

    printf("\n");
    return 0;
}
