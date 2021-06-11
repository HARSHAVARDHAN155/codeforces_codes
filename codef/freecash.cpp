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
    ll n;
    cin >> n;
    int floor = 0;
    int f;
    int h_temp, m_temp;
    int arr[24][60] = {0};
    int max = 0;

    while (n--)
    {
        int h, m;
        f = 0;

        cin >> h >> m;
        arr[h][m]++;
    }
    for (int i = 0; i < 24; i++)
    {
        for (int j = 0; j < 60; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    out(max);
}
