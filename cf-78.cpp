// XY Sequence
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, B, x, y, i;
    long long sum = 0;
    cin >> t;
    while (t--)
    {
        cin >> n >> B >> x >> y;
        int a[n];
        a[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            if (a[i - 1] + x <= B)
            {
                a[i] = a[i - 1] + x;
            }
            else
            {
                a[i] = a[i - 1] - y;
            }
        }
        for (int i = 0; i <= n; i++)
        {
            sum += a[i];
        }
        cout << sum << endl;
        sum = 0;
    }
    return 0;
}