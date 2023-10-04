#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, s;
        cin >> n >> k >> s;
        int m = (s / 7);
        if (k * s > (s - m) * n)
        {
            cout << "-1\n";
            continue;
        }
        if ((k * s) % n == 0)
            cout << ((k * s) / n) << "\n";
        else
            cout << ((k * s) / n) + 1 << "\n";
    }
    return 0;
}