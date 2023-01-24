// Insomnia cure
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
    int k, l, m, n, d;

    cin >> k >> l >> m >> n >> d;
    int count = d;

    if (k == 1 || l == 1 || m == 1 || n == 1)
    {
        cout << count << endl;
    }
    else
    {
        for (int i = 1; i <= d; i++)
        {
            if ((i % k != 0) && (i % l != 0) && (i % m != 0) && (i % n != 0))
            {
                count--;
            }
        }
        cout << count << endl;
    }
    return 0;
}