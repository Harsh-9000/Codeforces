// cAPS lOCK
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 0;
    string input;
    cin >> input;

    for (int i = 1; i < input.length(); i++)
    {
        if (islower(input[i]))
        {
            count++;
        }
    }

    if (count == 0)
    {
        for (int i = 0; i < input.length(); i++)
        {
            if (islower(input[i]))
            {
                input[i] = toupper(input[i]);
            }
            else
            {
                input[i] = tolower(input[i]);
            }
        }
    }
    cout << input;
    return 0;
}