// C+=
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b, n, count = 0;
    cin >> t;

    while (t--)
    {
        cin >> a >> b >> n;
        while (a <= n && b <= n)
        {
            if (a > b)
            {
                b += a;
                count++;
            }
            else
            {
                a += b;
                count++;
            }
        }
        cout << count << endl;
        count = 0;
    }
    return 0;
}