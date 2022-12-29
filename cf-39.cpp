// Make It Increasing
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int Answer();

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Answer();
    }
    return 0;
}

int Answer()
{
    int n, count = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = n - 2; i >= 0; i--)
    {
        while (arr[i] >= arr[i + 1] && arr[i] > 0)
        {
            arr[i] /= 2;
            count++;
        }

        if (arr[i] == arr[i + 1])
        {
            cout << "-1" << endl;
            return 0;
        }
    }
    cout << count << endl;
    count = 0;
    return 0;
}