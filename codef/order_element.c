#include <stdio.h>
#include <math.h>
#include<stdbool.h>
// #define a 8
int gcd(int n, int r)
{
    if (r == 0)
    {
        return n;
    }
    // int rem;
    // rem = n % a;
    gcd(r, (n % r));
}
int main()
{
    int n, power;
    int order =0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i]=i;
    }

    for (int i = 0; i < n; i++)
    {
        if ((gcd(n, arr[i]))==1)
        {   
            order++;
            int p = 1;
            int x=10000;
            while (x>0)
            {
                power = pow(arr[i], p);
                //power = arr[i]*p;
                if (power % n == 1) // mod =1 for multiplication and 0 for addition  and power above
                {
                    printf("order of %d  is %d\n", arr[i], p);
                    break;
                }
                x--;
                p++;
            }
            p = 0;
        }
    }
    printf("order of the group mult modulo %d is %d \n",n,order);
}