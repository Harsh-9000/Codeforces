// Die Roll
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[2];

    for (int i = 0; i < 2; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + 2, greater<int>());

    if (arr[0] == 1)
    {
        cout << "1/1";
    }

    else if (arr[0] == 2)
    {
        cout << "5/6";
    }

    else if (arr[0] == 3)
    {
        cout << "2/3";
    }

    else if (arr[0] == 4)
    {
        cout << "1/2";
    }

    else if (arr[0] == 5)
    {
        cout << "1/3";
    }

    else if (arr[0] == 6)
    {
        cout << "1/6";
    }
    return 0;
}