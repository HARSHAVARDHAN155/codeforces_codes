#include <stdio.h>
int main()
{
    long int s;
    scanf("%ld", &s);
    int n;
    n = s % 5;
    if (n != 0)
    {
        printf("%ld", (s / 5) + 1);
    }
    else
    {
        printf("%ld", s / 5);
    }
}