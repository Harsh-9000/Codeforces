// Subtract or Divide
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int t, n, moves;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n == 1)
        {
            moves = 0;
        }
        else if (n == 2)
        {
            moves = 1;
        }
        else if (n == 3)
        {
            moves = 2;
        }
        else if (n % 2 == 1)
        {
            moves = 3;
        }
        else
        {
            moves = 2;
        }
        cout << moves << endl;
    }
    return 0;
}