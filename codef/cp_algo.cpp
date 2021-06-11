#include <bits/stdc++.h>

using namespace std;

void getMinDiff(int a[], int b[], int n, int m)
{
    int mindiff = INT_MAX;
    // int len1 = a.size();
    /*
		 * pos1, pos2 : positions of the numbers forming the min-pair
		 * ...one from each array
		 */
    int pos1 = 0, pos2 = 0, i = 0, j = 0;

    while (i < n && j < m)
    {
        if (mindiff > abs(a[i] - b[j]))
        {
            mindiff = abs(a[i] - b[j]);
            pos1 = i;
            pos2 = j;
        }

        if (a[i] <= b[j])
            i++;
        else
            j++;
    }
    cout << pos1 << " " << pos2 << " " << mindiff << " " << endl;

    // return new int[]{pos1, pos2, mindiff};
}

int main()
{
    int arr[] = {1, 2, 3};
    int brr[] = {4, 5, 6};
    int n = 3;
    int m = 3;
}
