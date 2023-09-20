// There are n kids with candies. You are given an integer array candies, where each candies[i] represents the number of candies the ith kid has, and an integer extraCandies, denoting the number of extra candies that you have.

// Return a boolean array result of length n, where result[i] is true if, after giving the ith kid all the extraCandies, they will have the greatest number of candies among all the kids, or false otherwise.

// Note that multiple kids can have the greatest number of candies.

// Input Format

// The First line contains two integers N and M denoting the value of number of candies (N) and the exra candies (M).
// The Next line contains N integers denoting the elements of the arrray.
// Constraints

// n == candies.length
// 2 <= n <= 100
// 1 <= candies[i] <= 100
// 1 <= extraCandies <= 50
// Output Format

// Print a a boolean array result of length n

// Sample Input 0

// 5 3
// 2 3 5 1 3
// Sample Output 0

// true true true false true
// Sample Input 1

// 3 10
// 12 1 12
// Sample Output 1

// true false true

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
{
    int maxCandies = *max_element(candies.begin(), candies.end()); // Find the maximum number of candies in the array
    vector<bool> result;

    for (size_t i = 0; i < candies.size(); ++i)
    { // Use size_t to match the size() return type
        if (candies[i] + extraCandies >= maxCandies)
        {
            result.push_back(true);
        }
        else
        {
            result.push_back(false);
        }
    }

    return result;
}

int main()
{
    int n, extraCandies;
    cin >> n >> extraCandies;
    vector<int> candies(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> candies[i];
    }

    vector<bool> result = kidsWithCandies(candies, extraCandies);

    for (bool res : result)
    {
        cout << (res ? "true" : "false") << " ";
    }

    cout << endl;

    return 0;
}