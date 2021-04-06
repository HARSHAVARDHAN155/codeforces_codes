#include <stdio.h>
int main()
{
    char a[100];
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 1,j=0; i <= n; i++,j++)
    {
        scanf("%c", &a[i]);

        if (a[i] == a[j])
        {
            sum=sum+1;
        }
    }
    printf("%d", sum);
    return 0;
}