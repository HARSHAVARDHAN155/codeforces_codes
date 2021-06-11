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
    string s;
    cin >> s;
    int arr[26] = {0};

    int len = s.size();
    for (int i = 0; i < len; i++)
    {
        arr[s[i] - 97]++;
    }
    int fixed = arr[0];
    int floor = 0;

    for (int i = 0; i < 26; i++)
    {
        if (arr[i] % t != 0 && arr[i] > 0)
        {
            floor = -1;
            out(-1);
            break;
        }
    }
    if (floor == 0)
    {
        string res;
        for (int i = 0; i < 26; i++)
        {
            if (arr[i] != 0)
            {
                char xx = i + 97;
                for (int i = 0; i < arr[i] / t; i+=t)
                {
                    res += xx;
                }
            }
        }
        string result = res;
        for (int i = 1; i < t; i++)
        {
            result += res;
        }
        out(result);
    }
}