#include <stdio.h>


int sum_array (int array[], int array_length)
{
    int sum = 0;
    int i;

    for (i = 0; i < array_length; i++)
    {
        sum += array[i];
    }

    return sum;
}



int main (void)
{
    
    int sum_array (int array[], int array_length);
    int array[2] = {2, 5};

    int sum = sum_array(array, 2);

    printf("The sum of the elements of the array = %i\n", sum);

    return 0;
}