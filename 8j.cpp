// FIND AP=3*N+7;
#include <iostream>
using namespace std;
int AP(int n)
{
    int ans = 3 * n + 7;
    return ans;
}
int main()
{
    int n;
    cout << "enter the value of n" << endl;
    cin >> n;
    int ans = AP(n);
    cout << "your result is " << ans << endl;
}