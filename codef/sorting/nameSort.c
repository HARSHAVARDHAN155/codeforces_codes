#include <stdio.h>
#include <string.h>
void main()
{
    int n;
    scanf("%d", &n);
    char name[50][20], temp[20];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", name[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (strcmp(name[i], name[j]) > 0)
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }
    for(int k=0;k<n;k++)
    {
        printf("%s\n",name[k]);
    }
}