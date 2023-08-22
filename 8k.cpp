// total no. of set task a and b;
#include <iostream>
using namespace std;
int bit(int n, int m)
{
    int sum = 0;
    while (n != 0)
    {
        if (n & 1)
        {
            sum++;
        }
        n=n>>1;
    }
    while (m != 0)
    {
        if (m & 1)
        {
            sum++;
        }
        m=m>>1;
    }

    return sum;
}
int main()
{
    int a, b;
    cin >> a >> b;
    int ans = bit(a, b);
    cout << "your result is  " << ans << endl;
}