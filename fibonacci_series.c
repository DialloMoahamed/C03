#include <stdio.h>

int main() {
    int limite;
    int a = 0, b = 1, suivant;

    scanf("%d", &limite);

    printf("%d ", a);

    while (b <= limite) {
        printf("%d ", b);
        suivant = a + b;
        a = b;
        b = suivant;
    }

    return 0;
}