#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b, c;

        cin >> a >> b >> c;

        int len = a.size();
        int count = 0;

        for (int i = 0; i < len; i++)
        {
            if (a[i] == c[i] || b[i] == c[i])
            {
                count++;
            }
            else
            {
                cout << "NO" << endl;
                break;
            }
        }
        if (count == len)
        {
            cout << "YES" << endl;
        }
    }
}