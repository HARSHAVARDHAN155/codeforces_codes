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
#define reverse(temp) reverse(temp.begin(), temp.end());
typedef long long ll;
#define sort(arr) sort(arr.begin(), arr.end());

using namespace std;
int main()
{
    ll n;
    cin >> n;
    string m, k;
    cin >> m >> k;
    int m_len = len(m); //nikephorous
    int k_len = len(k); // polycarpus
    int min, max, rem;
    string min_string, max_string;

    if (m_len != k_len)
    {

        if (m_len > k_len)
        {
            min = k_len;
            min_string = k;
            max_string = m;
            max = m_len;
            rem = m_len % min;
        }
        else
        {
            min = m_len;
            min_string = m;
            max_string = k;
            max = k_len;
            rem = k_len % min;
        }
    }
    if (m_len == k_len)
    {
        ll nik[m_len], poly[m_len];

        for (ll i = 0; i < m_len; i++)
        {
            nik[i] = 0;
            poly[i] = 0;
        }

        for (ll i = 0; i < m_len; i++)
        {
            if (i > 0)
            {
                nik[i] = nik[i - 1];
                poly[i] = poly[i - 1];
            }
            if (m[i] == k[i])
                continue;

            if (m[i] == 'R')
            {
                if (k[i] == 'S')
                {

                    nik[i]++;
                }
                else if (k[i] == 'P')
                {

                    poly[i]++;
                }
            }
            else if (m[i] == 'P')
            {
                if (k[i] == 'R')
                {

                    nik[i]++;
                }
                else if (k[i] == 'S')
                {

                    poly[i]++;
                }
            }
            else if (m[i] == 'S')
            {
                if (k[i] == 'P')
                {

                    nik[i]++;
                }
                else if (k[i] == 'R')
                {

                    poly[i]++;
                }
            }
        }

        ll qt = n / m_len;
        ll r = n % m_len;
        ll poly_ans = qt * (nik[m_len - 1]);
        ll nik_ans = qt * (poly[m_len - 1]);
        if (r == 0)
        {
            cout << nik_ans << " " << poly_ans << endl;
        }
        else
        {
            cout << nik_ans + poly[r - 1] << " " << poly_ans + nik[r - 1] << endl;
        }
        exit(0);
    }

    vector<string> patterns;
    int num = min;

    if (rem == 0)
    {
        min = 1;
    }
    for (int i = 0; i < min; i++)
    {
        int j = i;
        string pat;
        for (int k = 0; k < max; k++)
        {
            char x = min_string[j];
            pat += x;
            j++;
            if (j > (num - 1))
            {
                j = 0;
            }
        }
        patterns.push_back(pat);
    }
    print(patterns);
    ll num_patter = patterns.size(); // num of patterns
    ll nik[num_patter][max], poly[num_patter][max];

    for (ll x = 0; x < num_patter; x++)
    {
        m = patterns[x];
        k = max_string;

        for (ll i = 0; i < num_patter; i++)
        {
            for (ll j = 0; j < max; j++)
            {
                nik[i][j] = 0;
            }
            for (ll j = 0; j < max; j++)
            {
                poly[i][j] = 0;
            }
        }

        for (ll i = 0; i < max; i++)
        {
            if (m[i] == k[i])
                continue;

            if (i > 0)
            {
                nik[x][i] = nik[x][i - 1];
                poly[x][i] = poly[x][i - 1];
            }
            if (m[i] == 'R')
            {
                if (k[i] == 'S')
                {

                    nik[x][i]++;
                }
                else if (k[i] == 'P')
                {

                    poly[x][i]++;
                }
            }
            if (m[i] == 'P')
            {
                if (k[i] == 'R')
                {

                    nik[x][i]++;
                }
                else if (k[i] == 'S')
                {

                    poly[x][i]++;
                }
            }
            if (m[i] == 'S')
            {
                if (k[i] == 'P')
                {

                    nik[x][i]++;
                }
                else if (k[i] == 'R')
                {

                    poly[x][i]++;
                }
            }
        }
    }

    ll total1 = 0;
    ll total2 = 0;
    for (int i = 0; i < num_patter; i++)
    {
        total1 += nik[i][max - 1];
        total2 += poly[i][max - 1];
    }

    ll rr = n / max;
    ll ni = 0;
    ll po = 0;
    if (rr > num_patter)
    {
        ni += (rr / num_patter) * (total2) + 
    }
}
