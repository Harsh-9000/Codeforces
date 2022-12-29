// Diverse Substring
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    char s[n];

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] != s[i + 1])
        {
            cout << "YES" << endl;
            cout << s[i] << s[i + 1] << endl;
            return 0;
        }
    }
    cout << "NO";
    return 0;
}