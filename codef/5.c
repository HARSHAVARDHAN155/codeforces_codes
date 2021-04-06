#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <=(high - 1); j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void quick_sort(int arr[], int low, int high)
{
    if (low < high)
    {
        int p = partition(arr, low, high);

        quick_sort(arr, low, p - 1);
        quick_sort(arr, p + 1, high);
    }
}
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 
int main()
{   
    int n,stop;
    int brr[102];
    int a[102];
    scanf("%d", &n);
    scanf("%d",&stop);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    quick_sort(a, 0, n-1); 
   // printArray(a, n); 
    //printf("\n");
    
    int k=((n+1)/2)-1;
    int median = a[k];
    for(int i=0;i<n;i++)
    {
        brr[i]=abs(a[i]-median);
    }
   // printArray(brr, n); 
   // printf("\n");
    quick_sort(brr,0,n-1);
   // printArray(brr, n); 
    int intial=1;
    int l=1;
    while(intial<=stop)
    {
        printf("%d ",brr[n-l]);
        l++;
        intial++;
    }
}