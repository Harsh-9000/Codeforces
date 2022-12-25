// Queue at the School
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1;
    int n, t;
    cin >> n >> t;
    cin >> s1;
    while (t--)
    {

        for (int i = 0; i < n; i++)
        {
            if (s1[i] == 'B' && s1[i + 1] == 'G')
            {
                swap(s1[i], s1[i + 1]);
                i++;
            }
        }
    }
    cout << s1;
    return 0;
}