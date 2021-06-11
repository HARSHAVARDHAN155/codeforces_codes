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
#define sort(arr) sort(arr.begin(), arr.end());

using namespace std;

int isPrime(int n)
{
    if (n <= 1)
        return 0;

    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

long long int sum_digits(long long int num)
{
    long long int sum = 0;
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
        long long int num = sum_digits(n);
        long long int gc = __gcd(n, num);

        if (n % 2 == 0 && num % 2 == 0)
        {
            out(n);
            continue;
        }

        while (1)
        {

            num = sum_digits(n);
            // out(num);
            gc = __gcd(n, num);
            // out(gc);
            if (gc > 1)
            {
                out(n);
                break;
            }
            n++;
        }
    }
}