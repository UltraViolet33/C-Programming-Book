#include <stdio.h>

int main(void)
{
    int integer_val = 100;
    float floating_val = 331.79;
    double double_val = 4.44e+11;
    char char_val = 'W';
    _Bool bool_val = 0;

    printf("integer_val = %i\n", integer_val);
    printf("flaoting_val = %f\n", floating_val);
    printf("double_val = %e\n", double_val);
    printf("double_val = %g\n", double_val);
    printf("char_val = %c\n", char_val);
    printf("Bool_val = %i\n", bool_val);

    return 0;
}