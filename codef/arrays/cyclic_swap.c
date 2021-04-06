#include <stdio.h>

int cyclic(int *a, int *b, int *c)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}
int main()
{
    int x, y, z;
    scanf("%d %d %d",&x,&y,&z);
    cyclic(&x, &y, &z);
    printf("x=%d \ny=%d\n z=%d\n",x,y,z);
}