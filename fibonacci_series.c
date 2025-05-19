#include <stdio.h>

int main() {
    int limite, premier = 0, second = 1, suivant;
    scanf("%d", &limite);

    while (premier <= limite) {
        printf("%d ", premier);
        suivant = premier + second;
        premier = second;
        second = suivant;
    }
    printf("\n");
    return 0;
}