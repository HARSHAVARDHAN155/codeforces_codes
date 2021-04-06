#include<stdio.h>
void reverse();
int main()
{
    char ch;
    reverse();
    return 0;
}
void reverse()
{
    char ch;
    scanf("%c",&ch);
    if(ch !='\n')
    {
        reverse();
        printf("%c",ch);
    }
    

}