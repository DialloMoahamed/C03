#include <stdio.h>

int main() {
    int limite;

    scanf("%d", &limite);

    int a = 0, b = 1, prochainTerme;

    if (limite >= a) {
        printf("%d ", a);
    }
    if (limite >= b) {
        printf("%d ", b);
    }

    prochainTerme = a + b;

    while (prochainTerme <= limite) {
        printf("%d ", prochainTerme);
        a = b;
        b = prochainTerme;
        prochainTerme = a + b;
    }
    printf("\n"); // Ajouter un saut de ligne à la fin

    return 0;
}