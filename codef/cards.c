#include <stdio.h>
int main()
{
    int w, h, n, n1 = 1;
    int t;

    scanf("%d", &t); // no of test cases
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d", &w, &h, &n);
        while ((w % 2 == 0) || (h % 2 == 0))
        {
            if (w % 2 == 0)
            {
                w = w / 2;
                n1++;
                
            }
            else if (h % 2 == 0)
            {
                h = h / 2;
                n1++;
            }
        }
        if (n1 == n)
        {
            printf("yes\n");
        }
        else
        {
            printf("No\n");
        }
        n1=1;
    }
}