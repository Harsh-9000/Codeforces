// Mishka and Game
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, C = 0, M = 0;

    cin >> n;

    while (n--)
    {
        cin >> a >> b;
        if (a > b)
        {
            M++;
        }
        else if (b > a)
        {
            C++;
        }
    }

    if (M > C)
    {
        cout << "Mishka" << endl;
    }
    else if (C > M)
    {
        cout << "Chris" << endl;
    }
    else
    {
        cout << "Friendship is magic!^^" << endl;
    }

    return 0;
}