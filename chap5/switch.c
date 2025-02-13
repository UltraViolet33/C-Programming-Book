#include <stdio.h>

int main(void)
{
    float value1, value2;
    char operator;

    printf("Type in the expression: \n");
    scanf("%f %c %f", &value1, &operator, & value2);

    switch (operator)
    {
    case '+':
        printf("%.2f\n", value1 + value2);
        break;

    case '-':
        printf("%.2f\n", value1 - value2);
        break;

    case '*':
        printf("%.2f\n", value1 * value2);
        break;

    case '/':
        if (value2 == 0)
        {
            printf("Division by zero\n");
        }
        else
        {
            printf("%.2f\n", value1 / value2);
        }

        break;
    }

    return 0;
}