#include <stdio.h>
int lcm(int n, int m)
{
    int max,lcm;
    max=(n > m) ? n : m;
    for(int i=max; ;i++)
    {
        if(i%n==0 && i%m==0)
        {       
            lcm=i;
            //printf("%d",i);
            break;

        }
    }
    return lcm;
}
int main()
{
    int a=2,b=5;
    printf("%d",lcm(a,b));
    return 0;
}