#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int i=0;
    while(n<=m)
    {
        n=n*3;
        m=m*2;
        i++;
    }
    printf("%d",i);
}