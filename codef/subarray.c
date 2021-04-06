#include <stdio.h>

int main()
{
    int A[] = {1, 2, 3, 4, 5};
    int B[1000] = {0};
    int crr[1001]={0};
    int c = 0,n=0;
    int len = sizeof(A) / sizeof(int);
    for (int i = 0; i < len; i++)
    {
        for (int j = i; j < len; j++)
        { // Now A[i..j] is the subarray
            for (int k = i; k <= j; k++)
            {
                c++;
               // printf("%d ", A[k]);
                crr[n] = A[k];
                n++;
            }
            // printf("\n");
            if (c % 2 == 0)
            {
                for(int l=0;l<n;l++){
                    printf("%d ",crr[l]);
                }
            }
            printf("-- %d", c);
            c = 0;
            printf("\n");
        }
    }
    return 0;
}
