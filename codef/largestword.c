#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    gets(str);
    int n = strlen(str);
    char words[100][20], maxword[100], lowword[100];
    int i = 0, k = 0, maxlen = 0, low = 0;
    for (int j = 0; j < n; j++)
    {
        if (str[j] == ' ')
        {
            i++;
            k = 0;
        }
        else
        {
            words[i][k] = str[j];
            k++;
            if (maxlen < k)
            {
                maxlen = k;
                strcpy(maxword, words[i]);
            }
        }
    }
    low=maxlen;
    for (int m = 0; m < i; m++)
    {
        if((strlen(words[m])<low))
        {
            low=strlen(words[m]);
            strcpy(lowword,words[m]);
        }
    }
    printf("%s\n", maxword);
    printf("%s\n", lowword);
}