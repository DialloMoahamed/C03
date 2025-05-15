#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {
        printf("Le plus grand est : %d\n", a);
    } 
    else if (b > a && b > c)
    {
        printf("Le plus grand est : %d\n", b);
    } 
    else
    {
        printf("Le plus grand est : %d\n", c);
    }
    return 0;
}
