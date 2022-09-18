#include <stdio.h>

int main (void)
{

    int value1, value2;
    float result;

    printf("Please type in two integers: \n");
    scanf("%i %i", &value1, &value2);

    result = (float) value1 / value2;

    printf("The result of %i / %i is %.3f\n", value1, value2, result);

    return 0;
}