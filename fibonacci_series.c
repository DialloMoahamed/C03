#include <stdio.h>

int main()
{
    int limit;
    int a = 0, b = 1, temp;

    scanf("%d", &limit);

    if (limit >= 0)
        printf("0");

    while (b <= limit)
    {
        printf(" %d", b);
        temp = a + b;
        a = b;
        b = temp;
    }

    return 0;
}
