#include <stdio.h>

int main() {
    int a;
    int x = 0;
    int y = 1;
    int z;

    scanf("%d", &a);

    if (x <= a)
        printf("%d", x);
    if (y <= a)
        printf(" %d", y);

    z = x + y;
    while (z <= a) {
        printf(" %d", z);
        x = y;
        y = z;
        z = x + y;
    }

    printf("\n");
    return 0;
}
