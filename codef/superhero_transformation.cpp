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
    string s, t;

    cin >> s >> t;
    int n = s.length();
    int m = t.length();

    if (n != m)
    {
        out("NO");
        exit(0);
    }
    int floor = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            if (t[i] == 'a' || t[i] == 'e' || t[i] == 'i' || t[i] == 'o' || t[i] == 'u')
            {
                floor = 1;
            }
            else
            {
                floor = -1;
                break;
            }
        }
        else
        {
            if (t[i] != 'a' && t[i] != 'e' && t[i] != 'i' && t[i] != 'o' && t[i] != 'u')
            {
                floor = 1;
            }
            else
            {
                floor = -1;
                break;
            }
        }
    }

    if (floor != -1)
    {
        out("YES");
    }
    else
    {
        out("NO");
    }
}