// Food for Animals
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, x, y, t, rem;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >> x >> y;

        if (a >= x && b >= y)
        {
            cout << "YES" << endl;
        }

        else if (x > a)
        {
            rem = x - a;
            if (y > b)
            {
                rem = rem + y - b;
            }
            if (rem <= c)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }

        else if (y > b)
        {
            rem = y - b;
            if (x > a)
            {
                rem = rem + x - a;
            }
            if (rem <= c)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}