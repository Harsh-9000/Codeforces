// Nearly Lucky Number
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    long long int dig, num, count = 0;
    cin >> num;

    while (num > 0)
    {
        dig = num % 10;
        if (dig == 4 || dig == 7)
        {
            count++;
        }
        num = num / 10;
    }

    if (count == 4 || count == 7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}