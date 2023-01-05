// Add Plus Minus Sign
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, count_1 = 0;
    cin >> t;

    while (t--)
    {
        int length;
        cin >> length;

        char value[length];
        for (int i = 0; i < length; i++)
        {
            cin >> value[i];
        }

        char ans[length - 1];
        for (int i = 0; i < length; i++)
        {
            if (i == 0)
            {
                if (value[i] == '1')
                {
                    count_1++;
                }
            }
            else
            {
                if (value[i] == '1')
                {
                    count_1++;
                    if (count_1 % 2 == 0)
                    {
                        cout << "-";
                    }
                    else
                    {
                        cout << "+";
                    }
                }
                else
                {
                    cout << "+";
                }
            }
        }
        cout << endl;

        count_1 = 0;
    }
    return 0;
}