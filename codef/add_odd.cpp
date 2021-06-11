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

        if (a == b)
        {
            out(0);
        }
        else if (a < b)
        {
            ll diff = b - a;
            if (diff % 2 == 0)
            {
                out("2");
            }
            else
            {
                out("1");
            }
        }
        else if (a > b)
        {
            ll diff = a - b;
            if (diff % 2 == 0)
            {
                out("1");
            }
            else
            {
                out("2");
            }
        }
    }
}
