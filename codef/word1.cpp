#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    string word;
    int upper_count = 0;
    int lower_count = 0;
    cin >> word;
    int len = word.length();

    for (int i{0}; i < len; i++)
    {
        // cout << word[i]<<endl;
        if (isupper(word[i]))
        {
            upper_count++;
        }
        else
        {
            lower_count++;
        }
    }
    // cout << upper_count << " " << lower_count << endl;
    if (upper_count > lower_count)
    {
        for (size_t i{0}; i < len; i++)
        {
            putchar(toupper(word[i]));
        }
    }
    else
    {
        for (size_t i{0}; i < len; i++)
        {
            putchar(tolower(word[i]));
        }
    }
}