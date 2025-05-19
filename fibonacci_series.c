#include <stdio.h>

int main(void)
{
    int limit;
    int a = 0;
    int b = 1;
    int c;

    scanf("%d", &limit);

    if (limit >= 0)
        printf("0");
    if (limit >= 1)
        printf(" 1");

    c = a + b;
    while (c <= limit)
    {
        printf(" %d", c);
        a = b;
        b = c;
        c = a + b;
    }

    printf("\n");
    return 0;
}
