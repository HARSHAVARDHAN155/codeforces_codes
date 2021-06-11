/* HARSHA_20    */
///////////////////////////////////////
#include <bits/stdc++.h>

#define print(arr)        \
    for (auto c : arr)    \
    {                     \
        cout << c << " "; \
    }                     \

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
            if (val % 2 == 0)
            {
                arr.push_back(val);
            }
            else
            {
                brr.push_back(val);
            }
        }
        print(arr);
        print(brr);
        cout<< endl;

    }
}
