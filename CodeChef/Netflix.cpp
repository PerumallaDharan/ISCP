#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int n, a, b, c, k;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c >> k;
        
        if (k <= (a + b) || k <= (c + b) || k <= (a + c))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
