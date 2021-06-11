#include <iostream>
#include <bits/stdc++.h>
#include <cctype>

using namespace std;

int main()
{
    string newlogin;
    cin >> newlogin;
    string cpy;
    cpy = newlogin;
    int n;
    cin >> n;
    vector<string> login;
    for (int i{0}; i < n; i++)
    {
        string temp;
        cin >> temp;
        login.push_back(temp);
    }

    int len = login.size();
    // cout << "printing"<<"\n";
    for (size_t i = 0; i < len; i++)
    {
        if (newlogin == login[i])
        {
            cout << "NO" << endl;
            exit(0);
        }
    }

    for (size_t i = 0; i < login.size(); i++)
    {
        int str_size = login[i].size();

        for (int k = 0; k < login[i].size(); k++)
        {
            if (isupper(login[i][k]))
            {
                login[i][k] = tolower(login[i][k]);
            }
        }
        if (newlogin == login[i])
        {
            cout << "NO" << endl;
            exit(0);
        }
        for (int m = 0; m < login[i].size(); m++)
        {
            if (islower(login[i][m]))
            {
                login[i][m] = toupper(login[i][m]);
            }
        }
        if (newlogin == login[i])
        {
            cout << "NO" << endl;
            exit(0);
        }

        for (int j = 0; j < login[i].size(); j++)
        {
            if (login[i][j] == 'O' || login[i][j] == 'o')
            {
                login[i][j] = '0';
            }
        }

        for (int y = 0; y < newlogin.size(); y++)
        {
            if (newlogin[y] == 'O' || newlogin[y] == 'o')
            {
                newlogin[y] = '0';
            }
        }

        if (newlogin == login[i])
        {
            cout << "NO" << endl;
            exit(0);
        }
        newlogin = cpy;

        for (int l = 0; l < login[i].size(); l++)
        {
            if (login[i][l] == '0')
            {
                login[i][l] = 'O';
            }
        }

        if (newlogin == login[i])
        {
            cout << "NO" << endl;
            exit(0);
        }

        for (int z = 0; z < login[i].size(); z++)
        {
            if (login[i][z] == '0')
            {
                login[i][z] = 'o';
            }
        }

        if (newlogin == login[i])
        {
            cout << "NO" << endl;
            exit(0);
        }

        for (int n = 0; n < login[i].size(); n++)
        {
            if (login[i][n] == '0')
            {
                login[i][n] = 'O';
            }
        }

        if (newlogin == login[i])
        {
            cout << "NO" << endl;
            exit(0);
        }

        for (int x = 0; x < login[i].size(); x++)
        {
            if (login[i][x] == 'i' || login[i][x] == 'I' || login[i][x] == 'l' || login[i][x] == 'L')
            {
                login[i][x] = '1';
            }
        }
        for (int y = 0; y < newlogin.size(); y++)
        {
            if (newlogin[y] == 'i' || newlogin[y] == 'I' || newlogin[y] == 'l' || newlogin[y] == 'L')
            {
                newlogin[y] = '1';
            }
        }

        if (newlogin == login[i])
        {
            cout << "NO" << endl;
            exit(0);
        }
    }

    cout << "YES" << endl;
}