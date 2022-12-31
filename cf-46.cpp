// Twins
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, total = 0, ans = 0, count = 0;

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n, greater<int>());

    for (int i = 0; i < n; ++i)
    {
        total = total + arr[i];
    }

    for (int i = 0; i < n; ++i)
    {
        ans = ans + arr[i];
        count++;
        if (ans > (total / 2))
        {
            break;
        }
    }

    cout << count;

    return 0;
}