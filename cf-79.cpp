// Vasya and Coins
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, one, two, count = 0;
    cin >> t;
    while (t--)
    {
        cin >> one >> two;

        if (one == 0)
        {
            cout << '1' << endl;
        }
        else if (two == 0)
        {
            cout << one + 1 << endl;
        }
        else
        {
            for (int i = 0; i < one; i++)
            {
                count++;
            }

            for (int i = 0; i < two; i++)
            {
                count = count + 2;
            }
            cout << count + 1 << endl;
        }

        count = 0;
    }
    return 0;
}