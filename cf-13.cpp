// Bear and Big Brother
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num = 0, a, b;
    cin >> a >> b;

    while (a <= b)
    {
        a = 3 * a;
        b = 2 * b;
        num = num + 1;
    }

    cout << num;

    return 0;
}