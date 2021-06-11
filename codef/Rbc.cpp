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
        in(s);
        int n = len(s);

        if (n % 2 != 0 || s[n-1]=='(')
        {
            out("NO");
            continue;
        }

        int left_count = 0;
        int Q_count = 0;
        int flag = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                left_count++;
            }
            else if (s[i] == '?')
            {
                Q_count++;
            }

            if (s[i] == ')')
            {
                if (left_count == 0 && Q_count == 0)
                {
                    flag = -1;
                    break;
                }
                else if (left_count != 0)
                {
                    left_count--;
                }
                else
                {
                    Q_count--;
                }
            }
        }

        // out(left_count)
        // out(Q_count)

        if (flag == 0 && (((Q_count+left_count)%2==0)))
        {
            out("YES")
        }
        else if(flag==0 && (left_count== Q_count))
        {
            out("YES")
        }
        else
        {
            out("NO");
        }
    }
}