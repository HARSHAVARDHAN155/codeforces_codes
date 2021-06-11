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
#define len(n) n.length()
#define llint long long int

#define in(x) cin >> x;
#define sort(arr) sort(arr.begin(), arr.end());

using namespace std;

string cov_to_string(int n)
{
    ostringstream str1;

    str1 << n;
    string num = str1.str();
    return num;
}
int cov_to_int(string n)
{
    int num = stoi(n);
    return num;
}

int pow_ten(int num)
{
    while (num >= 10 && num % 10 == 0)
    {
        num /= 10;
    }
    if (num == 1)
    {
        return 1;
    }
    return 0;
}

llint sum_digits(llint num)
{
    llint sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}

int main()
{
    int t;
    in(t);
    while (t--)
    {
        long long int n;
        in(n);
        llint temp = n;
        llint count = 0;

        if (n % 2050 == 0)
        {
            llint sum = sum_digits(n / 2050);
            out(sum);
        }
        else
        {
            out(-1)
        }
    }
}