// Word Capitalization
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s1;
    cin >> s1;

    for (int i = 0; i < 1; i++)
    {
        if (s1[i] > 90)
        {
            s1[i] = s1[i] - 32;
        }
    }
    cout << s1;
    return 0;
}