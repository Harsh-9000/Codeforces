// GCD vs LCM
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int GCD(int x, int y);
int LCM(int x, int y);

int main()
{
    int t, n, a, b, c, d;
    cin >> t;
    while (t--)
    {
        cin >> n;
        a = 1;
        b = n - 3;
        c = 1;
        d = 1;
        if (GCD(a, b) == LCM(c, d))
        {
            cout << a << " " << b << " " << c << " " << d << endl;
        }
    }
    return 0;
}

int GCD(int x, int y)
{
    int i, gcd;

    for (i = 1; i <= x && i <= y; ++i)
    {
        if (x % i == 0 && y % i == 0)
        {
            gcd = i;
        }
    }

    return gcd;
}

int LCM(int x, int y)
{
    int gcd, lcm;

    gcd = GCD(x, y);
    lcm = (x * y) / gcd;
    return lcm;
}