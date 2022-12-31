// Case of the Zeros and Ones
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s1;

    cin >> n;
    cin >> s1;

    int zero = count(s1.begin(), s1.end(), '0');
    int one = count(s1.begin(), s1.end(), '1');

    int x = 2 * min(zero, one);

    cout << n - x;
    return 0;
}