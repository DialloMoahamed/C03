#include <stdio.h>

int main(void) {
    int n, i;
    int a = 0, b = 1, c;
    scanf("%d", &n);
    printf("\n");
    for (i = 0; i < n; i++) {
        if (a <= n)
        {
            printf("%d ", a);
            c = a + b;
            a = b;
            b = c;
        }
    }

    return 0;
}
