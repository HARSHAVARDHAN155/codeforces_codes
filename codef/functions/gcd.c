#include <stdio.h>
int gcd(int N, int M);
int main()
{
    int M, N, a;
    scanf("%d %d", &M, &N);
    a = gcd(M, N);
    printf("%d\n", a);
}
int gcd(int dividend, int divisor)
{
    // int divisor, dividend;
    int a;
    // if (N > M)
    // {
    //     divisor = M;
    //     dividend = N;
    // }
    // else
    // {
    //     divisor = N;
    //     dividend = M;
    // }

    if (divisor!= 0)
    {
    
        return gcd(divisor, (dividend % divisor));
    }
    else
    {
        return dividend;
    }
}