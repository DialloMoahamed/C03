#include <stdio.h>

int main() {
    unsigned int limite;
    unsigned int a = 0, b = 1, suivant;

    scanf("%u", &limite);

    if (a <= limite)
        printf("%u", a);

    if (b <= limite && b != a)
        printf(" %u", b);

    while (1) {
        suivant = a + b;
        if (suivant > limite)
            break;
        printf(" %u", suivant);
        a = b;
        b = suivant;
    }

    printf("\n");
    return 0;
}
