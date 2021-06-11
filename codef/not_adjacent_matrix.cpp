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

int main()
{
    int t;
    in(t);
    while (t--)
    {
        int n;
        in(n);

        int arr[n * n];

        for (int i = 0; i < (n * n); i++)
        {
            arr[i] = i + 1;
        }

        int mat[n][n];
        int x = 0;

        int z = 0;
        int c = 0;
        for (size_t j = 0; j < n; j++) // placing in the diagonal 1st;
        {
            mat[z][j] = arr[c];
            z++;
            c++;
        }

        int st = 0;
        int zt = 0;
        int k = 1;
        for (int l = 0; l < (n - 1) / 2; l++)
        {

            int floor = 0;
            for (int i = 0; i < 2; i++)
            {
                int z1 = 1 + zt;
                int start = 0 + st;
                for (int j = 0; j < (n - k); j++)
                {
                    if (floor == 0)
                    {
                        mat[start][z1] = arr[c];
                        start++;
                        c++;
                        z1++;
                    }
                    if (floor == -1)
                    {
                        mat[z1][start] = arr[c];
                        start++;
                        c++;
                        z1++;
                    }
                }
                floor = -1;
            }
            k++;
            st++;
            zt++;
        }
        mat[0][n - 1] = (n * n) - 1;
        mat[n - 1][0] = (n * n);

        for (size_t i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << (mat[i][j]) << " ";
            }
            cout << endl;

        }
    }
}