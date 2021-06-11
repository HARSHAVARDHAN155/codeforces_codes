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
    int t;
    in(t);
    while (t--)
    {
        int n;
        in(n);
        string s;
        in(s);
        

        int one = 0;
        int zero = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                one++;
            }
            else
            {
                zero++;
            }
        }

        if (zero % 2 == 0)
        {
            out("BOB")
        }
        else if (zero == 1)
        {
            out("BOB");
        }
        else
        {

            out("ALICE");
        }
    }
}