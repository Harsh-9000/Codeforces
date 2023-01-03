// I'm bored with life
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long A, B, f1 = 1, f2 = 1, GCD;
    cin >> A >> B;

    for (long i = 1; i <= A; i++)
    {
        f1 = f1 * i;
    }

    for (long i = 1; i <= B; i++)
    {
        f2 = f2 * i;
    }

    if (A > B)
    {
        cout << f2;
    }
    else
    {
        cout << f1;
    }
    return 0;
}