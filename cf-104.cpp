// Hit the Lottery
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
    int n, count = 0, temp;
    cin >> n;

    if (n % 100 == 0)
    {
        cout << n / 100;
    }
    else
    {
        count += n / 100;
        temp = n % 100;
        if (temp % 20 == 0)
        {
            cout << (temp / 20) + count;
        }
        else
        {
            count += temp / 20;
            temp = temp % 20;

            if (temp % 10 == 0)
            {
                cout << (temp / 10) + count;
            }
            else
            {
                count += temp / 10;
                temp = temp % 10;

                if (temp % 5 == 0)
                {
                    cout << (temp / 5) + count;
                }
                else
                {
                    count += temp / 5;
                    temp = temp % 5;

                    if (temp % 1 == 0)
                    {
                        cout << (temp / 1) + count;
                    }
                    else
                    {
                        count += temp / 1;
                    }
                }
            }
        }
    }
    return 0;
}