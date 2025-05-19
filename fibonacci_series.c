#include <stdio.h>

// int main() {
//     int a, b = 0, c = 1, d;
//     scanf("%d", &a);

//     while (b <= a) {
//         printf("%d ", b);
//         d = b + c;
//         b = c;
//         c = d;
//     }
//     printf("\n");
//     return 0;
// }

int main() {
    int limite;
    int premier = 0;
    int second = 1;
    int suivant;

    scanf("%d", &limite);


    if (premier <= limite) {
        printf("%d ", premier);
    }
    if (second <= limite) {
        printf("%d ", second);
    }

    suivant = premier + second; // Initialiser 'suivant' avant la boucle
    while (suivant <= limite) {
        printf("%d ", suivant);
        premier = second;
        second = suivant;
        suivant = premier + second; // Calculer le prochain 'suivant'
    }
    printf("\n");
    return 0;
}