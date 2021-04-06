#include <stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char arr[110][120];
    char temp[120];
    char str[20];
    for (int i = 0; i < n; i++)
    {
        scanf("%s",arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if((strcmp(arr[i],arr[j]))>0)
            {
                
                strcpy(temp,arr[j]);
                strcpy(arr[j],arr[i]);
                strcpy(arr[i],temp);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(strcmp(arr[i],arr[i-1])!=0)
        {
            printf("%s\n",arr[i]);
        }
    }
}