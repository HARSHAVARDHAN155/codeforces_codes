#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string arr;
    cin >> arr;

    int len = arr.size();
    long long int count = 0;
    long long int even_count = 0;

    long long int max = (len * (len + 1)) / 2;

    for (int i = 0; i < len; i++)
    {
        if (arr[i] == '1' || arr[i] == '3' || arr[i] == '5' || arr[i] == '7' || arr[i] == '9')
        {
            count += i + 1;
        }
        else
        {
            even_count += i + 1;
        }
    }

    if (max > count)
    {
        cout << (max - count) << endl;
    }
    else
    {
        cout << even_count << endl;
    }
}