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
    long int t;
    in(t);
    while (t--)
    {

        long long int A;
        long long int B;
        cin >> A >> B;
        if(B==1)
        {
            out("NO");
            continue;
        }

        long long int pro = A * B;

        long long int Z = 2 * pro;

        long long int qut = Z / A;
        long long int X = A * (qut - 1);
        long long int Y = A;

        out("YES");

        cout << X << " " << Y << " " << Z << endl;
    }
}