#include <stdio.h>

int main(void)
{
    int a;
    int x = 0;
    int y = 1;
    int z;

    scanf("%d", &a);

    if (a >= 0)
        printf("%d", x);
    if (a >= 1)
        printf(" %d", y);

    z = x + y;
    while (z <= a)
    {
        printf(" %d", z);
        x = y;
        y = z;
        z = x + y;
    }

    printf("\n");
    return 0;
}
