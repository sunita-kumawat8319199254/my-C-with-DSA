/*#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long long int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    unsigned long long i = 0,ans = 0;

    if (n < 0)
    {
        n = pow(2, 16) + n;
    }
    cout << n << endl;
    while (n)
    {
        int lastbit = n & 1;
        ans = pow(10, i) * lastbit + n;
        n = n >> 1;
        i++;
        cout << ans << endl;
    }
    cout << ans << endl;
}*/

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    for (int i = 31; i >=0; i--)
    {
        int bit=(n>>i)&1;
        cout<<bit;
    }
    cout<<endl;
    
}