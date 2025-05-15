#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Entrer trois entiers : ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 >= num2 && num1 >= num3)
    {
        printf("\nLe plus grand est :%d",num1);
    } else if (num2 >= num1 && num2 >= num3)
    {
        printf("\nLe plus grand est : %d",num2);
    } else
    {
        printf("\nLe plus grand est : %d",num3);
    } 
 
    return 0;
}
