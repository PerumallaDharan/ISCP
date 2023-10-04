// There are two groups, one of N boys and the other of N girls numbered from 1 to N.
// You are given two arrays A and B containing N numbers each, denoting the height of boys and girls in the 
// group. You have to form N couples, where each couple will consist of 1 boy and 1 girl.
// Each couple has a LIKENESS VALUE, where LIKENESS VALUE = height of girl in the couple + height of boy in that couple.
// You have to form N couples in such a way that the maximum of LIKENESS VALUE of all the couples is minimum.

// Note:- No boy or girl can form more than one couple.
// Input

// The first line of the input contains a single integer T denoting the number of test cases. The 
// description of T test cases follows.
// The first line of each test case contains a single integer N:- number of boys and number of girls in the group.
// The second line of each test case contains N space-separated integers, denoting the height of N boys.
// The third line of each test case contains N space-separated integers, denoting the height of N girls.
// Output
// For each test case, print the maximum LIKENESS VALUE in a new line.
// Constraints
// 1≤T≤5
// 1≤N≤2*10^4
// 1≤Ai,Bi≤10^9 for each valid 1≤i≤N

// Sample 1:
// Input
// 1
// 3
// 4 5 1
// 2 2 2
// Output
// 7


#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int s;
    cin >> s;
    vector<int> b(s);
    vector<int> g(s);
    vector<int> l(s);
    for (int i = 0; i < s; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < s; i++)
    {
        cin >> g[i];
    }
    sort(b.begin(), b.end());
    sort(g.rbegin(), g.rend());
    for (int i = 0; i < s; i++)
    {
        l[i] = g[i] + b[i];
    }
    sort(l.rbegin(), l.rend());
    cout << l[0] << "\n";
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}