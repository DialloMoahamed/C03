#include <stdio.h>

int main()
{
    int n, nbr1 = 0, nbr2 = 1, suivant, i;

    scanf("%d", &n);

    if (n <= 0)
        return 0;

    for (i = 0; i < n; i++)
    {
        if (i <= 1)
            suivant = i;
        else
        {
            suivant = nbr1 + nbr2;
            nbr1 = nbr2;
            nbr2 = suivant;
        }

        if (i == n - 1)
            printf("%d", suivant);
        else
            printf("%d ", suivant);
    }

    return 0;
}
