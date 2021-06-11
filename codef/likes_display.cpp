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

        if (n >= 0 && n <= 999)
        {
            out(n)
        }
        else if (n >= 1000 && n < 999500)
        {
            ll qt = n / 1000;
            if (n >= ((qt * 1000) + 500))
            {
                cout << (qt + 1) << "K" << endl;
            }
            else
            {
                cout << (qt) << "K" << endl;
            }
        }
        else if (n >= 999500 && n <= 1000000)
        {
            cout << 1 << "M" << endl;
        }
        else
        {
            ll q = n / 1000000;
            if (n >= ((q * 1000000) + 500000))
            {
                cout << (q + 1) << "M" << endl;
            }
            else
            {
                cout << (q) << "M" << endl;
            }
        }
    }
}