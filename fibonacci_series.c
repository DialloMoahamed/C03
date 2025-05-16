#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int a = 0, b = 1;

    if (n >= 0) {
        printf("0");
    }

    while (b <= n) {
        printf(" %d", b);
        int temp = b;
        b = a + b;
        a = temp;
    }

    return 0;
}


