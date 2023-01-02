// Kana and Dragon Quest game
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, x, n, m;

    cin >> t;
    while (t--)
    {
        cin >> x >> n >> m;

        while (n && (floor(x / 2)) + 10 < x)
        {
            n--;
            x = (floor(x / 2)) + 10;
        }

        while (m--)
        {
            x = x - 10;
        }

        if (x > 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}