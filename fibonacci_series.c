#include <stdio.h>

void afficherFibonacci(int limite) {
    int a = 0, b = 1, suivant;
    while (a <= limite) {
        printf("%d ", a);
        suivant = a + b;
        a = b;
        b = suivant;
    }
    printf("\n");
}

int main() {
    int limite;
    scanf("%d", &limite);

    afficherFibonacci(limite);

    return 0;
}