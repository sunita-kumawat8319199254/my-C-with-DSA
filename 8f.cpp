// to find even odd number
#include <iostream>
using namespace std;
bool evenorodd(int m)
{
    if (m & 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int n;
    
    cout << "enter the value of n" << endl;
    cin >> n;
    
    if (evenorodd(n))
    {
       cout<<"even"<<endl;

    }
    else
    {
        cout<<"odd"<<endl;
    }
    
    
}