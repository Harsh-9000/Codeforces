// A+B?
#include <iostream>
#include <string.h>
using namespace std;

int findSum(string str)
{
    int sum = 0;
    for (char ch : str)
    {
        if (isdigit(ch))
        {
            sum += ch - '0';
        }
    }
    return sum;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string expression;
        cin >> expression;
        cout << findSum(expression) << endl;
    }
    return 0;
}