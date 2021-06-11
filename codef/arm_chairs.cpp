#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr, brr;
    // arr[0] = -1;
    // brr[0] = -1;
    int a = 0;
    int b = 0;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;

        if (val == 0)
        {
            brr.push_back(i);
            b++;
        }
        else
        {
            arr.push_back(i);
            a++;
        }
    }
    int count2 = 0;
    int x = b - 1;
    for (int i = a - 1; i >= 0; i--)
    {
        count2 += abs(arr[i] - brr[x]);
        x--;
    }

    int count3 = 0;
    for (int i = 0; i < a; i++)
    {
        count3 += abs(arr[i] - brr[i]);
    }
    int count = 0;

    // for (auto c : arr) // coment
    // {
    //     cout << c << " ";
    // }
    // cout << endl;

    // for (auto c : brr)
    // {
    //     cout << c << " ";
    // }
    // cout << endl;                                               // end
    // cout << "========================================" << endl; // coment
    // cout << "a: " << a << " b :" << b << endl;

    for (int i = 0; i < a; i++)
    {
        int low = 1;
        int high = b - 1;

        while (low <= high)
        {
            int mid = low + ((high - low) / 2);

            if (arr[i] < brr[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        int r1 = abs(arr[i] - brr[low]);
        int r2 = abs(arr[i] - brr[high]);
        if (r1 < r2)
        {
            count += r1;
            // cout << r1 << " " << arr[i] << " " << brr[low] << endl; // coment
            brr[low] = INT_MAX;
        }
        else
        {
            // cout << r2 << " " << arr[i] << " " << brr[high] << endl; // coment
            count += r2;
            brr[high] = INT_MAX;
        }
        sort(brr.begin(), brr.end());

        // for (auto c : arr) //comet
        // {
        //     cout << c << " ";
        // }
        // cout << endl;

        // for (auto c : brr)
        // {
        //     cout << c << " ";
        // }
        // cout << endl;                                               // coment
        // cout << "========================================" << endl; // coment
    }

    // cout << count2 << endl;
    // cout << count3 << endl;

    // cout << count << endl;

    cout << min(min(count, count2), count3) << endl;

    // cout << "========================================" << endl; // coment

    // for (auto c : arr) // coment
    // {
    //     cout << c << " ";
    // }
    // cout << endl;

    // for (auto c : brr)
    // {
    //     cout << c << " ";
    // }
    // cout << endl; // coment
}