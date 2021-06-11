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

int main()
{
    int t;
    in(t);
    while (t--)
    {
        long long int n;
        in(n);

        long long int count = 0;
        long long int j = 1;
        long long int m = 10;

        long long int i = 1;
        while (i <= n)
        {

            if (i / j == i % 10 && (i % j == 0))
            {
                count++;
                if (i > (m / 10) && i != (m - 1))
                {
                    i += (m / 10) - 1;
                }
            }

            if (i == m)
            {

                j = j + m;
                m = m * 10;
                // cout << "j : " << j << " " << m << endl;
            }
            i++;
        }
        out(count);
    }
}
