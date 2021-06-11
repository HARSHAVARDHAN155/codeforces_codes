#include <bits/stdc++.h>

#define print(arr)        \
    for (auto c : arr)    \
    {                     \
        cout << c << " "; \
    }                     \
    cout << endl;

using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;
    int crr[] = {1, 3, 20, 7};
    int a = 1, c = 3, t = 20, g = 7;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = s[i] - 64;
    }
    int count = INT_MAX;

    for (int i = 0; i < (n - 3); i++)
    {
        // string sub = s.substr(i, 4);
        // cout <<sub<< endl;
        int res = 0;
        int x=0;
        for (int j = i; j < i+4; j++)
        {
            int fow = abs(arr[j] - crr[x]);x++;
            int back = abs((26 - fow));

            int final = min(fow, back);
            res += final;
        }
        // cout << res << endl;
        if (res < count)
        {
            count = res;
        }
    }

    cout << count << endl;

    // print(arr);
}