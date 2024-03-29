// Problem
// Janmansh is at the fruit market to buy fruits for Chingari. There is an infinite supply of three
// different kinds of fruits with prices A, B and C.
// He needs to buy a total of X fruits having at least 2 different kinds of fruits. What is the least
// amount of money he can spend to buy fruits?

// Input Format
// The first line of the input contains a single integer T - the number of test cases. The description of T test cases 
// follows.
// The first and only line of each test case contains four space separated integers X, A, B, C - the number
// of fruits to buy and the prices of the three different types of fruits respectively.

// Output Format
// For each test case, output the least amount of money he can spend to buy fruits.

// Constraints
// 1≤T≤100000
// 2≤X≤1000
// 1≤A,B,C≤100

// Sample 1:
// Input
// 2
// 2 1 1 1
// 3 4 3 2
// Output
// 2
// 7

// Explanation:
// Test case-1: He can buy any two fruits of different kinds for a total price of 2.
// Test case-2: He can buy 1 fruit of price 3 and 2 fruits of price 2 for a total price of 7.

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, arr[3];
        cin >> x;
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + 3);
        cout << (x - 1) * arr[0] + 1 * arr[1] << endl;
    }
    return 0;
}