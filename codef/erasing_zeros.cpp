#include <iostream>
#include <cstring>
#include <cctype>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        char arr[101];
        cin >> arr;
        string brr = arr;

        int len = strlen(arr);

        int floor{0}, count{0};

        string sub;
        for (int i = 0; i < len; i++)
        {
            if (arr[i] == '0' && floor == 0)
            {
                continue;
            }
            if (arr[i] == '1')
            {
                if (arr[i + 1] != '1')
                {
                    floor++;
                }
            }

            if (arr[i] == '0')
            {
                sub = brr.substr(i, len - 1);
                // cout << sub << endl;
                int found = sub.find("1");
                // cout << found << endl;
                if (found != -1)
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
}