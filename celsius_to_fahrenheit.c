#include <stdio.h>

int main(int argc, char const *argv[])
{
    double temp, fr;

    scanf("%lf", &temp);

    fr = temp * 9/5 + 32;

    printf("%lf°C équivaut à %lf°F", temp, fr);
    return 0;
}
