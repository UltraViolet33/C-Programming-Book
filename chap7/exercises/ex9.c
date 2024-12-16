#include <stdio.h>

int result;
int u;
int v;

void get_numbers(void)
{
    printf("u: ");
    scanf("%i", &u);

    printf("v: ");
    scanf("%i", &v);
}

int gcd(int u, int v)
{
    int temp;

    while (v != 0)
    {
        temp = u % v;
        u = v;
        v = temp;
    }

    return u;
}

int lcm(int u, int v)
{
    return u * v / gcd(u, v);
}

int main(void)
{
    void get_numbers(void);
    int lcm(int u, int v);
    int gcd(int u, int v);

    get_numbers();

    result = lcm(u, v);

    printf("The lcm of %i and %i is %i\n", u, v, result);

    return 0;
}