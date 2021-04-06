#include <stdio.h>
int main()
{
    int n, k;
    int c = 0;
    scanf("%d", &n);
    scanf("%d", &k);
    int a[102][102];
    int i, j;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    // int k = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] != 0)
            {
                if (j - i >= k && j - i <= -k)
                {
                    break;
                }
            }
        }
        if (j != n)
        {
            break;
        }
    }
    // printf("%d", c);
    if (i != n || j != n)
    {
        printf("%d\n", 0);
    }
    else
    {
        printf("%d\n", 1);
    }
}
