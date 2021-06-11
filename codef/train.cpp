#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define p cout
#define l endl

int main()
{
    string flags;
    int flen = flags.size();
    string rev;
    string s1;
    string sub;
    string sub1;
    string s2;
    int c2 = 0;

    cin >> flags >> s1 >> s2;
    int len = s1.size();

    rev.assign(flags.rbegin(), flags.rend());

    int count = 0;

    // int c2 = 0;

    int found = flags.find(s1);
    if (found != -1)
    {
        count++;
        // p << len << l;
        sub = flags.substr(len + found, flen - 1);
        // p << sub << l;
    }

    found = sub.find(s2);
    if (found != -1)
    {
        count++;
    }

    found = rev.find(s1);
    // p << found << l;
    if (found != -1)
    {
        c2++;
        sub1 = rev.substr(len + found, flen - 1);
        // p << sub1 << l;
    }
    found = sub1.find(s2);

    if (found != -1)
    {
        c2++;
    }

    // cout << count << " " << c2 << l;

    if (count == 2 and c2 == 2)
    {
        cout << "both" << endl;
    }
    else if (count == 2)
    {
        cout << "forward" << endl;
    }
    else if (c2 == 2)
    {
        p << "backward" << l;
    }
    else
    {
        p << "fantasy" << l;
    }

    // int found = flags.find(s1);
    // cout << found << endl;

    // found = flags.find(s1, found + 1);
    // cout << found;
    return 0;
}