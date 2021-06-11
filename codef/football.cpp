/* HARSHA_20    */
///////////////////////////////////////
#include <bits/stdc++.h>

#define print(arr)        \
    for (auto c : arr)    \
    {                     \
        cout << c << " "; \
    }                     \
    cout << endl;

#define out(x) cout << x << endl;
#define len(n) n.length();

#define in(x) cin >> x;
typedef long long ll;
#define sort(arr) sort(arr.begin(), arr.end());

using namespace std;
int main()
{
    int t;
    in(t);
    vector<string> arr;
    string team1, team2;
    int count1 = 0, count2 = 0;
    int floor = 0;
    int f=0;

    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        if (f == 0)
        {
            f=-1;
            team1 = s;
        }
        arr.push_back(s);
        if (s != team1 && floor == 0)
        {
            floor = -1;
            team2 = s;
        }
    }

    for (auto s : arr)
    {
        if (s == team1)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }

    if (count2 > count1)
    {
        out(team2);
    }
    else
    {
        out(team1);
    }
}
