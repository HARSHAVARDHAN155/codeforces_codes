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
        int n;
        in(n);


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
        int n;
        in(n);
        string s;
        in(s);

        string temp = s;

        reverse(temp.begin(), temp.end());

        int one = 0;
        int zero = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                one++;
            }
            else
            {
                zero++;
            }
        }
        int count = 0;
        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] != s[n - i - 1])
            {
                count++; // differnet
            }
        }
        int poly_zero = zero - count; // a polyndrome // zero count

        if (temp == s)
        {

            if (zero % 2 == 0)
            {
                out("BOB")
            }
            else if (zero == 1)
            {
                out("BOB");
            }
            else
            {

                out("ALICE");
            }
        }
        else
        {
            if (count == 1)
            {
                if (poly_zero == 1)
                {
                    out("DRAW")
                }
                else
                {
                    out("ALICE")
                }
            }
            else
            {
                out("ALICE")
            }
        }
    }
}