#include <stdio.h>

int main(void)
{
    float grades[10] = {10.5, 15.5, 18.9, 20.0, 5.2, 10.4, 14.0, 20.0, 15.5, 13.5};
    int i;
    float total = 0, average;

    for (i = 0; i < 10; i++)
    {
        total += grades[i];
    }

    average = total / 10;

    printf("The average is %.2f\n", average);

    return 0;
}