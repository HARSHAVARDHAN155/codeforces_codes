#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    int result[11];
    scanf("%d", &t);
    for (int m = 0; m < t; m++)
    {
        int n;
        int a[501];
        int max = 0;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int r = a[i] ^ a[j];
                int c = 0;
                int z = 31;
                while (z >= 0)
                {
                    if (r % 2 == 1)
                    {
                        c++;
                    }
                    r = r / 2;
                    z--;
                }
                if (c > max)
                {
                    max = c;
                }
            }
        }
        result[m] = max;
    }
    for (int i = 0; i < t; i++)
    {
        printf("%d\n", result[i]);
    }
}
