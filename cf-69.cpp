// Coloring
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, k, count = 0;
        bool condition_1 = true, condition_2 = true;
        cin >> n >> m >> k;
        int frequency[m];
        for (int i = 0; i < m; i++)
        {
            cin >> frequency[i];
        }

        if (n % k == 0)
        {
            int max_freq = n / k, max = k;
            for (int i = 0; i < m; i++)
            {
                if (frequency[i] > max_freq)
                {
                    condition_1 = false;
                }
                else if (frequency[i] == max_freq)
                {
                    count++;
                }
            }

            if (count > max)
            {
                condition_2 = false;
            }
        }
        else
        {
            int max_freq = (n / k) + 1, max = n % k;
            for (int i = 0; i < m; i++)
            {
                if (frequency[i] > max_freq)
                {
                    condition_1 = false;
                }
                else if (frequency[i] == max_freq)
                {
                    count++;
                }
            }

            if (count > max)
            {
                condition_2 = false;
            }
        }

        if (condition_1 && condition_2)
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