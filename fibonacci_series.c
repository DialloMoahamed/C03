#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int a = 0, b = 1, temp;

    for (int i = 0; i < n; i++) {
        printf("%d", a);
        if (i < n - 1)
            printf(" ");
        temp = a + b;
        a = b;
        b = temp;
    }

    return 0;
}

