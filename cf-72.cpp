//Reverse
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int size;
        string array;
        cin >> size;
        for (int i = 0; i < size; i++)
        {
            cin >> array[i];
        }

        for (int i = 0; i < size; i++)
        {
            if (array[i] < array[i - 1])
            {
                swap(array[i], array[i - 1]);
                break;
            }
        }

        for (int i = 0; i < size; i++)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
