// Problem
// You are given a sequence A1, A2, ..., AN. Find the maximum value of the expression |Ax - Ay| + |Ay - Az| + |Az - Ax| over
// all triples of pairwise distinct valid indices (x, y, z).

// Input
// The first line of the input contains a single integer T denoting the number of test cases. The description of T test
// cases follows.
// The first line of each test case contains a single integer N.
// The second line contains N space-separated integers A1, A2, ..., AN.

// Output
// For each test case, print a single line containing one integer — the maximum value of |Ax - Ay| + |Ay - Az| + |Az - Ax|.

// Constraints
// 1 ≤ T ≤ 5
// 3 ≤ N ≤ 105
// 1 ≤ Ai ≤ 106 for each valid i

// Subtasks
// Subtask #1 (30 points): 3 ≤ N ≤ 500
// Subtask #2 (70 points): original constraints

// Sample 1:
// Input
// 3
// 3
// 2 7 5
// 3
// 3 3 3
// 5
// 2 2 2 2 5
// Output
// 10
// 0
// 6

// Explanation
// Example case 1: The value of the expression is always 10. For example, let x = 1, y = 2 and z = 3,
// then it is |2 - 7| + |7 - 5| + |5 - 2| = 5 + 2 + 3 = 10.
// Example case 2: Since all values in the sequence are the same, the value of the expression is always 0.
// Example case 3: One optimal solution is x = 1, y = 2 and z = 5, which gives |2 - 2| + |2 - 5| + |5 - 2| = 0 + 3 + 3 = 6.

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long maxi = arr[0];
        long mini = arr[0];
        for (int i = 1; i < n; i++)
        {
            maxi = max(maxi, arr[i]);
            mini = min(mini, arr[i]);
        }
        // sort(arr,arr+n);
        cout << (2 * (maxi - mini)) << endl;
    }
    return 0;
}