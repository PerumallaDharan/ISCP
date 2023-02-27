#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int testcases, n, m, k;
    cin >> testcases;

    for (int i = 0; i < testcases; i++)
    {
        cin >> n >> m >> k;
        
        if (n <= (m - k))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
