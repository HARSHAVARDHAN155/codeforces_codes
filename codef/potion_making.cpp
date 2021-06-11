#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int k;
        cin >> k;

        int w = 100 - k;
        int n = __gcd(w, k);

        if (n > 1)
        {
            cout << (w / n) + (k / n) << endl;
        }
        else
        {
            cout << "100" << endl;
        }

        // int ee = (100 - k) / k; // ee =(w/e)
        // cout << ee << endl;

        // int e = 100 / (ee + 1);
        // cout << e << endl;

        // int w = 100 - e;
        // cout << w << endl;

        // cout << (100/e) << endl;
    }
}