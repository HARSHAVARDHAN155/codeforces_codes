#include<stdio.h>
int isOverlapping(int arr[],int c[]);
int main()
{
    int n=0;
    scanf("%d",&n);
    int i,j;
    int rec[n][4];
    for(i=0;i<n;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&rec[i][j]);
        }
    }
    int len=0;
    i=0;
    while(i<n)
    //for(int i=0;i<n;i++)
    {
        j=i+1;
        while(j<n)
        //for(int j=i+1;j<n;j++)
        {
            if(isOverlapping(rec[i],rec[j])==1)
                len++;
            j++;
        }
        i++;
    }

    printf("%d\n",len);

    return 0;
}
int isOverlapping(int arr[],int c[])
{
    if(arr[0]>c[2] || arr[2]<c[0])
        return 0;
    if(arr[1]>c[3] || arr[3]<c[1])
        return 0;

    return 1;
}