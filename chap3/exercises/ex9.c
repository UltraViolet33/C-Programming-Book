#include <stdio.h>

int main (void)
{

    int i = 365;
    int j = 7;

    int multiple = i + j - i % j;
    printf("The next largest even multiple for i = %i and j = %i is %i\n",i, j, multiple);
 
    float i2 = 12.258;
    int j2 = 7;

    int multiple2 = i + j - i % j;
    printf("The next largest even multiple for i = %f and j = %i is %i\n",i2, j2, multiple2);
 
    int i3 = 996;
    int j3 = 4;

    int multiple3 = i + j - i % j;
    printf("The next largest even multiple for i = %i and j = %i is %i\n",i3, j3, multiple3);
 
    return 0; 
}