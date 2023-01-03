// Theatre Square
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main()
{
    long double m, n, a;

    cin >> n >> m >> a;

    printf("%.0Lf\n", ceil(n / a) * ceil(m / a));

    return 0;
}