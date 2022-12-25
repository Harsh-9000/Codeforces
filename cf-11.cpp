// Helpful Maths
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1;
    cin >> s1;

    for (int i = 0; i < s1.length() - 1; i++)
    {
        for (int j = 0; j < (s1.length() - 1 - i); j++)
        {
            if (s1[j] != '+')
            {
                if (s1[j] > s1[j + 2])
                {
                    char temp = s1[j];
                    s1[j] = s1[j + 2];
                    s1[j + 2] = temp;
                }
            }
        }
    }
    cout << s1;

    return 0;
}