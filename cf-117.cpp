// Following Directions
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
    int t;
    cin >> t;

    while (t--)
    {
        bool candy = false;
        int n;
        cin >> n;

        string directions;
        cin >> directions;

        int x = 0, y = 0;

        for (int i = 0; i < n; i++)
        {
            if (directions[i] == 'U')
            {
                x++;
            }
            else if (directions[i] == 'D')
            {
                x--;
            }
            else if (directions[i] == 'L')
            {
                y--;
            }
            else if (directions[i] == 'R')
            {
                y++;
            }
            if (x == 1 && y == 1)
            {
                candy = true;
            }
        }

        if (candy)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}