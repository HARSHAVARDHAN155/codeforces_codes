// distinct mean non repeating
#include<stdio.h>
#include<string.h>
int main()
{
    char name[100];
    int digit[1000]={0};
    int len,sum=0;
    scanf("%s",name);
    len = strlen(name);
    for (int i = 1; i <= len; i++)
    {   
        digit[name[i]]++;

    }
    for(int j=0;j<1000;j++)
    {
        if(digit[j]>=1)
        {
            sum++;
        }
    }
    printf("%d",sum);
}