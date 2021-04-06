#include<stdio.h>
int fib(int n)
{
    while(n!=0)
    {   
        if(n>1)
        {
            return fib(n-1)+fib(n-2);
        }
        else
        {
            return 1;
        }
        

    }
}

int main()
{   
    int a;
    scanf("%d",&a);
    // for(int i=0;i<a;i++){
    //     printf("%d",fib(i));
    // }
    printf("%d",fib(a));
}