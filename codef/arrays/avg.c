// average of array of elemets
#include<stdio.h>
int main()
{   
    int a[100];
    int sum=0,N;
    float average;
    printf("enter number of elements");
    scanf("%d",&N);
    printf("please enter the numbers");
    for(int i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    average=(sum/N);
    printf("the average of elemts is: %.2f\n",average);

}