// Soldier and Bananas
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, n, w, price = 0;
    cin >> k >> n >> w;
    for (int i = 1; i <= w; i++)
    {
        price = price + (k * i);
    }
    int x = price - n;
    if (x < 0)
    {
        x = 0;
    }

    cout << x;

    return 0;
}