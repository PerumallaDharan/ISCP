#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t, c;
    cin >> t;
    while (t--)
    {
        cin >> c;
        ll res = log2(c);
        ll cal = pow(2, res);
        cout << (c ^ (cal - 1)) * (cal - 1) << endl;
    }
    return 0;
}