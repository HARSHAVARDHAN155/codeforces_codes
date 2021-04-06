#include <stdio.h>
#include<string.h>
int main()
{
    int n, m;
    int c = 0;
    scanf("%d %d", &n, &m);
    char arr[n][15];
    char brr[m][15];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", arr[i]);
    }
    for (int i = 0; i < m; i++)
    {
        scanf("%s", brr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ((strcmp(arr[i], brr[j])) == 0)
            {
                c++;
            }
        }
    }
    printf("%d\n",c);
}