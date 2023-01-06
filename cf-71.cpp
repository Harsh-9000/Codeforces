// Absolute Sorting
#include <bits/stdc++.h>
using namespace std;

int x;

void binarySearch(int l, int h, int arr[], int n)
{
    int f = 0;
    if (l <= h)
    {
        int m = (l + h) / 2;

        for (int i = 0; i < n - 1; i++)
        {
            if ((abs(arr[i] - m) > abs(arr[i + 1] - m)))
            {
                if (arr[i] > arr[i + 1])
                {
                    f = 1;
                }
                else
                {
                    f = 2;
                }
                break;
            }
        }
        if (f == 1)
        {
            binarySearch(m + 1, h, arr, n);
        }
        else if (f == 2)
        {
            binarySearch(l, m - 1, arr, n);
        }
        else
        {
            x = m;
        }
    }
}

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        x = -1;

        binarySearch(0, 1000000000, a, n);

        cout << x << endl;
    }
}