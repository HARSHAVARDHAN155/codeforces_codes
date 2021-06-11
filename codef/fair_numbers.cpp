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

int is_divisible(unsigned long long int n)
{
   unsigned long long int temp = n;
    while (n > 0)
    {
        unsigned long long int rem = n % 10;
        if (rem != 0 && temp % rem != 0)
        {
            return 0;
            break;
        }
        n /= 10;
    }
    return 1;
}

using namespace std;
int main()
{
    ll t;
    in(t);
    while (t--)
    {
        unsigned long long int n;
        in(n);
        int i=0;

        while(1)
        {
            int ans = is_divisible(n+i);
            if(ans==1)
            {
                out(n+i);
                break;
            }
            i++;
        }

       
    }
}
