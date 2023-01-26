// Emordnilap
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

long long int m = 1000000007;

long long int factorial(long long int n)
{
    long long int res = 1, i;
    for (i = 2; i <= n; i++)
    {
        res = (res * i) % m;
    }
    return res;
}

int main()
{
    long long int t;
    cin >> t;

    while (t--)
    {
        long long int n;
        cin >> n;

        long long int temp = n;

        long long int arr[2 * n];

        for (long long int i = 0; i < n; i++)
        {
            arr[i] = temp;
            temp--;
        }

        temp++;

        for (long long int i = n; i < 2 * n; i++)
        {
            arr[i] = temp;
            temp++;
        }

        long long int ans = (n * (n - 1) % m) * factorial(n) % m;
        cout << ans << endl;
    }
}