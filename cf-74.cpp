// Square Counting
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, s, n, count = 0;
    cin >> t;

    while (t--)
    {
        cin >> n;
        cin >> s;
        cout << s / (n * n) << endl;
    }

    return 0;
}