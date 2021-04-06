// power of a number    a^b
#include <stdio.h>

int power(int a, int b);
int main()
{
    int a, b, c;
    scanf("%d %d", &a, &b);
    c = power(a, b);
    printf("%d\n", c);
}

int power(int a, int b)
{
    if (b > 0)
    {
        return a * power(a, b - 1);
    }
    else
    {
        return 1;
    }
}