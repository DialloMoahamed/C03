#include <stdio.h>

int main()
{
    int prv = 0, pre = 1, trm = 0, n;

    scanf("%d", &n);

    if (n >= 0) {
        printf("%d ", prv);
    }

    if (n >= 1) {
        printf("%d", pre);
    }

    while (1) {
        trm = prv + pre;
        if (trm > n) {
            break;
        }
        printf(" %d", trm);
        prv = pre;
        pre = trm;
    }

    return 0;
}
