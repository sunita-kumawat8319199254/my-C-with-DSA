
// REVERSE FOR CONDITION 1 AND 2

#include <iostream>

#include<limits.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    int ans = 0;

    
    while (n != 0)
    {
       
       
        int digit = n % 10;
        ans = ans * 10 + digit;
        n = n / 10;
        
    }

     if ((ans>INT_MAX/10)||(ans<INT_MIN/10))
        {
            cout<<"0"<<endl;
        }
        else
        {
        cout<<ans;
        }
        
    




}