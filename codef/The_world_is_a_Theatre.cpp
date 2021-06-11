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
// #define MOD 1e9 + 7;
#define reverse(temp) reverse(temp.begin(), temp.end());
typedef long long ll;
#define sort(arr) sort(arr.begin(), arr.end());
#define MOD 1000000007

using namespace std;

unsigned int fact(unsigned int n)
{
    return (n == 1 || n == 0) ? 1 : n * fact(n - 1);
}

int main()
{
    unsigned long long int n, m, t;
    // out(fact(30));

    cin >> n >> m >> t;

    ll fact[40][40];

    for (int i = 0; i < 40; i++)
    {
        for (int j = 0; j < 40; j++)
        {
            if (i == j)
            {
                fact[i][j] = 1;
            }
            else
            {
                fact[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < 40; i++)
    {
        fact[i][0]= 1;
        for (int j = 1; j < i; j++)
        {
            fact[i][j] = fact[i - 1][j - 1] + fact[i - 1][j];
        }
    }

    unsigned long long int temp1, temp2;
    unsigned long long int sum = 0;
    temp1 = t - 1;
    while (temp1 > n)
    {
        temp1--;
    }
    temp2 = t - temp1;

    while (temp2 <= m && temp1 >= 4)
    {

        ll c1 = fact[n][temp1];
        ll c2 = fact[m][temp2];

        sum+=(c1*c2);

        temp2++;
        temp1--;
    }
    out(sum);
   
}