// Drinks
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;

    double drinks[n];
    for (int i = 0; i < n; i++)
    {
        cin >> drinks[i];
    }

    double percentage = 0;
    for (int i = 0; i < n; i++)
    {
        percentage = percentage + (drinks[i] / 100);
    }

    double ans = (percentage / n) * 100;

    printf("%.12lf", ans);
    return 0;
}