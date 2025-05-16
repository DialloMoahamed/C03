#include <stdio.h>

int main()
{
    float num1, num2, num3;
    scanf("%f %f %f", &num1, &num2, &num3);
    if (num1 >= num2 && num1 >= num3)
        printf("Le plus grand est : %.f.", num1);
    if (num2 >= num1 && num2 >= num3)
        printf("Le plus grand est : %.f.",num2);
    if (num3 >= num1 && num3 >= num2)
        printf("Le plus grand est : %.f.",num2);
 
    return 0;
}
