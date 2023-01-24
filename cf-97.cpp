// Cut Ribbon
#include <exception>
#include <limits>
#include <new>
#include <typeinfo>
#include <stdexcept>
#include <utility>
#include <functional>
#include <memory>
#include <string>
#include <locale>
#include <algorithm>
#include <bitset>
#include <deque>
#include <iterator>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <unordered_map>
#include <vector>
#include <complex>
#include <numeric>
#include <valarray>
#include <fstream>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <sstream>
#include <string.h>
#include <bits/stdc++.h>
#include <accctrl.h>
#include <math.h>
typedef long long ll;
typedef long double ld;
using namespace std;

int main()
{
    int n, a, b, c, x, y, z;
    cin >> n >> a >> b >> c;

    vector<int> dp(n + 1);

    dp[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        x = y = z = -1;

        if (i >= a)
        {
            x = dp[i - a];
        }

        if (i >= b)
        {
            y = dp[i - b];
        }

        if (i >= c)
        {
            z = dp[i - c];
        }

        if (x == -1 && y == -1 && z == -1)
        {
            dp[i] = -1;
        }

        else
        {
            dp[i] = max(max(x, y), z) + 1;
        }
    }

    cout << dp[n];
    return 0;
}