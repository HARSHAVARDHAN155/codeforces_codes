#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int count = 0;
    cin >> n;
    string arr;
    cin >> arr;

    for (int i = 0; i < n; i += 2)
    {
        string sub;
        sub = arr.substr(i, 2);

        int found = sub.find('a');
        int find_b = sub.find('b');
        if (found == -1)
        {
            arr[i] = 'a';
            count++;
        }
        else if (find_b == -1)
        {
            arr[i] = 'b';
            count++;
        }
        // cout << sub << endl;
    }
    cout << count << endl;
    cout << arr << endl;
}