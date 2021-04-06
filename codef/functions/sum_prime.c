//can a num ber can be expressed in the form of sum of 2 prime numbers
#include <stdio.h>
int check(int n);
int nprime(int n);

int main()
{
    int num, a;
    scanf("%d", &num);
    // a=check(num);
    // printf("%d\n",a);

    if (check(num) == 1)
    {
        printf("we can write");
    }
    else
    {
        printf("we can't write");
    }
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
int check(int n)
{
    int aryy_primes[10000] = {0};
    int flag = -1;
    int sum;

    for (int i = 2; i < n; i++)
    {
        if (nprime(i) == 0)
        {
            aryy_primes[i] = i;
        }
    }

    for (int j = 0; j < n ; j++)
    {
        for (int k = 0; k < n; k++)
        {
            sum = aryy_primes[j] + aryy_primes[k];

            if (sum == n)
            {
                printf("sum can be written in the form of %d and %d\n", j, k);
                flag = 1;
                break;
            }
            sum = 0;
        }
        if(flag=1)
            break;
    }
    printf("\n");

    return flag;
}