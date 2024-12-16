#include <stdio.h>

int main(void)
{
    const char base_digits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    int converted_number[64];
    long int number_to_convert;
    int next_digit, base, index = 0;

    printf("Number to be converted ? ");
    scanf("%ld", &number_to_convert);
    printf("Base ? ");
    scanf("%i", &base);

    do
    {
        converted_number[index] = number_to_convert % base;
        index++;
        number_to_convert = number_to_convert / base;
    } while (number_to_convert != 0);

    printf("Converted number = ");

    for (--index; index >= 0; --index)
    {
        next_digit = converted_number[index];
        printf("%c", base_digits[next_digit]);
    }

    printf("\n");

    return 0;
}