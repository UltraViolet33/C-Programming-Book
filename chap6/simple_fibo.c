#include <stdio.h>

int main(void)
{
    int value1 = 0;
    int value2 = 1;
    int current = 1;

    while (current <= 500)
    {
        value1 = current;
        printf("%i\n", value2);
        printf("%i\n", current);
        current = current + value2;
        value2 = current;
        current = current + value1;
    }

    return 0;
}