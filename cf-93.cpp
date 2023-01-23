// Vanya and Lanterns
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
    int n, l;
    cin >> n >> l;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    double diff = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (diff < arr[i + 1] - arr[i])
        {
            diff = arr[i + 1] - arr[i];
        }
    }

    double temp = max(arr[0] - 0, l - arr[n - 1]);

    cout.precision(10);
    cout << fixed << max(diff / 2.0, temp) << endl;
    return 0;
}