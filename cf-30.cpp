// Is your horseshoe on the other hoof?
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int shoe[4], n = 0;

    for (int i = 0; i < 4; i++)
    {
        cin >> shoe[i];
    }

    if (shoe[0] == shoe[1] || shoe[0] == shoe[2] || shoe[0] == shoe[3])
    {
        n++;
    }
    if (shoe[1] == shoe[2] || shoe[1] == shoe[3])
    {
        n++;
    }
    if (shoe[2] == shoe[3])
    {
        n++;
    }

    cout << n;
    return 0;
}