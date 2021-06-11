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
        cin >>s;
        string temp = s;
        reverse(temp.begin(), temp.end());

        int len = s.size();
        int floor = -1;
        int note=0;
        char check = s[0];
        for (int i = 0; i < len; i++)
        {
            if (check != s[i])
            {
                floor = 0;
                note =i;
                break;
            }
        }
        if (floor == -1)
        {
            out(-1);
        }
        else if (temp != s)
        {
            out(s);
            continue;
        }
        else
        {
            swap(s[0],s[note]);
            out(s);
        }
    }
}