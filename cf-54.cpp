// Panoramix's Prediction
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

bool isprime(int n);

int main()
{
    int n, m, x;
    cin >> n >> m;

    for (int i = n + 1;; i++)
    {
        if (isprime(i))
        {
            x = i;
            break;
        }
    }

    if (x == m)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}

bool isprime(int n)
{
    if (n <= 0)
    {
        return false;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}