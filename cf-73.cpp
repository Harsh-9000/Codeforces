//Doors and Keys
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string s;
    cin >> t;
    while (t--)
    {
        int r = 0, g = 0, b = 0, order = 0;
        cin >> s;
        for (int i = 0; i < 6; i++)
        {
            if (s[i] == 'r')
                r++;

            else if (s[i] == 'b')
                b++;

            else if (s[i] == 'g')
                g++;

            else if (s[i] == 'R' && r == 1)
                order++;

            else if (s[i] == 'G' && g == 1)
                order++;

            else if (s[i] == 'B' && b == 1)
                order++;
        }
        if (order == 3)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}