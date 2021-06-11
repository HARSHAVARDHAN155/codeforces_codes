#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr;
        vector<int> brr;

        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            arr.push_back(val);
        }

        brr = arr;

        sort(arr.begin(), arr.end());

        if (arr == brr)
        {
            cout << "0" << endl;
        }
        else if (brr[0] == 1 || brr[n - 1] == n)
        {
            cout << "1" << endl;
        }
        else if (brr[0] == n && brr[n - 1] == 1)
        {
            cout << "3" << endl;
        }
        else if (brr[0] != 1 && brr[n - 1] != n)
        {
            cout << "2" << endl;
        }
    }
}