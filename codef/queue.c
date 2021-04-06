#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    int n, t;
    scanf("%d %d", &n, &t);
    scanf("%s", s);
    while (t != 0)
    {
        for (int i = 1; i <= strlen(s); i++)
        {

            if (s[i] == 'G' && s[i - 1] == 'B')
            {
                s[i] = 'B';
                s[i - 1] = 'G';
                i++;
            }
        }
        t--;
    }
    printf("%s", s);
}
