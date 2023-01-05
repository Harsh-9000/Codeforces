// Different Differences
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int k, n;
        int j = 1;
        int diff = 1;

        cin >> k >> n;

        for (int i = 1; i <= k; i++)
        {
            cout << j << " ";
            if (n - (j + diff) >= (k - i - 1))
            {
                j = j + diff;
                diff++;
            }
            else
            {
                j++;
            }
        }
        cout << endl;
    }
    return 0;
}