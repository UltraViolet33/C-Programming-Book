#include <stdio.h>

int main (void)
{
    float number1 = 3.;
    float number2 = 125.8;
    float number3 = -.0001;
    printf("Number1: %f\nnumber2: %f\nnumber3: %f\n", number1, number2, number3);

    float scientific_notation = 1.7e4;
    printf("Example of scientific notation: %e\n", scientific_notation);

    float scientific_notation2 = 1.5e2;
    printf("The number will be written wihout the scientific notation: %g\n", scientific_notation2);
    
    float scientific_notation3 = 1.5e10;
    printf("The number will be written with the scientific notation: %g\n", scientific_notation3);

    return 0;
}