#include <stdio.h>

int main()
{
    int limite;
    int a = 0, b = 1, suivant;

    scanf("%d", &limite);

    if (limite < 0)
        return 0;

    // Affiche le premier terme sans espace
    printf("0");

    // Ensuite, on affiche les suivants avec un espace devant
    while (b <= limite)
    {
        printf(" %d", b);
        suivant = a + b;
        a = b;
        b = suivant;
    }

    printf("\n"); // Fin de ligne obligatoire

    return 0;
}
