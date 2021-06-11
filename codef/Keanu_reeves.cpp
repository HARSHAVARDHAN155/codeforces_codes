#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string arr;
    cin >> arr;
    int zero_count = 0;
    int one_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == '0')
        {
            zero_count++;
        }
        else
        {
            one_count++;
        }
    }

    if ((zero_count != one_count))
    {
        cout << "1" << endl;
        cout << arr << endl;
    }
    else
    {
        string sub;
        sub = arr.substr(0, n - 1);
        cout << "2" << endl;
        cout << sub << " " << arr[n - 1] << endl;
    }
}