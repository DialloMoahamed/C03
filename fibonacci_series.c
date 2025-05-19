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
    int a;
    int x = 0;
    int y = 1;
    int z;

    scanf("%d", &a);


    if (x <= a) {
        printf("%d ", x);
    }
    if (y <= a) {
        printf("%d", y);
    }

    z = x + y;
    while (z <= a) {
        printf(" %d", z);
        x = y;
        y = z;
        z = x + y;
    }
    return 0;
}