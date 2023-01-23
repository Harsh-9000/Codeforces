// T-primes
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
const int MAX = 1000001;
bool prime[MAX];

void sieve()
{
    int i, j;
    prime[0] = prime[1] = true;

    for (i = 4; i < MAX; i += 2)
    {
        prime[i] = true;
    }

    for (i = 3; i * i <= MAX; i += 2)
    {
        if (!prime[i])
        {
            for (j = i * i; j < MAX; j += 2 * i)
            {
                prime[j] = true;
            }
        }
    }
}

int main(void)
{
    sieve();

    int t;
    ll n, root;

    cin >> t;

    while (t--)
    {
        cin >> n;

        root = sqrt(n);

        if (!prime[root] && root * root == n)
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