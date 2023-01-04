// Vanya and Fence
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int n, h;

    cin >> n >> h;

    int count = n;
    int height[n];

    for (int i = 0; i < n; i++)
    {
        cin >> height[i];
        int temp = height[i];
        while (temp > h)
        {
            temp = temp / 2;
            count = count + 1;
        }
    }

    cout << count;
    return 0;
}