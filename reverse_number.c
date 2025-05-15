#include <stdio.h>

int main(int argc, char const *argv[])
{
  int n, m;

    scanf("%d", &n);

    while (n>0)
    {
        m = m * 10 + n % 10;
        n = (n - n%10) / 10;
    }
    printf("Nombre inversé : %d\n", m);
    
    return 0;
}
