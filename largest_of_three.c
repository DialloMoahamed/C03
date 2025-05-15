#include <stdio.h>

int main()
{
    int num1, num2, num3, grand;
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 > num2 && num1 > num3)
    {
        grand = num1;
    } else if (num2 > num1 && num2 > num3)
    {
        grand = num2;
    } else
    {
        grand = num3;
    }
    printf("%d\n",grand);
    
    
    return 0;
}
