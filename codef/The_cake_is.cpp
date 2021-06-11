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
        int m, k;
        cin >> m >> k;
        int arr[n + 1][m + 1];
        // memset(arr, -1, sizeof(arr[0][0]) * m * n);

        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= m; j++)
            {
                arr[i][j] = -1;
            }
            // cout << endl;
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                arr[i][j] = arr[i - 1][j] + j;
            }
        }

        // for (int i = 0; i <= n; i++)
        // {
        //     for (int j = 0; j <= m; j++)
        //     {
        //        cout << arr[i][j] << " ";
        //     }
        //     cout << endl;
        // }

        if (arr[n][m] == k)
        {
            out("YES")
        }
        else
        {
            out("NO")
        }
    }
}