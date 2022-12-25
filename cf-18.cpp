// Wrong Subtraction
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, n;
    cin >> n >> k;
    while (k--)
    {
        if (n % 10 != 0)
            n = n - 1;
        else
            n = n / 10;
    }
    cout << n;
    return 0;
}