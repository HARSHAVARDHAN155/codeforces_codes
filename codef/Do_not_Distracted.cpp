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
#define sort(arr) sort(arr.begin(), arr.end());

using namespace std;

void rvereseArray(long long int arr[], long long int start, long long int end)
{
    while (start < end)
    {
        long long int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    int t;
    in(t);
    while (t--)
    {
        int n;
        in(n);
        string s;
        in(s);
        int floor = 0;

        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] != s[i + 1])
            {
                string sub;
                sub = s.substr(i + 1, n - i);

                int found = sub.find(s[i]);
                if (found != -1)
                {
                    floor = -1;
                    out("NO");
                    break;
                }
            }
        }
        if (floor == 0)
        {
            out("YES");
        }
    }
}