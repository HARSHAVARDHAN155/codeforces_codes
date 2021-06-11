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
    ll n, w;
    cin >> n >> w;

    ll weight[n + 1];
    ll values[n + 1];

    for (ll i = 1; i <= n; i++)
    {
        ll w1, v1;
        cin >> w1 >> v1;
        weight[i] = w1;
        values[i] = v1;
    }

    ll dp[n + 1][w + 1];
    dp[1][0] = 0;

    for (ll j = 0; j < w + 1; j++)
    {
        dp[0][j] = 0;
    }

    for (ll i = 1; i < n + 1; i++)
    {
        for (ll j = 0; j < w + 1; j++)
        {
            ll a = dp[i - 1][j];
            ll b = 0;
            if (j - weight[i] >= 0)
            {
                b = dp[i - 1][j - weight[i]] + values[i];
            }
            dp[i][j] = max(a, b);
        }
    }
     cout << dp[n][w]<<endl;

    // for (ll i = 0; i < n + 1; i++)
    // {
    //     for (ll j = 0; j < w + 1; j++)
    //     {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }
}