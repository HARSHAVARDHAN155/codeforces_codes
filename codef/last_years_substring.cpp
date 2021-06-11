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
        string arr;
        cin >> arr;
        int len = arr.size();
        int found = arr.find("2020");
        // cout << found << endl;

        // string sub1 = arr.substr(0, 1) + arr.substr(n - 3, 3);

        if (arr[0] == '2' && arr[1] == '0' && arr[2] == '2' && arr[3] == '0')
        {
            cout << "YES" << endl;
            continue;
        }
        else if (arr[len-4] == '2' && arr[len-3] == '0' && arr[len - 2] == '2' && arr[len - 1] == '0')
        {
            cout << "YES" << endl;
            continue;
        }
        else if (arr[0] == '2' && arr[1] == '0' && arr[len - 2] == '2' && arr[len - 1] == '0')
        {
            cout << "YES" << endl;
            continue;
        }
        else if (arr[0] == '2' && arr[1] == '0' && arr[2] == '2' && arr[len - 1] == '0')
        {
            cout << "YES" << endl;
            continue;
        }
        else if (arr[0] == '2' && arr[len - 1] == '0' && arr[len - 3] == '0' && arr[len - 2] == '2')
        {
            cout << "YES" << endl;
            continue;
        }

        else
        {
            cout << "NO" << endl;
        }
    }
}