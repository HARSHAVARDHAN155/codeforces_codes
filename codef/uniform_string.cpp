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
        int n, k;

        cin >> n >> k;
        string result;

        int times = n / k;

        for (int i = 0; i < k; i++)
        {
            char x = i + 97;
            string sub;

            for (int i = 0; i < times; i++)
            {
                sub += x;
            }
            result += sub;
        }
        int len = result.size();
        // out(len);
        // out(n);
        for (int i = 0; i < (n - len); i++)
        {
            // out("came");
            result += i + 97;
        }
        out(result);
    }
}
