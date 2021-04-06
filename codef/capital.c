#include <stdio.h>
#include <ctype.h>
#include<string.h>
int main()
{
    char sentence[10000], intial;
    scanf("%[^\n]s", &sentence);
    printf("%c",toupper(sentence[0]));
    for (int i = 1; i < strlen(sentence); i++)
    {
        printf("%c", sentence[i]);
    }
}