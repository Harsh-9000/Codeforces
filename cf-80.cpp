// Vlad and Candies
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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        for (int i = 0; i < 1; i++)
        {
            if (n == 1 && arr[i] == 1)
            {
                cout << "YES" << endl;
            }
            else if (n == 1 && arr[i] != 1)
            {
                cout << "NO" << endl;
            }
            else if (arr[n - 1] - arr[n - 2] == 1 || arr[n - 1] - arr[n - 2] == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}