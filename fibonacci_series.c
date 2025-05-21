#include <stdio.h>

void afficher_fibonacci(unsigned int n)
{
    unsigned int a = 0, b = 1;

    if (a <= n)
        printf("%u", a);
    if (b <= n)
        printf(" %u", b);

    while (1)
    {
        unsigned int suivant = a + b;
        if (suivant > n)
            break;
        printf(" %u", suivant);
        a = b;
        b = suivant;
    }
}

int main(void)
{
    unsigned int n;
    scanf("%u", &n);
    afficher_fibonacci(n);
    printf("\n");
    return 0;
}
