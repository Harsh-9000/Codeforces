// Anton and Polyhedrons
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
    int n, count = 0;
    cin >> n;

    while (n--)
    {
        string polyhedron;
        cin >> polyhedron;

        if (polyhedron == "Tetrahedron")
        {
            count += 4;
        }
        else if (polyhedron == "Cube")
        {
            count += 6;
        }
        else if (polyhedron == "Octahedron")
        {
            count += 8;
        }
        else if (polyhedron == "Dodecahedron")
        {
            count += 12;
        }
        else
        {
            count += 20;
        }
    }
    cout << count;

    return 0;
}