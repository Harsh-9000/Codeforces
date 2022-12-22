// Way Too Long Words
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string word, answer;
    int n;

    cin >> n;

    while (n--)
    {
        cin >> word;
        if (word.length() > 10)
        {
            cout << word[0];
            cout << word.length() - 2;
            cout << word.back() << endl;
        }
        else
        {
            cout << word << endl;
        }
    }
    return 0;
}