#include <stdio.h>

int main (void)
{

    int number, right_digit;

    printf("Type the integer to reverse: \n");
    scanf("%i", &number);

    do {
        right_digit = number % 10;
        printf("%i", right_digit);
        number = number / 10;
    }
    while (number != 0);

    printf("\n");

    return 0;
}