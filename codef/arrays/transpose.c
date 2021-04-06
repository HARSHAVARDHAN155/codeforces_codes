#include <stdio.h>
void get_matrix(int a[][10], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("enter a%d%d: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

int main()
{
    int arry[10][10], r1, c1;
    scanf("%d %d", &r1, &c1);
    get_matrix(arry, r1, c1);
    for (int i = 0; i < c1; i++)
    {
        for (int j = 0; j < r1; j++)
        {
            printf("%d ", arry[j][i]);
            if (j - (r1 - 1) == 0)
            {
                printf("\n");
            }
        }
    }
}