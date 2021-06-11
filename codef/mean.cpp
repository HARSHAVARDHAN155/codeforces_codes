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
        vector<long long int> arr, brr;
        for (int i = 0; i < 2*n; i++)
        {
            ll val;
            cin >> val;

            arr.push_back(val);
        }

        brr = arr;
        sort(arr);
        int m = brr.size();

        for(int i=0;i<n-1;i++)
        {
            cout << arr[i]<< " " << arr[n+i] <<" ";
        }
        cout << arr[n-1] << " "<< arr[2*n-1]<< endl;
        // print(arr);
    }
}
