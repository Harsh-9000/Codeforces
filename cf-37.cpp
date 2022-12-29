// Expression
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, u, v, w, x, y, z;
    cin >> a;
    cin >> b;
    cin >> c;
    u = a + b * c;
    v = a * b + c;
    w = a + b + c;
    x = a * b * c;
    y = (a + b) * c;
    z = a * (b + c);
    if (u > v && u > w && u > x && u > y && u > z)
    {
        cout << u << endl;
    }
    else if (v > w && v > x && v > y && v > z)
    {
        cout << v << endl;
    }
    else if (w > x && w > y && w > z)
    {
        cout << w << endl;
    }
    else if (x > y && x > z)
    {
        cout << x << endl;
    }
    else if (y > z)
    {
        cout << y << endl;
    }
    else
    {
        cout << z << endl;
    }

    return 0;
}