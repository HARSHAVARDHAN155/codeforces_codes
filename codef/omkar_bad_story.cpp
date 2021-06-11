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
        int n;
        in(n);
        vector<int> arr, brr;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            arr.push_back(val);
        }
        int min = INT_MAX;
        int floor = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {

                int diff = abs(arr[i] - arr[j]);

                if (diff < min && diff != 0)
                {
                    floor = 1;
                    min = diff;
                }
            }
        }
        brr = arr;
        sort(brr);
        // out(min);
        int max = brr[n - 1];
        int st = max / min;

        vector<int>::iterator it;
        it = find(brr.begin(), brr.end(), 0);

        for (int i = 0; i < n; i++)
        {
            if (arr[i] % min != 0 || st > 300)
            {
                floor = -1;
                out("NO");
                break;
            }
        }

        if (floor != -1)
        {
            out("YES");

            if (it != brr.end())
            {
                out(st + 1);
                cout
                    << 0 << " ";
            }
            else
            {
                out(st)
            }
            for (int i = 1; i <= st; i++)
            {
                cout << i * min << " ";
            }
            cout << "\n";
        }
    }
}
