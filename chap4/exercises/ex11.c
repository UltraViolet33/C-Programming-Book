#include <stdio.h>

int main(void)
{
     int number, right_digit, sum;

     printf("Type the number : ");
     scanf("%i", &number);

     sum = 0;

     while (number != 0)
     {
          right_digit = number % 10;
          sum += right_digit;
          number = number / 10;
     }

     printf("The sum is %i\n", sum);

     return 0;
}