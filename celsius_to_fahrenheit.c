#include <stdio.h>

int main(int argc, char const *argv[])
{
    float temp, fr;

    scanf("%2f", &temp);

    fr = temp * 9/5 + 32;

    printf("%2f°C équivaut à %2f°F.", temp, fr);
    return 0;
}
