#include <stdio.h>
#define size (sizeof(arry)/sizeof(arry[0]))

int product(int a[10], int len)
{
    int product = 1;
    for (int i = 0; i < len; i++)
    {
        product *= a[i];
    }
    return product;
}

int factors(int a)
{
  //  int b[100], j = 0;
    int sum=0;
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
           // b[j] = i;
            sum+=i;
           // j++;
        }
    }
    return sum; 
}
int main()
{   
   int arry[10]={1,2};
    int a,b;
    printf("%lu",size);
//     b=product(arry,2);
//     a=factors(b);
//     printf("%d\n",a);
// 
}