// decimal to any number (by input K)
#include <stdio.h>
#include <math.h>
int to_anyform(int n, int K);
int main()
{
    int a, K;
    scanf("%d %d", &a, &K);
    printf("%d\n", to_anyform(a, K));
}

int to_anyform(int n, int K)
{
    // #define K 16
    int rem, value = 0;
    int i = 0, k = 0;
    while (n > 0)
    {
        rem = (n % K);
        value += (rem * (pow(10, i)));
        n /= K;
        k++;
        i++;
    }
    return "%.5d",value;
}