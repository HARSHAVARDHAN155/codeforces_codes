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

typedef long long ll;

#define in(x) cin >> x;
#define sort(arr) sort(arr.begin(), arr.end());

using namespace std;
int main()
{
    ll t;
    in(t);
    while (t--)
    {
        ll p, a, b, c;
        cin >> p >> a >> b >> c;

        ll a1 = p / a;
        ll b1 = p / b;
        ll c1 = p / c;

        ll r1 = ((a1 + 1) * a) - p;
        ll r2 = ((b1 + 1) * b) - p;
        ll r3 = ((c1 + 1) * c) - p;

        ll res = min(r1, (min(r2, r3)));

        if (p % a == 0 || p % b == 0 || p % c == 0)
        {
            out(0);
        }
        else
        {
            out(res);
        }
    }
}