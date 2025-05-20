#include <stdio.h>

int main() {
    unsigned int limite;
    unsigned int terme1 = 0;
    unsigned int terme2 = 1;
    unsigned int suivant;

    // Lire la valeur limite
    scanf("%u", &limite);

    // Afficher les deux premiers termes si dans la limite
    if (terme1 <= limite) {
        printf("%u  ", terme1);
    }
    if (terme2 <= limite) {
        printf("%u  ", terme2);
    }

    // Générer la suite tant que les termes sont <= limite
    while (1) {
        suivant = terme1 + terme2;
        if (suivant > limite) {
            break;
        }
        printf("%u  ", suivant);
        terme1 = terme2;
        terme2 = suivant;
    }

    printf("\n");
    return 0;
}
