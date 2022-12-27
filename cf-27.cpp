// HQ9+
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
        {
            n++;
        }
    }
    if (n > 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}