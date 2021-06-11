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
        ll a, b;
        cin >> a >> b;
        ll res = INT_MAX;
        ll temp = a;
        ll count = 0;
        if (b == 1)
        {
            b++;
            count++;
        }

        ll stop = sqrt(a);
        // out(stop);

        if (a == b)
        {
            out(count + 2);
        }
        else if (a < b)
        {
            out(count + 1);
        }
        else if (a > b)
        {
            for (ll i = b; i < 30; i++)
            {
                ll count1 = 0;
                while (a != 0)
                {
                    a /= b;
                    count1++;
                }
                res = min(count1, res);
                a = temp;
            }
            out(res + count);
        }
    }
}