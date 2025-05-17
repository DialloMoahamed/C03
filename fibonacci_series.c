#include <stdio.h>

int main()
{
    int limite, a = 0, b = 1, suivant;

    scanf("%d", &limite);

    if (limite < 0)
        return 0;

    printf("%d ", a);

    while (b <= limite)
    {
        printf("%d ", b);
        suivant = a + b;
        a = b;
        b = suivant;
    }

    return 0;
}
