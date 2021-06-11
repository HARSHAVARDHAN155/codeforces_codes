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
    int n;
    in(n);
    vector<vector<int>> dp;
    int res[n][3];
    for (int i = 0; i < n; i++)
    {
        vector<int> v1;
        for (int j = 0; j < 3; j++)
        {
            int val;
            cin >> val;

            v1.push_back(val);
        }
        dp.push_back(v1);
        v1.clear();
    }

    res[0][0] = dp[0][0];
    res[0][1] = dp[0][1];
    res[0][2] = dp[0][2];

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int a = res[i - 1][0] + dp[i][j];
            int b = res[i - 1][1] + dp[i][j];
            int c = res[i - 1][2] + dp[i][j];
            int resl;
            if (j == 0)
            {
                resl = max(b, c);
            }
            else if (j == 1)
            {
                resl = max(a, c);
            }
            else
            {
                resl = max(a, b);
            }

            res[i][j] = resl;
        }
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //        cout << res[i][j]<< " ";
    //     }
    //     cout << endl;
    // }

    int ans = 0;
    for (int i = 0; i < 3; i++)
    {
        if (ans < res[n - 1][i])
        {
            ans = res[n - 1][i];
        }
    }

    out(ans)
}