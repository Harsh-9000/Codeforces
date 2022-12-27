// Translation
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    int first, n = 1, x = 0;
    first = 0;
    cin >> s;
    cin >> t;
    while (first + x < first + s.length() - n)
    {
        swap(s[first + x], s[first + s.length() - n]);
        x++;
        n++;
    }

    if (s == t)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}