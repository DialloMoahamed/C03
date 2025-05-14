#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {
        printf("Le plus grand : %d", a);
    } 
    else if (b > a && b > c)
    {
        printf("Le plus grand : %d", b);
    } 
    else
    {
        printf("Le plus grand : %d", c);
    }
    return 0;
}
