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
#define reverse(x) reverse(x.begin(), x.end());

#define in(x) cin >> x;
typedef long long ll;
#define sort(arr) sort(arr.begin(), arr.end());

using namespace std;
int main()
{
    int t;
    in(t);
    while (t--)
    {
        ll a, b;
        cin >> a>>b;
        int arr[32], brr[32], crr[32];
        ll temp1, temp2;
        temp1 = a;
        temp2 = b;
        for(int i=0;i<32;i++)
        {
            arr[i]=0;
            brr[i]=0;
            crr[i]=0;
        }
        int i = 31;
        while (a > 0 || b > 0)
        {
            arr[i] = a % 2;
            brr[i] = b % 2;
            a /= 2;
            b /= 2;
            i--;
        }
        ll sum =0;
        for (int i = 0; i < 32; i++)
        {
            if (arr[i] == 1 && brr[i] == 1)
            {
                crr[i] = 1;
                sum+=pow(2,(31-i));
            }
            else
            {
                crr[i] = 0;
            }
        }
        cout<<((temp1^sum)+(temp2^sum))<< endl;

    }
}