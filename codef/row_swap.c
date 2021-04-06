#include <stdio.h>
void row_swap(int r1, int r2, int m[][5])
{   
    int len=5;

    for (int i = 0; i < len; ++i)
    {
        double temp;
        temp = m[r2][i];
        m[r2][i] = m[r1][i];
        m[r1][i] = temp;
    }
   //return a[5][5];
}
int main()
{
    int a[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    row_swap(2,3, a);

    // for (int i = 0; i < 5; ++i)
    // {
    //     double temp;
    //     temp = a[2][i];
    //     a[2][i] = a[1][i];
    //     a[1][i] = temp;
    // }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", a[i][j]);
            if (j == 4)
            {
                printf("\n");
            }
        }
    }
}