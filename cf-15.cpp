// Elephant
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n;
    if (n == 1 || n == 2 || n == 3 || n == 4 || n == 5)
    {
        x = 1;
    }
    else
    {
        x = (n + 4) / 5;
    }
    cout << x;
    return 0;
}