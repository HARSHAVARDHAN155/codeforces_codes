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
    int K;
    in(K);
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

        int a = INT_MAX;
        for (int k = 1; k <= K && (i - k >= 0); k++)
        {
            int b = brr[i - k] + abs(arr[i] - arr[i - k]);

            if (b < a)
            {
                a = b;
            }
        }
        brr.push_back(a);
    }

    cout << brr[N - 1] << endl;
}
