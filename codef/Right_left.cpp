#include <bits/stdc++.h>

using namespace std;

int main()
{
    string arr;
    cin >> arr;

    int len = arr.size();
    // cout << len << endl;
    char brr[len];
    int i = 0;
    int j = 1;
    if (len % 2 != 0)
    {
        brr[i] = arr[0];
        i++;

        int x = 0;
        while (x < len / 2)
        {
            brr[i] = arr[len - j];
            // cout << arr[len - j] << " " << brr[i] << endl;
            i++;
            brr[i] = arr[j];
            i++;
            j++;
            x++;
        }
    }
    else
    {
        int x = 0;
        while (x < len / 2)
        {
            brr[i] = arr[len - j];
            // cout << arr[len - j] << " " << brr[i] << endl;
            i++;
            brr[i] = arr[j - 1];
            i++;
            j++;
            x++;
        }
    }
    // cout << brr<< endl;

    for (int z = len - 1; z >= 0; z--)
    {
        cout << brr[z];
    }
    cout << endl;
}