// Matrix Rotation
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int matrix[2][2];
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> matrix[i][j];
            }
        }

        if (matrix[0][0] < matrix[1][0] && matrix[0][1] < matrix[1][1] && matrix[0][0] < matrix[0][1] && matrix[1][0] < matrix[1][1])
        {
            cout << "YES" << endl;
        }
        else if (matrix[1][0] < matrix[1][1] && matrix[0][0] < matrix[0][1] && matrix[1][0] < matrix[0][0] && matrix[1][1] < matrix[0][1])
        {
            cout << "YES" << endl;
        }
        else if (matrix[1][0] < matrix[0][0] && matrix[1][1] < matrix[0][1] && matrix[1][1] < matrix[1][0] && matrix[0][1] < matrix[0][0])
        {
            cout << "YES" << endl;
        }
        else if (matrix[0][1] < matrix[0][0] && matrix[1][1] < matrix[1][0] && matrix[0][1] < matrix[1][1] && matrix[0][0] < matrix[1][0])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}