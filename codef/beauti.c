#include <stdio.h>
#include <math.h>
// void get_matrix(int a[][10], int row, int col)
// {
//     printf("enter elemts:\n");
//     for (int i = 1; i <= row; i++)
//     {
//         for (int j = 1; j <= col; j++)
//         {
//             //printf("array%d%d:", i, j);
//             scanf("%d", &a[i][j]);
//         }
//     }
// }
int main()
{
    int array[10][10];
    int m;
    // get_matrix(array, 5, 5);
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)

        {
            scanf("%d", &array[i][j]);
            if (array[i][j] == 1)
            {
                m = abs(i - 3) + abs(j - 3);
            }
        }
    }
    printf("%d\n", m);
}