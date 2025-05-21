#include <stdio.h>

int main(void)
{
    unsigned int n;
    unsigned int a = 0, b = 1;

    scanf("%u", &n);

    int first = 1;
    while (a <= n)
    {
        if (!first)
            printf(" ");
        printf("%u", a);
        unsigned int temp = a + b;
        a = b;
        b = temp;
        first = 0;
    }

    printf("\n");
    return 0;
}
