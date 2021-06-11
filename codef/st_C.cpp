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
    int n, k;
    cin >> n >> k;
    vector<int> arr;
    vector<pair<string, pair<int, int>>> result;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        arr.push_back(val);
    }

    for (int i = 1; i < n; i++)
    {
        int diff = arr[i] - arr[i - 1];

        if (diff != k)
        {
            if (diff < k)
            {
                int temp = arr[i];
                int rr = arr[i - 1] + k - arr[i];
                arr[i] = rr + temp;
                result.push_back(make_pair("+", make_pair(i+1, rr)));
            }
            else if (diff > k)
            {
                int temp = arr[i];
                int rr = arr[i] - arr[i - 1] - k;
                arr[i] = temp - rr;
                result.push_back(make_pair("-", make_pair(i+1, rr)));
            }
        }
    }
    int len = result.size();

    out(len);
    for (int i = 0; i < len; i++)
    {
        cout << result[i].first << " " << result[i].second.first << " " << result[i].second.second << "\n";
    }
}