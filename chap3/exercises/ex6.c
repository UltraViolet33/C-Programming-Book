#include <stdio.h>

int main(void)
{
    float x = 2.55;
    float polynomial = 3 * (x * x * x) - 5 * (x * x) + 6;

    printf("The polynomial = %f\n", polynomial);

    return 0;
}