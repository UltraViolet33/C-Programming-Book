#include <stdio.h>

int main(void)
{
    int n, number, triangular_number;

    printf("What triangular number do you want ?\n");
    scanf("%i", &number);

    triangular_number = 0;

    for (n = 1; n <= number; n++)
    {
        triangular_number += n;
    }

    printf("Triangular number %i is %i\n", number, triangular_number);

    return 0;
}