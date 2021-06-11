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
#define sort(arr) sort(arr.begin(), arr.end());

using namespace std;

int main()
{
    int t;
    in(t);
    while (t--)
    {
        int n;
        int k;
        cin >> n >> k;

        if (n == k)
        {
            out(1);
        }
        else if (n > k)
        {
            if (n % k == 0)
            {
                out(1);
            }
            else
            {
                out(2);
            }
        }
        else if (n < k)
        {
            if (n == 1)
            {
                out(k);
            }
            else if((n+1) ==k)
            {
                out(2);
            }
            else if (k % n == 0 )
            {
                out(k/n);
            }
            else
            {
                out((k/n)+1);
            }
        }
    }
}