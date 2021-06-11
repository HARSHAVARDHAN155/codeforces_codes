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
        ll n;
        in(n);

        if (n % 2020 == 0)
        {
            out("YES");
            continue;
        }
        if (n % 2021 == 0)
        {
            out("YES");
            continue;
        }

        ll qut = n / 2020;
        int floor = 0;

        for (ll i = n; i > 0; i--)
        {
            ll sum = 2020 * i;

            if ((n - sum) % 2021 == 0)
            {
                floor = -1;
                out("YES");
                break;
            }
        }
        if (floor == 0)
        {
            out("NO");
        }
    }
}