// Gravity Flip
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int cubes[n];

    for (int i = 0; i < n; i++)
    {
        cin >> cubes[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        int min, temp;
        min = i;
        for (int j = i + 1; j < n; j++)
            if (cubes[j] < cubes[min])
                min = j;
        temp = cubes[i];
        cubes[i] = cubes[min];
        cubes[min] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << cubes[i] << " ";
    }
    return 0;
}