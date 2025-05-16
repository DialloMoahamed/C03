#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Entrez trois entiers différents: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 >= num2 && num1 >= num3)
    {
        printf("%d est le plus grand.", num1);
    } else if (num2 >= num1 && num2 >= num3)
    {
        printf("%d est le plus grand.",num2);
    } else
    {
        printf("%d est le plus grand.",num3);
    } 
 
    return 0;
}
