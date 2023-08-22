// power of two 1st logic
/*#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << " Enter the value of n" << endl;
    cin >> n;
    bool ispowerof2= false;
    for (int i = 0; i <= n; i++)
    {

        int ans = pow(2, i);
        if (ans == n)
        {
            ispowerof2 = true;
            break;
        }
    }
    if (ispowerof2)
        {
          cout<<"true";
        }
        else
        {
            cout<<"False\n";
        }

}*/
// 2nd logic
#include <iostream>
//#include <limits.h>
#include <excpt.h>
using namespace std;
int main()
{
    int n;
    cout << " Enter the value of n" << endl;
    cin >> n;
    bool ispowerof2 = false;
    int ans = 1;
    for (int i = 0; i <= n; i++)
    {

        // if(ans<INT_MAX/2)

        ans = ans * 2;
        if (ispowerof2==n)
        {
            ispowerof2=false;
            break;
        }
        
    }
    if (ispowerof2)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false"<<endl;
    }
}
