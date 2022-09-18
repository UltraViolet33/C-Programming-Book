#include <stdio.h>

int main (void)
{
    int value1, value2, remainder;

    printf("Please type in two integers: \n");
    scanf("%i %i", &value1, &value2);

    remainder = value1 % value2;

    if (remainder == 0)
    {
        printf("%i is divisible by %i\n", value1, value2);
    }
    else
    {
        printf("%i is not divisible by %i\n", value1, value2);
    }

    return 0;
}