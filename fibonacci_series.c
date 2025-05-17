#include <stdio.h>

int main()
{
    int limite;
    int a = 0, b = 1, suivant;

    scanf("%d", &limite);

    if (limite < 0)
        return 0;

    // Affiche le premier terme sans espace
    printf("%d", a);

    // Affiche les termes suivants avec un espace précédent
    while (b <= limite)
    {
        printf(" %d", b);
        suivant = a + b;
        a = b;
        b = suivant;
    }

    printf("\n"); // Retour à la ligne final

    return 0;
}
