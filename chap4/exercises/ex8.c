#include <stdio.h>

int main(void)
{
    int n, number, triangular_number, counter, number_compute;

    printf("How many triangular numbers do you want to compute ?\n");
    scanf("%i", &number_compute);

    for (counter = 1; counter <= number_compute; counter++)
    {
        printf("What triangular number do you want ?\n");
        scanf("%i", &number);

        triangular_number = 0;

        for (n = 1; n <= number; n++)
        {
            triangular_number += n;
        }

        printf("Triangular number %i is %i\n", number, triangular_number);
    }

    return 0;
}