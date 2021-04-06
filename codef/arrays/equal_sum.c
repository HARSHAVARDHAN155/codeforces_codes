#include <stdio.h>
int main()
{
    int j = 0;
    int a[100];
    int k, size, sum, sum1 = 0;
    scanf("%d", &size);
    printf("enter the array ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
        j++;
    }
    printf("enter sum");
    scanf("%d", &sum);

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i != j)
            {
                sum1 = a[i] + a[j];
            }
            if (sum1 == sum)
            {
                k = 0;
                printf("%d %d\n", a[i], a[j]);

                break;
            }
            else
            {
                sum1 = 0;
            }
        }
        if (k == 0)
        {
            break;
        }
    }
}