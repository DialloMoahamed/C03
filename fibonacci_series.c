#include <stdio.h>

int main() {
    int a, b = 0, c = 1, d;
    scanf("%d", &a);

    while (b <= a) {
        printf(" %d", b);
        d = b + c;
        b = c;
        c = d;
    }
    return 0;
}