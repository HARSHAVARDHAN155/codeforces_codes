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
typedef long long ll;
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
        vector<int> arr, brr;
        vector<int>::iterator it;
        for (int i = 0; i < n; i++)
        {
            int val;
            in(val);
            arr.push_back(val);
        }
        int temp = n;

        it = find(arr.begin(), arr.end(), n);
        int found = distance(arr.begin(), it);
        // out(found);
        int req = n;

        while (temp > 0)
        {
            for (int i = found; i < n; i++)
            {
                brr.push_back(arr[i]);
                temp--;
            }
            for (int i = n - 1; i >= found; i--)
            {
                arr.pop_back();
            }
            n = found;
            found = max_element(arr.begin(), arr.end()) - arr.begin();
        }
        print(brr);
    }
}