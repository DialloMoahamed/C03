#include <stdio.h>

int main(void) {
    int n, a = 0, b = 1, temp;
    scanf("%d", &n);
    while (a <= n) {
        printf("%d", a);
        temp = a + b;
        a = b;
        b = temp;
        if (a <= n) printf(" ");
    }
    printf("\n");
    return 0;
}
