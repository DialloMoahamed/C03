#include <stdio.h>

// Fonction récursive pour calculer le nième terme de Fibonacci
int fibonacci_recursif(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci_recursif(n - 1) + fibonacci_recursif(n - 2);
    }
}

int main() {
    int n, i = 0;
    int terme;

    // Lire la valeur limite
    printf("Entrez la valeur limite : ");
    scanf("%d", &n);

    // Afficher les termes tant qu'ils sont ≤ n
    while (1) {
        terme = fibonacci_recursif(i);
        if (terme > n) {
            break;
        }
        printf("%d ", terme);
        i++;
    }

    printf("\n");

    return 0;
}
