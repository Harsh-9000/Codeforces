// Dragons
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
    int s, n, i = 0;
    bool win = true;
    cin >> s >> n;
    pair<int, int> xy_array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> xy_array[i].first >> xy_array[i].second;
    }

    sort(xy_array, xy_array + n);

    while (n--)
    {
        if (xy_array[i].first < s)
        {
            s = s + xy_array[i].second;
            i++;
        }
        else
        {
            cout << "NO";
            win = false;
            break;
        }
    }

    if (win)
    {
        cout << "YES";
    }
    return 0;
}