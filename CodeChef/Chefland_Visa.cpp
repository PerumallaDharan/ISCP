#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        int x1 = 0, y1 = 0, z1 = 0, x2 = 0, y2 = 0, z2 = 0;
        cin >> x1 >> x2 >> y1 >> y2 >> z1 >> z2;

        if (x2 >= x1 && y2 >= y1 && z2 <= z1)
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
