#include <stdio.h>

int main(void)
{
    unsigned int n;
    unsigned int a = 0, b = 1, temp;

    scanf("%u", &n);

    if (a <= n)
        printf("%u", a);
    if (b <= n)
        printf(" %u", b);

    while (1)
    {
        temp = a + b;
        if (temp > n)
            break;
        printf(" %u", temp);
        a = b;
        b = temp;
    }

    printf("\n");
    return 0;
}
