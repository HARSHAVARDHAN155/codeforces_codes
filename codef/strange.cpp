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
typedef long long ll;
#define sort(arr) sort(arr.begin(), arr.end());

using namespace std;
int main()
{
    int t;
    in(t);
    while (t--)
    {
        int n;
        in(n);

        long long int max = 0;

        vector<long long int> arr, brr;

        vector<long long int>::iterator it;

        for (int i = 0; i < n; i++)
        {
            long long int val;
            cin >> val;
            if (val > max)
            {
                max = val;
            }
            arr.push_back(val);
        }
        int count = 0;
        brr = arr;
        sort(brr);

        long long int diff = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            long long int dd = abs(brr[i] - brr[i + 1]);

            if (dd >= brr[i + 1] && diff >= brr[i+1])
            {
                diff = min(diff, dd);
                count++;
            }
            else
            {
                count++;
                break;
            }
        }
        out(count);
    }
}