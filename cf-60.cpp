// Chat room
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string message;
    int pos;
    bool temph = false, tempe = false, templ1 = false, templ2 = false, tempo = false;

    cin >> message;

    for (int i = 0; i < message.length(); i++)
    {
        if (message[i] == 'h')
        {
            pos = i + 1;
            temph = true;
            break;
        }
    }

    for (int i = pos; i < message.length(); i++)
    {
        if (message[i] == 'e')
        {
            pos = i + 1;
            tempe = true;
            break;
        }
    }

    for (int i = pos; i < message.length(); i++)
    {
        if (message[i] == 'l')
        {
            pos = i + 1;
            templ1 = true;
            break;
        }
    }

    for (int i = pos; i < message.length(); i++)
    {
        if (message[i] == 'l')
        {
            pos = i + 1;
            templ2 = true;
            break;
        }
    }

    for (int i = pos; i < message.length(); i++)
    {
        if (message[i] == 'o')
        {
            tempo = true;
        }
    }

    if (temph && tempe && templ1 && templ2 && tempo)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}