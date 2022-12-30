// Z mod X = C
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b, c, x, y, z;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        x = a + b + c;
        y = b + c;
        z = c;
        cout << x << " " << y << " " << z << endl;
    }
    return 0;
}