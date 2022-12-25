// Word
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s1;
    int u = 0, l = 0;
    cin >> s1;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] > 90)
        {
            l++;
        }
        else
        {
            u++;
        }
    }

    for (int i = 0; i < s1.length(); i++)
    {
        if (u > l && s1[i] > 90)
        {
            s1[i] = s1[i] - 32;
        }
        else if (l >= u && s1[i] < 91)
        {
            s1[i] = s1[i] + 32;
        }
    }
    cout << s1;
    return 0;
}