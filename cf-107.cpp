// Polycarp and the Day of Pi
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
    string pi = "314159265358979323846264338327";
    cin >> t;

    while (t--)
    {
        int count = 0;
        string attempt;
        cin >> attempt;
        for (int i = 0; i < 30; i++)
        {
            if (pi[i] == attempt[i])
            {
                count++;
            }
            else
            {
                break;
            }
        }
        cout << count << endl;
    }
    return 0;
}