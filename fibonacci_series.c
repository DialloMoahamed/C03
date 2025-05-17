#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int fib[1000]; // On suppose que 1000 termes suffisent
    int count = 0;

    fib[0] = 0;
    fib[1] = 1;

    if (n >= 0) count = 1;
    if (n >= 1) count = 2;

    for (int i = 2; ; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
        if (fib[i] > n) break;
        count++;
    }

    for (int i = 0; i < count; i++) {
        printf("%d", fib[i]);
        if (i < count - 1)
            printf(" ");
    }

    printf("\n");
    return 0;
}
