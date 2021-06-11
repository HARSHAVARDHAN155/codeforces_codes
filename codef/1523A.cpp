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
#define reverse(temp) reverse(temp.begin(), temp.end());
typedef long long ll;
#define sort(arr) sort(arr.begin(), arr.end());

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        string arr;
        cin >> arr;
        string temp = arr;

        ll run;
        if(m >= n)
        {
            run =n;
        }
        else{
            run = m;
        }

        for (int j = 0; j < run; j++)
        {
        
            temp = arr;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] == '0')
                {
                    if (i - 1 >= 0 && temp[i - 1] == '1')
                    {
                        if (i + 1 < n)
                        {
                            if (temp[i + 1] != '1')
                            {
                                arr[i] = '1';
                            }
                        }
                        else
                        {
                            arr[i] = '1';
                        }
                    }
                    if (i + 1 < n && temp[i + 1] == '1')
                    {
                        if (i - 1 >= 0)
                        {
                            if (temp[i - 1] != '1')
                            {
                                arr[i] = '1';
                            }
                        }
                        else
                        {
                            arr[i] = '1';
                        }
                    }
                }
            }
        }
        out(arr);
    }
}