/*#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    int i = 1;
    
    while (i <= n)
    {

        int space =i-1;
        while (space)

        {
            cout <<" "<<" ";
            space = space - 1;
        }
        int j = n-i+1;
    
        while (j)
        {
            cout << i<<" ";
           
            j = j -1;
        }

        cout<< endl;
        i = i +1;
    }
}*/


#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    int i = 1;
   
    while (i <= n)
    {

        int space =i-1;
        while (space)

        {
            cout <<" "<<" ";
            space = space - 1;
        }
        int j=n-i+1;
        int  count=i;
        while (j)
        {
            cout << count<<" ";
           count=count+1;
            j = j -1;
        }

        cout<< endl;
        i = i +1;
    }
}
