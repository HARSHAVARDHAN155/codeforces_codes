#include <stdio.h>
#include <math.h>

void check_near(int a)

{
    int j = 0;
    int result1, result2;
    while (j != -1)
    {
        result1 = pow(2, j);
        result2 = pow(2, j + 1);
        if (a > result1 && a <= result2)
        {
            j = -1;
            if (a - result1 < result2 - a)
            {
                printf("%d nearer to %d\n", a, result1);
            }
            else
            {
                printf("%d nearer to %d\n", a, result2);
            }
        }
        else
        {
            j++;
        }
    }
}

int main()
{
    int a[5] = {5, 2, 7, 12};
    for (int i = 0; i < 5; i++)
    {
        check_near(a[i]);
    }
}