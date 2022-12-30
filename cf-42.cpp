//  Print a Pedestal (Codeforces logo?)
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, a = 0, b = 0, c = 0;
    cin >> t;
    while (t--)
    {
        cin >> n;
        a = b = c = n / 3;
        a = a + 1;
        c = c - 1;
        if (n % 3 == 1)
        {
            a = a + 1;
        }
        else if (n % 3 == 2)
        {
            a = a + 1;
            b = b + 1;
        }
        cout << b << " " << a << " " << c << endl;
        a = b = c = 0;
    }
    return 0;
}