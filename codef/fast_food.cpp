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
        int a, b, c;
        cin >> a >> b >> c;

        int sum = a + b + c;
        int count = 0;
        if (sum == 0)
        {
            out(0);
            continue;
        }

        if (a >= 4 && b >= 4 && c >= 4)
        {
            out(7);
        }
        else if (sum >= 9 && (a > 2 && b > 2 && c > 2))
        {
            out(6)
        }
        else if (sum >= 6 && (a > 1 && b > 1 && c > 1))
        {
            out(5);
        }
        else if (sum >= 5 && ((a == 1 && b != 0 && c != 0) || (b == 1 && a != 0 && c != 0) || (c == 1 && b != 0 && a != 0)))
        {
            out(4);
        }
        else if (sum >= 3 && ((a > 1 && b > 1 ) || (c > 1 && b >1 ) || (c > 1 && a >=1 )))
        {
            out(3);
        }
        else if (sum >= 2 && ((a == 0 && b != 0 && c != 0) || (b == 0 && a != 0 && c != 0) || (c == 0 && b != 0 && a != 0)))
        {
            out(2);
        }
        else
        {
            out(1);
        }
    }
}