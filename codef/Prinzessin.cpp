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
        int len;
        in(len);
        string s;
        cin >> s;
        int floor = 0;
        string str = "abcdefghijklmnopqrstuvwxyz";
        string min;
        int n = 26;
        for (int len = 1; len <= n; len++)
        {
            // if (floor == -1)
            // {
            //     break;
            // }

            for (int i = 0; i <= n - len; i++)
            {
                // if (floor == -1)
                // {
                //     break;
                // }

                int j = i + len - 1;
                
                for (int l = i; l <= j; l++)
                {
                    string sub;
                    for (int k = l; k <= j; k++)
                    {
                        sub += str[k];
                    }
                    out(sub);
                }
                // int found = s.find(sub);

                // if (found == -1)
                // {
                //     floor = -1;
                //     out(sub);
                //     break;
                // }
            }
        }
    }
}