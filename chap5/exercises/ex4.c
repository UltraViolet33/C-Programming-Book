#include <stdio.h>

int main (void)
{

    float accumulator, number;
    char operator;

    printf("Begin Calculations\n");

    while (operator != 'E')
    {
        scanf("%f %c", &number, &operator);

        switch (operator)
        {
            case 'S':
                accumulator = number;
                printf("Set Accumulator to %.f\n", accumulator);
                printf("= %f\n", accumulator);
                break;

            case '/':
                printf("Divide by %.f\n", number);
                if (number == 0)
                {
                    printf("Cannot divide by zero\n");
                }
                else
                {
                    accumulator = accumulator / number;
                }
                printf("= %f\n", accumulator);
                break;

            case '-':
                printf("Substract %.f\n", number);
                accumulator -= number;
                printf("= %f\n", accumulator);
                break;

            
            case '+':
                printf("Add %.f\n", number);
                accumulator += number;
                printf("= %f\n", accumulator);
                break;

            case '*':
                printf("Multiply by %.f\n", number);
                accumulator *= number;
                printf("= %f\n", accumulator);
                break;

            case 'E':
                printf("= %f\n", accumulator);
                printf("End of calculations\n");

        }
    }

    return 0;
}