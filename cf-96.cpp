// i love %username%
#include <bits/stdc++.h>
using namespace std;

int count_elements_greater(int arr[], int n)
{
    int count = 0;
    int max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            count += 1;
            max = arr[i];
        }
    }
    return count;
}

int count_elements_smaller(int arr[], int n)
{
    int count = 0;
    int min = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            count += 1;
            min = arr[i];
        }
    }
    return count;
}

int main()
{
    int n, count = 0;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    count = count + count_elements_greater(arr, n);
    count = count + count_elements_smaller(arr, n);

    cout << count;
    return 0;
}
