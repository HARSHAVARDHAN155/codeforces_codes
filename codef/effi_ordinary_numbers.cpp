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

string cov_to_string(int n)
{
    ostringstream str1;

    str1 << n;
    string num = str1.str();
    return num;
}
int cov_to_int(string n)
{
   int num = stoi(n);
    return num;
}

/* =======================================================================================================*/

int main()
{
    int t;
    in(t);

    while (t--)
    {
        long long int n;
        in(n);

        long long int count = 0;

        // ostringstream str1;

        // str1 << n;
        // string num = str1.str();
        string num = cov_to_string(n);

        long long int length = num.size();

        int equality = 0;

        for (int i = 0; i < length - 1; i++)
        {
            if (num[i] != num[i + 1])
            {
                equality = -1;
                break;
            }
        }

        string itl = num.substr(0, 1);
        string req = itl;
        int first = stoi(itl);
        for (int i = 0; i < length - 1; i++)
        {
            req = req + itl;
        }

        int required = cov_to_int(req);

        if (n >= required)
        {
            count = (9 * (length - 1)) + first;
        }
        else
        {
            count = (9 * (length - 1)) + (first - 1);
        }
        out(count);
    }
}