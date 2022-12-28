// Young Physicist
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j, k, x = 0, y = 0, z = 0;

    cin >> n;
    while (n--)
    {
        cin >> i >> j >> k;
        x = x + i;
        y = y + j;
        z = z + k;
    }

    if (x == 0 && y == 0 && z == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}