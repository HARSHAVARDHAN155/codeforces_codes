#include<stdio.h>
main() {
   char str[20];    //create an empty string to store number
 int number;
   printf("Enter a number: ");
   scanf("%d", &number);
   sprintf(str, "%d", number);   //make the number into string using sprintf function
   printf("\nYou have entered: %s", str);
}