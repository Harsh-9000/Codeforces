// GCD Partition
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
    ll t, n;
    cin >> t;

    while (t--)
    {
        cin >> n;

        ll arr[n], sum = 0, left = 0, right, ans = 1;

        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        for (ll i = 0; i < n - 1; i++)
        {
            left += arr[i];
            right = sum - left;
            ans = max(ans, __gcd(left, right));
        }

        cout << ans << endl;
    }
    return 0;
}