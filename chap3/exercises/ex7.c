#include <stdio.h>

int main(void)
{
    float result = (3.31e-8 * 2.01e-7) / (7.16e-6 + 2.01e-8);
    printf("Result = %e\n", result);

    return 0;
}