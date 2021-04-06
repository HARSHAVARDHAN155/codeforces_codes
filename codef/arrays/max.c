//largest of the array of numbers
#include <stdio.h>
int main()
{
    int a[100];
    int max,N;
    printf("enter size of the array");
        scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[0];
    int i = 0;
    while (N > 0)
    {
        if (max < a[i])
        {
            max = a[i];
        }
        i++;
        N--;
    }
    printf("max of the element is %d \n",max);
}