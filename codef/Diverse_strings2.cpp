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
        string s;

        in(s);

        sort(s);
        int n = len(s);
        int floor = -1;
        int stop = 0;
        if (n == 1)
        {
            out("YES");
            continue;
        }

        for (int i = 0; i < n - 1; i++)
        {
            int a1 = s[i];
            int a2;
            if (i != n - 1)
            {
                a2 = s[i + 1];
            }
            if (a1 == a2)
            {
                stop = -1;
                out("NO");
                break;
            }
            else if ((a1) != a2 && (a1 + 1) == a2)
            {
                floor = 0;
            }
            else
            {
                floor = -1;

                break;
            }
        }
        if (stop == 0)
        {
            if (floor == 0)
            {
                out("YES");
            }
            else
            {
                out("NO");
            }
        }
    }
}