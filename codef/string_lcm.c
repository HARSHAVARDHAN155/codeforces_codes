#include <stdio.h>
#include <string.h>
#include<ctype.h>
int lcm(int n, int m)
{
    int max, lcm;
    max = (n > m) ? n : m;
    for (int i = max;; i++)
    {
        if (i % n == 0 && i % m == 0)
        {
            lcm = i;
            //printf("%d",lcm);
            break;
        }
    }
    return lcm;
}
int main()
{   
    // ={'a','b'}
    // ={'a','b','a','b'}
    char a[100], b[100];
    char ch;
    char arr[200], brr[200];
    int n, m, lc;
    int floor;
    scanf("%s", a);
    scanf("%s", b);
    m = strlen(a);
    n = strlen(b);
    lc = lcm(m, n);
    int k = 0;
    for (int i = 0; i < (lc / m); i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr[k] = a[j];
            k++;
        }
    }
    int z = 0;
    for (int j = 0; j < (lc / n); j++)
    {
        for (int l = 0; l < n; l++)
        {
            brr[z] = b[l];
            z++;
        }
    }
    for(int i=0;i<lc;i++)
    {
        if(arr[i]==brr[i])
        {
            floor=0;
        }
        else{
            floor=-1;
            break;
        }
    }
    if(floor==0)
    {
        printf("%s",brr);
    }
    else
    {
        printf("%d",floor);
    }
    return 0;
}