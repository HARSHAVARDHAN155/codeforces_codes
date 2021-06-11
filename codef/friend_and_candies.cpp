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
#define MOD 1e9 + 7;
#define reverse(temp) reverse(temp.begin(), temp.end());
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
        vector<int> arr, brr;
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            arr.push_back(val);
            sum += val;
        }
        brr = arr;
        sort(brr);
        int eql = brr[0];
        vector<int>::iterator it, it2;
        it = upper_bound(brr.begin(), brr.end(), eql);
        int found = it - brr.begin();
        // out(found);
        if (found == n)
        {
            out(0);
            continue;
        }

        int base = sum / n;
        it2 = upper_bound(brr.begin(), brr.end(), base);
        int found2 = it2 - brr.begin();
        // out(found2)

        int k;

        if (sum % n == 0)
        {
            k = n - found2;
            out(k);
        }
        else
        {
            out(-1);
        }
    }
}