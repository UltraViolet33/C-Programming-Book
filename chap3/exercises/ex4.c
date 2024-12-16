#include <stdio.h>

int main(void)
{
    float fahrenheit = 27;
    float celcius = (fahrenheit - 32) / 1.8;
    printf("27 degrees Fahrenheit to celcius is %f\n", celcius);
    return 0;
}