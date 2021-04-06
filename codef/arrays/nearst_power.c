#include <stdio.h>
#include <math.h>
#define size 5
int main()
{
    int a[] = {78, 4, 57, 6,45};
    int  j = 0;
    int result1, result2;

    for (int k = 2; k < size; k++)
    {
        while (j != -1)
        {
            result1 = pow(2, j);
            result2 = pow(2, j + 1);
            if (a[k] > result1 && a[k] < result2)
            {
                j = -1;
                if (a[k] - result1 < result2 - a[k])
                {
                    printf("%d nearer to %d\n", a[k], result1);
                }
                else
                {
                    printf("%d nearer to %d\n", a[k], result2);
                }
            }
            else
            {
                j++;
            }
        }
    }
}