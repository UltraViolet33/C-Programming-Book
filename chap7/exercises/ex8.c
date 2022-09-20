#include <stdio.h>

float a;
float b;
float c;
float discriminant;
float root1;
float root2;


void get_numbers (void)
{
    printf("a : ");
    scanf("%f", &a);

    printf("b : ");
    scanf("%f", &b);

    printf("c : ");
    scanf("%f", &c);
}


float absolute_value (float x)
{
    if (x < 0)
    {
        x = -x;
    }
    return (x);
}


float square_root (float x)
{
    const float epsilon = .00001;
    float guess = 1.0;

    while (absolute_value(guess * guess - x) >= epsilon)
    {
        guess = (x / guess + guess) / 2.0;
    }

    return guess;
}


void compute_discriminant (float a, float b, float c)
{
    discriminant = (b * b) - 4 * a * c;
}

void compute_roots(float a, float b, float c)
{
    root1 = ((-b - square_root(discriminant)) / (2 * a));

    root2 = (-b + square_root(discriminant)) / (2 * a);
}


int main (void)
{
    void get_numbers (void);
    float square_root (float x);
    float absolute_value (float x);
    void compute_discriminant (float a, float b, float c);
    void compute_roots (float a, float b, float c);

    get_numbers ();

    printf("%.2fx² + %.2fx + %.2f = 0\n", a, b, c);

    compute_discriminant (a, b, c);

    printf("Discriminant : %2.f\n", discriminant);


    if (discriminant < 0)
    {
        printf("The roots are imaginary \n");
    }
    else if (discriminant == 0)
    {
        root1 = -b / (2 * a);
        printf("Discriminant  = 0\n");
        printf("There is a single root : %.2f\n", root1);
    }
    else
    {
        printf("Discriminant is greater than zero \n");
        compute_roots (a, b, c);
        printf("There is two roots : %.2f and %.2f\n", root1, root2);
    }

    return 0;
} 