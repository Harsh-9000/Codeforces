// Taisia and Dice
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
        int n, s, r;
        cin >> n >> s >> r;

        int diff = s - r, temp = s - diff;

        if (temp % (n - 1) == 0)
        {
            for (int i = 0; i < n - 1; i++)
            {
                cout << temp / (n - 1) << " ";
            }
        }
        else
        {
            int count = n - 1;
            while (temp % count != 0)
            {
                cout << temp / count << " ";
                temp = temp - (temp / count);
                count -= 1;
            }

            for (int i = 0; i < count; i++)
            {
                cout << temp / count << " ";
            }
        }
        cout << diff << endl;
    }
    return 0;
}