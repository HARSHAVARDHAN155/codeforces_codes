// any number(change base in the function)  to decimal
#include <stdio.h>
#include <math.h>

int any_todecimal(int n,int base)
{   
    // #define base 2
    int i, a, sum = 0;
    i = 0;
    while (n > 0)
    {
        a = n % 10;
        sum += a * (pow(base, i));
        n /= 10;
        i++;
    }
    return sum;
}

int main()
{
    int a,base;
    scanf("%d %d", &a,&base);
    printf("%d\n",any_todecimal(a,base));
}