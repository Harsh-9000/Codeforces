// I Wanna Be the Guy
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
    int array[300];
    int n, X, Y, count = 0;
    cin >> n;

    cin >> X;
    for (int i = 0; i < X; i++)
    {
        cin >> array[i];
    }

    cin >> Y;
    for (int i = X; i < X + Y; i++)
    {
        cin >> array[i];
    }

    sort(array, array + (X + Y));

    for (int i = 0; i < X + Y; i++)
    {
        if (array[i] != array[i + 1])
        {
            count++;
        }
    }

    if (n == (count))
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}