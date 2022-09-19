#include <stdio.h>


void sort (int a[], int n)
{
    int i, j, temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main (void)
{

    int i;
    int array[16] = {12, 14, 45, 48, 52, 20, 45, -99, 2, -852, 52, 5623, 562 ,63 , 20, 4};

    void sort (int a[], int n);

    printf("The array before the sort:\n");

    for (i = 0; i < 16; i++)
    {
        printf("%i ", array[i]);
    }

    sort (array, 16);

    printf("\n\n The array after the sort:\n");

    for (i = 0; i < 16; i++)
    {
        printf("%i ", array[i]);
    }

    printf("\n");

    return 0;
}