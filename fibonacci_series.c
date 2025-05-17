#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int a = 0, b = 1;
    bool first = 1;

    while (a <= n) {
        if (!first) {
            printf(" ");
        }
        first = 0;
        printf("%d", a);
        int next = a + b;
        a = b;
        b = next;
    }

    printf("\n");
    return 0;
}
