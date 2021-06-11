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
#define MOD 1e9 + 7;
#define reverse(temp) reverse(temp.begin(), temp.end());
typedef long long ll;
#define sort(arr) sort(arr.begin(), arr.end());

using namespace std;
int main()
{
    int t;
    in(t);
    while (t--)
    {
        vector<int> arr, brr;
        for (int i = 0; i < 4; i++)
        {
            int val;
            cin >> val;
            arr.push_back(val);
        }
        brr = arr;
        int max1 = 0;
        int max2 = 0;
        int floor = 0;
        for (int i = 0; i < 4; i++)
        {

            if (brr[i] > max1)
            {
                floor = -1;
                max1 = brr[i];
            }
        }

        for (int i = 0; i < 4; i++)
        {

            if (brr[i] > max2 && brr[i]!=max1)
            {
                floor = -1;
                max2 = brr[i];
            }
        }





        int f1, f2;
        // cout << max1 << " "<< max2;

        if (arr[0] > arr[1])
        {
            f1 = arr[0];
        }
        else
        {
            f1 = arr[1];
        }

        if (arr[2] > arr[3])
        {
            f2 = arr[2];
        }
        else
        {
            f2 = arr[3];
        }
        // cout << f1 << " "<< f2 << endl;

        if ((f1 == max1 || f1 == max2) && (f2 == max1 || f2 == max2))
        {
            out("YES")
        }
        else
        {
            out("NO")
        }
    }
}
