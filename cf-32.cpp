// Next Round
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, pass = 0, na = 0;
    cin >> n >> k;
    int score[n];
    for (int i = 0; i < n; i++)
    {
        cin >> score[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (score[k - 1] <= score[i] && score[i] != 0)
        {
            pass++;
        }
    }
    cout << pass;
    return 0;
}