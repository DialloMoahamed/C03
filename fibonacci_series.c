#include <stdio.h>

int main(void)
{
    int n;
    if (scanf("%d", &n) != 1) return 1;

    int a = 0, b = 1;

    if (n >= 0)
    {
        printf("%d", a);
        while (b <= n)
        {
            printf("%d ", b);
            int next = a + b;
            a = b;
            b = next;
        }
    }

    printf("\n");
    return 0;
}
