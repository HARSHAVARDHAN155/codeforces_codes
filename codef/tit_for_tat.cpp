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
#define pb(x) push_back(x)
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
        int k;
        cin >> n >> k;
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            int val;
            in(val);
            arr.pb(val);
        }
        int l = 0;
        for (int i = 0; i < k; i++)
        {

            if (arr[l] != 0 && l != n - 1)
            {
                arr[l]--;
                arr[n - 1]++;
            }
            else
            {
                // l++;
                while (arr[l] <= 0)
                {
                    l++;
                }
                if (arr[l] != 0 && l < n - 1)
                {
                    arr[l]--;
                    arr[n - 1]++;
                }
                else if (l >= n - 1)
                {
                    break;
                }
            }
        }
        print(arr);
    }
}