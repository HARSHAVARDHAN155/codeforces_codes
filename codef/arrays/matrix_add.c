//addition of matrix
#include <stdio.h>
void get_matrix(int a[][10], int row, int col)
{   
    printf("enter elemts:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("array%d%d:",i,j);
            scanf("%d", &a[i][j]);
        }
    }
}

void multiply(int a[][10], int b[][10], int result[][10], int r1, int r2, int c1, int c2)
{
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            result[i][j] = 0;
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            for (int k = 0; k < c2; k++)
                result[i][j] += a[i][k] * b[k][j];
        }
    }
}

void print_array(int a[][10], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", a[i][j]);

            if (j - (col - 1) == 0)
            {
                printf("\n \n");
            }
        }
    }
}

int main()
{
    int array1[10][10];
    int array2[10][10];
    int result[10][10];
    int r1, r2, c1, c2;
    printf("r1 c1 r2 c2");
    scanf("%d %d %d %d", &r1, &c1, &r2, &c2);
    get_matrix(array1, r1, c1);
    get_matrix(array2, r2, c2);
    multiply(array1, array2, result, r1, r2, c1, c2);
    print_array(result, r1, c2);
}