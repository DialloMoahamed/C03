#include <stdio.h>

// Fonction pour afficher la suite de Fibonacci jusqu'à une certaine limite
void afficherFibonacci(int limite) {
    int a = 0, b = 1, suivant;
    while (a <= limite) {
        printf("%d ", a);
        suivant = a + b;
        a = b;
        b = suivant;
    }
}

int main() {
    int limite;
    scanf("%d", &limite);

    afficherFibonacci(limite);  // Appel de la fonction

    return 0;
}