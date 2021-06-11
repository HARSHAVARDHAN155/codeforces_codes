#include <iostream>
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
        int brr[n];

        for (int i = 0; i < n; i++)
        {
            brr[i] = 0;
        }

        int handle = 0;

        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            arr.push_back(val);
        }

        int temp = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] != 0 && temp < arr[i])
            {
                brr[i] = 1;
                temp = arr[i];
                temp--;
            }
            else if (temp != 0)
            {
                brr[i] = 1;
                temp--;
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << brr[i] << " ";
        }
        cout << endl;
    }
}