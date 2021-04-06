// sum of natural numbers using recurssion
#include <stdio.h>
int sum_N(int n)
{
    int sum = 0;
    if (n > 0)
    {
        return n + sum_N(n - 1);
    }
    else
        return sum;
}
int main()
{
    int a;
    scanf("%d", &a);
    a = sum_N(a);
    printf("%d\n", a);
}