#include <stdio.h>

int absdiff(int a, int b)
{
    if (a == b)
        return 0;        
    if (a > b)
        return (a - b);        
    return (b - a);
}

int min_diff_els(int a[], int b[], int size, int& idx1, int& idx2)
{
    int i = 0, j = 0;
    idx1 = 0;
    idx2 = 0;
    int mindiff;

    mindiff = absdiff(a[0], b[0]);
    
    // special case when there is no better solution,
    // since absdiff(a, b) can't be < 0
    if (0 == mindiff)
        return 0;
    
    ++i; ++j;
    while (i < size && j < size){
        int cv = absdiff(a[i], b[j]);
        if (cv < mindiff) {
            idx1 = i;
            idx2 = j;
            mindiff = cv;
        }
        
        if (a[i] < b[j])
            ++i;
        else
            ++j;
    }
    
    return mindiff;
}

int main()
{
    // 
    int a[] = {5, 9, 12, 15, 18, 25};
    int b[] = {1, 3, 6, 10, 17, 22};
    int size = sizeof(a)/sizeof(a[0]);
    
    int idx1, idx2, val;
    val = min_diff_els(a, b, size, idx1, idx2);
    
    printf("Min Abs Diff: %-3d Idx1: %-3d Idx2: %-3d\n",
            val, idx1, idx2);
    
    return 0;
}