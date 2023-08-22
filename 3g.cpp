#include <iostream>
using namespace std;
int main()
{
    int n;

    cout << "enter the value of n you want to print pettern" << endl;
    cin >> n;
     cout<<"your pettern is"<<endl;
    int r = 1;
    while (r <= n)
    {
        int c = 1;
        while (c <= n)
        {
            cout << r;
            c = c + 1;
        }
        cout << endl;
        r = r + 1;
      
    }
     
}