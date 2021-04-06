#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int tests;
    scanf("%d", &tests);

    // for (int i = 0; i < tests; i++)
    {
        char string1[21];
        char string2[21];
        char equal_substring[20];

        scanf("%s %s", string1, string2);
        int len_string1, len_string2;

        char arr[1000][20];
        char brr[1000][20];
        int a1 = 0;
        int b1 = 0;

        len_string1 = strlen(string1);
        len_string2 = strlen(string2);

        int n = len_string1 > len_string2 ? len_string1 : len_string2;
        // printf("%d\n", n);

        for (int i = 0; i < n; i++)
        {
            char temp[len_string1 - i - +1];
            int tempindex = 0;
            char temp2[len_string2 - i - +1];
            int tempindex2 = 0;
            for (int j = i; j < n; j++)
            {

                /*  for (int k =i ; k < j; k++)
                {   
                    printf("%c",string1[k]);
                    printf("\n");
                    printf("%c",string2[k]);
                    
                }*/

                if (string1[j] != '\0')
                {
                    temp[tempindex] = string1[j];
                    tempindex++;
                    temp[tempindex] = '\0';
                    strcpy(arr[a1], temp);
                    a1++;
                    printf("%s\n", temp);
                }

                if (string2[j] != '\0')
                {
                    temp2[tempindex2] = string2[j];
                    tempindex2++;
                    temp2[tempindex2] = '\0';
                    strcpy(brr[b1], temp2);
                    b1++;
                    //printf("%s\n", temp2);
                }
                printf("\n");
            }
        }

        for (int i = 0; i <= a1; i++)
        {
            for (int j = 0; j <= b1; j++)
            {
                if (strcmp(arr[i], brr[j]) == 0)
                {
                    if (strlen(arr[i]) > strlen(equal_substring))
                    {
                        strcpy(equal_substring, arr[i]);
                    }
                    printf("%s\n", arr[i]);
                }
            }
        }
        printf("longest common substring: %s\n", equal_substring);
        int k = strlen(equal_substring);
        printf("%d\n", k);
        printf("len of string 1 %d\n", len_string1);
        printf("len of string 2 %d\n", len_string2);
        int result;
        result = (len_string1 - k) + (len_string2 - k);
        printf("%d\n", result);
    }
    return 0;
}