//is it a prime or not.

#include <stdio.h>
int prime(int n)
{
    int j = 0;
    for (int i = 2; i <= (n / 2); i++)
    {
        if (n % i == 0)
        {
            j = -1;
            printf("not a prime\n");
            break;
        }
        j = 0;
    }
    if (j == 0)
    {
        printf("prime\n");
    }
}
int main()
{
    int a;
    scanf("%d", &a);
    prime(a);
}