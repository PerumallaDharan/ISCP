// Problem
// Chef is very hungry. So, Chef goes to a shop selling burgers. The shop has 2 types of burgers:
// Normal burgers, which cost X rupees each.
// Premium burgers which cost Y rupees each (where Y > X).
// Chef has R rupees. Chef wants to buy exactly N burgurs. He also wants to maximize the number of premium burgers
// he buys. Determine the number of burgers of both types Chef must buy.

// Output -1 if it is not possible for Chef to buy N burgers.

// Input
// The first line of the input contains a single integer T denoting the number of test cases.
// The first and only line of each test case contains four space-separated integers N, R, X and Y.
// the cost of a normal burger, the cost of a premium burger, the number of burgers Chef wants to buy
// and the amount of money Chef has.

// Output
// For each test case, output on a new line two integers: the number of normal burgers and the
// number of premium burgers Chef must buy satisfying the given conditions.
// Output -1 if it is not possible for Chef to buy N burgers.

// Constraints
// 1≤T≤10000
// 1≤X<Y≤1000
// 1≤N≤1000000
// 1≤R≤1000000000

// Sample 1:
// Input
// 4
// 2 10 4 12
// 4 8 10 50
// 99 100 5 10
// 9 10 10 200
// Output
// 4 0
// 8 2
// -1
// 0 10

// Explanation
// Example case 1: Chef has to buy 4 normal burgurs only. Even if he buys 1 premium burger, he would not be able to buy
// 4 burgers.
// Example case 2: Chef can buy 8 normal burgers and 2 premium burgers.
// Example case 3: Chef cannot buy 5 burgers.

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, p, q;
        cin >> a >> b >> p >> q;
        int ca, cb;
        if (q < a * p)
            cout << -1 << endl;
        else
        {
            cb = (q - a * p) / (b - a);
            if (cb > p)
                cb = p;
            ca = p - cb;
            cout << ca << " " << cb << endl;
        }
    }
    return 0;
}