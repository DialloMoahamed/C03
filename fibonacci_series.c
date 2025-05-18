#include <stdio.h>

int main(void) {
    int limite;

    scanf("%d", &limite);

    int a = 0, b = 1, prochainTerme;

    printf("%d, %d, ", a, b);

    prochainTerme = a + b;

    while (prochainTerme <= limite) {
        printf("%d, ", prochainTerme);
        a = b;
        b = prochainTerme;
        prochainTerme = a + b;
    }
    printf("\n");
    return 0;
}