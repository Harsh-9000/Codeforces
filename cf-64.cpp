// Atilla's Favorite Problem
#include <iostream>
#include <string.h>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;

void sortString(string &str)
{
    sort(str.begin(), str.end());
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string word;
        cin >> word;
        sortString(word);

        char option = word.back();

        switch (option)
        {
        case 'a':
            cout << 1 << endl;
            break;

        case 'b':
            cout << 2 << endl;
            break;

        case 'c':
            cout << 3 << endl;
            break;

        case 'd':
            cout << 4 << endl;
            break;

        case 'e':
            cout << 5 << endl;
            break;

        case 'f':
            cout << 6 << endl;
            break;

        case 'g':
            cout << 7 << endl;
            break;

        case 'h':
            cout << 8 << endl;
            break;

        case 'i':
            cout << 9 << endl;
            break;

        case 'j':
            cout << 10 << endl;
            break;

        case 'k':
            cout << 11 << endl;
            break;

        case 'l':
            cout << 12 << endl;
            break;

        case 'm':
            cout << 13 << endl;
            break;

        case 'n':
            cout << 14 << endl;
            break;

        case 'o':
            cout << 15 << endl;
            break;

        case 'p':
            cout << 16 << endl;
            break;

        case 'q':
            cout << 17 << endl;
            break;

        case 'r':
            cout << 18 << endl;
            break;

        case 's':
            cout << 19 << endl;
            break;

        case 't':
            cout << 20 << endl;
            break;

        case 'u':
            cout << 21 << endl;
            break;

        case 'v':
            cout << 22 << endl;
            break;

        case 'w':
            cout << 23 << endl;
            break;

        case 'x':
            cout << 24 << endl;
            break;

        case 'y':
            cout << 25 << endl;
            break;

        case 'z':
            cout << 26 << endl;
            break;
        }
    }
    return 0;
}