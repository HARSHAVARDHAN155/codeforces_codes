// words more than 10 chrs should print only in 4 leters that is 1st and last in midiile number (the number of elements in 1st and last)
#include <stdio.h>
#include <string.h>
int main()
{   
    char word[100];
    int n;
    int a;
    scanf("%d", &n); // number of words
    for (int i = 0; i < n; i++)
    {
        scanf("%s", word);

         if (strlen(word) > 10)
        {
            a = strlen(word);
            printf("%c%d%c\n",word[0],(a-2),word[a-1]);
        }
        else
        {
            printf("%s\n",word);
        }
        
    }
}