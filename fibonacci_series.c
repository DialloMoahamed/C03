#include <stdio.h>

int main() {
    int limite;

    printf("Entrez la limite maximale pour la série de Fibonacci : ");
    scanf("%d", &limite);

    int a = 0, b = 1, prochainTerme;

    printf("Série de Fibonacci jusqu'à %d : ", limite);

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