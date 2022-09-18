#include <stdio.h>

int main (void)
{

    int i;
    int j;
    int factorial = 1;

    for (i = 1; i <= 10; i++)
    {
        for (j = i; j > 0; j--)
        {
            factorial *= j;
        }

        printf("The factorial of %i is %i\n", i, factorial);
        factorial = 1;
    }

    return 0;
}