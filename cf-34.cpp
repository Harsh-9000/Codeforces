// String Task
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1;
    string s2;

    cin >> s1;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] != 'a' && s1[i] != 'e' && s1[i] != 'i' && s1[i] != 'o' && s1[i] != 'u' && s1[i] != 'A' && s1[i] != 'E' && s1[i] != 'I' && s1[i] != 'O' && s1[i] != 'U' && s1[i] != 'y' && s1[i] != 'Y')
        {
            s2 = s2 + '.';
            s2 = s2 + s1[i];
        }
    }

    for (int i = 1; i < s2.length(); i = i + 2)
    {
        if (s2[i] < 91)
        {
            s2[i] = s2[i] + 32;
        }
    }

    cout << s2;
    return 0;
}