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
    int t;
    in(t);
    while (t--)
    {
        int n;
        in(n);
        vector <int> arr;
        int sum =0;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >>val;
            sum+=val;
            arr.push_back(val);
        }
        int avg = sum/n;
        int count =INT_MAX;

        for(auto c:arr)
        {
            if(c < count)
            {
               count  = c;
            }
        }
        int ans =0;

        for(auto c : arr)
        {
            if(c > count)
            {
                ans++;
            }
        }
        out(ans);
        
    }
}