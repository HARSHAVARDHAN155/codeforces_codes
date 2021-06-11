#include <iostream>
#include <cstring>
#include<cctype>

using namespace std;

int main()
{
    string sent;

    getline(cin, sent);
    // cin>> sent;
    // string upper = toupper(sent);
    int len = sent.length();
    cout << len << endl;
    for (size_t i{0}; i < len; i++)
    {
        putchar(toupper(sent[i]));
    }
    cout << sent << endl;
}
