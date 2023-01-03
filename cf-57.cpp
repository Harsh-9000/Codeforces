// Equal Candies
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;

    cin >> t;

    while (t--)
    {
        cin >> n;

        int can[n], ans = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> can[i];
        }

        sort(can, can + n);

        for (int i = 1; i < n; i++)
        {
            ans = ans + (can[i] - can[0]);
        }

        cout << ans << endl;
    }

    return 0;
}