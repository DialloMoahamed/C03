#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int a = 0, b = 1;

    for (; a <= n; ) {
        printf("%d", a);
        int next = a + b;
        a = b;
        b = next;
        if (a <= n)
            printf(" ");
    }

    printf("\n");
    return 0;
}
