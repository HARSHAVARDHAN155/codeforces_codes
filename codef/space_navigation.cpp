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
        int x, y;
        cin >> x >> y;
        string arr;

        cin >> arr;
        int l = 0, r = 0, u = 0, d = 0;
        int count = arr.length();

        for (int i = 0; i < count; i++)
        {
            if (arr[i] == 'L')
            {
                l++;
            }
            else if (arr[i] == 'R')
            {
                r++;
            }
            else if (arr[i] == 'U')
            {
                u++;
            }
            else if (arr[i] == 'D')
            {
                d++;
            }
        }

        // cout << r << l << u << d << endl;
        int floor = 0;
        if (x > 0 && r < x)
        {
            floor = -1;
        }
        if (y > 0 && u < y)
        {
            floor = -1;
        }
        if (x < 0 && l < abs(x))
        {
            floor = -1;
        }
        if (y < 0 && d < abs(y))
        {
            floor = -1;
        }

        if (floor != -1)
        {
            out("YES")
        }
        else
        {
            out("NO")
        }
    }
}