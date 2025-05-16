#include <stdio.h>

int main()
{
    float num1, num2, num3;
    scanf("%f %f %f", &num1, &num2, &num3);
    if (num1 >= num2 && num1 >= num3)
    {
        printf("%.f est le plus grand", num1);
    } else if (num2 >= num1 && num2 >= num3)
    {
        printf("%.f est le plus grand",num2);
    } else
    {
        printf("%.f est le plus grand",num3);
    } 
 
    return 0;
}
