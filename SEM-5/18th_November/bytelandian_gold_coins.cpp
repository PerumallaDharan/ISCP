#include <iostream>
#include <vector>

using namespace std;

const int MAXN = 10000000; // Maximum input value

vector<long long> dp(MAXN, -1);

long long maxDollars(long long n) {
    if (n < MAXN && dp[n] != -1) {
        return dp[n];
    }

    long long dollars = n; // Initially, the coin value is the maximum amount

    if (n >= 2) {
        dollars = max(dollars, maxDollars(n / 2) + maxDollars(n / 3) + maxDollars(n / 4));
    }

    if (n < MAXN) {
        dp[n] = dollars;
    }

    return dollars;
}

int main() {
    long long n;
    while (cin >> n) {
        cout << maxDollars(n) << endl;
    }
    return 0;
}