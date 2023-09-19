// There are 8 prison cells in a row and each cell is either occupied or vacant.

// Each day, whether the cell is occupied or vacant changes according to the following rules:

// If a cell has two adjacent neighbors that are both occupied or both vacant,
// then the cell becomes occupied.
// Otherwise, it becomes vacant.
// Note : that because the prison is a row, the first and the last cells in the row
// can't have two adjacent neighbors.

// You are given an integer array cells where cells[i] == 1 if the ith cell is occupied
// and cells[i] == 0 if the ith cell is vacant, and you are given an integer n.

// Return the state of the prison after n days (i.e., n such changes described above).

// Input Format

// The First line contains an integer N
// The Second line contains 8 integers denoting the value of prison cells.
// Constraints

// cells.length == 8
// cells[i] is either 0 or 1.
// 1 <= n <= 10^9
// Output Format

// Print the 8 integers which is denoting the state of the prison after n days

// Sample Input 0

// 8 4
// 1 1 0 1 1 1 0 1
// Sample Output 0

// 0 1 0 0 1 0 0 0
// Sample Input 1

// 8 7
// 0 1 0 1 1 0 0 1
// Sample Output 1

// 0 0 1 1 0 0 0 0


#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    int cells[n1];
    
    // Read the initial state of prison cells
    for (int i = 0; i < n1; i++) {
        cin >> cells[i];
    }
    
    int temp[n1];
    for (int i = 0; i < n1; i++) {
        temp[i] = cells[i];
    }

    // Simulate changes over 'n2' days
    for (int day = 0; day < n2; day++) {
        for (int i = 0; i < n1 ; i++) {
            if (i==0 && cells[i+1]==1)
            {
                temp[i]=1;
            }
            else if (i==n1-1 && cells[i-1]==1)
            {
                temp[i]=1;
            }
            else if (cells[i-1]==cells[i+1])
            {
                temp[i]=1;
            }
            else
            {
                temp[i]=0;
            }
        }

        // Copy the updated state from 'temp' back to 'cells'
        for (int i = 0; i < n1; i++) {
            cells[i] = temp[i];
        }
    }

    // Print the final state of prison cells
    for (int i = 0; i < n1; i++) {
        cout << cells[i] << " ";
    }
    cout << endl;

    return 0;
}
