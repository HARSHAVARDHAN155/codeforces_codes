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
#define in(x) cin >> x
#define sort(arr) sort(arr.begin(), arr.end());

using namespace std;
int main()
{
    int N;
    in(N);
    vector<int> arr;
    for (int i = 0; i < N; i++)
    {
        int val;
        in(val);
        arr.push_back(val);
    }

    vector<int> brr;
    brr.push_back(0);
    brr.push_back(abs(arr[1] - arr[0]));

    for (int i = 2; i < N; i++)
    {
        int a = brr[i - 1] + abs(arr[i] - arr[i - 1]);
        int b = brr[i - 2] + abs(arr[i] - arr[i - 2]);
        int res = min(a, b);
        brr.push_back(res);
    }

    cout << brr[N - 1] << endl;
}
