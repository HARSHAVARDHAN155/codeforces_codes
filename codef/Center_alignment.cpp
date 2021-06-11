/* HARSHA_20    */ // pending
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
int main()
{
    char arr[1001][1001];
    int brr[1001];
    int max = 0;

    string s;
    getline(cin, s);

    int len = s.size();

    int k = 0;
    int m = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == '\n')
        {
            k++;
            if(m>max)
            {
                max=m;
            }
            brr[k]=m;
            m = 0;
        }
        else
        {
            arr[k][m] = s[i];
            m++;
        }
    }

    for(int i=0;i<k;i++)
    {
        cout<<arr[k]<<endl;
    }
}
