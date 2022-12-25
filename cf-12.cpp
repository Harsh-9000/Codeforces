// Stones on the Table
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1;
    int num = 0;
    int n;
    cin >> n;
    cin >> s1;
    for (int i = 0; i < n; i++)
    {
        if (s1[i] == s1[i + 1])
        {
            num = num + 1;
        }
    }
    cout << num;

    return 0;
}