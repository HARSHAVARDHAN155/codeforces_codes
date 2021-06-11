#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        vector<int> arr;
        int n, x;
        cin >> n >> x;
        int even_count{0}, odd_count{0};
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            if (val % 2 == 0)
            {
                even_count++;
            }
            else
            {
                odd_count++;
            }
            // arr.push_back(val);
        }

        if (odd_count == 0)
        {
            cout << "NO" << endl;
        }
        else if (x == n)
        {
            if (odd_count % 2 == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }

        else
        {
            if (odd_count == n && x % 2 != 0)
            {
                cout << "YES" << endl;
            }
            // else if (odd_count > 0)
            // {
            //     cout << "YES" << endl;
            // }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}