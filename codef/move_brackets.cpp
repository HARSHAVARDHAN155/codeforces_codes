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
        string arr;

        cin >> arr;
        // cout << arr << endl;
        int open_count = 0;
        int closed_count = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == ')' && open_count == 0)
            {
                closed_count++;
            }
            else if(arr[i]==')' && open_count !=0)
            {
                open_count--;
            }
            else if(arr[i]=='(')
            {
                open_count++;
            }
        }
        cout << closed_count << endl;
    }
}