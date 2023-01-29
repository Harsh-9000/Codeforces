// Hayato and School
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
    int t, n;
    cin >> t;

    while (t--)
    {
        int odd = 0, even = 0;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }

        if (odd == 0 || (odd == 2 && even == 1))
        {
            cout << "NO" << endl;
        }
        else if (even == 0)
        {
            cout << "YES" << endl;
            cout << 1 << " " << 2 << " " << 3 << endl;
        }
        else if (even >= 2 && 3 > odd >= 1)
        {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
            {
                if (a[i] % 2 == 0)
                {
                    cout << i + 1 << " ";
                    break;
                }
            }

            for (int i = n - 1; i >= 0; i--)
            {
                if (a[i] % 2 == 0)
                {
                    cout << i + 1 << " ";
                    break;
                }
            }

            for (int i = 0; i < n; i++)
            {
                if (a[i] % 2 != 0)
                {
                    cout << i + 1 << " ";
                    break;
                }
            }
            cout << endl;
        }
        else if (odd >= 3)
        {
            int temp = 0;
            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
            {
                if (a[i] % 2 != 0)
                {
                    cout << i + 1 << " ";
                    temp = i;
                    break;
                }
            }

            for (int i = temp + 1; i < n; i++)
            {
                if (a[i] % 2 != 0)
                {
                    cout << i + 1 << " ";
                    temp = i;
                    break;
                }
            }

            for (int i = temp + 1; i < n; i++)
            {
                if (a[i] % 2 != 0)
                {
                    cout << i + 1 << " ";
                    break;
                }
            }
            cout << endl;
        }
    }
    return 0;
}