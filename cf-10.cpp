// Boy or Girl
#include <iostream>
#include <string.h>
using namespace std;

int count_unique_char(string str)
{

    int hash[128] = {0};
    int i, c = 0;

    for (i = 0; i < str.length(); ++i)
    {
        hash[str[i]] = 1;
    }

    for (i = 0; i < 128; ++i)
    {
        c += hash[i];
    }

    return c;
}

int main()
{
    string s1;
    int c;
    cin >> s1;
    c = count_unique_char(s1);
    if (c % 2 == 1)
    {
        cout << "IGNORE HIM!" << endl;
    }
    else
    {
        cout << "CHAT WITH HER!" << endl;
    }
    return 0;
}