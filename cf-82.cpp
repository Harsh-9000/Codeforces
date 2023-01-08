// Lucky
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int ticket, a, b, c, d, e, f;
        cin >> ticket;
        a = ticket % 10;
        ticket = ticket / 10;
        b = ticket % 10;
        ticket = ticket / 10;
        c = ticket % 10;
        ticket = ticket / 10;
        d = ticket % 10;
        ticket = ticket / 10;
        e = ticket % 10;
        ticket = ticket / 10;
        f = ticket % 10;

        if (a + b + c == d + e + f)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}