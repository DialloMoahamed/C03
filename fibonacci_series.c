#include <stdio.h>

int main(void) {
    int c;
    scanf("%d", &c);

    int a = 0, b = 1;

    while (a <= c) {
        printf("%d", a);
        int temp = a + b;
        a = b;
        b = temp;

        if (a <= c) {
            printf(" ");
        }
    }

    return 0;
}

