#include <stdio.h>

int main(void) {
    int limit;
    scanf("%d", &limit);

    int a = 0, b = 1;

    while (a <= limit) {
        printf("%d", a);
        int next = a + b;
        a = b;
        b = next;

        if (a <= limit) {
            printf(" ");
        }
    }

    printf("\n");
    return 0;
}
