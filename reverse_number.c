#include <stdio.h>

int main(int argc, char const *argv[])
{
  int n=0, m=0;

    printf("Entrer une valeur : ");
    scanf("%d", &n);

    while (n>0)
    {
        m = m * 10 + n % 10;
        n = (n - n%10) / 10;
    }
    printf("Nombre inversé : %d", m);
    
    return 0;
}
