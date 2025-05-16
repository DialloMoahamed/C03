#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int a = 0, b = 1;

    if (a <= n) {
        printf("%d", a); 
    }

    while (b <= n) {
        printf(" %d", b); 
        int temp = a + b;
        a = b;
        b = temp;
    }

    return 0;
}
