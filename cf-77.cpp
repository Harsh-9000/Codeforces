// Integer Moves
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(long double x);

int main()
{
    long double t, x, y, x1 = 0, y1 = 0, x2, y2, distance;
    cin >> t;
    while (t--)
    {
        cin >> x2 >> y2;
        x = x1 - x2;
        y = y1 - y2;
        x = pow(x, 2);
        y = pow(y, 2);
        distance = x + y;
        if (distance == 0)
        {
            cout << '0' << endl;
        }
        else if (isPerfectSquare(distance))
            cout << "1" << endl;
        else
            cout << "2" << endl;
    }
    return 0;
}

bool isPerfectSquare(long double x)
{
    if (x >= 0)
    {
        long long sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}