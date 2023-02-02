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
    int n, count = 1;
    cin >> n;

    while (count <= n)
    {
        if (count == 1 && n == 1)
        {
            cout << "I hate it ";
        }
        else if (count == 1 && n > 1)
        {
            cout << "I hate that ";
        }
        else if (count % 2 == 0 && count != n)
        {
            cout << "I love that ";
        }
        else if (count % 2 == 0 && count == n)
        {
            cout << "I love it ";
        }
        else if (count % 2 != 0 && count != n)
        {
            cout << "I hate that ";
        }
        else if (count % 2 != 0 && count == n)
        {
            cout << "I hate it ";
        }

        count++;
    }
    return 0;
}