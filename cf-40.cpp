// Prof. Slim
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int arraySortedCheck(int arr[], int n);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] < 0)
            {
                count++;
            }
        }

        for (int i = 0; i < count; i++)
        {
            if (arr[i] > 0)
            {
                arr[i] = -1 * arr[i];
            }
        }

        for (int i = count; i < n; i++)
        {
            if (arr[i] < 0)
            {
                arr[i] = abs(arr[i]);
            }
        }

        if (arraySortedCheck(arr, n))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}

int arraySortedCheck(int arr[], int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }

    if (arr[n - 1] < arr[n - 2])
    {
        return 0;
    }
    return arraySortedCheck(arr, n - 1);
}