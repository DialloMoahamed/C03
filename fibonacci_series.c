#include <stdio.h>

int main(int argc, char const *argv[]) {

    int n, a = 0, b = 1, c;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (a <= n)
        {
            printf("%d ", a);
            c = a + b;
            a = b;
            b = c;
        }
    }

    return 0;
}