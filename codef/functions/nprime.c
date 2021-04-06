//Display all prime numbers between two Intervals

#include <stdio.h>
int nprime(int n);
int main()
{
    int a,b;
    scanf("%d %d", &a,&b);
    for (int i = (a+1); i <b; i++)
    {
        if (nprime(i) == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int nprime(int n)
{
    int k = 0;
    for (int j = 2; j <= (n / 2); j++)
    {
        if (n % j == 0)
        {
            k = -1;
            break;
        }
        k = 0;
    }
    return k;
}
