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
        int k;
        cin >> k;
        vector<int> arr;

        for (int i = 1; i <= n; i++)
        {
            arr.push_back(i);
        }

        int max = 0;

        if (n % 2 == 0)
        {
            max = (n / 2) - 1;
        }
        else
        {
            max = n / 2;
        }
        if (k <= max)
        {
            int stop = 0;
            for (int i = 1; i < n; i += 2)
            {
                if (stop == k)
                    break;
                swap(arr[i], arr[i + 1]);
                stop++;
                
            }
            print(arr);
        }
        else
        {
            out(-1);
        }
    }
}
