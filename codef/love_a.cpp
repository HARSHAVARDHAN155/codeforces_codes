#include <bits/stdc++.h>

using namespace std;

int main()
{
    string arr;
    cin >> arr;

    int len = arr.size();
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == 'a')
        {
            count++;
        }
    }

    int max = (2 * count) - 1;

    if (len > max)
    {
        cout << max << endl;
    }
    else
    {
        cout << len << endl;
    }
    return 0;
}