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
#define MOD 1e9 + 7;
#define reverse(temp) reverse(temp.begin(), temp.end());
typedef long long ll;
#define sort(arr) sort(arr.begin(), arr.end());

using namespace std;
int main()
{
    int t;
    in(t);
    while (t--)
    {
        int n;
        in(n);
        string str;
        cin >> str;
        int m_count = 0, t_count = 0;
        for (auto i : str)
        {
            if (i == 'T')
            {
                t_count++;
            }
            else
            {
                m_count++;
            }
        }
        int floor = 0;

        int tc1 = 0;
        int mc1 = 0;

        int tcheck=t_count;
        int mcheck = m_count+1;

        for (int i = 0; i < n; i++)
        {
            if (t_count != (2 * m_count))
            {
                floor = -1;
                break;
            }
            if (str[i] == 'T')
            {
                tc1++;
                tcheck--;
            }
            else if (str[i] == 'M')
            {
                mc1++;
                mcheck--;
                if (tc1 < mc1 || i == (n-1) || mcheck>tcheck )
                {
                    floor=-1;
                    break;
                }
            }
        }
        if (floor == -1)
        {cp
            out("NO")
        }
        else
        {
            out("YES");
        }
    }
}
