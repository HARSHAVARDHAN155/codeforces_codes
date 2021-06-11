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
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            arr.push_back(val);
        }
        int floor = 0;

        for (int i = 0; i < n - 2; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                floor = -1;
                break;
            }
        }
        // cout << floor <<endl;
        if (floor == -1 && arr[n - 1] == n)
        {
            cout << "1" << endl;
            continue;
        }
        if (floor == -1 && arr[0] == 1)
        {
            cout << "1" << endl;
            continue;
        }
        if (floor == -1 && arr[n - 1] == 1)
        {
            cout << "3" << endl;
            continue;
        }
        if (floor == 0 && arr[n - 1] == 1)
        {
            cout << "2" << endl;
            continue;
        }
        if (floor == -1 && arr[n - 1] != n)
        {
            cout << "2" << endl;
            continue;
        }
        if (floor == 0 && arr[n - 1] != n)
        {
            cout << "1" << endl;
            continue;
        }
        if (floor == 0 && arr[n - 1] == n)
        {
            cout << "0" << endl;
            continue;
        }
    }
}