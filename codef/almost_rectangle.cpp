#include <iostream>
#include <istream>
#include <vector>
#include <cstring>
#include <ostream>
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

        vector<vector<char>> arr;

        vector<pair<int, int>> cordinates;

        for (int i = 0; i < n; i++)
        {
            vector<char> v2;
            for (int j = 0; j < n; j++)
            {
                char val;
                cin >> val;
                if (val == '*')
                {
                    cordinates.push_back(make_pair(i, j));
                }
                v2.push_back(val);
            }
            arr.push_back(v2);
        }
        int x = cordinates[0].first;
        int y = cordinates[0].second;

        int x1 = cordinates[1].first;
        int y1 = cordinates[1].second;

        arr[x][y1] = '*';
        arr[x1][y] = '*';

        if (x == x1 && x == y1)
        {
            arr[y][y] = '*';
            arr[y][x] = '*';
        }
        else if (x == x1 && x1 ==y)
        {
            arr[y1][y1] = '*';
            arr[y1][x] = '*';
        }
        else if (x == x1)
        {
            arr[y][y] = '*';
            arr[y][y1] = '*';
        }

        else if (y == y1 && y == x1)
        {
            arr[x][x] = '*';
            arr[x1][x] = '*';
        }
        else if (y == y1 && x == y1)
        {
            arr[x1][x1] = '*';
            arr[x][x1] = '*';
        }
        else if (y == y1)
        {
            arr[x][x] = '*';
            arr[x1][x] = '*';
        }

        // cout << "================================" << endl;

        // cout << x << " " << y << endl;
        // cout << x1 << " " << y1 << endl;

        // cout << "================================" << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j];
            }
            cout << endl;
        }
        // for (int j = 0; j < cordinates.size(); j++)
        // {
        //     // cout << cordinates.size() << endl;
        //     cout << cordinates[j].first << " "
        //          << cordinates[j].second << endl;
        // }
        // cout << endl;
    }
}