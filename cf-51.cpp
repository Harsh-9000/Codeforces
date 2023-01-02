// 01 Game
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int zero = count(s.begin(), s.end(), '0');
        int one = count(s.begin(), s.end(), '1');

        int x = min(zero, one);

        if (x % 2 == 0)
        {
            cout << "NET" << endl;
        }
        else
        {
            cout << "DA" << endl;
        }
    }
    return 0;
}