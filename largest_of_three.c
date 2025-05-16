#include <stdio.h>

int main()
{
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 >= num2 && num1 >= num3)
    {
        printf("Le plus grand entre %d %d %d est : %d",num1, num2, num3, num1);
    } else if (num2 >= num1 && num2 >= num3)
    {
        printf("Le plus grand entre %d %d %d est : %d",num1, num2, num3,num2);
    } else
    {
        printf("Le plus grand entre %d %d %d est : %d",num1, num2, num3,num3);
    } 
 
    return 0;
}
