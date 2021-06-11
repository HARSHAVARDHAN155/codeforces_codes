#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string bita;
        cin >> bita;
        int len = bita.size();

        cout << bita[0] << bita[1];
        for (int i = 3; i < len; i+=2)
        {
            cout<<bita[i];
        }
        cout<<"\n";
    }
}