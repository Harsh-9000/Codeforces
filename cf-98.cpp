// Yet Another Two Integer Problem
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
    int t, a, b;
    cin >> t;

    while (t--)
    {
        cin >> a >> b;
        int difference = abs(a - b);

        if (a == b)
        {
            cout << 0 << endl;
        }
        else if (difference % 10 == 0)
        {
            cout << difference / 10 << endl;
        }
        else
        {
            cout << (difference / 10) + 1 << endl;
        }
    }
    return 0;
}