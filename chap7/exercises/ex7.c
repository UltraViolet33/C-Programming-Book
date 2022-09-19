#include <stdio.h>



long int x_to_the_n(int x, int n)
{
    int i;
    long int result = x;

    for (i = 1; i < n; i++)
    {
        result *= x;
    }

    return result;
}

int main (void)
{
    long int x_to_the_n(int x, int n);
    int x;
    int n;
    long int result;

    printf("x: ");
    scanf("%i", &x);

    printf("n: ");
    scanf("%i", &n);

    result = x_to_the_n(x, n);

    printf("%i to the power of %i = %li\n", x, n, result);

    return 0;
}