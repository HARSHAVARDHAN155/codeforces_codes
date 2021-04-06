#include <stdio.h>
int subarry(long long int arr[], long long int n);
int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    printf("%d", subarry(arr, n));
}
int subarry(long long int arr[], long long int n)
{
    int m = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        { // Now A[i..j] is the subarray
            for (int k = i; k <= j; k++)
            {
                m++;
                if (m < n && m % 2 == 0)
                {
                    sum += arr[k];
                    m = 0;
                }
            }
        }
    }
    return sum;
}