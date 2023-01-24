// Football
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

string findWord(vector<string> arr)
{
    unordered_map<string, int> hs;

    for (int i = 0; i < arr.size(); i++)
    {
        hs[arr[i]]++;
    }

    string key = "";
    int value = 0;
    for (auto me : hs)
    {
        if (me.second > value)
        {
            value = me.second;
            key = me.first;
        }
    }

    return key;
}

int main()
{
    int n;
    cin >> n;

    vector<string> teams;
    for (int i = 0; i < n; i++)
    {
        string team;
        cin >> team;
        teams.push_back(team);
    }

    cout << findWord(teams);
    return 0;
}