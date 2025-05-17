#include <stdio.h>

int main(void) {
    int n, i;
    int b = 0, c = 1;
    scanf("%d", &n);
    for (i = 0; i <= n; ++i) {
            printf("%d ", i);
            c = i + b;
            i = b;
            b = c;
    }

    return 0;
}
