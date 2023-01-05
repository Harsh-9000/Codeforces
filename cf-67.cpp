// New Year and Hurry
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, count = 0;
    cin >> n >> k;

    int time = (60 * 4) - k;

    int timeTaken[n];
    for (int i = 1; i <= n; i++)
    {
        timeTaken[i] = i * 5;
    }

    for (int i = 1; i <= n; i++)
    {
        if (time >= timeTaken[i])
        {
            count++;
            time = time - timeTaken[i];
        }
    }

    cout << count;

    return 0;
}