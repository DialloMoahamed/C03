#include <stdio.h>

int main() {
    int limite, premier = 0, second = 1, suivant;
    printf("Entrez la limite de la série de Fibonacci: ");
    scanf("%d", &limite);

    printf("Série de Fibonacci jusqu'à %d: ", limite);
    while (premier <= limite) {
        printf("%d ", premier);
        suivant = premier + second;
        premier = second;
        second = suivant;
    }
    printf("\n");
    return 0;
}