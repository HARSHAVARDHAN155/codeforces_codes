#include <bits/stdc++.h>

#define print(arr)        \
    for (auto c : arr)    \
    {                     \
        cout << c << " "; \
    }                     \
    cout << endl;

#define out(x) cout << x << endl;

#define in(x) cin >> x;

using namespace std;

int main()
{
    int t;
    in(t);
    while (t--)
    {
        int n;
        in(n);
        string s, t;
        in(s);
        in(t);

        int count = 0;
        char s_temp, t_temp, s_temp1, t_temp1;

        for (int i = 0; i < n; i++)
        {
            if (s[i] != t[i] && count == 0)
            {
                s_temp = s[i];
                t_temp = t[i];
                count++;
            }
            else if (s[i] != t[i])
            {
                s_temp1 = s[i];
                t_temp1 = t[i];
                count++;
            }
        }

        // out(count);
        // out(s_temp1);
        // out(s_temp);
        // out(t_temp1);
        // out(s_temp1);
        if (count < 3 && s_temp1 == s_temp && t_temp1 == t_temp)
        {
            out("YES");
        }
        else
        {
            out("NO");
        }
    }
}