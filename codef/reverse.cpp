#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cctype>

using namespace std;

int main()
{

    int t;
    cin >> t;
    for (int j{0}; j < t; j++)
    {
        string poly;
        cin >> poly;

        string rs;

        string copy;
        string my{'a'};
        copy = poly;
        int floor = poly.length();
        int test = -11;
        for (int i = 0; i < floor; i++)
        {
            if (poly[i] != 'a')
            {
                test = i;
                // cout << test << endl;
                break;
            }
        }
        // cout << rs << endl;
        if (test == -11)
        {
            cout << "NO" << endl;

            // for (int i{0}; i < poly.length(); i++)
            // {
            //     poly.insert(i, my);
            //     // cout << poly << endl;
            //     rs.assign(poly.rbegin(), poly.rend());

            //     if (poly != rs)
            //     {
            //         cout << "YES"
            //              << "\n"
            //              << poly << endl;
            //         floor = -1;
            //         break;
            //     }
            //     else
            //     {

            //         poly = copy;
            //     }
            // }
            // if (floor != -1)
            // {
            //     cout << "NO" << endl;
            // }
        }
        else
        {
            poly.insert(floor-test, my);
            cout << "YES"
                 << "\n"
                 << poly << endl;
        }
    }
    // cout << copy << endl;
}