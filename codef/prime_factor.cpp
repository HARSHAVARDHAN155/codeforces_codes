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

bool check_prime(ll n)
{
    for (int i = 2; i <=sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ll n;
    in(n);

    if(check_prime(n))
    {
        out(n);
    }
    else{
        for(ll i= n/2;i>1;i--)
        {
            if(check_prime(i) && n%i ==0 )
            {
                out(i);
                break;
            }
        }
    }
}