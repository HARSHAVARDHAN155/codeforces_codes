#include <iostream>
#include <cstring>
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long int  n;
    cin >> n;
    double hi = n;
    string w1;
    string w2;
    cin >> w1;
    cin >> w2;
    long long int  gk = w1.length() * w2.length();
    if (gk > n)
    {
        string w3 = w1;
        string w4 = w2;
        double d = w1.length();
        double q = hi / d;
        double rr = w2.length();
        double ss = hi / rr;
        for (long long int  i = 0; i < q - 1; i++)
        {
            w1 = w1 + w3;
        }
        for (long long int  i = 0; i < ss - 1; i++)
        {
            w2 = w2 + w4;
        }
        string w10 = w1.substr(0, n);
        string w11 = w2.substr(0, n);
 
        long long int  pinch1 = 0;
        long long int  pinch2 = 0;
        for (long long int  i = 0; i < n; i++)
        {
            if (w10[i] == w11[i])
            {
                continue;
            }
            if (w10[i] == 'R' && w11[i] == 'S')
            {
                pinch2++;
            }
            else if (w10[i] == 'S' && w11[i] == 'R')
            {
                pinch1++;
            }
            else if (w10[i] == 'S' && w11[i] == 'P')
            {
                pinch2++;
            }
            else if (w10[i] == 'P' && w11[i] == 'S')
            {
                pinch1++;
            }
            else if (w10[i] == 'R' && w11[i] == 'P')
            {
                pinch1++;
            }
            else if (w10[i] == 'P' && w11[i] == 'R')
            {
                pinch2++;
            }
        }
        cout << pinch1 << " " << pinch2 << endl;
    }
    else
    {
        string w3 = w1;
        string w4 = w2;
        long long int  jkkl = w1.length() * w2.length();
 
        double bn = w1.length();
        double bn2 = w2.length();
        double ls = jkkl / bn;
        double ls2 = jkkl / bn2;
        for (long long int  i = 1; i < ls; i++)
        {
            w1 = w1 + w3;
        }
        //cout<<w1<<endl;
        for (long long int  i = 1; i < ls2; i++)
        {
            w2 = w2 + w4;
        }
        //cout<<w2<<endl;
        string w10 = w1.substr(0, jkkl);
        string w11 = w2.substr(0, jkkl);
        //cout<<w10<<endl;
        //cout<<w11<<endl;
        long long int  pinch1 = 0;
        long long int  pinch2 = 0;
        for (long long int  i = 0; i < jkkl; i++)
        {
            if (w10[i] == w11[i])
            {
                continue;
            }
            if (w10[i] == 'R' && w11[i] == 'S')
            {
                pinch2++;
            }
            else if (w10[i] == 'S' && w11[i] == 'R')
            {
                pinch1++;
            }
            else if (w10[i] == 'S' && w11[i] == 'P')
            {
                pinch2++;
            }
            else if (w10[i] == 'P' && w11[i] == 'S')
            {
                pinch1++;
            }
            else if (w10[i] == 'R' && w11[i] == 'P')
            {
                pinch1++;
            }
            else if (w10[i] == 'P' && w11[i] == 'R')
            {
                pinch2++;
            }
        }
        long long int  hame = n / jkkl;
        pinch1 = pinch1 * hame;
        pinch2 = pinch2 * hame;
        if (hame * jkkl == n)
        {
            //cout<<"hh"<<endl;
            cout << pinch1 << " " << pinch2 << endl;
        }
        else
        {
            long long int  mm = hame * jkkl;
            long long int  dif = abs(mm - n);
            for (long long int  i = 0; i < dif; i++)
            {
                if (w10[i] == w11[i])
                {
                    continue;
                }
                if (w10[i] == 'R' && w11[i] == 'S')
                {
                    pinch2++;
                }
                else if (w10[i] == 'S' && w11[i] == 'R')
                {
                    pinch1++;
                }
                else if (w10[i] == 'S' && w11[i] == 'P')
                {
                    pinch2++;
                }
                else if (w10[i] == 'P' && w11[i] == 'S')
                {
                    pinch1++;
                }
                else if (w10[i] == 'R' && w11[i] == 'P')
                {
                    pinch1++;
                }
                else if (w10[i] == 'P' && w11[i] == 'R')
                {
                    pinch2++;
                }
            }
            cout << pinch1 << " " << pinch2 << endl;
        }
    }
}