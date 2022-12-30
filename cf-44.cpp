// Do Not Be Distracted!
#include <iostream>
#include <string.h>
using namespace std;

void ans();

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ans();
    }
}

void ans()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    for (char c = 'A'; c <= 'Z'; c++)
    {
        int first = n;
        int last = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == c)
            {
                first = min(first, i);
                last = max(last, i);
            }
        }
        for (int i = first; i <= last; i++)
        {
            if (s[i] != c)
            {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
}