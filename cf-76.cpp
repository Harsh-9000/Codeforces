// Maximum Cake Tastiness
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int arrange(int *arr, int n);

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << arrange(arr, n) << endl;
        delete arr;
    }
    return 0;
}

int arrange(int *arr, int n)
{
    sort(arr, arr + n);
    return arr[n - 1] + arr[n - 2];
}