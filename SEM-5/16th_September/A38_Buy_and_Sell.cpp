// You are given an array prices where prices[i] is the price of a given stock on the ith day.

// You want to maximize your profit by choosing a single day to buy one stock and choosing a 
// different day in the future to sell that stock.

// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, 
// return 0.

// Input Format

// The first line contains a integer N denoting the size of array A. The second line contains N 
// integers donting the elements of array A.

// Constraints

// 1 <= prices.length <= 10^5
// 0 <= prices[i] <= 10^4
// Output Format

// Print the integer which is the answer to the question

// Sample Input 0

// 3
// 468 247 535
// Sample Output 0

// 288
// Sample Input 1

// 7
// 91 434 670 573 263 830 997
// Sample Output 1

// 906

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    cout<<a[n-1]-a[0]<<endl;
}