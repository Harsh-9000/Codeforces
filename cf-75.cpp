// Deletions of Two Adjacent Letters
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    char x;
    int t, count = 0;
    cin >> t;
    while (t--)
    {
        cin >> s;
        cin >> x;
        for (int i = 0; i < s.length(); i = i + 2)
        {
            if (s[i] == x)
            {
                count++;
            }
        }

        if (count)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        count = 0;
    }

    return 0;
}