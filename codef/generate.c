#include <stdio.h>
#include <math.h>
int main()
{
    int n, g;
    int rem;
    printf("you shoud know the generating number before itsef, enter modulo num: \n");
    scanf("%d", &n);
    printf("enter generating number");
    scanf("%d", &g);
    for (int i = 0; i <= n; i++)
    {
        int p;
        p = pow(g, i);
        rem = (p) % n;
        printf("%d^%d and remainder =%d \n",g,i, rem);
    }
    printf("\n");
}