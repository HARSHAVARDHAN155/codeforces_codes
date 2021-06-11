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
    int n;
    in(n);
    int arr[101];
    vector<int> brr;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        arr[val]++;
        brr.push_back(val);
    }
    sort(brr);
    int count = 0;
    for (int i = 0; i < n; i += 2)
    {
        if (brr[i] != brr[i + 1])
        {
            count += brr[i + 1] - brr[i];
        }
    }
    out(count);
}
