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
    ll t;
    in(t);
    while (t--)
    {
        ll x, temp;
        cin >> x;
        temp = x;
        bool done = false;

        if (x > 10)
        {
            if (x >= 1100)
            {
                out("YES");
                continue;
            }
            if (x % 11 == 0 || x % 111 == 0)
            {
                out("YES");
                continue;
            }
            ll qt = temp / 11;

            for (ll i = qt; i > 0; i--)
            {
                ll sum = 11 * i;

                if ((temp - sum) % 111 == 0)
                {
                    done = true;
                    out("YES") break;
                }
            }

            if (!done)
            {
                // out("came");
                out("NO");
            }
        }
        else
        {
            out("NO")
        }
    }
}
