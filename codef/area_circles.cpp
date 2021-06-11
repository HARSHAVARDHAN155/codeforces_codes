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
    const double pi = 3.14159265358979323846;

    int n;
    vector<float> arr;
    in(n);

    for (int i = 0; i < n; i++)
    {
        float val;
        cin >> val;
        arr.push_back(val);
    }

    make_heap(arr.begin(), arr.end());
    float result = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            float r = arr.front();
            pop_heap(arr.begin(), arr.end());
            arr.pop_back();
            result += pi * r * r;
        }
        else
        {
            float r = arr.front();
            pop_heap(arr.begin(), arr.end());
            arr.pop_back();
            result -= pi * r * r;
        }
    }
    out(result);
}