// Football
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int order = 0;
    string s;

    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == s[i + 1] && s[i] == s[i + 2] && s[i] == s[i + 3] && s[i] == s[i + 4] && s[i] == s[i + 5] && s[i] == s[i + 6])
        {
            order++;
        }
    }
    if (order > 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}