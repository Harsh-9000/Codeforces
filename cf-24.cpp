// In Search of an Easy Problem
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, hard = 0;
    string s;

    cin >> n;
    getline(cin >> ws, s);

    for (int i = 0; i < 2 * n; i++)
    {
        if (s[i] == '1')
        {
            hard++;
        }
    }

    if (hard > 0)
    {
        cout << "HARD";
    }
    else
    {
        cout << "EASY";
    }
    return 0;
}