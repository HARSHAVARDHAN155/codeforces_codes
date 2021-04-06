#include <stdio.h>
int main()
{
    int n, w, m;
    long int a[1000000];
    int sum = 0;
    scanf("%d %d", &n, &w);
    for (int i = 1; i <= n; i++)
    {
        scanf("%ld", &a[i]);
    }
    m = n - w + 1;
    int j = 1;
    while (j <= m)
    {    
        int k=j;
        while( k <= (w + j - 1))
        {
            sum += a[k];
            k++;
        }
        printf("%d ", sum);
        sum = 0;
        j++;
    }

    printf("\n");
    return 0;
}