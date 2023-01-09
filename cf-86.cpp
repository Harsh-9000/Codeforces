// Koxia and Whiteboards
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
        ll n, m;
        cin >> n >> m;
        ll whiteboards[n];
        ll operations[m];
        ll sum = 0;
        priority_queue<int, vector<int>, greater<int>> calculate;

        for (int i = 0; i < n; i++)
        {
            cin >> whiteboards[i];
            calculate.push(whiteboards[i]);
        }
        for (int i = 0; i < m; i++)
        {
            cin >> operations[i];
        }
        for (int i = 0; i < m; i++)
        {
            calculate.pop();
            calculate.push(operations[i]);
        }

        while (!calculate.empty())
        {
            sum += calculate.top();
            calculate.pop();
        }
        cout << sum << endl;
    }
}