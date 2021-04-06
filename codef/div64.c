
#include <stdio.h>
#include <string.h>
int main()
{
    long n;
    int rem;
    int temp;
    int floor = 0;
    char len[101];
    scanf("%s", len);
    int digit_seen[5] = {0};
    // int len=String.valueof(n);
    // sprintf(len,"%ld",n);

    for (int i = 0; i < strlen(len); i++)
    {
        if (floor == 0)
        {
            if (len[i] == '1')
            {
                temp = i;
                floor = -1;
                n = len[i] - '0';
                digit_seen[n]++;
            }
        }
        else
        {
            if ((strlen(len) - temp) >= 6)
            {
                n = len[i] - '0';
                digit_seen[n]++;
            }
        }
    }
   // printf("%d %d",digit_seen[0],digit_seen[1]);

    if (digit_seen[0] >= 6 && digit_seen[1] >= 1)
    {
        printf("yes");
    }
    else
    {
        printf("no\n");
    }
}