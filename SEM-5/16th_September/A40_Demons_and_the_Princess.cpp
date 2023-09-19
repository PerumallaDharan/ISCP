// The demons had captured the princess and imprisoned her in the bottom-right 
// corner of a dungeon. The dungeon consists of m x n rooms laid out in a 2D grid. 
// Our valiant knight was initially positioned in the top-left room and must fight 
// his way through dungeon to rescue the princess.

// The knight has an initial health point represented by a positive integer. If 
// at any point his health point drops to 0 or below, he dies immediately.

// Some of the rooms are guarded by demons (represented by negative integers), so 
// the knight loses health upon entering these rooms; other rooms are either empty 
// (represented as 0) or contain magic orbs that increase the knight's health 
// (represented by positive integers).

// To reach the princess as quickly as possible, the knight decides to move only 
// rightward or downward in each step.

// Return the knight's minimum initial health so that he can rescue the princess.

// Note that any room can contain threats or power-ups, even the first room the knight 
// enters and the bottom-right room where the princess is imprisoned.

// Input Format

// The First line conatains two integers denoting the value of n and m respectively 
// The Next N lines contains M integers denoting the value of the elements of matrix.

// Constraints

// m == dungeon.length
// n == dungeon[i].length
// 1 <= m, n <= 200
// -1000 <= dungeon[i][j] <= 1000
// Output Format

// Print a integer which is the answer to the question

// Sample Input 0

// 3 3
// -2 -3 3
// -5 -10 1
// 10 30 -5
// Sample Output 0

// 7
// Sample Input 1

// 4 4
// 946 655 453 72
// 73 708 387 749
// -73 491 432 683
// 109 611 490 919
// Sample Output 1

// 1

#include <iostream>
#include <vector>

using namespace std;

int calculateMinimumHP(vector<vector<int>>& dungeon) {
    if (dungeon.empty() || dungeon[0].empty()) {
        return 0;
    }

    int m = dungeon.size();
    int n = dungeon[0].size();

    // Create a DP matrix to store minimum initial health needed
    vector<vector<int>> dp(m, vector<int>(n));

    // Calculate the minimum initial health needed to reach the princess
    dp[m - 1][n - 1] = max(1, 1 - dungeon[m - 1][n - 1]);

    // Fill the DP matrix bottom-up and right-to-left
    for (int i = m - 2; i >= 0; i--) {
        dp[i][n - 1] = max(dp[i + 1][n - 1] - dungeon[i][n - 1], 1);
    }

    for (int j = n - 2; j >= 0; j--) {
        dp[m - 1][j] = max(dp[m - 1][j + 1] - dungeon[m - 1][j], 1);
    }

    for (int i = m - 2; i >= 0; i--) {
        for (int j = n - 2; j >= 0; j--) {
            int min_needed_on_exit = min(dp[i + 1][j], dp[i][j + 1]);
            dp[i][j] = max(min_needed_on_exit - dungeon[i][j], 1);
        }
    }

    return dp[0][0];
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> dungeon(n, vector<int>(m));

    // Input
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> dungeon[i][j];
        }
    }

    // Calculate and print the minimum initial health needed
    int result = calculateMinimumHP(dungeon);
    cout << result << endl;

    return 0;
}