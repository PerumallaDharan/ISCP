#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void)
{
    ll T;
    cin >> T;
    while (T--)
    {
        ll n, k, a;
        cin >> n >> k;
        priority_queue<ll> gift;
        for (ll i = 0; i < n; i++)
        {
            cin >> a;
            gift.push(a);
        }
        ll chef = 0, twin = 0, in_hand;
        while (k--)
        {
            in_hand = gift.top();
            chef += in_hand;
            gift.pop();
            in_hand = gift.top();
            twin += in_hand;
            gift.pop();
        }
        twin += gift.top();
        cout << max(chef, twin) << '\n';
    }
    return 0;
}