#include <stdio.h>

int main(void)
{
    float temp, fr;

    scanf("%f", &temp);

    fr = temp * 9/5 + 32;

    printf("%.1f°C équivaut à %.1f°F", temp, fr);
    return 0;
}
