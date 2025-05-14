#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {
        printf("Le plus grand est : %d", a);
    } 
    if (b > a && b > c)
    {
        printf("Le plus grand est : %d", b);
    } 
    if (c > a && c > b)
    {
        printf("Le plus grand est : %d", c);
    }
    return 0;
}
