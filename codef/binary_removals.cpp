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
        string s;
        cin >> s;
        int n = len(s);
        string sub;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                if (s[i + 1] == '1')
                {

                    sub = s.substr(i + 2, (n - (i + 2)));
                    break;
                }
            }
        }
        int flag = 0;
        // out(sub);
        int m = len(sub);
        // out(m);

        for (int i = 0; i < m; i++)
        {
            if (sub[i] == '0')
            {
                if (sub[i + 1] == '0')
                {
                    flag = -1;
                    // out("NO");
                    break;
                }
            }
        }

        if (flag == 0)
        {
            out("YES")
        }
        else
        {
            out("NO")
        }
    }
}