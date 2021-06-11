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

int perf(ll num)
{

    if (num >= 0)
    {
        ll sq = sqrt(num);

        if ((sq * sq) == num)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int t;
    in(t);
    while (t--)
    {
        int n;
        in(n);
        int floor = 0;

        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            arr.push_back(val);
        }

        int l = arr.size();

        for (int i = 0; i < n; i++)
        {
            if (perf(arr[i]) == 1)
            {
                floor = 1;
                out("YES");
                break;
            }
            ll pro = 1;
            if (floor == 1)
                break;
            for (int j = i; j < n; j++)
            {

                pro = arr[i] * arr[j];
            }
            if (perf(pro) == 1)
            {
                floor = 1;
                out("YES");
                break;
            }
        }
        if (floor == 0)
        {
            out("NO");
        }
    }
}
