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

        if (n % 2 == 1)
        {
            out("YES");
        }
        else
        {

            ll sum = 1;

            while (sum < n)
            {
                sum *= 2;
            }
            if (sum == n)
            {
                out("NO");
            }
            else
            {
                out("YES");
            }
        }
    }
}