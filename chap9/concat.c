#include <stdio.h>

void concat(char result[], const char str1[], int n1, const char str2[], int n2)
{
    int i, j;

    for (i = 0; i < n1; i++)
    {
        result[i] = str1[i];
    }

    for (j = 0; j < n2; j++)
    {
        result[n1 + j] = str2[j];
    }
}

int main(void)
{
    void concat(char result[], const char str1[], int n1, const char str2[], int n2);

    const char s1[6] = {'H', 'e', 'l', 'l', 'o', ' '};
    const char s2[6] = {'W', 'o', 'r', 'l', 'd', '!'};
    char s3[12];

    int i;

    concat(s3, s1, 6, s2, 6);

    for (i = 0; i < 12; i++)
    {
        printf("%c", s3[i]);
    }

    printf("\n");

    return 0;
}