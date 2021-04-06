#include<stdio.h>
    int main(void)
    {
        int n[5][5],steps;
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<5;j++)
            {
                scanf("%d",&n[i][j]);
                if(n[i][j]==1&&i>=2&&j>=2)
                    steps=(i-2)+(j-2);
                else if(n[i][j]==1&&i<2&&j>=2)
                    steps=(2-i)+(j-2);
                else if(n[i][j]==1&&i>=2&&j<2)
                    steps=(i-2)+(2-j);
                else if(n[i][j]==1&&i<2&&j<2)
                    steps=(2-i)+(2-j);
            }
        }
        printf("%d",steps);
        return 0;
    }
// #include <stdio.h>
// void get_matrix(int a[][10], int row, int col)
// {
//    // printf("enter elemts:\n");
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//            // printf("array%d%d:", i, j);
//             scanf("%d", &a[i][j]);
//         }
//     }
// }

// int main()
// {
//     int count = 0;
//     int a[5][5];
//     get_matrix(a, 5, 5);

//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             if (a[i][j] == 1)
//             {
//                 while (i != 2)
//                 {
//                     for (int k = 0; k < 5; ++k)
//                     {
//                         if (i == 4)
//                         {
//                             double temp;
//                             temp = a[0][k];
//                             a[0][k] = a[i][k];
//                             a[i][k] = temp;
//                             i = 0;
//                         }
//                         else
//                         {
//                             double temp;
//                             temp = a[i + 1][k];
//                             a[i + 1][k] = a[i][k];
//                             a[i][k] = temp;
//                             i++;
//                         }
//                     }
//                     count++;
//                 }
//                 while (j != 2)
//                 {
//                     for (int k = 0; k < 5; ++k)
//                     {
//                         if (j == 4)
//                         {
//                             double temp;
//                             temp = a[k][0];
//                             a[k][0] = a[k][j];
//                             a[k][j] = temp;
//                             j = 0;
//                         }
//                         else
//                         {
//                             double temp;
//                             temp = a[k][j + 1];
//                             a[k][j + 1] = a[k][j];
//                             a[k][j] = temp;
//                             j++;
//                         }
//                     }

//                     count++;
//                 }
//             }
//             else
//             {
//                 continue;
//             }
//         }
//     }
//     printf("%d", count);
//     return 0;
// }