// George and Accommodation
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int n, p, q, x = 0;
    cin >> n;
    while (n--)
    {
        cin >> p >> q;
        if (q > p && q - p != 1)
        {
            x++;
        }
    }
    cout << x;

    return 0;
}