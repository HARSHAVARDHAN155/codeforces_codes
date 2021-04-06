//Armstrong number is a number that is equal to the sum of cubes of its digits.
#include <stdio.h>
int check_amstrong(int n);
int prime(int n);

int main()
{   
    int num;
    scanf("%d",&num);
    prime(num);
    if(check_amstrong(num)==1)
    {
        printf("It is an amstrong number \n");
    }
    else
    {
        printf("not an amstrong number\n");
    }
    return 0;
}


int check_amstrong(int n)
{
    int sum = 0,flag;
    int temp = n;
    while (n > 0)
    {
        int a;
        a = n % 10;
        sum += (a * a * a);
        n /= 10;
    }
    if(temp==sum)
    {   
        flag=1;
    }
    else
    {
        flag=-1;
    }
    return flag;
    
}

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