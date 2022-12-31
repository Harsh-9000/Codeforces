// Cards for Friends
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, w, h, n, count = 1;
    cin >> t;

    while (t--)
    {
        cin >> w >> h >> n;
        int res = 1;
        while (w % 2 == 0)
        {
            w = w / 2;
            count = count * 2;
        }
        while (h % 2 == 0)
        {
            h = h / 2;
            count = count * 2;
        }
        if (count >= n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        count = 1;
    }
    return 0;
}