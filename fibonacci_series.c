#include <stdio.h>

int main(int argc, char const *argv[]) {

    int n, i, b = 0, c = 1;
    scanf("%d", &n);
    for (i = 0; i <= n; ++i) {
        printf("%d ", i);
        c = i + b;
        i = b;
        b = c;
    }

    return 0;
}

