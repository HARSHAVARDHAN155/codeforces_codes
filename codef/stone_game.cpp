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
        brr = arr;
        sort(brr);
        int grt = brr[n - 1];
        int lst = brr[0];
        int ind1, ind2, ind3;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == grt)
            {
                if (i <= n / 2)
                {
                    ind1 = i + 1;
                }
                else
                {
                    ind1 = n - i;
                }
            }
            if (arr[i] == lst)
            {
                if (i <= n / 2)
                {
                    ind2 = i + 1;
                }
                else
                {
                    ind2 = n - i;
                }
            }
        }

        int r1 = ind1 + ind2;
        int floor = 0;
        int rs2, rs3;

        for (int i = 0; i < n; i++)
        {
            if (floor == 1 && (arr[i] == lst || arr[i] == grt))
            {

                rs2 = i + 1;
                break;
            }
            if (arr[i] == lst || arr[i] == grt)
            {
                floor = 1;
            }
        }
        floor = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (floor == 1 && (arr[i] == lst || arr[i] == grt))
            {

                rs3 = n - i;
                break;
            }
            if (arr[i] == lst || arr[i] == grt)
            {
                floor = 1;
            }
        }
        // cout << r1 << "  " << rs2 << " " << rs3 << "\n";
        int ans = min(r1, min(rs2, rs3));
        out(ans);
    }
}
