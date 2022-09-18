#include <stdio.h>

int main (void)
{

    int i;
    int triangular_number;

    for (i = 5; i <= 50; i+=5)
    {
        triangular_number = i * (i + 1) / 2;

        printf("The triangular number of %i is %i\n", i, triangular_number);
    }
   

    return 0;
}