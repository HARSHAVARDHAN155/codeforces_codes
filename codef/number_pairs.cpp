/* HARSHA_20    */
///////////////////////////////////////
#include <bits/stdc++.h>

#define prlong long(arr)        \
    for (auto c : arr)    \
    {                     \
        cout << c << " "; \
    }                     \
    cout << endl;

#define out(x) cout << x << endl;
#define len(n) n.length();

#define in(x) cin >> x;
#define MOD 1e9 + 7;
#define reverse(temp) reverse(temp.begin(), temp.end());
typedef long long ll;
#define sort(arr) sort(arr.begin(), arr.end());

using namespace std;
int main()
{
    long long t;
    in(t);
    while (t--)
    {
        long long n, r, l;

        in(n);
        cin >> l >> r;
        vector<long long> arr, brr;
        unordered_map<long long, long long> map;
        for (long long i = 0; i < n; i++)
        {
            long long val;
            cin >> val;
            arr.push_back(val);
            map[val]++;
        }
        long long count = 0;

        for (long long i = 0; i < n; i++)
        {
            if (arr[i] >= l && arr[i] <= r)
            {
                long long st = r - arr[i];
                for (long long j = 1; j <= st; j++)
                {
                    if (j != arr[i])
                    {
                        count += map[j];
                    }
                    else if (map[j] > 1)
                    {
                        count += (map[j]-1);
                    }
                }
            }
            else if (arr[i] < l && arr[i] < r)
            {
                long long start = l - arr[i];
                long long st = r - arr[i];

                for (long long j = start; j <= st; j++)
                {
                    if (j != arr[i])
                    {
                        count += map[j];
                    }
                    else if (map[j] > 1)
                    {
                        count += (map[j]-1);
                    }
                }
            }
        }
        out(count / 2);
    }
}