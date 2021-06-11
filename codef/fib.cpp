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
    cin >> n;
    vector<long long int> arr;
    arr.push_back(0);
    arr.push_back(1);

    for (int i = 2; i <= n; i++)
    {
        unsigned long long int a = arr[i - 1] + arr[i - 2];
        arr.push_back(a);
    }
    out(arr[n]);
    unsigned long long int sum =0;
    for (int i = 0; arr[i] < 4000000; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sum += arr[i];
        }
    }
    out(sum);
}
