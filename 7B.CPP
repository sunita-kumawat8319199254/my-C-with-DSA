#include <iostream>
using namespace std;
int main()
{

    int m;
    int n;
    cout << "enter the value of n " << endl;
    cin >> n;
    m = n;
    int mask = 0;
    int ans = 0;
    // edge case
    if (m == 0)
    {
        cout << "1" << endl;
    }
    else
    {

        while (m != 0)
        {
            mask = (mask << 1) | 1;
            m = m >> 1;
        }
        ans = (~n) & mask;
        cout << ans << endl;
    }
}