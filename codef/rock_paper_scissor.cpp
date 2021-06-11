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

    vector<string> arr, brr;

    brr.push_back("F");
    brr.push_back("M");
    brr.push_back("S");
    string temp1 = "harsha";
    int rc = 0, pc = 0, sc = 0;
    for (int i = 0; i < 3; i++)
    {
        string s;

        int floor = 0;
        cin >> s;
        if (s == "rock")
        {
            rc++;
            if (rc == 2)
            {
                temp1 = s;
            }
        }
        else if (s == "paper")
        {
            pc++;
            if (pc == 2)
            {
                temp1 = s;
            }
        }
        else
        {
            sc++;
            if (sc == 2)
            {
                temp1 = s;
            }
        }
        arr.push_back(s);
    }

    if (temp1 != "harsha")
    {
        if (temp1 == "rock" && pc == 1)
        {
            for (int i = 0; i < 3; i++)
            {
                if (arr[i] == "paper")
                {
                    cout << brr[i] << endl;
                    exit(0);
                }
            }
        }
        else if (temp1 == "paper" && sc == 1)
        {
            for (int i = 0; i < 3; i++)
            {
                if (arr[i] == "scissors")
                {
                    cout << brr[i] << endl;
                    exit(0);
                }
            }
        }
        else if (temp1 == "scissors" && rc == 1)
        {
            for (int i = 0; i < 3; i++)
            {
                if (arr[i] == "rock")
                {
                    cout << brr[i] << endl;
                    exit(0);
                }
            }
        }
        else
        {
            out("?");
            exit(0);
        }
    }
    else
    {
        out("?");
    }
}