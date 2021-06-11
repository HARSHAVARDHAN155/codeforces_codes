/* HARSHA_20    */
///////////////////////////////////////
#include <bits/stdc++.h>

#define print(arr)        \
    for (auto c : arr)    \
    {                     \
        cout << c << " "; \
    }                     \
    cout << endl;

#define out(x) cout << x << endl;
#define len(n) n.length();

#define in(x) cin >> x;
#define sort(arr) sort(arr.begin(), arr.end());

using namespace std;

unsigned long long int to_anyform(unsigned long long int n, unsigned long long int K = 2)
{
    // #define K 16
    unsigned long long int rem, value = 0;
    unsigned long long int i = 0, k = 0;
    while (n > 0)
    {
        rem = (n % K);
        value += (rem * (pow(10, i)));
        n /= K;
        k++;
        i++;
    }
    return "%.5d", value;
}
void rvereseArray(long long int arr[], long long int start, long long int end)
{
    while (start < end)
    {
       long long int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    long long int t;
    in(t);

    while (t--)
    {
        long long int n;
        in(n);
        int rem;
        long long int arr[32] = {0};

        int i = 0;
        while (n > 0)
        {
            rem = (n % 2);
            arr[i] = rem;
            n /= 2;
            i++;
        }
        // print(arr);
        rvereseArray(arr, 0, 31);
        //  print(arr);

        // int len = arr.size();

        for (int i = 0; i < 33; i++)
        {

            if (arr[i] == 1)
            {
                int ans = (pow(2, (31 - i)) - 1);
                cout << ans << endl;
                break;
            }
        }
    }
}