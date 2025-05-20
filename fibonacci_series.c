#include <stdio.h>

int main()
{
    int prv = 0, pre = 1, trm = 0, n;

    scanf("%d", &n);

    if (n >= 0) {
        printf("%d\n", prv);
    }

    if (n >= 1) {
        printf("%d\n", pre);
    }

    while (1) {
        trm = prv + pre;
        if (trm > n) {
            break;
        }
        printf("%d", trm);
        prv = pre;
        pre = trm;
        printf("\n");
    }

    return 0;
}
